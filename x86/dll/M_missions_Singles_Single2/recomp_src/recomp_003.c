#include "recomp.h"

/* ___DestructExceptionObject @ 0x1124f310 (111 bytes, 46 insns) */
void f_1124f310(void) {
  FTRACE(0x1124f310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f310 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f311 mov ebp, esp */
  EBP = (ESP);
  /* 1124f313 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1124f315 push 0x1127bd20 */
  push32((uint32_t)(0x1127bd20u));
  /* 1124f31a push 0x1125544c */
  push32((uint32_t)(0x1125544cu));
  /* 1124f31f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1124f325 push eax */
  push32((uint32_t)(EAX));
  /* 1124f326 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1124f32d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124f330 push ebx */
  push32((uint32_t)(EBX));
  /* 1124f331 push esi */
  push32((uint32_t)(ESI));
  /* 1124f332 push edi */
  push32((uint32_t)(EDI));
  /* 1124f333 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1124f336 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f33a je 0x1124f385 */
  if (C.zf) goto L_1124f385;
  /* 1124f33c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f33f mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1124f342 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f346 je 0x1124f385 */
  if (C.zf) goto L_1124f385;
  /* 1124f348 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1124f34f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f352 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1124f355 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1124f358 push ecx */
  push32((uint32_t)(ECX));
  /* 1124f359 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f35c mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 1124f35f push eax */
  push32((uint32_t)(EAX));
  /* 1124f360 call 0x1124a8b0 */
  push32(0x1124f365u); f_1124a8b0();
  /* 1124f365 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1124f36c jmp 0x1124f385 */
  goto L_1124f385;
  /* 1124f36e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124f371 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124f376 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1124f378 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124f37a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1124f37c ret  */
  ESPCHK(0x1124f310u, _esp0);
  ESP += 4; return;
  /* 1124f37d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1124f380 call 0x1124f6f0 */
  push32(0x1124f385u); f_1124f6f0();
L_1124f385:;
  /* 1124f385 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124f388 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1124f38f pop edi */
  EDI = (pop32());
  /* 1124f390 pop esi */
  ESI = (pop32());
  /* 1124f391 pop ebx */
  EBX = (pop32());
  /* 1124f392 mov esp, ebp */
  ESP = (EBP);
  /* 1124f394 pop ebp */
  EBP = (pop32());
  /* 1124f395 ret  */
  ESPCHK(0x1124f310u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:___AdjustPointer @ 0x1124f3a0 (70 bytes, 27 insns) */
void f_1124f3a0(void) {
  FTRACE(0x1124f3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1124f3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124f3a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124f3a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f3aa add ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f3ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124f3af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124f3b2 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f3b6 jl 0x1124f3df */
  if ((C.sf!=C.of)) goto L_1124f3df;
  /* 1124f3b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124f3bb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1124f3be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f3c1 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1124f3c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124f3c7 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1124f3ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f3cd add ecx, dword ptr [eax + edx] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*1))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f3d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124f3d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124f3d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f3d9 add eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f3dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1124f3df:;
  /* 1124f3df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f3e2 mov esp, ebp */
  ESP = (EBP);
  /* 1124f3e4 pop ebp */
  EBP = (pop32());
  /* 1124f3e5 ret  */
  ESPCHK(0x1124f3a0u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x1124f3f0 (76 bytes, 34 insns) */
void f_1124f3f0(void) {
  FTRACE(0x1124f3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1124f3f3 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124f3f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1124f3f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1124f3f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124f3fb add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f3fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124f401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f404 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f405 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1124f408 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124f40b mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f40e call 0x1124ad1d */
  push32(0x1124f413u); f_1124ad1d();
  /* 1124f413 push esi */
  push32((uint32_t)(ESI));
  /* 1124f414 push edi */
  push32((uint32_t)(EDI));
  /* 1124f415 call eax */
  call_ind((uint32_t)(EAX), 0x1124f417u);
  /* 1124f417 pop edi */
  EDI = (pop32());
  /* 1124f418 pop esi */
  ESI = (pop32());
  /* 1124f419 mov ebx, ebp */
  EBX = (EBP);
  /* 1124f41b pop ebp */
  EBP = (pop32());
  /* 1124f41c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124f41f push ebp */
  push32((uint32_t)(EBP));
  /* 1124f420 mov ebp, ebx */
  EBP = (EBX);
  /* 1124f422 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f428 jne 0x1124f42f */
  if (!C.zf) goto L_1124f42f;
  /* 1124f42a mov ecx, 2 */
  ECX = (0x2u);
L_1124f42f:;
  /* 1124f42f push ecx */
  push32((uint32_t)(ECX));
  /* 1124f430 call 0x1124ad1d */
  push32(0x1124f435u); f_1124ad1d();
  /* 1124f435 pop ebp */
  EBP = (pop32());
  /* 1124f436 pop ecx */
  ECX = (pop32());
  /* 1124f437 pop ebx */
  EBX = (pop32());
  /* 1124f438 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1124f439 ret 0xc */
  ESPCHK(0x1124f3f0u, _esp0);
  ESP += 16; return;
}

/* FUN_1000f440 @ 0x1124f440 (130 bytes, 42 insns) */
void f_1124f440(void) {
  FTRACE(0x1124f440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f440 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f441 mov ebp, esp */
  EBP = (ESP);
  /* 1124f443 push ecx */
  push32((uint32_t)(ECX));
  /* 1124f444 call 0x1124c640 */
  push32(0x1124f449u); f_1124c640();
  /* 1124f449 call dword ptr [0x1128340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128340c))), 0x1124f44fu);
  /* 1124f44f mov dword ptr [0x1127ef20], eax */
  w32((uint32_t)(0x1127ef20), (EAX));
  /* 1124f454 cmp dword ptr [0x1127ef20], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1127ef20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f45b jne 0x1124f461 */
  if (!C.zf) goto L_1124f461;
  /* 1124f45d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124f45f jmp 0x1124f4be */
  goto L_1124f4be;
L_1124f461:;
  /* 1124f461 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 1124f463 push 0x1127bd2c */
  push32((uint32_t)(0x1127bd2cu));
  /* 1124f468 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124f46a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1124f46c push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f46e call 0x1124cc30 */
  push32(0x1124f473u); f_1124cc30();
  /* 1124f473 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f476 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124f479 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f47d je 0x1124f494 */
  if (C.zf) goto L_1124f494;
  /* 1124f47f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f482 push eax */
  push32((uint32_t)(EAX));
  /* 1124f483 mov ecx, dword ptr [0x1127ef20] */
  ECX = (r32((uint32_t)(0x1127ef20)));
  /* 1124f489 push ecx */
  push32((uint32_t)(ECX));
  /* 1124f48a call dword ptr [0x11283404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283404))), 0x1124f490u);
  /* 1124f490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124f492 jne 0x1124f498 */
  if (!C.zf) goto L_1124f498;
L_1124f494:;
  /* 1124f494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124f496 jmp 0x1124f4be */
  goto L_1124f4be;
L_1124f498:;
  /* 1124f498 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f49b push edx */
  push32((uint32_t)(EDX));
  /* 1124f49c call 0x1124f500 */
  push32(0x1124f4a1u); f_1124f500();
  /* 1124f4a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f4a4 call dword ptr [0x11283408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283408))), 0x1124f4aau);
  /* 1124f4aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f4ad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1124f4af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f4b2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1124f4b9 mov eax, 1 */
  EAX = (0x1u);
L_1124f4be:;
  /* 1124f4be mov esp, ebp */
  ESP = (EBP);
  /* 1124f4c0 pop ebp */
  EBP = (pop32());
  /* 1124f4c1 ret  */
  ESPCHK(0x1124f440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4d0 @ 0x1124f4d0 (41 bytes, 11 insns) */
void f_1124f4d0(void) {
  FTRACE(0x1124f4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1124f4d3 call 0x1124c680 */
  push32(0x1124f4d8u); f_1124c680();
  /* 1124f4d8 cmp dword ptr [0x1127ef20], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1127ef20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f4df je 0x1124f4f7 */
  if (C.zf) goto L_1124f4f7;
  /* 1124f4e1 mov eax, dword ptr [0x1127ef20] */
  EAX = (r32((uint32_t)(0x1127ef20)));
  /* 1124f4e6 push eax */
  push32((uint32_t)(EAX));
  /* 1124f4e7 call dword ptr [0x112833fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833fc))), 0x1124f4edu);
  /* 1124f4ed mov dword ptr [0x1127ef20], 0xffffffff */
  w32((uint32_t)(0x1127ef20), (0xffffffffu));
L_1124f4f7:;
  /* 1124f4f7 pop ebp */
  EBP = (pop32());
  /* 1124f4f8 ret  */
  ESPCHK(0x1124f4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f500 @ 0x1124f500 (25 bytes, 8 insns) */
void f_1124f500(void) {
  FTRACE(0x1124f500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f500 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f501 mov ebp, esp */
  EBP = (ESP);
  /* 1124f503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f506 mov dword ptr [eax + 0x50], 0x1127f240 */
  w32((uint32_t)(EAX + 0x50), (0x1127f240u));
  /* 1124f50d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f510 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 1124f517 pop ebp */
  EBP = (pop32());
  /* 1124f518 ret  */
  ESPCHK(0x1124f500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f520 @ 0x1124f520 (152 bytes, 48 insns) */
void f_1124f520(void) {
  FTRACE(0x1124f520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f520 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f521 mov ebp, esp */
  EBP = (ESP);
  /* 1124f523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124f526 call dword ptr [0x112833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833f0))), 0x1124f52cu);
  /* 1124f52c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1124f52f mov eax, dword ptr [0x1127ef20] */
  EAX = (r32((uint32_t)(0x1127ef20)));
  /* 1124f534 push eax */
  push32((uint32_t)(EAX));
  /* 1124f535 call dword ptr [0x11283400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283400))), 0x1124f53bu);
  /* 1124f53b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124f53e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f542 jne 0x1124f5a7 */
  if (!C.zf) goto L_1124f5a7;
  /* 1124f544 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 1124f549 push 0x1127bd2c */
  push32((uint32_t)(0x1127bd2cu));
  /* 1124f54e push 2 */
  push32((uint32_t)(0x2u));
  /* 1124f550 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1124f552 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f554 call 0x1124cc30 */
  push32(0x1124f559u); f_1124cc30();
  /* 1124f559 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f55c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124f55f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f563 je 0x1124f59d */
  if (C.zf) goto L_1124f59d;
  /* 1124f565 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f568 push ecx */
  push32((uint32_t)(ECX));
  /* 1124f569 mov edx, dword ptr [0x1127ef20] */
  EDX = (r32((uint32_t)(0x1127ef20)));
  /* 1124f56f push edx */
  push32((uint32_t)(EDX));
  /* 1124f570 call dword ptr [0x11283404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283404))), 0x1124f576u);
  /* 1124f576 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124f578 je 0x1124f59d */
  if (C.zf) goto L_1124f59d;
  /* 1124f57a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f57d push eax */
  push32((uint32_t)(EAX));
  /* 1124f57e call 0x1124f500 */
  push32(0x1124f583u); f_1124f500();
  /* 1124f583 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f586 call dword ptr [0x11283408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283408))), 0x1124f58cu);
  /* 1124f58c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f58f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1124f591 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f594 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1124f59b jmp 0x1124f5a7 */
  goto L_1124f5a7;
L_1124f59d:;
  /* 1124f59d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1124f59f call 0x1124b290 */
  push32(0x1124f5a4u); f_1124b290();
  /* 1124f5a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124f5a7:;
  /* 1124f5a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124f5aa push eax */
  push32((uint32_t)(EAX));
  /* 1124f5ab call dword ptr [0x112833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833f8))), 0x1124f5b1u);
  /* 1124f5b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f5b4 mov esp, ebp */
  ESP = (EBP);
  /* 1124f5b6 pop ebp */
  EBP = (pop32());
  /* 1124f5b7 ret  */
  ESPCHK(0x1124f520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5c0 @ 0x1124f5c0 (263 bytes, 86 insns) */
void f_1124f5c0(void) {
  FTRACE(0x1124f5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f5c1 mov ebp, esp */
  EBP = (ESP);
  /* 1124f5c3 cmp dword ptr [0x1127ef20], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1127ef20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f5ca je 0x1124f6c5 */
  if (C.zf) goto L_1124f6c5;
  /* 1124f5d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f5d4 jne 0x1124f5e5 */
  if (!C.zf) goto L_1124f5e5;
  /* 1124f5d6 mov eax, dword ptr [0x1127ef20] */
  EAX = (r32((uint32_t)(0x1127ef20)));
  /* 1124f5db push eax */
  push32((uint32_t)(EAX));
  /* 1124f5dc call dword ptr [0x11283400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283400))), 0x1124f5e2u);
  /* 1124f5e2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1124f5e5:;
  /* 1124f5e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f5e9 je 0x1124f6b6 */
  if (C.zf) goto L_1124f6b6;
  /* 1124f5ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f5f2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f5f6 je 0x1124f609 */
  if (C.zf) goto L_1124f609;
  /* 1124f5f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124f5fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f5fd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 1124f600 push eax */
  push32((uint32_t)(EAX));
  /* 1124f601 call 0x1124d2b0 */
  push32(0x1124f606u); f_1124d2b0();
  /* 1124f606 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124f609:;
  /* 1124f609 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f60c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f610 je 0x1124f623 */
  if (C.zf) goto L_1124f623;
  /* 1124f612 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124f614 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f617 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1124f61a push eax */
  push32((uint32_t)(EAX));
  /* 1124f61b call 0x1124d2b0 */
  push32(0x1124f620u); f_1124d2b0();
  /* 1124f620 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124f623:;
  /* 1124f623 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f626 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f62a je 0x1124f63d */
  if (C.zf) goto L_1124f63d;
  /* 1124f62c push 2 */
  push32((uint32_t)(0x2u));
  /* 1124f62e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f631 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 1124f634 push eax */
  push32((uint32_t)(EAX));
  /* 1124f635 call 0x1124d2b0 */
  push32(0x1124f63au); f_1124d2b0();
  /* 1124f63a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124f63d:;
  /* 1124f63d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f640 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f644 je 0x1124f657 */
  if (C.zf) goto L_1124f657;
  /* 1124f646 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124f648 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f64b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1124f64e push eax */
  push32((uint32_t)(EAX));
  /* 1124f64f call 0x1124d2b0 */
  push32(0x1124f654u); f_1124d2b0();
  /* 1124f654 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124f657:;
  /* 1124f657 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f65a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f65e je 0x1124f671 */
  if (C.zf) goto L_1124f671;
  /* 1124f660 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124f662 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f665 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1124f668 push eax */
  push32((uint32_t)(EAX));
  /* 1124f669 call 0x1124d2b0 */
  push32(0x1124f66eu); f_1124d2b0();
  /* 1124f66e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124f671:;
  /* 1124f671 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f674 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f678 je 0x1124f68b */
  if (C.zf) goto L_1124f68b;
  /* 1124f67a push 2 */
  push32((uint32_t)(0x2u));
  /* 1124f67c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f67f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 1124f682 push eax */
  push32((uint32_t)(EAX));
  /* 1124f683 call 0x1124d2b0 */
  push32(0x1124f688u); f_1124d2b0();
  /* 1124f688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124f68b:;
  /* 1124f68b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f68e cmp dword ptr [ecx + 0x50], 0x1127f240 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1127f240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f695 je 0x1124f6a8 */
  if (C.zf) goto L_1124f6a8;
  /* 1124f697 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124f699 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f69c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1124f69f push eax */
  push32((uint32_t)(EAX));
  /* 1124f6a0 call 0x1124d2b0 */
  push32(0x1124f6a5u); f_1124d2b0();
  /* 1124f6a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124f6a8:;
  /* 1124f6a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124f6aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f6ad push ecx */
  push32((uint32_t)(ECX));
  /* 1124f6ae call 0x1124d2b0 */
  push32(0x1124f6b3u); f_1124d2b0();
  /* 1124f6b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124f6b6:;
  /* 1124f6b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124f6b8 mov edx, dword ptr [0x1127ef20] */
  EDX = (r32((uint32_t)(0x1127ef20)));
  /* 1124f6be push edx */
  push32((uint32_t)(EDX));
  /* 1124f6bf call dword ptr [0x11283404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283404))), 0x1124f6c5u);
L_1124f6c5:;
  /* 1124f6c5 pop ebp */
  EBP = (pop32());
  /* 1124f6c6 ret  */
  ESPCHK(0x1124f5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6d0 @ 0x1124f6d0 (11 bytes, 5 insns) */
void f_1124f6d0(void) {
  FTRACE(0x1124f6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1124f6d3 call dword ptr [0x11283408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283408))), 0x1124f6d9u);
  /* 1124f6d9 pop ebp */
  EBP = (pop32());
  /* 1124f6da ret  */
  ESPCHK(0x1124f6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6e0 @ 0x1124f6e0 (11 bytes, 5 insns) */
void f_1124f6e0(void) {
  FTRACE(0x1124f6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f6e1 mov ebp, esp */
  EBP = (ESP);
  /* 1124f6e3 call dword ptr [0x112833ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833ec))), 0x1124f6e9u);
  /* 1124f6e9 pop ebp */
  EBP = (pop32());
  /* 1124f6ea ret  */
  ESPCHK(0x1124f6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6f0 @ 0x1124f6f0 (92 bytes, 29 insns) */
void f_1124f6f0(void) {
  FTRACE(0x1124f6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1124f6f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1124f6f5 push 0x1127bd38 */
  push32((uint32_t)(0x1127bd38u));
  /* 1124f6fa push 0x1125544c */
  push32((uint32_t)(0x1125544cu));
  /* 1124f6ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1124f705 push eax */
  push32((uint32_t)(EAX));
  /* 1124f706 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1124f70d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124f710 push ebx */
  push32((uint32_t)(EBX));
  /* 1124f711 push esi */
  push32((uint32_t)(ESI));
  /* 1124f712 push edi */
  push32((uint32_t)(EDI));
  /* 1124f713 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1124f716 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1124f71d call 0x1124f520 */
  push32(0x1124f722u); f_1124f520();
  /* 1124f722 cmp dword ptr [eax + 0x60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f726 je 0x1124f750 */
  if (C.zf) goto L_1124f750;
  /* 1124f728 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1124f72f call 0x1124f520 */
  push32(0x1124f734u); f_1124f520();
  /* 1124f734 call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x1124f737u);
  /* 1124f737 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1124f73e jmp 0x1124f750 */
  goto L_1124f750;
  /* 1124f740 mov eax, 1 */
  EAX = (0x1u);
  /* 1124f745 ret  */
  ESPCHK(0x1124f6f0u, _esp0);
  ESP += 4; return;
  /* 1124f746 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1124f749 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1124f750:;
  /* 1124f750 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1124f757 call 0x1124f75e */
  push32(0x1124f75cu); f_1124f75e();
  /* 1124f75c jmp 0x1124f764 */
  jmp_ind(0x1124f764u); return;
}

/* _abort @ 0x1124f75e (5 bytes, 2 insns) */
void f_1124f75e(void) {
  FTRACE(0x1124f75eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f75e call 0x11255750 */
  push32(0x1124f763u); f_11255750();
  /* 1124f763 ret  */
  ESPCHK(0x1124f75eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000f780 @ 0x1124f780 (29 bytes, 10 insns) */
void f_1124f780(void) {
  FTRACE(0x1124f780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f780 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f781 mov ebp, esp */
  EBP = (ESP);
  /* 1124f783 call 0x1124f520 */
  push32(0x1124f788u); f_1124f520();
  /* 1124f788 cmp dword ptr [eax + 0x64], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f78c je 0x1124f796 */
  if (C.zf) goto L_1124f796;
  /* 1124f78e call 0x1124f520 */
  push32(0x1124f793u); f_1124f520();
  /* 1124f793 call dword ptr [eax + 0x64] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x64))), 0x1124f796u);
L_1124f796:;
  /* 1124f796 call 0x1124f6f0 */
  push32(0x1124f79bu); f_1124f6f0();
  /* 1124f79b pop ebp */
  EBP = (pop32());
  /* 1124f79c ret  */
  ESPCHK(0x1124f780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7a0 @ 0x1124f7a0 (90 bytes, 27 insns) */
void f_1124f7a0(void) {
  FTRACE(0x1124f7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1124f7a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1124f7a5 push 0x1127bd50 */
  push32((uint32_t)(0x1127bd50u));
  /* 1124f7aa push 0x1125544c */
  push32((uint32_t)(0x1125544cu));
  /* 1124f7af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1124f7b5 push eax */
  push32((uint32_t)(EAX));
  /* 1124f7b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1124f7bd sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124f7c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1124f7c1 push esi */
  push32((uint32_t)(ESI));
  /* 1124f7c2 push edi */
  push32((uint32_t)(EDI));
  /* 1124f7c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1124f7c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1124f7cd cmp dword ptr [0x1127ef24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1127ef24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f7d4 je 0x1124f7fc */
  if (C.zf) goto L_1124f7fc;
  /* 1124f7d6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1124f7dd call dword ptr [0x1127ef24] */
  call_ind((uint32_t)(r32((uint32_t)(0x1127ef24))), 0x1124f7e3u);
  /* 1124f7e3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1124f7ea jmp 0x1124f7fc */
  goto L_1124f7fc;
  /* 1124f7ec mov eax, 1 */
  EAX = (0x1u);
  /* 1124f7f1 ret  */
  ESPCHK(0x1124f7a0u, _esp0);
  ESP += 4; return;
  /* 1124f7f2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1124f7f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1124f7fc:;
  /* 1124f7fc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1124f803 call 0x1124f80a */
  push32(0x1124f808u); f_1124f80a();
  /* 1124f808 jmp 0x1124f810 */
  f_1124f810(); return;
}

/* FUN_1000f80a @ 0x1124f80a (6 bytes, 2 insns) */
void f_1124f80a(void) {
  FTRACE(0x1124f80au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f80a call 0x1124f6f0 */
  push32(0x1124f80fu); f_1124f6f0();
  /* 1124f80f ret  */
  ESPCHK(0x1124f80au, _esp0);
  ESP += 4; return;
}

/* FUN_1000f810 @ 0x1124f810 (17 bytes, 8 insns) */
void f_1124f810(void) {
  FTRACE(0x1124f810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f810 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124f813 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1124f81a pop edi */
  EDI = (pop32());
  /* 1124f81b pop esi */
  ESI = (pop32());
  /* 1124f81c pop ebx */
  EBX = (pop32());
  /* 1124f81d mov esp, ebp */
  ESP = (EBP);
  /* 1124f81f pop ebp */
  EBP = (pop32());
  /* 1124f820 ret  */
  ESPCHK(0x1124f810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f830 @ 0x1124f830 (56 bytes, 15 insns) */
void f_1124f830(void) {
  FTRACE(0x1124f830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f830 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f831 mov ebp, esp */
  EBP = (ESP);
  /* 1124f833 cmp dword ptr [0x1127eda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1127eda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f83a je 0x1124f842 */
  if (C.zf) goto L_1124f842;
  /* 1124f83c call dword ptr [0x1127eda0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1127eda0))), 0x1124f842u);
L_1124f842:;
  /* 1124f842 push 0x1127e630 */
  push32((uint32_t)(0x1127e630u));
  /* 1124f847 push 0x1127e318 */
  push32((uint32_t)(0x1127e318u));
  /* 1124f84c call 0x1124fa00 */
  push32(0x1124f851u); f_1124fa00();
  /* 1124f851 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f854 push 0x1127e214 */
  push32((uint32_t)(0x1127e214u));
  /* 1124f859 push 0x1127e000 */
  push32((uint32_t)(0x1127e000u));
  /* 1124f85e call 0x1124fa00 */
  push32(0x1124f863u); f_1124fa00();
  /* 1124f863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f866 pop ebp */
  EBP = (pop32());
  /* 1124f867 ret  */
  ESPCHK(0x1124f830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f870 @ 0x1124f870 (21 bytes, 10 insns) */
void f_1124f870(void) {
  FTRACE(0x1124f870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f870 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f871 mov ebp, esp */
  EBP = (ESP);
  /* 1124f873 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124f875 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124f877 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f87a push eax */
  push32((uint32_t)(EAX));
  /* 1124f87b call 0x1124f8f0 */
  push32(0x1124f880u); f_1124f8f0();
  /* 1124f880 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f883 pop ebp */
  EBP = (pop32());
  /* 1124f884 ret  */
  ESPCHK(0x1124f870u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x1124f890 (21 bytes, 10 insns) */
void f_1124f890(void) {
  FTRACE(0x1124f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f890 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f891 mov ebp, esp */
  EBP = (ESP);
  /* 1124f893 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124f895 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f897 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f89a push eax */
  push32((uint32_t)(EAX));
  /* 1124f89b call 0x1124f8f0 */
  push32(0x1124f8a0u); f_1124f8f0();
  /* 1124f8a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f8a3 pop ebp */
  EBP = (pop32());
  /* 1124f8a4 ret  */
  ESPCHK(0x1124f890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8b0 @ 0x1124f8b0 (19 bytes, 9 insns) */
void f_1124f8b0(void) {
  FTRACE(0x1124f8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1124f8b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f8b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124f8b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124f8b9 call 0x1124f8f0 */
  push32(0x1124f8beu); f_1124f8f0();
  /* 1124f8be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f8c1 pop ebp */
  EBP = (pop32());
  /* 1124f8c2 ret  */
  ESPCHK(0x1124f8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8d0 @ 0x1124f8d0 (19 bytes, 9 insns) */
void f_1124f8d0(void) {
  FTRACE(0x1124f8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1124f8d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f8d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f8d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124f8d9 call 0x1124f8f0 */
  push32(0x1124f8deu); f_1124f8f0();
  /* 1124f8de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f8e1 pop ebp */
  EBP = (pop32());
  /* 1124f8e2 ret  */
  ESPCHK(0x1124f8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8f0 @ 0x1124f8f0 (227 bytes, 61 insns) */
void f_1124f8f0(void) {
  FTRACE(0x1124f8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1124f8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124f8f4 call 0x1124f9e0 */
  push32(0x1124f8f9u); f_1124f9e0();
  /* 1124f8f9 cmp dword ptr [0x112814c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112814c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f900 jne 0x1124f913 */
  if (!C.zf) goto L_1124f913;
  /* 1124f902 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f905 push eax */
  push32((uint32_t)(EAX));
  /* 1124f906 call dword ptr [0x112833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833e4))), 0x1124f90cu);
  /* 1124f90c push eax */
  push32((uint32_t)(EAX));
  /* 1124f90d call dword ptr [0x112833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833f4))), 0x1124f913u);
L_1124f913:;
  /* 1124f913 mov dword ptr [0x112814c0], 1 */
  w32((uint32_t)(0x112814c0), (0x1u));
  /* 1124f91d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 1124f920 mov byte ptr [0x112814bc], cl */
  w8((uint32_t)(0x112814bc), (CL));
  /* 1124f926 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f92a jne 0x1124f973 */
  if (!C.zf) goto L_1124f973;
  /* 1124f92c cmp dword ptr [0x11282f18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282f18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f933 je 0x1124f961 */
  if (C.zf) goto L_1124f961;
  /* 1124f935 mov edx, dword ptr [0x11282f14] */
  EDX = (r32((uint32_t)(0x11282f14)));
  /* 1124f93b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1124f93e:;
  /* 1124f93e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f941 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124f944 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124f947 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f94a cmp ecx, dword ptr [0x11282f18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11282f18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f950 jb 0x1124f961 */
  if (C.cf) goto L_1124f961;
  /* 1124f952 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f955 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f958 je 0x1124f95f */
  if (C.zf) goto L_1124f95f;
  /* 1124f95a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f95d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1124f95fu);
L_1124f95f:;
  /* 1124f95f jmp 0x1124f93e */
  goto L_1124f93e;
L_1124f961:;
  /* 1124f961 push 0x1127e93c */
  push32((uint32_t)(0x1127e93cu));
  /* 1124f966 push 0x1127e734 */
  push32((uint32_t)(0x1127e734u));
  /* 1124f96b call 0x1124fa00 */
  push32(0x1124f970u); f_1124fa00();
  /* 1124f970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124f973:;
  /* 1124f973 push 0x1127ec48 */
  push32((uint32_t)(0x1127ec48u));
  /* 1124f978 push 0x1127ea40 */
  push32((uint32_t)(0x1127ea40u));
  /* 1124f97d call 0x1124fa00 */
  push32(0x1124f982u); f_1124fa00();
  /* 1124f982 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f985 cmp dword ptr [0x112814c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112814c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f98c jne 0x1124f9ae */
  if (!C.zf) goto L_1124f9ae;
  /* 1124f98e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1124f990 call 0x1124dd30 */
  push32(0x1124f995u); f_1124dd30();
  /* 1124f995 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f998 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1124f99b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124f99d je 0x1124f9ae */
  if (C.zf) goto L_1124f9ae;
  /* 1124f99f mov dword ptr [0x112814c8], 1 */
  w32((uint32_t)(0x112814c8), (0x1u));
  /* 1124f9a9 call 0x1124e640 */
  push32(0x1124f9aeu); f_1124e640();
L_1124f9ae:;
  /* 1124f9ae cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f9b2 je 0x1124f9bb */
  if (C.zf) goto L_1124f9bb;
  /* 1124f9b4 call 0x1124f9f0 */
  push32(0x1124f9b9u); f_1124f9f0();
  /* 1124f9b9 jmp 0x1124f9cf */
  goto L_1124f9cf;
L_1124f9bb:;
  /* 1124f9bb mov dword ptr [0x112814c4], 1 */
  w32((uint32_t)(0x112814c4), (0x1u));
  /* 1124f9c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f9c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1124f9c9 call dword ptr [0x1128341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128341c))), 0x1124f9cfu);
L_1124f9cf:;
  /* 1124f9cf mov esp, ebp */
  ESP = (EBP);
  /* 1124f9d1 pop ebp */
  EBP = (pop32());
  /* 1124f9d2 ret  */
  ESPCHK(0x1124f8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9e0 @ 0x1124f9e0 (15 bytes, 7 insns) */
void f_1124f9e0(void) {
  FTRACE(0x1124f9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1124f9e3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1124f9e5 call 0x1124c720 */
  push32(0x1124f9eau); f_1124c720();
  /* 1124f9ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f9ed pop ebp */
  EBP = (pop32());
  /* 1124f9ee ret  */
  ESPCHK(0x1124f9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9f0 @ 0x1124f9f0 (15 bytes, 7 insns) */
void f_1124f9f0(void) {
  FTRACE(0x1124f9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1124f9f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1124f9f5 call 0x1124c7c0 */
  push32(0x1124f9fau); f_1124c7c0();
  /* 1124f9fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f9fd pop ebp */
  EBP = (pop32());
  /* 1124f9fe ret  */
  ESPCHK(0x1124f9f0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x1124fa00 (37 bytes, 16 insns) */
void f_1124fa00(void) {
  FTRACE(0x1124fa00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124fa00 push ebp */
  push32((uint32_t)(EBP));
  /* 1124fa01 mov ebp, esp */
  EBP = (ESP);
L_1124fa03:;
  /* 1124fa03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124fa06 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fa09 jae 0x1124fa23 */
  if (!C.cf) goto L_1124fa23;
  /* 1124fa0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124fa0e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fa11 je 0x1124fa18 */
  if (C.zf) goto L_1124fa18;
  /* 1124fa13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124fa16 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x1124fa18u);
L_1124fa18:;
  /* 1124fa18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124fa1b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fa1e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1124fa21 jmp 0x1124fa03 */
  goto L_1124fa03;
L_1124fa23:;
  /* 1124fa23 pop ebp */
  EBP = (pop32());
  /* 1124fa24 ret  */
  ESPCHK(0x1124fa00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa30 @ 0x1124fa30 (238 bytes, 75 insns) */
void f_1124fa30(void) {
  FTRACE(0x1124fa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124fa30 push ebp */
  push32((uint32_t)(EBP));
  /* 1124fa31 mov ebp, esp */
  EBP = (ESP);
  /* 1124fa33 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124fa36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124fa39 sub eax, 0x76c */
  { uint32_t _a=(EAX),_b=(0x76cu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124fa3e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1124fa41 cmp dword ptr [ebp + 8], 0x46 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fa45 jl 0x1124fa50 */
  if ((C.sf!=C.of)) goto L_1124fa50;
  /* 1124fa47 cmp dword ptr [ebp + 8], 0x8a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fa4e jle 0x1124fa58 */
  if ((C.zf||C.sf!=C.of)) goto L_1124fa58;
L_1124fa50:;
  /* 1124fa50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124fa53 jmp 0x1124fb1a */
  goto L_1124fb1a;
L_1124fa58:;
  /* 1124fa58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124fa5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124fa5e add edx, dword ptr [ecx*4 + 0x1127f3ac] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x1127f3ac))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fa65 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1124fa68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124fa6b and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1124fa6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124fa70 jne 0x1124fa81 */
  if (!C.zf) goto L_1124fa81;
  /* 1124fa72 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fa76 jle 0x1124fa81 */
  if ((C.zf||C.sf!=C.of)) goto L_1124fa81;
  /* 1124fa78 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1124fa7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fa7e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1124fa81:;
  /* 1124fa81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124fa84 sub edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124fa87 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1124fa8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124fa90 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124fa93 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1124fa96 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1124fa99 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fa9b lea edx, [eax + ecx - 0x11] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x11));
  /* 1124fa9f imul edx, edx, 0x18 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x18u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1124faa2 add edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124faa5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1124faa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124faab imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1124faae add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fab1 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1124fab4 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fab7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124faba call 0x11255770 */
  push32(0x1124fabfu); f_11255770();
  /* 1124fabf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124fac2 add ecx, dword ptr [0x1127f2c8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1127f2c8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fac8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124facb mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1124face mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1124fad1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124fad4 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1124fad7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124fada sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124fadd mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1124fae0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124fae3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1124fae6 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124faea je 0x1124fb0b */
  if (C.zf) goto L_1124fb0b;
  /* 1124faec cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124faf0 jne 0x1124fb17 */
  if (!C.zf) goto L_1124fb17;
  /* 1124faf2 cmp dword ptr [0x1127f2cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1127f2cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124faf9 je 0x1124fb17 */
  if (C.zf) goto L_1124fb17;
  /* 1124fafb lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1124fafe push eax */
  push32((uint32_t)(EAX));
  /* 1124faff call 0x11255b80 */
  push32(0x1124fb04u); f_11255b80();
  /* 1124fb04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fb07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124fb09 je 0x1124fb17 */
  if (C.zf) goto L_1124fb17;
L_1124fb0b:;
  /* 1124fb0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124fb0e add ecx, dword ptr [0x1127f2d0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1127f2d0))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fb14 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1124fb17:;
  /* 1124fb17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1124fb1a:;
  /* 1124fb1a mov esp, ebp */
  ESP = (EBP);
  /* 1124fb1c pop ebp */
  EBP = (pop32());
  /* 1124fb1d ret  */
  ESPCHK(0x1124fa30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb20 @ 0x1124fb20 (804 bytes, 236 insns) */
void f_1124fb20(void) {
  FTRACE(0x1124fb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124fb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1124fb21 mov ebp, esp */
  EBP = (ESP);
  /* 1124fb23 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124fb26 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1124fb2b push 0x1127bd68 */
  push32((uint32_t)(0x1127bd68u));
  /* 1124fb30 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124fb32 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1124fb37 call 0x1124c820 */
  push32(0x1124fb3cu); f_1124c820();
  /* 1124fb3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fb3f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1124fb42 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fb46 jne 0x1124fb52 */
  if (!C.zf) goto L_1124fb52;
  /* 1124fb48 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1124fb4a call 0x1124b290 */
  push32(0x1124fb4fu); f_1124b290();
  /* 1124fb4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124fb52:;
  /* 1124fb52 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fb55 mov dword ptr [0x11282dc0], eax */
  w32((uint32_t)(0x11282dc0), (EAX));
  /* 1124fb5a mov dword ptr [0x11282efc], 0x20 */
  w32((uint32_t)(0x11282efc), (0x20u));
  /* 1124fb64 jmp 0x1124fb6f */
  goto L_1124fb6f;
L_1124fb66:;
  /* 1124fb66 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fb69 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fb6c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1124fb6f:;
  /* 1124fb6f mov edx, dword ptr [0x11282dc0] */
  EDX = (r32((uint32_t)(0x11282dc0)));
  /* 1124fb75 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fb7b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fb7e jae 0x1124fba3 */
  if (!C.cf) goto L_1124fba3;
  /* 1124fb80 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fb83 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1124fb87 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fb8a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1124fb90 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fb93 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1124fb97 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fb9a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1124fba1 jmp 0x1124fb66 */
  goto L_1124fb66;
L_1124fba3:;
  /* 1124fba3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1124fba6 push ecx */
  push32((uint32_t)(ECX));
  /* 1124fba7 call dword ptr [0x112833d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833d8))), 0x1124fbadu);
  /* 1124fbad mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 1124fbb0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124fbb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124fbb8 je 0x1124fd45 */
  if (C.zf) goto L_1124fd45;
  /* 1124fbbe cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fbc2 je 0x1124fd45 */
  if (C.zf) goto L_1124fd45;
  /* 1124fbc8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1124fbcb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1124fbcd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 1124fbd0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1124fbd3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fbd6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1124fbd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124fbdc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fbdf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 1124fbe2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fbe9 jge 0x1124fbf3 */
  if ((C.sf==C.of)) goto L_1124fbf3;
  /* 1124fbeb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1124fbee mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 1124fbf1 jmp 0x1124fbfa */
  goto L_1124fbfa;
L_1124fbf3:;
  /* 1124fbf3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1124fbfa:;
  /* 1124fbfa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1124fbfd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1124fc00 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 1124fc07 jmp 0x1124fc12 */
  goto L_1124fc12;
L_1124fc09:;
  /* 1124fc09 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1124fc0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fc0f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_1124fc12:;
  /* 1124fc12 mov ecx, dword ptr [0x11282efc] */
  ECX = (r32((uint32_t)(0x11282efc)));
  /* 1124fc18 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fc1b jge 0x1124fcb2 */
  if ((C.sf==C.of)) goto L_1124fcb2;
  /* 1124fc21 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1124fc26 push 0x1127bd68 */
  push32((uint32_t)(0x1127bd68u));
  /* 1124fc2b push 2 */
  push32((uint32_t)(0x2u));
  /* 1124fc2d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1124fc32 call 0x1124c820 */
  push32(0x1124fc37u); f_1124c820();
  /* 1124fc37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fc3a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1124fc3d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fc41 jne 0x1124fc4e */
  if (!C.zf) goto L_1124fc4e;
  /* 1124fc43 mov edx, dword ptr [0x11282efc] */
  EDX = (r32((uint32_t)(0x11282efc)));
  /* 1124fc49 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1124fc4c jmp 0x1124fcb2 */
  goto L_1124fcb2;
L_1124fc4e:;
  /* 1124fc4e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1124fc51 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fc54 mov dword ptr [eax*4 + 0x11282dc0], ecx */
  w32((uint32_t)(EAX*4 + 0x11282dc0), (ECX));
  /* 1124fc5b mov edx, dword ptr [0x11282efc] */
  EDX = (r32((uint32_t)(0x11282efc)));
  /* 1124fc61 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fc64 mov dword ptr [0x11282efc], edx */
  w32((uint32_t)(0x11282efc), (EDX));
  /* 1124fc6a jmp 0x1124fc75 */
  goto L_1124fc75;
L_1124fc6c:;
  /* 1124fc6c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fc6f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fc72 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_1124fc75:;
  /* 1124fc75 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1124fc78 mov edx, dword ptr [ecx*4 + 0x11282dc0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11282dc0)));
  /* 1124fc7f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fc85 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fc88 jae 0x1124fcad */
  if (!C.cf) goto L_1124fcad;
  /* 1124fc8a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fc8d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1124fc91 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fc94 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1124fc9a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fc9d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1124fca1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fca4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1124fcab jmp 0x1124fc6c */
  goto L_1124fc6c;
L_1124fcad:;
  /* 1124fcad jmp 0x1124fc09 */
  goto L_1124fc09;
L_1124fcb2:;
  /* 1124fcb2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1124fcb9 jmp 0x1124fcd6 */
  goto L_1124fcd6;
L_1124fcbb:;
  /* 1124fcbb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1124fcbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fcc1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 1124fcc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124fcc7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fcca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1124fccd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 1124fcd0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fcd3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_1124fcd6:;
  /* 1124fcd6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1124fcd9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fcdc jge 0x1124fd45 */
  if ((C.sf==C.of)) goto L_1124fd45;
  /* 1124fcde mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 1124fce1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fce4 je 0x1124fd40 */
  if (C.zf) goto L_1124fd40;
  /* 1124fce6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124fce9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1124fcec and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1124fcef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124fcf1 je 0x1124fd40 */
  if (C.zf) goto L_1124fd40;
  /* 1124fcf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124fcf6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1124fcf9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1124fcfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124fcfe jne 0x1124fd10 */
  if (!C.zf) goto L_1124fd10;
  /* 1124fd00 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 1124fd03 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1124fd05 push edx */
  push32((uint32_t)(EDX));
  /* 1124fd06 call dword ptr [0x112833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833e8))), 0x1124fd0cu);
  /* 1124fd0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124fd0e je 0x1124fd40 */
  if (C.zf) goto L_1124fd40;
L_1124fd10:;
  /* 1124fd10 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 1124fd13 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1124fd16 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1124fd19 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1124fd1c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1124fd1f mov edx, dword ptr [eax*4 + 0x11282dc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11282dc0)));
  /* 1124fd26 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fd28 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1124fd2b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fd2e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 1124fd31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1124fd33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1124fd35 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fd38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124fd3b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1124fd3d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_1124fd40:;
  /* 1124fd40 jmp 0x1124fcbb */
  goto L_1124fcbb;
L_1124fd45:;
  /* 1124fd45 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1124fd4c jmp 0x1124fd57 */
  goto L_1124fd57;
L_1124fd4e:;
  /* 1124fd4e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 1124fd51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fd54 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_1124fd57:;
  /* 1124fd57 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fd5b jge 0x1124fe34 */
  if ((C.sf==C.of)) goto L_1124fe34;
  /* 1124fd61 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1124fd64 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1124fd67 mov edx, dword ptr [0x11282dc0] */
  EDX = (r32((uint32_t)(0x11282dc0)));
  /* 1124fd6d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fd6f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1124fd72 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fd75 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fd78 jne 0x1124fe20 */
  if (!C.zf) goto L_1124fe20;
  /* 1124fd7e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fd81 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 1124fd85 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fd89 jne 0x1124fd94 */
  if (!C.zf) goto L_1124fd94;
  /* 1124fd8b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 1124fd92 jmp 0x1124fda4 */
  goto L_1124fda4;
L_1124fd94:;
  /* 1124fd94 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 1124fd97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124fd9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1124fd9c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124fd9e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fda1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_1124fda4:;
  /* 1124fda4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 1124fda7 push eax */
  push32((uint32_t)(EAX));
  /* 1124fda8 call dword ptr [0x11283334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283334))), 0x1124fdaeu);
  /* 1124fdae mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 1124fdb1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fdb5 je 0x1124fe0f */
  if (C.zf) goto L_1124fe0f;
  /* 1124fdb7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1124fdba push ecx */
  push32((uint32_t)(ECX));
  /* 1124fdbb call dword ptr [0x112833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833e8))), 0x1124fdc1u);
  /* 1124fdc1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1124fdc4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fdc8 je 0x1124fe0f */
  if (C.zf) goto L_1124fe0f;
  /* 1124fdca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fdcd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1124fdd0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1124fdd2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 1124fdd5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124fddb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fdde jne 0x1124fdf0 */
  if (!C.zf) goto L_1124fdf0;
  /* 1124fde0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fde3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1124fde6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1124fde8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fdeb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1124fdee jmp 0x1124fe0d */
  goto L_1124fe0d;
L_1124fdf0:;
  /* 1124fdf0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 1124fdf3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124fdf9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fdfc jne 0x1124fe0d */
  if (!C.zf) goto L_1124fe0d;
  /* 1124fdfe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fe01 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1124fe04 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 1124fe07 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fe0a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1124fe0d:;
  /* 1124fe0d jmp 0x1124fe1e */
  goto L_1124fe1e;
L_1124fe0f:;
  /* 1124fe0f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fe12 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1124fe15 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1124fe18 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fe1b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1124fe1e:;
  /* 1124fe1e jmp 0x1124fe2f */
  goto L_1124fe2f;
L_1124fe20:;
  /* 1124fe20 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fe23 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1124fe26 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 1124fe29 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124fe2c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1124fe2f:;
  /* 1124fe2f jmp 0x1124fd4e */
  goto L_1124fd4e;
L_1124fe34:;
  /* 1124fe34 mov eax, dword ptr [0x11282efc] */
  EAX = (r32((uint32_t)(0x11282efc)));
  /* 1124fe39 push eax */
  push32((uint32_t)(EAX));
  /* 1124fe3a call dword ptr [0x112833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833e0))), 0x1124fe40u);
  /* 1124fe40 mov esp, ebp */
  ESP = (EBP);
  /* 1124fe42 pop ebp */
  EBP = (pop32());
  /* 1124fe43 ret  */
  ESPCHK(0x1124fb20u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x1124fe50 (155 bytes, 45 insns) */
void f_1124fe50(void) {
  FTRACE(0x1124fe50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124fe50 push ebp */
  push32((uint32_t)(EBP));
  /* 1124fe51 mov ebp, esp */
  EBP = (ESP);
  /* 1124fe53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124fe56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1124fe5d jmp 0x1124fe68 */
  goto L_1124fe68;
L_1124fe5f:;
  /* 1124fe5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124fe62 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fe65 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1124fe68:;
  /* 1124fe68 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fe6c jge 0x1124fee7 */
  if ((C.sf==C.of)) goto L_1124fee7;
  /* 1124fe6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124fe71 cmp dword ptr [ecx*4 + 0x11282dc0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11282dc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fe79 je 0x1124fee2 */
  if (C.zf) goto L_1124fee2;
  /* 1124fe7b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124fe7e mov eax, dword ptr [edx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11282dc0)));
  /* 1124fe85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124fe88 jmp 0x1124fe93 */
  goto L_1124fe93;
L_1124fe8a:;
  /* 1124fe8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124fe8d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fe90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1124fe93:;
  /* 1124fe93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124fe96 mov eax, dword ptr [edx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11282dc0)));
  /* 1124fe9d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fea2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fea5 jae 0x1124febf */
  if (!C.cf) goto L_1124febf;
  /* 1124fea7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124feaa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124feae je 0x1124febd */
  if (C.zf) goto L_1124febd;
  /* 1124feb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124feb3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124feb6 push edx */
  push32((uint32_t)(EDX));
  /* 1124feb7 call dword ptr [0x11283428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283428))), 0x1124febdu);
L_1124febd:;
  /* 1124febd jmp 0x1124fe8a */
  goto L_1124fe8a;
L_1124febf:;
  /* 1124febf push 2 */
  push32((uint32_t)(0x2u));
  /* 1124fec1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124fec4 mov ecx, dword ptr [eax*4 + 0x11282dc0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11282dc0)));
  /* 1124fecb push ecx */
  push32((uint32_t)(ECX));
  /* 1124fecc call 0x1124d2b0 */
  push32(0x1124fed1u); f_1124d2b0();
  /* 1124fed1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fed4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124fed7 mov dword ptr [edx*4 + 0x11282dc0], 0 */
  w32((uint32_t)(EDX*4 + 0x11282dc0), (0x0u));
L_1124fee2:;
  /* 1124fee2 jmp 0x1124fe5f */
  goto L_1124fe5f;
L_1124fee7:;
  /* 1124fee7 mov esp, ebp */
  ESP = (EBP);
  /* 1124fee9 pop ebp */
  EBP = (pop32());
  /* 1124feea ret  */
  ESPCHK(0x1124fe50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fef0 @ 0x1124fef0 (329 bytes, 102 insns) */
void f_1124fef0(void) {
  FTRACE(0x1124fef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124fef0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124fef1 mov ebp, esp */
  EBP = (ESP);
  /* 1124fef3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124fef6 cmp dword ptr [0x11282f10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282f10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124fefd jne 0x1124ff04 */
  if (!C.zf) goto L_1124ff04;
  /* 1124feff call 0x11256890 */
  push32(0x1124ff04u); f_11256890();
L_1124ff04:;
  /* 1124ff04 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1124ff0b mov eax, dword ptr [0x112813fc] */
  EAX = (r32((uint32_t)(0x112813fc)));
  /* 1124ff10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1124ff13:;
  /* 1124ff13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ff16 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1124ff19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124ff1b je 0x1124ff49 */
  if (C.zf) goto L_1124ff49;
  /* 1124ff1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ff20 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1124ff23 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ff26 je 0x1124ff31 */
  if (C.zf) goto L_1124ff31;
  /* 1124ff28 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124ff2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ff2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1124ff31:;
  /* 1124ff31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ff34 push eax */
  push32((uint32_t)(EAX));
  /* 1124ff35 call 0x11250db0 */
  push32(0x1124ff3au); f_11250db0();
  /* 1124ff3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ff3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ff40 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1124ff44 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1124ff47 jmp 0x1124ff13 */
  goto L_1124ff13;
L_1124ff49:;
  /* 1124ff49 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1124ff4b push 0x1127bd74 */
  push32((uint32_t)(0x1127bd74u));
  /* 1124ff50 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124ff52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124ff55 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1124ff5c push ecx */
  push32((uint32_t)(ECX));
  /* 1124ff5d call 0x1124c820 */
  push32(0x1124ff62u); f_1124c820();
  /* 1124ff62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ff65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1124ff68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124ff6b mov dword ptr [0x112814a4], edx */
  w32((uint32_t)(0x112814a4), (EDX));
  /* 1124ff71 cmp dword ptr [0x112814a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112814a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ff78 jne 0x1124ff84 */
  if (!C.zf) goto L_1124ff84;
  /* 1124ff7a push 9 */
  push32((uint32_t)(0x9u));
  /* 1124ff7c call 0x1124b290 */
  push32(0x1124ff81u); f_1124b290();
  /* 1124ff81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124ff84:;
  /* 1124ff84 mov eax, dword ptr [0x112813fc] */
  EAX = (r32((uint32_t)(0x112813fc)));
  /* 1124ff89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124ff8c jmp 0x1124ff97 */
  goto L_1124ff97;
L_1124ff8e:;
  /* 1124ff8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ff91 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ff94 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1124ff97:;
  /* 1124ff97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ff9a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1124ff9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124ff9f je 0x11250007 */
  if (C.zf) goto L_11250007;
  /* 1124ffa1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ffa4 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ffa5 call 0x11250db0 */
  push32(0x1124ffaau); f_11250db0();
  /* 1124ffaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ffad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ffb0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1124ffb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ffb6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1124ffb9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ffbc je 0x11250005 */
  if (C.zf) goto L_11250005;
  /* 1124ffbe push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1124ffc0 push 0x1127bd74 */
  push32((uint32_t)(0x1127bd74u));
  /* 1124ffc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124ffc7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124ffca push ecx */
  push32((uint32_t)(ECX));
  /* 1124ffcb call 0x1124c820 */
  push32(0x1124ffd0u); f_1124c820();
  /* 1124ffd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ffd3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124ffd6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1124ffd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124ffdb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ffde jne 0x1124ffea */
  if (!C.zf) goto L_1124ffea;
  /* 1124ffe0 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124ffe2 call 0x1124b290 */
  push32(0x1124ffe7u); f_1124b290();
  /* 1124ffe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124ffea:;
  /* 1124ffea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ffed push ecx */
  push32((uint32_t)(ECX));
  /* 1124ffee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124fff1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1124fff3 push eax */
  push32((uint32_t)(EAX));
  /* 1124fff4 call 0x11250f30 */
  push32(0x1124fff9u); f_11250f30();
  /* 1124fff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124fffc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124ffff add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250002 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11250005:;
  /* 11250005 jmp 0x1124ff8e */
  goto L_1124ff8e;
L_11250007:;
  /* 11250007 push 2 */
  push32((uint32_t)(0x2u));
  /* 11250009 mov edx, dword ptr [0x112813fc] */
  EDX = (r32((uint32_t)(0x112813fc)));
  /* 1125000f push edx */
  push32((uint32_t)(EDX));
  /* 11250010 call 0x1124d2b0 */
  push32(0x11250015u); f_1124d2b0();
  /* 11250015 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250018 mov dword ptr [0x112813fc], 0 */
  w32((uint32_t)(0x112813fc), (0x0u));
  /* 11250022 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11250025 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1125002b mov dword ptr [0x11282f00], 1 */
  w32((uint32_t)(0x11282f00), (0x1u));
  /* 11250035 mov esp, ebp */
  ESP = (EBP);
  /* 11250037 pop ebp */
  EBP = (pop32());
  /* 11250038 ret  */
  ESPCHK(0x1124fef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010040 @ 0x11250040 (216 bytes, 69 insns) */
void f_11250040(void) {
  FTRACE(0x11250040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250040 push ebp */
  push32((uint32_t)(EBP));
  /* 11250041 mov ebp, esp */
  EBP = (ESP);
  /* 11250043 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250046 cmp dword ptr [0x11282f10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282f10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125004d jne 0x11250054 */
  if (!C.zf) goto L_11250054;
  /* 1125004f call 0x11256890 */
  push32(0x11250054u); f_11256890();
L_11250054:;
  /* 11250054 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11250059 push 0x112814cc */
  push32((uint32_t)(0x112814ccu));
  /* 1125005e push 0 */
  push32((uint32_t)(0x0u));
  /* 11250060 call dword ptr [0x11283464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283464))), 0x11250066u);
  /* 11250066 mov dword ptr [0x112814b4], 0x112814cc */
  w32((uint32_t)(0x112814b4), (0x112814ccu));
  /* 11250070 mov eax, dword ptr [0x11282f34] */
  EAX = (r32((uint32_t)(0x11282f34)));
  /* 11250075 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11250078 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125007a jne 0x11250087 */
  if (!C.zf) goto L_11250087;
  /* 1125007c mov edx, dword ptr [0x112814b4] */
  EDX = (r32((uint32_t)(0x112814b4)));
  /* 11250082 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11250085 jmp 0x1125008f */
  goto L_1125008f;
L_11250087:;
  /* 11250087 mov eax, dword ptr [0x11282f34] */
  EAX = (r32((uint32_t)(0x11282f34)));
  /* 1125008c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1125008f:;
  /* 1125008f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11250092 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11250095 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11250098 push edx */
  push32((uint32_t)(EDX));
  /* 11250099 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1125009c push eax */
  push32((uint32_t)(EAX));
  /* 1125009d push 0 */
  push32((uint32_t)(0x0u));
  /* 1125009f push 0 */
  push32((uint32_t)(0x0u));
  /* 112500a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112500a4 push ecx */
  push32((uint32_t)(ECX));
  /* 112500a5 call 0x11250120 */
  push32(0x112500aau); f_11250120();
  /* 112500aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112500ad push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112500b2 push 0x1127bd80 */
  push32((uint32_t)(0x1127bd80u));
  /* 112500b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112500b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112500bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112500bf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 112500c2 push ecx */
  push32((uint32_t)(ECX));
  /* 112500c3 call 0x1124c820 */
  push32(0x112500c8u); f_1124c820();
  /* 112500c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112500cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112500ce cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112500d2 jne 0x112500de */
  if (!C.zf) goto L_112500de;
  /* 112500d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 112500d6 call 0x1124b290 */
  push32(0x112500dbu); f_1124b290();
  /* 112500db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112500de:;
  /* 112500de lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 112500e1 push edx */
  push32((uint32_t)(EDX));
  /* 112500e2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 112500e5 push eax */
  push32((uint32_t)(EAX));
  /* 112500e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112500e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112500ec lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 112500ef push eax */
  push32((uint32_t)(EAX));
  /* 112500f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112500f3 push ecx */
  push32((uint32_t)(ECX));
  /* 112500f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112500f7 push edx */
  push32((uint32_t)(EDX));
  /* 112500f8 call 0x11250120 */
  push32(0x112500fdu); f_11250120();
  /* 112500fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250100 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11250103 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250106 mov dword ptr [0x11281498], eax */
  w32((uint32_t)(0x11281498), (EAX));
  /* 1125010b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125010e mov dword ptr [0x1128149c], ecx */
  w32((uint32_t)(0x1128149c), (ECX));
  /* 11250114 mov esp, ebp */
  ESP = (EBP);
  /* 11250116 pop ebp */
  EBP = (pop32());
  /* 11250117 ret  */
  ESPCHK(0x11250040u, _esp0);
  ESP += 4; return;
}

/* FUN_10010120 @ 0x11250120 (1060 bytes, 360 insns) */
void f_11250120(void) {
  FTRACE(0x11250120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250120 push ebp */
  push32((uint32_t)(EBP));
  /* 11250121 mov ebp, esp */
  EBP = (ESP);
  /* 11250123 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250126 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11250129 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1125012f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11250132 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11250138 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125013b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125013e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250142 je 0x11250155 */
  if (C.zf) goto L_11250155;
  /* 11250144 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250147 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125014a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1125014c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125014f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250152 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11250155:;
  /* 11250155 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250158 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125015b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125015e jne 0x1125022d */
  if (!C.zf) goto L_1125022d;
L_11250164:;
  /* 11250164 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250167 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125016a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125016d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250170 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11250173 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250176 je 0x112501f2 */
  if (C.zf) goto L_112501f2;
  /* 11250178 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125017b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1125017e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11250180 je 0x112501f2 */
  if (C.zf) goto L_112501f2;
  /* 11250182 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250185 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11250187 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11250189 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125018b mov al, byte ptr [edx + 0x11282c81] */
  AL = (r8((uint32_t)(EDX + 0x11282c81)));
  /* 11250191 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11250194 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11250196 je 0x112501c7 */
  if (C.zf) goto L_112501c7;
  /* 11250198 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125019b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125019d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112501a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112501a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112501a5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112501a9 je 0x112501c7 */
  if (C.zf) goto L_112501c7;
  /* 112501ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112501ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112501b1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112501b3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112501b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112501b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112501bb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 112501be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112501c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112501c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112501c7:;
  /* 112501c7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112501ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112501cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112501cf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112501d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112501d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112501d8 je 0x112501ed */
  if (C.zf) goto L_112501ed;
  /* 112501da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112501dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112501e0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112501e2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112501e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112501e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112501ea mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_112501ed:;
  /* 112501ed jmp 0x11250164 */
  goto L_11250164;
L_112501f2:;
  /* 112501f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112501f5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112501f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112501fa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112501fd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112501ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250203 je 0x11250214 */
  if (C.zf) goto L_11250214;
  /* 11250205 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250208 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1125020b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125020e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250211 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11250214:;
  /* 11250214 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250217 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125021a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125021d jne 0x11250228 */
  if (!C.zf) goto L_11250228;
  /* 1125021f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250222 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250225 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11250228:;
  /* 11250228 jmp 0x112502fc */
  goto L_112502fc;
L_1125022d:;
  /* 1125022d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11250230 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11250232 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250235 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11250238 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1125023a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125023e je 0x11250253 */
  if (C.zf) goto L_11250253;
  /* 11250240 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250243 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250246 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11250248 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1125024a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125024d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250250 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11250253:;
  /* 11250253 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250256 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11250258 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1125025b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125025e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250261 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11250264 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11250267 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125026d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125026f mov dl, byte ptr [ecx + 0x11282c81] */
  DL = (r8((uint32_t)(ECX + 0x11282c81)));
  /* 11250275 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11250278 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125027a je 0x112502ab */
  if (C.zf) goto L_112502ab;
  /* 1125027c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125027f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11250281 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250284 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11250287 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11250289 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125028d je 0x112502a2 */
  if (C.zf) goto L_112502a2;
  /* 1125028f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250292 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250295 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11250297 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11250299 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125029c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125029f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_112502a2:;
  /* 112502a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112502a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112502a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112502ab:;
  /* 112502ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112502ae and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112502b4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112502b7 je 0x112502d7 */
  if (C.zf) goto L_112502d7;
  /* 112502b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112502bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112502c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112502c3 je 0x112502d7 */
  if (C.zf) goto L_112502d7;
  /* 112502c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112502c8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112502ce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112502d1 jne 0x1125022d */
  if (!C.zf) goto L_1125022d;
L_112502d7:;
  /* 112502d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112502da and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112502e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112502e2 jne 0x112502ef */
  if (!C.zf) goto L_112502ef;
  /* 112502e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112502e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112502ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112502ed jmp 0x112502fc */
  goto L_112502fc;
L_112502ef:;
  /* 112502ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112502f3 je 0x112502fc */
  if (C.zf) goto L_112502fc;
  /* 112502f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112502f8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_112502fc:;
  /* 112502fc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11250303:;
  /* 11250303 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250306 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11250309 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125030b je 0x1125032e */
  if (C.zf) goto L_1125032e;
L_1125030d:;
  /* 1125030d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250310 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11250313 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250316 je 0x11250323 */
  if (C.zf) goto L_11250323;
  /* 11250318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125031b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125031e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250321 jne 0x1125032e */
  if (!C.zf) goto L_1125032e;
L_11250323:;
  /* 11250323 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250326 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250329 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125032c jmp 0x1125030d */
  goto L_1125030d;
L_1125032e:;
  /* 1125032e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250331 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11250334 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11250336 jne 0x1125033d */
  if (!C.zf) goto L_1125033d;
  /* 11250338 jmp 0x1125051b */
  goto L_1125051b;
L_1125033d:;
  /* 1125033d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250341 je 0x11250354 */
  if (C.zf) goto L_11250354;
  /* 11250343 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250346 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250349 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1125034b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125034e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250351 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11250354:;
  /* 11250354 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11250357 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11250359 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125035c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125035f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11250361:;
  /* 11250361 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11250368 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1125036f:;
  /* 1125036f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250372 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11250375 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250378 jne 0x1125038e */
  if (!C.zf) goto L_1125038e;
  /* 1125037a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125037d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250380 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11250383 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11250386 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250389 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1125038c jmp 0x1125036f */
  goto L_1125036f;
L_1125038e:;
  /* 1125038e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250391 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11250394 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250397 jne 0x112503ea */
  if (!C.zf) goto L_112503ea;
  /* 11250399 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125039c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125039e mov ecx, 2 */
  ECX = (0x2u);
  /* 112503a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112503a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112503a7 jne 0x112503e2 */
  if (!C.zf) goto L_112503e2;
  /* 112503a9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112503ad je 0x112503cf */
  if (C.zf) goto L_112503cf;
  /* 112503af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112503b2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 112503b6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112503b9 jne 0x112503c6 */
  if (!C.zf) goto L_112503c6;
  /* 112503bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112503be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112503c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112503c4 jmp 0x112503cd */
  goto L_112503cd;
L_112503c6:;
  /* 112503c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_112503cd:;
  /* 112503cd jmp 0x112503d6 */
  goto L_112503d6;
L_112503cf:;
  /* 112503cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_112503d6:;
  /* 112503d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112503d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112503dc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 112503df mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_112503e2:;
  /* 112503e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112503e5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112503e7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_112503ea:;
  /* 112503ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112503ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112503f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112503f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 112503f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112503f8 je 0x1125041e */
  if (C.zf) goto L_1125041e;
  /* 112503fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112503fe je 0x1125040f */
  if (C.zf) goto L_1125040f;
  /* 11250400 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250403 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11250406 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250409 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125040c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1125040f:;
  /* 1125040f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11250412 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11250414 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250417 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125041a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1125041c jmp 0x112503ea */
  goto L_112503ea;
L_1125041e:;
  /* 1125041e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250421 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11250424 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11250426 je 0x11250444 */
  if (C.zf) goto L_11250444;
  /* 11250428 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125042c jne 0x11250449 */
  if (!C.zf) goto L_11250449;
  /* 1125042e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250431 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11250434 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250437 je 0x11250444 */
  if (C.zf) goto L_11250444;
  /* 11250439 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125043c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125043f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250442 jne 0x11250449 */
  if (!C.zf) goto L_11250449;
L_11250444:;
  /* 11250444 jmp 0x112504f4 */
  goto L_112504f4;
L_11250449:;
  /* 11250449 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125044d je 0x112504e6 */
  if (C.zf) goto L_112504e6;
  /* 11250453 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250457 je 0x112504ad */
  if (C.zf) goto L_112504ad;
  /* 11250459 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125045c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125045e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11250460 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11250462 mov cl, byte ptr [eax + 0x11282c81] */
  CL = (r8((uint32_t)(EAX + 0x11282c81)));
  /* 11250468 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1125046b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125046d je 0x11250498 */
  if (C.zf) goto L_11250498;
  /* 1125046f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250472 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250475 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11250477 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11250479 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125047c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125047f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11250482 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250485 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250488 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125048b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125048e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11250490 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250493 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11250496 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11250498:;
  /* 11250498 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125049b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125049e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112504a0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112504a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112504a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112504a8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 112504ab jmp 0x112504d9 */
  goto L_112504d9;
L_112504ad:;
  /* 112504ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112504b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112504b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112504b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112504b6 mov cl, byte ptr [eax + 0x11282c81] */
  CL = (r8((uint32_t)(EAX + 0x11282c81)));
  /* 112504bc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 112504bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112504c1 je 0x112504d9 */
  if (C.zf) goto L_112504d9;
  /* 112504c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112504c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112504c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112504cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112504cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112504d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112504d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112504d7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112504d9:;
  /* 112504d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112504dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112504de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112504e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112504e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112504e6:;
  /* 112504e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112504e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112504ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112504ef jmp 0x11250361 */
  goto L_11250361;
L_112504f4:;
  /* 112504f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112504f8 je 0x11250509 */
  if (C.zf) goto L_11250509;
  /* 112504fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112504fd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11250500 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250503 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250506 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11250509:;
  /* 11250509 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125050c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125050e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250511 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11250514 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11250516 jmp 0x11250303 */
  goto L_11250303;
L_1125051b:;
  /* 1125051b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125051f je 0x11250533 */
  if (C.zf) goto L_11250533;
  /* 11250521 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250524 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1125052a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125052d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250530 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11250533:;
  /* 11250533 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11250536 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11250538 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125053b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125053e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11250540 mov esp, ebp */
  ESP = (EBP);
  /* 11250542 pop ebp */
  EBP = (pop32());
  /* 11250543 ret  */
  ESPCHK(0x11250120u, _esp0);
  ESP += 4; return;
}

/* FUN_10010550 @ 0x11250550 (537 bytes, 173 insns) */
void f_11250550(void) {
  FTRACE(0x11250550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250550 push ebp */
  push32((uint32_t)(EBP));
  /* 11250551 mov ebp, esp */
  EBP = (ESP);
  /* 11250553 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250556 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1125055d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11250564 cmp dword ptr [0x112815d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112815d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125056b jne 0x112505aa */
  if (!C.zf) goto L_112505aa;
  /* 1125056d call dword ptr [0x112833d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833d0))), 0x11250573u);
  /* 11250573 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11250576 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125057a je 0x11250588 */
  if (C.zf) goto L_11250588;
  /* 1125057c mov dword ptr [0x112815d0], 1 */
  w32((uint32_t)(0x112815d0), (0x1u));
  /* 11250586 jmp 0x112505aa */
  goto L_112505aa;
L_11250588:;
  /* 11250588 call dword ptr [0x112833c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833c8))), 0x1125058eu);
  /* 1125058e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11250591 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250595 je 0x112505a3 */
  if (C.zf) goto L_112505a3;
  /* 11250597 mov dword ptr [0x112815d0], 2 */
  w32((uint32_t)(0x112815d0), (0x2u));
  /* 112505a1 jmp 0x112505aa */
  goto L_112505aa;
L_112505a3:;
  /* 112505a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112505a5 jmp 0x11250765 */
  goto L_11250765;
L_112505aa:;
  /* 112505aa cmp dword ptr [0x112815d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112815d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112505b1 jne 0x112506ae */
  if (!C.zf) goto L_112506ae;
  /* 112505b7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112505bb jne 0x112505d3 */
  if (!C.zf) goto L_112505d3;
  /* 112505bd call dword ptr [0x112833d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833d0))), 0x112505c3u);
  /* 112505c3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112505c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112505ca jne 0x112505d3 */
  if (!C.zf) goto L_112505d3;
  /* 112505cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112505ce jmp 0x11250765 */
  goto L_11250765;
L_112505d3:;
  /* 112505d3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112505d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112505d9:;
  /* 112505d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112505dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112505de mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 112505e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112505e3 je 0x11250605 */
  if (C.zf) goto L_11250605;
  /* 112505e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112505e8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112505eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112505ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112505f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112505f3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 112505f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112505f8 jne 0x11250603 */
  if (!C.zf) goto L_11250603;
  /* 112505fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112505fd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250600 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11250603:;
  /* 11250603 jmp 0x112505d9 */
  goto L_112505d9;
L_11250605:;
  /* 11250605 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11250608 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125060b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1125060d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250610 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11250613 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250615 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250617 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250619 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125061b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125061e push edx */
  push32((uint32_t)(EDX));
  /* 1125061f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11250622 push eax */
  push32((uint32_t)(EAX));
  /* 11250623 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250625 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250627 call dword ptr [0x112833cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833cc))), 0x1125062du);
  /* 1125062d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11250630 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250634 je 0x11250654 */
  if (C.zf) goto L_11250654;
  /* 11250636 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11250638 push 0x1127bd8c */
  push32((uint32_t)(0x1127bd8cu));
  /* 1125063d push 2 */
  push32((uint32_t)(0x2u));
  /* 1125063f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11250642 push ecx */
  push32((uint32_t)(ECX));
  /* 11250643 call 0x1124c820 */
  push32(0x11250648u); f_1124c820();
  /* 11250648 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125064b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1125064e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250652 jne 0x11250665 */
  if (!C.zf) goto L_11250665;
L_11250654:;
  /* 11250654 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11250657 push edx */
  push32((uint32_t)(EDX));
  /* 11250658 call dword ptr [0x112833dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833dc))), 0x1125065eu);
  /* 1125065e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11250660 jmp 0x11250765 */
  goto L_11250765;
L_11250665:;
  /* 11250665 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250667 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250669 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125066c push eax */
  push32((uint32_t)(EAX));
  /* 1125066d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11250670 push ecx */
  push32((uint32_t)(ECX));
  /* 11250671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250674 push edx */
  push32((uint32_t)(EDX));
  /* 11250675 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11250678 push eax */
  push32((uint32_t)(EAX));
  /* 11250679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125067b push 0 */
  push32((uint32_t)(0x0u));
  /* 1125067d call dword ptr [0x112833cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833cc))), 0x11250683u);
  /* 11250683 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11250685 jne 0x1125069c */
  if (!C.zf) goto L_1125069c;
  /* 11250687 push 2 */
  push32((uint32_t)(0x2u));
  /* 11250689 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125068c push ecx */
  push32((uint32_t)(ECX));
  /* 1125068d call 0x1124d2b0 */
  push32(0x11250692u); f_1124d2b0();
  /* 11250692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250695 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1125069c:;
  /* 1125069c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125069f push edx */
  push32((uint32_t)(EDX));
  /* 112506a0 call dword ptr [0x112833dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833dc))), 0x112506a6u);
  /* 112506a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112506a9 jmp 0x11250765 */
  goto L_11250765;
L_112506ae:;
  /* 112506ae cmp dword ptr [0x112815d0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x112815d0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112506b5 jne 0x11250763 */
  if (!C.zf) goto L_11250763;
  /* 112506bb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112506bf jne 0x112506d7 */
  if (!C.zf) goto L_112506d7;
  /* 112506c1 call dword ptr [0x112833c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833c8))), 0x112506c7u);
  /* 112506c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112506ca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112506ce jne 0x112506d7 */
  if (!C.zf) goto L_112506d7;
  /* 112506d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112506d2 jmp 0x11250765 */
  goto L_11250765;
L_112506d7:;
  /* 112506d7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112506da mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_112506dd:;
  /* 112506dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112506e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112506e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112506e5 je 0x11250705 */
  if (C.zf) goto L_11250705;
  /* 112506e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112506ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112506ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112506f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112506f3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112506f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112506f8 jne 0x11250703 */
  if (!C.zf) goto L_11250703;
  /* 112506fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112506fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250700 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11250703:;
  /* 11250703 jmp 0x112506dd */
  goto L_112506dd;
L_11250705:;
  /* 11250705 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11250708 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125070b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125070e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11250711 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11250716 push 0x1127bd8c */
  push32((uint32_t)(0x1127bd8cu));
  /* 1125071b push 2 */
  push32((uint32_t)(0x2u));
  /* 1125071d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11250720 push edx */
  push32((uint32_t)(EDX));
  /* 11250721 call 0x1124c820 */
  push32(0x11250726u); f_1124c820();
  /* 11250726 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250729 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1125072c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250730 jne 0x11250740 */
  if (!C.zf) goto L_11250740;
  /* 11250732 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11250735 push eax */
  push32((uint32_t)(EAX));
  /* 11250736 call dword ptr [0x112833d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833d4))), 0x1125073cu);
  /* 1125073c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125073e jmp 0x11250765 */
  goto L_11250765;
L_11250740:;
  /* 11250740 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11250743 push ecx */
  push32((uint32_t)(ECX));
  /* 11250744 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11250747 push edx */
  push32((uint32_t)(EDX));
  /* 11250748 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125074b push eax */
  push32((uint32_t)(EAX));
  /* 1125074c call 0x112568c0 */
  push32(0x11250751u); f_112568c0();
  /* 11250751 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250754 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11250757 push ecx */
  push32((uint32_t)(ECX));
  /* 11250758 call dword ptr [0x112833d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833d4))), 0x1125075eu);
  /* 1125075e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11250761 jmp 0x11250765 */
  goto L_11250765;
L_11250763:;
  /* 11250763 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11250765:;
  /* 11250765 mov esp, ebp */
  ESP = (EBP);
  /* 11250767 pop ebp */
  EBP = (pop32());
  /* 11250768 ret  */
  ESPCHK(0x11250550u, _esp0);
  ESP += 4; return;
}

/* FUN_10010770 @ 0x11250770 (77 bytes, 25 insns) */
void f_11250770(void) {
  FTRACE(0x11250770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250770 push ebp */
  push32((uint32_t)(EBP));
  /* 11250771 mov ebp, esp */
  EBP = (ESP);
  /* 11250773 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250775 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1125077a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125077c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250780 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11250783 push eax */
  push32((uint32_t)(EAX));
  /* 11250784 call dword ptr [0x112833bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833bc))), 0x1125078au);
  /* 1125078a mov dword ptr [0x11282dac], eax */
  w32((uint32_t)(0x11282dac), (EAX));
  /* 1125078f cmp dword ptr [0x11282dac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282dac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250796 jne 0x1125079c */
  if (!C.zf) goto L_1125079c;
  /* 11250798 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125079a jmp 0x112507bb */
  goto L_112507bb;
L_1125079c:;
  /* 1125079c call 0x11253520 */
  push32(0x112507a1u); f_11253520();
  /* 112507a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112507a3 jne 0x112507b6 */
  if (!C.zf) goto L_112507b6;
  /* 112507a5 mov ecx, dword ptr [0x11282dac] */
  ECX = (r32((uint32_t)(0x11282dac)));
  /* 112507ab push ecx */
  push32((uint32_t)(ECX));
  /* 112507ac call dword ptr [0x112833c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833c0))), 0x112507b2u);
  /* 112507b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112507b4 jmp 0x112507bb */
  goto L_112507bb;
L_112507b6:;
  /* 112507b6 mov eax, 1 */
  EAX = (0x1u);
L_112507bb:;
  /* 112507bb pop ebp */
  EBP = (pop32());
  /* 112507bc ret  */
  ESPCHK(0x11250770u, _esp0);
  ESP += 4; return;
}

/* FUN_100107c0 @ 0x112507c0 (156 bytes, 48 insns) */
void f_112507c0(void) {
  FTRACE(0x112507c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112507c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112507c1 mov ebp, esp */
  EBP = (ESP);
  /* 112507c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112507c6 mov eax, dword ptr [0x11282da8] */
  EAX = (r32((uint32_t)(0x11282da8)));
  /* 112507cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112507ce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112507d5 jmp 0x112507e0 */
  goto L_112507e0;
L_112507d7:;
  /* 112507d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112507da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112507dd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112507e0:;
  /* 112507e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112507e3 cmp edx, dword ptr [0x11282da4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11282da4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112507e9 jge 0x11250836 */
  if ((C.sf==C.of)) goto L_11250836;
  /* 112507eb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 112507f0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 112507f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112507f8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112507fb push ecx */
  push32((uint32_t)(ECX));
  /* 112507fc call dword ptr [0x112833b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833b4))), 0x11250802u);
  /* 11250802 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11250807 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250809 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125080c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1125080f push eax */
  push32((uint32_t)(EAX));
  /* 11250810 call dword ptr [0x112833b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833b4))), 0x11250816u);
  /* 11250816 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11250819 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1125081c push edx */
  push32((uint32_t)(EDX));
  /* 1125081d push 0 */
  push32((uint32_t)(0x0u));
  /* 1125081f mov eax, dword ptr [0x11282dac] */
  EAX = (r32((uint32_t)(0x11282dac)));
  /* 11250824 push eax */
  push32((uint32_t)(EAX));
  /* 11250825 call dword ptr [0x112833c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833c4))), 0x1125082bu);
  /* 1125082b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125082e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250831 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11250834 jmp 0x112507d7 */
  goto L_112507d7;
L_11250836:;
  /* 11250836 mov edx, dword ptr [0x11282da8] */
  EDX = (r32((uint32_t)(0x11282da8)));
  /* 1125083c push edx */
  push32((uint32_t)(EDX));
  /* 1125083d push 0 */
  push32((uint32_t)(0x0u));
  /* 1125083f mov eax, dword ptr [0x11282dac] */
  EAX = (r32((uint32_t)(0x11282dac)));
  /* 11250844 push eax */
  push32((uint32_t)(EAX));
  /* 11250845 call dword ptr [0x112833c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833c4))), 0x1125084bu);
  /* 1125084b mov ecx, dword ptr [0x11282dac] */
  ECX = (r32((uint32_t)(0x11282dac)));
  /* 11250851 push ecx */
  push32((uint32_t)(ECX));
  /* 11250852 call dword ptr [0x112833c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833c0))), 0x11250858u);
  /* 11250858 mov esp, ebp */
  ESP = (EBP);
  /* 1125085a pop ebp */
  EBP = (pop32());
  /* 1125085b ret  */
  ESPCHK(0x112507c0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11250860 (73 bytes, 19 insns) */
void f_11250860(void) {
  FTRACE(0x11250860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250860 push ebp */
  push32((uint32_t)(EBP));
  /* 11250861 mov ebp, esp */
  EBP = (ESP);
  /* 11250863 cmp dword ptr [0x11281404], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11281404))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125086a je 0x1125087e */
  if (C.zf) goto L_1125087e;
  /* 1125086c cmp dword ptr [0x11281404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250873 jne 0x112508a7 */
  if (!C.zf) goto L_112508a7;
  /* 11250875 cmp dword ptr [0x11281408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11281408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125087c jne 0x112508a7 */
  if (!C.zf) goto L_112508a7;
L_1125087e:;
  /* 1125087e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11250883 call 0x112508b0 */
  push32(0x11250888u); f_112508b0();
  /* 11250888 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125088b cmp dword ptr [0x112815d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112815d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250892 je 0x1125089a */
  if (C.zf) goto L_1125089a;
  /* 11250894 call dword ptr [0x112815d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112815d4))), 0x1125089au);
L_1125089a:;
  /* 1125089a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1125089f call 0x112508b0 */
  push32(0x112508a4u); f_112508b0();
  /* 112508a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112508a7:;
  /* 112508a7 pop ebp */
  EBP = (pop32());
  /* 112508a8 ret  */
  ESPCHK(0x11250860u, _esp0);
  ESP += 4; return;
}

/* FUN_100108b0 @ 0x112508b0 (447 bytes, 131 insns) */
void f_112508b0(void) {
  FTRACE(0x112508b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112508b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112508b1 mov ebp, esp */
  EBP = (ESP);
  /* 112508b3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112508b9 push ebx */
  push32((uint32_t)(EBX));
  /* 112508ba push esi */
  push32((uint32_t)(ESI));
  /* 112508bb push edi */
  push32((uint32_t)(EDI));
  /* 112508bc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112508c3 jmp 0x112508ce */
  goto L_112508ce;
L_112508c5:;
  /* 112508c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112508c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112508cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112508ce:;
  /* 112508ce cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112508d2 jae 0x112508e7 */
  if (!C.cf) goto L_112508e7;
  /* 112508d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112508d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112508da cmp edx, dword ptr [ecx*8 + 0x1127ef50] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1127ef50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112508e1 jne 0x112508e5 */
  if (!C.zf) goto L_112508e5;
  /* 112508e3 jmp 0x112508e7 */
  goto L_112508e7;
L_112508e5:;
  /* 112508e5 jmp 0x112508c5 */
  goto L_112508c5;
L_112508e7:;
  /* 112508e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112508ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112508ed cmp ecx, dword ptr [eax*8 + 0x1127ef50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1127ef50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112508f4 jne 0x11250a68 */
  if (!C.zf) goto L_11250a68;
  /* 112508fa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250901 je 0x11250924 */
  if (C.zf) goto L_11250924;
  /* 11250903 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11250906 mov eax, dword ptr [edx*8 + 0x1127ef54] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1127ef54)));
  /* 1125090d push eax */
  push32((uint32_t)(EAX));
  /* 1125090e push 0 */
  push32((uint32_t)(0x0u));
  /* 11250910 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250912 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250914 push 1 */
  push32((uint32_t)(0x1u));
  /* 11250916 call 0x1124b3e0 */
  push32(0x1125091bu); f_1124b3e0();
  /* 1125091b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125091e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250921 jne 0x11250924 */
  if (!C.zf) goto L_11250924;
  /* 11250923 int3  */
  x86_unimpl("int3 @ 0x11250923");
L_11250924:;
  /* 11250924 cmp dword ptr [0x11281404], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11281404))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125092b je 0x1125093f */
  if (C.zf) goto L_1125093f;
  /* 1125092d cmp dword ptr [0x11281404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250934 jne 0x11250978 */
  if (!C.zf) goto L_11250978;
  /* 11250936 cmp dword ptr [0x11281408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11281408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125093d jne 0x11250978 */
  if (!C.zf) goto L_11250978;
L_1125093f:;
  /* 1125093f push 0 */
  push32((uint32_t)(0x0u));
  /* 11250941 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11250944 push ecx */
  push32((uint32_t)(ECX));
  /* 11250945 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11250948 mov eax, dword ptr [edx*8 + 0x1127ef54] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1127ef54)));
  /* 1125094f push eax */
  push32((uint32_t)(EAX));
  /* 11250950 call 0x11250db0 */
  push32(0x11250955u); f_11250db0();
  /* 11250955 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250958 push eax */
  push32((uint32_t)(EAX));
  /* 11250959 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125095c mov edx, dword ptr [ecx*8 + 0x1127ef54] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1127ef54)));
  /* 11250963 push edx */
  push32((uint32_t)(EDX));
  /* 11250964 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11250966 call dword ptr [0x11283334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283334))), 0x1125096cu);
  /* 1125096c push eax */
  push32((uint32_t)(EAX));
  /* 1125096d call dword ptr [0x11283338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283338))), 0x11250973u);
  /* 11250973 jmp 0x11250a68 */
  goto L_11250a68;
L_11250978:;
  /* 11250978 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125097f je 0x11250a68 */
  if (C.zf) goto L_11250a68;
  /* 11250985 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1125098a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11250990 push eax */
  push32((uint32_t)(EAX));
  /* 11250991 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250993 call dword ptr [0x11283464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283464))), 0x11250999u);
  /* 11250999 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125099b jne 0x112509b1 */
  if (!C.zf) goto L_112509b1;
  /* 1125099d push 0x1127b514 */
  push32((uint32_t)(0x1127b514u));
  /* 112509a2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 112509a8 push ecx */
  push32((uint32_t)(ECX));
  /* 112509a9 call 0x11250f30 */
  push32(0x112509aeu); f_11250f30();
  /* 112509ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112509b1:;
  /* 112509b1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 112509b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112509ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112509bd push eax */
  push32((uint32_t)(EAX));
  /* 112509be call 0x11250db0 */
  push32(0x112509c3u); f_11250db0();
  /* 112509c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112509c6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112509c9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112509cc jbe 0x112509fa */
  if ((C.cf||C.zf)) goto L_112509fa;
  /* 112509ce lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 112509d4 push ecx */
  push32((uint32_t)(ECX));
  /* 112509d5 call 0x11250db0 */
  push32(0x112509dau); f_11250db0();
  /* 112509da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112509dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112509e0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 112509e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112509e7 push 3 */
  push32((uint32_t)(0x3u));
  /* 112509e9 push 0x1127b510 */
  push32((uint32_t)(0x1127b510u));
  /* 112509ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112509f1 push ecx */
  push32((uint32_t)(ECX));
  /* 112509f2 call 0x112517a0 */
  push32(0x112509f7u); f_112517a0();
  /* 112509f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112509fa:;
  /* 112509fa push 0x1127c048 */
  push32((uint32_t)(0x1127c048u));
  /* 112509ff lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11250a05 push edx */
  push32((uint32_t)(EDX));
  /* 11250a06 call 0x11250f30 */
  push32(0x11250a0bu); f_11250f30();
  /* 11250a0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250a0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11250a11 push eax */
  push32((uint32_t)(EAX));
  /* 11250a12 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11250a18 push ecx */
  push32((uint32_t)(ECX));
  /* 11250a19 call 0x11250f40 */
  push32(0x11250a1eu); f_11250f40();
  /* 11250a1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250a21 push 0x1127b488 */
  push32((uint32_t)(0x1127b488u));
  /* 11250a26 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11250a2c push edx */
  push32((uint32_t)(EDX));
  /* 11250a2d call 0x11250f40 */
  push32(0x11250a32u); f_11250f40();
  /* 11250a32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250a35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11250a38 mov ecx, dword ptr [eax*8 + 0x1127ef54] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1127ef54)));
  /* 11250a3f push ecx */
  push32((uint32_t)(ECX));
  /* 11250a40 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11250a46 push edx */
  push32((uint32_t)(EDX));
  /* 11250a47 call 0x11250f40 */
  push32(0x11250a4cu); f_11250f40();
  /* 11250a4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250a4f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11250a54 push 0x1127c020 */
  push32((uint32_t)(0x1127c020u));
  /* 11250a59 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11250a5f push eax */
  push32((uint32_t)(EAX));
  /* 11250a60 call 0x112516e0 */
  push32(0x11250a65u); f_112516e0();
  /* 11250a65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11250a68:;
  /* 11250a68 pop edi */
  EDI = (pop32());
  /* 11250a69 pop esi */
  ESI = (pop32());
  /* 11250a6a pop ebx */
  EBX = (pop32());
  /* 11250a6b mov esp, ebp */
  ESP = (EBP);
  /* 11250a6d pop ebp */
  EBP = (pop32());
  /* 11250a6e ret  */
  ESPCHK(0x112508b0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11250a70 (80 bytes, 27 insns) */
void f_11250a70(void) {
  FTRACE(0x11250a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11250a71 mov ebp, esp */
  EBP = (ESP);
  /* 11250a73 push ecx */
  push32((uint32_t)(ECX));
  /* 11250a74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11250a7b jmp 0x11250a86 */
  goto L_11250a86;
L_11250a7d:;
  /* 11250a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250a80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250a83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11250a86:;
  /* 11250a86 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250a8a jae 0x11250a9f */
  if (!C.cf) goto L_11250a9f;
  /* 11250a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250a8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250a92 cmp edx, dword ptr [ecx*8 + 0x1127ef50] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1127ef50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250a99 jne 0x11250a9d */
  if (!C.zf) goto L_11250a9d;
  /* 11250a9b jmp 0x11250a9f */
  goto L_11250a9f;
L_11250a9d:;
  /* 11250a9d jmp 0x11250a7d */
  goto L_11250a7d;
L_11250a9f:;
  /* 11250a9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250aa2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250aa5 cmp ecx, dword ptr [eax*8 + 0x1127ef50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1127ef50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250aac jne 0x11250aba */
  if (!C.zf) goto L_11250aba;
  /* 11250aae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250ab1 mov eax, dword ptr [edx*8 + 0x1127ef54] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1127ef54)));
  /* 11250ab8 jmp 0x11250abc */
  goto L_11250abc;
L_11250aba:;
  /* 11250aba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11250abc:;
  /* 11250abc mov esp, ebp */
  ESP = (EBP);
  /* 11250abe pop ebp */
  EBP = (pop32());
  /* 11250abf ret  */
  ESPCHK(0x11250a70u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11250ac0 (66 bytes, 28 insns) */
void f_11250ac0(void) {
  FTRACE(0x11250ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11250ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11250ac3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250ac7 jne 0x11250ae7 */
  if (!C.zf) goto L_11250ae7;
  /* 11250ac9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250acd jge 0x11250ae7 */
  if ((C.sf==C.of)) goto L_11250ae7;
  /* 11250acf push 1 */
  push32((uint32_t)(0x1u));
  /* 11250ad1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250ad4 push eax */
  push32((uint32_t)(EAX));
  /* 11250ad5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250ad8 push ecx */
  push32((uint32_t)(ECX));
  /* 11250ad9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250adc push edx */
  push32((uint32_t)(EDX));
  /* 11250add call 0x11250b10 */
  push32(0x11250ae2u); f_11250b10();
  /* 11250ae2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250ae5 jmp 0x11250afd */
  goto L_11250afd;
L_11250ae7:;
  /* 11250ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250ae9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250aec push eax */
  push32((uint32_t)(EAX));
  /* 11250aed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250af0 push ecx */
  push32((uint32_t)(ECX));
  /* 11250af1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250af4 push edx */
  push32((uint32_t)(EDX));
  /* 11250af5 call 0x11250b10 */
  push32(0x11250afau); f_11250b10();
  /* 11250afa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11250afd:;
  /* 11250afd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250b00 pop ebp */
  EBP = (pop32());
  /* 11250b01 ret  */
  ESPCHK(0x11250ac0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11250b10 (194 bytes, 71 insns) */
void f_11250b10(void) {
  FTRACE(0x11250b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11250b11 mov ebp, esp */
  EBP = (ESP);
  /* 11250b13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250b16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250b19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11250b1c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250b20 je 0x11250b39 */
  if (C.zf) goto L_11250b39;
  /* 11250b22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250b25 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11250b28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250b2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250b2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11250b31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250b34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11250b36 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11250b39:;
  /* 11250b39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250b3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11250b3f:;
  /* 11250b3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250b42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11250b44 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11250b47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11250b4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250b4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11250b4f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11250b52 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11250b55 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250b59 jbe 0x11250b71 */
  if ((C.cf||C.zf)) goto L_11250b71;
  /* 11250b5b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11250b5e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250b61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250b64 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11250b66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250b69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250b6c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11250b6f jmp 0x11250b85 */
  goto L_11250b85;
L_11250b71:;
  /* 11250b71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11250b74 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250b77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250b7a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11250b7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250b7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250b82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11250b85:;
  /* 11250b85 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250b89 ja 0x11250b3f */
  if ((!C.cf&&!C.zf)) goto L_11250b3f;
  /* 11250b8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250b8e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11250b91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250b94 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250b97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11250b9a:;
  /* 11250b9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250b9d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11250b9f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11250ba2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250ba5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11250ba8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11250baa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11250bac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11250baf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11250bb2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11250bb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250bb7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250bba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11250bbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11250bc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250bc3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11250bc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11250bc9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250bcc jb 0x11250b9a */
  if (C.cf) goto L_11250b9a;
  /* 11250bce mov esp, ebp */
  ESP = (EBP);
  /* 11250bd0 pop ebp */
  EBP = (pop32());
  /* 11250bd1 ret  */
  ESPCHK(0x11250b10u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11250be0 (63 bytes, 24 insns) */
void f_11250be0(void) {
  FTRACE(0x11250be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11250be1 mov ebp, esp */
  EBP = (ESP);
  /* 11250be3 push ecx */
  push32((uint32_t)(ECX));
  /* 11250be4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250be8 jne 0x11250bf9 */
  if (!C.zf) goto L_11250bf9;
  /* 11250bea cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250bee jge 0x11250bf9 */
  if ((C.sf==C.of)) goto L_11250bf9;
  /* 11250bf0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11250bf7 jmp 0x11250c00 */
  goto L_11250c00;
L_11250bf9:;
  /* 11250bf9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11250c00:;
  /* 11250c00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250c03 push eax */
  push32((uint32_t)(EAX));
  /* 11250c04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250c07 push ecx */
  push32((uint32_t)(ECX));
  /* 11250c08 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250c0b push edx */
  push32((uint32_t)(EDX));
  /* 11250c0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250c0f push eax */
  push32((uint32_t)(EAX));
  /* 11250c10 call 0x11250b10 */
  push32(0x11250c15u); f_11250b10();
  /* 11250c15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250c18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250c1b mov esp, ebp */
  ESP = (EBP);
  /* 11250c1d pop ebp */
  EBP = (pop32());
  /* 11250c1e ret  */
  ESPCHK(0x11250be0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11250c20 (30 bytes, 14 insns) */
void f_11250c20(void) {
  FTRACE(0x11250c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11250c21 mov ebp, esp */
  EBP = (ESP);
  /* 11250c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250c25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250c28 push eax */
  push32((uint32_t)(EAX));
  /* 11250c29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250c2c push ecx */
  push32((uint32_t)(ECX));
  /* 11250c2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250c30 push edx */
  push32((uint32_t)(EDX));
  /* 11250c31 call 0x11250b10 */
  push32(0x11250c36u); f_11250b10();
  /* 11250c36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250c39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250c3c pop ebp */
  EBP = (pop32());
  /* 11250c3d ret  */
  ESPCHK(0x11250c20u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11250c40 (72 bytes, 28 insns) */
void f_11250c40(void) {
  FTRACE(0x11250c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11250c41 mov ebp, esp */
  EBP = (ESP);
  /* 11250c43 push ecx */
  push32((uint32_t)(ECX));
  /* 11250c44 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250c48 jne 0x11250c61 */
  if (!C.zf) goto L_11250c61;
  /* 11250c4a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250c4e jg 0x11250c61 */
  if ((!C.zf&&C.sf==C.of)) goto L_11250c61;
  /* 11250c50 jl 0x11250c58 */
  if ((C.sf!=C.of)) goto L_11250c58;
  /* 11250c52 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250c56 jae 0x11250c61 */
  if (!C.cf) goto L_11250c61;
L_11250c58:;
  /* 11250c58 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11250c5f jmp 0x11250c68 */
  goto L_11250c68;
L_11250c61:;
  /* 11250c61 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11250c68:;
  /* 11250c68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250c6b push eax */
  push32((uint32_t)(EAX));
  /* 11250c6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11250c6f push ecx */
  push32((uint32_t)(ECX));
  /* 11250c70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250c73 push edx */
  push32((uint32_t)(EDX));
  /* 11250c74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250c77 push eax */
  push32((uint32_t)(EAX));
  /* 11250c78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250c7b push ecx */
  push32((uint32_t)(ECX));
  /* 11250c7c call 0x11250c90 */
  push32(0x11250c81u); f_11250c90();
  /* 11250c81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250c84 mov esp, ebp */
  ESP = (EBP);
  /* 11250c86 pop ebp */
  EBP = (pop32());
  /* 11250c87 ret  */
  ESPCHK(0x11250c40u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11250c90 (242 bytes, 91 insns) */
void f_11250c90(void) {
  FTRACE(0x11250c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11250c91 mov ebp, esp */
  EBP = (ESP);
  /* 11250c93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250c96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250c99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11250c9c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250ca0 je 0x11250cc4 */
  if (C.zf) goto L_11250cc4;
  /* 11250ca2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250ca5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11250ca8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250cab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250cae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11250cb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250cb4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11250cb6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250cb9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250cbc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11250cbe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11250cc1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11250cc4:;
  /* 11250cc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250cc7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11250cca:;
  /* 11250cca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11250ccd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11250ccf push ecx */
  push32((uint32_t)(ECX));
  /* 11250cd0 push eax */
  push32((uint32_t)(EAX));
  /* 11250cd1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250cd4 push edx */
  push32((uint32_t)(EDX));
  /* 11250cd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250cd8 push eax */
  push32((uint32_t)(EAX));
  /* 11250cd9 call 0x11256c70 */
  push32(0x11250cdeu); f_11256c70();
  /* 11250cde mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11250ce1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11250ce4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11250ce6 push edx */
  push32((uint32_t)(EDX));
  /* 11250ce7 push ecx */
  push32((uint32_t)(ECX));
  /* 11250ce8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250ceb push eax */
  push32((uint32_t)(EAX));
  /* 11250cec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250cef push ecx */
  push32((uint32_t)(ECX));
  /* 11250cf0 call 0x11256c00 */
  push32(0x11250cf5u); f_11256c00();
  /* 11250cf5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11250cf8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11250cfb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250cff jbe 0x11250d17 */
  if ((C.cf||C.zf)) goto L_11250d17;
  /* 11250d01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11250d04 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250d07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250d0a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11250d0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250d0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250d12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11250d15 jmp 0x11250d2b */
  goto L_11250d2b;
L_11250d17:;
  /* 11250d17 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11250d1a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250d1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250d20 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11250d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250d25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250d28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11250d2b:;
  /* 11250d2b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250d2f ja 0x11250cca */
  if ((!C.cf&&!C.zf)) goto L_11250cca;
  /* 11250d31 jb 0x11250d39 */
  if (C.cf) goto L_11250d39;
  /* 11250d33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250d37 ja 0x11250cca */
  if ((!C.cf&&!C.zf)) goto L_11250cca;
L_11250d39:;
  /* 11250d39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250d3c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11250d3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250d42 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250d45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11250d48:;
  /* 11250d48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250d4b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11250d4d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11250d50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250d53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11250d56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11250d58 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11250d5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11250d5d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11250d60 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11250d62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11250d65 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250d68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11250d6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11250d6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250d71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11250d74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11250d77 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250d7a jb 0x11250d48 */
  if (C.cf) goto L_11250d48;
  /* 11250d7c mov esp, ebp */
  ESP = (EBP);
  /* 11250d7e pop ebp */
  EBP = (pop32());
  /* 11250d7f ret 0x14 */
  ESPCHK(0x11250c90u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11250d90 (31 bytes, 15 insns) */
void f_11250d90(void) {
  FTRACE(0x11250d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11250d91 mov ebp, esp */
  EBP = (ESP);
  /* 11250d93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250d95 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11250d98 push eax */
  push32((uint32_t)(EAX));
  /* 11250d99 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250d9c push ecx */
  push32((uint32_t)(ECX));
  /* 11250d9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250da0 push edx */
  push32((uint32_t)(EDX));
  /* 11250da1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250da4 push eax */
  push32((uint32_t)(EAX));
  /* 11250da5 call 0x11250c90 */
  push32(0x11250daau); f_11250c90();
  /* 11250daa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250dad pop ebp */
  EBP = (pop32());
  /* 11250dae ret  */
  ESPCHK(0x11250d90u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11250db0 (123 bytes, 44 insns) */
void f_11250db0(void) {
  FTRACE(0x11250db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250db0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11250db4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11250dba je 0x11250dd0 */
  if (C.zf) goto L_11250dd0;
L_11250dbc:;
  /* 11250dbc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11250dbe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11250dbf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11250dc1 je 0x11250e03 */
  if (C.zf) goto L_11250e03;
  /* 11250dc3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11250dc9 jne 0x11250dbc */
  if (!C.zf) goto L_11250dbc;
  /* 11250dcb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11250dd0:;
  /* 11250dd0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11250dd2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11250dd7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250dd9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11250ddc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11250dde add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250de1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11250de6 je 0x11250dd0 */
  if (C.zf) goto L_11250dd0;
  /* 11250de8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11250deb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11250ded je 0x11250e21 */
  if (C.zf) goto L_11250e21;
  /* 11250def test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11250df1 je 0x11250e17 */
  if (C.zf) goto L_11250e17;
  /* 11250df3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11250df8 je 0x11250e0d */
  if (C.zf) goto L_11250e0d;
  /* 11250dfa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11250dff je 0x11250e03 */
  if (C.zf) goto L_11250e03;
  /* 11250e01 jmp 0x11250dd0 */
  goto L_11250dd0;
L_11250e03:;
  /* 11250e03 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11250e06 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11250e0a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250e0c ret  */
  ESPCHK(0x11250db0u, _esp0);
  ESP += 4; return;
L_11250e0d:;
  /* 11250e0d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11250e10 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11250e14 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250e16 ret  */
  ESPCHK(0x11250db0u, _esp0);
  ESP += 4; return;
L_11250e17:;
  /* 11250e17 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11250e1a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11250e1e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250e20 ret  */
  ESPCHK(0x11250db0u, _esp0);
  ESP += 4; return;
L_11250e21:;
  /* 11250e21 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11250e24 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11250e28 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250e2a ret  */
  ESPCHK(0x11250db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e30 @ 0x11250e30 (249 bytes, 93 insns) */
void f_11250e30(void) {
  FTRACE(0x11250e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11250e31 mov ebp, esp */
  EBP = (ESP);
  /* 11250e33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250e36 push ebx */
  push32((uint32_t)(EBX));
  /* 11250e37 push esi */
  push32((uint32_t)(ESI));
  /* 11250e38 push edi */
  push32((uint32_t)(EDI));
  /* 11250e39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11250e3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11250e3f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11250e42 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11250e45:;
  /* 11250e45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250e49 jne 0x11250e69 */
  if (!C.zf) goto L_11250e69;
  /* 11250e4b push 0x1127c080 */
  push32((uint32_t)(0x1127c080u));
  /* 11250e50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250e52 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11250e54 push 0x1127c074 */
  push32((uint32_t)(0x1127c074u));
  /* 11250e59 push 2 */
  push32((uint32_t)(0x2u));
  /* 11250e5b call 0x1124b3e0 */
  push32(0x11250e60u); f_1124b3e0();
  /* 11250e60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250e63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250e66 jne 0x11250e69 */
  if (!C.zf) goto L_11250e69;
  /* 11250e68 int3  */
  x86_unimpl("int3 @ 0x11250e68");
L_11250e69:;
  /* 11250e69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11250e6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11250e6d jne 0x11250e45 */
  if (!C.zf) goto L_11250e45;
L_11250e6f:;
  /* 11250e6f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250e73 jne 0x11250e93 */
  if (!C.zf) goto L_11250e93;
  /* 11250e75 push 0x1127c064 */
  push32((uint32_t)(0x1127c064u));
  /* 11250e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11250e7c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11250e7e push 0x1127c074 */
  push32((uint32_t)(0x1127c074u));
  /* 11250e83 push 2 */
  push32((uint32_t)(0x2u));
  /* 11250e85 call 0x1124b3e0 */
  push32(0x11250e8au); f_1124b3e0();
  /* 11250e8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250e8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250e90 jne 0x11250e93 */
  if (!C.zf) goto L_11250e93;
  /* 11250e92 int3  */
  x86_unimpl("int3 @ 0x11250e92");
L_11250e93:;
  /* 11250e93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11250e95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11250e97 jne 0x11250e6f */
  if (!C.zf) goto L_11250e6f;
  /* 11250e99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11250e9c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11250ea3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11250ea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250ea9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11250eac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11250eaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11250eb2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11250eb4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11250eb7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11250eba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11250ebd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11250ec0 push edx */
  push32((uint32_t)(EDX));
  /* 11250ec1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11250ec4 push eax */
  push32((uint32_t)(EAX));
  /* 11250ec5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11250ec8 push ecx */
  push32((uint32_t)(ECX));
  /* 11250ec9 call 0x11256f70 */
  push32(0x11250eceu); f_11256f70();
  /* 11250ece add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250ed1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11250ed4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11250ed7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11250eda sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11250edd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11250ee0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11250ee3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11250ee6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11250eea jl 0x11250f0e */
  if ((C.sf!=C.of)) goto L_11250f0e;
  /* 11250eec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11250eef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11250ef1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11250ef4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11250ef6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11250efc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11250eff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11250f02 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11250f04 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250f07 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11250f0a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11250f0c jmp 0x11250f1f */
  goto L_11250f1f;
L_11250f0e:;
  /* 11250f0e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11250f11 push eax */
  push32((uint32_t)(EAX));
  /* 11250f12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11250f14 call 0x11256cf0 */
  push32(0x11250f19u); f_11256cf0();
  /* 11250f19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11250f1c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11250f1f:;
  /* 11250f1f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11250f22 pop edi */
  EDI = (pop32());
  /* 11250f23 pop esi */
  ESI = (pop32());
  /* 11250f24 pop ebx */
  EBX = (pop32());
  /* 11250f25 mov esp, ebp */
  ESP = (EBP);
  /* 11250f27 pop ebp */
  EBP = (pop32());
  /* 11250f28 ret  */
  ESPCHK(0x11250e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f30 @ 0x11250f30 (7 bytes, 3 insns) */
void f_11250f30(void) {
  FTRACE(0x11250f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250f30 push edi */
  push32((uint32_t)(EDI));
  /* 11250f31 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11250f35 jmp 0x11250fa1 */
  jmp_ind(0x11250fa1u); return;
}

/* FUN_10010f40 @ 0x11250f40 (224 bytes, 84 insns) */
void f_11250f40(void) {
  FTRACE(0x11250f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11250f40 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11250f44 push edi */
  push32((uint32_t)(EDI));
  /* 11250f45 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11250f4b je 0x11250f5c */
  if (C.zf) goto L_11250f5c;
L_11250f4d:;
  /* 11250f4d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11250f4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11250f50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11250f52 je 0x11250f8f */
  if (C.zf) goto L_11250f8f;
  /* 11250f54 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11250f5a jne 0x11250f4d */
  if (!C.zf) goto L_11250f4d;
L_11250f5c:;
  /* 11250f5c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11250f5e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11250f63 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250f65 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11250f68 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11250f6a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250f6d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11250f72 je 0x11250f5c */
  if (C.zf) goto L_11250f5c;
  /* 11250f74 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11250f77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11250f79 je 0x11250f9e */
  if (C.zf) goto L_11250f9e;
  /* 11250f7b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11250f7d je 0x11250f99 */
  if (C.zf) goto L_11250f99;
  /* 11250f7f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11250f84 je 0x11250f94 */
  if (C.zf) goto L_11250f94;
  /* 11250f86 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11250f8b je 0x11250f8f */
  if (C.zf) goto L_11250f8f;
  /* 11250f8d jmp 0x11250f5c */
  goto L_11250f5c;
L_11250f8f:;
  /* 11250f8f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11250f92 jmp 0x11250fa1 */
  goto L_11250fa1;
L_11250f94:;
  /* 11250f94 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11250f97 jmp 0x11250fa1 */
  goto L_11250fa1;
L_11250f99:;
  /* 11250f99 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11250f9c jmp 0x11250fa1 */
  goto L_11250fa1;
L_11250f9e:;
  /* 11250f9e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11250fa1:;
  /* 11250fa1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11250fa5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11250fab je 0x11250fc6 */
  if (C.zf) goto L_11250fc6;
L_11250fad:;
  /* 11250fad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11250faf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11250fb0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11250fb2 je 0x11251018 */
  if (C.zf) goto L_11251018;
  /* 11250fb4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11250fb6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11250fb7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11250fbd jne 0x11250fad */
  if (!C.zf) goto L_11250fad;
  /* 11250fbf jmp 0x11250fc6 */
  goto L_11250fc6;
L_11250fc1:;
  /* 11250fc1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11250fc3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11250fc6:;
  /* 11250fc6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11250fcb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11250fcd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250fcf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11250fd2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11250fd4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11250fd6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11250fd9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11250fde je 0x11250fc1 */
  if (C.zf) goto L_11250fc1;
  /* 11250fe0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11250fe2 je 0x11251018 */
  if (C.zf) goto L_11251018;
  /* 11250fe4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11250fe6 je 0x1125100f */
  if (C.zf) goto L_1125100f;
  /* 11250fe8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11250fee je 0x11251002 */
  if (C.zf) goto L_11251002;
  /* 11250ff0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11250ff6 je 0x11250ffa */
  if (C.zf) goto L_11250ffa;
  /* 11250ff8 jmp 0x11250fc1 */
  goto L_11250fc1;
L_11250ffa:;
  /* 11250ffa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11250ffc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11251000 pop edi */
  EDI = (pop32());
  /* 11251001 ret  */
  ESPCHK(0x11250f40u, _esp0);
  ESP += 4; return;
L_11251002:;
  /* 11251002 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11251005 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11251009 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1125100d pop edi */
  EDI = (pop32());
  /* 1125100e ret  */
  ESPCHK(0x11250f40u, _esp0);
  ESP += 4; return;
L_1125100f:;
  /* 1125100f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11251012 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11251016 pop edi */
  EDI = (pop32());
  /* 11251017 ret  */
  ESPCHK(0x11250f40u, _esp0);
  ESP += 4; return;
L_11251018:;
  /* 11251018 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1125101a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1125101e pop edi */
  EDI = (pop32());
  /* 1125101f ret  */
  ESPCHK(0x11250f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011020 @ 0x11251020 (243 bytes, 91 insns) */
void f_11251020(void) {
  FTRACE(0x11251020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251020 push ebp */
  push32((uint32_t)(EBP));
  /* 11251021 mov ebp, esp */
  EBP = (ESP);
  /* 11251023 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11251026 push ebx */
  push32((uint32_t)(EBX));
  /* 11251027 push esi */
  push32((uint32_t)(ESI));
  /* 11251028 push edi */
  push32((uint32_t)(EDI));
  /* 11251029 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1125102c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1125102f:;
  /* 1125102f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251033 jne 0x11251053 */
  if (!C.zf) goto L_11251053;
  /* 11251035 push 0x1127c080 */
  push32((uint32_t)(0x1127c080u));
  /* 1125103a push 0 */
  push32((uint32_t)(0x0u));
  /* 1125103c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1125103e push 0x1127c090 */
  push32((uint32_t)(0x1127c090u));
  /* 11251043 push 2 */
  push32((uint32_t)(0x2u));
  /* 11251045 call 0x1124b3e0 */
  push32(0x1125104au); f_1124b3e0();
  /* 1125104a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125104d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251050 jne 0x11251053 */
  if (!C.zf) goto L_11251053;
  /* 11251052 int3  */
  x86_unimpl("int3 @ 0x11251052");
L_11251053:;
  /* 11251053 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11251055 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11251057 jne 0x1125102f */
  if (!C.zf) goto L_1125102f;
L_11251059:;
  /* 11251059 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125105d jne 0x1125107d */
  if (!C.zf) goto L_1125107d;
  /* 1125105f push 0x1127c064 */
  push32((uint32_t)(0x1127c064u));
  /* 11251064 push 0 */
  push32((uint32_t)(0x0u));
  /* 11251066 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11251068 push 0x1127c090 */
  push32((uint32_t)(0x1127c090u));
  /* 1125106d push 2 */
  push32((uint32_t)(0x2u));
  /* 1125106f call 0x1124b3e0 */
  push32(0x11251074u); f_1124b3e0();
  /* 11251074 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11251077 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125107a jne 0x1125107d */
  if (!C.zf) goto L_1125107d;
  /* 1125107c int3  */
  x86_unimpl("int3 @ 0x1125107c");
L_1125107d:;
  /* 1125107d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125107f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11251081 jne 0x11251059 */
  if (!C.zf) goto L_11251059;
  /* 11251083 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11251086 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1125108d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11251090 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251093 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11251096 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11251099 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125109c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1125109e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112510a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112510a4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 112510a7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112510aa push ecx */
  push32((uint32_t)(ECX));
  /* 112510ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112510ae push edx */
  push32((uint32_t)(EDX));
  /* 112510af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112510b2 push eax */
  push32((uint32_t)(EAX));
  /* 112510b3 call 0x11256f70 */
  push32(0x112510b8u); f_11256f70();
  /* 112510b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112510bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112510be mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112510c1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112510c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112510c7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112510ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 112510cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112510d0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112510d4 jl 0x112510f8 */
  if ((C.sf!=C.of)) goto L_112510f8;
  /* 112510d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112510d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112510db mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 112510de xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112510e0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112510e6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 112510e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112510ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112510ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112510f1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112510f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112510f6 jmp 0x11251109 */
  goto L_11251109;
L_112510f8:;
  /* 112510f8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112510fb push edx */
  push32((uint32_t)(EDX));
  /* 112510fc push 0 */
  push32((uint32_t)(0x0u));
  /* 112510fe call 0x11256cf0 */
  push32(0x11251103u); f_11256cf0();
  /* 11251103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11251106 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11251109:;
  /* 11251109 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1125110c pop edi */
  EDI = (pop32());
  /* 1125110d pop esi */
  ESI = (pop32());
  /* 1125110e pop ebx */
  EBX = (pop32());
  /* 1125110f mov esp, ebp */
  ESP = (EBP);
  /* 11251111 pop ebp */
  EBP = (pop32());
  /* 11251112 ret  */
  ESPCHK(0x11251020u, _esp0);
  ESP += 4; return;
}

/* FUN_10011120 @ 0x11251120 (47 bytes, 17 insns) */
void f_11251120(void) {
  FTRACE(0x11251120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251120 push ecx */
  push32((uint32_t)(ECX));
  /* 11251121 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251126 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1125112a jb 0x11251140 */
  if (C.cf) goto L_11251140;
L_1125112c:;
  /* 1125112c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11251132 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11251137 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11251139 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125113e jae 0x1125112c */
  if (!C.cf) goto L_1125112c;
L_11251140:;
  /* 11251140 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11251142 mov eax, esp */
  EAX = (ESP);
  /* 11251144 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11251146 mov esp, ecx */
  ESP = (ECX);
  /* 11251148 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125114a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1125114d push eax */
  push32((uint32_t)(EAX));
  /* 1125114e ret  */
  ESPCHK(0x11251120u, _esp0);
  ESP += 4; return;
}

/* FUN_10011150 @ 0x11251150 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11251150(void) {
  FTRACE(0x11251150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251150 push ebp */
  push32((uint32_t)(EBP));
  /* 11251151 mov ebp, esp */
  EBP = (ESP);
  /* 11251153 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11251156 push esi */
  push32((uint32_t)(ESI));
  /* 11251157 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125115b je 0x11251163 */
  if (C.zf) goto L_11251163;
  /* 1125115d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251161 jne 0x11251168 */
  if (!C.zf) goto L_11251168;
L_11251163:;
  /* 11251163 jmp 0x11251338 */
  goto L_11251338;
L_11251168:;
  /* 11251168 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125116c je 0x11251184 */
  if (C.zf) goto L_11251184;
  /* 1125116e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251172 je 0x11251184 */
  if (C.zf) goto L_11251184;
  /* 11251174 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251178 je 0x11251184 */
  if (C.zf) goto L_11251184;
  /* 1125117a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125117e jne 0x11251261 */
  if (!C.zf) goto L_11251261;
L_11251184:;
  /* 11251184 push 1 */
  push32((uint32_t)(0x1u));
  /* 11251186 call 0x1124c720 */
  push32(0x1125118bu); f_1124c720();
  /* 1125118b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125118e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251192 je 0x1125119a */
  if (C.zf) goto L_1125119a;
  /* 11251194 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251198 jne 0x112511df */
  if (!C.zf) goto L_112511df;
L_1125119a:;
  /* 1125119a cmp dword ptr [0x112815e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112815e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112511a1 jne 0x112511df */
  if (!C.zf) goto L_112511df;
  /* 112511a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112511a5 push 0x11251380 */
  push32((uint32_t)(0x11251380u));
  /* 112511aa call dword ptr [0x112833b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833b0))), 0x112511b0u);
  /* 112511b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112511b3 jne 0x112511c1 */
  if (!C.zf) goto L_112511c1;
  /* 112511b5 mov dword ptr [0x112815e8], 1 */
  w32((uint32_t)(0x112815e8), (0x1u));
  /* 112511bf jmp 0x112511df */
  goto L_112511df;
L_112511c1:;
  /* 112511c1 call dword ptr [0x112833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833f0))), 0x112511c7u);
  /* 112511c7 mov esi, eax */
  ESI = (EAX);
  /* 112511c9 call 0x11257ec0 */
  push32(0x112511ceu); f_11257ec0();
  /* 112511ce mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 112511d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 112511d2 call 0x1124c7c0 */
  push32(0x112511d7u); f_1124c7c0();
  /* 112511d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112511da jmp 0x11251338 */
  goto L_11251338;
L_112511df:;
  /* 112511df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112511e2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112511e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112511e8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112511eb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112511ee cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112511f2 ja 0x11251252 */
  if ((!C.cf&&!C.zf)) goto L_11251252;
  /* 112511f4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112511f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112511f9 mov dl, byte ptr [eax + 0x1125135f] */
  DL = (r8((uint32_t)(EAX + 0x1125135f)));
  /* 112511ff jmp dword ptr [edx*4 + 0x1125134b] */
  switch (EDX) {
    case 0: goto L_11251206;
    case 1: goto L_11251240;
    case 2: goto L_1125121a;
    case 3: goto L_1125122d;
    case 4: goto L_11251252;
    default: x86_unimpl("switch@0x112511ff out of table"); return;
  }
L_11251206:;
  /* 11251206 mov ecx, dword ptr [0x112815d8] */
  ECX = (r32((uint32_t)(0x112815d8)));
  /* 1125120c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125120f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11251212 mov dword ptr [0x112815d8], edx */
  w32((uint32_t)(0x112815d8), (EDX));
  /* 11251218 jmp 0x11251252 */
  goto L_11251252;
L_1125121a:;
  /* 1125121a mov eax, dword ptr [0x112815dc] */
  EAX = (r32((uint32_t)(0x112815dc)));
  /* 1125121f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11251222 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11251225 mov dword ptr [0x112815dc], ecx */
  w32((uint32_t)(0x112815dc), (ECX));
  /* 1125122b jmp 0x11251252 */
  goto L_11251252;
L_1125122d:;
  /* 1125122d mov edx, dword ptr [0x112815e0] */
  EDX = (r32((uint32_t)(0x112815e0)));
  /* 11251233 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11251236 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11251239 mov dword ptr [0x112815e0], eax */
  w32((uint32_t)(0x112815e0), (EAX));
  /* 1125123e jmp 0x11251252 */
  goto L_11251252;
L_11251240:;
  /* 11251240 mov ecx, dword ptr [0x112815e4] */
  ECX = (r32((uint32_t)(0x112815e4)));
  /* 11251246 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11251249 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125124c mov dword ptr [0x112815e4], edx */
  w32((uint32_t)(0x112815e4), (EDX));
L_11251252:;
  /* 11251252 push 1 */
  push32((uint32_t)(0x1u));
  /* 11251254 call 0x1124c7c0 */
  push32(0x11251259u); f_1124c7c0();
  /* 11251259 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125125c jmp 0x11251333 */
  goto L_11251333;
L_11251261:;
  /* 11251261 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251265 je 0x11251278 */
  if (C.zf) goto L_11251278;
  /* 11251267 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125126b je 0x11251278 */
  if (C.zf) goto L_11251278;
  /* 1125126d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251271 je 0x11251278 */
  if (C.zf) goto L_11251278;
  /* 11251273 jmp 0x11251338 */
  goto L_11251338;
L_11251278:;
  /* 11251278 call 0x1124f520 */
  push32(0x1125127du); f_1124f520();
  /* 1125127d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11251280 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251283 cmp dword ptr [eax + 0x50], 0x1127f240 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1127f240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125128a jne 0x112512d5 */
  if (!C.zf) goto L_112512d5;
  /* 1125128c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11251291 push 0x1127c09c */
  push32((uint32_t)(0x1127c09cu));
  /* 11251296 push 2 */
  push32((uint32_t)(0x2u));
  /* 11251298 mov ecx, dword ptr [0x1127f2c0] */
  ECX = (r32((uint32_t)(0x1127f2c0)));
  /* 1125129e push ecx */
  push32((uint32_t)(ECX));
  /* 1125129f call 0x1124c820 */
  push32(0x112512a4u); f_1124c820();
  /* 112512a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112512a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112512aa mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 112512ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112512b0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112512b4 je 0x112512d3 */
  if (C.zf) goto L_112512d3;
  /* 112512b6 mov ecx, dword ptr [0x1127f2c0] */
  ECX = (r32((uint32_t)(0x1127f2c0)));
  /* 112512bc push ecx */
  push32((uint32_t)(ECX));
  /* 112512bd push 0x1127f240 */
  push32((uint32_t)(0x1127f240u));
  /* 112512c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112512c5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 112512c8 push eax */
  push32((uint32_t)(EAX));
  /* 112512c9 call 0x112568c0 */
  push32(0x112512ceu); f_112568c0();
  /* 112512ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112512d1 jmp 0x112512d5 */
  goto L_112512d5;
L_112512d3:;
  /* 112512d3 jmp 0x11251338 */
  goto L_11251338;
L_112512d5:;
  /* 112512d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112512d8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 112512db push edx */
  push32((uint32_t)(EDX));
  /* 112512dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112512df push eax */
  push32((uint32_t)(EAX));
  /* 112512e0 call 0x11251660 */
  push32(0x112512e5u); f_11251660();
  /* 112512e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112512e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112512eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112512ef jne 0x112512f3 */
  if (!C.zf) goto L_112512f3;
  /* 112512f1 jmp 0x11251338 */
  goto L_11251338;
L_112512f3:;
  /* 112512f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112512f6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112512f9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_112512fc:;
  /* 112512fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112512ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11251302 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251305 jne 0x11251333 */
  if (!C.zf) goto L_11251333;
  /* 11251307 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125130a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125130d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11251310 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11251313 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11251316 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11251319 mov edx, dword ptr [0x1127f2c4] */
  EDX = (r32((uint32_t)(0x1127f2c4)));
  /* 1125131f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11251322 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251325 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11251328 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125132a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125132d jb 0x11251331 */
  if (C.cf) goto L_11251331;
  /* 1125132f jmp 0x11251333 */
  goto L_11251333;
L_11251331:;
  /* 11251331 jmp 0x112512fc */
  goto L_112512fc;
L_11251333:;
  /* 11251333 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11251336 jmp 0x11251346 */
  goto L_11251346;
L_11251338:;
  /* 11251338 call 0x11257eb0 */
  push32(0x1125133du); f_11257eb0();
  /* 1125133d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11251343 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11251346:;
  /* 11251346 pop esi */
  ESI = (pop32());
  /* 11251347 mov esp, ebp */
  ESP = (EBP);
  /* 11251349 pop ebp */
  EBP = (pop32());
  /* 1125134a ret  */
  ESPCHK(0x11251150u, _esp0);
  ESP += 4; return;
}

/* FUN_10011380 @ 0x11251380 (146 bytes, 45 insns) */
void f_11251380(void) {
  FTRACE(0x11251380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251380 push ebp */
  push32((uint32_t)(EBP));
  /* 11251381 mov ebp, esp */
  EBP = (ESP);
  /* 11251383 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11251386 push 1 */
  push32((uint32_t)(0x1u));
  /* 11251388 call 0x1124c720 */
  push32(0x1125138du); f_1124c720();
  /* 1125138d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11251390 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251394 jne 0x112513ae */
  if (!C.zf) goto L_112513ae;
  /* 11251396 mov dword ptr [ebp - 8], 0x112815d8 */
  w32((uint32_t)(EBP + -0x8), (0x112815d8u));
  /* 1125139d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112513a0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112513a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112513a5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 112513ac jmp 0x112513c4 */
  goto L_112513c4;
L_112513ae:;
  /* 112513ae mov dword ptr [ebp - 8], 0x112815dc */
  w32((uint32_t)(EBP + -0x8), (0x112815dcu));
  /* 112513b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112513b8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112513ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112513bd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_112513c4:;
  /* 112513c4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112513c8 jne 0x112513d8 */
  if (!C.zf) goto L_112513d8;
  /* 112513ca push 1 */
  push32((uint32_t)(0x1u));
  /* 112513cc call 0x1124c7c0 */
  push32(0x112513d1u); f_1124c7c0();
  /* 112513d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112513d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112513d6 jmp 0x1125140c */
  goto L_1125140c;
L_112513d8:;
  /* 112513d8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112513dc je 0x112513fd */
  if (C.zf) goto L_112513fd;
  /* 112513de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112513e1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 112513e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 112513e9 call 0x1124c7c0 */
  push32(0x112513eeu); f_1124c7c0();
  /* 112513ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112513f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112513f4 push edx */
  push32((uint32_t)(EDX));
  /* 112513f5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x112513f8u);
  /* 112513f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112513fb jmp 0x11251407 */
  goto L_11251407;
L_112513fd:;
  /* 112513fd push 1 */
  push32((uint32_t)(0x1u));
  /* 112513ff call 0x1124c7c0 */
  push32(0x11251404u); f_1124c7c0();
  /* 11251404 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11251407:;
  /* 11251407 mov eax, 1 */
  EAX = (0x1u);
L_1125140c:;
  /* 1125140c mov esp, ebp */
  ESP = (EBP);
  /* 1125140e pop ebp */
  EBP = (pop32());
  /* 1125140f ret 4 */
  ESPCHK(0x11251380u, _esp0);
  ESP += 8; return;
}

/* FUN_10011420 @ 0x11251420 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11251420(void) {
  FTRACE(0x11251420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251420 push ebp */
  push32((uint32_t)(EBP));
  /* 11251421 mov ebp, esp */
  EBP = (ESP);
  /* 11251423 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11251426 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1125142d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251430 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11251433 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11251436 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11251439 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1125143c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251440 ja 0x112514ee */
  if ((!C.cf&&!C.zf)) goto L_112514ee;
  /* 11251446 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11251449 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125144b mov dl, byte ptr [eax + 0x11251642] */
  DL = (r8((uint32_t)(EAX + 0x11251642)));
  /* 11251451 jmp dword ptr [edx*4 + 0x1125162a] */
  switch (EDX) {
    case 0: goto L_11251458;
    case 1: goto L_112514c3;
    case 2: goto L_112514a9;
    case 3: goto L_11251475;
    case 4: goto L_1125148f;
    case 5: goto L_112514ee;
    default: x86_unimpl("switch@0x11251451 out of table"); return;
  }
L_11251458:;
  /* 11251458 mov dword ptr [ebp - 0x18], 0x112815d8 */
  w32((uint32_t)(EBP + -0x18), (0x112815d8u));
  /* 1125145f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11251462 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11251464 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11251467 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125146a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125146d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11251470 jmp 0x112514f6 */
  goto L_112514f6;
L_11251475:;
  /* 11251475 mov dword ptr [ebp - 0x18], 0x112815dc */
  w32((uint32_t)(EBP + -0x18), (0x112815dcu));
  /* 1125147c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125147f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11251481 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11251484 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11251487 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125148a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1125148d jmp 0x112514f6 */
  goto L_112514f6;
L_1125148f:;
  /* 1125148f mov dword ptr [ebp - 0x18], 0x112815e0 */
  w32((uint32_t)(EBP + -0x18), (0x112815e0u));
  /* 11251496 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11251499 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125149b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1125149e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112514a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112514a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112514a7 jmp 0x112514f6 */
  goto L_112514f6;
L_112514a9:;
  /* 112514a9 mov dword ptr [ebp - 0x18], 0x112815e4 */
  w32((uint32_t)(EBP + -0x18), (0x112815e4u));
  /* 112514b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112514b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112514b5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 112514b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112514bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112514be mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112514c1 jmp 0x112514f6 */
  goto L_112514f6;
L_112514c3:;
  /* 112514c3 call 0x1124f520 */
  push32(0x112514c8u); f_1124f520();
  /* 112514c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112514cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112514ce mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 112514d1 push edx */
  push32((uint32_t)(EDX));
  /* 112514d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112514d5 push eax */
  push32((uint32_t)(EAX));
  /* 112514d6 call 0x11251660 */
  push32(0x112514dbu); f_11251660();
  /* 112514db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112514de add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112514e1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112514e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112514e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112514e9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 112514ec jmp 0x112514f6 */
  goto L_112514f6;
L_112514ee:;
  /* 112514ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112514f1 jmp 0x11251626 */
  goto L_11251626;
L_112514f6:;
  /* 112514f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112514fa je 0x11251506 */
  if (C.zf) goto L_11251506;
  /* 112514fc push 1 */
  push32((uint32_t)(0x1u));
  /* 112514fe call 0x1124c720 */
  push32(0x11251503u); f_1124c720();
  /* 11251503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11251506:;
  /* 11251506 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125150a jne 0x11251523 */
  if (!C.zf) goto L_11251523;
  /* 1125150c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251510 je 0x1125151c */
  if (C.zf) goto L_1125151c;
  /* 11251512 push 1 */
  push32((uint32_t)(0x1u));
  /* 11251514 call 0x1124c7c0 */
  push32(0x11251519u); f_1124c7c0();
  /* 11251519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125151c:;
  /* 1125151c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125151e jmp 0x11251626 */
  goto L_11251626;
L_11251523:;
  /* 11251523 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251527 jne 0x11251540 */
  if (!C.zf) goto L_11251540;
  /* 11251529 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125152d je 0x11251539 */
  if (C.zf) goto L_11251539;
  /* 1125152f push 1 */
  push32((uint32_t)(0x1u));
  /* 11251531 call 0x1124c7c0 */
  push32(0x11251536u); f_1124c7c0();
  /* 11251536 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11251539:;
  /* 11251539 push 3 */
  push32((uint32_t)(0x3u));
  /* 1125153b call 0x1124f890 */
  push32(0x11251540u); f_1124f890();
L_11251540:;
  /* 11251540 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251544 je 0x11251552 */
  if (C.zf) goto L_11251552;
  /* 11251546 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125154a je 0x11251552 */
  if (C.zf) goto L_11251552;
  /* 1125154c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251550 jne 0x1125157e */
  if (!C.zf) goto L_1125157e;
L_11251552:;
  /* 11251552 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251555 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11251558 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1125155b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125155e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11251565 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251569 jne 0x1125157e */
  if (!C.zf) goto L_1125157e;
  /* 1125156b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125156e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11251571 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11251574 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251577 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1125157e:;
  /* 1125157e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251582 jne 0x112515c0 */
  if (!C.zf) goto L_112515c0;
  /* 11251584 mov eax, dword ptr [0x1127f2b8] */
  EAX = (r32((uint32_t)(0x1127f2b8)));
  /* 11251589 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1125158c jmp 0x11251597 */
  goto L_11251597;
L_1125158e:;
  /* 1125158e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11251591 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11251594 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11251597:;
  /* 11251597 mov edx, dword ptr [0x1127f2b8] */
  EDX = (r32((uint32_t)(0x1127f2b8)));
  /* 1125159d add edx, dword ptr [0x1127f2bc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1127f2bc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112515a3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112515a6 jge 0x112515be */
  if ((C.sf==C.of)) goto L_112515be;
  /* 112515a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112515ab imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112515ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112515b1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 112515b4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 112515bc jmp 0x1125158e */
  goto L_1125158e;
L_112515be:;
  /* 112515be jmp 0x112515c9 */
  goto L_112515c9;
L_112515c0:;
  /* 112515c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112515c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_112515c9:;
  /* 112515c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112515cd je 0x112515d9 */
  if (C.zf) goto L_112515d9;
  /* 112515cf push 1 */
  push32((uint32_t)(0x1u));
  /* 112515d1 call 0x1124c7c0 */
  push32(0x112515d6u); f_1124c7c0();
  /* 112515d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112515d9:;
  /* 112515d9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112515dd jne 0x112515f0 */
  if (!C.zf) goto L_112515f0;
  /* 112515df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112515e2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 112515e5 push edx */
  push32((uint32_t)(EDX));
  /* 112515e6 push 8 */
  push32((uint32_t)(0x8u));
  /* 112515e8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x112515ebu);
  /* 112515eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112515ee jmp 0x112515fa */
  goto L_112515fa;
L_112515f0:;
  /* 112515f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112515f3 push eax */
  push32((uint32_t)(EAX));
  /* 112515f4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x112515f7u);
  /* 112515f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112515fa:;
  /* 112515fa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112515fe je 0x1125160c */
  if (C.zf) goto L_1125160c;
  /* 11251600 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251604 je 0x1125160c */
  if (C.zf) goto L_1125160c;
  /* 11251606 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125160a jne 0x11251624 */
  if (!C.zf) goto L_11251624;
L_1125160c:;
  /* 1125160c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125160f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11251612 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11251615 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251619 jne 0x11251624 */
  if (!C.zf) goto L_11251624;
  /* 1125161b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125161e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11251621 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11251624:;
  /* 11251624 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11251626:;
  /* 11251626 mov esp, ebp */
  ESP = (EBP);
  /* 11251628 pop ebp */
  EBP = (pop32());
  /* 11251629 ret  */
  ESPCHK(0x11251420u, _esp0);
  ESP += 4; return;
}

/* FUN_10011660 @ 0x11251660 (91 bytes, 35 insns) */
void f_11251660(void) {
  FTRACE(0x11251660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251660 push ebp */
  push32((uint32_t)(EBP));
  /* 11251661 mov ebp, esp */
  EBP = (ESP);
  /* 11251663 push ecx */
  push32((uint32_t)(ECX));
  /* 11251664 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11251667 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125166a:;
  /* 1125166a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125166d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11251670 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251673 je 0x11251693 */
  if (C.zf) goto L_11251693;
  /* 11251675 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251678 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125167b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125167e mov ecx, dword ptr [0x1127f2c4] */
  ECX = (r32((uint32_t)(0x1127f2c4)));
  /* 11251684 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11251687 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125168a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125168c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125168f jae 0x11251693 */
  if (!C.cf) goto L_11251693;
  /* 11251691 jmp 0x1125166a */
  goto L_1125166a;
L_11251693:;
  /* 11251693 mov eax, dword ptr [0x1127f2c4] */
  EAX = (r32((uint32_t)(0x1127f2c4)));
  /* 11251698 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125169b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125169e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112516a0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112516a3 jae 0x112516b5 */
  if (!C.cf) goto L_112516b5;
  /* 112516a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112516a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112516ab cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112516ae jne 0x112516b5 */
  if (!C.zf) goto L_112516b5;
  /* 112516b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112516b3 jmp 0x112516b7 */
  goto L_112516b7;
L_112516b5:;
  /* 112516b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112516b7:;
  /* 112516b7 mov esp, ebp */
  ESP = (EBP);
  /* 112516b9 pop ebp */
  EBP = (pop32());
  /* 112516ba ret  */
  ESPCHK(0x11251660u, _esp0);
  ESP += 4; return;
}

/* FUN_100116c0 @ 0x112516c0 (13 bytes, 6 insns) */
void f_112516c0(void) {
  FTRACE(0x112516c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112516c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112516c1 mov ebp, esp */
  EBP = (ESP);
  /* 112516c3 call 0x1124f520 */
  push32(0x112516c8u); f_1124f520();
  /* 112516c8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112516cb pop ebp */
  EBP = (pop32());
  /* 112516cc ret  */
  ESPCHK(0x112516c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100116d0 @ 0x112516d0 (13 bytes, 6 insns) */
void f_112516d0(void) {
  FTRACE(0x112516d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112516d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112516d1 mov ebp, esp */
  EBP = (ESP);
  /* 112516d3 call 0x1124f520 */
  push32(0x112516d8u); f_1124f520();
  /* 112516d8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112516db pop ebp */
  EBP = (pop32());
  /* 112516dc ret  */
  ESPCHK(0x112516d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100116e0 @ 0x112516e0 (187 bytes, 54 insns) */
void f_112516e0(void) {
  FTRACE(0x112516e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112516e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112516e1 mov ebp, esp */
  EBP = (ESP);
  /* 112516e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112516e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112516ed cmp dword ptr [0x112815ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112815ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112516f4 jne 0x11251753 */
  if (!C.zf) goto L_11251753;
  /* 112516f6 push 0x1127b3e8 */
  push32((uint32_t)(0x1127b3e8u));
  /* 112516fb call dword ptr [0x1128345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128345c))), 0x11251701u);
  /* 11251701 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11251704 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251708 je 0x11251727 */
  if (C.zf) goto L_11251727;
  /* 1125170a push 0x1127c0cc */
  push32((uint32_t)(0x1127c0ccu));
  /* 1125170f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11251712 push eax */
  push32((uint32_t)(EAX));
  /* 11251713 call dword ptr [0x1128344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128344c))), 0x11251719u);
  /* 11251719 mov dword ptr [0x112815ec], eax */
  w32((uint32_t)(0x112815ec), (EAX));
  /* 1125171e cmp dword ptr [0x112815ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112815ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251725 jne 0x1125172b */
  if (!C.zf) goto L_1125172b;
L_11251727:;
  /* 11251727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11251729 jmp 0x11251797 */
  goto L_11251797;
L_1125172b:;
  /* 1125172b push 0x1127c0bc */
  push32((uint32_t)(0x1127c0bcu));
  /* 11251730 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11251733 push ecx */
  push32((uint32_t)(ECX));
  /* 11251734 call dword ptr [0x1128344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128344c))), 0x1125173au);
  /* 1125173a mov dword ptr [0x112815f0], eax */
  w32((uint32_t)(0x112815f0), (EAX));
  /* 1125173f push 0x1127c0a8 */
  push32((uint32_t)(0x1127c0a8u));
  /* 11251744 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11251747 push edx */
  push32((uint32_t)(EDX));
  /* 11251748 call dword ptr [0x1128344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128344c))), 0x1125174eu);
  /* 1125174e mov dword ptr [0x112815f4], eax */
  w32((uint32_t)(0x112815f4), (EAX));
L_11251753:;
  /* 11251753 cmp dword ptr [0x112815f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112815f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125175a je 0x11251765 */
  if (C.zf) goto L_11251765;
  /* 1125175c call dword ptr [0x112815f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112815f0))), 0x11251762u);
  /* 11251762 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11251765:;
  /* 11251765 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251769 je 0x11251781 */
  if (C.zf) goto L_11251781;
  /* 1125176b cmp dword ptr [0x112815f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112815f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251772 je 0x11251781 */
  if (C.zf) goto L_11251781;
  /* 11251774 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251777 push eax */
  push32((uint32_t)(EAX));
  /* 11251778 call dword ptr [0x112815f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112815f4))), 0x1125177eu);
  /* 1125177e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11251781:;
  /* 11251781 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11251784 push ecx */
  push32((uint32_t)(ECX));
  /* 11251785 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11251788 push edx */
  push32((uint32_t)(EDX));
  /* 11251789 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125178c push eax */
  push32((uint32_t)(EAX));
  /* 1125178d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251790 push ecx */
  push32((uint32_t)(ECX));
  /* 11251791 call dword ptr [0x112815ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x112815ec))), 0x11251797u);
L_11251797:;
  /* 11251797 mov esp, ebp */
  ESP = (EBP);
  /* 11251799 pop ebp */
  EBP = (pop32());
  /* 1125179a ret  */
  ESPCHK(0x112516e0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x112517a0 (254 bytes, 109 insns) */
void f_112517a0(void) {
  FTRACE(0x112517a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112517a0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 112517a4 push edi */
  push32((uint32_t)(EDI));
  /* 112517a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112517a7 je 0x11251823 */
  if (C.zf) goto L_11251823;
  /* 112517a9 push esi */
  push32((uint32_t)(ESI));
  /* 112517aa push ebx */
  push32((uint32_t)(EBX));
  /* 112517ab mov ebx, ecx */
  EBX = (ECX);
  /* 112517ad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 112517b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 112517b7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 112517bb jne 0x112517c4 */
  if (!C.zf) goto L_112517c4;
  /* 112517bd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112517c0 jne 0x11251831 */
  if (!C.zf) goto L_11251831;
  /* 112517c2 jmp 0x112517e5 */
  goto L_112517e5;
L_112517c4:;
  /* 112517c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112517c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112517c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112517c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112517ca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112517cb je 0x112517f2 */
  if (C.zf) goto L_112517f2;
  /* 112517cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112517cf je 0x112517fa */
  if (C.zf) goto L_112517fa;
  /* 112517d1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 112517d7 jne 0x112517c4 */
  if (!C.zf) goto L_112517c4;
  /* 112517d9 mov ebx, ecx */
  EBX = (ECX);
  /* 112517db shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112517de jne 0x11251831 */
  if (!C.zf) goto L_11251831;
L_112517e0:;
  /* 112517e0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 112517e3 je 0x112517f2 */
  if (C.zf) goto L_112517f2;
L_112517e5:;
  /* 112517e5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112517e7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112517e8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112517ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112517eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112517ed je 0x1125181e */
  if (C.zf) goto L_1125181e;
  /* 112517ef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 112517f0 jne 0x112517e5 */
  if (!C.zf) goto L_112517e5;
L_112517f2:;
  /* 112517f2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 112517f6 pop ebx */
  EBX = (pop32());
  /* 112517f7 pop esi */
  ESI = (pop32());
  /* 112517f8 pop edi */
  EDI = (pop32());
  /* 112517f9 ret  */
  ESPCHK(0x112517a0u, _esp0);
  ESP += 4; return;
L_112517fa:;
  /* 112517fa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11251800 je 0x11251814 */
  if (C.zf) goto L_11251814;
L_11251802:;
  /* 11251802 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11251804 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11251805 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11251806 je 0x11251896 */
  if (C.zf) goto L_11251896;
  /* 1125180c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11251812 jne 0x11251802 */
  if (!C.zf) goto L_11251802;
L_11251814:;
  /* 11251814 mov ebx, ecx */
  EBX = (ECX);
  /* 11251816 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11251819 jne 0x11251887 */
  if (!C.zf) goto L_11251887;
L_1125181b:;
  /* 1125181b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1125181d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1125181e:;
  /* 1125181e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1125181f jne 0x1125181b */
  if (!C.zf) goto L_1125181b;
  /* 11251821 pop ebx */
  EBX = (pop32());
  /* 11251822 pop esi */
  ESI = (pop32());
L_11251823:;
  /* 11251823 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11251827 pop edi */
  EDI = (pop32());
  /* 11251828 ret  */
  ESPCHK(0x112517a0u, _esp0);
  ESP += 4; return;
L_11251829:;
  /* 11251829 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1125182b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1125182e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1125182f je 0x112517e0 */
  if (C.zf) goto L_112517e0;
L_11251831:;
  /* 11251831 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11251836 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11251838 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125183a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125183d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1125183f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11251841 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11251844 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11251849 je 0x11251829 */
  if (C.zf) goto L_11251829;
  /* 1125184b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1125184d je 0x1125187b */
  if (C.zf) goto L_1125187b;
  /* 1125184f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11251851 je 0x11251871 */
  if (C.zf) goto L_11251871;
  /* 11251853 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11251859 je 0x11251867 */
  if (C.zf) goto L_11251867;
  /* 1125185b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11251861 jne 0x11251829 */
  if (!C.zf) goto L_11251829;
  /* 11251863 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11251865 jmp 0x1125187f */
  goto L_1125187f;
L_11251867:;
  /* 11251867 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125186d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1125186f jmp 0x1125187f */
  goto L_1125187f;
L_11251871:;
  /* 11251871 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11251877 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11251879 jmp 0x1125187f */
  goto L_1125187f;
L_1125187b:;
  /* 1125187b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125187d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1125187f:;
  /* 1125187f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11251882 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11251884 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11251885 je 0x11251891 */
  if (C.zf) goto L_11251891;
L_11251887:;
  /* 11251887 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11251889:;
  /* 11251889 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1125188b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1125188e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1125188f jne 0x11251889 */
  if (!C.zf) goto L_11251889;
L_11251891:;
  /* 11251891 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11251894 jne 0x1125181b */
  if (!C.zf) goto L_1125181b;
L_11251896:;
  /* 11251896 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1125189a pop ebx */
  EBX = (pop32());
  /* 1125189b pop esi */
  ESI = (pop32());
  /* 1125189c pop edi */
  EDI = (pop32());
  /* 1125189d ret  */
  ESPCHK(0x112517a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118a0 @ 0x112518a0 (348 bytes, 114 insns) [1 switch table(s)] */
void f_112518a0(void) {
  FTRACE(0x112518a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112518a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112518a1 mov ebp, esp */
  EBP = (ESP);
  /* 112518a3 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112518a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112518a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112518ab mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 112518ae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112518b1 lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 112518b4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112518b7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112518ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112518bc mov dword ptr [ebp - 0x6c], ecx */
  w32((uint32_t)(EBP + -0x6c), (ECX));
  /* 112518bf mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 112518c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112518c5 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
  /* 112518c8 cmp dword ptr [ebp - 0x6c], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x6c))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112518cc ja 0x1125190e */
  if ((!C.cf&&!C.zf)) goto L_1125190e;
  /* 112518ce mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 112518d1 jmp dword ptr [eax*4 + 0x112519fc] */
  switch (EAX) {
    case 0: goto L_112518d8;
    case 1: goto L_112518f3;
    case 2: goto L_112518e1;
    case 3: goto L_112518ea;
    case 4: goto L_112518d8;
    case 5: goto L_1125190e;
    case 6: goto L_11251905;
    case 7: goto L_112518fc;
    default: x86_unimpl("switch@0x112518d1 out of table"); return;
  }
L_112518d8:;
  /* 112518d8 mov dword ptr [ebp - 4], 8 */
  w32((uint32_t)(EBP + -0x4), (0x8u));
  /* 112518df jmp 0x11251915 */
  goto L_11251915;
L_112518e1:;
  /* 112518e1 mov dword ptr [ebp - 4], 0x11 */
  w32((uint32_t)(EBP + -0x4), (0x11u));
  /* 112518e8 jmp 0x11251915 */
  goto L_11251915;
L_112518ea:;
  /* 112518ea mov dword ptr [ebp - 4], 0x12 */
  w32((uint32_t)(EBP + -0x4), (0x12u));
  /* 112518f1 jmp 0x11251915 */
  goto L_11251915;
L_112518f3:;
  /* 112518f3 mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 112518fa jmp 0x11251915 */
  goto L_11251915;
L_112518fc:;
  /* 112518fc mov dword ptr [ebp - 4], 0x10 */
  w32((uint32_t)(EBP + -0x4), (0x10u));
  /* 11251903 jmp 0x11251915 */
  goto L_11251915;
L_11251905:;
  /* 11251905 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11251908 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
L_1125190e:;
  /* 1125190e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11251915:;
  /* 11251915 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251919 je 0x112519aa */
  if (C.zf) goto L_112519aa;
  /* 1125191f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11251922 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11251924 push eax */
  push32((uint32_t)(EAX));
  /* 11251925 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11251928 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125192b push ecx */
  push32((uint32_t)(ECX));
  /* 1125192c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125192f push edx */
  push32((uint32_t)(EDX));
  /* 11251930 call 0x11258600 */
  push32(0x11251935u); f_11258600();
  /* 11251935 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11251938 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125193a jne 0x112519aa */
  if (!C.zf) goto L_112519aa;
  /* 1125193c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125193f mov dword ptr [ebp - 0x70], eax */
  w32((uint32_t)(EBP + -0x70), (EAX));
  /* 11251942 cmp dword ptr [ebp - 0x70], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251946 je 0x11251956 */
  if (C.zf) goto L_11251956;
  /* 11251948 cmp dword ptr [ebp - 0x70], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125194c je 0x11251956 */
  if (C.zf) goto L_11251956;
  /* 1125194e cmp dword ptr [ebp - 0x70], 0x1d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x1du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251952 je 0x11251956 */
  if (C.zf) goto L_11251956;
  /* 11251954 jmp 0x1125197c */
  goto L_1125197c;
L_11251956:;
  /* 11251956 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11251959 or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1125195c mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1125195f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11251962 and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11251965 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11251968 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1125196b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125196e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11251971 mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
  /* 11251974 mov edx, dword ptr [eax + 0x14] */
  EDX = (r32((uint32_t)(EAX + 0x14)));
  /* 11251977 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 1125197a jmp 0x11251984 */
  goto L_11251984;
L_1125197c:;
  /* 1125197c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125197f and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11251981 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11251984:;
  /* 11251984 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11251987 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125198a push ecx */
  push32((uint32_t)(ECX));
  /* 1125198b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125198e add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11251991 push edx */
  push32((uint32_t)(EDX));
  /* 11251992 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251995 push eax */
  push32((uint32_t)(EAX));
  /* 11251996 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251999 push ecx */
  push32((uint32_t)(ECX));
  /* 1125199a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125199d push edx */
  push32((uint32_t)(EDX));
  /* 1125199e lea eax, [ebp - 0x68] */
  EAX = ((uint32_t)(EBP + -0x68));
  /* 112519a1 push eax */
  push32((uint32_t)(EAX));
  /* 112519a2 call 0x11258130 */
  push32(0x112519a7u); f_11258130();
  /* 112519a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112519aa:;
  /* 112519aa push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 112519af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112519b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112519b4 push edx */
  push32((uint32_t)(EDX));
  /* 112519b5 call 0x11258b70 */
  push32(0x112519bau); f_11258b70();
  /* 112519ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112519bd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112519c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112519c7 cmp dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112519ca je 0x112519e4 */
  if (C.zf) goto L_112519e4;
  /* 112519cc cmp dword ptr [0x1127f728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1127f728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112519d3 jne 0x112519e4 */
  if (!C.zf) goto L_112519e4;
  /* 112519d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112519d8 push ecx */
  push32((uint32_t)(ECX));
  /* 112519d9 call 0x11258b20 */
  push32(0x112519deu); f_11258b20();
  /* 112519de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112519e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112519e4:;
  /* 112519e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112519e8 jne 0x112519f8 */
  if (!C.zf) goto L_112519f8;
  /* 112519ea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112519ed mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112519ef push eax */
  push32((uint32_t)(EAX));
  /* 112519f0 call 0x11258a20 */
  push32(0x112519f5u); f_11258a20();
  /* 112519f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112519f8:;
  /* 112519f8 mov esp, ebp */
  ESP = (EBP);
  /* 112519fa pop ebp */
  EBP = (pop32());
  /* 112519fb ret  */
  ESPCHK(0x112518a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a20 @ 0x11251a20 (31 bytes, 18 insns) */
void f_11251a20(void) {
  FTRACE(0x11251a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11251a21 mov ebp, esp */
  EBP = (ESP);
  /* 11251a23 push ecx */
  push32((uint32_t)(ECX));
  /* 11251a24 push ebx */
  push32((uint32_t)(EBX));
  /* 11251a25 push esi */
  push32((uint32_t)(ESI));
  /* 11251a26 push edi */
  push32((uint32_t)(EDI));
  /* 11251a27 wait  */
  /* wait (no observable integer/reg state) */
  /* 11251a28 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11251a2b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251a2f push eax */
  push32((uint32_t)(EAX));
  /* 11251a30 call 0x11251e10 */
  push32(0x11251a35u); f_11251e10();
  /* 11251a35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11251a38 pop edi */
  EDI = (pop32());
  /* 11251a39 pop esi */
  ESI = (pop32());
  /* 11251a3a pop ebx */
  EBX = (pop32());
  /* 11251a3b mov esp, ebp */
  ESP = (EBP);
  /* 11251a3d pop ebp */
  EBP = (pop32());
  /* 11251a3e ret  */
  ESPCHK(0x11251a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a40 @ 0x11251a40 (32 bytes, 18 insns) */
void f_11251a40(void) {
  FTRACE(0x11251a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11251a41 mov ebp, esp */
  EBP = (ESP);
  /* 11251a43 push ecx */
  push32((uint32_t)(ECX));
  /* 11251a44 push ebx */
  push32((uint32_t)(EBX));
  /* 11251a45 push esi */
  push32((uint32_t)(ESI));
  /* 11251a46 push edi */
  push32((uint32_t)(EDI));
  /* 11251a47 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11251a4a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11251a4c mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251a50 push eax */
  push32((uint32_t)(EAX));
  /* 11251a51 call 0x11251e10 */
  push32(0x11251a56u); f_11251e10();
  /* 11251a56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11251a59 pop edi */
  EDI = (pop32());
  /* 11251a5a pop esi */
  ESI = (pop32());
  /* 11251a5b pop ebx */
  EBX = (pop32());
  /* 11251a5c mov esp, ebp */
  ESP = (EBP);
  /* 11251a5e pop ebp */
  EBP = (pop32());
  /* 11251a5f ret  */
  ESPCHK(0x11251a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a60 @ 0x11251a60 (79 bytes, 34 insns) */
void f_11251a60(void) {
  FTRACE(0x11251a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11251a61 mov ebp, esp */
  EBP = (ESP);
  /* 11251a63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11251a66 push ebx */
  push32((uint32_t)(EBX));
  /* 11251a67 push esi */
  push32((uint32_t)(ESI));
  /* 11251a68 push edi */
  push32((uint32_t)(EDI));
  /* 11251a69 wait  */
  /* wait (no observable integer/reg state) */
  /* 11251a6a fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 11251a6d mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 11251a71 push eax */
  push32((uint32_t)(EAX));
  /* 11251a72 call 0x11251b30 */
  push32(0x11251a77u); f_11251b30();
  /* 11251a77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11251a7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11251a7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251a80 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 11251a83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11251a86 not edx */
  EDX = (~(EDX));
  /* 11251a88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11251a8b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11251a8d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11251a8f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11251a92 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11251a95 push ecx */
  push32((uint32_t)(ECX));
  /* 11251a96 call 0x11251cb0 */
  push32(0x11251a9bu); f_11251cb0();
  /* 11251a9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11251a9e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11251aa2 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11251aa5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11251aa8 pop edi */
  EDI = (pop32());
  /* 11251aa9 pop esi */
  ESI = (pop32());
  /* 11251aaa pop ebx */
  EBX = (pop32());
  /* 11251aab mov esp, ebp */
  ESP = (EBP);
  /* 11251aad pop ebp */
  EBP = (pop32());
  /* 11251aae ret  */
  ESPCHK(0x11251a60u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x11251ab0 (26 bytes, 11 insns) */
void f_11251ab0(void) {
  FTRACE(0x11251ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11251ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11251ab3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11251ab6 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11251abb push eax */
  push32((uint32_t)(EAX));
  /* 11251abc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251abf push ecx */
  push32((uint32_t)(ECX));
  /* 11251ac0 call 0x11251a60 */
  push32(0x11251ac5u); f_11251a60();
  /* 11251ac5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11251ac8 pop ebp */
  EBP = (pop32());
  /* 11251ac9 ret  */
  ESPCHK(0x11251ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ad0 @ 0x11251ad0 (88 bytes, 33 insns) */
void f_11251ad0(void) {
  FTRACE(0x11251ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11251ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11251ad3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11251ad6 push ebx */
  push32((uint32_t)(EBX));
  /* 11251ad7 push esi */
  push32((uint32_t)(ESI));
  /* 11251ad8 push edi */
  push32((uint32_t)(EDI));
  /* 11251ad9 call 0x112516d0 */
  push32(0x11251adeu); f_112516d0();
  /* 11251ade mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11251ae0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11251ae3 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 11251ae5 call 0x1124be40 */
  push32(0x11251aeau); f_1124be40();
  /* 11251aea cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251aee je 0x11251b21 */
  if (C.zf) goto L_11251b21;
  /* 11251af0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251af3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11251af6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11251af8 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 11251afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11251aff je 0x11251b21 */
  if (C.zf) goto L_11251b21;
  /* 11251b01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251b04 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11251b07 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11251b0a mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11251b0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11251b10 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11251b17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11251b1a mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_11251b21:;
  /* 11251b21 pop edi */
  EDI = (pop32());
  /* 11251b22 pop esi */
  ESI = (pop32());
  /* 11251b23 pop ebx */
  EBX = (pop32());
  /* 11251b24 mov esp, ebp */
  ESP = (EBP);
  /* 11251b26 pop ebp */
  EBP = (pop32());
  /* 11251b27 ret  */
  ESPCHK(0x11251ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b30 @ 0x11251b30 (377 bytes, 115 insns) */
void f_11251b30(void) {
  FTRACE(0x11251b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11251b31 mov ebp, esp */
  EBP = (ESP);
  /* 11251b33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11251b36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11251b3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251b40 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11251b45 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11251b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11251b4a je 0x11251b55 */
  if (C.zf) goto L_11251b55;
  /* 11251b4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251b4f or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11251b52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11251b55:;
  /* 11251b55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251b58 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11251b5e and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11251b61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11251b63 je 0x11251b6d */
  if (C.zf) goto L_11251b6d;
  /* 11251b65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251b68 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11251b6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11251b6d:;
  /* 11251b6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251b70 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11251b76 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11251b79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11251b7b je 0x11251b86 */
  if (C.zf) goto L_11251b86;
  /* 11251b7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251b80 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11251b83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11251b86:;
  /* 11251b86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251b89 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11251b8e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11251b91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11251b93 je 0x11251b9e */
  if (C.zf) goto L_11251b9e;
  /* 11251b95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251b98 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11251b9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11251b9e:;
  /* 11251b9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251ba1 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11251ba7 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11251baa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11251bac je 0x11251bb6 */
  if (C.zf) goto L_11251bb6;
  /* 11251bae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251bb1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11251bb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11251bb6:;
  /* 11251bb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251bb9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11251bbf and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11251bc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11251bc4 je 0x11251bd2 */
  if (C.zf) goto L_11251bd2;
  /* 11251bc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251bc9 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11251bcf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11251bd2:;
  /* 11251bd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251bd5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11251bda and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11251bdf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11251be2 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251be9 jg 0x11251c05 */
  if ((!C.zf&&C.sf==C.of)) goto L_11251c05;
  /* 11251beb cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251bf2 je 0x11251c18 */
  if (C.zf) goto L_11251c18;
  /* 11251bf4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251bf8 je 0x11251c10 */
  if (C.zf) goto L_11251c10;
  /* 11251bfa cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251c01 je 0x11251c23 */
  if (C.zf) goto L_11251c23;
  /* 11251c03 jmp 0x11251c37 */
  goto L_11251c37;
L_11251c05:;
  /* 11251c05 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251c0c je 0x11251c2e */
  if (C.zf) goto L_11251c2e;
  /* 11251c0e jmp 0x11251c37 */
  goto L_11251c37;
L_11251c10:;
  /* 11251c10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251c13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11251c16 jmp 0x11251c37 */
  goto L_11251c37;
L_11251c18:;
  /* 11251c18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251c1b or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11251c1e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11251c21 jmp 0x11251c37 */
  goto L_11251c37;
L_11251c23:;
  /* 11251c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251c26 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11251c29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11251c2c jmp 0x11251c37 */
  goto L_11251c37;
L_11251c2e:;
  /* 11251c2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251c31 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11251c34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11251c37:;
  /* 11251c37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251c3a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11251c40 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11251c46 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11251c49 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251c4d je 0x11251c79 */
  if (C.zf) goto L_11251c79;
  /* 11251c4f cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251c56 je 0x11251c6b */
  if (C.zf) goto L_11251c6b;
  /* 11251c58 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251c5f je 0x11251c63 */
  if (C.zf) goto L_11251c63;
  /* 11251c61 jmp 0x11251c85 */
  goto L_11251c85;
L_11251c63:;
  /* 11251c63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251c66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11251c69 jmp 0x11251c85 */
  goto L_11251c85;
L_11251c6b:;
  /* 11251c6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251c6e or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 11251c74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11251c77 jmp 0x11251c85 */
  goto L_11251c85;
L_11251c79:;
  /* 11251c79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251c7c or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 11251c82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11251c85:;
  /* 11251c85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251c88 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11251c8d and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 11251c92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11251c94 je 0x11251ca2 */
  if (C.zf) goto L_11251ca2;
  /* 11251c96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251c99 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 11251c9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11251ca2:;
  /* 11251ca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251ca5 mov esp, ebp */
  ESP = (EBP);
  /* 11251ca7 pop ebp */
  EBP = (pop32());
  /* 11251ca8 ret  */
  ESPCHK(0x11251b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cb0 @ 0x11251cb0 (346 bytes, 106 insns) */
void f_11251cb0(void) {
  FTRACE(0x11251cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11251cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11251cb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11251cb6 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11251cbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251cbf and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11251cc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11251cc4 je 0x11251cd1 */
  if (C.zf) goto L_11251cd1;
  /* 11251cc6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251cca or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 11251ccd mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11251cd1:;
  /* 11251cd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251cd4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11251cd7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11251cd9 je 0x11251ce5 */
  if (C.zf) goto L_11251ce5;
  /* 11251cdb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251cdf or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11251ce1 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11251ce5:;
  /* 11251ce5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251ce8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11251ceb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11251ced je 0x11251cfa */
  if (C.zf) goto L_11251cfa;
  /* 11251cef mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251cf3 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11251cf6 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11251cfa:;
  /* 11251cfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251cfd and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11251d00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11251d02 je 0x11251d0f */
  if (C.zf) goto L_11251d0f;
  /* 11251d04 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251d08 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11251d0b mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11251d0f:;
  /* 11251d0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251d12 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11251d15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11251d17 je 0x11251d23 */
  if (C.zf) goto L_11251d23;
  /* 11251d19 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251d1d or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11251d1f mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11251d23:;
  /* 11251d23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251d26 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 11251d2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11251d2e je 0x11251d3b */
  if (C.zf) goto L_11251d3b;
  /* 11251d30 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251d34 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 11251d37 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11251d3b:;
  /* 11251d3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251d3e and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 11251d43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11251d46 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251d4d ja 0x11251d69 */
  if ((!C.cf&&!C.zf)) goto L_11251d69;
  /* 11251d4f cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251d56 je 0x11251d7e */
  if (C.zf) goto L_11251d7e;
  /* 11251d58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251d5c je 0x11251d74 */
  if (C.zf) goto L_11251d74;
  /* 11251d5e cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251d65 je 0x11251d8b */
  if (C.zf) goto L_11251d8b;
  /* 11251d67 jmp 0x11251da3 */
  goto L_11251da3;
L_11251d69:;
  /* 11251d69 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251d70 je 0x11251d98 */
  if (C.zf) goto L_11251d98;
  /* 11251d72 jmp 0x11251da3 */
  goto L_11251da3;
L_11251d74:;
  /* 11251d74 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251d78 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11251d7c jmp 0x11251da3 */
  goto L_11251da3;
L_11251d7e:;
  /* 11251d7e mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251d82 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11251d85 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11251d89 jmp 0x11251da3 */
  goto L_11251da3;
L_11251d8b:;
  /* 11251d8b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251d8f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11251d92 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11251d96 jmp 0x11251da3 */
  goto L_11251da3;
L_11251d98:;
  /* 11251d98 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251d9c or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11251d9f mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11251da3:;
  /* 11251da3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251da6 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 11251dac mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11251daf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251db3 je 0x11251dc9 */
  if (C.zf) goto L_11251dc9;
  /* 11251db5 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251dbc je 0x11251dd6 */
  if (C.zf) goto L_11251dd6;
  /* 11251dbe cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251dc5 je 0x11251de3 */
  if (C.zf) goto L_11251de3;
  /* 11251dc7 jmp 0x11251deb */
  goto L_11251deb;
L_11251dc9:;
  /* 11251dc9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251dcd or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 11251dd0 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11251dd4 jmp 0x11251deb */
  goto L_11251deb;
L_11251dd6:;
  /* 11251dd6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251dda or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11251ddd mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11251de1 jmp 0x11251deb */
  goto L_11251deb;
L_11251de3:;
  /* 11251de3 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251de7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11251deb:;
  /* 11251deb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251dee and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 11251df3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11251df5 je 0x11251e02 */
  if (C.zf) goto L_11251e02;
  /* 11251df7 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251dfb or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11251dfe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11251e02:;
  /* 11251e02 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11251e06 mov esp, ebp */
  ESP = (EBP);
  /* 11251e08 pop ebp */
  EBP = (pop32());
  /* 11251e09 ret  */
  ESPCHK(0x11251cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e10 @ 0x11251e10 (167 bytes, 56 insns) */
void f_11251e10(void) {
  FTRACE(0x11251e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11251e11 mov ebp, esp */
  EBP = (ESP);
  /* 11251e13 push ecx */
  push32((uint32_t)(ECX));
  /* 11251e14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11251e1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251e1e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11251e23 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11251e26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11251e28 je 0x11251e33 */
  if (C.zf) goto L_11251e33;
  /* 11251e2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251e2d or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11251e30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11251e33:;
  /* 11251e33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251e36 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11251e3c and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11251e3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11251e41 je 0x11251e4b */
  if (C.zf) goto L_11251e4b;
  /* 11251e43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251e46 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11251e48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11251e4b:;
  /* 11251e4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251e4e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11251e54 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11251e57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11251e59 je 0x11251e64 */
  if (C.zf) goto L_11251e64;
  /* 11251e5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251e5e or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11251e61 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11251e64:;
  /* 11251e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251e67 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11251e6c and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11251e6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11251e71 je 0x11251e7c */
  if (C.zf) goto L_11251e7c;
  /* 11251e73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251e76 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11251e79 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11251e7c:;
  /* 11251e7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251e7f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11251e85 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11251e88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11251e8a je 0x11251e94 */
  if (C.zf) goto L_11251e94;
  /* 11251e8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251e8f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11251e91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11251e94:;
  /* 11251e94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251e97 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11251e9d and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11251ea0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11251ea2 je 0x11251eb0 */
  if (C.zf) goto L_11251eb0;
  /* 11251ea4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251ea7 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11251ead mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11251eb0:;
  /* 11251eb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251eb3 mov esp, ebp */
  ESP = (EBP);
  /* 11251eb5 pop ebp */
  EBP = (pop32());
  /* 11251eb6 ret  */
  ESPCHK(0x11251e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ec0 @ 0x11251ec0 (183 bytes, 58 insns) */
void f_11251ec0(void) {
  FTRACE(0x11251ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11251ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11251ec3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11251ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251ec9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11251ecc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251ed1 ja 0x11251eea */
  if ((!C.cf&&!C.zf)) goto L_11251eea;
  /* 11251ed3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251ed6 mov edx, dword ptr [0x1127efec] */
  EDX = (r32((uint32_t)(0x1127efec)));
  /* 11251edc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11251ede mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11251ee2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11251ee5 jmp 0x11251f73 */
  goto L_11251f73;
L_11251eea:;
  /* 11251eea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251eed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11251ef0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11251ef6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11251efc mov edx, dword ptr [0x1127efec] */
  EDX = (r32((uint32_t)(0x1127efec)));
  /* 11251f02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11251f04 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11251f08 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11251f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11251f0f je 0x11251f33 */
  if (C.zf) goto L_11251f33;
  /* 11251f11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251f14 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11251f17 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11251f1d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11251f20 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11251f23 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11251f26 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11251f2a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11251f31 jmp 0x11251f44 */
  goto L_11251f44;
L_11251f33:;
  /* 11251f33 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11251f36 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11251f39 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11251f3d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11251f44:;
  /* 11251f44 push 1 */
  push32((uint32_t)(0x1u));
  /* 11251f46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11251f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11251f4a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11251f4d push ecx */
  push32((uint32_t)(ECX));
  /* 11251f4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11251f51 push edx */
  push32((uint32_t)(EDX));
  /* 11251f52 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11251f55 push eax */
  push32((uint32_t)(EAX));
  /* 11251f56 push 1 */
  push32((uint32_t)(0x1u));
  /* 11251f58 call 0x11258c30 */
  push32(0x11251f5du); f_11258c30();
  /* 11251f5d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11251f60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11251f62 jne 0x11251f68 */
  if (!C.zf) goto L_11251f68;
  /* 11251f64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11251f66 jmp 0x11251f73 */
  goto L_11251f73;
L_11251f68:;
  /* 11251f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11251f6b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11251f70 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11251f73:;
  /* 11251f73 mov esp, ebp */
  ESP = (EBP);
  /* 11251f75 pop ebp */
  EBP = (pop32());
  /* 11251f76 ret  */
  ESPCHK(0x11251ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f80 @ 0x11251f80 (11 bytes, 6 insns) */
void f_11251f80(void) {
  FTRACE(0x11251f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11251f81 mov ebp, esp */
  EBP = (ESP);
  /* 11251f83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251f86 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11251f89 pop ebp */
  EBP = (pop32());
  /* 11251f8a ret  */
  ESPCHK(0x11251f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f90 @ 0x11251f90 (147 bytes, 43 insns) */
void f_11251f90(void) {
  FTRACE(0x11251f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11251f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11251f91 mov ebp, esp */
  EBP = (ESP);
  /* 11251f93 push ecx */
  push32((uint32_t)(ECX));
  /* 11251f94 cmp dword ptr [0x112816e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251f9b jne 0x11251fb7 */
  if (!C.zf) goto L_11251fb7;
  /* 11251f9d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251fa1 jl 0x11251fb2 */
  if ((C.sf!=C.of)) goto L_11251fb2;
  /* 11251fa3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251fa7 jg 0x11251fb2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11251fb2;
  /* 11251fa9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251fac add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11251faf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11251fb2:;
  /* 11251fb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251fb5 jmp 0x1125201f */
  goto L_1125201f;
L_11251fb7:;
  /* 11251fb7 push 0x11282af4 */
  push32((uint32_t)(0x11282af4u));
  /* 11251fbc call dword ptr [0x11283460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283460))), 0x11251fc2u);
  /* 11251fc2 cmp dword ptr [0x11282ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11251fc9 je 0x11251fe9 */
  if (C.zf) goto L_11251fe9;
  /* 11251fcb push 0x11282af4 */
  push32((uint32_t)(0x11282af4u));
  /* 11251fd0 call dword ptr [0x11283454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283454))), 0x11251fd6u);
  /* 11251fd6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11251fd8 call 0x1124c720 */
  push32(0x11251fddu); f_1124c720();
  /* 11251fdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11251fe0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11251fe7 jmp 0x11251ff0 */
  goto L_11251ff0;
L_11251fe9:;
  /* 11251fe9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11251ff0:;
  /* 11251ff0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11251ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 11251ff4 call 0x11252030 */
  push32(0x11251ff9u); f_11252030();
  /* 11251ff9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11251ffc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11251fff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252003 je 0x11252011 */
  if (C.zf) goto L_11252011;
  /* 11252005 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11252007 call 0x1124c7c0 */
  push32(0x1125200cu); f_1124c7c0();
  /* 1125200c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125200f jmp 0x1125201c */
  goto L_1125201c;
L_11252011:;
  /* 11252011 push 0x11282af4 */
  push32((uint32_t)(0x11282af4u));
  /* 11252016 call dword ptr [0x11283454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283454))), 0x1125201cu);
L_1125201c:;
  /* 1125201c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1125201f:;
  /* 1125201f mov esp, ebp */
  ESP = (EBP);
  /* 11252021 pop ebp */
  EBP = (pop32());
  /* 11252022 ret  */
  ESPCHK(0x11251f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012030 @ 0x11252030 (299 bytes, 91 insns) */
void f_11252030(void) {
  FTRACE(0x11252030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252030 push ebp */
  push32((uint32_t)(EBP));
  /* 11252031 mov ebp, esp */
  EBP = (ESP);
  /* 11252033 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252036 cmp dword ptr [0x112816e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125203d jne 0x1125205c */
  if (!C.zf) goto L_1125205c;
  /* 1125203f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252043 jl 0x11252054 */
  if ((C.sf!=C.of)) goto L_11252054;
  /* 11252045 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252049 jg 0x11252054 */
  if ((!C.zf&&C.sf==C.of)) goto L_11252054;
  /* 1125204b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125204e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252051 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11252054:;
  /* 11252054 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252057 jmp 0x11252157 */
  goto L_11252157;
L_1125205c:;
  /* 1125205c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252063 jge 0x112520a3 */
  if ((C.sf==C.of)) goto L_112520a3;
  /* 11252065 cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125206c jle 0x11252081 */
  if ((C.zf||C.sf!=C.of)) goto L_11252081;
  /* 1125206e push 1 */
  push32((uint32_t)(0x1u));
  /* 11252070 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252073 push ecx */
  push32((uint32_t)(ECX));
  /* 11252074 call 0x11251ec0 */
  push32(0x11252079u); f_11251ec0();
  /* 11252079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125207c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1125207f jmp 0x11252095 */
  goto L_11252095;
L_11252081:;
  /* 11252081 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252084 mov eax, dword ptr [0x1127efec] */
  EAX = (r32((uint32_t)(0x1127efec)));
  /* 11252089 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125208b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1125208f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11252092 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11252095:;
  /* 11252095 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252099 jne 0x112520a3 */
  if (!C.zf) goto L_112520a3;
  /* 1125209b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125209e jmp 0x11252157 */
  goto L_11252157;
L_112520a3:;
  /* 112520a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112520a6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 112520a9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112520af and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112520b5 mov eax, dword ptr [0x1127efec] */
  EAX = (r32((uint32_t)(0x1127efec)));
  /* 112520ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112520bc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 112520c0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 112520c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112520c8 je 0x112520ec */
  if (C.zf) goto L_112520ec;
  /* 112520ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112520cd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 112520d0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112520d6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 112520d9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 112520dc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 112520df mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 112520e3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 112520ea jmp 0x112520fd */
  goto L_112520fd;
L_112520ec:;
  /* 112520ec mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 112520ef mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 112520f2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 112520f6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_112520fd:;
  /* 112520fd push 1 */
  push32((uint32_t)(0x1u));
  /* 112520ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11252101 push 3 */
  push32((uint32_t)(0x3u));
  /* 11252103 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11252106 push edx */
  push32((uint32_t)(EDX));
  /* 11252107 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125210a push eax */
  push32((uint32_t)(EAX));
  /* 1125210b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1125210e push ecx */
  push32((uint32_t)(ECX));
  /* 1125210f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11252114 mov edx, dword ptr [0x112816e0] */
  EDX = (r32((uint32_t)(0x112816e0)));
  /* 1125211a push edx */
  push32((uint32_t)(EDX));
  /* 1125211b call 0x11259840 */
  push32(0x11252120u); f_11259840();
  /* 11252120 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252123 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11252126 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125212a jne 0x11252131 */
  if (!C.zf) goto L_11252131;
  /* 1125212c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125212f jmp 0x11252157 */
  goto L_11252157;
L_11252131:;
  /* 11252131 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252135 jne 0x11252141 */
  if (!C.zf) goto L_11252141;
  /* 11252137 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125213a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125213f jmp 0x11252157 */
  goto L_11252157;
L_11252141:;
  /* 11252141 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11252144 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11252149 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1125214c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11252152 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11252155 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11252157:;
  /* 11252157 mov esp, ebp */
  ESP = (EBP);
  /* 11252159 pop ebp */
  EBP = (pop32());
  /* 1125215a ret  */
  ESPCHK(0x11252030u, _esp0);
  ESP += 4; return;
}

/* FUN_10012160 @ 0x11252160 (132 bytes, 51 insns) */
void f_11252160(void) {
  FTRACE(0x11252160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252160 push ebp */
  push32((uint32_t)(EBP));
  /* 11252161 mov ebp, esp */
  EBP = (ESP);
  /* 11252163 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252166 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252169 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125216a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1125216d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125216f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11252172 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11252175 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252178 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 1125217d jns 0x11252184 */
  if (!C.sf) goto L_11252184;
  /* 1125217f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11252180 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11252183 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11252184:;
  /* 11252184 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11252189 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125218b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125218e or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11252191 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11252194 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11252196 not edx */
  EDX = (~(EDX));
  /* 11252198 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1125219b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125219e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112521a1 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 112521a4 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 112521a7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112521a9 je 0x112521af */
  if (C.zf) goto L_112521af;
  /* 112521ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112521ad jmp 0x112521e0 */
  goto L_112521e0;
L_112521af:;
  /* 112521af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112521b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112521b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112521b8 jmp 0x112521c3 */
  goto L_112521c3;
L_112521ba:;
  /* 112521ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112521bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112521c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_112521c3:;
  /* 112521c3 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112521c7 jge 0x112521db */
  if ((C.sf==C.of)) goto L_112521db;
  /* 112521c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112521cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112521cf cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112521d3 je 0x112521d9 */
  if (C.zf) goto L_112521d9;
  /* 112521d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112521d7 jmp 0x112521e0 */
  goto L_112521e0;
L_112521d9:;
  /* 112521d9 jmp 0x112521ba */
  goto L_112521ba;
L_112521db:;
  /* 112521db mov eax, 1 */
  EAX = (0x1u);
L_112521e0:;
  /* 112521e0 mov esp, ebp */
  ESP = (EBP);
  /* 112521e2 pop ebp */
  EBP = (pop32());
  /* 112521e3 ret  */
  ESPCHK(0x11252160u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x112521f0 (168 bytes, 63 insns) */
void f_112521f0(void) {
  FTRACE(0x112521f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112521f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112521f1 mov ebp, esp */
  EBP = (ESP);
  /* 112521f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112521f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112521f9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112521fa and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112521fd add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112521ff sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11252202 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11252205 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252208 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 1125220d jns 0x11252214 */
  if (!C.sf) goto L_11252214;
  /* 1125220f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11252210 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11252213 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11252214:;
  /* 11252214 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11252219 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125221b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125221e mov edx, 1 */
  EDX = (0x1u);
  /* 11252223 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11252226 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11252228 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1125222b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125222e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252231 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11252234 push edx */
  push32((uint32_t)(EDX));
  /* 11252235 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11252238 push eax */
  push32((uint32_t)(EAX));
  /* 11252239 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125223c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125223f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11252242 push eax */
  push32((uint32_t)(EAX));
  /* 11252243 call 0x11259ba0 */
  push32(0x11252248u); f_11259ba0();
  /* 11252248 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125224b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1125224e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11252251 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252254 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11252257 jmp 0x11252262 */
  goto L_11252262;
L_11252259:;
  /* 11252259 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125225c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125225f mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11252262:;
  /* 11252262 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252266 jl 0x11252291 */
  if ((C.sf!=C.of)) goto L_11252291;
  /* 11252268 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125226c je 0x11252291 */
  if (C.zf) goto L_11252291;
  /* 1125226e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11252271 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252274 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11252277 push edx */
  push32((uint32_t)(EDX));
  /* 11252278 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125227a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125227d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252280 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11252283 push edx */
  push32((uint32_t)(EDX));
  /* 11252284 call 0x11259ba0 */
  push32(0x11252289u); f_11259ba0();
  /* 11252289 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125228c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1125228f jmp 0x11252259 */
  goto L_11252259;
L_11252291:;
  /* 11252291 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11252294 mov esp, ebp */
  ESP = (EBP);
  /* 11252296 pop ebp */
  EBP = (pop32());
  /* 11252297 ret  */
  ESPCHK(0x112521f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100122a0 @ 0x112522a0 (219 bytes, 78 insns) */
void f_112522a0(void) {
  FTRACE(0x112522a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112522a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112522a1 mov ebp, esp */
  EBP = (ESP);
  /* 112522a3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112522a6 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 112522ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112522b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112522b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112522b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112522b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112522bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112522bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112522c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112522c3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112522c6 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112522c8 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112522cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112522ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112522d1 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 112522d7 jns 0x112522de */
  if (!C.sf) goto L_112522de;
  /* 112522d9 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 112522da or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 112522dd inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_112522de:;
  /* 112522de mov eax, 0x1f */
  EAX = (0x1fu);
  /* 112522e3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112522e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112522e8 mov edx, 1 */
  EDX = (0x1u);
  /* 112522ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112522f0 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112522f2 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 112522f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112522f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112522fb mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 112522fe and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 11252301 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11252303 je 0x1125232f */
  if (C.zf) goto L_1125232f;
  /* 11252305 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11252308 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125230b push eax */
  push32((uint32_t)(EAX));
  /* 1125230c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125230f push ecx */
  push32((uint32_t)(ECX));
  /* 11252310 call 0x11252160 */
  push32(0x11252315u); f_11252160();
  /* 11252315 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125231a jne 0x1125232f */
  if (!C.zf) goto L_1125232f;
  /* 1125231c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125231f push edx */
  push32((uint32_t)(EDX));
  /* 11252320 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252323 push eax */
  push32((uint32_t)(EAX));
  /* 11252324 call 0x112521f0 */
  push32(0x11252329u); f_112521f0();
  /* 11252329 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125232c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1125232f:;
  /* 1125232f or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11252332 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11252335 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11252337 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125233a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125233d mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11252340 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11252342 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11252345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252348 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1125234b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125234e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252351 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11252354 jmp 0x1125235f */
  goto L_1125235f;
L_11252356:;
  /* 11252356 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11252359 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125235c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1125235f:;
  /* 1125235f cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252363 jge 0x11252374 */
  if ((C.sf==C.of)) goto L_11252374;
  /* 11252365 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11252368 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125236b mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 11252372 jmp 0x11252356 */
  goto L_11252356;
L_11252374:;
  /* 11252374 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11252377 mov esp, ebp */
  ESP = (EBP);
  /* 11252379 pop ebp */
  EBP = (pop32());
  /* 1125237a ret  */
  ESPCHK(0x112522a0u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x11252380 (76 bytes, 28 insns) */
void f_11252380(void) {
  FTRACE(0x11252380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252380 push ebp */
  push32((uint32_t)(EBP));
  /* 11252381 mov ebp, esp */
  EBP = (ESP);
  /* 11252383 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252386 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125238c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125238f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11252392 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11252399 jmp 0x112523a4 */
  goto L_112523a4;
L_1125239b:;
  /* 1125239b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125239e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112523a1 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_112523a4:;
  /* 112523a4 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112523a8 jge 0x112523c8 */
  if ((C.sf==C.of)) goto L_112523c8;
  /* 112523aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112523ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112523b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112523b2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112523b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112523b7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112523ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112523bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112523c0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112523c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112523c6 jmp 0x1125239b */
  goto L_1125239b;
L_112523c8:;
  /* 112523c8 mov esp, ebp */
  ESP = (EBP);
  /* 112523ca pop ebp */
  EBP = (pop32());
  /* 112523cb ret  */
  ESPCHK(0x11252380u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x112523d0 (47 bytes, 17 insns) */
void f_112523d0(void) {
  FTRACE(0x112523d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112523d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112523d1 mov ebp, esp */
  EBP = (ESP);
  /* 112523d3 push ecx */
  push32((uint32_t)(ECX));
  /* 112523d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112523db jmp 0x112523e6 */
  goto L_112523e6;
L_112523dd:;
  /* 112523dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112523e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112523e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112523e6:;
  /* 112523e6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112523ea jge 0x112523fb */
  if ((C.sf==C.of)) goto L_112523fb;
  /* 112523ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112523ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112523f2 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 112523f9 jmp 0x112523dd */
  goto L_112523dd;
L_112523fb:;
  /* 112523fb mov esp, ebp */
  ESP = (EBP);
  /* 112523fd pop ebp */
  EBP = (pop32());
  /* 112523fe ret  */
  ESPCHK(0x112523d0u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x11252400 (55 bytes, 21 insns) */
void f_11252400(void) {
  FTRACE(0x11252400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252400 push ebp */
  push32((uint32_t)(EBP));
  /* 11252401 mov ebp, esp */
  EBP = (ESP);
  /* 11252403 push ecx */
  push32((uint32_t)(ECX));
  /* 11252404 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1125240b jmp 0x11252416 */
  goto L_11252416;
L_1125240d:;
  /* 1125240d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11252410 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252413 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11252416:;
  /* 11252416 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125241a jge 0x1125242e */
  if ((C.sf==C.of)) goto L_1125242e;
  /* 1125241c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125241f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252422 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252426 je 0x1125242c */
  if (C.zf) goto L_1125242c;
  /* 11252428 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125242a jmp 0x11252433 */
  goto L_11252433;
L_1125242c:;
  /* 1125242c jmp 0x1125240d */
  goto L_1125240d;
L_1125242e:;
  /* 1125242e mov eax, 1 */
  EAX = (0x1u);
L_11252433:;
  /* 11252433 mov esp, ebp */
  ESP = (EBP);
  /* 11252435 pop ebp */
  EBP = (pop32());
  /* 11252436 ret  */
  ESPCHK(0x11252400u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x11252440 (236 bytes, 82 insns) */
void f_11252440(void) {
  FTRACE(0x11252440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252440 push ebp */
  push32((uint32_t)(EBP));
  /* 11252441 mov ebp, esp */
  EBP = (ESP);
  /* 11252443 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252446 push esi */
  push32((uint32_t)(ESI));
  /* 11252447 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125244a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125244b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1125244e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252450 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11252453 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11252456 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252459 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 1125245e jns 0x11252465 */
  if (!C.sf) goto L_11252465;
  /* 11252460 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11252461 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11252464 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11252465:;
  /* 11252465 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11252468 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125246b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125246e shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11252470 not edx */
  EDX = (~(EDX));
  /* 11252472 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11252475 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1125247c mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11252483 jmp 0x1125248e */
  goto L_1125248e;
L_11252485:;
  /* 11252485 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11252488 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125248b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1125248e:;
  /* 1125248e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252492 jge 0x112524e1 */
  if ((C.sf==C.of)) goto L_112524e1;
  /* 11252494 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11252497 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125249a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1125249d and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 112524a0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112524a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112524a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112524a9 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 112524ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112524af shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112524b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112524b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112524b7 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 112524ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112524bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112524c0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 112524c3 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 112524c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112524c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112524cc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 112524cf mov ecx, 0x20 */
  ECX = (0x20u);
  /* 112524d4 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112524d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112524da shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112524dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112524df jmp 0x11252485 */
  goto L_11252485;
L_112524e1:;
  /* 112524e1 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 112524e8 jmp 0x112524f3 */
  goto L_112524f3;
L_112524ea:;
  /* 112524ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112524ed sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112524f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_112524f3:;
  /* 112524f3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112524f7 jl 0x11252527 */
  if ((C.sf!=C.of)) goto L_11252527;
  /* 112524f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112524fc cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112524ff jl 0x11252518 */
  if ((C.sf!=C.of)) goto L_11252518;
  /* 11252501 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11252504 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252507 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125250a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125250d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11252510 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 11252513 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11252516 jmp 0x11252525 */
  goto L_11252525;
L_11252518:;
  /* 11252518 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125251b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125251e mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11252525:;
  /* 11252525 jmp 0x112524ea */
  goto L_112524ea;
L_11252527:;
  /* 11252527 pop esi */
  ESI = (pop32());
  /* 11252528 mov esp, ebp */
  ESP = (EBP);
  /* 1125252a pop ebp */
  EBP = (pop32());
  /* 1125252b ret  */
  ESPCHK(0x11252440u, _esp0);
  ESP += 4; return;
}

/* FUN_10012530 @ 0x11252530 (578 bytes, 188 insns) */
void f_11252530(void) {
  FTRACE(0x11252530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252530 push ebp */
  push32((uint32_t)(EBP));
  /* 11252531 mov ebp, esp */
  EBP = (ESP);
  /* 11252533 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252539 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125253b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 1125253f and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11252545 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125254b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125254e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252551 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11252553 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11252557 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1125255c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1125255f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252562 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11252565 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11252568 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125256b mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 1125256e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11252571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252574 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11252576 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11252579 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1125257c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1125257f cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252586 jne 0x112525c0 */
  if (!C.zf) goto L_112525c0;
  /* 11252588 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1125258f lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11252592 push ecx */
  push32((uint32_t)(ECX));
  /* 11252593 call 0x11252400 */
  push32(0x11252598u); f_11252400();
  /* 11252598 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125259b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125259d je 0x112525a8 */
  if (C.zf) goto L_112525a8;
  /* 1125259f mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 112525a6 jmp 0x112525bb */
  goto L_112525bb;
L_112525a8:;
  /* 112525a8 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 112525ab push edx */
  push32((uint32_t)(EDX));
  /* 112525ac call 0x112523d0 */
  push32(0x112525b1u); f_112523d0();
  /* 112525b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112525b4 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_112525bb:;
  /* 112525bb jmp 0x1125270c */
  goto L_1125270c;
L_112525c0:;
  /* 112525c0 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 112525c3 push eax */
  push32((uint32_t)(EAX));
  /* 112525c4 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 112525c7 push ecx */
  push32((uint32_t)(ECX));
  /* 112525c8 call 0x11252380 */
  push32(0x112525cdu); f_11252380();
  /* 112525cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112525d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112525d3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112525d6 push eax */
  push32((uint32_t)(EAX));
  /* 112525d7 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 112525da push ecx */
  push32((uint32_t)(ECX));
  /* 112525db call 0x112522a0 */
  push32(0x112525e0u); f_112522a0();
  /* 112525e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112525e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112525e5 je 0x112525f0 */
  if (C.zf) goto L_112525f0;
  /* 112525e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112525ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112525ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112525f0:;
  /* 112525f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112525f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112525f6 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 112525f9 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112525fc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112525ff jge 0x11252620 */
  if ((C.sf==C.of)) goto L_11252620;
  /* 11252601 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11252604 push eax */
  push32((uint32_t)(EAX));
  /* 11252605 call 0x112523d0 */
  push32(0x1125260au); f_112523d0();
  /* 1125260a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125260d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11252614 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1125261b jmp 0x1125270c */
  goto L_1125270c;
L_11252620:;
  /* 11252620 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11252623 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11252626 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252629 jg 0x11252690 */
  if ((!C.zf&&C.sf==C.of)) goto L_11252690;
  /* 1125262b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125262e mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11252631 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252634 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11252637 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 1125263a push edx */
  push32((uint32_t)(EDX));
  /* 1125263b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1125263e push eax */
  push32((uint32_t)(EAX));
  /* 1125263f call 0x11252380 */
  push32(0x11252644u); f_11252380();
  /* 11252644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252647 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1125264a push ecx */
  push32((uint32_t)(ECX));
  /* 1125264b lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 1125264e push edx */
  push32((uint32_t)(EDX));
  /* 1125264f call 0x11252440 */
  push32(0x11252654u); f_11252440();
  /* 11252654 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252657 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125265a mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1125265d push ecx */
  push32((uint32_t)(ECX));
  /* 1125265e lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11252661 push edx */
  push32((uint32_t)(EDX));
  /* 11252662 call 0x112522a0 */
  push32(0x11252667u); f_112522a0();
  /* 11252667 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125266a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125266d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11252670 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252673 push ecx */
  push32((uint32_t)(ECX));
  /* 11252674 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11252677 push edx */
  push32((uint32_t)(EDX));
  /* 11252678 call 0x11252440 */
  push32(0x1125267du); f_11252440();
  /* 1125267d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252680 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11252687 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1125268e jmp 0x1125270c */
  goto L_1125270c;
L_11252690:;
  /* 11252690 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11252693 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11252696 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252698 jl 0x112526db */
  if ((C.sf!=C.of)) goto L_112526db;
  /* 1125269a lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 1125269d push edx */
  push32((uint32_t)(EDX));
  /* 1125269e call 0x112523d0 */
  push32(0x112526a3u); f_112523d0();
  /* 112526a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112526a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112526a9 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 112526ae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112526b1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112526b4 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112526b7 push edx */
  push32((uint32_t)(EDX));
  /* 112526b8 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 112526bb push eax */
  push32((uint32_t)(EAX));
  /* 112526bc call 0x11252440 */
  push32(0x112526c1u); f_11252440();
  /* 112526c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112526c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112526c7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112526c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112526cc add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112526cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112526d2 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 112526d9 jmp 0x1125270c */
  goto L_1125270c;
L_112526db:;
  /* 112526db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112526de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112526e1 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112526e4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112526e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112526ea and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112526ef mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112526f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112526f5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112526f8 push edx */
  push32((uint32_t)(EDX));
  /* 112526f9 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 112526fc push eax */
  push32((uint32_t)(EAX));
  /* 112526fd call 0x11252440 */
  push32(0x11252702u); f_11252440();
  /* 11252702 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252705 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_1125270c:;
  /* 1125270c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125270f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11252712 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252715 mov eax, 0x20 */
  EAX = (0x20u);
  /* 1125271a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125271c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1125271f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11252722 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11252725 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11252727 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125272a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1125272c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125272f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11252731 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252733 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11252739 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1125273b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1125273e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11252741 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252745 jne 0x1125275a */
  if (!C.zf) goto L_1125275a;
  /* 11252747 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125274a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1125274d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11252750 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252753 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11252756 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11252758 jmp 0x1125276b */
  goto L_1125276b;
L_1125275a:;
  /* 1125275a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125275d cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252761 jne 0x1125276b */
  if (!C.zf) goto L_1125276b;
  /* 11252763 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252766 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11252769 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_1125276b:;
  /* 1125276b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1125276e mov esp, ebp */
  ESP = (EBP);
  /* 11252770 pop ebp */
  EBP = (pop32());
  /* 11252771 ret  */
  ESPCHK(0x11252530u, _esp0);
  ESP += 4; return;
}

/* FUN_10012780 @ 0x11252780 (26 bytes, 11 insns) */
void f_11252780(void) {
  FTRACE(0x11252780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252780 push ebp */
  push32((uint32_t)(EBP));
  /* 11252781 mov ebp, esp */
  EBP = (ESP);
  /* 11252783 push 0x1127f1f8 */
  push32((uint32_t)(0x1127f1f8u));
  /* 11252788 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125278b push eax */
  push32((uint32_t)(EAX));
  /* 1125278c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125278f push ecx */
  push32((uint32_t)(ECX));
  /* 11252790 call 0x11252530 */
  push32(0x11252795u); f_11252530();
  /* 11252795 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252798 pop ebp */
  EBP = (pop32());
  /* 11252799 ret  */
  ESPCHK(0x11252780u, _esp0);
  ESP += 4; return;
}

/* FUN_100127a0 @ 0x112527a0 (26 bytes, 11 insns) */
void f_112527a0(void) {
  FTRACE(0x112527a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112527a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112527a1 mov ebp, esp */
  EBP = (ESP);
  /* 112527a3 push 0x1127f210 */
  push32((uint32_t)(0x1127f210u));
  /* 112527a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112527ab push eax */
  push32((uint32_t)(EAX));
  /* 112527ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112527af push ecx */
  push32((uint32_t)(ECX));
  /* 112527b0 call 0x11252530 */
  push32(0x112527b5u); f_11252530();
  /* 112527b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112527b8 pop ebp */
  EBP = (pop32());
  /* 112527b9 ret  */
  ESPCHK(0x112527a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100127c0 @ 0x112527c0 (191 bytes, 58 insns) */
void f_112527c0(void) {
  FTRACE(0x112527c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112527c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112527c1 mov ebp, esp */
  EBP = (ESP);
  /* 112527c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112527c6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 112527cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112527d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112527d2 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 112527d6 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 112527dc mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 112527e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112527e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112527e5 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 112527e9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 112527ee mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 112527f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112527f5 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 112527f8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 112527fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112527fe mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11252801 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11252804 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252807 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11252809 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1125280c shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1125280f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11252812 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11252814 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11252817 push ecx */
  push32((uint32_t)(ECX));
  /* 11252818 call 0x112522a0 */
  push32(0x1125281du); f_112522a0();
  /* 1125281d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252820 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11252822 je 0x11252837 */
  if (C.zf) goto L_11252837;
  /* 11252824 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 1125282b mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 1125282f add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11252833 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11252837:;
  /* 11252837 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125283a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125283f cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252844 jne 0x1125284d */
  if (!C.zf) goto L_1125284d;
  /* 11252846 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1125284d:;
  /* 1125284d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252850 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11252853 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11252856 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252859 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125285c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1125285e mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11252861 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11252867 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125286a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125286f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11252871 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252874 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 11252878 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125287b mov esp, ebp */
  ESP = (EBP);
  /* 1125287d pop ebp */
  EBP = (pop32());
  /* 1125287e ret  */
  ESPCHK(0x112527c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012880 @ 0x11252880 (54 bytes, 24 insns) */
void f_11252880(void) {
  FTRACE(0x11252880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252880 push ebp */
  push32((uint32_t)(EBP));
  /* 11252881 mov ebp, esp */
  EBP = (ESP);
  /* 11252883 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252886 push 0 */
  push32((uint32_t)(0x0u));
  /* 11252888 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125288a push 0 */
  push32((uint32_t)(0x0u));
  /* 1125288c push 0 */
  push32((uint32_t)(0x0u));
  /* 1125288e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252891 push eax */
  push32((uint32_t)(EAX));
  /* 11252892 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11252895 push ecx */
  push32((uint32_t)(ECX));
  /* 11252896 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11252899 push edx */
  push32((uint32_t)(EDX));
  /* 1125289a call 0x11259ea0 */
  push32(0x1125289fu); f_11259ea0();
  /* 1125289f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112528a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112528a5 push eax */
  push32((uint32_t)(EAX));
  /* 112528a6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 112528a9 push ecx */
  push32((uint32_t)(ECX));
  /* 112528aa call 0x11252780 */
  push32(0x112528afu); f_11252780();
  /* 112528af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112528b2 mov esp, ebp */
  ESP = (EBP);
  /* 112528b4 pop ebp */
  EBP = (pop32());
  /* 112528b5 ret  */
  ESPCHK(0x11252880u, _esp0);
  ESP += 4; return;
}

/* FUN_100128c0 @ 0x112528c0 (54 bytes, 24 insns) */
void f_112528c0(void) {
  FTRACE(0x112528c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112528c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112528c1 mov ebp, esp */
  EBP = (ESP);
  /* 112528c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112528c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112528c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112528ca push 0 */
  push32((uint32_t)(0x0u));
  /* 112528cc push 1 */
  push32((uint32_t)(0x1u));
  /* 112528ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112528d1 push eax */
  push32((uint32_t)(EAX));
  /* 112528d2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 112528d5 push ecx */
  push32((uint32_t)(ECX));
  /* 112528d6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 112528d9 push edx */
  push32((uint32_t)(EDX));
  /* 112528da call 0x11259ea0 */
  push32(0x112528dfu); f_11259ea0();
  /* 112528df add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112528e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112528e5 push eax */
  push32((uint32_t)(EAX));
  /* 112528e6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 112528e9 push ecx */
  push32((uint32_t)(ECX));
  /* 112528ea call 0x112527c0 */
  push32(0x112528efu); f_112527c0();
  /* 112528ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112528f2 mov esp, ebp */
  ESP = (EBP);
  /* 112528f4 pop ebp */
  EBP = (pop32());
  /* 112528f5 ret  */
  ESPCHK(0x112528c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012900 @ 0x11252900 (54 bytes, 24 insns) */
void f_11252900(void) {
  FTRACE(0x11252900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252900 push ebp */
  push32((uint32_t)(EBP));
  /* 11252901 mov ebp, esp */
  EBP = (ESP);
  /* 11252903 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252906 push 0 */
  push32((uint32_t)(0x0u));
  /* 11252908 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125290a push 0 */
  push32((uint32_t)(0x0u));
  /* 1125290c push 0 */
  push32((uint32_t)(0x0u));
  /* 1125290e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252911 push eax */
  push32((uint32_t)(EAX));
  /* 11252912 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11252915 push ecx */
  push32((uint32_t)(ECX));
  /* 11252916 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11252919 push edx */
  push32((uint32_t)(EDX));
  /* 1125291a call 0x11259ea0 */
  push32(0x1125291fu); f_11259ea0();
  /* 1125291f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252922 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252925 push eax */
  push32((uint32_t)(EAX));
  /* 11252926 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11252929 push ecx */
  push32((uint32_t)(ECX));
  /* 1125292a call 0x112527a0 */
  push32(0x1125292fu); f_112527a0();
  /* 1125292f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252932 mov esp, ebp */
  ESP = (EBP);
  /* 11252934 pop ebp */
  EBP = (pop32());
  /* 11252935 ret  */
  ESPCHK(0x11252900u, _esp0);
  ESP += 4; return;
}

/* FUN_10012940 @ 0x11252940 (250 bytes, 90 insns) */
void f_11252940(void) {
  FTRACE(0x11252940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252940 push ebp */
  push32((uint32_t)(EBP));
  /* 11252941 mov ebp, esp */
  EBP = (ESP);
  /* 11252943 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252949 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125294c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125294f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11252952 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11252955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11252958 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1125295b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125295e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252961 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11252964:;
  /* 11252964 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252968 jle 0x112529ab */
  if ((C.zf||C.sf!=C.of)) goto L_112529ab;
  /* 1125296a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125296d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11252970 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11252972 je 0x11252988 */
  if (C.zf) goto L_11252988;
  /* 11252974 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11252977 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1125297a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1125297d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11252980 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252983 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11252986 jmp 0x1125298f */
  goto L_1125298f;
L_11252988:;
  /* 11252988 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_1125298f:;
  /* 1125298f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11252992 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11252995 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11252997 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125299a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125299d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112529a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112529a3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112529a6 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 112529a9 jmp 0x11252964 */
  goto L_11252964;
L_112529ab:;
  /* 112529ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112529ae mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 112529b1 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112529b5 jl 0x112529f4 */
  if ((C.sf!=C.of)) goto L_112529f4;
  /* 112529b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112529ba movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112529bd cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112529c0 jl 0x112529f4 */
  if ((C.sf!=C.of)) goto L_112529f4;
  /* 112529c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112529c5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112529c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112529cb:;
  /* 112529cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112529ce movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112529d1 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112529d4 jne 0x112529e7 */
  if (!C.zf) goto L_112529e7;
  /* 112529d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112529d9 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 112529dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112529df sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112529e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112529e5 jmp 0x112529cb */
  goto L_112529cb;
L_112529e7:;
  /* 112529e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112529ea mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112529ec add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 112529ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112529f2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_112529f4:;
  /* 112529f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112529f7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112529fa cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112529fd jne 0x11252a10 */
  if (!C.zf) goto L_11252a10;
  /* 112529ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11252a02 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11252a05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252a08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11252a0b mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11252a0e jmp 0x11252a36 */
  goto L_11252a36;
L_11252a10:;
  /* 11252a10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252a13 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252a16 push eax */
  push32((uint32_t)(EAX));
  /* 11252a17 call 0x11250db0 */
  push32(0x11252a1cu); f_11250db0();
  /* 11252a1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252a1f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252a22 push eax */
  push32((uint32_t)(EAX));
  /* 11252a23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252a26 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252a29 push ecx */
  push32((uint32_t)(ECX));
  /* 11252a2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252a2d push edx */
  push32((uint32_t)(EDX));
  /* 11252a2e call 0x11252c90 */
  push32(0x11252a33u); f_11252c90();
  /* 11252a33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11252a36:;
  /* 11252a36 mov esp, ebp */
  ESP = (EBP);
  /* 11252a38 pop ebp */
  EBP = (pop32());
  /* 11252a39 ret  */
  ESPCHK(0x11252940u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a40 @ 0x11252a40 (119 bytes, 44 insns) */
void f_11252a40(void) {
  FTRACE(0x11252a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11252a41 mov ebp, esp */
  EBP = (ESP);
  /* 11252a43 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252a46 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11252a49 push eax */
  push32((uint32_t)(EAX));
  /* 11252a4a lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11252a4d push ecx */
  push32((uint32_t)(ECX));
  /* 11252a4e call 0x11252ac0 */
  push32(0x11252a53u); f_11252ac0();
  /* 11252a53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252a56 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 11252a59 push edx */
  push32((uint32_t)(EDX));
  /* 11252a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11252a5c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11252a5e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252a61 mov eax, esp */
  EAX = (ESP);
  /* 11252a63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11252a66 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11252a68 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11252a6b mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11252a6e mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11252a72 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 11252a76 call 0x1125aa20 */
  push32(0x11252a7bu); f_1125aa20();
  /* 11252a7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252a7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11252a81 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11252a84 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11252a88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11252a8b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11252a8d movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11252a91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11252a94 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11252a97 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 11252a9a push ecx */
  push32((uint32_t)(ECX));
  /* 11252a9b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11252a9e push edx */
  push32((uint32_t)(EDX));
  /* 11252a9f call 0x11250f30 */
  push32(0x11252aa4u); f_11250f30();
  /* 11252aa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252aa7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11252aaa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11252aad mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11252ab0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11252ab3 mov esp, ebp */
  ESP = (EBP);
  /* 11252ab5 pop ebp */
  EBP = (pop32());
  /* 11252ab6 ret  */
  ESPCHK(0x11252a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ac0 @ 0x11252ac0 (354 bytes, 104 insns) */
void f_11252ac0(void) {
  FTRACE(0x11252ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11252ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11252ac3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252ac6 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 11252acd mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11252ad3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252ad6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11252ad8 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 11252adc and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11252ae2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11252ae5 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11252ae9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252aec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11252aee mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11252af2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11252af7 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11252afb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252afe mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11252b01 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11252b07 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11252b0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11252b0d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11252b0f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11252b12 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11252b15 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11252b1b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11252b1e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252b22 je 0x11252b37 */
  if (C.zf) goto L_11252b37;
  /* 11252b24 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252b2b je 0x11252b2f */
  if (C.zf) goto L_11252b2f;
  /* 11252b2d jmp 0x11252b7a */
  goto L_11252b7a;
L_11252b2f:;
  /* 11252b2f mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 11252b35 jmp 0x11252b95 */
  goto L_11252b95;
L_11252b37:;
  /* 11252b37 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252b3b jne 0x11252b64 */
  if (!C.zf) goto L_11252b64;
  /* 11252b3d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252b41 jne 0x11252b64 */
  if (!C.zf) goto L_11252b64;
  /* 11252b43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252b46 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11252b4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252b50 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11252b56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252b59 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 11252b5f jmp 0x11252c1e */
  goto L_11252c1e;
L_11252b64:;
  /* 11252b64 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11252b68 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252b6d mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11252b71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11252b78 jmp 0x11252b95 */
  goto L_11252b95;
L_11252b7a:;
  /* 11252b7a mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11252b7e sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11252b83 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11252b87 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11252b8b add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252b91 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11252b95:;
  /* 11252b95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11252b98 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11252b9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11252b9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11252ba0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11252ba3 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 11252ba6 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11252ba8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252bab mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11252bae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11252bb1 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11252bb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252bb7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11252bb9:;
  /* 11252bb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252bbc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11252bbf and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11252bc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11252bc7 jne 0x11252c04 */
  if (!C.zf) goto L_11252c04;
  /* 11252bc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252bcc mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11252bcf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11252bd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252bd4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11252bd6 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11252bdc neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11252bde sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252be0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11252be2 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11252be4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252be7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11252bea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252bed mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11252bef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11252bf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252bf4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11252bf6 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11252bfa sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11252bfe mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11252c02 jmp 0x11252bb9 */
  goto L_11252bb9;
L_11252c04:;
  /* 11252c04 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11252c07 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11252c0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11252c0f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11252c15 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11252c17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252c1a mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_11252c1e:;
  /* 11252c1e mov esp, ebp */
  ESP = (EBP);
  /* 11252c20 pop ebp */
  EBP = (pop32());
  /* 11252c21 ret  */
  ESPCHK(0x11252ac0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11252c30 (88 bytes, 40 insns) */
void f_11252c30(void) {
  FTRACE(0x11252c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252c30 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11252c34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11252c38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11252c3a je 0x11252c83 */
  if (C.zf) goto L_11252c83;
  /* 11252c3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11252c3e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11252c42 push edi */
  push32((uint32_t)(EDI));
  /* 11252c43 mov edi, ecx */
  EDI = (ECX);
  /* 11252c45 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252c48 jb 0x11252c77 */
  if (C.cf) goto L_11252c77;
  /* 11252c4a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11252c4c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11252c4f je 0x11252c59 */
  if (C.zf) goto L_11252c59;
  /* 11252c51 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11252c53:;
  /* 11252c53 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11252c55 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11252c56 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11252c57 jne 0x11252c53 */
  if (!C.zf) goto L_11252c53;
L_11252c59:;
  /* 11252c59 mov ecx, eax */
  ECX = (EAX);
  /* 11252c5b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11252c5e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252c60 mov ecx, eax */
  ECX = (EAX);
  /* 11252c62 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11252c65 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252c67 mov ecx, edx */
  ECX = (EDX);
  /* 11252c69 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11252c6c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11252c6f je 0x11252c77 */
  if (C.zf) goto L_11252c77;
  /* 11252c71 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11252c73 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11252c75 je 0x11252c7d */
  if (C.zf) goto L_11252c7d;
L_11252c77:;
  /* 11252c77 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11252c79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11252c7a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11252c7b jne 0x11252c77 */
  if (!C.zf) goto L_11252c77;
L_11252c7d:;
  /* 11252c7d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11252c81 pop edi */
  EDI = (pop32());
  /* 11252c82 ret  */
  ESPCHK(0x11252c30u, _esp0);
  ESP += 4; return;
L_11252c83:;
  /* 11252c83 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11252c87 ret  */
  ESPCHK(0x11252c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c90 @ 0x11252c90 (664 bytes, 258 insns) [15 switch table(s)] */
void f_11252c90(void) {
  FTRACE(0x11252c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11252c91 mov ebp, esp */
  EBP = (ESP);
  /* 11252c93 push edi */
  push32((uint32_t)(EDI));
  /* 11252c94 push esi */
  push32((uint32_t)(ESI));
  /* 11252c95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11252c98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11252c9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11252c9e mov eax, ecx */
  EAX = (ECX);
  /* 11252ca0 mov edx, ecx */
  EDX = (ECX);
  /* 11252ca2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252ca4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252ca6 jbe 0x11252cb0 */
  if ((C.cf||C.zf)) goto L_11252cb0;
  /* 11252ca8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252caa jb 0x11252e28 */
  if (C.cf) goto L_11252e28;
L_11252cb0:;
  /* 11252cb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11252cb6 jne 0x11252ccc */
  if (!C.zf) goto L_11252ccc;
  /* 11252cb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11252cbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11252cbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252cc1 jb 0x11252cec */
  if (C.cf) goto L_11252cec;
  /* 11252cc3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11252cc5 jmp dword ptr [edx*4 + 0x11252dd8] */
  switch (EDX) {
    case 0: goto L_11252de8;
    case 1: goto L_11252df0;
    case 2: goto L_11252dfc;
    case 3: goto L_11252e10;
    default: x86_unimpl("switch@0x11252cc5 out of table"); return;
  }
L_11252ccc:;
  /* 11252ccc mov eax, edi */
  EAX = (EDI);
  /* 11252cce mov edx, 3 */
  EDX = (0x3u);
  /* 11252cd3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252cd6 jb 0x11252ce4 */
  if (C.cf) goto L_11252ce4;
  /* 11252cd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11252cdb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11252cdd jmp dword ptr [eax*4 + 0x11252cf0] */
  switch (EAX) {
    case 1: goto L_11252d00;
    case 2: goto L_11252d2c;
    case 3: goto L_11252d50;
    default: x86_unimpl("switch@0x11252cdd out of table"); return;
  }
L_11252ce4:;
  /* 11252ce4 jmp dword ptr [ecx*4 + 0x11252de8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11252de8)))); return;
  /* 11252ceb nop  */
  /* nop */
L_11252cec:;
  /* 11252cec jmp dword ptr [ecx*4 + 0x11252d6c] */
  switch (ECX) {
    case 0: goto L_11252dcf;
    case 1: goto L_11252dbc;
    case 2: goto L_11252db4;
    case 3: goto L_11252dac;
    case 4: goto L_11252da4;
    case 5: goto L_11252d9c;
    case 6: goto L_11252d94;
    case 7: goto L_11252d8c;
    default: x86_unimpl("switch@0x11252cec out of table"); return;
  }
  /* 11252cf3 nop  */
  /* nop */
L_11252d00:;
  /* 11252d00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11252d02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11252d04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11252d06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11252d09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11252d0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11252d0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11252d12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11252d15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11252d18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11252d1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252d1e jb 0x11252cec */
  if (C.cf) goto L_11252cec;
  /* 11252d20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11252d22 jmp dword ptr [edx*4 + 0x11252dd8] */
  switch (EDX) {
    case 0: goto L_11252de8;
    case 1: goto L_11252df0;
    case 2: goto L_11252dfc;
    case 3: goto L_11252e10;
    default: x86_unimpl("switch@0x11252d22 out of table"); return;
  }
  /* 11252d29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11252d2c:;
  /* 11252d2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11252d2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11252d30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11252d32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11252d35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11252d38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11252d3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11252d3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11252d41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252d44 jb 0x11252cec */
  if (C.cf) goto L_11252cec;
  /* 11252d46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11252d48 jmp dword ptr [edx*4 + 0x11252dd8] */
  switch (EDX) {
    case 0: goto L_11252de8;
    case 1: goto L_11252df0;
    case 2: goto L_11252dfc;
    case 3: goto L_11252e10;
    default: x86_unimpl("switch@0x11252d48 out of table"); return;
  }
  /* 11252d4f nop  */
  /* nop */
L_11252d50:;
  /* 11252d50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11252d52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11252d54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11252d56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11252d57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11252d5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11252d5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252d5e jb 0x11252cec */
  if (C.cf) goto L_11252cec;
  /* 11252d60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11252d62 jmp dword ptr [edx*4 + 0x11252dd8] */
  switch (EDX) {
    case 0: goto L_11252de8;
    case 1: goto L_11252df0;
    case 2: goto L_11252dfc;
    case 3: goto L_11252e10;
    default: x86_unimpl("switch@0x11252d62 out of table"); return;
  }
  /* 11252d69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11252d8c:;
  /* 11252d8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11252d90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11252d94:;
  /* 11252d94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11252d98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11252d9c:;
  /* 11252d9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11252da0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11252da4:;
  /* 11252da4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11252da8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11252dac:;
  /* 11252dac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11252db0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11252db4:;
  /* 11252db4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11252db8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11252dbc:;
  /* 11252dbc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11252dc0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11252dc4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11252dcb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11252dcd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11252dcf:;
  /* 11252dcf jmp dword ptr [edx*4 + 0x11252dd8] */
  switch (EDX) {
    case 0: goto L_11252de8;
    case 1: goto L_11252df0;
    case 2: goto L_11252dfc;
    case 3: goto L_11252e10;
    default: x86_unimpl("switch@0x11252dcf out of table"); return;
  }
  /* 11252dd6 mov edi, edi */
  EDI = (EDI);
L_11252de8:;
  /* 11252de8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252deb pop esi */
  ESI = (pop32());
  /* 11252dec pop edi */
  EDI = (pop32());
  /* 11252ded leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11252dee ret  */
  ESPCHK(0x11252c90u, _esp0);
  ESP += 4; return;
  /* 11252def nop  */
  /* nop */
L_11252df0:;
  /* 11252df0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11252df2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11252df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252df7 pop esi */
  ESI = (pop32());
  /* 11252df8 pop edi */
  EDI = (pop32());
  /* 11252df9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11252dfa ret  */
  ESPCHK(0x11252c90u, _esp0);
  ESP += 4; return;
  /* 11252dfb nop  */
  /* nop */
L_11252dfc:;
  /* 11252dfc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11252dfe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11252e00 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11252e03 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11252e06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252e09 pop esi */
  ESI = (pop32());
  /* 11252e0a pop edi */
  EDI = (pop32());
  /* 11252e0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11252e0c ret  */
  ESPCHK(0x11252c90u, _esp0);
  ESP += 4; return;
  /* 11252e0d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11252e10:;
  /* 11252e10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11252e12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11252e14 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11252e17 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11252e1a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11252e1d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11252e20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252e23 pop esi */
  ESI = (pop32());
  /* 11252e24 pop edi */
  EDI = (pop32());
  /* 11252e25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11252e26 ret  */
  ESPCHK(0x11252c90u, _esp0);
  ESP += 4; return;
  /* 11252e27 nop  */
  /* nop */
L_11252e28:;
  /* 11252e28 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11252e2c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11252e30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11252e36 jne 0x11252e5c */
  if (!C.zf) goto L_11252e5c;
  /* 11252e38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11252e3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11252e3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252e41 jb 0x11252e50 */
  if (C.cf) goto L_11252e50;
  /* 11252e43 std  */
  C.df=1;
  /* 11252e44 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11252e46 cld  */
  C.df=0;
  /* 11252e47 jmp dword ptr [edx*4 + 0x11252f70] */
  switch (EDX) {
    case 0: goto L_11252f80;
    case 1: goto L_11252f88;
    case 2: goto L_11252f98;
    case 3: goto L_11252fac;
    default: x86_unimpl("switch@0x11252e47 out of table"); return;
  }
  /* 11252e4e mov edi, edi */
  EDI = (EDI);
L_11252e50:;
  /* 11252e50 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11252e52 jmp dword ptr [ecx*4 + 0x11252f20] */
  switch (ECX) {
    case 0: goto L_11252f67;
    default: x86_unimpl("switch@0x11252e52 out of table"); return;
  }
  /* 11252e59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11252e5c:;
  /* 11252e5c mov eax, edi */
  EAX = (EDI);
  /* 11252e5e mov edx, 3 */
  EDX = (0x3u);
  /* 11252e63 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252e66 jb 0x11252e74 */
  if (C.cf) goto L_11252e74;
  /* 11252e68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11252e6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252e6d jmp dword ptr [eax*4 + 0x11252e78] */
  switch (EAX) {
    case 1: goto L_11252e88;
    case 2: goto L_11252ea8;
    case 3: goto L_11252ed0;
    default: x86_unimpl("switch@0x11252e6d out of table"); return;
  }
L_11252e74:;
  /* 11252e74 jmp dword ptr [ecx*4 + 0x11252f70] */
  switch (ECX) {
    case 0: goto L_11252f80;
    case 1: goto L_11252f88;
    case 2: goto L_11252f98;
    case 3: goto L_11252fac;
    default: x86_unimpl("switch@0x11252e74 out of table"); return;
  }
  /* 11252e7b nop  */
  /* nop */
L_11252e88:;
  /* 11252e88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11252e8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11252e8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11252e90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11252e91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11252e94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11252e95 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252e98 jb 0x11252e50 */
  if (C.cf) goto L_11252e50;
  /* 11252e9a std  */
  C.df=1;
  /* 11252e9b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11252e9d cld  */
  C.df=0;
  /* 11252e9e jmp dword ptr [edx*4 + 0x11252f70] */
  switch (EDX) {
    case 0: goto L_11252f80;
    case 1: goto L_11252f88;
    case 2: goto L_11252f98;
    case 3: goto L_11252fac;
    default: x86_unimpl("switch@0x11252e9e out of table"); return;
  }
  /* 11252ea5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11252ea8:;
  /* 11252ea8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11252eab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11252ead mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11252eb0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11252eb3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11252eb6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11252eb9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252ebc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252ebf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252ec2 jb 0x11252e50 */
  if (C.cf) goto L_11252e50;
  /* 11252ec4 std  */
  C.df=1;
  /* 11252ec5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11252ec7 cld  */
  C.df=0;
  /* 11252ec8 jmp dword ptr [edx*4 + 0x11252f70] */
  switch (EDX) {
    case 0: goto L_11252f80;
    case 1: goto L_11252f88;
    case 2: goto L_11252f98;
    case 3: goto L_11252fac;
    default: x86_unimpl("switch@0x11252ec8 out of table"); return;
  }
  /* 11252ecf nop  */
  /* nop */
L_11252ed0:;
  /* 11252ed0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11252ed3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11252ed5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11252ed8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11252edb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11252ede mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11252ee1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11252ee4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11252ee7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252eea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11252eed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11252ef0 jb 0x11252e50 */
  if (C.cf) goto L_11252e50;
  /* 11252ef6 std  */
  C.df=1;
  /* 11252ef7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11252ef9 cld  */
  C.df=0;
  /* 11252efa jmp dword ptr [edx*4 + 0x11252f70] */
  switch (EDX) {
    case 0: goto L_11252f80;
    case 1: goto L_11252f88;
    case 2: goto L_11252f98;
    case 3: goto L_11252fac;
    default: x86_unimpl("switch@0x11252efa out of table"); return;
  }
  /* 11252f01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11252f04 and al, 0x2f */
  { uint32_t _r=(AL)&(0x2fu); AL = (_r); fl_logic(_r,8); }
  /* 11252f06 and eax, 0x252f2c11 */
  { uint32_t _r=(EAX)&(0x252f2c11u); EAX = (_r); fl_logic(_r,32); }
  /* 11252f0b adc dword ptr [edi + ebp], esi */
  { uint32_t _a=(r32((uint32_t)(EDI + EBP*1))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EBP*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11252f0e and eax, 0x252f3c11 */
  { uint32_t _r=(EAX)&(0x252f3c11u); EAX = (_r); fl_logic(_r,32); }
  /* 11252f13 adc dword ptr [edi + ebp + 0x25], eax */
  { uint32_t _a=(r32((uint32_t)(EDI + EBP*1 + 0x25))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EBP*1 + 0x25), (_r)); fl_add(_a,_b,_r,32); }
  /* 11252f17 adc dword ptr [edi + ebp + 0x25], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI + EBP*1 + 0x25))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EBP*1 + 0x25), (_r)); fl_add(_a,_b,_r,32); }
  /* 11252f1b adc dword ptr [edi + ebp + 0x25], edx */
  { uint32_t _a=(r32((uint32_t)(EDI + EBP*1 + 0x25))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EBP*1 + 0x25), (_r)); fl_add(_a,_b,_r,32); }
  /* 11252f24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11252f28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11252f2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11252f30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11252f34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11252f38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11252f3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11252f40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11252f44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11252f48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11252f4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11252f50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11252f54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11252f58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11252f5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11252f63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11252f65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11252f67:;
  /* 11252f67 jmp dword ptr [edx*4 + 0x11252f70] */
  switch (EDX) {
    case 0: goto L_11252f80;
    case 1: goto L_11252f88;
    case 2: goto L_11252f98;
    case 3: goto L_11252fac;
    default: x86_unimpl("switch@0x11252f67 out of table"); return;
  }
  /* 11252f6e mov edi, edi */
  EDI = (EDI);
L_11252f80:;
  /* 11252f80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252f83 pop esi */
  ESI = (pop32());
  /* 11252f84 pop edi */
  EDI = (pop32());
  /* 11252f85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11252f86 ret  */
  ESPCHK(0x11252c90u, _esp0);
  ESP += 4; return;
  /* 11252f87 nop  */
  /* nop */
L_11252f88:;
  /* 11252f88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11252f8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11252f8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252f91 pop esi */
  ESI = (pop32());
  /* 11252f92 pop edi */
  EDI = (pop32());
  /* 11252f93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11252f94 ret  */
  ESPCHK(0x11252c90u, _esp0);
  ESP += 4; return;
  /* 11252f95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11252f98:;
  /* 11252f98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11252f9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11252f9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11252fa1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11252fa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252fa7 pop esi */
  ESI = (pop32());
  /* 11252fa8 pop edi */
  EDI = (pop32());
  /* 11252fa9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11252faa ret  */
  ESPCHK(0x11252c90u, _esp0);
  ESP += 4; return;
  /* 11252fab nop  */
  /* nop */
L_11252fac:;
  /* 11252fac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11252faf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11252fb2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11252fb5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11252fb8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11252fbb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11252fbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252fc1 pop esi */
  ESI = (pop32());
  /* 11252fc2 pop edi */
  EDI = (pop32());
  /* 11252fc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11252fc4 ret  */
  ESPCHK(0x11252c90u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11252fd0 (15 bytes, 7 insns) */
void f_11252fd0(void) {
  FTRACE(0x11252fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11252fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11252fd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11252fd5 call 0x1124b290 */
  push32(0x11252fdau); f_1124b290();
  /* 11252fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252fdd pop ebp */
  EBP = (pop32());
  /* 11252fde ret  */
  ESPCHK(0x11252fd0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11252fe0 (48 bytes, 17 insns) */
void f_11252fe0(void) {
  FTRACE(0x11252fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11252fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11252fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11252fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 11252fe4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11252fe6 call 0x1124c720 */
  push32(0x11252febu); f_1124c720();
  /* 11252feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11252fee mov eax, dword ptr [0x112815fc] */
  EAX = (r32((uint32_t)(0x112815fc)));
  /* 11252ff3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11252ff6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11252ff9 mov dword ptr [0x112815fc], ecx */
  w32((uint32_t)(0x112815fc), (ECX));
  /* 11252fff push 9 */
  push32((uint32_t)(0x9u));
  /* 11253001 call 0x1124c7c0 */
  push32(0x11253006u); f_1124c7c0();
  /* 11253006 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125300c mov esp, ebp */
  ESP = (EBP);
  /* 1125300e pop ebp */
  EBP = (pop32());
  /* 1125300f ret  */
  ESPCHK(0x11252fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013010 @ 0x11253010 (10 bytes, 5 insns) */
void f_11253010(void) {
  FTRACE(0x11253010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11253010 push ebp */
  push32((uint32_t)(EBP));
  /* 11253011 mov ebp, esp */
  EBP = (ESP);
  /* 11253013 mov eax, dword ptr [0x112815fc] */
  EAX = (r32((uint32_t)(0x112815fc)));
  /* 11253018 pop ebp */
  EBP = (pop32());
  /* 11253019 ret  */
  ESPCHK(0x11253010u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11253020 (45 bytes, 19 insns) */
void f_11253020(void) {
  FTRACE(0x11253020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11253020 push ebp */
  push32((uint32_t)(EBP));
  /* 11253021 mov ebp, esp */
  EBP = (ESP);
  /* 11253023 push ecx */
  push32((uint32_t)(ECX));
  /* 11253024 mov eax, dword ptr [0x112815fc] */
  EAX = (r32((uint32_t)(0x112815fc)));
  /* 11253029 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125302c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253030 je 0x11253040 */
  if (C.zf) goto L_11253040;
  /* 11253032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253035 push ecx */
  push32((uint32_t)(ECX));
  /* 11253036 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11253039u);
  /* 11253039 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125303c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125303e jne 0x11253044 */
  if (!C.zf) goto L_11253044;
L_11253040:;
  /* 11253040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11253042 jmp 0x11253049 */
  goto L_11253049;
L_11253044:;
  /* 11253044 mov eax, 1 */
  EAX = (0x1u);
L_11253049:;
  /* 11253049 mov esp, ebp */
  ESP = (EBP);
  /* 1125304b pop ebp */
  EBP = (pop32());
  /* 1125304c ret  */
  ESPCHK(0x11253020u, _esp0);
  ESP += 4; return;
}

/* FUN_10013050 @ 0x11253050 (23 bytes, 10 insns) */
void f_11253050(void) {
  FTRACE(0x11253050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11253050 push ebp */
  push32((uint32_t)(EBP));
  /* 11253051 mov ebp, esp */
  EBP = (ESP);
  /* 11253053 mov eax, dword ptr [0x112815f8] */
  EAX = (r32((uint32_t)(0x112815f8)));
  /* 11253058 push eax */
  push32((uint32_t)(EAX));
  /* 11253059 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125305c push ecx */
  push32((uint32_t)(ECX));
  /* 1125305d call 0x11253070 */
  push32(0x11253062u); f_11253070();
  /* 11253062 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253065 pop ebp */
  EBP = (pop32());
  /* 11253066 ret  */
  ESPCHK(0x11253050u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11253070 (87 bytes, 34 insns) */
void f_11253070(void) {
  FTRACE(0x11253070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11253070 push ebp */
  push32((uint32_t)(EBP));
  /* 11253071 mov ebp, esp */
  EBP = (ESP);
  /* 11253073 push ecx */
  push32((uint32_t)(ECX));
  /* 11253074 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253078 jbe 0x1125307e */
  if ((C.cf||C.zf)) goto L_1125307e;
  /* 1125307a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125307c jmp 0x112530c3 */
  goto L_112530c3;
L_1125307e:;
  /* 1125307e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253082 ja 0x11253095 */
  if ((!C.cf&&!C.zf)) goto L_11253095;
  /* 11253084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253087 push eax */
  push32((uint32_t)(EAX));
  /* 11253088 call 0x112530d0 */
  push32(0x1125308du); f_112530d0();
  /* 1125308d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253090 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11253093 jmp 0x1125309c */
  goto L_1125309c;
L_11253095:;
  /* 11253095 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1125309c:;
  /* 1125309c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112530a0 jne 0x112530a8 */
  if (!C.zf) goto L_112530a8;
  /* 112530a2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112530a6 jne 0x112530ad */
  if (!C.zf) goto L_112530ad;
L_112530a8:;
  /* 112530a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112530ab jmp 0x112530c3 */
  goto L_112530c3;
L_112530ad:;
  /* 112530ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112530b0 push ecx */
  push32((uint32_t)(ECX));
  /* 112530b1 call 0x11253020 */
  push32(0x112530b6u); f_11253020();
  /* 112530b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112530b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112530bb jne 0x112530c1 */
  if (!C.zf) goto L_112530c1;
  /* 112530bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112530bf jmp 0x112530c3 */
  goto L_112530c3;
L_112530c1:;
  /* 112530c1 jmp 0x1125307e */
  goto L_1125307e;
L_112530c3:;
  /* 112530c3 mov esp, ebp */
  ESP = (EBP);
  /* 112530c5 pop ebp */
  EBP = (pop32());
  /* 112530c6 ret  */
  ESPCHK(0x11253070u, _esp0);
  ESP += 4; return;
}

/* FUN_100130d0 @ 0x112530d0 (109 bytes, 37 insns) */
void f_112530d0(void) {
  FTRACE(0x112530d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112530d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112530d1 mov ebp, esp */
  EBP = (ESP);
  /* 112530d3 push ecx */
  push32((uint32_t)(ECX));
  /* 112530d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112530d7 cmp eax, dword ptr [0x1127f234] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1127f234))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112530dd ja 0x1125310d */
  if ((!C.cf&&!C.zf)) goto L_1125310d;
  /* 112530df push 9 */
  push32((uint32_t)(0x9u));
  /* 112530e1 call 0x1124c720 */
  push32(0x112530e6u); f_1124c720();
  /* 112530e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112530e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112530ec push ecx */
  push32((uint32_t)(ECX));
  /* 112530ed call 0x11253c10 */
  push32(0x112530f2u); f_11253c10();
  /* 112530f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112530f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112530f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 112530fa call 0x1124c7c0 */
  push32(0x112530ffu); f_1124c7c0();
  /* 112530ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253102 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253106 je 0x1125310d */
  if (C.zf) goto L_1125310d;
  /* 11253108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125310b jmp 0x11253139 */
  goto L_11253139;
L_1125310d:;
  /* 1125310d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253111 jne 0x1125311a */
  if (!C.zf) goto L_1125311a;
  /* 11253113 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1125311a:;
  /* 1125311a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125311d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253120 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11253123 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11253126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253129 push eax */
  push32((uint32_t)(EAX));
  /* 1125312a push 0 */
  push32((uint32_t)(0x0u));
  /* 1125312c mov ecx, dword ptr [0x11282dac] */
  ECX = (r32((uint32_t)(0x11282dac)));
  /* 11253132 push ecx */
  push32((uint32_t)(ECX));
  /* 11253133 call dword ptr [0x112833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833b8))), 0x11253139u);
L_11253139:;
  /* 11253139 mov esp, ebp */
  ESP = (EBP);
  /* 1125313b pop ebp */
  EBP = (pop32());
  /* 1125313c ret  */
  ESPCHK(0x112530d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013140 @ 0x11253140 (10 bytes, 5 insns) */
void f_11253140(void) {
  FTRACE(0x11253140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11253140 push ebp */
  push32((uint32_t)(EBP));
  /* 11253141 mov ebp, esp */
  EBP = (ESP);
  /* 11253143 mov eax, 1 */
  EAX = (0x1u);
  /* 11253148 pop ebp */
  EBP = (pop32());
  /* 11253149 ret  */
  ESPCHK(0x11253140u, _esp0);
  ESP += 4; return;
}

/* FUN_10013150 @ 0x11253150 (173 bytes, 59 insns) */
void f_11253150(void) {
  FTRACE(0x11253150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11253150 push ebp */
  push32((uint32_t)(EBP));
  /* 11253151 mov ebp, esp */
  EBP = (ESP);
  /* 11253153 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253156 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125315a jbe 0x11253163 */
  if ((C.cf||C.zf)) goto L_11253163;
  /* 1125315c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125315e jmp 0x112531f9 */
  goto L_112531f9;
L_11253163:;
  /* 11253163 push 9 */
  push32((uint32_t)(0x9u));
  /* 11253165 call 0x1124c720 */
  push32(0x1125316au); f_1124c720();
  /* 1125316a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125316d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253170 push eax */
  push32((uint32_t)(EAX));
  /* 11253171 call 0x11253580 */
  push32(0x11253176u); f_11253580();
  /* 11253176 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253179 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125317c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253180 je 0x112531c1 */
  if (C.zf) goto L_112531c1;
  /* 11253182 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11253189 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125318c cmp ecx, dword ptr [0x1127f234] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1127f234))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253192 ja 0x112531b2 */
  if ((!C.cf&&!C.zf)) goto L_112531b2;
  /* 11253194 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11253197 push edx */
  push32((uint32_t)(EDX));
  /* 11253198 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125319b push eax */
  push32((uint32_t)(EAX));
  /* 1125319c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125319f push ecx */
  push32((uint32_t)(ECX));
  /* 112531a0 call 0x11254450 */
  push32(0x112531a5u); f_11254450();
  /* 112531a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112531a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112531aa je 0x112531b2 */
  if (C.zf) goto L_112531b2;
  /* 112531ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112531af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112531b2:;
  /* 112531b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 112531b4 call 0x1124c7c0 */
  push32(0x112531b9u); f_1124c7c0();
  /* 112531b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112531bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112531bf jmp 0x112531f9 */
  goto L_112531f9;
L_112531c1:;
  /* 112531c1 push 9 */
  push32((uint32_t)(0x9u));
  /* 112531c3 call 0x1124c7c0 */
  push32(0x112531c8u); f_1124c7c0();
  /* 112531c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112531cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112531cf jne 0x112531d8 */
  if (!C.zf) goto L_112531d8;
  /* 112531d1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_112531d8:;
  /* 112531d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112531db add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112531de and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 112531e0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 112531e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112531e6 push ecx */
  push32((uint32_t)(ECX));
  /* 112531e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112531ea push edx */
  push32((uint32_t)(EDX));
  /* 112531eb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112531ed mov eax, dword ptr [0x11282dac] */
  EAX = (r32((uint32_t)(0x11282dac)));
  /* 112531f2 push eax */
  push32((uint32_t)(EAX));
  /* 112531f3 call dword ptr [0x112833a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833a8))), 0x112531f9u);
L_112531f9:;
  /* 112531f9 mov esp, ebp */
  ESP = (EBP);
  /* 112531fb pop ebp */
  EBP = (pop32());
  /* 112531fc ret  */
  ESPCHK(0x11253150u, _esp0);
  ESP += 4; return;
}

/* FUN_10013200 @ 0x11253200 (490 bytes, 165 insns) */
void f_11253200(void) {
  FTRACE(0x11253200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11253200 push ebp */
  push32((uint32_t)(EBP));
  /* 11253201 mov ebp, esp */
  EBP = (ESP);
  /* 11253203 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253206 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125320a jne 0x1125321d */
  if (!C.zf) goto L_1125321d;
  /* 1125320c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125320f push eax */
  push32((uint32_t)(EAX));
  /* 11253210 call 0x11253050 */
  push32(0x11253215u); f_11253050();
  /* 11253215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253218 jmp 0x112533e6 */
  goto L_112533e6;
L_1125321d:;
  /* 1125321d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253221 jne 0x11253236 */
  if (!C.zf) goto L_11253236;
  /* 11253223 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253226 push ecx */
  push32((uint32_t)(ECX));
  /* 11253227 call 0x112533f0 */
  push32(0x1125322cu); f_112533f0();
  /* 1125322c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125322f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11253231 jmp 0x112533e6 */
  goto L_112533e6;
L_11253236:;
  /* 11253236 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1125323d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253241 ja 0x112533b9 */
  if ((!C.cf&&!C.zf)) goto L_112533b9;
  /* 11253247 push 9 */
  push32((uint32_t)(0x9u));
  /* 11253249 call 0x1124c720 */
  push32(0x1125324eu); f_1124c720();
  /* 1125324e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253251 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253254 push edx */
  push32((uint32_t)(EDX));
  /* 11253255 call 0x11253580 */
  push32(0x1125325au); f_11253580();
  /* 1125325a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125325d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11253260 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253264 je 0x1125337c */
  if (C.zf) goto L_1125337c;
  /* 1125326a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125326d cmp eax, dword ptr [0x1127f234] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1127f234))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253273 ja 0x112532f0 */
  if ((!C.cf&&!C.zf)) goto L_112532f0;
  /* 11253275 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11253278 push ecx */
  push32((uint32_t)(ECX));
  /* 11253279 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125327c push edx */
  push32((uint32_t)(EDX));
  /* 1125327d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11253280 push eax */
  push32((uint32_t)(EAX));
  /* 11253281 call 0x11254450 */
  push32(0x11253286u); f_11254450();
  /* 11253286 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253289 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125328b je 0x11253295 */
  if (C.zf) goto L_11253295;
  /* 1125328d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253290 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11253293 jmp 0x112532f0 */
  goto L_112532f0;
L_11253295:;
  /* 11253295 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11253298 push edx */
  push32((uint32_t)(EDX));
  /* 11253299 call 0x11253c10 */
  push32(0x1125329eu); f_11253c10();
  /* 1125329e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112532a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112532a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112532a8 je 0x112532f0 */
  if (C.zf) goto L_112532f0;
  /* 112532aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112532ad mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 112532b0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112532b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112532b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112532b9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112532bc jae 0x112532c6 */
  if (!C.cf) goto L_112532c6;
  /* 112532be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112532c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112532c4 jmp 0x112532cc */
  goto L_112532cc;
L_112532c6:;
  /* 112532c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112532c9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_112532cc:;
  /* 112532cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112532cf push edx */
  push32((uint32_t)(EDX));
  /* 112532d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112532d3 push eax */
  push32((uint32_t)(EAX));
  /* 112532d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112532d7 push ecx */
  push32((uint32_t)(ECX));
  /* 112532d8 call 0x112568c0 */
  push32(0x112532ddu); f_112568c0();
  /* 112532dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112532e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112532e3 push edx */
  push32((uint32_t)(EDX));
  /* 112532e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112532e7 push eax */
  push32((uint32_t)(EAX));
  /* 112532e8 call 0x11253640 */
  push32(0x112532edu); f_11253640();
  /* 112532ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112532f0:;
  /* 112532f0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112532f4 jne 0x11253370 */
  if (!C.zf) goto L_11253370;
  /* 112532f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112532fa jne 0x11253303 */
  if (!C.zf) goto L_11253303;
  /* 112532fc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11253303:;
  /* 11253303 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11253306 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253309 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1125330c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1125330f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11253312 push edx */
  push32((uint32_t)(EDX));
  /* 11253313 push 0 */
  push32((uint32_t)(0x0u));
  /* 11253315 mov eax, dword ptr [0x11282dac] */
  EAX = (r32((uint32_t)(0x11282dac)));
  /* 1125331a push eax */
  push32((uint32_t)(EAX));
  /* 1125331b call dword ptr [0x112833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833b8))), 0x11253321u);
  /* 11253321 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11253324 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253328 je 0x11253370 */
  if (C.zf) goto L_11253370;
  /* 1125332a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125332d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11253330 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253333 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11253336 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253339 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125333c jae 0x11253346 */
  if (!C.cf) goto L_11253346;
  /* 1125333e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253341 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11253344 jmp 0x1125334c */
  goto L_1125334c;
L_11253346:;
  /* 11253346 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11253349 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1125334c:;
  /* 1125334c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125334f push eax */
  push32((uint32_t)(EAX));
  /* 11253350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253353 push ecx */
  push32((uint32_t)(ECX));
  /* 11253354 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11253357 push edx */
  push32((uint32_t)(EDX));
  /* 11253358 call 0x112568c0 */
  push32(0x1125335du); f_112568c0();
  /* 1125335d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253363 push eax */
  push32((uint32_t)(EAX));
  /* 11253364 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11253367 push ecx */
  push32((uint32_t)(ECX));
  /* 11253368 call 0x11253640 */
  push32(0x1125336du); f_11253640();
  /* 1125336d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11253370:;
  /* 11253370 push 9 */
  push32((uint32_t)(0x9u));
  /* 11253372 call 0x1124c7c0 */
  push32(0x11253377u); f_1124c7c0();
  /* 11253377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125337a jmp 0x112533b9 */
  goto L_112533b9;
L_1125337c:;
  /* 1125337c push 9 */
  push32((uint32_t)(0x9u));
  /* 1125337e call 0x1124c7c0 */
  push32(0x11253383u); f_1124c7c0();
  /* 11253383 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253386 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125338a jne 0x11253393 */
  if (!C.zf) goto L_11253393;
  /* 1125338c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11253393:;
  /* 11253393 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11253396 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253399 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1125339c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1125339f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112533a2 push eax */
  push32((uint32_t)(EAX));
  /* 112533a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112533a6 push ecx */
  push32((uint32_t)(ECX));
  /* 112533a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112533a9 mov edx, dword ptr [0x11282dac] */
  EDX = (r32((uint32_t)(0x11282dac)));
  /* 112533af push edx */
  push32((uint32_t)(EDX));
  /* 112533b0 call dword ptr [0x112833a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833a8))), 0x112533b6u);
  /* 112533b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112533b9:;
  /* 112533b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112533bd jne 0x112533c8 */
  if (!C.zf) goto L_112533c8;
  /* 112533bf cmp dword ptr [0x112815f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112815f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112533c6 jne 0x112533cd */
  if (!C.zf) goto L_112533cd;
L_112533c8:;
  /* 112533c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112533cb jmp 0x112533e6 */
  goto L_112533e6;
L_112533cd:;
  /* 112533cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112533d0 push eax */
  push32((uint32_t)(EAX));
  /* 112533d1 call 0x11253020 */
  push32(0x112533d6u); f_11253020();
  /* 112533d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112533d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112533db jne 0x112533e1 */
  if (!C.zf) goto L_112533e1;
  /* 112533dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112533df jmp 0x112533e6 */
  goto L_112533e6;
L_112533e1:;
  /* 112533e1 jmp 0x11253236 */
  goto L_11253236;
L_112533e6:;
  /* 112533e6 mov esp, ebp */
  ESP = (EBP);
  /* 112533e8 pop ebp */
  EBP = (pop32());
  /* 112533e9 ret  */
  ESPCHK(0x11253200u, _esp0);
  ESP += 4; return;
}

/* FUN_100133f0 @ 0x112533f0 (104 bytes, 38 insns) */
void f_112533f0(void) {
  FTRACE(0x112533f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112533f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112533f1 mov ebp, esp */
  EBP = (ESP);
  /* 112533f3 push ecx */
  push32((uint32_t)(ECX));
  /* 112533f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112533f8 jne 0x112533fc */
  if (!C.zf) goto L_112533fc;
  /* 112533fa jmp 0x11253454 */
  goto L_11253454;
L_112533fc:;
  /* 112533fc push 9 */
  push32((uint32_t)(0x9u));
  /* 112533fe call 0x1124c720 */
  push32(0x11253403u); f_1124c720();
  /* 11253403 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253409 push eax */
  push32((uint32_t)(EAX));
  /* 1125340a call 0x11253580 */
  push32(0x1125340fu); f_11253580();
  /* 1125340f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253412 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11253415 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253419 je 0x11253437 */
  if (C.zf) goto L_11253437;
  /* 1125341b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125341e push ecx */
  push32((uint32_t)(ECX));
  /* 1125341f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253422 push edx */
  push32((uint32_t)(EDX));
  /* 11253423 call 0x11253640 */
  push32(0x11253428u); f_11253640();
  /* 11253428 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125342b push 9 */
  push32((uint32_t)(0x9u));
  /* 1125342d call 0x1124c7c0 */
  push32(0x11253432u); f_1124c7c0();
  /* 11253432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253435 jmp 0x11253454 */
  goto L_11253454;
L_11253437:;
  /* 11253437 push 9 */
  push32((uint32_t)(0x9u));
  /* 11253439 call 0x1124c7c0 */
  push32(0x1125343eu); f_1124c7c0();
  /* 1125343e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253441 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253444 push eax */
  push32((uint32_t)(EAX));
  /* 11253445 push 0 */
  push32((uint32_t)(0x0u));
  /* 11253447 mov ecx, dword ptr [0x11282dac] */
  ECX = (r32((uint32_t)(0x11282dac)));
  /* 1125344d push ecx */
  push32((uint32_t)(ECX));
  /* 1125344e call dword ptr [0x112833c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833c4))), 0x11253454u);
L_11253454:;
  /* 11253454 mov esp, ebp */
  ESP = (EBP);
  /* 11253456 pop ebp */
  EBP = (pop32());
  /* 11253457 ret  */
  ESPCHK(0x112533f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013460 @ 0x11253460 (116 bytes, 34 insns) */
void f_11253460(void) {
  FTRACE(0x11253460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11253460 push ebp */
  push32((uint32_t)(EBP));
  /* 11253461 mov ebp, esp */
  EBP = (ESP);
  /* 11253463 push ecx */
  push32((uint32_t)(ECX));
  /* 11253464 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1125346b push 9 */
  push32((uint32_t)(0x9u));
  /* 1125346d call 0x1124c720 */
  push32(0x11253472u); f_1124c720();
  /* 11253472 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253475 call 0x11254b70 */
  push32(0x1125347au); f_11254b70();
  /* 1125347a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125347c jge 0x11253485 */
  if ((C.sf==C.of)) goto L_11253485;
  /* 1125347e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11253485:;
  /* 11253485 push 9 */
  push32((uint32_t)(0x9u));
  /* 11253487 call 0x1124c7c0 */
  push32(0x1125348cu); f_1124c7c0();
  /* 1125348c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125348f push 0 */
  push32((uint32_t)(0x0u));
  /* 11253491 push 0 */
  push32((uint32_t)(0x0u));
  /* 11253493 mov eax, dword ptr [0x11282dac] */
  EAX = (r32((uint32_t)(0x11282dac)));
  /* 11253498 push eax */
  push32((uint32_t)(EAX));
  /* 11253499 call dword ptr [0x11283418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283418))), 0x1125349fu);
  /* 1125349f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112534a1 jne 0x112534cd */
  if (!C.zf) goto L_112534cd;
  /* 112534a3 call dword ptr [0x112833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833f0))), 0x112534a9u);
  /* 112534a9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112534ac jne 0x112534c6 */
  if (!C.zf) goto L_112534c6;
  /* 112534ae call 0x11257ec0 */
  push32(0x112534b3u); f_11257ec0();
  /* 112534b3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 112534b9 call 0x11257eb0 */
  push32(0x112534beu); f_11257eb0();
  /* 112534be mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 112534c4 jmp 0x112534cd */
  goto L_112534cd;
L_112534c6:;
  /* 112534c6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_112534cd:;
  /* 112534cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112534d0 mov esp, ebp */
  ESP = (EBP);
  /* 112534d2 pop ebp */
  EBP = (pop32());
  /* 112534d3 ret  */
  ESPCHK(0x11253460u, _esp0);
  ESP += 4; return;
}

/* FUN_100134e0 @ 0x112534e0 (10 bytes, 5 insns) */
void f_112534e0(void) {
  FTRACE(0x112534e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112534e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112534e1 mov ebp, esp */
  EBP = (ESP);
  /* 112534e3 call 0x11253460 */
  push32(0x112534e8u); f_11253460();
  /* 112534e8 pop ebp */
  EBP = (pop32());
  /* 112534e9 ret  */
  ESPCHK(0x112534e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100134f0 @ 0x112534f0 (10 bytes, 5 insns) */
void f_112534f0(void) {
  FTRACE(0x112534f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112534f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112534f1 mov ebp, esp */
  EBP = (ESP);
  /* 112534f3 mov eax, dword ptr [0x1127f234] */
  EAX = (r32((uint32_t)(0x1127f234)));
  /* 112534f8 pop ebp */
  EBP = (pop32());
  /* 112534f9 ret  */
  ESPCHK(0x112534f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013500 @ 0x11253500 (31 bytes, 11 insns) */
void f_11253500(void) {
  FTRACE(0x11253500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11253500 push ebp */
  push32((uint32_t)(EBP));
  /* 11253501 mov ebp, esp */
  EBP = (ESP);
  /* 11253503 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125350a jbe 0x11253510 */
  if ((C.cf||C.zf)) goto L_11253510;
  /* 1125350c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125350e jmp 0x1125351d */
  goto L_1125351d;
L_11253510:;
  /* 11253510 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253513 mov dword ptr [0x1127f234], eax */
  w32((uint32_t)(0x1127f234), (EAX));
  /* 11253518 mov eax, 1 */
  EAX = (0x1u);
L_1125351d:;
  /* 1125351d pop ebp */
  EBP = (pop32());
  /* 1125351e ret  */
  ESPCHK(0x11253500u, _esp0);
  ESP += 4; return;
}

/* FUN_10013520 @ 0x11253520 (89 bytes, 20 insns) */
void f_11253520(void) {
  FTRACE(0x11253520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11253520 push ebp */
  push32((uint32_t)(EBP));
  /* 11253521 mov ebp, esp */
  EBP = (ESP);
  /* 11253523 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11253528 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125352a mov eax, dword ptr [0x11282dac] */
  EAX = (r32((uint32_t)(0x11282dac)));
  /* 1125352f push eax */
  push32((uint32_t)(EAX));
  /* 11253530 call dword ptr [0x112833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833b8))), 0x11253536u);
  /* 11253536 mov dword ptr [0x11282da8], eax */
  w32((uint32_t)(0x11282da8), (EAX));
  /* 1125353b cmp dword ptr [0x11282da8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282da8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253542 jne 0x11253548 */
  if (!C.zf) goto L_11253548;
  /* 11253544 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11253546 jmp 0x11253577 */
  goto L_11253577;
L_11253548:;
  /* 11253548 mov ecx, dword ptr [0x11282da8] */
  ECX = (r32((uint32_t)(0x11282da8)));
  /* 1125354e mov dword ptr [0x11282d9c], ecx */
  w32((uint32_t)(0x11282d9c), (ECX));
  /* 11253554 mov dword ptr [0x11282da0], 0 */
  w32((uint32_t)(0x11282da0), (0x0u));
  /* 1125355e mov dword ptr [0x11282da4], 0 */
  w32((uint32_t)(0x11282da4), (0x0u));
  /* 11253568 mov dword ptr [0x11282d88], 0x10 */
  w32((uint32_t)(0x11282d88), (0x10u));
  /* 11253572 mov eax, 1 */
  EAX = (0x1u);
L_11253577:;
  /* 11253577 pop ebp */
  EBP = (pop32());
  /* 11253578 ret  */
  ESPCHK(0x11253520u, _esp0);
  ESP += 4; return;
}

/* FUN_10013580 @ 0x11253580 (85 bytes, 29 insns) */
void f_11253580(void) {
  FTRACE(0x11253580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11253580 push ebp */
  push32((uint32_t)(EBP));
  /* 11253581 mov ebp, esp */
  EBP = (ESP);
  /* 11253583 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253586 mov eax, dword ptr [0x11282da4] */
  EAX = (r32((uint32_t)(0x11282da4)));
  /* 1125358b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125358e mov ecx, dword ptr [0x11282da8] */
  ECX = (r32((uint32_t)(0x11282da8)));
  /* 11253594 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253596 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11253599 mov edx, dword ptr [0x11282da8] */
  EDX = (r32((uint32_t)(0x11282da8)));
  /* 1125359f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_112535a2:;
  /* 112535a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112535a5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112535a8 jae 0x112535cf */
  if (!C.cf) goto L_112535cf;
  /* 112535aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112535ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112535b0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112535b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112535b6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112535bd jae 0x112535c4 */
  if (!C.cf) goto L_112535c4;
  /* 112535bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112535c2 jmp 0x112535d1 */
  goto L_112535d1;
L_112535c4:;
  /* 112535c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112535c7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112535ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112535cd jmp 0x112535a2 */
  goto L_112535a2;
L_112535cf:;
  /* 112535cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112535d1:;
  /* 112535d1 mov esp, ebp */
  ESP = (EBP);
  /* 112535d3 pop ebp */
  EBP = (pop32());
  /* 112535d4 ret  */
  ESPCHK(0x11253580u, _esp0);
  ESP += 4; return;
}

/* FUN_100135e0 @ 0x112535e0 (95 bytes, 33 insns) */
void f_112535e0(void) {
  FTRACE(0x112535e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112535e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112535e1 mov ebp, esp */
  EBP = (ESP);
  /* 112535e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112535e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112535e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112535ec sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112535ef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112535f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112535f5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 112535f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112535fb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11253600 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253603 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11253605 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253608 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1125360b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1125360d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125360f jne 0x11253631 */
  if (!C.zf) goto L_11253631;
  /* 11253611 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11253614 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11253617 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11253619 jne 0x11253631 */
  if (!C.zf) goto L_11253631;
  /* 1125361b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125361e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11253624 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11253626 je 0x11253631 */
  if (C.zf) goto L_11253631;
  /* 11253628 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1125362f jmp 0x11253638 */
  goto L_11253638;
L_11253631:;
  /* 11253631 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11253638:;
  /* 11253638 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125363b mov esp, ebp */
  ESP = (EBP);
  /* 1125363d pop ebp */
  EBP = (pop32());
  /* 1125363e ret  */
  ESPCHK(0x112535e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013640 @ 0x11253640 (1485 bytes, 453 insns) */
void f_11253640(void) {
  FTRACE(0x11253640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11253640 push ebp */
  push32((uint32_t)(EBP));
  /* 11253641 mov ebp, esp */
  EBP = (ESP);
  /* 11253643 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253649 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1125364c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1125364f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253652 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11253655 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253658 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1125365b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125365e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11253661 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11253664 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253667 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125366d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253670 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11253677 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125367a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125367d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253680 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11253683 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11253686 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11253688 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125368b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1125368e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11253691 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253694 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11253697 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1125369a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125369c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1125369f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112536a2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 112536a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112536a8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112536ab and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112536ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112536b0 jne 0x112537d8 */
  if (!C.zf) goto L_112537d8;
  /* 112536b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112536b9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 112536bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112536bf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 112536c2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112536c6 jbe 0x112536cf */
  if ((C.cf||C.zf)) goto L_112536cf;
  /* 112536c8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_112536cf:;
  /* 112536cf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112536d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112536d5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 112536d8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112536db jne 0x112537b1 */
  if (!C.zf) goto L_112537b1;
  /* 112536e1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112536e5 jae 0x11253746 */
  if (!C.cf) goto L_11253746;
  /* 112536e7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112536ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112536ef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112536f1 not eax */
  EAX = (~(EAX));
  /* 112536f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112536f6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112536f9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 112536fd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112536ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253702 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253705 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11253709 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125370c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125370f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11253712 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11253715 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253718 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125371b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1125371e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253721 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253724 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11253728 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125372a jne 0x11253744 */
  if (!C.zf) goto L_11253744;
  /* 1125372c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11253731 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11253734 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11253736 not eax */
  EAX = (~(EAX));
  /* 11253738 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125373b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125373d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1125373f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253742 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11253744:;
  /* 11253744 jmp 0x112537b1 */
  goto L_112537b1;
L_11253746:;
  /* 11253746 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11253749 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125374c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11253751 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11253753 not edx */
  EDX = (~(EDX));
  /* 11253755 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253758 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125375b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11253762 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11253764 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253767 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125376a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11253771 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253774 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253777 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1125377a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1125377d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253780 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253783 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11253786 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253789 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125378c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11253790 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11253792 jne 0x112537b1 */
  if (!C.zf) goto L_112537b1;
  /* 11253794 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11253797 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125379a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1125379f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112537a1 not edx */
  EDX = (~(EDX));
  /* 112537a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112537a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112537a9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112537ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112537ae mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_112537b1:;
  /* 112537b1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112537b4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112537b7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112537ba mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112537bd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 112537c0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112537c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112537c6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112537c9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112537cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 112537cf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112537d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112537d5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_112537d8:;
  /* 112537d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112537db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 112537de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112537e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112537e4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112537e8 jbe 0x112537f1 */
  if ((C.cf||C.zf)) goto L_112537f1;
  /* 112537ea mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_112537f1:;
  /* 112537f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112537f4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112537f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112537f9 jne 0x11253955 */
  if (!C.zf) goto L_11253955;
  /* 112537ff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11253802 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253805 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11253808 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125380b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1125380e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253811 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11253814 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253818 jbe 0x11253821 */
  if ((C.cf||C.zf)) goto L_11253821;
  /* 1125381a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11253821:;
  /* 11253821 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253824 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253827 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1125382a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125382d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11253830 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253833 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11253836 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125383a jbe 0x11253843 */
  if ((C.cf||C.zf)) goto L_11253843;
  /* 1125383c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11253843:;
  /* 11253843 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11253846 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253849 je 0x1125394f */
  if (C.zf) goto L_1125394f;
  /* 1125384f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11253852 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11253855 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11253858 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125385b jne 0x11253931 */
  if (!C.zf) goto L_11253931;
  /* 11253861 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253865 jae 0x112538c6 */
  if (!C.cf) goto L_112538c6;
  /* 11253867 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1125386c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125386f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11253871 not edx */
  EDX = (~(EDX));
  /* 11253873 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253876 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253879 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1125387d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1125387f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253882 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253885 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11253889 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125388c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125388f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11253892 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11253895 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253898 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125389b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1125389e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112538a1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112538a4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 112538a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112538aa jne 0x112538c4 */
  if (!C.zf) goto L_112538c4;
  /* 112538ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112538b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112538b4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112538b6 not edx */
  EDX = (~(EDX));
  /* 112538b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112538bb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112538bd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112538bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112538c2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112538c4:;
  /* 112538c4 jmp 0x11253931 */
  goto L_11253931;
L_112538c6:;
  /* 112538c6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112538c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112538cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112538d1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112538d3 not eax */
  EAX = (~(EAX));
  /* 112538d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112538d8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112538db mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 112538e2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112538e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112538e7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112538ea mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 112538f1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112538f4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112538f7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 112538fa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112538fd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253900 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253903 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11253906 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253909 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125390c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11253910 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11253912 jne 0x11253931 */
  if (!C.zf) goto L_11253931;
  /* 11253914 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11253917 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125391a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1125391f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11253921 not eax */
  EAX = (~(EAX));
  /* 11253923 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253926 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11253929 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1125392b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125392e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11253931:;
  /* 11253931 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11253934 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11253937 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1125393a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1125393d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11253940 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11253943 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11253946 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11253949 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1125394c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1125394f:;
  /* 1125394f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11253952 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11253955:;
  /* 11253955 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11253958 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1125395b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125395d jne 0x1125396b */
  if (!C.zf) goto L_1125396b;
  /* 1125395f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11253962 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253965 je 0x11253a7b */
  if (C.zf) goto L_11253a7b;
L_1125396b:;
  /* 1125396b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1125396e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11253971 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11253974 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11253977 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1125397a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125397d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11253980 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11253983 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11253986 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11253989 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1125398c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125398f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11253992 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11253995 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11253998 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1125399b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1125399e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 112539a1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112539a4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112539a7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 112539aa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112539ad jne 0x11253a7b */
  if (!C.zf) goto L_11253a7b;
  /* 112539b3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112539b7 jae 0x11253a14 */
  if (!C.cf) goto L_11253a14;
  /* 112539b9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112539bc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112539bf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112539c3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112539c6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112539c9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112539cc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 112539cf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112539d2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112539d5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 112539d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112539da jne 0x112539f2 */
  if (!C.zf) goto L_112539f2;
  /* 112539dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112539e1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112539e4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112539e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112539e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112539eb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112539ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112539f0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112539f2:;
  /* 112539f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112539f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112539fa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112539fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112539ff mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253a02 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11253a06 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11253a08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253a0b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253a0e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11253a12 jmp 0x11253a7b */
  goto L_11253a7b;
L_11253a14:;
  /* 11253a14 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253a17 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253a1a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11253a1e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253a21 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253a24 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11253a27 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11253a2a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253a2d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253a30 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11253a33 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11253a35 jne 0x11253a52 */
  if (!C.zf) goto L_11253a52;
  /* 11253a37 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11253a3a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253a3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11253a42 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11253a44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253a47 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11253a4a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11253a4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253a4f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11253a52:;
  /* 11253a52 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11253a55 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253a58 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11253a5d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11253a5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253a62 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253a65 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11253a6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11253a6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253a71 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11253a74 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11253a7b:;
  /* 11253a7b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11253a7e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253a81 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11253a83 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11253a86 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253a89 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253a8c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11253a8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11253a92 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11253a94 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253a97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11253a9a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11253a9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11253a9f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253aa2 jne 0x11253c09 */
  if (!C.zf) goto L_11253c09;
  /* 11253aa8 cmp dword ptr [0x11282da0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282da0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253aaf je 0x11253bf8 */
  if (C.zf) goto L_11253bf8;
  /* 11253ab5 mov eax, dword ptr [0x11282d98] */
  EAX = (r32((uint32_t)(0x11282d98)));
  /* 11253aba shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11253abd mov ecx, dword ptr [0x11282da0] */
  ECX = (r32((uint32_t)(0x11282da0)));
  /* 11253ac3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11253ac6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253ac8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11253acb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11253ad0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11253ad5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253ad8 push eax */
  push32((uint32_t)(EAX));
  /* 11253ad9 call dword ptr [0x112833b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833b4))), 0x11253adfu);
  /* 11253adf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11253ae4 mov ecx, dword ptr [0x11282d98] */
  ECX = (r32((uint32_t)(0x11282d98)));
  /* 11253aea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11253aec mov eax, dword ptr [0x11282da0] */
  EAX = (r32((uint32_t)(0x11282da0)));
  /* 11253af1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11253af4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11253af6 mov edx, dword ptr [0x11282da0] */
  EDX = (r32((uint32_t)(0x11282da0)));
  /* 11253afc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11253aff mov eax, dword ptr [0x11282da0] */
  EAX = (r32((uint32_t)(0x11282da0)));
  /* 11253b04 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11253b07 mov edx, dword ptr [0x11282d98] */
  EDX = (r32((uint32_t)(0x11282d98)));
  /* 11253b0d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11253b18 mov eax, dword ptr [0x11282da0] */
  EAX = (r32((uint32_t)(0x11282da0)));
  /* 11253b1d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11253b20 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11253b23 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11253b26 mov eax, dword ptr [0x11282da0] */
  EAX = (r32((uint32_t)(0x11282da0)));
  /* 11253b2b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11253b2e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11253b31 mov edx, dword ptr [0x11282da0] */
  EDX = (r32((uint32_t)(0x11282da0)));
  /* 11253b37 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11253b3a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11253b3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11253b40 jne 0x11253b56 */
  if (!C.zf) goto L_11253b56;
  /* 11253b42 mov edx, dword ptr [0x11282da0] */
  EDX = (r32((uint32_t)(0x11282da0)));
  /* 11253b48 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11253b4b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11253b4d mov ecx, dword ptr [0x11282da0] */
  ECX = (r32((uint32_t)(0x11282da0)));
  /* 11253b53 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11253b56:;
  /* 11253b56 mov edx, dword ptr [0x11282da0] */
  EDX = (r32((uint32_t)(0x11282da0)));
  /* 11253b5c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253b60 jne 0x11253bf8 */
  if (!C.zf) goto L_11253bf8;
  /* 11253b66 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11253b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11253b6d mov eax, dword ptr [0x11282da0] */
  EAX = (r32((uint32_t)(0x11282da0)));
  /* 11253b72 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11253b75 push ecx */
  push32((uint32_t)(ECX));
  /* 11253b76 call dword ptr [0x112833b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833b4))), 0x11253b7cu);
  /* 11253b7c mov edx, dword ptr [0x11282da0] */
  EDX = (r32((uint32_t)(0x11282da0)));
  /* 11253b82 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11253b85 push eax */
  push32((uint32_t)(EAX));
  /* 11253b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11253b88 mov ecx, dword ptr [0x11282dac] */
  ECX = (r32((uint32_t)(0x11282dac)));
  /* 11253b8e push ecx */
  push32((uint32_t)(ECX));
  /* 11253b8f call dword ptr [0x112833c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833c4))), 0x11253b95u);
  /* 11253b95 mov edx, dword ptr [0x11282da4] */
  EDX = (r32((uint32_t)(0x11282da4)));
  /* 11253b9b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11253b9e mov eax, dword ptr [0x11282da8] */
  EAX = (r32((uint32_t)(0x11282da8)));
  /* 11253ba3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253ba5 mov ecx, dword ptr [0x11282da0] */
  ECX = (r32((uint32_t)(0x11282da0)));
  /* 11253bab add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253bae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253bb0 push eax */
  push32((uint32_t)(EAX));
  /* 11253bb1 mov edx, dword ptr [0x11282da0] */
  EDX = (r32((uint32_t)(0x11282da0)));
  /* 11253bb7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253bba push edx */
  push32((uint32_t)(EDX));
  /* 11253bbb mov eax, dword ptr [0x11282da0] */
  EAX = (r32((uint32_t)(0x11282da0)));
  /* 11253bc0 push eax */
  push32((uint32_t)(EAX));
  /* 11253bc1 call 0x11252c90 */
  push32(0x11253bc6u); f_11252c90();
  /* 11253bc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253bc9 mov ecx, dword ptr [0x11282da4] */
  ECX = (r32((uint32_t)(0x11282da4)));
  /* 11253bcf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253bd2 mov dword ptr [0x11282da4], ecx */
  w32((uint32_t)(0x11282da4), (ECX));
  /* 11253bd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253bdb cmp edx, dword ptr [0x11282da0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11282da0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253be1 jbe 0x11253bec */
  if ((C.cf||C.zf)) goto L_11253bec;
  /* 11253be3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253be6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253be9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11253bec:;
  /* 11253bec mov ecx, dword ptr [0x11282da8] */
  ECX = (r32((uint32_t)(0x11282da8)));
  /* 11253bf2 mov dword ptr [0x11282d9c], ecx */
  w32((uint32_t)(0x11282d9c), (ECX));
L_11253bf8:;
  /* 11253bf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253bfb mov dword ptr [0x11282da0], edx */
  w32((uint32_t)(0x11282da0), (EDX));
  /* 11253c01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253c04 mov dword ptr [0x11282d98], eax */
  w32((uint32_t)(0x11282d98), (EAX));
L_11253c09:;
  /* 11253c09 mov esp, ebp */
  ESP = (EBP);
  /* 11253c0b pop ebp */
  EBP = (pop32());
  /* 11253c0c ret  */
  ESPCHK(0x11253640u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c10 @ 0x11253c10 (1334 bytes, 427 insns) */
void f_11253c10(void) {
  FTRACE(0x11253c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11253c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11253c11 mov ebp, esp */
  EBP = (ESP);
  /* 11253c13 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253c16 push esi */
  push32((uint32_t)(ESI));
  /* 11253c17 mov eax, dword ptr [0x11282da4] */
  EAX = (r32((uint32_t)(0x11282da4)));
  /* 11253c1c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11253c1f mov ecx, dword ptr [0x11282da8] */
  ECX = (r32((uint32_t)(0x11282da8)));
  /* 11253c25 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253c27 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11253c2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11253c2d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253c30 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11253c33 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11253c36 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11253c39 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11253c3c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253c3f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11253c42 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253c46 jge 0x11253c5c */
  if ((C.sf==C.of)) goto L_11253c5c;
  /* 11253c48 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11253c4b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11253c4e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11253c50 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11253c53 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11253c5a jmp 0x11253c71 */
  goto L_11253c71;
L_11253c5c:;
  /* 11253c5c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11253c63 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11253c66 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253c69 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11253c6c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11253c6e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11253c71:;
  /* 11253c71 mov ecx, dword ptr [0x11282d9c] */
  ECX = (r32((uint32_t)(0x11282d9c)));
  /* 11253c77 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11253c7a:;
  /* 11253c7a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253c7d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253c80 jae 0x11253ca6 */
  if (!C.cf) goto L_11253ca6;
  /* 11253c82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253c85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11253c88 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11253c8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253c8d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11253c90 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11253c93 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11253c95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11253c97 je 0x11253c9b */
  if (C.zf) goto L_11253c9b;
  /* 11253c99 jmp 0x11253ca6 */
  goto L_11253ca6;
L_11253c9b:;
  /* 11253c9b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253c9e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253ca1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11253ca4 jmp 0x11253c7a */
  goto L_11253c7a;
L_11253ca6:;
  /* 11253ca6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253ca9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253cac jne 0x11253d8d */
  if (!C.zf) goto L_11253d8d;
  /* 11253cb2 mov eax, dword ptr [0x11282da8] */
  EAX = (r32((uint32_t)(0x11282da8)));
  /* 11253cb7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11253cba:;
  /* 11253cba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253cbd cmp ecx, dword ptr [0x11282d9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11282d9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253cc3 jae 0x11253ce9 */
  if (!C.cf) goto L_11253ce9;
  /* 11253cc5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253cc8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11253ccb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11253ccd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253cd0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11253cd3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11253cd6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11253cd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11253cda je 0x11253cde */
  if (C.zf) goto L_11253cde;
  /* 11253cdc jmp 0x11253ce9 */
  goto L_11253ce9;
L_11253cde:;
  /* 11253cde mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253ce1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253ce4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11253ce7 jmp 0x11253cba */
  goto L_11253cba;
L_11253ce9:;
  /* 11253ce9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253cec cmp ecx, dword ptr [0x11282d9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11282d9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253cf2 jne 0x11253d8d */
  if (!C.zf) goto L_11253d8d;
L_11253cf8:;
  /* 11253cf8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253cfb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253cfe jae 0x11253d16 */
  if (!C.cf) goto L_11253d16;
  /* 11253d00 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253d03 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253d07 je 0x11253d0b */
  if (C.zf) goto L_11253d0b;
  /* 11253d09 jmp 0x11253d16 */
  goto L_11253d16;
L_11253d0b:;
  /* 11253d0b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253d0e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253d11 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11253d14 jmp 0x11253cf8 */
  goto L_11253cf8;
L_11253d16:;
  /* 11253d16 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253d19 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253d1c jne 0x11253d67 */
  if (!C.zf) goto L_11253d67;
  /* 11253d1e mov eax, dword ptr [0x11282da8] */
  EAX = (r32((uint32_t)(0x11282da8)));
  /* 11253d23 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11253d26:;
  /* 11253d26 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253d29 cmp ecx, dword ptr [0x11282d9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11282d9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253d2f jae 0x11253d47 */
  if (!C.cf) goto L_11253d47;
  /* 11253d31 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253d34 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253d38 je 0x11253d3c */
  if (C.zf) goto L_11253d3c;
  /* 11253d3a jmp 0x11253d47 */
  goto L_11253d47;
L_11253d3c:;
  /* 11253d3c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253d3f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253d42 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11253d45 jmp 0x11253d26 */
  goto L_11253d26;
L_11253d47:;
  /* 11253d47 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253d4a cmp ecx, dword ptr [0x11282d9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11282d9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253d50 jne 0x11253d67 */
  if (!C.zf) goto L_11253d67;
  /* 11253d52 call 0x11254150 */
  push32(0x11253d57u); f_11254150();
  /* 11253d57 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11253d5a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253d5e jne 0x11253d67 */
  if (!C.zf) goto L_11253d67;
  /* 11253d60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11253d62 jmp 0x11254141 */
  goto L_11254141;
L_11253d67:;
  /* 11253d67 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253d6a push edx */
  push32((uint32_t)(EDX));
  /* 11253d6b call 0x11254260 */
  push32(0x11253d70u); f_11254260();
  /* 11253d70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11253d73 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253d76 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11253d79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11253d7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253d7e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11253d81 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253d84 jne 0x11253d8d */
  if (!C.zf) goto L_11253d8d;
  /* 11253d86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11253d88 jmp 0x11254141 */
  goto L_11254141;
L_11253d8d:;
  /* 11253d8d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253d90 mov dword ptr [0x11282d9c], edx */
  w32((uint32_t)(0x11282d9c), (EDX));
  /* 11253d96 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253d99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11253d9c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11253d9f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253da2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11253da4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11253da7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253dab je 0x11253dd0 */
  if (C.zf) goto L_11253dd0;
  /* 11253dad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253db0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253db3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11253db6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11253dba mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253dbd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253dc0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11253dc3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11253dca or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11253dcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11253dce jne 0x11253e05 */
  if (!C.zf) goto L_11253e05;
L_11253dd0:;
  /* 11253dd0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11253dd7:;
  /* 11253dd7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253dda mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253ddd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11253de0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11253de4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253de7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253dea mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11253ded and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11253df4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11253df6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11253df8 jne 0x11253e05 */
  if (!C.zf) goto L_11253e05;
  /* 11253dfa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253dfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253e00 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11253e03 jmp 0x11253dd7 */
  goto L_11253dd7;
L_11253e05:;
  /* 11253e05 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253e08 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11253e0e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253e11 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11253e18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11253e1b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11253e22 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253e25 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253e28 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11253e2b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11253e2f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11253e32 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253e36 jne 0x11253e52 */
  if (!C.zf) goto L_11253e52;
  /* 11253e38 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11253e3f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253e42 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253e45 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11253e48 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11253e4f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11253e52:;
  /* 11253e52 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253e56 jl 0x11253e6b */
  if ((C.sf!=C.of)) goto L_11253e6b;
  /* 11253e58 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11253e5b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11253e5d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11253e60 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11253e63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253e66 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11253e69 jmp 0x11253e52 */
  goto L_11253e52;
L_11253e6b:;
  /* 11253e6b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11253e6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253e71 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11253e75 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11253e78 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11253e7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11253e7d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253e80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11253e83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11253e86 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11253e89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253e8c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11253e8f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253e93 jle 0x11253e9c */
  if ((C.zf||C.sf!=C.of)) goto L_11253e9c;
  /* 11253e95 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11253e9c:;
  /* 11253e9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11253e9f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253ea2 je 0x112540c0 */
  if (C.zf) goto L_112540c0;
  /* 11253ea8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11253eab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11253eae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11253eb1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253eb4 jne 0x11253f8a */
  if (!C.zf) goto L_11253f8a;
  /* 11253eba cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253ebe jge 0x11253f1f */
  if ((C.sf==C.of)) goto L_11253f1f;
  /* 11253ec0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11253ec5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11253ec8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11253eca not eax */
  EAX = (~(EAX));
  /* 11253ecc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253ecf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253ed2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11253ed6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11253ed8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253edb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253ede mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11253ee2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253ee5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253ee8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11253eeb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11253eee mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253ef1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253ef4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11253ef7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253efa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253efd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11253f01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11253f03 jne 0x11253f1d */
  if (!C.zf) goto L_11253f1d;
  /* 11253f05 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11253f0a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11253f0d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11253f0f not eax */
  EAX = (~(EAX));
  /* 11253f11 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253f14 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11253f16 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11253f18 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253f1b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11253f1d:;
  /* 11253f1d jmp 0x11253f8a */
  goto L_11253f8a;
L_11253f1f:;
  /* 11253f1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11253f22 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253f25 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11253f2a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11253f2c not edx */
  EDX = (~(EDX));
  /* 11253f2e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253f31 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253f34 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11253f3b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11253f3d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11253f40 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253f43 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11253f4a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253f4d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253f50 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11253f53 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11253f56 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253f59 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253f5c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11253f5f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11253f62 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11253f65 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11253f69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11253f6b jne 0x11253f8a */
  if (!C.zf) goto L_11253f8a;
  /* 11253f6d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11253f70 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11253f73 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11253f78 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11253f7a not edx */
  EDX = (~(EDX));
  /* 11253f7c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253f7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11253f82 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11253f84 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11253f87 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11253f8a:;
  /* 11253f8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11253f8d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11253f90 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11253f93 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11253f96 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11253f99 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11253f9c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11253f9f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11253fa2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11253fa5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11253fa8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253fac je 0x112540c0 */
  if (C.zf) goto L_112540c0;
  /* 11253fb2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11253fb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11253fb8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11253fbb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11253fbe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11253fc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11253fc4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11253fc7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11253fca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11253fcd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11253fd0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11253fd3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11253fd6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11253fd9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11253fdc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11253fdf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11253fe2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11253fe5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11253fe8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11253feb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11253fee mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11253ff1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253ff4 jne 0x112540c0 */
  if (!C.zf) goto L_112540c0;
  /* 11253ffa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11253ffe jge 0x1125405a */
  if ((C.sf==C.of)) goto L_1125405a;
  /* 11254000 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11254003 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254006 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1125400a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1125400d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254010 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11254013 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11254015 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11254018 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125401b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1125401e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11254020 jne 0x11254038 */
  if (!C.zf) goto L_11254038;
  /* 11254022 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11254027 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125402a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1125402c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125402f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11254031 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11254033 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11254036 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11254038:;
  /* 11254038 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1125403d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11254040 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11254042 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254045 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11254048 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1125404c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1125404e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254051 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11254054 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11254058 jmp 0x112540c0 */
  goto L_112540c0;
L_1125405a:;
  /* 1125405a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1125405d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254060 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11254064 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11254067 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125406a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1125406d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1125406f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11254072 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254075 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11254078 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125407a jne 0x11254097 */
  if (!C.zf) goto L_11254097;
  /* 1125407c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125407f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254082 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11254087 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11254089 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125408c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1125408f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11254091 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11254094 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11254097:;
  /* 11254097 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125409a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125409d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112540a2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112540a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112540a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112540aa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 112540b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112540b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112540b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112540b9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_112540c0:;
  /* 112540c0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112540c4 je 0x112540da */
  if (C.zf) goto L_112540da;
  /* 112540c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112540c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112540cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112540ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112540d1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112540d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112540d7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_112540da:;
  /* 112540da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112540dd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112540e0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112540e3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112540e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112540e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112540ec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112540ee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112540f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112540f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112540f7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112540fa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 112540fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254100 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11254102 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254105 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11254107 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125410a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125410d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1125410f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11254111 jne 0x11254133 */
  if (!C.zf) goto L_11254133;
  /* 11254113 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11254116 cmp eax, dword ptr [0x11282da0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11282da0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125411c jne 0x11254133 */
  if (!C.zf) goto L_11254133;
  /* 1125411e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254121 cmp ecx, dword ptr [0x11282d98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11282d98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254127 jne 0x11254133 */
  if (!C.zf) goto L_11254133;
  /* 11254129 mov dword ptr [0x11282da0], 0 */
  w32((uint32_t)(0x11282da0), (0x0u));
L_11254133:;
  /* 11254133 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11254136 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254139 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1125413b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125413e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11254141:;
  /* 11254141 pop esi */
  ESI = (pop32());
  /* 11254142 mov esp, ebp */
  ESP = (EBP);
  /* 11254144 pop ebp */
  EBP = (pop32());
  /* 11254145 ret  */
  ESPCHK(0x11253c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014150 @ 0x11254150 (271 bytes, 78 insns) */
void f_11254150(void) {
  FTRACE(0x11254150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11254150 push ebp */
  push32((uint32_t)(EBP));
  /* 11254151 mov ebp, esp */
  EBP = (ESP);
  /* 11254153 push ecx */
  push32((uint32_t)(ECX));
  /* 11254154 mov eax, dword ptr [0x11282da4] */
  EAX = (r32((uint32_t)(0x11282da4)));
  /* 11254159 cmp eax, dword ptr [0x11282d88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11282d88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125415f jne 0x112541ab */
  if (!C.zf) goto L_112541ab;
  /* 11254161 mov ecx, dword ptr [0x11282d88] */
  ECX = (r32((uint32_t)(0x11282d88)));
  /* 11254167 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125416a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125416d push ecx */
  push32((uint32_t)(ECX));
  /* 1125416e mov edx, dword ptr [0x11282da8] */
  EDX = (r32((uint32_t)(0x11282da8)));
  /* 11254174 push edx */
  push32((uint32_t)(EDX));
  /* 11254175 push 0 */
  push32((uint32_t)(0x0u));
  /* 11254177 mov eax, dword ptr [0x11282dac] */
  EAX = (r32((uint32_t)(0x11282dac)));
  /* 1125417c push eax */
  push32((uint32_t)(EAX));
  /* 1125417d call dword ptr [0x112833a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833a8))), 0x11254183u);
  /* 11254183 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11254186 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125418a jne 0x11254193 */
  if (!C.zf) goto L_11254193;
  /* 1125418c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125418e jmp 0x1125425b */
  goto L_1125425b;
L_11254193:;
  /* 11254193 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254196 mov dword ptr [0x11282da8], ecx */
  w32((uint32_t)(0x11282da8), (ECX));
  /* 1125419c mov edx, dword ptr [0x11282d88] */
  EDX = (r32((uint32_t)(0x11282d88)));
  /* 112541a2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112541a5 mov dword ptr [0x11282d88], edx */
  w32((uint32_t)(0x11282d88), (EDX));
L_112541ab:;
  /* 112541ab mov eax, dword ptr [0x11282da4] */
  EAX = (r32((uint32_t)(0x11282da4)));
  /* 112541b0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112541b3 mov ecx, dword ptr [0x11282da8] */
  ECX = (r32((uint32_t)(0x11282da8)));
  /* 112541b9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112541bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112541be push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 112541c3 push 8 */
  push32((uint32_t)(0x8u));
  /* 112541c5 mov edx, dword ptr [0x11282dac] */
  EDX = (r32((uint32_t)(0x11282dac)));
  /* 112541cb push edx */
  push32((uint32_t)(EDX));
  /* 112541cc call dword ptr [0x112833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833b8))), 0x112541d2u);
  /* 112541d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112541d5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 112541d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112541db cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112541df jne 0x112541e5 */
  if (!C.zf) goto L_112541e5;
  /* 112541e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112541e3 jmp 0x1125425b */
  goto L_1125425b;
L_112541e5:;
  /* 112541e5 push 4 */
  push32((uint32_t)(0x4u));
  /* 112541e7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 112541ec push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 112541f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112541f3 call dword ptr [0x112833a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833a4))), 0x112541f9u);
  /* 112541f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112541fc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 112541ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254202 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254206 jne 0x11254222 */
  if (!C.zf) goto L_11254222;
  /* 11254208 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125420b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1125420e push ecx */
  push32((uint32_t)(ECX));
  /* 1125420f push 0 */
  push32((uint32_t)(0x0u));
  /* 11254211 mov edx, dword ptr [0x11282dac] */
  EDX = (r32((uint32_t)(0x11282dac)));
  /* 11254217 push edx */
  push32((uint32_t)(EDX));
  /* 11254218 call dword ptr [0x112833c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833c4))), 0x1125421eu);
  /* 1125421e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11254220 jmp 0x1125425b */
  goto L_1125425b;
L_11254222:;
  /* 11254222 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254225 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1125422b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125422e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11254235 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254238 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1125423f mov eax, dword ptr [0x11282da4] */
  EAX = (r32((uint32_t)(0x11282da4)));
  /* 11254244 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254247 mov dword ptr [0x11282da4], eax */
  w32((uint32_t)(0x11282da4), (EAX));
  /* 1125424c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125424f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11254252 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11254258 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1125425b:;
  /* 1125425b mov esp, ebp */
  ESP = (EBP);
  /* 1125425d pop ebp */
  EBP = (pop32());
  /* 1125425e ret  */
  ESPCHK(0x11254150u, _esp0);
  ESP += 4; return;
}

/* FUN_10014260 @ 0x11254260 (494 bytes, 149 insns) */
void f_11254260(void) {
  FTRACE(0x11254260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11254260 push ebp */
  push32((uint32_t)(EBP));
  /* 11254261 mov ebp, esp */
  EBP = (ESP);
  /* 11254263 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11254269 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1125426c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1125426f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11254272 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11254275 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11254278 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1125427f:;
  /* 1125427f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254283 jl 0x11254298 */
  if ((C.sf!=C.of)) goto L_11254298;
  /* 11254285 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11254288 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1125428a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125428d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11254290 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254293 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11254296 jmp 0x1125427f */
  goto L_1125427f;
L_11254298:;
  /* 11254298 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1125429b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112542a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112542a4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 112542ab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112542ae mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 112542b5 jmp 0x112542c0 */
  goto L_112542c0;
L_112542b7:;
  /* 112542b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112542ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112542bd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_112542c0:;
  /* 112542c0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112542c4 jge 0x112542e6 */
  if ((C.sf==C.of)) goto L_112542e6;
  /* 112542c6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112542c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112542cc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 112542cf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112542d2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112542d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112542d8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 112542db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112542de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112542e1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 112542e4 jmp 0x112542b7 */
  goto L_112542b7;
L_112542e6:;
  /* 112542e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112542e9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 112542ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112542ef mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112542f2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112542f4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112542f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 112542f9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 112542fe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11254303 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11254306 push edx */
  push32((uint32_t)(EDX));
  /* 11254307 call dword ptr [0x112833a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833a4))), 0x1125430du);
  /* 1125430d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125430f jne 0x11254319 */
  if (!C.zf) goto L_11254319;
  /* 11254311 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11254314 jmp 0x1125444a */
  goto L_1125444a;
L_11254319:;
  /* 11254319 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125431c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254321 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11254324 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11254327 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125432a jmp 0x11254338 */
  goto L_11254338;
L_1125432c:;
  /* 1125432c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125432f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254335 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11254338:;
  /* 11254338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125433b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125433e ja 0x1125439d */
  if ((!C.cf&&!C.zf)) goto L_1125439d;
  /* 11254340 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254343 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1125434a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125434d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11254357 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125435a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125435d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11254360 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11254363 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11254369 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125436c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254372 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11254375 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11254378 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125437b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254381 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11254384 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11254387 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125438a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125438f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11254392 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11254395 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1125439b jmp 0x1125432c */
  goto L_1125432c;
L_1125439d:;
  /* 1125439d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112543a0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112543a6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112543a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112543ac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112543af mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112543b2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 112543b5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112543b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112543bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112543be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112543c1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112543c4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 112543c7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112543ca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112543cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112543d0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 112543d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112543d6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112543d9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112543dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112543df mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112543e2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 112543e5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112543e8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112543eb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 112543f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112543f6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112543f9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11254404 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11254407 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1125440b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125440e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11254411 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11254414 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11254417 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1125441a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125441c jne 0x1125442d */
  if (!C.zf) goto L_1125442d;
  /* 1125441e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11254421 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11254424 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11254427 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125442a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1125442d:;
  /* 1125442d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11254432 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11254435 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11254437 not edx */
  EDX = (~(EDX));
  /* 11254439 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125443c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1125443f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11254441 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11254444 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11254447 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1125444a:;
  /* 1125444a mov esp, ebp */
  ESP = (EBP);
  /* 1125444c pop ebp */
  EBP = (pop32());
  /* 1125444d ret  */
  ESPCHK(0x11254260u, _esp0);
  ESP += 4; return;
}

/* FUN_10014450 @ 0x11254450 (1515 bytes, 489 insns) */
void f_11254450(void) {
  FTRACE(0x11254450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11254450 push ebp */
  push32((uint32_t)(EBP));
  /* 11254451 mov ebp, esp */
  EBP = (ESP);
  /* 11254453 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254456 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11254459 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125445c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1125445e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11254461 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11254464 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11254467 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1125446a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125446d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11254470 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254473 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11254476 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11254479 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1125447c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125447f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254482 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11254488 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125448b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11254492 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11254495 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11254498 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125449b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1125449e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112544a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112544a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112544a6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 112544a9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112544ac add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112544af mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 112544b2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112544b5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112544b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 112544ba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112544bd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112544c0 jle 0x11254776 */
  if ((C.zf||C.sf!=C.of)) goto L_11254776;
  /* 112544c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112544c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112544cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112544ce jne 0x112544db */
  if (!C.zf) goto L_112544db;
  /* 112544d0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112544d3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112544d6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112544d9 jle 0x112544e2 */
  if ((C.zf||C.sf!=C.of)) goto L_112544e2;
L_112544db:;
  /* 112544db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112544dd jmp 0x11254a37 */
  goto L_11254a37;
L_112544e2:;
  /* 112544e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112544e5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 112544e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112544eb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112544ee cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112544f2 jbe 0x112544fb */
  if ((C.cf||C.zf)) goto L_112544fb;
  /* 112544f4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_112544fb:;
  /* 112544fb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112544fe mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11254501 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11254504 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254507 jne 0x112545dd */
  if (!C.zf) goto L_112545dd;
  /* 1125450d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254511 jae 0x11254572 */
  if (!C.cf) goto L_11254572;
  /* 11254513 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11254518 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125451b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1125451d not edx */
  EDX = (~(EDX));
  /* 1125451f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254522 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254525 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11254529 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1125452b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125452e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254531 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11254535 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254538 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125453b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1125453e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11254541 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254544 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254547 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1125454a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125454d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254550 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11254554 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11254556 jne 0x11254570 */
  if (!C.zf) goto L_11254570;
  /* 11254558 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1125455d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11254560 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11254562 not edx */
  EDX = (~(EDX));
  /* 11254564 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11254567 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11254569 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1125456b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125456e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11254570:;
  /* 11254570 jmp 0x112545dd */
  goto L_112545dd;
L_11254572:;
  /* 11254572 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11254575 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254578 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1125457d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1125457f not eax */
  EAX = (~(EAX));
  /* 11254581 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254584 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254587 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1125458e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11254590 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254593 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254596 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1125459d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112545a0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112545a3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 112545a6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112545a9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112545ac add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112545af mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 112545b2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112545b5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112545b8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112545bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112545be jne 0x112545dd */
  if (!C.zf) goto L_112545dd;
  /* 112545c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112545c3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112545c6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112545cb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112545cd not eax */
  EAX = (~(EAX));
  /* 112545cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112545d2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112545d5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112545d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112545da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_112545dd:;
  /* 112545dd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112545e0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112545e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112545e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112545e9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 112545ec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112545ef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112545f2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112545f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112545f8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 112545fb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112545fe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254601 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254604 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11254607 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125460b jle 0x11254757 */
  if ((C.zf||C.sf!=C.of)) goto L_11254757;
  /* 11254611 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11254614 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254617 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1125461a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125461d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11254620 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254623 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11254626 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125462a jbe 0x11254633 */
  if ((C.cf||C.zf)) goto L_11254633;
  /* 1125462c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11254633:;
  /* 11254633 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11254636 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11254639 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1125463c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1125463f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11254642 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11254645 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11254648 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1125464b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125464e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11254651 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11254654 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11254657 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125465a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1125465d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11254660 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11254663 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11254666 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11254669 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125466c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125466f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11254672 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254675 jne 0x11254743 */
  if (!C.zf) goto L_11254743;
  /* 1125467b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125467f jae 0x112546dc */
  if (!C.cf) goto L_112546dc;
  /* 11254681 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254684 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254687 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1125468b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125468e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254691 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11254694 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11254697 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125469a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125469d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 112546a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112546a2 jne 0x112546ba */
  if (!C.zf) goto L_112546ba;
  /* 112546a4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112546a9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112546ac shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112546ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112546b1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112546b3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112546b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112546b8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112546ba:;
  /* 112546ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112546bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112546c2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112546c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112546c7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112546ca mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 112546ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112546d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112546d3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112546d6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 112546da jmp 0x11254743 */
  goto L_11254743;
L_112546dc:;
  /* 112546dc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112546df add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112546e2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112546e6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112546e9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112546ec mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112546ef add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 112546f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112546f5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112546f8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 112546fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112546fd jne 0x1125471a */
  if (!C.zf) goto L_1125471a;
  /* 112546ff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11254702 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254705 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1125470a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1125470c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125470f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11254712 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11254714 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11254717 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1125471a:;
  /* 1125471a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125471d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254720 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11254725 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11254727 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125472a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125472d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11254734 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11254736 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254739 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125473c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11254743:;
  /* 11254743 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11254746 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11254749 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1125474b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125474e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254751 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11254754 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11254757:;
  /* 11254757 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1125475a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125475d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11254760 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11254762 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11254765 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254768 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125476b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125476e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11254771 jmp 0x11254a32 */
  goto L_11254a32;
L_11254776:;
  /* 11254776 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11254779 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125477c jge 0x11254a32 */
  if ((C.sf==C.of)) goto L_11254a32;
  /* 11254782 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11254785 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254788 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125478b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1125478d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11254790 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254793 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11254796 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254799 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1125479c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125479f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112547a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112547a5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112547a8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112547ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112547ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112547b1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 112547b4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112547b7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 112547ba cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112547be jbe 0x112547c7 */
  if ((C.cf||C.zf)) goto L_112547c7;
  /* 112547c0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_112547c7:;
  /* 112547c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112547ca and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112547cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112547cf jne 0x11254910 */
  if (!C.zf) goto L_11254910;
  /* 112547d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112547d8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 112547db sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112547de mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112547e1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112547e5 jbe 0x112547ee */
  if ((C.cf||C.zf)) goto L_112547ee;
  /* 112547e7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_112547ee:;
  /* 112547ee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112547f1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112547f4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 112547f7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112547fa jne 0x112548d0 */
  if (!C.zf) goto L_112548d0;
  /* 11254800 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254804 jae 0x11254865 */
  if (!C.cf) goto L_11254865;
  /* 11254806 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1125480b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125480e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11254810 not edx */
  EDX = (~(EDX));
  /* 11254812 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254815 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254818 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1125481c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1125481e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254821 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254824 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11254828 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125482b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125482e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11254831 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11254834 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254837 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125483a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1125483d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254840 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254843 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11254847 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11254849 jne 0x11254863 */
  if (!C.zf) goto L_11254863;
  /* 1125484b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11254850 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11254853 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11254855 not edx */
  EDX = (~(EDX));
  /* 11254857 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125485a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125485c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1125485e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11254861 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11254863:;
  /* 11254863 jmp 0x112548d0 */
  goto L_112548d0;
L_11254865:;
  /* 11254865 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11254868 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125486b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11254870 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11254872 not eax */
  EAX = (~(EAX));
  /* 11254874 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254877 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125487a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11254881 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11254883 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254886 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254889 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11254890 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254893 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254896 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11254899 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1125489c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125489f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112548a2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 112548a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112548a8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112548ab movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112548af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112548b1 jne 0x112548d0 */
  if (!C.zf) goto L_112548d0;
  /* 112548b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112548b6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112548b9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112548be shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112548c0 not eax */
  EAX = (~(EAX));
  /* 112548c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112548c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112548c8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112548ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112548cd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_112548d0:;
  /* 112548d0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112548d3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112548d6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112548d9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112548dc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 112548df mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112548e2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112548e5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112548e8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112548eb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 112548ee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112548f1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112548f4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112548f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112548fa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 112548fd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254900 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11254903 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254907 jbe 0x11254910 */
  if ((C.cf||C.zf)) goto L_11254910;
  /* 11254909 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11254910:;
  /* 11254910 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11254913 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11254916 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11254919 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1125491c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125491f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11254922 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11254925 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11254928 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125492b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125492e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11254931 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11254934 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11254937 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1125493a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125493d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11254940 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11254943 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11254946 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11254949 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125494c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1125494f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254952 jne 0x11254a1e */
  if (!C.zf) goto L_11254a1e;
  /* 11254958 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125495c jae 0x112549b8 */
  if (!C.cf) goto L_112549b8;
  /* 1125495e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254961 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254964 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11254968 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125496b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125496e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11254971 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11254973 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254976 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254979 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1125497c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125497e jne 0x11254996 */
  if (!C.zf) goto L_11254996;
  /* 11254980 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11254985 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11254988 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1125498a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125498d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125498f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11254991 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11254994 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11254996:;
  /* 11254996 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1125499b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1125499e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112549a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112549a3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112549a6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 112549aa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112549ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112549af mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112549b2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 112549b6 jmp 0x11254a1e */
  goto L_11254a1e;
L_112549b8:;
  /* 112549b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112549bb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112549be movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 112549c2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112549c5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112549c8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 112549cb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112549cd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112549d0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112549d3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 112549d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112549d8 jne 0x112549f5 */
  if (!C.zf) goto L_112549f5;
  /* 112549da mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112549dd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112549e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112549e5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112549e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112549ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112549ed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112549ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112549f2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_112549f5:;
  /* 112549f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112549f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112549fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11254a00 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11254a02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254a05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254a08 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11254a0f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11254a11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254a14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11254a17 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11254a1e:;
  /* 11254a1e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11254a21 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11254a24 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11254a26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11254a29 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254a2c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11254a2f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11254a32:;
  /* 11254a32 mov eax, 1 */
  EAX = (0x1u);
L_11254a37:;
  /* 11254a37 mov esp, ebp */
  ESP = (EBP);
  /* 11254a39 pop ebp */
  EBP = (pop32());
  /* 11254a3a ret  */
  ESPCHK(0x11254450u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a40 @ 0x11254a40 (304 bytes, 79 insns) */
void f_11254a40(void) {
  FTRACE(0x11254a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11254a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11254a41 mov ebp, esp */
  EBP = (ESP);
  /* 11254a43 push ecx */
  push32((uint32_t)(ECX));
  /* 11254a44 cmp dword ptr [0x11282da0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282da0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254a4b je 0x11254b6c */
  if (C.zf) goto L_11254b6c;
  /* 11254a51 mov eax, dword ptr [0x11282d98] */
  EAX = (r32((uint32_t)(0x11282d98)));
  /* 11254a56 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11254a59 mov ecx, dword ptr [0x11282da0] */
  ECX = (r32((uint32_t)(0x11282da0)));
  /* 11254a5f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11254a62 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254a64 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11254a67 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11254a6c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11254a71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11254a74 push eax */
  push32((uint32_t)(EAX));
  /* 11254a75 call dword ptr [0x112833b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833b4))), 0x11254a7bu);
  /* 11254a7b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11254a80 mov ecx, dword ptr [0x11282d98] */
  ECX = (r32((uint32_t)(0x11282d98)));
  /* 11254a86 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11254a88 mov eax, dword ptr [0x11282da0] */
  EAX = (r32((uint32_t)(0x11282da0)));
  /* 11254a8d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11254a90 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11254a92 mov edx, dword ptr [0x11282da0] */
  EDX = (r32((uint32_t)(0x11282da0)));
  /* 11254a98 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11254a9b mov eax, dword ptr [0x11282da0] */
  EAX = (r32((uint32_t)(0x11282da0)));
  /* 11254aa0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11254aa3 mov edx, dword ptr [0x11282d98] */
  EDX = (r32((uint32_t)(0x11282d98)));
  /* 11254aa9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11254ab4 mov eax, dword ptr [0x11282da0] */
  EAX = (r32((uint32_t)(0x11282da0)));
  /* 11254ab9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11254abc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11254abf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11254ac2 mov eax, dword ptr [0x11282da0] */
  EAX = (r32((uint32_t)(0x11282da0)));
  /* 11254ac7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11254aca mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11254acd mov edx, dword ptr [0x11282da0] */
  EDX = (r32((uint32_t)(0x11282da0)));
  /* 11254ad3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11254ad6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11254ada test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11254adc jne 0x11254af2 */
  if (!C.zf) goto L_11254af2;
  /* 11254ade mov edx, dword ptr [0x11282da0] */
  EDX = (r32((uint32_t)(0x11282da0)));
  /* 11254ae4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11254ae7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11254ae9 mov ecx, dword ptr [0x11282da0] */
  ECX = (r32((uint32_t)(0x11282da0)));
  /* 11254aef mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11254af2:;
  /* 11254af2 mov edx, dword ptr [0x11282da0] */
  EDX = (r32((uint32_t)(0x11282da0)));
  /* 11254af8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254afc jne 0x11254b62 */
  if (!C.zf) goto L_11254b62;
  /* 11254afe cmp dword ptr [0x11282da4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11282da4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254b05 jle 0x11254b62 */
  if ((C.zf||C.sf!=C.of)) goto L_11254b62;
  /* 11254b07 mov eax, dword ptr [0x11282da0] */
  EAX = (r32((uint32_t)(0x11282da0)));
  /* 11254b0c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11254b0f push ecx */
  push32((uint32_t)(ECX));
  /* 11254b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11254b12 mov edx, dword ptr [0x11282dac] */
  EDX = (r32((uint32_t)(0x11282dac)));
  /* 11254b18 push edx */
  push32((uint32_t)(EDX));
  /* 11254b19 call dword ptr [0x112833c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833c4))), 0x11254b1fu);
  /* 11254b1f mov eax, dword ptr [0x11282da4] */
  EAX = (r32((uint32_t)(0x11282da4)));
  /* 11254b24 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11254b27 mov ecx, dword ptr [0x11282da8] */
  ECX = (r32((uint32_t)(0x11282da8)));
  /* 11254b2d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254b2f mov edx, dword ptr [0x11282da0] */
  EDX = (r32((uint32_t)(0x11282da0)));
  /* 11254b35 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254b38 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254b3a push ecx */
  push32((uint32_t)(ECX));
  /* 11254b3b mov eax, dword ptr [0x11282da0] */
  EAX = (r32((uint32_t)(0x11282da0)));
  /* 11254b40 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254b43 push eax */
  push32((uint32_t)(EAX));
  /* 11254b44 mov ecx, dword ptr [0x11282da0] */
  ECX = (r32((uint32_t)(0x11282da0)));
  /* 11254b4a push ecx */
  push32((uint32_t)(ECX));
  /* 11254b4b call 0x11252c90 */
  push32(0x11254b50u); f_11252c90();
  /* 11254b50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11254b53 mov edx, dword ptr [0x11282da4] */
  EDX = (r32((uint32_t)(0x11282da4)));
  /* 11254b59 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254b5c mov dword ptr [0x11282da4], edx */
  w32((uint32_t)(0x11282da4), (EDX));
L_11254b62:;
  /* 11254b62 mov dword ptr [0x11282da0], 0 */
  w32((uint32_t)(0x11282da0), (0x0u));
L_11254b6c:;
  /* 11254b6c mov esp, ebp */
  ESP = (EBP);
  /* 11254b6e pop ebp */
  EBP = (pop32());
  /* 11254b6f ret  */
  ESPCHK(0x11254a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b70 @ 0x11254b70 (1565 bytes, 343 insns) */
void f_11254b70(void) {
  FTRACE(0x11254b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11254b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11254b71 mov ebp, esp */
  EBP = (ESP);
  /* 11254b73 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254b79 mov eax, dword ptr [0x11282da4] */
  EAX = (r32((uint32_t)(0x11282da4)));
  /* 11254b7e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11254b81 push eax */
  push32((uint32_t)(EAX));
  /* 11254b82 mov ecx, dword ptr [0x11282da8] */
  ECX = (r32((uint32_t)(0x11282da8)));
  /* 11254b88 push ecx */
  push32((uint32_t)(ECX));
  /* 11254b89 call dword ptr [0x11283414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283414))), 0x11254b8fu);
  /* 11254b8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11254b91 je 0x11254b9b */
  if (C.zf) goto L_11254b9b;
  /* 11254b93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11254b96 jmp 0x11255189 */
  goto L_11255189;
L_11254b9b:;
  /* 11254b9b mov edx, dword ptr [0x11282da8] */
  EDX = (r32((uint32_t)(0x11282da8)));
  /* 11254ba1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11254ba7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11254bb1 jmp 0x11254bc2 */
  goto L_11254bc2;
L_11254bb3:;
  /* 11254bb3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11254bb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254bbc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11254bc2:;
  /* 11254bc2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11254bc8 cmp ecx, dword ptr [0x11282da4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11282da4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254bce jge 0x11255187 */
  if ((C.sf==C.of)) goto L_11255187;
  /* 11254bd4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11254bda mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11254bdd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11254be3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11254be8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11254bee push ecx */
  push32((uint32_t)(ECX));
  /* 11254bef call dword ptr [0x11283414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283414))), 0x11254bf5u);
  /* 11254bf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11254bf7 je 0x11254c03 */
  if (C.zf) goto L_11254c03;
  /* 11254bf9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11254bfe jmp 0x11255189 */
  goto L_11255189;
L_11254c03:;
  /* 11254c03 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11254c09 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11254c0c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11254c12 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11254c18 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254c1e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11254c21 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11254c27 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11254c2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11254c2d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11254c37 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11254c41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11254c48 jmp 0x11254c53 */
  goto L_11254c53;
L_11254c4a:;
  /* 11254c4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11254c4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254c50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11254c53:;
  /* 11254c53 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254c57 jge 0x1125514b */
  if ((C.sf==C.of)) goto L_1125514b;
  /* 11254c5d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11254c67 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11254c71 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11254c7b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11254c85 jmp 0x11254c96 */
  goto L_11254c96;
L_11254c87:;
  /* 11254c87 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11254c8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254c90 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11254c96:;
  /* 11254c96 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254c9d jge 0x11254cb2 */
  if ((C.sf==C.of)) goto L_11254cb2;
  /* 11254c9f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11254ca5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11254cb0 jmp 0x11254c87 */
  goto L_11254c87;
L_11254cb2:;
  /* 11254cb2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254cb6 jl 0x112550ed */
  if ((C.sf!=C.of)) goto L_112550ed;
  /* 11254cbc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11254cc1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11254cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11254cc8 call dword ptr [0x11283414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283414))), 0x11254cceu);
  /* 11254cce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11254cd0 je 0x11254cdc */
  if (C.zf) goto L_11254cdc;
  /* 11254cd2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11254cd7 jmp 0x11255189 */
  goto L_11255189;
L_11254cdc:;
  /* 11254cdc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11254ce2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11254ce5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11254cef jmp 0x11254d00 */
  goto L_11254d00;
L_11254cf1:;
  /* 11254cf1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11254cf7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254cfa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11254d00:;
  /* 11254d00 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254d07 jge 0x11254e84 */
  if ((C.sf==C.of)) goto L_11254e84;
  /* 11254d0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11254d10 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254d13 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11254d19 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11254d1f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254d25 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11254d2b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11254d31 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254d35 jne 0x11254d42 */
  if (!C.zf) goto L_11254d42;
  /* 11254d37 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11254d3d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254d40 je 0x11254d4c */
  if (C.zf) goto L_11254d4c;
L_11254d42:;
  /* 11254d42 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11254d47 jmp 0x11255189 */
  goto L_11255189;
L_11254d4c:;
  /* 11254d4c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11254d52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11254d54 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11254d5a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11254d60 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11254d66 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11254d6c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11254d6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11254d71 je 0x11254da9 */
  if (C.zf) goto L_11254da9;
  /* 11254d73 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11254d79 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254d7c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11254d82 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254d8c jle 0x11254d98 */
  if ((C.zf||C.sf!=C.of)) goto L_11254d98;
  /* 11254d8e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11254d93 jmp 0x11255189 */
  goto L_11255189;
L_11254d98:;
  /* 11254d98 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11254d9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254da1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11254da7 jmp 0x11254deb */
  goto L_11254deb;
L_11254da9:;
  /* 11254da9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11254daf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11254db2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254db5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11254dbb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254dc2 jle 0x11254dce */
  if ((C.zf||C.sf!=C.of)) goto L_11254dce;
  /* 11254dc4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11254dce:;
  /* 11254dce mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11254dd4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11254ddb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254dde mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11254de4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11254deb:;
  /* 11254deb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254df2 jl 0x11254e0d */
  if ((C.sf!=C.of)) goto L_11254e0d;
  /* 11254df4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11254dfa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11254dfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11254dff jne 0x11254e0d */
  if (!C.zf) goto L_11254e0d;
  /* 11254e01 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254e0b jle 0x11254e17 */
  if ((C.zf||C.sf!=C.of)) goto L_11254e17;
L_11254e0d:;
  /* 11254e0d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11254e12 jmp 0x11255189 */
  goto L_11255189;
L_11254e17:;
  /* 11254e17 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11254e1d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254e23 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11254e26 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254e2c je 0x11254e38 */
  if (C.zf) goto L_11254e38;
  /* 11254e2e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11254e33 jmp 0x11255189 */
  goto L_11255189;
L_11254e38:;
  /* 11254e38 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11254e3e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254e44 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11254e4a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11254e50 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254e56 jb 0x11254d4c */
  if (C.cf) goto L_11254d4c;
  /* 11254e5c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11254e62 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254e68 je 0x11254e74 */
  if (C.zf) goto L_11254e74;
  /* 11254e6a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11254e6f jmp 0x11255189 */
  goto L_11255189;
L_11254e74:;
  /* 11254e74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11254e77 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254e7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11254e7f jmp 0x11254cf1 */
  goto L_11254cf1;
L_11254e84:;
  /* 11254e84 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11254e87 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11254e89 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254e8f je 0x11254e9b */
  if (C.zf) goto L_11254e9b;
  /* 11254e91 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11254e96 jmp 0x11255189 */
  goto L_11255189;
L_11254e9b:;
  /* 11254e9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11254e9e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11254ea4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11254eab jmp 0x11254eb6 */
  goto L_11254eb6;
L_11254ead:;
  /* 11254ead mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11254eb0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254eb3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11254eb6:;
  /* 11254eb6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254eba jge 0x112550ed */
  if ((C.sf==C.of)) goto L_112550ed;
  /* 11254ec0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11254eca mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11254ed0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11254ed6:;
  /* 11254ed6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11254edc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11254edf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11254ee5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11254eeb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254ef1 je 0x1125501a */
  if (C.zf) goto L_1125501a;
  /* 11254ef7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11254efa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11254f00 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254f07 je 0x1125501a */
  if (C.zf) goto L_1125501a;
  /* 11254f0d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11254f13 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254f19 jb 0x11254f2e */
  if (C.cf) goto L_11254f2e;
  /* 11254f1b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11254f21 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254f26 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254f2c jb 0x11254f38 */
  if (C.cf) goto L_11254f38;
L_11254f2e:;
  /* 11254f2e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11254f33 jmp 0x11255189 */
  goto L_11255189;
L_11254f38:;
  /* 11254f38 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11254f3e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11254f44 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11254f4a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11254f50 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254f53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11254f56 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11254f59 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254f5e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11254f64:;
  /* 11254f64 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11254f67 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254f6d je 0x11254f8e */
  if (C.zf) goto L_11254f8e;
  /* 11254f6f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11254f72 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254f78 jne 0x11254f7c */
  if (!C.zf) goto L_11254f7c;
  /* 11254f7a jmp 0x11254f8e */
  goto L_11254f8e;
L_11254f7c:;
  /* 11254f7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11254f7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11254f81 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11254f84 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11254f87 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11254f89 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11254f8c jmp 0x11254f64 */
  goto L_11254f64;
L_11254f8e:;
  /* 11254f8e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11254f91 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254f97 jne 0x11254fa3 */
  if (!C.zf) goto L_11254fa3;
  /* 11254f99 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11254f9e jmp 0x11255189 */
  goto L_11255189;
L_11254fa3:;
  /* 11254fa3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11254fa9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11254fab sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11254fae sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11254fb1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11254fb7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254fbe jle 0x11254fca */
  if ((C.zf||C.sf!=C.of)) goto L_11254fca;
  /* 11254fc0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11254fca:;
  /* 11254fca mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11254fd0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254fd3 je 0x11254fdf */
  if (C.zf) goto L_11254fdf;
  /* 11254fd5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11254fda jmp 0x11255189 */
  goto L_11255189;
L_11254fdf:;
  /* 11254fdf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11254fe5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11254fe8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11254fee je 0x11254ffa */
  if (C.zf) goto L_11254ffa;
  /* 11254ff0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11254ff5 jmp 0x11255189 */
  goto L_11255189;
L_11254ffa:;
  /* 11254ffa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11255000 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11255006 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1125500c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125500f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11255015 jmp 0x11254ed6 */
  goto L_11254ed6;
L_1125501a:;
  /* 1125501a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255021 je 0x11255091 */
  if (C.zf) goto L_11255091;
  /* 11255023 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255027 jge 0x1125505b */
  if ((C.sf==C.of)) goto L_1125505b;
  /* 11255029 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1125502e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11255031 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11255033 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11255039 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1125503b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11255041 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11255046 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11255049 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1125504b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11255051 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11255053 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11255059 jmp 0x11255091 */
  goto L_11255091;
L_1125505b:;
  /* 1125505b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125505e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11255061 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11255066 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11255068 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1125506e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11255070 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11255076 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11255079 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125507c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11255081 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11255083 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11255089 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1125508b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11255091:;
  /* 11255091 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11255097 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1125509a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112550a0 jne 0x112550b4 */
  if (!C.zf) goto L_112550b4;
  /* 112550a2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112550a5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 112550ab cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112550b2 je 0x112550be */
  if (C.zf) goto L_112550be;
L_112550b4:;
  /* 112550b4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 112550b9 jmp 0x11255189 */
  goto L_11255189;
L_112550be:;
  /* 112550be mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 112550c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112550c7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112550cd je 0x112550d9 */
  if (C.zf) goto L_112550d9;
  /* 112550cf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 112550d4 jmp 0x11255189 */
  goto L_11255189;
L_112550d9:;
  /* 112550d9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 112550df add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112550e2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 112550e8 jmp 0x11254ead */
  goto L_11254ead;
L_112550ed:;
  /* 112550ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112550f0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 112550f6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 112550fc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255100 jne 0x1125511a */
  if (!C.zf) goto L_1125511a;
  /* 11255102 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255105 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1125510b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11255111 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255118 je 0x11255121 */
  if (C.zf) goto L_11255121;
L_1125511a:;
  /* 1125511a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1125511f jmp 0x11255189 */
  goto L_11255189;
L_11255121:;
  /* 11255121 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11255127 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125512d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11255133 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11255136 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125513b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1125513e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11255141 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11255143 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11255146 jmp 0x11254c4a */
  goto L_11254c4a;
L_1125514b:;
  /* 1125514b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11255151 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11255157 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255159 jne 0x1125516c */
  if (!C.zf) goto L_1125516c;
  /* 1125515b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11255161 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11255167 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125516a je 0x11255173 */
  if (C.zf) goto L_11255173;
L_1125516c:;
  /* 1125516c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11255171 jmp 0x11255189 */
  goto L_11255189;
L_11255173:;
  /* 11255173 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11255179 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125517c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11255182 jmp 0x11254bb3 */
  goto L_11254bb3;
L_11255187:;
  /* 11255187 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11255189:;
  /* 11255189 mov esp, ebp */
  ESP = (EBP);
  /* 1125518b pop ebp */
  EBP = (pop32());
  /* 1125518c ret  */
  ESPCHK(0x11254b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10015190 @ 0x11255190 (250 bytes, 92 insns) */
void f_11255190(void) {
  FTRACE(0x11255190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11255190 push ebp */
  push32((uint32_t)(EBP));
  /* 11255191 mov ebp, esp */
  EBP = (ESP);
  /* 11255193 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11255196 push ebx */
  push32((uint32_t)(EBX));
  /* 11255197 push esi */
  push32((uint32_t)(ESI));
  /* 11255198 push edi */
  push32((uint32_t)(EDI));
  /* 11255199 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1125519c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1125519f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 112551a2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_112551a5:;
  /* 112551a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112551a9 jne 0x112551c9 */
  if (!C.zf) goto L_112551c9;
  /* 112551ab push 0x1127c080 */
  push32((uint32_t)(0x1127c080u));
  /* 112551b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112551b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 112551b4 push 0x1127c074 */
  push32((uint32_t)(0x1127c074u));
  /* 112551b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 112551bb call 0x1124b3e0 */
  push32(0x112551c0u); f_1124b3e0();
  /* 112551c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112551c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112551c6 jne 0x112551c9 */
  if (!C.zf) goto L_112551c9;
  /* 112551c8 int3  */
  x86_unimpl("int3 @ 0x112551c8");
L_112551c9:;
  /* 112551c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112551cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112551cd jne 0x112551a5 */
  if (!C.zf) goto L_112551a5;
L_112551cf:;
  /* 112551cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112551d3 jne 0x112551f3 */
  if (!C.zf) goto L_112551f3;
  /* 112551d5 push 0x1127c064 */
  push32((uint32_t)(0x1127c064u));
  /* 112551da push 0 */
  push32((uint32_t)(0x0u));
  /* 112551dc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 112551de push 0x1127c074 */
  push32((uint32_t)(0x1127c074u));
  /* 112551e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112551e5 call 0x1124b3e0 */
  push32(0x112551eau); f_1124b3e0();
  /* 112551ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112551ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112551f0 jne 0x112551f3 */
  if (!C.zf) goto L_112551f3;
  /* 112551f2 int3  */
  x86_unimpl("int3 @ 0x112551f2");
L_112551f3:;
  /* 112551f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112551f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112551f7 jne 0x112551cf */
  if (!C.zf) goto L_112551cf;
  /* 112551f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112551fc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11255203 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11255206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255209 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1125520c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1125520f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255212 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11255214 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11255217 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1125521e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11255221 push ecx */
  push32((uint32_t)(ECX));
  /* 11255222 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11255225 push edx */
  push32((uint32_t)(EDX));
  /* 11255226 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11255229 push eax */
  push32((uint32_t)(EAX));
  /* 1125522a call 0x11256f70 */
  push32(0x1125522fu); f_11256f70();
  /* 1125522f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255232 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11255235 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11255238 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1125523b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125523e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11255241 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11255244 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11255247 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125524b jl 0x1125526f */
  if ((C.sf!=C.of)) goto L_1125526f;
  /* 1125524d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11255250 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11255252 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11255255 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11255257 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125525d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11255260 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11255263 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11255265 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255268 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1125526b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1125526d jmp 0x11255280 */
  goto L_11255280;
L_1125526f:;
  /* 1125526f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11255272 push edx */
  push32((uint32_t)(EDX));
  /* 11255273 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255275 call 0x11256cf0 */
  push32(0x1125527au); f_11256cf0();
  /* 1125527a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125527d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11255280:;
  /* 11255280 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11255283 pop edi */
  EDI = (pop32());
  /* 11255284 pop esi */
  ESI = (pop32());
  /* 11255285 pop ebx */
  EBX = (pop32());
  /* 11255286 mov esp, ebp */
  ESP = (EBP);
  /* 11255288 pop ebp */
  EBP = (pop32());
  /* 11255289 ret  */
  ESPCHK(0x11255190u, _esp0);
  ESP += 4; return;
}

/* FUN_10015290 @ 0x11255290 (91 bytes, 30 insns) */
void f_11255290(void) {
  FTRACE(0x11255290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11255290 push ebp */
  push32((uint32_t)(EBP));
  /* 11255291 mov ebp, esp */
  EBP = (ESP);
  /* 11255293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255296 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11255298 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125529e jne 0x112552be */
  if (!C.zf) goto L_112552be;
  /* 112552a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112552a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112552a5 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112552a9 jne 0x112552be */
  if (!C.zf) goto L_112552be;
  /* 112552ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112552ae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112552b0 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112552b7 jne 0x112552be */
  if (!C.zf) goto L_112552be;
  /* 112552b9 call 0x1124f6f0 */
  push32(0x112552beu); f_1124f6f0();
L_112552be:;
  /* 112552be cmp dword ptr [0x11281600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112552c5 je 0x112552e5 */
  if (C.zf) goto L_112552e5;
  /* 112552c7 mov eax, dword ptr [0x11281600] */
  EAX = (r32((uint32_t)(0x11281600)));
  /* 112552cc push eax */
  push32((uint32_t)(EAX));
  /* 112552cd call 0x11255390 */
  push32(0x112552d2u); f_11255390();
  /* 112552d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112552d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112552d7 je 0x112552e5 */
  if (C.zf) goto L_112552e5;
  /* 112552d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112552dc push ecx */
  push32((uint32_t)(ECX));
  /* 112552dd call dword ptr [0x11281600] */
  call_ind((uint32_t)(r32((uint32_t)(0x11281600))), 0x112552e3u);
  /* 112552e3 jmp 0x112552e7 */
  goto L_112552e7;
L_112552e5:;
  /* 112552e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112552e7:;
  /* 112552e7 pop ebp */
  EBP = (pop32());
  /* 112552e8 ret 4 */
  ESPCHK(0x11255290u, _esp0);
  ESP += 8; return;
}

/* FUN_100152f0 @ 0x112552f0 (21 bytes, 7 insns) */
void f_112552f0(void) {
  FTRACE(0x112552f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112552f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112552f1 mov ebp, esp */
  EBP = (ESP);
  /* 112552f3 push 0x11255290 */
  push32((uint32_t)(0x11255290u));
  /* 112552f8 call dword ptr [0x112833ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833ac))), 0x112552feu);
  /* 112552fe mov dword ptr [0x11281600], eax */
  w32((uint32_t)(0x11281600), (EAX));
  /* 11255303 pop ebp */
  EBP = (pop32());
  /* 11255304 ret  */
  ESPCHK(0x112552f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015310 @ 0x11255310 (17 bytes, 7 insns) */
void f_11255310(void) {
  FTRACE(0x11255310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11255310 push ebp */
  push32((uint32_t)(EBP));
  /* 11255311 mov ebp, esp */
  EBP = (ESP);
  /* 11255313 mov eax, dword ptr [0x11281600] */
  EAX = (r32((uint32_t)(0x11281600)));
  /* 11255318 push eax */
  push32((uint32_t)(EAX));
  /* 11255319 call dword ptr [0x112833ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833ac))), 0x1125531fu);
  /* 1125531f pop ebp */
  EBP = (pop32());
  /* 11255320 ret  */
  ESPCHK(0x11255310u, _esp0);
  ESP += 4; return;
}

/* FUN_10015330 @ 0x11255330 (43 bytes, 16 insns) */
void f_11255330(void) {
  FTRACE(0x11255330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11255330 push ebp */
  push32((uint32_t)(EBP));
  /* 11255331 mov ebp, esp */
  EBP = (ESP);
  /* 11255333 push ecx */
  push32((uint32_t)(ECX));
  /* 11255334 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1125533b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125533e push eax */
  push32((uint32_t)(EAX));
  /* 1125533f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255342 push ecx */
  push32((uint32_t)(ECX));
  /* 11255343 call dword ptr [0x11283410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283410))), 0x11255349u);
  /* 11255349 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125534b je 0x11255354 */
  if (C.zf) goto L_11255354;
  /* 1125534d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11255354:;
  /* 11255354 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11255357 mov esp, ebp */
  ESP = (EBP);
  /* 11255359 pop ebp */
  EBP = (pop32());
  /* 1125535a ret  */
  ESPCHK(0x11255330u, _esp0);
  ESP += 4; return;
}

