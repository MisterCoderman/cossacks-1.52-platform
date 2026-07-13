#include "recomp.h"

/* FUN_1000f260 @ 0x12d6f260 (287 bytes, 86 insns) */
void f_12d6f260(void) {
  FTRACE(0x12d6f260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6f260 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6f261 mov ebp, esp */
  EBP = (ESP);
  /* 12d6f263 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f269 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f26a call 0x12d6f810 */
  push32(0x12d6f26fu); f_12d6f810();
  /* 12d6f26f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f272 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12d6f275 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d6f277 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d6f27a push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f27b mov edx, dword ptr [0x12d7e6f8] */
  EDX = (r32((uint32_t)(0x12d7e6f8)));
  /* 12d6f281 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6f283 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f285 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6f28b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f291 push edx */
  push32((uint32_t)(EDX));
  /* 12d6f292 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f295 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f296 call dword ptr [0x12d7e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e70c))), 0x12d6f29cu);
  /* 12d6f29c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f29e jne 0x12d6f2b4 */
  if (!C.zf) goto L_12d6f2b4;
  /* 12d6f2a0 mov dword ptr [0x12d7e704], 0 */
  w32((uint32_t)(0x12d7e704), (0x0u));
  /* 12d6f2aa mov eax, 1 */
  EAX = (0x1u);
  /* 12d6f2af jmp 0x12d6f379 */
  goto L_12d6f379;
L_12d6f2b4:;
  /* 12d6f2b4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d6f2b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f2b8 mov edx, dword ptr [0x12d7e6fc] */
  EDX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6f2be push edx */
  push32((uint32_t)(EDX));
  /* 12d6f2bf call 0x12d71450 */
  push32(0x12d6f2c4u); f_12d71450();
  /* 12d6f2c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f2c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f2c9 jne 0x12d6f309 */
  if (!C.zf) goto L_12d6f309;
  /* 12d6f2cb cmp dword ptr [0x12d7e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f2d2 jne 0x12d6f2e6 */
  if (!C.zf) goto L_12d6f2e6;
  /* 12d6f2d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6f2d6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f2d9 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f2da call 0x12d6f5a0 */
  push32(0x12d6f2dfu); f_12d6f5a0();
  /* 12d6f2df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f2e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f2e4 je 0x12d6f307 */
  if (C.zf) goto L_12d6f307;
L_12d6f2e6:;
  /* 12d6f2e6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f2e9 mov dword ptr [0x12d7e708], ecx */
  w32((uint32_t)(0x12d7e708), (ECX));
  /* 12d6f2ef mov edx, dword ptr [0x12d7e708] */
  EDX = (r32((uint32_t)(0x12d7e708)));
  /* 12d6f2f5 mov dword ptr [0x12d7e6ec], edx */
  w32((uint32_t)(0x12d7e6ec), (EDX));
  /* 12d6f2fb mov eax, dword ptr [0x12d7e704] */
  EAX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f300 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12d6f302 mov dword ptr [0x12d7e704], eax */
  w32((uint32_t)(0x12d7e704), (EAX));
L_12d6f307:;
  /* 12d6f307 jmp 0x12d6f36c */
  goto L_12d6f36c;
L_12d6f309:;
  /* 12d6f309 cmp dword ptr [0x12d7e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f310 jne 0x12d6f36c */
  if (!C.zf) goto L_12d6f36c;
  /* 12d6f312 cmp dword ptr [0x12d7e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f319 je 0x12d6f36c */
  if (C.zf) goto L_12d6f36c;
  /* 12d6f31b mov ecx, dword ptr [0x12d7e6f4] */
  ECX = (r32((uint32_t)(0x12d7e6f4)));
  /* 12d6f321 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f322 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12d6f325 push edx */
  push32((uint32_t)(EDX));
  /* 12d6f326 mov eax, dword ptr [0x12d7e6fc] */
  EAX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6f32b push eax */
  push32((uint32_t)(EAX));
  /* 12d6f32c call 0x12d71520 */
  push32(0x12d6f331u); f_12d71520();
  /* 12d6f331 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f336 jne 0x12d6f36c */
  if (!C.zf) goto L_12d6f36c;
  /* 12d6f338 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6f33a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f33d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f33e call 0x12d6f5a0 */
  push32(0x12d6f343u); f_12d6f5a0();
  /* 12d6f343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f346 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f348 je 0x12d6f36c */
  if (C.zf) goto L_12d6f36c;
  /* 12d6f34a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f34d mov dword ptr [0x12d7e708], edx */
  w32((uint32_t)(0x12d7e708), (EDX));
  /* 12d6f353 mov eax, dword ptr [0x12d7e708] */
  EAX = (r32((uint32_t)(0x12d7e708)));
  /* 12d6f358 mov dword ptr [0x12d7e6ec], eax */
  w32((uint32_t)(0x12d7e6ec), (EAX));
  /* 12d6f35d mov ecx, dword ptr [0x12d7e704] */
  ECX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f363 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6f366 mov dword ptr [0x12d7e704], ecx */
  w32((uint32_t)(0x12d7e704), (ECX));
L_12d6f36c:;
  /* 12d6f36c mov eax, dword ptr [0x12d7e704] */
  EAX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f371 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6f374 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6f376 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f378 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12d6f379:;
  /* 12d6f379 mov esp, ebp */
  ESP = (EBP);
  /* 12d6f37b pop ebp */
  EBP = (pop32());
  /* 12d6f37c ret 4 */
  ESPCHK(0x12d6f260u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f380 @ 0x12d6f380 (69 bytes, 20 insns) */
void f_12d6f380(void) {
  FTRACE(0x12d6f380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6f380 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6f381 mov ebp, esp */
  EBP = (ESP);
  /* 12d6f383 mov eax, dword ptr [0x12d7e700] */
  EAX = (r32((uint32_t)(0x12d7e700)));
  /* 12d6f388 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f389 call 0x12d65bb0 */
  push32(0x12d6f38eu); f_12d65bb0();
  /* 12d6f38e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f391 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6f393 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f396 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d6f399 mov dword ptr [0x12d7e6f0], ecx */
  w32((uint32_t)(0x12d7e6f0), (ECX));
  /* 12d6f39f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6f3a1 push 0x12d6f3d0 */
  push32((uint32_t)(0x12d6f3d0u));
  /* 12d6f3a6 call dword ptr [0x12d8026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8026c))), 0x12d6f3acu);
  /* 12d6f3ac mov edx, dword ptr [0x12d7e704] */
  EDX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f3b2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6f3b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6f3b7 jne 0x12d6f3c3 */
  if (!C.zf) goto L_12d6f3c3;
  /* 12d6f3b9 mov dword ptr [0x12d7e704], 0 */
  w32((uint32_t)(0x12d7e704), (0x0u));
L_12d6f3c3:;
  /* 12d6f3c3 pop ebp */
  EBP = (pop32());
  /* 12d6f3c4 ret  */
  ESPCHK(0x12d6f380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3d0 @ 0x12d6f3d0 (172 bytes, 54 insns) */
void f_12d6f3d0(void) {
  FTRACE(0x12d6f3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6f3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6f3d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6f3d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f3d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f3d9 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f3da call 0x12d6f810 */
  push32(0x12d6f3dfu); f_12d6f810();
  /* 12d6f3df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f3e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12d6f3e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d6f3e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d6f3ea push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f3eb mov edx, dword ptr [0x12d7e6f0] */
  EDX = (r32((uint32_t)(0x12d7e6f0)));
  /* 12d6f3f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6f3f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f3f5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6f3fb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f401 push edx */
  push32((uint32_t)(EDX));
  /* 12d6f402 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f405 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f406 call dword ptr [0x12d7e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e70c))), 0x12d6f40cu);
  /* 12d6f40c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f40e jne 0x12d6f421 */
  if (!C.zf) goto L_12d6f421;
  /* 12d6f410 mov dword ptr [0x12d7e704], 0 */
  w32((uint32_t)(0x12d7e704), (0x0u));
  /* 12d6f41a mov eax, 1 */
  EAX = (0x1u);
  /* 12d6f41f jmp 0x12d6f476 */
  goto L_12d6f476;
L_12d6f421:;
  /* 12d6f421 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d6f424 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f425 mov edx, dword ptr [0x12d7e700] */
  EDX = (r32((uint32_t)(0x12d7e700)));
  /* 12d6f42b push edx */
  push32((uint32_t)(EDX));
  /* 12d6f42c call 0x12d71450 */
  push32(0x12d6f431u); f_12d71450();
  /* 12d6f431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f436 jne 0x12d6f469 */
  if (!C.zf) goto L_12d6f469;
  /* 12d6f438 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f43b push eax */
  push32((uint32_t)(EAX));
  /* 12d6f43c call 0x12d6f550 */
  push32(0x12d6f441u); f_12d6f550();
  /* 12d6f441 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f444 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f446 je 0x12d6f469 */
  if (C.zf) goto L_12d6f469;
  /* 12d6f448 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d6f44b mov dword ptr [0x12d7e708], ecx */
  w32((uint32_t)(0x12d7e708), (ECX));
  /* 12d6f451 mov edx, dword ptr [0x12d7e708] */
  EDX = (r32((uint32_t)(0x12d7e708)));
  /* 12d6f457 mov dword ptr [0x12d7e6ec], edx */
  w32((uint32_t)(0x12d7e6ec), (EDX));
  /* 12d6f45d mov eax, dword ptr [0x12d7e704] */
  EAX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f462 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12d6f464 mov dword ptr [0x12d7e704], eax */
  w32((uint32_t)(0x12d7e704), (EAX));
L_12d6f469:;
  /* 12d6f469 mov eax, dword ptr [0x12d7e704] */
  EAX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f46e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6f471 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d6f473 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f475 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12d6f476:;
  /* 12d6f476 mov esp, ebp */
  ESP = (EBP);
  /* 12d6f478 pop ebp */
  EBP = (pop32());
  /* 12d6f479 ret 4 */
  ESPCHK(0x12d6f3d0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f480 @ 0x12d6f480 (43 bytes, 11 insns) */
void f_12d6f480(void) {
  FTRACE(0x12d6f480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6f480 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6f481 mov ebp, esp */
  EBP = (ESP);
  /* 12d6f483 mov eax, dword ptr [0x12d7e704] */
  EAX = (r32((uint32_t)(0x12d7e704)));
  /* 12d6f488 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6f48d mov dword ptr [0x12d7e704], eax */
  w32((uint32_t)(0x12d7e704), (EAX));
  /* 12d6f492 call dword ptr [0x12d8025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8025c))), 0x12d6f498u);
  /* 12d6f498 mov dword ptr [0x12d7e708], eax */
  w32((uint32_t)(0x12d7e708), (EAX));
  /* 12d6f49d mov ecx, dword ptr [0x12d7e708] */
  ECX = (r32((uint32_t)(0x12d7e708)));
  /* 12d6f4a3 mov dword ptr [0x12d7e6ec], ecx */
  w32((uint32_t)(0x12d7e6ec), (ECX));
  /* 12d6f4a9 pop ebp */
  EBP = (pop32());
  /* 12d6f4aa ret  */
  ESPCHK(0x12d6f480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4b0 @ 0x12d6f4b0 (155 bytes, 57 insns) */
void f_12d6f4b0(void) {
  FTRACE(0x12d6f4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6f4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6f4b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6f4b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f4b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f4ba je 0x12d6f4db */
  if (C.zf) goto L_12d6f4db;
  /* 12d6f4bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f4bf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6f4c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6f4c4 je 0x12d6f4db */
  if (C.zf) goto L_12d6f4db;
  /* 12d6f4c6 push 0x12d7a6bc */
  push32((uint32_t)(0x12d7a6bcu));
  /* 12d6f4cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f4ce push edx */
  push32((uint32_t)(EDX));
  /* 12d6f4cf call 0x12d6ea10 */
  push32(0x12d6f4d4u); f_12d6ea10();
  /* 12d6f4d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f4d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f4d9 jne 0x12d6f503 */
  if (!C.zf) goto L_12d6f503;
L_12d6f4db:;
  /* 12d6f4db push 8 */
  push32((uint32_t)(0x8u));
  /* 12d6f4dd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12d6f4e0 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f4e1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12d6f4e6 mov ecx, dword ptr [0x12d7e708] */
  ECX = (r32((uint32_t)(0x12d7e708)));
  /* 12d6f4ec push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f4ed call dword ptr [0x12d7e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e70c))), 0x12d6f4f3u);
  /* 12d6f4f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f4f5 jne 0x12d6f4fb */
  if (!C.zf) goto L_12d6f4fb;
  /* 12d6f4f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6f4f9 jmp 0x12d6f547 */
  goto L_12d6f547;
L_12d6f4fb:;
  /* 12d6f4fb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12d6f4fe mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d6f501 jmp 0x12d6f53b */
  goto L_12d6f53b;
L_12d6f503:;
  /* 12d6f503 push 0x12d7a6b8 */
  push32((uint32_t)(0x12d7a6b8u));
  /* 12d6f508 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f50b push eax */
  push32((uint32_t)(EAX));
  /* 12d6f50c call 0x12d6ea10 */
  push32(0x12d6f511u); f_12d6ea10();
  /* 12d6f511 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f516 jne 0x12d6f53b */
  if (!C.zf) goto L_12d6f53b;
  /* 12d6f518 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d6f51a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12d6f51d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f51e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d6f520 mov edx, dword ptr [0x12d7e708] */
  EDX = (r32((uint32_t)(0x12d7e708)));
  /* 12d6f526 push edx */
  push32((uint32_t)(EDX));
  /* 12d6f527 call dword ptr [0x12d7e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e70c))), 0x12d6f52du);
  /* 12d6f52d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f52f jne 0x12d6f535 */
  if (!C.zf) goto L_12d6f535;
  /* 12d6f531 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6f533 jmp 0x12d6f547 */
  goto L_12d6f547;
L_12d6f535:;
  /* 12d6f535 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12d6f538 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d6f53b:;
  /* 12d6f53b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f53e push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f53f call 0x12d71630 */
  push32(0x12d6f544u); f_12d71630();
  /* 12d6f544 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6f547:;
  /* 12d6f547 mov esp, ebp */
  ESP = (EBP);
  /* 12d6f549 pop ebp */
  EBP = (pop32());
  /* 12d6f54a ret  */
  ESPCHK(0x12d6f4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f550 @ 0x12d6f550 (79 bytes, 26 insns) */
void f_12d6f550(void) {
  FTRACE(0x12d6f550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6f550 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6f551 mov ebp, esp */
  EBP = (ESP);
  /* 12d6f553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f556 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12d6f55a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12d6f55e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d6f565 jmp 0x12d6f570 */
  goto L_12d6f570;
L_12d6f567:;
  /* 12d6f567 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6f56a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f56d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d6f570:;
  /* 12d6f570 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f574 jae 0x12d6f596 */
  if (!C.cf) goto L_12d6f596;
  /* 12d6f576 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6f579 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6f57f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6f582 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6f584 mov cx, word ptr [eax*2 + 0x12d7d9e4] */
  CX = (r16((uint32_t)(EAX*2 + 0x12d7d9e4)));
  /* 12d6f58c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f58e jne 0x12d6f594 */
  if (!C.zf) goto L_12d6f594;
  /* 12d6f590 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6f592 jmp 0x12d6f59b */
  goto L_12d6f59b;
L_12d6f594:;
  /* 12d6f594 jmp 0x12d6f567 */
  goto L_12d6f567;
L_12d6f596:;
  /* 12d6f596 mov eax, 1 */
  EAX = (0x1u);
L_12d6f59b:;
  /* 12d6f59b mov esp, ebp */
  ESP = (EBP);
  /* 12d6f59d pop ebp */
  EBP = (pop32());
  /* 12d6f59e ret  */
  ESPCHK(0x12d6f550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5a0 @ 0x12d6f5a0 (135 bytes, 48 insns) */
void f_12d6f5a0(void) {
  FTRACE(0x12d6f5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6f5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6f5a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6f5a3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f5a6 push esi */
  push32((uint32_t)(ESI));
  /* 12d6f5a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f5aa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6f5af and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6f5b4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6f5b9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12d6f5bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6f5c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6f5c4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d6f5c6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12d6f5c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f5ca push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6f5cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6f5cf push edx */
  push32((uint32_t)(EDX));
  /* 12d6f5d0 call dword ptr [0x12d7e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e70c))), 0x12d6f5d6u);
  /* 12d6f5d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f5d8 jne 0x12d6f5de */
  if (!C.zf) goto L_12d6f5de;
  /* 12d6f5da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6f5dc jmp 0x12d6f622 */
  goto L_12d6f622;
L_12d6f5de:;
  /* 12d6f5de lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12d6f5e1 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f5e2 call 0x12d6f810 */
  push32(0x12d6f5e7u); f_12d6f810();
  /* 12d6f5e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f5ea cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f5ed je 0x12d6f61d */
  if (C.zf) goto L_12d6f61d;
  /* 12d6f5ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f5f3 je 0x12d6f61d */
  if (C.zf) goto L_12d6f61d;
  /* 12d6f5f5 mov ecx, dword ptr [0x12d7e6fc] */
  ECX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6f5fb push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f5fc call 0x12d6f890 */
  push32(0x12d6f601u); f_12d6f890();
  /* 12d6f601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f604 mov esi, eax */
  ESI = (EAX);
  /* 12d6f606 mov edx, dword ptr [0x12d7e6fc] */
  EDX = (r32((uint32_t)(0x12d7e6fc)));
  /* 12d6f60c push edx */
  push32((uint32_t)(EDX));
  /* 12d6f60d call 0x12d65bb0 */
  push32(0x12d6f612u); f_12d65bb0();
  /* 12d6f612 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f615 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f617 jne 0x12d6f61d */
  if (!C.zf) goto L_12d6f61d;
  /* 12d6f619 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6f61b jmp 0x12d6f622 */
  goto L_12d6f622;
L_12d6f61d:;
  /* 12d6f61d mov eax, 1 */
  EAX = (0x1u);
L_12d6f622:;
  /* 12d6f622 pop esi */
  ESI = (pop32());
  /* 12d6f623 mov esp, ebp */
  ESP = (EBP);
  /* 12d6f625 pop ebp */
  EBP = (pop32());
  /* 12d6f626 ret  */
  ESPCHK(0x12d6f5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f630 @ 0x12d6f630 (77 bytes, 18 insns) */
void f_12d6f630(void) {
  FTRACE(0x12d6f630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6f630 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6f631 mov ebp, esp */
  EBP = (ESP);
  /* 12d6f633 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f639 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12d6f643 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12d6f649 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f64a call dword ptr [0x12d80258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80258))), 0x12d6f650u);
  /* 12d6f650 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f652 je 0x12d6f669 */
  if (C.zf) goto L_12d6f669;
  /* 12d6f654 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f65b jne 0x12d6f669 */
  if (!C.zf) goto L_12d6f669;
  /* 12d6f65d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12d6f667 jmp 0x12d6f673 */
  goto L_12d6f673;
L_12d6f669:;
  /* 12d6f669 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12d6f673:;
  /* 12d6f673 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12d6f679 mov esp, ebp */
  ESP = (EBP);
  /* 12d6f67b pop ebp */
  EBP = (pop32());
  /* 12d6f67c ret  */
  ESPCHK(0x12d6f630u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12d6f680 (388 bytes, 118 insns) */
void f_12d6f680(void) {
  FTRACE(0x12d6f680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6f680 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6f681 mov ebp, esp */
  EBP = (ESP);
  /* 12d6f683 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f686 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d6f68d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12d6f694 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d6f69b:;
  /* 12d6f69b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6f69e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f6a1 jg 0x12d6f7e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6f7e8;
  /* 12d6f6a7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6f6aa add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f6ad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d6f6ae sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f6b0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d6f6b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d6f6b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6f6b8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6f6bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f6be cmp edx, dword ptr [ecx + 0x12d7d540] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12d7d540))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f6c4 jne 0x12d6f7be */
  if (!C.zf) goto L_12d6f7be;
  /* 12d6f6ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6f6cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d6f6d0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f6d4 ja 0x12d6f6f7 */
  if ((!C.cf&&!C.zf)) goto L_12d6f6f7;
  /* 12d6f6d6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f6da je 0x12d6f769 */
  if (C.zf) goto L_12d6f769;
  /* 12d6f6e0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f6e4 je 0x12d6f714 */
  if (C.zf) goto L_12d6f714;
  /* 12d6f6e6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f6ea je 0x12d6f736 */
  if (C.zf) goto L_12d6f736;
  /* 12d6f6ec cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f6f0 je 0x12d6f758 */
  if (C.zf) goto L_12d6f758;
  /* 12d6f6f2 jmp 0x12d6f788 */
  goto L_12d6f788;
L_12d6f6f7:;
  /* 12d6f6f7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f6fe je 0x12d6f725 */
  if (C.zf) goto L_12d6f725;
  /* 12d6f700 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f707 je 0x12d6f747 */
  if (C.zf) goto L_12d6f747;
  /* 12d6f709 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f710 je 0x12d6f77a */
  if (C.zf) goto L_12d6f77a;
  /* 12d6f712 jmp 0x12d6f788 */
  goto L_12d6f788;
L_12d6f714:;
  /* 12d6f714 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6f717 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6f71a add ecx, 0x12d7d544 */
  { uint32_t _a=(ECX),_b=(0x12d7d544u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f720 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6f723 jmp 0x12d6f788 */
  goto L_12d6f788;
L_12d6f725:;
  /* 12d6f725 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6f728 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6f72b mov eax, dword ptr [edx + 0x12d7d54c] */
  EAX = (r32((uint32_t)(EDX + 0x12d7d54c)));
  /* 12d6f731 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6f734 jmp 0x12d6f788 */
  goto L_12d6f788;
L_12d6f736:;
  /* 12d6f736 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6f739 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6f73c add ecx, 0x12d7d550 */
  { uint32_t _a=(ECX),_b=(0x12d7d550u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f742 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6f745 jmp 0x12d6f788 */
  goto L_12d6f788;
L_12d6f747:;
  /* 12d6f747 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6f74a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6f74d mov eax, dword ptr [edx + 0x12d7d554] */
  EAX = (r32((uint32_t)(EDX + 0x12d7d554)));
  /* 12d6f753 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6f756 jmp 0x12d6f788 */
  goto L_12d6f788;
L_12d6f758:;
  /* 12d6f758 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6f75b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6f75e add ecx, 0x12d7d558 */
  { uint32_t _a=(ECX),_b=(0x12d7d558u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f764 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6f767 jmp 0x12d6f788 */
  goto L_12d6f788;
L_12d6f769:;
  /* 12d6f769 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6f76c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6f76f add edx, 0x12d7d55c */
  { uint32_t _a=(EDX),_b=(0x12d7d55cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f775 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d6f778 jmp 0x12d6f788 */
  goto L_12d6f788;
L_12d6f77a:;
  /* 12d6f77a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6f77d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6f780 add eax, 0x12d7d564 */
  { uint32_t _a=(EAX),_b=(0x12d7d564u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f785 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d6f788:;
  /* 12d6f788 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f78c je 0x12d6f794 */
  if (C.zf) goto L_12d6f794;
  /* 12d6f78e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f792 jge 0x12d6f796 */
  if ((C.sf==C.of)) goto L_12d6f796;
L_12d6f794:;
  /* 12d6f794 jmp 0x12d6f7e8 */
  goto L_12d6f7e8;
L_12d6f796:;
  /* 12d6f796 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6f799 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f79c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f79d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6f7a0 push edx */
  push32((uint32_t)(EDX));
  /* 12d6f7a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6f7a4 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f7a5 call 0x12d665a0 */
  push32(0x12d6f7aau); f_12d665a0();
  /* 12d6f7aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f7ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6f7b0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f7b3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12d6f7b7 mov eax, 1 */
  EAX = (0x1u);
  /* 12d6f7bc jmp 0x12d6f7fe */
  goto L_12d6f7fe;
L_12d6f7be:;
  /* 12d6f7be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6f7c1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6f7c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f7c7 cmp eax, dword ptr [edx + 0x12d7d540] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12d7d540))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f7cd jae 0x12d6f7da */
  if (!C.cf) goto L_12d6f7da;
  /* 12d6f7cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6f7d2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f7d5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d6f7d8 jmp 0x12d6f7e3 */
  goto L_12d6f7e3;
L_12d6f7da:;
  /* 12d6f7da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6f7dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f7e0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d6f7e3:;
  /* 12d6f7e3 jmp 0x12d6f69b */
  goto L_12d6f69b;
L_12d6f7e8:;
  /* 12d6f7e8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6f7eb push eax */
  push32((uint32_t)(EAX));
  /* 12d6f7ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6f7ef push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f7f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6f7f3 push edx */
  push32((uint32_t)(EDX));
  /* 12d6f7f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f7f7 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f7f8 call dword ptr [0x12d80264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80264))), 0x12d6f7feu);
L_12d6f7fe:;
  /* 12d6f7fe mov esp, ebp */
  ESP = (EBP);
  /* 12d6f800 pop ebp */
  EBP = (pop32());
  /* 12d6f801 ret 0x10 */
  ESPCHK(0x12d6f680u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f810 @ 0x12d6f810 (118 bytes, 42 insns) */
void f_12d6f810(void) {
  FTRACE(0x12d6f810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6f810 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6f811 mov ebp, esp */
  EBP = (ESP);
  /* 12d6f813 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f816 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d6f81d:;
  /* 12d6f81d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f820 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d6f822 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12d6f825 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d6f829 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f82c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f82f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d6f832 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6f834 je 0x12d6f87f */
  if (C.zf) goto L_12d6f87f;
  /* 12d6f836 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d6f83a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f83d jl 0x12d6f852 */
  if ((C.sf!=C.of)) goto L_12d6f852;
  /* 12d6f83f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d6f843 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f846 jg 0x12d6f852 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6f852;
  /* 12d6f848 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12d6f84b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d6f84d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12d6f850 jmp 0x12d6f86c */
  goto L_12d6f86c;
L_12d6f852:;
  /* 12d6f852 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d6f856 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f859 jl 0x12d6f86c */
  if ((C.sf!=C.of)) goto L_12d6f86c;
  /* 12d6f85b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d6f85f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f862 jg 0x12d6f86c */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6f86c;
  /* 12d6f864 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12d6f867 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d6f869 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12d6f86c:;
  /* 12d6f86c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6f86f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12d6f872 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d6f876 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12d6f87a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6f87d jmp 0x12d6f81d */
  goto L_12d6f81d;
L_12d6f87f:;
  /* 12d6f87f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6f882 mov esp, ebp */
  ESP = (EBP);
  /* 12d6f884 pop ebp */
  EBP = (pop32());
  /* 12d6f885 ret  */
  ESPCHK(0x12d6f810u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12d6f890 (101 bytes, 36 insns) */
void f_12d6f890(void) {
  FTRACE(0x12d6f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6f890 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6f891 mov ebp, esp */
  EBP = (ESP);
  /* 12d6f893 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6f896 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d6f89d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f8a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d6f8a2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12d6f8a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f8a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f8ab mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12d6f8ae:;
  /* 12d6f8ae movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d6f8b2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f8b5 jl 0x12d6f8c0 */
  if ((C.sf!=C.of)) goto L_12d6f8c0;
  /* 12d6f8b7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d6f8bb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f8be jle 0x12d6f8d2 */
  if ((C.zf||C.sf!=C.of)) goto L_12d6f8d2;
L_12d6f8c0:;
  /* 12d6f8c0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d6f8c4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f8c7 jl 0x12d6f8ee */
  if ((C.sf!=C.of)) goto L_12d6f8ee;
  /* 12d6f8c9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d6f8cd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f8d0 jg 0x12d6f8ee */
  if ((!C.zf&&C.sf==C.of)) goto L_12d6f8ee;
L_12d6f8d2:;
  /* 12d6f8d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6f8d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f8d8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6f8db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f8de mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d6f8e0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12d6f8e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f8e6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f8e9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d6f8ec jmp 0x12d6f8ae */
  goto L_12d6f8ae;
L_12d6f8ee:;
  /* 12d6f8ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6f8f1 mov esp, ebp */
  ESP = (EBP);
  /* 12d6f8f3 pop ebp */
  EBP = (pop32());
  /* 12d6f8f4 ret  */
  ESPCHK(0x12d6f890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f900 @ 0x12d6f900 (122 bytes, 39 insns) */
void f_12d6f900(void) {
  FTRACE(0x12d6f900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6f900 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6f901 mov ebp, esp */
  EBP = (ESP);
  /* 12d6f903 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f907 cmp eax, dword ptr [0x12d7ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f90d jae 0x12d6f931 */
  if (!C.cf) goto L_12d6f931;
  /* 12d6f90f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f912 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d6f915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f918 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6f91b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6f91e mov eax, dword ptr [ecx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d7fe60)));
  /* 12d6f925 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d6f92a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6f92d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6f92f jne 0x12d6f94c */
  if (!C.zf) goto L_12d6f94c;
L_12d6f931:;
  /* 12d6f931 call 0x12d6ac50 */
  push32(0x12d6f936u); f_12d6ac50();
  /* 12d6f936 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d6f93c call 0x12d6ac60 */
  push32(0x12d6f941u); f_12d6ac60();
  /* 12d6f941 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d6f947 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6f94a jmp 0x12d6f976 */
  goto L_12d6f976;
L_12d6f94c:;
  /* 12d6f94c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f94f push edx */
  push32((uint32_t)(EDX));
  /* 12d6f950 call 0x12d6c470 */
  push32(0x12d6f955u); f_12d6c470();
  /* 12d6f955 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f958 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f95b push eax */
  push32((uint32_t)(EAX));
  /* 12d6f95c call 0x12d6f980 */
  push32(0x12d6f961u); f_12d6f980();
  /* 12d6f961 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f964 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6f967 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f96a push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f96b call 0x12d6c500 */
  push32(0x12d6f970u); f_12d6c500();
  /* 12d6f970 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f973 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d6f976:;
  /* 12d6f976 mov esp, ebp */
  ESP = (EBP);
  /* 12d6f978 pop ebp */
  EBP = (pop32());
  /* 12d6f979 ret  */
  ESPCHK(0x12d6f900u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12d6f980 (170 bytes, 59 insns) */
void f_12d6f980(void) {
  FTRACE(0x12d6f980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6f980 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6f981 mov ebp, esp */
  EBP = (ESP);
  /* 12d6f983 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f984 push esi */
  push32((uint32_t)(ESI));
  /* 12d6f985 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f988 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f989 call 0x12d6c2f0 */
  push32(0x12d6f98eu); f_12d6c2f0();
  /* 12d6f98e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f991 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f994 je 0x12d6f9d3 */
  if (C.zf) goto L_12d6f9d3;
  /* 12d6f996 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f99a je 0x12d6f9a2 */
  if (C.zf) goto L_12d6f9a2;
  /* 12d6f99c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f9a0 jne 0x12d6f9bc */
  if (!C.zf) goto L_12d6f9bc;
L_12d6f9a2:;
  /* 12d6f9a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6f9a4 call 0x12d6c2f0 */
  push32(0x12d6f9a9u); f_12d6c2f0();
  /* 12d6f9a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f9ac mov esi, eax */
  ESI = (EAX);
  /* 12d6f9ae push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6f9b0 call 0x12d6c2f0 */
  push32(0x12d6f9b5u); f_12d6c2f0();
  /* 12d6f9b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f9b8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6f9ba je 0x12d6f9d3 */
  if (C.zf) goto L_12d6f9d3;
L_12d6f9bc:;
  /* 12d6f9bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f9bf push ecx */
  push32((uint32_t)(ECX));
  /* 12d6f9c0 call 0x12d6c2f0 */
  push32(0x12d6f9c5u); f_12d6c2f0();
  /* 12d6f9c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f9c8 push eax */
  push32((uint32_t)(EAX));
  /* 12d6f9c9 call dword ptr [0x12d80260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80260))), 0x12d6f9cfu);
  /* 12d6f9cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6f9d1 je 0x12d6f9dc */
  if (C.zf) goto L_12d6f9dc;
L_12d6f9d3:;
  /* 12d6f9d3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6f9da jmp 0x12d6f9e5 */
  goto L_12d6f9e5;
L_12d6f9dc:;
  /* 12d6f9dc call dword ptr [0x12d802d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802d0))), 0x12d6f9e2u);
  /* 12d6f9e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d6f9e5:;
  /* 12d6f9e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f9e8 push edx */
  push32((uint32_t)(EDX));
  /* 12d6f9e9 call 0x12d6c210 */
  push32(0x12d6f9eeu); f_12d6c210();
  /* 12d6f9ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6f9f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f9f4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d6f9f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6f9fa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6f9fd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6fa00 mov edx, dword ptr [eax*4 + 0x12d7fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d7fe60)));
  /* 12d6fa07 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12d6fa0c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6fa10 je 0x12d6fa23 */
  if (C.zf) goto L_12d6fa23;
  /* 12d6fa12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6fa15 push eax */
  push32((uint32_t)(EAX));
  /* 12d6fa16 call 0x12d6abb0 */
  push32(0x12d6fa1bu); f_12d6abb0();
  /* 12d6fa1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fa1e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6fa21 jmp 0x12d6fa25 */
  goto L_12d6fa25;
L_12d6fa23:;
  /* 12d6fa23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d6fa25:;
  /* 12d6fa25 pop esi */
  ESI = (pop32());
  /* 12d6fa26 mov esp, ebp */
  ESP = (EBP);
  /* 12d6fa28 pop ebp */
  EBP = (pop32());
  /* 12d6fa29 ret  */
  ESPCHK(0x12d6f980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa30 @ 0x12d6fa30 (146 bytes, 52 insns) */
void f_12d6fa30(void) {
  FTRACE(0x12d6fa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6fa30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6fa31 mov ebp, esp */
  EBP = (ESP);
  /* 12d6fa33 push ebx */
  push32((uint32_t)(EBX));
  /* 12d6fa34 push esi */
  push32((uint32_t)(ESI));
  /* 12d6fa35 push edi */
  push32((uint32_t)(EDI));
L_12d6fa36:;
  /* 12d6fa36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6fa3a jne 0x12d6fa5a */
  if (!C.zf) goto L_12d6fa5a;
  /* 12d6fa3c push 0x12d79ff8 */
  push32((uint32_t)(0x12d79ff8u));
  /* 12d6fa41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6fa43 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12d6fa45 push 0x12d7a6c0 */
  push32((uint32_t)(0x12d7a6c0u));
  /* 12d6fa4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6fa4c call 0x12d61e40 */
  push32(0x12d6fa51u); f_12d61e40();
  /* 12d6fa51 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fa54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6fa57 jne 0x12d6fa5a */
  if (!C.zf) goto L_12d6fa5a;
  /* 12d6fa59 int3  */
  x86_unimpl("int3 @ 0x12d6fa59");
L_12d6fa5a:;
  /* 12d6fa5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6fa5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6fa5e jne 0x12d6fa36 */
  if (!C.zf) goto L_12d6fa36;
  /* 12d6fa60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6fa63 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d6fa66 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6fa6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6fa6e je 0x12d6fabd */
  if (C.zf) goto L_12d6fabd;
  /* 12d6fa70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6fa73 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d6fa76 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6fa79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6fa7b je 0x12d6fabd */
  if (C.zf) goto L_12d6fabd;
  /* 12d6fa7d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6fa7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6fa82 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d6fa85 push eax */
  push32((uint32_t)(EAX));
  /* 12d6fa86 call 0x12d63810 */
  push32(0x12d6fa8bu); f_12d63810();
  /* 12d6fa8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fa8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6fa91 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d6fa94 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12d6fa9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6fa9d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d6faa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6faa3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12d6faa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6faac mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12d6fab3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6fab6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12d6fabd:;
  /* 12d6fabd pop edi */
  EDI = (pop32());
  /* 12d6fabe pop esi */
  ESI = (pop32());
  /* 12d6fabf pop ebx */
  EBX = (pop32());
  /* 12d6fac0 pop ebp */
  EBP = (pop32());
  /* 12d6fac1 ret  */
  ESPCHK(0x12d6fa30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fad0 @ 0x12d6fad0 (289 bytes, 97 insns) */
void f_12d6fad0(void) {
  FTRACE(0x12d6fad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6fad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6fad1 mov ebp, esp */
  EBP = (ESP);
  /* 12d6fad3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6fad6 push esi */
  push32((uint32_t)(ESI));
  /* 12d6fad7 mov eax, dword ptr [0x12d7dcb8] */
  EAX = (r32((uint32_t)(0x12d7dcb8)));
  /* 12d6fadc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d6fadf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d6fae6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d6faed jmp 0x12d6faf8 */
  goto L_12d6faf8;
L_12d6faef:;
  /* 12d6faef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6faf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6faf5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d6faf8:;
  /* 12d6faf8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6fafc jae 0x12d6fb31 */
  if (!C.cf) goto L_12d6fb31;
  /* 12d6fafe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fb01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fb04 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d6fb07 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6fb08 call 0x12d65bb0 */
  push32(0x12d6fb0du); f_12d65bb0();
  /* 12d6fb0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fb10 mov esi, eax */
  ESI = (EAX);
  /* 12d6fb12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fb15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fb18 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12d6fb1c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6fb1d call 0x12d65bb0 */
  push32(0x12d6fb22u); f_12d65bb0();
  /* 12d6fb22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fb25 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fb28 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d6fb2c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d6fb2f jmp 0x12d6faef */
  goto L_12d6faef;
L_12d6fb31:;
  /* 12d6fb31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6fb34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fb37 push eax */
  push32((uint32_t)(EAX));
  /* 12d6fb38 call 0x12d62d60 */
  push32(0x12d6fb3du); f_12d62d60();
  /* 12d6fb3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fb40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6fb43 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6fb47 je 0x12d6fbe9 */
  if (C.zf) goto L_12d6fbe9;
  /* 12d6fb4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6fb50 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d6fb53 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d6fb5a jmp 0x12d6fb65 */
  goto L_12d6fb65;
L_12d6fb5c:;
  /* 12d6fb5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fb5f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fb62 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d6fb65:;
  /* 12d6fb65 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6fb69 jae 0x12d6fbda */
  if (!C.cf) goto L_12d6fbda;
  /* 12d6fb6b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fb6e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12d6fb71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fb74 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fb77 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d6fb7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fb7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fb80 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d6fb83 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6fb84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fb87 push edx */
  push32((uint32_t)(EDX));
  /* 12d6fb88 call 0x12d65d30 */
  push32(0x12d6fb8du); f_12d65d30();
  /* 12d6fb8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fb90 push eax */
  push32((uint32_t)(EAX));
  /* 12d6fb91 call 0x12d65bb0 */
  push32(0x12d6fb96u); f_12d65bb0();
  /* 12d6fb96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fb99 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fb9c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fb9e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d6fba1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fba4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12d6fba7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fbaa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fbad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d6fbb0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fbb3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fbb6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12d6fbba push eax */
  push32((uint32_t)(EAX));
  /* 12d6fbbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fbbe push ecx */
  push32((uint32_t)(ECX));
  /* 12d6fbbf call 0x12d65d30 */
  push32(0x12d6fbc4u); f_12d65d30();
  /* 12d6fbc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fbc7 push eax */
  push32((uint32_t)(EAX));
  /* 12d6fbc8 call 0x12d65bb0 */
  push32(0x12d6fbcdu); f_12d65bb0();
  /* 12d6fbcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fbd0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fbd3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fbd5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d6fbd8 jmp 0x12d6fb5c */
  goto L_12d6fb5c;
L_12d6fbda:;
  /* 12d6fbda mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fbdd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d6fbe0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fbe3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fbe6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12d6fbe9:;
  /* 12d6fbe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6fbec pop esi */
  ESI = (pop32());
  /* 12d6fbed mov esp, ebp */
  ESP = (EBP);
  /* 12d6fbef pop ebp */
  EBP = (pop32());
  /* 12d6fbf0 ret  */
  ESPCHK(0x12d6fad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc00 @ 0x12d6fc00 (291 bytes, 97 insns) */
void f_12d6fc00(void) {
  FTRACE(0x12d6fc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6fc00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6fc01 mov ebp, esp */
  EBP = (ESP);
  /* 12d6fc03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6fc06 push esi */
  push32((uint32_t)(ESI));
  /* 12d6fc07 mov eax, dword ptr [0x12d7dcb8] */
  EAX = (r32((uint32_t)(0x12d7dcb8)));
  /* 12d6fc0c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d6fc0f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d6fc16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d6fc1d jmp 0x12d6fc28 */
  goto L_12d6fc28;
L_12d6fc1f:;
  /* 12d6fc1f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fc22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fc25 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d6fc28:;
  /* 12d6fc28 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6fc2c jae 0x12d6fc62 */
  if (!C.cf) goto L_12d6fc62;
  /* 12d6fc2e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fc31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fc34 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12d6fc38 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6fc39 call 0x12d65bb0 */
  push32(0x12d6fc3eu); f_12d65bb0();
  /* 12d6fc3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fc41 mov esi, eax */
  ESI = (EAX);
  /* 12d6fc43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fc46 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fc49 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12d6fc4d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6fc4e call 0x12d65bb0 */
  push32(0x12d6fc53u); f_12d65bb0();
  /* 12d6fc53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fc56 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fc59 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d6fc5d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d6fc60 jmp 0x12d6fc1f */
  goto L_12d6fc1f;
L_12d6fc62:;
  /* 12d6fc62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6fc65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fc68 push eax */
  push32((uint32_t)(EAX));
  /* 12d6fc69 call 0x12d62d60 */
  push32(0x12d6fc6eu); f_12d62d60();
  /* 12d6fc6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fc71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6fc74 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6fc78 je 0x12d6fd1b */
  if (C.zf) goto L_12d6fd1b;
  /* 12d6fc7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6fc81 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d6fc84 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d6fc8b jmp 0x12d6fc96 */
  goto L_12d6fc96;
L_12d6fc8d:;
  /* 12d6fc8d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fc90 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fc93 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d6fc96:;
  /* 12d6fc96 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6fc9a jae 0x12d6fd0c */
  if (!C.cf) goto L_12d6fd0c;
  /* 12d6fc9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fc9f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12d6fca2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fca5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fca8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d6fcab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fcae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fcb1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12d6fcb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6fcb6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fcb9 push edx */
  push32((uint32_t)(EDX));
  /* 12d6fcba call 0x12d65d30 */
  push32(0x12d6fcbfu); f_12d65d30();
  /* 12d6fcbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fcc2 push eax */
  push32((uint32_t)(EAX));
  /* 12d6fcc3 call 0x12d65bb0 */
  push32(0x12d6fcc8u); f_12d65bb0();
  /* 12d6fcc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fccb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fcce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fcd0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d6fcd3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fcd6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12d6fcd9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fcdc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fcdf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d6fce2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fce5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fce8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d6fcec push eax */
  push32((uint32_t)(EAX));
  /* 12d6fced mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fcf0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6fcf1 call 0x12d65d30 */
  push32(0x12d6fcf6u); f_12d65d30();
  /* 12d6fcf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fcf9 push eax */
  push32((uint32_t)(EAX));
  /* 12d6fcfa call 0x12d65bb0 */
  push32(0x12d6fcffu); f_12d65bb0();
  /* 12d6fcff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fd02 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fd05 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fd07 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d6fd0a jmp 0x12d6fc8d */
  goto L_12d6fc8d;
L_12d6fd0c:;
  /* 12d6fd0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fd0f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d6fd12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fd15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fd18 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12d6fd1b:;
  /* 12d6fd1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6fd1e pop esi */
  ESI = (pop32());
  /* 12d6fd1f mov esp, ebp */
  ESP = (EBP);
  /* 12d6fd21 pop ebp */
  EBP = (pop32());
  /* 12d6fd22 ret  */
  ESPCHK(0x12d6fc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd30 @ 0x12d6fd30 (878 bytes, 273 insns) */
void f_12d6fd30(void) {
  FTRACE(0x12d6fd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6fd30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d6fd31 mov ebp, esp */
  EBP = (ESP);
  /* 12d6fd33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6fd36 push esi */
  push32((uint32_t)(ESI));
  /* 12d6fd37 mov eax, dword ptr [0x12d7dcb8] */
  EAX = (r32((uint32_t)(0x12d7dcb8)));
  /* 12d6fd3c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d6fd3f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d6fd46 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d6fd4d jmp 0x12d6fd58 */
  goto L_12d6fd58;
L_12d6fd4f:;
  /* 12d6fd4f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fd52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fd55 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d6fd58:;
  /* 12d6fd58 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6fd5c jae 0x12d6fd91 */
  if (!C.cf) goto L_12d6fd91;
  /* 12d6fd5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fd61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fd64 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d6fd67 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6fd68 call 0x12d65bb0 */
  push32(0x12d6fd6du); f_12d65bb0();
  /* 12d6fd6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fd70 mov esi, eax */
  ESI = (EAX);
  /* 12d6fd72 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fd75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fd78 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12d6fd7c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6fd7d call 0x12d65bb0 */
  push32(0x12d6fd82u); f_12d65bb0();
  /* 12d6fd82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fd85 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fd88 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d6fd8c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d6fd8f jmp 0x12d6fd4f */
  goto L_12d6fd4f;
L_12d6fd91:;
  /* 12d6fd91 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d6fd98 jmp 0x12d6fda3 */
  goto L_12d6fda3;
L_12d6fd9a:;
  /* 12d6fd9a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fd9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fda0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d6fda3:;
  /* 12d6fda3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6fda7 jae 0x12d6fddd */
  if (!C.cf) goto L_12d6fddd;
  /* 12d6fda9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fdac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fdaf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12d6fdb3 push eax */
  push32((uint32_t)(EAX));
  /* 12d6fdb4 call 0x12d65bb0 */
  push32(0x12d6fdb9u); f_12d65bb0();
  /* 12d6fdb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fdbc mov esi, eax */
  ESI = (EAX);
  /* 12d6fdbe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fdc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fdc4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d6fdc8 push eax */
  push32((uint32_t)(EAX));
  /* 12d6fdc9 call 0x12d65bb0 */
  push32(0x12d6fdceu); f_12d65bb0();
  /* 12d6fdce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fdd1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fdd4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d6fdd8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d6fddb jmp 0x12d6fd9a */
  goto L_12d6fd9a;
L_12d6fddd:;
  /* 12d6fddd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fde0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12d6fde6 push eax */
  push32((uint32_t)(EAX));
  /* 12d6fde7 call 0x12d65bb0 */
  push32(0x12d6fdecu); f_12d65bb0();
  /* 12d6fdec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fdef mov esi, eax */
  ESI = (EAX);
  /* 12d6fdf1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fdf4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12d6fdfa push edx */
  push32((uint32_t)(EDX));
  /* 12d6fdfb call 0x12d65bb0 */
  push32(0x12d6fe00u); f_12d65bb0();
  /* 12d6fe00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fe03 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fe06 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d6fe0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6fe0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fe10 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12d6fe16 push edx */
  push32((uint32_t)(EDX));
  /* 12d6fe17 call 0x12d65bb0 */
  push32(0x12d6fe1cu); f_12d65bb0();
  /* 12d6fe1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fe1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6fe22 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d6fe26 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d6fe29 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fe2c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12d6fe32 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6fe33 call 0x12d65bb0 */
  push32(0x12d6fe38u); f_12d65bb0();
  /* 12d6fe38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fe3b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6fe3e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d6fe42 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d6fe45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fe48 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12d6fe4e push edx */
  push32((uint32_t)(EDX));
  /* 12d6fe4f call 0x12d65bb0 */
  push32(0x12d6fe54u); f_12d65bb0();
  /* 12d6fe54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fe57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6fe5a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d6fe5e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d6fe61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6fe64 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fe69 push eax */
  push32((uint32_t)(EAX));
  /* 12d6fe6a call 0x12d62d60 */
  push32(0x12d6fe6fu); f_12d62d60();
  /* 12d6fe6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fe72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6fe75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6fe79 je 0x12d70096 */
  if (C.zf) goto L_12d70096;
  /* 12d6fe7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6fe82 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d6fe85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6fe88 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fe8e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d6fe91 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12d6fe96 mov eax, dword ptr [0x12d7dcb8] */
  EAX = (r32((uint32_t)(0x12d7dcb8)));
  /* 12d6fe9b push eax */
  push32((uint32_t)(EAX));
  /* 12d6fe9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6fe9f push ecx */
  push32((uint32_t)(ECX));
  /* 12d6fea0 call 0x12d69660 */
  push32(0x12d6fea5u); f_12d69660();
  /* 12d6fea5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fea8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d6feaf jmp 0x12d6feba */
  goto L_12d6feba;
L_12d6feb1:;
  /* 12d6feb1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6feb4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6feb7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d6feba:;
  /* 12d6feba cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6febe jae 0x12d6ff2e */
  if (!C.cf) goto L_12d6ff2e;
  /* 12d6fec0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fec3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6fec6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fec9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12d6fecc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fecf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fed2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d6fed5 push edx */
  push32((uint32_t)(EDX));
  /* 12d6fed6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fed9 push eax */
  push32((uint32_t)(EAX));
  /* 12d6feda call 0x12d65d30 */
  push32(0x12d6fedfu); f_12d65d30();
  /* 12d6fedf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6fee2 push eax */
  push32((uint32_t)(EAX));
  /* 12d6fee3 call 0x12d65bb0 */
  push32(0x12d6fee8u); f_12d65bb0();
  /* 12d6fee8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6feeb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6feee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d6fef2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d6fef5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6fef8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6fefb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fefe mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12d6ff02 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6ff05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6ff08 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12d6ff0c push edx */
  push32((uint32_t)(EDX));
  /* 12d6ff0d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6ff10 push eax */
  push32((uint32_t)(EAX));
  /* 12d6ff11 call 0x12d65d30 */
  push32(0x12d6ff16u); f_12d65d30();
  /* 12d6ff16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ff19 push eax */
  push32((uint32_t)(EAX));
  /* 12d6ff1a call 0x12d65bb0 */
  push32(0x12d6ff1fu); f_12d65bb0();
  /* 12d6ff1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ff22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6ff25 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d6ff29 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d6ff2c jmp 0x12d6feb1 */
  goto L_12d6feb1;
L_12d6ff2e:;
  /* 12d6ff2e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d6ff35 jmp 0x12d6ff40 */
  goto L_12d6ff40;
L_12d6ff37:;
  /* 12d6ff37 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6ff3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ff3d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d6ff40:;
  /* 12d6ff40 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6ff44 jae 0x12d6ffb6 */
  if (!C.cf) goto L_12d6ffb6;
  /* 12d6ff46 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6ff49 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6ff4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6ff4f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12d6ff53 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6ff56 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6ff59 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12d6ff5d push eax */
  push32((uint32_t)(EAX));
  /* 12d6ff5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6ff61 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ff62 call 0x12d65d30 */
  push32(0x12d6ff67u); f_12d65d30();
  /* 12d6ff67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ff6a push eax */
  push32((uint32_t)(EAX));
  /* 12d6ff6b call 0x12d65bb0 */
  push32(0x12d6ff70u); f_12d65bb0();
  /* 12d6ff70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ff73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6ff76 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d6ff7a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d6ff7d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6ff80 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6ff83 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6ff86 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12d6ff8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6ff8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6ff90 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d6ff94 push eax */
  push32((uint32_t)(EAX));
  /* 12d6ff95 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6ff98 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ff99 call 0x12d65d30 */
  push32(0x12d6ff9eu); f_12d65d30();
  /* 12d6ff9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ffa1 push eax */
  push32((uint32_t)(EAX));
  /* 12d6ffa2 call 0x12d65bb0 */
  push32(0x12d6ffa7u); f_12d65bb0();
  /* 12d6ffa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ffaa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6ffad lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d6ffb1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d6ffb4 jmp 0x12d6ff37 */
  goto L_12d6ff37;
L_12d6ffb6:;
  /* 12d6ffb6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6ffb9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6ffbc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12d6ffc2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6ffc5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12d6ffcb push ecx */
  push32((uint32_t)(ECX));
  /* 12d6ffcc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6ffcf push edx */
  push32((uint32_t)(EDX));
  /* 12d6ffd0 call 0x12d65d30 */
  push32(0x12d6ffd5u); f_12d65d30();
  /* 12d6ffd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ffd8 push eax */
  push32((uint32_t)(EAX));
  /* 12d6ffd9 call 0x12d65bb0 */
  push32(0x12d6ffdeu); f_12d65bb0();
  /* 12d6ffde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6ffe1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6ffe4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d6ffe8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d6ffeb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6ffee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6fff1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12d6fff7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6fffa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12d70000 push eax */
  push32((uint32_t)(EAX));
  /* 12d70001 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d70004 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70005 call 0x12d65d30 */
  push32(0x12d7000au); f_12d65d30();
  /* 12d7000a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7000d push eax */
  push32((uint32_t)(EAX));
  /* 12d7000e call 0x12d65bb0 */
  push32(0x12d70013u); f_12d65bb0();
  /* 12d70013 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70016 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d70019 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d7001d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d70020 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d70023 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d70026 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12d7002c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d7002f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12d70035 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70036 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d70039 push edx */
  push32((uint32_t)(EDX));
  /* 12d7003a call 0x12d65d30 */
  push32(0x12d7003fu); f_12d65d30();
  /* 12d7003f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70042 push eax */
  push32((uint32_t)(EAX));
  /* 12d70043 call 0x12d65bb0 */
  push32(0x12d70048u); f_12d65bb0();
  /* 12d70048 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7004b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d7004e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d70052 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d70055 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d70058 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d7005b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12d70061 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70064 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12d7006a push eax */
  push32((uint32_t)(EAX));
  /* 12d7006b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d7006e push ecx */
  push32((uint32_t)(ECX));
  /* 12d7006f call 0x12d65d30 */
  push32(0x12d70074u); f_12d65d30();
  /* 12d70074 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70077 push eax */
  push32((uint32_t)(EAX));
  /* 12d70078 call 0x12d65bb0 */
  push32(0x12d7007du); f_12d65bb0();
  /* 12d7007d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70080 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d70083 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d70087 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d7008a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d7008d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d70090 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12d70096:;
  /* 12d70096 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d70099 pop esi */
  ESI = (pop32());
  /* 12d7009a mov esp, ebp */
  ESP = (EBP);
  /* 12d7009c pop ebp */
  EBP = (pop32());
  /* 12d7009d ret  */
  ESPCHK(0x12d6fd30u, _esp0);
  ESP += 4; return;
}

/* FUN_100100a0 @ 0x12d700a0 (31 bytes, 15 insns) */
void f_12d700a0(void) {
  FTRACE(0x12d700a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d700a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d700a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d700a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d700a5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d700a8 push eax */
  push32((uint32_t)(EAX));
  /* 12d700a9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d700ac push ecx */
  push32((uint32_t)(ECX));
  /* 12d700ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d700b0 push edx */
  push32((uint32_t)(EDX));
  /* 12d700b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d700b4 push eax */
  push32((uint32_t)(EAX));
  /* 12d700b5 call 0x12d700c0 */
  push32(0x12d700bau); f_12d700c0();
  /* 12d700ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d700bd pop ebp */
  EBP = (pop32());
  /* 12d700be ret  */
  ESPCHK(0x12d700a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100100c0 @ 0x12d700c0 (394 bytes, 123 insns) */
void f_12d700c0(void) {
  FTRACE(0x12d700c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d700c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d700c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d700c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d700c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d700c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d700cc push 0x12d7e80c */
  push32((uint32_t)(0x12d7e80cu));
  /* 12d700d1 call dword ptr [0x12d802a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802a4))), 0x12d700d7u);
  /* 12d700d7 cmp dword ptr [0x12d7e7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d700de je 0x12d700fe */
  if (C.zf) goto L_12d700fe;
  /* 12d700e0 push 0x12d7e80c */
  push32((uint32_t)(0x12d7e80cu));
  /* 12d700e5 call dword ptr [0x12d80294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80294))), 0x12d700ebu);
  /* 12d700eb push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d700ed call 0x12d66780 */
  push32(0x12d700f2u); f_12d66780();
  /* 12d700f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d700f5 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d700fc jmp 0x12d70105 */
  goto L_12d70105;
L_12d700fe:;
  /* 12d700fe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d70105:;
  /* 12d70105 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70109 jne 0x12d70116 */
  if (!C.zf) goto L_12d70116;
  /* 12d7010b mov ecx, dword ptr [0x12d7dcb8] */
  ECX = (r32((uint32_t)(0x12d7dcb8)));
  /* 12d70111 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d70114 jmp 0x12d7011c */
  goto L_12d7011c;
L_12d70116:;
  /* 12d70116 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d70119 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d7011c:;
  /* 12d7011c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d7011f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d70122:;
  /* 12d70122 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70126 jbe 0x12d70213 */
  if ((C.cf||C.zf)) goto L_12d70213;
  /* 12d7012c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7012f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d70131 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12d70134 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d70138 je 0x12d70142 */
  if (C.zf) goto L_12d70142;
  /* 12d7013a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d7013e je 0x12d70147 */
  if (C.zf) goto L_12d70147;
  /* 12d70140 jmp 0x12d701a1 */
  goto L_12d701a1;
L_12d70142:;
  /* 12d70142 jmp 0x12d70213 */
  goto L_12d70213;
L_12d70147:;
  /* 12d70147 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7014a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7014d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12d70150 mov dword ptr [0x12d7e7e8], 0 */
  w32((uint32_t)(0x12d7e7e8), (0x0u));
  /* 12d7015a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7015d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d70160 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70163 jne 0x12d70178 */
  if (!C.zf) goto L_12d70178;
  /* 12d70165 mov dword ptr [0x12d7e7e8], 1 */
  w32((uint32_t)(0x12d7e7e8), (0x1u));
  /* 12d7016f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70172 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70175 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12d70178:;
  /* 12d70178 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d7017b push ecx */
  push32((uint32_t)(ECX));
  /* 12d7017c lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12d7017f push edx */
  push32((uint32_t)(EDX));
  /* 12d70180 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12d70183 push eax */
  push32((uint32_t)(EAX));
  /* 12d70184 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70187 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70188 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7018b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d7018d push eax */
  push32((uint32_t)(EAX));
  /* 12d7018e call 0x12d70250 */
  push32(0x12d70193u); f_12d70250();
  /* 12d70193 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70196 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70199 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7019c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d7019f jmp 0x12d7020e */
  goto L_12d7020e;
L_12d701a1:;
  /* 12d701a1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d701a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d701a6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d701a8 mov ecx, dword ptr [0x12d7ccb8] */
  ECX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d701ae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d701b0 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d701b4 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d701ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d701bc je 0x12d701e9 */
  if (C.zf) goto L_12d701e9;
  /* 12d701be cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d701c2 jbe 0x12d701e9 */
  if ((C.cf||C.zf)) goto L_12d701e9;
  /* 12d701c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d701c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d701ca mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d701cc mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d701ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d701d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d701d4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d701d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d701da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d701dd mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d701e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d701e3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d701e6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d701e9:;
  /* 12d701e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d701ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d701ef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d701f1 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d701f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d701f6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d701f9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d701fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d701ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70202 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d70205 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70208 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d7020b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d7020e:;
  /* 12d7020e jmp 0x12d70122 */
  goto L_12d70122;
L_12d70213:;
  /* 12d70213 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70217 je 0x12d70225 */
  if (C.zf) goto L_12d70225;
  /* 12d70219 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d7021b call 0x12d66820 */
  push32(0x12d70220u); f_12d66820();
  /* 12d70220 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70223 jmp 0x12d70230 */
  goto L_12d70230;
L_12d70225:;
  /* 12d70225 push 0x12d7e80c */
  push32((uint32_t)(0x12d7e80cu));
  /* 12d7022a call dword ptr [0x12d80294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80294))), 0x12d70230u);
L_12d70230:;
  /* 12d70230 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70234 jbe 0x12d70244 */
  if ((C.cf||C.zf)) goto L_12d70244;
  /* 12d70236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70239 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d7023c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7023f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70242 jmp 0x12d70246 */
  goto L_12d70246;
L_12d70244:;
  /* 12d70244 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d70246:;
  /* 12d70246 mov esp, ebp */
  ESP = (EBP);
  /* 12d70248 pop ebp */
  EBP = (pop32());
  /* 12d70249 ret  */
  ESPCHK(0x12d700c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010250 @ 0x12d70250 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12d70250(void) {
  FTRACE(0x12d70250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d70250 push ebp */
  push32((uint32_t)(EBP));
  /* 12d70251 mov ebp, esp */
  EBP = (ESP);
  /* 12d70253 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70256 push esi */
  push32((uint32_t)(ESI));
  /* 12d70257 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12d7025b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d7025e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70261 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70264 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d70267 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7026b ja 0x12d707b8 */
  if ((!C.cf&&!C.zf)) goto L_12d707b8;
  /* 12d70271 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70274 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d70276 mov dl, byte ptr [eax + 0x12d70819] */
  DL = (r8((uint32_t)(EAX + 0x12d70819)));
  /* 12d7027c jmp dword ptr [edx*4 + 0x12d707bd] */
  switch (EDX) {
    case 0: goto L_12d70796;
    case 1: goto L_12d702a5;
    case 2: goto L_12d702eb;
    case 3: goto L_12d70438;
    case 4: goto L_12d70460;
    case 5: goto L_12d704ff;
    case 6: goto L_12d7056b;
    case 7: goto L_12d70594;
    case 8: goto L_12d705d5;
    case 9: goto L_12d706b7;
    case 10: goto L_12d7071e;
    case 11: goto L_12d7076b;
    case 12: goto L_12d70283;
    case 13: goto L_12d702c8;
    case 14: goto L_12d7030e;
    case 15: goto L_12d7040e;
    case 16: goto L_12d704a5;
    case 17: goto L_12d704d2;
    case 18: goto L_12d70527;
    case 19: goto L_12d705ab;
    case 20: goto L_12d70659;
    case 21: goto L_12d706e8;
    case 22: goto L_12d707b8;
    default: x86_unimpl("switch@0x12d7027c out of table"); return;
  }
L_12d70283:;
  /* 12d70283 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70286 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70287 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7028a push edx */
  push32((uint32_t)(EDX));
  /* 12d7028b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7028e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d70291 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d70294 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12d70297 push eax */
  push32((uint32_t)(EAX));
  /* 12d70298 call 0x12d70870 */
  push32(0x12d7029du); f_12d70870();
  /* 12d7029d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d702a0 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d702a5:;
  /* 12d702a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d702a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d702a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d702ac push edx */
  push32((uint32_t)(EDX));
  /* 12d702ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d702b0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d702b3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d702b6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12d702ba push eax */
  push32((uint32_t)(EAX));
  /* 12d702bb call 0x12d70870 */
  push32(0x12d702c0u); f_12d70870();
  /* 12d702c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d702c3 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d702c8:;
  /* 12d702c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d702cb push ecx */
  push32((uint32_t)(ECX));
  /* 12d702cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d702cf push edx */
  push32((uint32_t)(EDX));
  /* 12d702d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d702d3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d702d6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d702d9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12d702dd push eax */
  push32((uint32_t)(EAX));
  /* 12d702de call 0x12d70870 */
  push32(0x12d702e3u); f_12d70870();
  /* 12d702e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d702e6 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d702eb:;
  /* 12d702eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d702ee push ecx */
  push32((uint32_t)(ECX));
  /* 12d702ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d702f2 push edx */
  push32((uint32_t)(EDX));
  /* 12d702f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d702f6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d702f9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d702fc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d70300 push eax */
  push32((uint32_t)(EAX));
  /* 12d70301 call 0x12d70870 */
  push32(0x12d70306u); f_12d70870();
  /* 12d70306 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70309 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d7030e:;
  /* 12d7030e cmp dword ptr [0x12d7e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70315 je 0x12d70396 */
  if (C.zf) goto L_12d70396;
  /* 12d70317 mov dword ptr [0x12d7e7e8], 0 */
  w32((uint32_t)(0x12d7e7e8), (0x0u));
  /* 12d70321 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d70324 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70325 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70328 push edx */
  push32((uint32_t)(EDX));
  /* 12d70329 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7032c push eax */
  push32((uint32_t)(EAX));
  /* 12d7032d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70330 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70331 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d70334 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12d7033a push eax */
  push32((uint32_t)(EAX));
  /* 12d7033b call 0x12d70a20 */
  push32(0x12d70340u); f_12d70a20();
  /* 12d70340 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70343 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70346 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70349 jne 0x12d70350 */
  if (!C.zf) goto L_12d70350;
  /* 12d7034b jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d70350:;
  /* 12d70350 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70353 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d70355 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12d70358 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7035b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d7035d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70360 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70363 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d70365 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70368 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d7036a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d7036d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70370 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d70372 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d70375 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70376 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70379 push edx */
  push32((uint32_t)(EDX));
  /* 12d7037a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7037d push eax */
  push32((uint32_t)(EAX));
  /* 12d7037e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70381 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70382 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d70385 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12d7038b push eax */
  push32((uint32_t)(EAX));
  /* 12d7038c call 0x12d70a20 */
  push32(0x12d70391u); f_12d70a20();
  /* 12d70391 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70394 jmp 0x12d70409 */
  goto L_12d70409;
L_12d70396:;
  /* 12d70396 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d70399 push ecx */
  push32((uint32_t)(ECX));
  /* 12d7039a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d7039d push edx */
  push32((uint32_t)(EDX));
  /* 12d7039e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d703a1 push eax */
  push32((uint32_t)(EAX));
  /* 12d703a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d703a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d703a6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d703a9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12d703af push eax */
  push32((uint32_t)(EAX));
  /* 12d703b0 call 0x12d70a20 */
  push32(0x12d703b5u); f_12d70a20();
  /* 12d703b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d703b8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d703bb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d703be jne 0x12d703c5 */
  if (!C.zf) goto L_12d703c5;
  /* 12d703c0 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d703c5:;
  /* 12d703c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d703c8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d703ca mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12d703cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d703d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d703d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d703d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d703d8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d703da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d703dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d703df sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d703e2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d703e5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d703e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d703ea push ecx */
  push32((uint32_t)(ECX));
  /* 12d703eb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d703ee push edx */
  push32((uint32_t)(EDX));
  /* 12d703ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d703f2 push eax */
  push32((uint32_t)(EAX));
  /* 12d703f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d703f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d703f7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d703fa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12d70400 push eax */
  push32((uint32_t)(EAX));
  /* 12d70401 call 0x12d70a20 */
  push32(0x12d70406u); f_12d70a20();
  /* 12d70406 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d70409:;
  /* 12d70409 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d7040e:;
  /* 12d7040e mov ecx, dword ptr [0x12d7e7e8] */
  ECX = (r32((uint32_t)(0x12d7e7e8)));
  /* 12d70414 mov dword ptr [0x12d7e7f8], ecx */
  w32((uint32_t)(0x12d7e7f8), (ECX));
  /* 12d7041a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d7041d push edx */
  push32((uint32_t)(EDX));
  /* 12d7041e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70421 push eax */
  push32((uint32_t)(EAX));
  /* 12d70422 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d70424 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70427 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d7042a push edx */
  push32((uint32_t)(EDX));
  /* 12d7042b call 0x12d708c0 */
  push32(0x12d70430u); f_12d708c0();
  /* 12d70430 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70433 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d70438:;
  /* 12d70438 mov eax, dword ptr [0x12d7e7e8] */
  EAX = (r32((uint32_t)(0x12d7e7e8)));
  /* 12d7043d mov dword ptr [0x12d7e7f8], eax */
  w32((uint32_t)(0x12d7e7f8), (EAX));
  /* 12d70442 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70445 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70446 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70449 push edx */
  push32((uint32_t)(EDX));
  /* 12d7044a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d7044c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7044f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d70452 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70453 call 0x12d708c0 */
  push32(0x12d70458u); f_12d708c0();
  /* 12d70458 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7045b jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d70460:;
  /* 12d70460 mov edx, dword ptr [0x12d7e7e8] */
  EDX = (r32((uint32_t)(0x12d7e7e8)));
  /* 12d70466 mov dword ptr [0x12d7e7f8], edx */
  w32((uint32_t)(0x12d7e7f8), (EDX));
  /* 12d7046c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7046f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d70472 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d70473 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12d70478 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d7047a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d7047d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70481 jne 0x12d7048a */
  if (!C.zf) goto L_12d7048a;
  /* 12d70483 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12d7048a:;
  /* 12d7048a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d7048d push edx */
  push32((uint32_t)(EDX));
  /* 12d7048e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70491 push eax */
  push32((uint32_t)(EAX));
  /* 12d70492 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d70494 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d70497 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70498 call 0x12d708c0 */
  push32(0x12d7049du); f_12d708c0();
  /* 12d7049d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d704a0 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d704a5:;
  /* 12d704a5 mov edx, dword ptr [0x12d7e7e8] */
  EDX = (r32((uint32_t)(0x12d7e7e8)));
  /* 12d704ab mov dword ptr [0x12d7e7f8], edx */
  w32((uint32_t)(0x12d7e7f8), (EDX));
  /* 12d704b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d704b4 push eax */
  push32((uint32_t)(EAX));
  /* 12d704b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d704b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d704b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d704bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d704be mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d704c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d704c4 push eax */
  push32((uint32_t)(EAX));
  /* 12d704c5 call 0x12d708c0 */
  push32(0x12d704cau); f_12d708c0();
  /* 12d704ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d704cd jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d704d2:;
  /* 12d704d2 mov ecx, dword ptr [0x12d7e7e8] */
  ECX = (r32((uint32_t)(0x12d7e7e8)));
  /* 12d704d8 mov dword ptr [0x12d7e7f8], ecx */
  w32((uint32_t)(0x12d7e7f8), (ECX));
  /* 12d704de mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d704e1 push edx */
  push32((uint32_t)(EDX));
  /* 12d704e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d704e5 push eax */
  push32((uint32_t)(EAX));
  /* 12d704e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d704e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d704eb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d704ee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d704f1 push edx */
  push32((uint32_t)(EDX));
  /* 12d704f2 call 0x12d708c0 */
  push32(0x12d704f7u); f_12d708c0();
  /* 12d704f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d704fa jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d704ff:;
  /* 12d704ff mov eax, dword ptr [0x12d7e7e8] */
  EAX = (r32((uint32_t)(0x12d7e7e8)));
  /* 12d70504 mov dword ptr [0x12d7e7f8], eax */
  w32((uint32_t)(0x12d7e7f8), (EAX));
  /* 12d70509 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d7050c push ecx */
  push32((uint32_t)(ECX));
  /* 12d7050d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70510 push edx */
  push32((uint32_t)(EDX));
  /* 12d70511 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d70513 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70516 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d70519 push ecx */
  push32((uint32_t)(ECX));
  /* 12d7051a call 0x12d708c0 */
  push32(0x12d7051fu); f_12d708c0();
  /* 12d7051f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70522 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d70527:;
  /* 12d70527 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7052a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7052e jg 0x12d7054c */
  if ((!C.zf&&C.sf==C.of)) goto L_12d7054c;
  /* 12d70530 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70533 push eax */
  push32((uint32_t)(EAX));
  /* 12d70534 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70537 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70538 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d7053b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12d70541 push eax */
  push32((uint32_t)(EAX));
  /* 12d70542 call 0x12d70870 */
  push32(0x12d70547u); f_12d70870();
  /* 12d70547 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7054a jmp 0x12d70566 */
  goto L_12d70566;
L_12d7054c:;
  /* 12d7054c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d7054f push ecx */
  push32((uint32_t)(ECX));
  /* 12d70550 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70553 push edx */
  push32((uint32_t)(EDX));
  /* 12d70554 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d70557 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12d7055d push ecx */
  push32((uint32_t)(ECX));
  /* 12d7055e call 0x12d70870 */
  push32(0x12d70563u); f_12d70870();
  /* 12d70563 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d70566:;
  /* 12d70566 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d7056b:;
  /* 12d7056b mov edx, dword ptr [0x12d7e7e8] */
  EDX = (r32((uint32_t)(0x12d7e7e8)));
  /* 12d70571 mov dword ptr [0x12d7e7f8], edx */
  w32((uint32_t)(0x12d7e7f8), (EDX));
  /* 12d70577 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d7057a push eax */
  push32((uint32_t)(EAX));
  /* 12d7057b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7057e push ecx */
  push32((uint32_t)(ECX));
  /* 12d7057f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d70581 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70584 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d70586 push eax */
  push32((uint32_t)(EAX));
  /* 12d70587 call 0x12d708c0 */
  push32(0x12d7058cu); f_12d708c0();
  /* 12d7058c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7058f jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d70594:;
  /* 12d70594 mov ecx, dword ptr [0x12d7e7e8] */
  ECX = (r32((uint32_t)(0x12d7e7e8)));
  /* 12d7059a mov dword ptr [0x12d7e7f8], ecx */
  w32((uint32_t)(0x12d7e7f8), (ECX));
  /* 12d705a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d705a3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12d705a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d705a9 jmp 0x12d705fd */
  goto L_12d705fd;
L_12d705ab:;
  /* 12d705ab mov ecx, dword ptr [0x12d7e7e8] */
  ECX = (r32((uint32_t)(0x12d7e7e8)));
  /* 12d705b1 mov dword ptr [0x12d7e7f8], ecx */
  w32((uint32_t)(0x12d7e7f8), (ECX));
  /* 12d705b7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d705ba push edx */
  push32((uint32_t)(EDX));
  /* 12d705bb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d705be push eax */
  push32((uint32_t)(EAX));
  /* 12d705bf push 1 */
  push32((uint32_t)(0x1u));
  /* 12d705c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d705c4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d705c7 push edx */
  push32((uint32_t)(EDX));
  /* 12d705c8 call 0x12d708c0 */
  push32(0x12d705cdu); f_12d708c0();
  /* 12d705cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d705d0 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d705d5:;
  /* 12d705d5 mov eax, dword ptr [0x12d7e7e8] */
  EAX = (r32((uint32_t)(0x12d7e7e8)));
  /* 12d705da mov dword ptr [0x12d7e7f8], eax */
  w32((uint32_t)(0x12d7e7f8), (EAX));
  /* 12d705df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d705e2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d705e6 jne 0x12d705f1 */
  if (!C.zf) goto L_12d705f1;
  /* 12d705e8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12d705ef jmp 0x12d705fd */
  goto L_12d705fd;
L_12d705f1:;
  /* 12d705f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d705f4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12d705f7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d705fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d705fd:;
  /* 12d705fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70600 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d70603 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70606 jge 0x12d70611 */
  if ((C.sf==C.of)) goto L_12d70611;
  /* 12d70608 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d7060f jmp 0x12d7063e */
  goto L_12d7063e;
L_12d70611:;
  /* 12d70611 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70614 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d70617 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d70618 mov ecx, 7 */
  ECX = (0x7u);
  /* 12d7061d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d7061f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d70622 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70625 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d70628 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d70629 mov ecx, 7 */
  ECX = (0x7u);
  /* 12d7062e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d70630 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70633 jl 0x12d7063e */
  if ((C.sf!=C.of)) goto L_12d7063e;
  /* 12d70635 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d70638 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7063b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d7063e:;
  /* 12d7063e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70641 push eax */
  push32((uint32_t)(EAX));
  /* 12d70642 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70645 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70646 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d70648 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d7064b push edx */
  push32((uint32_t)(EDX));
  /* 12d7064c call 0x12d708c0 */
  push32(0x12d70651u); f_12d708c0();
  /* 12d70651 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70654 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d70659:;
  /* 12d70659 cmp dword ptr [0x12d7e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70660 je 0x12d70690 */
  if (C.zf) goto L_12d70690;
  /* 12d70662 mov dword ptr [0x12d7e7e8], 0 */
  w32((uint32_t)(0x12d7e7e8), (0x0u));
  /* 12d7066c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d7066f push eax */
  push32((uint32_t)(EAX));
  /* 12d70670 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70673 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70674 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70677 push edx */
  push32((uint32_t)(EDX));
  /* 12d70678 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7067b push eax */
  push32((uint32_t)(EAX));
  /* 12d7067c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d7067f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12d70685 push edx */
  push32((uint32_t)(EDX));
  /* 12d70686 call 0x12d70a20 */
  push32(0x12d7068bu); f_12d70a20();
  /* 12d7068b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7068e jmp 0x12d706b2 */
  goto L_12d706b2;
L_12d70690:;
  /* 12d70690 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d70693 push eax */
  push32((uint32_t)(EAX));
  /* 12d70694 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70697 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70698 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7069b push edx */
  push32((uint32_t)(EDX));
  /* 12d7069c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7069f push eax */
  push32((uint32_t)(EAX));
  /* 12d706a0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d706a3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12d706a9 push edx */
  push32((uint32_t)(EDX));
  /* 12d706aa call 0x12d70a20 */
  push32(0x12d706afu); f_12d70a20();
  /* 12d706af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d706b2:;
  /* 12d706b2 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d706b7:;
  /* 12d706b7 mov dword ptr [0x12d7e7e8], 0 */
  w32((uint32_t)(0x12d7e7e8), (0x0u));
  /* 12d706c1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d706c4 push eax */
  push32((uint32_t)(EAX));
  /* 12d706c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d706c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d706c9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d706cc push edx */
  push32((uint32_t)(EDX));
  /* 12d706cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d706d0 push eax */
  push32((uint32_t)(EAX));
  /* 12d706d1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d706d4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12d706da push edx */
  push32((uint32_t)(EDX));
  /* 12d706db call 0x12d70a20 */
  push32(0x12d706e0u); f_12d70a20();
  /* 12d706e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d706e3 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d706e8:;
  /* 12d706e8 mov eax, dword ptr [0x12d7e7e8] */
  EAX = (r32((uint32_t)(0x12d7e7e8)));
  /* 12d706ed mov dword ptr [0x12d7e7f8], eax */
  w32((uint32_t)(0x12d7e7f8), (EAX));
  /* 12d706f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d706f5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d706f8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d706f9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12d706fe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d70700 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d70703 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70706 push edx */
  push32((uint32_t)(EDX));
  /* 12d70707 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7070a push eax */
  push32((uint32_t)(EAX));
  /* 12d7070b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d7070d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d70710 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70711 call 0x12d708c0 */
  push32(0x12d70716u); f_12d708c0();
  /* 12d70716 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70719 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d7071e:;
  /* 12d7071e mov edx, dword ptr [0x12d7e7e8] */
  EDX = (r32((uint32_t)(0x12d7e7e8)));
  /* 12d70724 mov dword ptr [0x12d7e7f8], edx */
  w32((uint32_t)(0x12d7e7f8), (EDX));
  /* 12d7072a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7072d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d70730 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d70731 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12d70736 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d70738 mov ecx, eax */
  ECX = (EAX);
  /* 12d7073a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7073d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d70740 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70743 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d70746 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d70747 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12d7074c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d7074e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70750 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d70753 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70756 push eax */
  push32((uint32_t)(EAX));
  /* 12d70757 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7075a push ecx */
  push32((uint32_t)(ECX));
  /* 12d7075b push 4 */
  push32((uint32_t)(0x4u));
  /* 12d7075d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d70760 push edx */
  push32((uint32_t)(EDX));
  /* 12d70761 call 0x12d708c0 */
  push32(0x12d70766u); f_12d708c0();
  /* 12d70766 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70769 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d7076b:;
  /* 12d7076b call 0x12d71880 */
  push32(0x12d70770u); f_12d71880();
  /* 12d70770 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70773 push eax */
  push32((uint32_t)(EAX));
  /* 12d70774 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70777 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70778 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7077b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d7077d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70781 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12d70784 mov ecx, dword ptr [eax*4 + 0x12d7de3c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d7de3c)));
  /* 12d7078b push ecx */
  push32((uint32_t)(ECX));
  /* 12d7078c call 0x12d70870 */
  push32(0x12d70791u); f_12d70870();
  /* 12d70791 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70794 jmp 0x12d707b8 */
  goto L_12d707b8;
L_12d70796:;
  /* 12d70796 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70799 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d7079b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12d7079e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d707a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d707a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d707a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d707a9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d707ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d707ae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d707b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d707b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d707b6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d707b8:;
  /* 12d707b8 pop esi */
  ESI = (pop32());
  /* 12d707b9 mov esp, ebp */
  ESP = (EBP);
  /* 12d707bb pop ebp */
  EBP = (pop32());
  /* 12d707bc ret  */
  ESPCHK(0x12d70250u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12d70870 (72 bytes, 30 insns) */
void f_12d70870(void) {
  FTRACE(0x12d70870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d70870 push ebp */
  push32((uint32_t)(EBP));
  /* 12d70871 mov ebp, esp */
  EBP = (ESP);
L_12d70873:;
  /* 12d70873 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70876 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70879 je 0x12d708b6 */
  if (C.zf) goto L_12d708b6;
  /* 12d7087b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7087e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d70881 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d70883 je 0x12d708b6 */
  if (C.zf) goto L_12d708b6;
  /* 12d70885 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70888 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d7088a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7088d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d7088f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d70891 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70894 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d70896 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70899 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7089c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d7089e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d708a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d708a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d708a7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d708aa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d708ac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d708af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d708b2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d708b4 jmp 0x12d70873 */
  goto L_12d70873;
L_12d708b6:;
  /* 12d708b6 pop ebp */
  EBP = (pop32());
  /* 12d708b7 ret  */
  ESPCHK(0x12d70870u, _esp0);
  ESP += 4; return;
}

/* FUN_100108c0 @ 0x12d708c0 (173 bytes, 64 insns) */
void f_12d708c0(void) {
  FTRACE(0x12d708c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d708c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d708c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d708c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d708c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d708cb cmp dword ptr [0x12d7e7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d708d2 je 0x12d708ea */
  if (C.zf) goto L_12d708ea;
  /* 12d708d4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d708d7 push eax */
  push32((uint32_t)(EAX));
  /* 12d708d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d708db push ecx */
  push32((uint32_t)(ECX));
  /* 12d708dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d708df push edx */
  push32((uint32_t)(EDX));
  /* 12d708e0 call 0x12d70970 */
  push32(0x12d708e5u); f_12d70970();
  /* 12d708e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d708e8 jmp 0x12d70969 */
  goto L_12d70969;
L_12d708ea:;
  /* 12d708ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d708ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d708f0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d708f2 jae 0x12d70960 */
  if (!C.cf) goto L_12d70960;
  /* 12d708f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d708f7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d708fa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12d708fd jmp 0x12d70908 */
  goto L_12d70908;
L_12d708ff:;
  /* 12d708ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70902 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70905 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12d70908:;
  /* 12d70908 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7090b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7090e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d70910 je 0x12d70944 */
  if (C.zf) goto L_12d70944;
  /* 12d70912 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70915 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d70916 mov ecx, 0xa */
  ECX = (0xau);
  /* 12d7091b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d7091d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70920 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70923 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d70925 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70928 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12d7092b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7092e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d7092f mov ecx, 0xa */
  ECX = (0xau);
  /* 12d70934 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d70936 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d70939 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d7093c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7093f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d70942 jmp 0x12d708ff */
  goto L_12d708ff;
L_12d70944:;
  /* 12d70944 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70947 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d70949 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7094c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7094f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d70951 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70954 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d70956 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70959 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d7095c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d7095e jmp 0x12d70969 */
  goto L_12d70969;
L_12d70960:;
  /* 12d70960 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70963 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12d70969:;
  /* 12d70969 mov esp, ebp */
  ESP = (EBP);
  /* 12d7096b pop ebp */
  EBP = (pop32());
  /* 12d7096c ret  */
  ESPCHK(0x12d708c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12d70970 (172 bytes, 65 insns) */
void f_12d70970(void) {
  FTRACE(0x12d70970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d70970 push ebp */
  push32((uint32_t)(EBP));
  /* 12d70971 mov ebp, esp */
  EBP = (ESP);
  /* 12d70973 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70976 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70979 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d7097b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d7097e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70981 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70984 jbe 0x12d709cb */
  if ((C.cf||C.zf)) goto L_12d709cb;
L_12d70986:;
  /* 12d70986 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70989 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d7098a mov ecx, 0xa */
  ECX = (0xau);
  /* 12d7098f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d70991 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70994 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d70997 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d70999 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d7099c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7099f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d709a2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d709a5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d709a7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d709aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d709ad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d709af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d709b2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d709b3 mov ecx, 0xa */
  ECX = (0xau);
  /* 12d709b8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d709ba mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d709bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d709c1 jle 0x12d709cb */
  if ((C.zf||C.sf!=C.of)) goto L_12d709cb;
  /* 12d709c3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d709c6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d709c9 ja 0x12d70986 */
  if ((!C.cf&&!C.zf)) goto L_12d70986;
L_12d709cb:;
  /* 12d709cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d709ce mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d709d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d709d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d709d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d709d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d709db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d709de sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d709e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d709e4:;
  /* 12d709e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d709e7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d709e9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12d709ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d709ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d709f2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d709f4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d709f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d709f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d709fc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d709ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d70a02 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d70a05 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12d70a07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d70a0a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70a0d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d70a10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d70a13 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70a16 jb 0x12d709e4 */
  if (C.cf) goto L_12d709e4;
  /* 12d70a18 mov esp, ebp */
  ESP = (EBP);
  /* 12d70a1a pop ebp */
  EBP = (pop32());
  /* 12d70a1b ret  */
  ESPCHK(0x12d70970u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a20 @ 0x12d70a20 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12d70a20(void) {
  FTRACE(0x12d70a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d70a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d70a21 mov ebp, esp */
  EBP = (ESP);
  /* 12d70a23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12d70a26:;
  /* 12d70a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70a29 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d70a2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d70a2e je 0x12d70e9c */
  if (C.zf) goto L_12d70e9c;
  /* 12d70a34 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70a37 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70a3a je 0x12d70e9c */
  if (C.zf) goto L_12d70e9c;
  /* 12d70a40 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d70a44 mov dword ptr [0x12d7e7f8], 0 */
  w32((uint32_t)(0x12d7e7f8), (0x0u));
  /* 12d70a4e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d70a55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70a58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d70a5b jmp 0x12d70a66 */
  goto L_12d70a66;
L_12d70a5d:;
  /* 12d70a5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70a60 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70a63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d70a66:;
  /* 12d70a66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d70a69 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d70a6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70a6f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d70a72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d70a75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70a78 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d70a7b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70a7d jne 0x12d70a81 */
  if (!C.zf) goto L_12d70a81;
  /* 12d70a7f jmp 0x12d70a5d */
  goto L_12d70a5d;
L_12d70a81:;
  /* 12d70a81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d70a84 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70a87 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d70a8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70a8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d70a90 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d70a93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d70a96 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70a99 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d70a9c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70aa0 ja 0x12d70df0 */
  if ((!C.cf&&!C.zf)) goto L_12d70df0;
  /* 12d70aa6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d70aa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d70aab mov al, byte ptr [ecx + 0x12d70ecc] */
  AL = (r8((uint32_t)(ECX + 0x12d70ecc)));
  /* 12d70ab1 jmp dword ptr [eax*4 + 0x12d70ea0] */
  switch (EAX) {
    case 0: goto L_12d70d0f;
    case 1: goto L_12d70bf3;
    case 2: goto L_12d70b7e;
    case 3: goto L_12d70ab8;
    case 4: goto L_12d70af6;
    case 5: goto L_12d70b57;
    case 6: goto L_12d70ba5;
    case 7: goto L_12d70bcc;
    case 8: goto L_12d70c3a;
    case 9: goto L_12d70b34;
    case 10: goto L_12d70df0;
    default: x86_unimpl("switch@0x12d70ab1 out of table"); return;
  }
L_12d70ab8:;
  /* 12d70ab8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70abb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d70abe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d70ac1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70ac4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d70ac7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70acb ja 0x12d70af1 */
  if ((!C.cf&&!C.zf)) goto L_12d70af1;
  /* 12d70acd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d70ad0 jmp dword ptr [ecx*4 + 0x12d70f1f] */
  switch (ECX) {
    case 0: goto L_12d70ad7;
    case 1: goto L_12d70ae1;
    case 2: goto L_12d70ae7;
    case 3: goto L_12d70aed;
    case 4: goto L_12d70b15;
    case 5: goto L_12d70b1f;
    case 6: goto L_12d70b25;
    case 7: goto L_12d70b2b;
    default: x86_unimpl("switch@0x12d70ad0 out of table"); return;
  }
L_12d70ad7:;
  /* 12d70ad7 mov dword ptr [0x12d7e7f8], 1 */
  w32((uint32_t)(0x12d7e7f8), (0x1u));
L_12d70ae1:;
  /* 12d70ae1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12d70ae5 jmp 0x12d70af1 */
  goto L_12d70af1;
L_12d70ae7:;
  /* 12d70ae7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12d70aeb jmp 0x12d70af1 */
  goto L_12d70af1;
L_12d70aed:;
  /* 12d70aed mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12d70af1:;
  /* 12d70af1 jmp 0x12d70df0 */
  goto L_12d70df0;
L_12d70af6:;
  /* 12d70af6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70af9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d70afc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d70aff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70b02 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d70b05 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70b09 ja 0x12d70b2f */
  if ((!C.cf&&!C.zf)) goto L_12d70b2f;
  /* 12d70b0b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d70b0e jmp dword ptr [ecx*4 + 0x12d70f2f] */
  switch (ECX) {
    case 0: goto L_12d70b15;
    case 1: goto L_12d70b1f;
    case 2: goto L_12d70b25;
    case 3: goto L_12d70b2b;
    default: x86_unimpl("switch@0x12d70b0e out of table"); return;
  }
L_12d70b15:;
  /* 12d70b15 mov dword ptr [0x12d7e7f8], 1 */
  w32((uint32_t)(0x12d7e7f8), (0x1u));
L_12d70b1f:;
  /* 12d70b1f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12d70b23 jmp 0x12d70b2f */
  goto L_12d70b2f;
L_12d70b25:;
  /* 12d70b25 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12d70b29 jmp 0x12d70b2f */
  goto L_12d70b2f;
L_12d70b2b:;
  /* 12d70b2b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12d70b2f:;
  /* 12d70b2f jmp 0x12d70df0 */
  goto L_12d70df0;
L_12d70b34:;
  /* 12d70b34 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70b37 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d70b3a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70b3e je 0x12d70b48 */
  if (C.zf) goto L_12d70b48;
  /* 12d70b40 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70b44 je 0x12d70b4e */
  if (C.zf) goto L_12d70b4e;
  /* 12d70b46 jmp 0x12d70b52 */
  goto L_12d70b52;
L_12d70b48:;
  /* 12d70b48 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12d70b4c jmp 0x12d70b52 */
  goto L_12d70b52;
L_12d70b4e:;
  /* 12d70b4e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12d70b52:;
  /* 12d70b52 jmp 0x12d70df0 */
  goto L_12d70df0;
L_12d70b57:;
  /* 12d70b57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70b5a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d70b5d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70b61 je 0x12d70b6b */
  if (C.zf) goto L_12d70b6b;
  /* 12d70b63 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70b67 je 0x12d70b75 */
  if (C.zf) goto L_12d70b75;
  /* 12d70b69 jmp 0x12d70b79 */
  goto L_12d70b79;
L_12d70b6b:;
  /* 12d70b6b mov dword ptr [0x12d7e7f8], 1 */
  w32((uint32_t)(0x12d7e7f8), (0x1u));
L_12d70b75:;
  /* 12d70b75 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12d70b79:;
  /* 12d70b79 jmp 0x12d70df0 */
  goto L_12d70df0;
L_12d70b7e:;
  /* 12d70b7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70b81 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12d70b84 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70b88 je 0x12d70b92 */
  if (C.zf) goto L_12d70b92;
  /* 12d70b8a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70b8e je 0x12d70b9c */
  if (C.zf) goto L_12d70b9c;
  /* 12d70b90 jmp 0x12d70ba0 */
  goto L_12d70ba0;
L_12d70b92:;
  /* 12d70b92 mov dword ptr [0x12d7e7f8], 1 */
  w32((uint32_t)(0x12d7e7f8), (0x1u));
L_12d70b9c:;
  /* 12d70b9c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12d70ba0:;
  /* 12d70ba0 jmp 0x12d70df0 */
  goto L_12d70df0;
L_12d70ba5:;
  /* 12d70ba5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70ba8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12d70bab cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70baf je 0x12d70bb9 */
  if (C.zf) goto L_12d70bb9;
  /* 12d70bb1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70bb5 je 0x12d70bc3 */
  if (C.zf) goto L_12d70bc3;
  /* 12d70bb7 jmp 0x12d70bc7 */
  goto L_12d70bc7;
L_12d70bb9:;
  /* 12d70bb9 mov dword ptr [0x12d7e7f8], 1 */
  w32((uint32_t)(0x12d7e7f8), (0x1u));
L_12d70bc3:;
  /* 12d70bc3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12d70bc7:;
  /* 12d70bc7 jmp 0x12d70df0 */
  goto L_12d70df0;
L_12d70bcc:;
  /* 12d70bcc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70bcf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12d70bd2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70bd6 je 0x12d70be0 */
  if (C.zf) goto L_12d70be0;
  /* 12d70bd8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70bdc je 0x12d70bea */
  if (C.zf) goto L_12d70bea;
  /* 12d70bde jmp 0x12d70bee */
  goto L_12d70bee;
L_12d70be0:;
  /* 12d70be0 mov dword ptr [0x12d7e7f8], 1 */
  w32((uint32_t)(0x12d7e7f8), (0x1u));
L_12d70bea:;
  /* 12d70bea mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12d70bee:;
  /* 12d70bee jmp 0x12d70df0 */
  goto L_12d70df0;
L_12d70bf3:;
  /* 12d70bf3 push 0x12d7a7f4 */
  push32((uint32_t)(0x12d7a7f4u));
  /* 12d70bf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70bfb push ecx */
  push32((uint32_t)(ECX));
  /* 12d70bfc call 0x12d71450 */
  push32(0x12d70c01u); f_12d71450();
  /* 12d70c01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70c04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d70c06 jne 0x12d70c13 */
  if (!C.zf) goto L_12d70c13;
  /* 12d70c08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70c0b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70c0e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d70c11 jmp 0x12d70c31 */
  goto L_12d70c31;
L_12d70c13:;
  /* 12d70c13 push 0x12d7a7f0 */
  push32((uint32_t)(0x12d7a7f0u));
  /* 12d70c18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70c1b push eax */
  push32((uint32_t)(EAX));
  /* 12d70c1c call 0x12d71450 */
  push32(0x12d70c21u); f_12d71450();
  /* 12d70c21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70c24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d70c26 jne 0x12d70c31 */
  if (!C.zf) goto L_12d70c31;
  /* 12d70c28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70c2b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70c2e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d70c31:;
  /* 12d70c31 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12d70c35 jmp 0x12d70df0 */
  goto L_12d70df0;
L_12d70c3a:;
  /* 12d70c3a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70c3d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70c41 jg 0x12d70c51 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d70c51;
  /* 12d70c43 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d70c46 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12d70c4c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d70c4f jmp 0x12d70c5d */
  goto L_12d70c5d;
L_12d70c51:;
  /* 12d70c51 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d70c54 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12d70c5a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d70c5d:;
  /* 12d70c5d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70c61 jle 0x12d70d04 */
  if ((C.zf||C.sf!=C.of)) goto L_12d70d04;
  /* 12d70c67 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70c6a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70c6d jbe 0x12d70d04 */
  if ((C.cf||C.zf)) goto L_12d70d04;
  /* 12d70c73 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d70c76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d70c78 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d70c7a mov ecx, dword ptr [0x12d7ccb8] */
  ECX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d70c80 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d70c82 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d70c86 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d70c8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d70c8e je 0x12d70cc7 */
  if (C.zf) goto L_12d70cc7;
  /* 12d70c90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70c93 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70c96 jbe 0x12d70cc7 */
  if ((C.cf||C.zf)) goto L_12d70cc7;
  /* 12d70c98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70c9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d70c9d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d70ca0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d70ca2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d70ca4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70ca7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d70ca9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70cac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70caf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d70cb1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d70cb4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70cb7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d70cba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70cbd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d70cbf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70cc2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70cc5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d70cc7:;
  /* 12d70cc7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70cca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d70ccc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d70ccf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d70cd1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d70cd3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70cd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d70cd8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70cdb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70cde mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d70ce0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d70ce3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70ce6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d70ce9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70cec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d70cee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70cf1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70cf4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d70cf6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70cf9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70cfc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d70cff jmp 0x12d70c5d */
  goto L_12d70c5d;
L_12d70d04:;
  /* 12d70d04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d70d07 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d70d0a jmp 0x12d70a26 */
  goto L_12d70a26;
L_12d70d0f:;
  /* 12d70d0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70d12 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d70d15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d70d17 je 0x12d70de2 */
  if (C.zf) goto L_12d70de2;
  /* 12d70d1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70d20 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70d23 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12d70d26:;
  /* 12d70d26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70d29 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d70d2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d70d2e je 0x12d70de0 */
  if (C.zf) goto L_12d70de0;
  /* 12d70d34 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70d37 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70d3a je 0x12d70de0 */
  if (C.zf) goto L_12d70de0;
  /* 12d70d40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70d43 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d70d46 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70d49 jne 0x12d70d59 */
  if (!C.zf) goto L_12d70d59;
  /* 12d70d4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70d4e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70d51 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d70d54 jmp 0x12d70de0 */
  goto L_12d70de0;
L_12d70d59:;
  /* 12d70d59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70d5c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d70d5e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d70d60 mov edx, dword ptr [0x12d7ccb8] */
  EDX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d70d66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d70d68 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12d70d6c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12d70d71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d70d73 je 0x12d70dac */
  if (C.zf) goto L_12d70dac;
  /* 12d70d75 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70d78 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70d7b jbe 0x12d70dac */
  if ((C.cf||C.zf)) goto L_12d70dac;
  /* 12d70d7d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70d80 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d70d82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70d85 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d70d87 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d70d89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70d8c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d70d8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70d91 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70d94 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d70d96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70d99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70d9c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d70d9f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70da2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d70da4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70da7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70daa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d70dac:;
  /* 12d70dac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70daf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d70db1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70db4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d70db6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d70db8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70dbb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d70dbd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70dc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70dc3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d70dc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70dc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70dcb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d70dce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70dd1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d70dd3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70dd6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70dd9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d70ddb jmp 0x12d70d26 */
  goto L_12d70d26;
L_12d70de0:;
  /* 12d70de0 jmp 0x12d70deb */
  goto L_12d70deb;
L_12d70de2:;
  /* 12d70de2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70de5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70de8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d70deb:;
  /* 12d70deb jmp 0x12d70a26 */
  goto L_12d70a26;
L_12d70df0:;
  /* 12d70df0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d70df4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d70df6 je 0x12d70e1c */
  if (C.zf) goto L_12d70e1c;
  /* 12d70df8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d70dfb push edx */
  push32((uint32_t)(EDX));
  /* 12d70dfc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70dff push eax */
  push32((uint32_t)(EAX));
  /* 12d70e00 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70e03 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70e04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70e07 push edx */
  push32((uint32_t)(EDX));
  /* 12d70e08 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12d70e0b push eax */
  push32((uint32_t)(EAX));
  /* 12d70e0c call 0x12d70250 */
  push32(0x12d70e11u); f_12d70250();
  /* 12d70e11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70e14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d70e17 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d70e1a jmp 0x12d70e97 */
  goto L_12d70e97;
L_12d70e1c:;
  /* 12d70e1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70e1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d70e21 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d70e23 mov ecx, dword ptr [0x12d7ccb8] */
  ECX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d70e29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d70e2b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d70e2f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d70e35 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d70e37 je 0x12d70e68 */
  if (C.zf) goto L_12d70e68;
  /* 12d70e39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70e3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d70e3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70e41 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d70e43 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d70e45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70e48 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d70e4a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70e4d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70e50 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d70e52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70e55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70e58 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d70e5b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70e5e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d70e60 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70e63 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70e66 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12d70e68:;
  /* 12d70e68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70e6b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d70e6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70e70 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d70e72 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d70e74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70e77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d70e79 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70e7c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70e7f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d70e81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d70e84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70e87 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d70e8a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70e8d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d70e8f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70e92 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70e95 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d70e97:;
  /* 12d70e97 jmp 0x12d70a26 */
  goto L_12d70a26;
L_12d70e9c:;
  /* 12d70e9c mov esp, ebp */
  ESP = (EBP);
  /* 12d70e9e pop ebp */
  EBP = (pop32());
  /* 12d70e9f ret  */
  ESPCHK(0x12d70a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f40 @ 0x12d70f40 (650 bytes, 178 insns) */
void f_12d70f40(void) {
  FTRACE(0x12d70f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d70f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d70f41 mov ebp, esp */
  EBP = (ESP);
  /* 12d70f43 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d70f49 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70f4d jne 0x12d710a9 */
  if (!C.zf) goto L_12d710a9;
  /* 12d70f53 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d70f56 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12d70f5c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12d70f62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d70f65 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d70f6c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12d70f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d70f78 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12d70f7e push edx */
  push32((uint32_t)(EDX));
  /* 12d70f7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d70f82 push eax */
  push32((uint32_t)(EAX));
  /* 12d70f83 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70f86 push ecx */
  push32((uint32_t)(ECX));
  /* 12d70f87 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70f8a push edx */
  push32((uint32_t)(EDX));
  /* 12d70f8b call 0x12d72360 */
  push32(0x12d70f90u); f_12d72360();
  /* 12d70f90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70f93 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d70f96 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70f9a jne 0x12d7102f */
  if (!C.zf) goto L_12d7102f;
  /* 12d70fa0 call dword ptr [0x12d802d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802d0))), 0x12d70fa6u);
  /* 12d70fa6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70fa9 je 0x12d70fb0 */
  if (C.zf) goto L_12d70fb0;
  /* 12d70fab jmp 0x12d7108d */
  goto L_12d7108d;
L_12d70fb0:;
  /* 12d70fb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d70fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d70fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d70fb6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d70fb9 push eax */
  push32((uint32_t)(EAX));
  /* 12d70fba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d70fbd push ecx */
  push32((uint32_t)(ECX));
  /* 12d70fbe call 0x12d72360 */
  push32(0x12d70fc3u); f_12d72360();
  /* 12d70fc3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70fc6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12d70fcc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70fd3 jne 0x12d70fda */
  if (!C.zf) goto L_12d70fda;
  /* 12d70fd5 jmp 0x12d7108d */
  goto L_12d7108d;
L_12d70fda:;
  /* 12d70fda push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12d70fdc push 0x12d7a7fc */
  push32((uint32_t)(0x12d7a7fcu));
  /* 12d70fe1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d70fe3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12d70fe9 push edx */
  push32((uint32_t)(EDX));
  /* 12d70fea call 0x12d62d80 */
  push32(0x12d70fefu); f_12d62d80();
  /* 12d70fef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d70ff2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d70ff5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d70ff9 jne 0x12d71000 */
  if (!C.zf) goto L_12d71000;
  /* 12d70ffb jmp 0x12d7108d */
  goto L_12d7108d;
L_12d71000:;
  /* 12d71000 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d71007 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71009 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12d7100f push eax */
  push32((uint32_t)(EAX));
  /* 12d71010 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71013 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71014 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d71017 push edx */
  push32((uint32_t)(EDX));
  /* 12d71018 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7101b push eax */
  push32((uint32_t)(EAX));
  /* 12d7101c call 0x12d72360 */
  push32(0x12d71021u); f_12d72360();
  /* 12d71021 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71024 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d71027 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7102b jne 0x12d7102f */
  if (!C.zf) goto L_12d7102f;
  /* 12d7102d jmp 0x12d7108d */
  goto L_12d7108d;
L_12d7102f:;
  /* 12d7102f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12d71031 push 0x12d7a7fc */
  push32((uint32_t)(0x12d7a7fcu));
  /* 12d71036 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d71038 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d7103b push ecx */
  push32((uint32_t)(ECX));
  /* 12d7103c call 0x12d62d80 */
  push32(0x12d71041u); f_12d62d80();
  /* 12d71041 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71044 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12d7104a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d7104c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12d71052 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71055 jne 0x12d71059 */
  if (!C.zf) goto L_12d71059;
  /* 12d71057 jmp 0x12d7108d */
  goto L_12d7108d;
L_12d71059:;
  /* 12d71059 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d7105c push ecx */
  push32((uint32_t)(ECX));
  /* 12d7105d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71060 push edx */
  push32((uint32_t)(EDX));
  /* 12d71061 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12d71067 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d71069 push ecx */
  push32((uint32_t)(ECX));
  /* 12d7106a call 0x12d665a0 */
  push32(0x12d7106fu); f_12d665a0();
  /* 12d7106f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71072 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71076 je 0x12d71086 */
  if (C.zf) goto L_12d71086;
  /* 12d71078 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d7107a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d7107d push edx */
  push32((uint32_t)(EDX));
  /* 12d7107e call 0x12d63810 */
  push32(0x12d71083u); f_12d63810();
  /* 12d71083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d71086:;
  /* 12d71086 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71088 jmp 0x12d711c6 */
  goto L_12d711c6;
L_12d7108d:;
  /* 12d7108d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71091 je 0x12d710a1 */
  if (C.zf) goto L_12d710a1;
  /* 12d71093 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d71095 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71098 push eax */
  push32((uint32_t)(EAX));
  /* 12d71099 call 0x12d63810 */
  push32(0x12d7109eu); f_12d63810();
  /* 12d7109e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d710a1:;
  /* 12d710a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d710a4 jmp 0x12d711c6 */
  goto L_12d711c6;
L_12d710a9:;
  /* 12d710a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d710ad jne 0x12d711c3 */
  if (!C.zf) goto L_12d711c3;
  /* 12d710b3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12d710bd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d710c0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12d710c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d710c8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12d710ce push edx */
  push32((uint32_t)(EDX));
  /* 12d710cf push 0x12d7e710 */
  push32((uint32_t)(0x12d7e710u));
  /* 12d710d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d710d7 push eax */
  push32((uint32_t)(EAX));
  /* 12d710d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d710db push ecx */
  push32((uint32_t)(ECX));
  /* 12d710dc call 0x12d721c0 */
  push32(0x12d710e1u); f_12d721c0();
  /* 12d710e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d710e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d710e6 jne 0x12d710f0 */
  if (!C.zf) goto L_12d710f0;
  /* 12d710e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d710eb jmp 0x12d711c6 */
  goto L_12d711c6;
L_12d710f0:;
  /* 12d710f0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d710f6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d710f9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12d71103 jmp 0x12d71114 */
  goto L_12d71114;
L_12d71105:;
  /* 12d71105 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d7110b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7110e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12d71114:;
  /* 12d71114 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7111b jge 0x12d711bf */
  if ((C.sf==C.of)) goto L_12d711bf;
  /* 12d71121 cmp dword ptr [0x12d7cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71128 jle 0x12d7115b */
  if ((C.zf||C.sf!=C.of)) goto L_12d7115b;
  /* 12d7112a push 4 */
  push32((uint32_t)(0x4u));
  /* 12d7112c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d71132 mov dl, byte ptr [ecx*2 + 0x12d7e710] */
  DL = (r8((uint32_t)(ECX*2 + 0x12d7e710)));
  /* 12d71139 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12d7113f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12d71145 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d7114a push eax */
  push32((uint32_t)(EAX));
  /* 12d7114b call 0x12d68d90 */
  push32(0x12d71150u); f_12d68d90();
  /* 12d71150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71153 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12d71159 jmp 0x12d7118e */
  goto L_12d7118e;
L_12d7115b:;
  /* 12d7115b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d71161 mov dl, byte ptr [ecx*2 + 0x12d7e710] */
  DL = (r8((uint32_t)(ECX*2 + 0x12d7e710)));
  /* 12d71168 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12d7116e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12d71174 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d71179 mov ecx, dword ptr [0x12d7ccb8] */
  ECX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d7117f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71181 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d71185 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d71188 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12d7118e:;
  /* 12d7118e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71195 je 0x12d711b8 */
  if (C.zf) goto L_12d711b8;
  /* 12d71197 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d7119d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d711a0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d711a3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12d711aa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12d711ae mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d711b4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d711b6 jmp 0x12d711ba */
  goto L_12d711ba;
L_12d711b8:;
  /* 12d711b8 jmp 0x12d711bf */
  goto L_12d711bf;
L_12d711ba:;
  /* 12d711ba jmp 0x12d71105 */
  goto L_12d71105;
L_12d711bf:;
  /* 12d711bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d711c1 jmp 0x12d711c6 */
  goto L_12d711c6;
L_12d711c3:;
  /* 12d711c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d711c6:;
  /* 12d711c6 mov esp, ebp */
  ESP = (EBP);
  /* 12d711c8 pop ebp */
  EBP = (pop32());
  /* 12d711c9 ret  */
  ESPCHK(0x12d70f40u, _esp0);
  ESP += 4; return;
}

/* FUN_100111d0 @ 0x12d711d0 (10 bytes, 5 insns) */
void f_12d711d0(void) {
  FTRACE(0x12d711d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d711d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d711d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d711d3 mov eax, dword ptr [0x12d7dda8] */
  EAX = (r32((uint32_t)(0x12d7dda8)));
  /* 12d711d8 pop ebp */
  EBP = (pop32());
  /* 12d711d9 ret  */
  ESPCHK(0x12d711d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100111e0 @ 0x12d711e0 (575 bytes, 196 insns) */
void f_12d711e0(void) {
  FTRACE(0x12d711e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d711e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d711e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d711e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d711e5 push 0x12d7a808 */
  push32((uint32_t)(0x12d7a808u));
  /* 12d711ea push 0x12d6be88 */
  push32((uint32_t)(0x12d6be88u));
  /* 12d711ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d711f5 push eax */
  push32((uint32_t)(EAX));
  /* 12d711f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d711fd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71200 push ebx */
  push32((uint32_t)(EBX));
  /* 12d71201 push esi */
  push32((uint32_t)(ESI));
  /* 12d71202 push edi */
  push32((uint32_t)(EDI));
  /* 12d71203 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d71206 cmp dword ptr [0x12d7e71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7120d jne 0x12d7125e */
  if (!C.zf) goto L_12d7125e;
  /* 12d7120f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12d71212 push eax */
  push32((uint32_t)(EAX));
  /* 12d71213 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d71215 push 0x12d79f38 */
  push32((uint32_t)(0x12d79f38u));
  /* 12d7121a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d7121c call dword ptr [0x12d80350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80350))), 0x12d71222u);
  /* 12d71222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d71224 je 0x12d71232 */
  if (C.zf) goto L_12d71232;
  /* 12d71226 mov dword ptr [0x12d7e71c], 1 */
  w32((uint32_t)(0x12d7e71c), (0x1u));
  /* 12d71230 jmp 0x12d7125e */
  goto L_12d7125e;
L_12d71232:;
  /* 12d71232 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12d71235 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71236 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d71238 push 0x12d79f34 */
  push32((uint32_t)(0x12d79f34u));
  /* 12d7123d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d7123f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71241 call dword ptr [0x12d8034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8034c))), 0x12d71247u);
  /* 12d71247 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d71249 je 0x12d71257 */
  if (C.zf) goto L_12d71257;
  /* 12d7124b mov dword ptr [0x12d7e71c], 2 */
  w32((uint32_t)(0x12d7e71c), (0x2u));
  /* 12d71255 jmp 0x12d7125e */
  goto L_12d7125e;
L_12d71257:;
  /* 12d71257 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71259 jmp 0x12d71439 */
  goto L_12d71439;
L_12d7125e:;
  /* 12d7125e cmp dword ptr [0x12d7e71c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e71c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71265 jne 0x12d71282 */
  if (!C.zf) goto L_12d71282;
  /* 12d71267 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d7126a push edx */
  push32((uint32_t)(EDX));
  /* 12d7126b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7126e push eax */
  push32((uint32_t)(EAX));
  /* 12d7126f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d71272 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71273 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71276 push edx */
  push32((uint32_t)(EDX));
  /* 12d71277 call dword ptr [0x12d80350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80350))), 0x12d7127du);
  /* 12d7127d jmp 0x12d71439 */
  goto L_12d71439;
L_12d71282:;
  /* 12d71282 cmp dword ptr [0x12d7e71c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e71c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71289 jne 0x12d71437 */
  if (!C.zf) goto L_12d71437;
  /* 12d7128f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71293 jne 0x12d7129d */
  if (!C.zf) goto L_12d7129d;
  /* 12d71295 mov eax, dword ptr [0x12d7e690] */
  EAX = (r32((uint32_t)(0x12d7e690)));
  /* 12d7129a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12d7129d:;
  /* 12d7129d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d7129f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d712a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d712a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d712a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d712a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d712a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d712ac push edx */
  push32((uint32_t)(EDX));
  /* 12d712ad push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d712b2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d712b5 push eax */
  push32((uint32_t)(EAX));
  /* 12d712b6 call dword ptr [0x12d802fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802fc))), 0x12d712bcu);
  /* 12d712bc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d712bf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d712c3 jne 0x12d712cc */
  if (!C.zf) goto L_12d712cc;
  /* 12d712c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d712c7 jmp 0x12d71439 */
  goto L_12d71439;
L_12d712cc:;
  /* 12d712cc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d712d3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d712d6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d712d9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d712db call 0x12d65f20 */
  push32(0x12d712e0u); f_12d65f20();
  /* 12d712e0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12d712e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d712e6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d712e9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d712ec mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d712ef push edx */
  push32((uint32_t)(EDX));
  /* 12d712f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d712f2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d712f5 push eax */
  push32((uint32_t)(EAX));
  /* 12d712f6 call 0x12d66af0 */
  push32(0x12d712fbu); f_12d66af0();
  /* 12d712fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d712fe mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d71305 jmp 0x12d7131e */
  goto L_12d7131e;
  /* 12d71307 mov eax, 1 */
  EAX = (0x1u);
  /* 12d7130c ret  */
  ESPCHK(0x12d711e0u, _esp0);
  ESP += 4; return;
  /* 12d7130d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d71310 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12d71317 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d7131e:;
  /* 12d7131e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71322 jne 0x12d7132b */
  if (!C.zf) goto L_12d7132b;
  /* 12d71324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71326 jmp 0x12d71439 */
  goto L_12d71439;
L_12d7132b:;
  /* 12d7132b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d7132d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d7132f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d71332 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71333 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d71336 push edx */
  push32((uint32_t)(EDX));
  /* 12d71337 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7133a push eax */
  push32((uint32_t)(EAX));
  /* 12d7133b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7133e push ecx */
  push32((uint32_t)(ECX));
  /* 12d7133f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d71344 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d71347 push edx */
  push32((uint32_t)(EDX));
  /* 12d71348 call dword ptr [0x12d802fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802fc))), 0x12d7134eu);
  /* 12d7134e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d71350 jne 0x12d71359 */
  if (!C.zf) goto L_12d71359;
  /* 12d71352 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71354 jmp 0x12d71439 */
  goto L_12d71439;
L_12d71359:;
  /* 12d71359 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d71360 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d71363 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12d71367 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7136a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d7136c call 0x12d65f20 */
  push32(0x12d71371u); f_12d65f20();
  /* 12d71371 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12d71374 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d71377 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d7137a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d7137d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d71384 jmp 0x12d7139d */
  goto L_12d7139d;
  /* 12d71386 mov eax, 1 */
  EAX = (0x1u);
  /* 12d7138b ret  */
  ESPCHK(0x12d711e0u, _esp0);
  ESP += 4; return;
  /* 12d7138c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d7138f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d71396 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d7139d:;
  /* 12d7139d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d713a1 jne 0x12d713aa */
  if (!C.zf) goto L_12d713aa;
  /* 12d713a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d713a5 jmp 0x12d71439 */
  goto L_12d71439;
L_12d713aa:;
  /* 12d713aa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d713ae jne 0x12d713b9 */
  if (!C.zf) goto L_12d713b9;
  /* 12d713b0 mov edx, dword ptr [0x12d7e680] */
  EDX = (r32((uint32_t)(0x12d7e680)));
  /* 12d713b6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12d713b9:;
  /* 12d713b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d713bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d713bf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12d713c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d713c8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d713cb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12d713d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d713d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d713d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d713d9 push edx */
  push32((uint32_t)(EDX));
  /* 12d713da mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d713dd push eax */
  push32((uint32_t)(EAX));
  /* 12d713de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d713e1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d713e2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d713e5 push edx */
  push32((uint32_t)(EDX));
  /* 12d713e6 call dword ptr [0x12d8034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8034c))), 0x12d713ecu);
  /* 12d713ec mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d713ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d713f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d713f5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d713f7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12d713fc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71402 je 0x12d71418 */
  if (C.zf) goto L_12d71418;
  /* 12d71404 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d71407 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d7140a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d7140c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d71410 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71416 je 0x12d7141c */
  if (C.zf) goto L_12d7141c;
L_12d71418:;
  /* 12d71418 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d7141a jmp 0x12d71439 */
  goto L_12d71439;
L_12d7141c:;
  /* 12d7141c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7141f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d71421 push eax */
  push32((uint32_t)(EAX));
  /* 12d71422 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d71425 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71426 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d71429 push edx */
  push32((uint32_t)(EDX));
  /* 12d7142a call 0x12d6ac70 */
  push32(0x12d7142fu); f_12d6ac70();
  /* 12d7142f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71432 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d71435 jmp 0x12d71439 */
  goto L_12d71439;
L_12d71437:;
  /* 12d71437 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d71439:;
  /* 12d71439 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12d7143c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d7143f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d71446 pop edi */
  EDI = (pop32());
  /* 12d71447 pop esi */
  ESI = (pop32());
  /* 12d71448 pop ebx */
  EBX = (pop32());
  /* 12d71449 mov esp, ebp */
  ESP = (EBP);
  /* 12d7144b pop ebp */
  EBP = (pop32());
  /* 12d7144c ret  */
  ESPCHK(0x12d711e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011450 @ 0x12d71450 (208 bytes, 85 insns) */
void f_12d71450(void) {
  FTRACE(0x12d71450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d71450 push ebp */
  push32((uint32_t)(EBP));
  /* 12d71451 mov ebp, esp */
  EBP = (ESP);
  /* 12d71453 push edi */
  push32((uint32_t)(EDI));
  /* 12d71454 push esi */
  push32((uint32_t)(ESI));
  /* 12d71455 push ebx */
  push32((uint32_t)(EBX));
  /* 12d71456 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d71459 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7145c lea eax, [0x12d7e678] */
  EAX = ((uint32_t)(0x12d7e678));
  /* 12d71462 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71466 jne 0x12d714a3 */
  if (!C.zf) goto L_12d714a3;
  /* 12d71468 mov al, 0xff */
  AL = (0xffu);
  /* 12d7146a mov edi, edi */
  EDI = (EDI);
L_12d7146c:;
  /* 12d7146c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d7146e je 0x12d7149e */
  if (C.zf) goto L_12d7149e;
  /* 12d71470 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d71472 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d71473 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12d71475 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d71476 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d71478 je 0x12d7146c */
  if (C.zf) goto L_12d7146c;
  /* 12d7147a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d7147c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d7147e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d71480 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12d71483 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d71485 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d71487 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12d71489 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d7148b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d7148d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d7148f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12d71492 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d71494 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d71496 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d71498 je 0x12d7146c */
  if (C.zf) goto L_12d7146c;
  /* 12d7149a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d7149c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12d7149e:;
  /* 12d7149e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12d714a1 jmp 0x12d7151b */
  goto L_12d7151b;
L_12d714a3:;
  /* 12d714a3 lock inc dword ptr [0x12d7e80c] */
  x86_unimpl("lock inc @ 0x12d714a3");
  /* 12d714aa cmp dword ptr [0x12d7e7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d714b1 jg 0x12d714b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d714b7;
  /* 12d714b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d714b5 jmp 0x12d714cc */
  goto L_12d714cc;
L_12d714b7:;
  /* 12d714b7 lock dec dword ptr [0x12d7e80c] */
  x86_unimpl("lock dec @ 0x12d714b7");
  /* 12d714be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d714c0 call 0x12d66780 */
  push32(0x12d714c5u); f_12d66780();
  /* 12d714c5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12d714cc:;
  /* 12d714cc mov eax, 0xff */
  EAX = (0xffu);
  /* 12d714d1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12d714d3 nop  */
  /* nop */
L_12d714d4:;
  /* 12d714d4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d714d6 je 0x12d714ff */
  if (C.zf) goto L_12d714ff;
  /* 12d714d8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d714da inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d714db mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12d714dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d714de cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d714e0 je 0x12d714d4 */
  if (C.zf) goto L_12d714d4;
  /* 12d714e2 push eax */
  push32((uint32_t)(EAX));
  /* 12d714e3 push ebx */
  push32((uint32_t)(EBX));
  /* 12d714e4 call 0x12d725c0 */
  push32(0x12d714e9u); f_12d725c0();
  /* 12d714e9 mov ebx, eax */
  EBX = (EAX);
  /* 12d714eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d714ee call 0x12d725c0 */
  push32(0x12d714f3u); f_12d725c0();
  /* 12d714f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d714f6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d714f8 je 0x12d714d4 */
  if (C.zf) goto L_12d714d4;
  /* 12d714fa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d714fc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12d714ff:;
  /* 12d714ff mov ebx, eax */
  EBX = (EAX);
  /* 12d71501 pop eax */
  EAX = (pop32());
  /* 12d71502 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71504 jne 0x12d7150f */
  if (!C.zf) goto L_12d7150f;
  /* 12d71506 lock dec dword ptr [0x12d7e80c] */
  x86_unimpl("lock dec @ 0x12d71506");
  /* 12d7150d jmp 0x12d71519 */
  goto L_12d71519;
L_12d7150f:;
  /* 12d7150f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d71511 call 0x12d66820 */
  push32(0x12d71516u); f_12d66820();
  /* 12d71516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d71519:;
  /* 12d71519 mov eax, ebx */
  EAX = (EBX);
L_12d7151b:;
  /* 12d7151b pop ebx */
  EBX = (pop32());
  /* 12d7151c pop esi */
  ESI = (pop32());
  /* 12d7151d pop edi */
  EDI = (pop32());
  /* 12d7151e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d7151f ret  */
  ESPCHK(0x12d71450u, _esp0);
  ESP += 4; return;
}

/* FUN_10011520 @ 0x12d71520 (257 bytes, 103 insns) */
void f_12d71520(void) {
  FTRACE(0x12d71520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d71520 push ebp */
  push32((uint32_t)(EBP));
  /* 12d71521 mov ebp, esp */
  EBP = (ESP);
  /* 12d71523 push edi */
  push32((uint32_t)(EDI));
  /* 12d71524 push esi */
  push32((uint32_t)(ESI));
  /* 12d71525 push ebx */
  push32((uint32_t)(EBX));
  /* 12d71526 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d71529 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d7152b je 0x12d7161a */
  if (C.zf) goto L_12d7161a;
  /* 12d71531 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71534 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d71537 lea eax, [0x12d7e678] */
  EAX = ((uint32_t)(0x12d7e678));
  /* 12d7153d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71541 jne 0x12d71591 */
  if (!C.zf) goto L_12d71591;
  /* 12d71543 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12d71545 mov bl, 0x5a */
  BL = (0x5au);
  /* 12d71547 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12d71549 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d7154c:;
  /* 12d7154c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12d7154e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12d71550 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12d71552 je 0x12d71575 */
  if (C.zf) goto L_12d71575;
  /* 12d71554 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d71556 je 0x12d71575 */
  if (C.zf) goto L_12d71575;
  /* 12d71558 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d71559 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d7155a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d7155c jb 0x12d71564 */
  if (C.cf) goto L_12d71564;
  /* 12d7155e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d71560 ja 0x12d71564 */
  if ((!C.cf&&!C.zf)) goto L_12d71564;
  /* 12d71562 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12d71564:;
  /* 12d71564 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d71566 jb 0x12d7156e */
  if (C.cf) goto L_12d7156e;
  /* 12d71568 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d7156a ja 0x12d7156e */
  if ((!C.cf&&!C.zf)) goto L_12d7156e;
  /* 12d7156c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12d7156e:;
  /* 12d7156e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d71570 jne 0x12d7157f */
  if (!C.zf) goto L_12d7157f;
  /* 12d71572 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d71573 jne 0x12d7154c */
  if (!C.zf) goto L_12d7154c;
L_12d71575:;
  /* 12d71575 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d71577 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d71579 je 0x12d7161a */
  if (C.zf) goto L_12d7161a;
L_12d7157f:;
  /* 12d7157f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12d71584 jb 0x12d7161a */
  if (C.cf) goto L_12d7161a;
  /* 12d7158a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d7158c jmp 0x12d7161a */
  goto L_12d7161a;
L_12d71591:;
  /* 12d71591 lock inc dword ptr [0x12d7e80c] */
  x86_unimpl("lock inc @ 0x12d71591");
  /* 12d71598 cmp dword ptr [0x12d7e7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7159f jg 0x12d715a5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d715a5;
  /* 12d715a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d715a3 jmp 0x12d715be */
  goto L_12d715be;
L_12d715a5:;
  /* 12d715a5 lock dec dword ptr [0x12d7e80c] */
  x86_unimpl("lock dec @ 0x12d715a5");
  /* 12d715ac mov ebx, ecx */
  EBX = (ECX);
  /* 12d715ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d715b0 call 0x12d66780 */
  push32(0x12d715b5u); f_12d66780();
  /* 12d715b5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12d715bc mov ecx, ebx */
  ECX = (EBX);
L_12d715be:;
  /* 12d715be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d715c0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12d715c2 mov edi, edi */
  EDI = (EDI);
L_12d715c4:;
  /* 12d715c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d715c6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d715c8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12d715ca je 0x12d715ef */
  if (C.zf) goto L_12d715ef;
  /* 12d715cc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12d715ce je 0x12d715ef */
  if (C.zf) goto L_12d715ef;
  /* 12d715d0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d715d1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d715d2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d715d3 push eax */
  push32((uint32_t)(EAX));
  /* 12d715d4 push ebx */
  push32((uint32_t)(EBX));
  /* 12d715d5 call 0x12d725c0 */
  push32(0x12d715dau); f_12d725c0();
  /* 12d715da mov ebx, eax */
  EBX = (EAX);
  /* 12d715dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d715df call 0x12d725c0 */
  push32(0x12d715e4u); f_12d725c0();
  /* 12d715e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d715e7 pop ecx */
  ECX = (pop32());
  /* 12d715e8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d715ea jne 0x12d715f5 */
  if (!C.zf) goto L_12d715f5;
  /* 12d715ec dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d715ed jne 0x12d715c4 */
  if (!C.zf) goto L_12d715c4;
L_12d715ef:;
  /* 12d715ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d715f1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d715f3 je 0x12d715fe */
  if (C.zf) goto L_12d715fe;
L_12d715f5:;
  /* 12d715f5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12d715fa jb 0x12d715fe */
  if (C.cf) goto L_12d715fe;
  /* 12d715fc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12d715fe:;
  /* 12d715fe pop eax */
  EAX = (pop32());
  /* 12d715ff or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71601 jne 0x12d7160c */
  if (!C.zf) goto L_12d7160c;
  /* 12d71603 lock dec dword ptr [0x12d7e80c] */
  x86_unimpl("lock dec @ 0x12d71603");
  /* 12d7160a jmp 0x12d7161a */
  goto L_12d7161a;
L_12d7160c:;
  /* 12d7160c mov ebx, ecx */
  EBX = (ECX);
  /* 12d7160e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d71610 call 0x12d66820 */
  push32(0x12d71615u); f_12d66820();
  /* 12d71615 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71618 mov ecx, ebx */
  ECX = (EBX);
L_12d7161a:;
  /* 12d7161a mov eax, ecx */
  EAX = (ECX);
  /* 12d7161c pop ebx */
  EBX = (pop32());
  /* 12d7161d pop esi */
  ESI = (pop32());
  /* 12d7161e pop edi */
  EDI = (pop32());
  /* 12d7161f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d71620 ret  */
  ESPCHK(0x12d71520u, _esp0);
  ESP += 4; return;
}

/* FUN_10011630 @ 0x12d71630 (255 bytes, 88 insns) */
void f_12d71630(void) {
  FTRACE(0x12d71630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d71630 push ebp */
  push32((uint32_t)(EBP));
  /* 12d71631 mov ebp, esp */
  EBP = (ESP);
  /* 12d71633 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12d71636:;
  /* 12d71636 cmp dword ptr [0x12d7cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7163d jle 0x12d71656 */
  if ((C.zf||C.sf!=C.of)) goto L_12d71656;
  /* 12d7163f push 8 */
  push32((uint32_t)(0x8u));
  /* 12d71641 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71644 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d71646 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d71648 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71649 call 0x12d68d90 */
  push32(0x12d7164eu); f_12d68d90();
  /* 12d7164e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71651 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d71654 jmp 0x12d7166f */
  goto L_12d7166f;
L_12d71656:;
  /* 12d71656 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71659 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d7165b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d7165d mov ecx, dword ptr [0x12d7ccb8] */
  ECX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d71663 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71665 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d71669 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12d7166c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d7166f:;
  /* 12d7166f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71673 je 0x12d71680 */
  if (C.zf) goto L_12d71680;
  /* 12d71675 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71678 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7167b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d7167e jmp 0x12d71636 */
  goto L_12d71636;
L_12d71680:;
  /* 12d71680 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71683 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71685 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d71687 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d7168a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7168d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71690 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d71693 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d71696 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d71699 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7169d je 0x12d716a5 */
  if (C.zf) goto L_12d716a5;
  /* 12d7169f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d716a3 jne 0x12d716b8 */
  if (!C.zf) goto L_12d716b8;
L_12d716a5:;
  /* 12d716a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d716a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d716aa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d716ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d716af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d716b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d716b5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12d716b8:;
  /* 12d716b8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d716bf:;
  /* 12d716bf cmp dword ptr [0x12d7cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d716c6 jle 0x12d716db */
  if ((C.zf||C.sf!=C.of)) goto L_12d716db;
  /* 12d716c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d716ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d716cd push edx */
  push32((uint32_t)(EDX));
  /* 12d716ce call 0x12d68d90 */
  push32(0x12d716d3u); f_12d68d90();
  /* 12d716d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d716d6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d716d9 jmp 0x12d716f0 */
  goto L_12d716f0;
L_12d716db:;
  /* 12d716db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d716de mov ecx, dword ptr [0x12d7ccb8] */
  ECX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d716e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d716e6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d716ea and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d716ed mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12d716f0:;
  /* 12d716f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d716f4 je 0x12d7171b */
  if (C.zf) goto L_12d7171b;
  /* 12d716f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d716f9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d716fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d716ff lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12d71703 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d71706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71709 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d7170b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d7170d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d71710 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71713 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71716 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d71719 jmp 0x12d716bf */
  goto L_12d716bf;
L_12d7171b:;
  /* 12d7171b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7171f jne 0x12d71728 */
  if (!C.zf) goto L_12d71728;
  /* 12d71721 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d71724 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d71726 jmp 0x12d7172b */
  goto L_12d7172b;
L_12d71728:;
  /* 12d71728 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d7172b:;
  /* 12d7172b mov esp, ebp */
  ESP = (EBP);
  /* 12d7172d pop ebp */
  EBP = (pop32());
  /* 12d7172e ret  */
  ESPCHK(0x12d71630u, _esp0);
  ESP += 4; return;
}

/* FUN_10011730 @ 0x12d71730 (17 bytes, 8 insns) */
void f_12d71730(void) {
  FTRACE(0x12d71730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d71730 push ebp */
  push32((uint32_t)(EBP));
  /* 12d71731 mov ebp, esp */
  EBP = (ESP);
  /* 12d71733 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71736 push eax */
  push32((uint32_t)(EAX));
  /* 12d71737 call 0x12d71630 */
  push32(0x12d7173cu); f_12d71630();
  /* 12d7173c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7173f pop ebp */
  EBP = (pop32());
  /* 12d71740 ret  */
  ESPCHK(0x12d71730u, _esp0);
  ESP += 4; return;
}

/* FUN_10011750 @ 0x12d71750 (297 bytes, 106 insns) */
void f_12d71750(void) {
  FTRACE(0x12d71750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d71750 push ebp */
  push32((uint32_t)(EBP));
  /* 12d71751 mov ebp, esp */
  EBP = (ESP);
  /* 12d71753 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d71756 push esi */
  push32((uint32_t)(ESI));
L_12d71757:;
  /* 12d71757 cmp dword ptr [0x12d7cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7175e jle 0x12d71777 */
  if ((C.zf||C.sf!=C.of)) goto L_12d71777;
  /* 12d71760 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d71762 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71765 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d71767 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d71769 push ecx */
  push32((uint32_t)(ECX));
  /* 12d7176a call 0x12d68d90 */
  push32(0x12d7176fu); f_12d68d90();
  /* 12d7176f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71772 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d71775 jmp 0x12d71790 */
  goto L_12d71790;
L_12d71777:;
  /* 12d71777 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7177a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d7177c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d7177e mov ecx, dword ptr [0x12d7ccb8] */
  ECX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d71784 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71786 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d7178a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12d7178d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12d71790:;
  /* 12d71790 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71794 je 0x12d717a1 */
  if (C.zf) goto L_12d717a1;
  /* 12d71796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71799 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7179c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d7179f jmp 0x12d71757 */
  goto L_12d71757;
L_12d717a1:;
  /* 12d717a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d717a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d717a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d717a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d717ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d717ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d717b1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d717b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d717b7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d717ba cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d717be je 0x12d717c6 */
  if (C.zf) goto L_12d717c6;
  /* 12d717c0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d717c4 jne 0x12d717d9 */
  if (!C.zf) goto L_12d717d9;
L_12d717c6:;
  /* 12d717c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d717c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d717cb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d717cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d717d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d717d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d717d6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12d717d9:;
  /* 12d717d9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d717e0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d717e7:;
  /* 12d717e7 cmp dword ptr [0x12d7cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d717ee jle 0x12d71803 */
  if ((C.zf||C.sf!=C.of)) goto L_12d71803;
  /* 12d717f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d717f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d717f5 push edx */
  push32((uint32_t)(EDX));
  /* 12d717f6 call 0x12d68d90 */
  push32(0x12d717fbu); f_12d68d90();
  /* 12d717fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d717fe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d71801 jmp 0x12d71818 */
  goto L_12d71818;
L_12d71803:;
  /* 12d71803 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d71806 mov ecx, dword ptr [0x12d7ccb8] */
  ECX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d7180c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d7180e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d71812 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d71815 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12d71818:;
  /* 12d71818 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7181c je 0x12d71859 */
  if (C.zf) goto L_12d71859;
  /* 12d7181e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71820 push 0xa */
  push32((uint32_t)(0xau));
  /* 12d71822 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d71825 push eax */
  push32((uint32_t)(EAX));
  /* 12d71826 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71829 push ecx */
  push32((uint32_t)(ECX));
  /* 12d7182a call 0x12d726f0 */
  push32(0x12d7182fu); f_12d726f0();
  /* 12d7182f mov ecx, eax */
  ECX = (EAX);
  /* 12d71831 mov esi, edx */
  ESI = (EDX);
  /* 12d71833 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d71836 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d71839 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d7183a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7183c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7183e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d71841 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12d71844 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71847 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71849 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d7184b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d7184e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71851 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71854 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d71857 jmp 0x12d717e7 */
  goto L_12d717e7;
L_12d71859:;
  /* 12d71859 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7185d jne 0x12d7186e */
  if (!C.zf) goto L_12d7186e;
  /* 12d7185f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71862 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d71864 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d71867 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7186a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d7186c jmp 0x12d71874 */
  goto L_12d71874;
L_12d7186e:;
  /* 12d7186e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71871 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12d71874:;
  /* 12d71874 pop esi */
  ESI = (pop32());
  /* 12d71875 mov esp, ebp */
  ESP = (EBP);
  /* 12d71877 pop ebp */
  EBP = (pop32());
  /* 12d71878 ret  */
  ESPCHK(0x12d71750u, _esp0);
  ESP += 4; return;
}

/* FUN_10011880 @ 0x12d71880 (61 bytes, 18 insns) */
void f_12d71880(void) {
  FTRACE(0x12d71880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d71880 push ebp */
  push32((uint32_t)(EBP));
  /* 12d71881 mov ebp, esp */
  EBP = (ESP);
  /* 12d71883 cmp dword ptr [0x12d7e7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7188a jne 0x12d718bb */
  if (!C.zf) goto L_12d718bb;
  /* 12d7188c push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d7188e call 0x12d66780 */
  push32(0x12d71893u); f_12d66780();
  /* 12d71893 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71896 cmp dword ptr [0x12d7e7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7189d jne 0x12d718b1 */
  if (!C.zf) goto L_12d718b1;
  /* 12d7189f call 0x12d718e0 */
  push32(0x12d718a4u); f_12d718e0();
  /* 12d718a4 mov eax, dword ptr [0x12d7e7d8] */
  EAX = (r32((uint32_t)(0x12d7e7d8)));
  /* 12d718a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d718ac mov dword ptr [0x12d7e7d8], eax */
  w32((uint32_t)(0x12d7e7d8), (EAX));
L_12d718b1:;
  /* 12d718b1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d718b3 call 0x12d66820 */
  push32(0x12d718b8u); f_12d66820();
  /* 12d718b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d718bb:;
  /* 12d718bb pop ebp */
  EBP = (pop32());
  /* 12d718bc ret  */
  ESPCHK(0x12d71880u, _esp0);
  ESP += 4; return;
}

/* FUN_100118c0 @ 0x12d718c0 (30 bytes, 11 insns) */
void f_12d718c0(void) {
  FTRACE(0x12d718c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d718c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d718c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d718c3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d718c5 call 0x12d66780 */
  push32(0x12d718cau); f_12d66780();
  /* 12d718ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d718cd call 0x12d718e0 */
  push32(0x12d718d2u); f_12d718e0();
  /* 12d718d2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d718d4 call 0x12d66820 */
  push32(0x12d718d9u); f_12d66820();
  /* 12d718d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d718dc pop ebp */
  EBP = (pop32());
  /* 12d718dd ret  */
  ESPCHK(0x12d718c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118e0 @ 0x12d718e0 (939 bytes, 266 insns) */
void f_12d718e0(void) {
  FTRACE(0x12d718e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d718e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d718e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d718e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d718e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d718ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d718ef call 0x12d66780 */
  push32(0x12d718f4u); f_12d66780();
  /* 12d718f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d718f7 mov dword ptr [0x12d7e720], 0 */
  w32((uint32_t)(0x12d7e720), (0x0u));
  /* 12d71901 mov dword ptr [0x12d7de58], 0xffffffff */
  w32((uint32_t)(0x12d7de58), (0xffffffffu));
  /* 12d7190b mov eax, dword ptr [0x12d7de58] */
  EAX = (r32((uint32_t)(0x12d7de58)));
  /* 12d71910 mov dword ptr [0x12d7de48], eax */
  w32((uint32_t)(0x12d7de48), (EAX));
  /* 12d71915 push 0x12d7a868 */
  push32((uint32_t)(0x12d7a868u));
  /* 12d7191a call 0x12d72760 */
  push32(0x12d7191fu); f_12d72760();
  /* 12d7191f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71922 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d71925 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71929 jne 0x12d71a63 */
  if (!C.zf) goto L_12d71a63;
  /* 12d7192f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d71931 call 0x12d66820 */
  push32(0x12d71936u); f_12d66820();
  /* 12d71936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71939 push 0x12d7e728 */
  push32((uint32_t)(0x12d7e728u));
  /* 12d7193e call dword ptr [0x12d80250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80250))), 0x12d71944u);
  /* 12d71944 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71947 je 0x12d71a5e */
  if (C.zf) goto L_12d71a5e;
  /* 12d7194d mov dword ptr [0x12d7e720], 1 */
  w32((uint32_t)(0x12d7e720), (0x1u));
  /* 12d71957 mov ecx, dword ptr [0x12d7e728] */
  ECX = (r32((uint32_t)(0x12d7e728)));
  /* 12d7195d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d71960 mov dword ptr [0x12d7ddb0], ecx */
  w32((uint32_t)(0x12d7ddb0), (ECX));
  /* 12d71966 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71968 mov dx, word ptr [0x12d7e76e] */
  DX = (r16((uint32_t)(0x12d7e76e)));
  /* 12d7196f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d71971 je 0x12d71989 */
  if (C.zf) goto L_12d71989;
  /* 12d71973 mov eax, dword ptr [0x12d7e77c] */
  EAX = (r32((uint32_t)(0x12d7e77c)));
  /* 12d71978 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d7197b mov ecx, dword ptr [0x12d7ddb0] */
  ECX = (r32((uint32_t)(0x12d7ddb0)));
  /* 12d71981 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71983 mov dword ptr [0x12d7ddb0], ecx */
  w32((uint32_t)(0x12d7ddb0), (ECX));
L_12d71989:;
  /* 12d71989 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d7198b mov dx, word ptr [0x12d7e7c2] */
  DX = (r16((uint32_t)(0x12d7e7c2)));
  /* 12d71992 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d71994 je 0x12d719be */
  if (C.zf) goto L_12d719be;
  /* 12d71996 cmp dword ptr [0x12d7e7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7199d je 0x12d719be */
  if (C.zf) goto L_12d719be;
  /* 12d7199f mov dword ptr [0x12d7ddb4], 1 */
  w32((uint32_t)(0x12d7ddb4), (0x1u));
  /* 12d719a9 mov eax, dword ptr [0x12d7e7d0] */
  EAX = (r32((uint32_t)(0x12d7e7d0)));
  /* 12d719ae sub eax, dword ptr [0x12d7e77c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7e77c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d719b4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d719b7 mov dword ptr [0x12d7ddb8], eax */
  w32((uint32_t)(0x12d7ddb8), (EAX));
  /* 12d719bc jmp 0x12d719d2 */
  goto L_12d719d2;
L_12d719be:;
  /* 12d719be mov dword ptr [0x12d7ddb4], 0 */
  w32((uint32_t)(0x12d7ddb4), (0x0u));
  /* 12d719c8 mov dword ptr [0x12d7ddb8], 0 */
  w32((uint32_t)(0x12d7ddb8), (0x0u));
L_12d719d2:;
  /* 12d719d2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12d719d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d719d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d719d8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12d719da mov edx, dword ptr [0x12d7de3c] */
  EDX = (r32((uint32_t)(0x12d7de3c)));
  /* 12d719e0 push edx */
  push32((uint32_t)(EDX));
  /* 12d719e1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d719e3 push 0x12d7e72c */
  push32((uint32_t)(0x12d7e72cu));
  /* 12d719e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d719ed mov eax, dword ptr [0x12d7e690] */
  EAX = (r32((uint32_t)(0x12d7e690)));
  /* 12d719f2 push eax */
  push32((uint32_t)(EAX));
  /* 12d719f3 call dword ptr [0x12d802fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802fc))), 0x12d719f9u);
  /* 12d719f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d719fb je 0x12d71a0f */
  if (C.zf) goto L_12d71a0f;
  /* 12d719fd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71a01 jne 0x12d71a0f */
  if (!C.zf) goto L_12d71a0f;
  /* 12d71a03 mov ecx, dword ptr [0x12d7de3c] */
  ECX = (r32((uint32_t)(0x12d7de3c)));
  /* 12d71a09 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12d71a0d jmp 0x12d71a18 */
  goto L_12d71a18;
L_12d71a0f:;
  /* 12d71a0f mov edx, dword ptr [0x12d7de3c] */
  EDX = (r32((uint32_t)(0x12d7de3c)));
  /* 12d71a15 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12d71a18:;
  /* 12d71a18 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12d71a1b push eax */
  push32((uint32_t)(EAX));
  /* 12d71a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71a1e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12d71a20 mov ecx, dword ptr [0x12d7de40] */
  ECX = (r32((uint32_t)(0x12d7de40)));
  /* 12d71a26 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71a27 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d71a29 push 0x12d7e780 */
  push32((uint32_t)(0x12d7e780u));
  /* 12d71a2e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d71a33 mov edx, dword ptr [0x12d7e690] */
  EDX = (r32((uint32_t)(0x12d7e690)));
  /* 12d71a39 push edx */
  push32((uint32_t)(EDX));
  /* 12d71a3a call dword ptr [0x12d802fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802fc))), 0x12d71a40u);
  /* 12d71a40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d71a42 je 0x12d71a55 */
  if (C.zf) goto L_12d71a55;
  /* 12d71a44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71a48 jne 0x12d71a55 */
  if (!C.zf) goto L_12d71a55;
  /* 12d71a4a mov eax, dword ptr [0x12d7de40] */
  EAX = (r32((uint32_t)(0x12d7de40)));
  /* 12d71a4f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12d71a53 jmp 0x12d71a5e */
  goto L_12d71a5e;
L_12d71a55:;
  /* 12d71a55 mov ecx, dword ptr [0x12d7de40] */
  ECX = (r32((uint32_t)(0x12d7de40)));
  /* 12d71a5b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12d71a5e:;
  /* 12d71a5e jmp 0x12d71c87 */
  goto L_12d71c87;
L_12d71a63:;
  /* 12d71a63 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71a66 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d71a69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d71a6b je 0x12d71a8d */
  if (C.zf) goto L_12d71a8d;
  /* 12d71a6d cmp dword ptr [0x12d7e7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71a74 je 0x12d71a9c */
  if (C.zf) goto L_12d71a9c;
  /* 12d71a76 mov ecx, dword ptr [0x12d7e7d4] */
  ECX = (r32((uint32_t)(0x12d7e7d4)));
  /* 12d71a7c push ecx */
  push32((uint32_t)(ECX));
  /* 12d71a7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71a80 push edx */
  push32((uint32_t)(EDX));
  /* 12d71a81 call 0x12d6ea10 */
  push32(0x12d71a86u); f_12d6ea10();
  /* 12d71a86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71a89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d71a8b jne 0x12d71a9c */
  if (!C.zf) goto L_12d71a9c;
L_12d71a8d:;
  /* 12d71a8d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d71a8f call 0x12d66820 */
  push32(0x12d71a94u); f_12d66820();
  /* 12d71a94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71a97 jmp 0x12d71c87 */
  goto L_12d71c87;
L_12d71a9c:;
  /* 12d71a9c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d71a9e mov eax, dword ptr [0x12d7e7d4] */
  EAX = (r32((uint32_t)(0x12d7e7d4)));
  /* 12d71aa3 push eax */
  push32((uint32_t)(EAX));
  /* 12d71aa4 call 0x12d63810 */
  push32(0x12d71aa9u); f_12d63810();
  /* 12d71aa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71aac push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12d71ab1 push 0x12d7a860 */
  push32((uint32_t)(0x12d7a860u));
  /* 12d71ab6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d71ab8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71abb push ecx */
  push32((uint32_t)(ECX));
  /* 12d71abc call 0x12d65bb0 */
  push32(0x12d71ac1u); f_12d65bb0();
  /* 12d71ac1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71ac4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71ac7 push eax */
  push32((uint32_t)(EAX));
  /* 12d71ac8 call 0x12d62d80 */
  push32(0x12d71acdu); f_12d62d80();
  /* 12d71acd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71ad0 mov dword ptr [0x12d7e7d4], eax */
  w32((uint32_t)(0x12d7e7d4), (EAX));
  /* 12d71ad5 cmp dword ptr [0x12d7e7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71adc jne 0x12d71aed */
  if (!C.zf) goto L_12d71aed;
  /* 12d71ade push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d71ae0 call 0x12d66820 */
  push32(0x12d71ae5u); f_12d66820();
  /* 12d71ae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71ae8 jmp 0x12d71c87 */
  goto L_12d71c87;
L_12d71aed:;
  /* 12d71aed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71af0 push edx */
  push32((uint32_t)(EDX));
  /* 12d71af1 mov eax, dword ptr [0x12d7e7d4] */
  EAX = (r32((uint32_t)(0x12d7e7d4)));
  /* 12d71af6 push eax */
  push32((uint32_t)(EAX));
  /* 12d71af7 call 0x12d65d30 */
  push32(0x12d71afcu); f_12d65d30();
  /* 12d71afc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71aff push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d71b01 call 0x12d66820 */
  push32(0x12d71b06u); f_12d66820();
  /* 12d71b06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71b09 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d71b0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71b0e push ecx */
  push32((uint32_t)(ECX));
  /* 12d71b0f mov edx, dword ptr [0x12d7de3c] */
  EDX = (r32((uint32_t)(0x12d7de3c)));
  /* 12d71b15 push edx */
  push32((uint32_t)(EDX));
  /* 12d71b16 call 0x12d665a0 */
  push32(0x12d71b1bu); f_12d665a0();
  /* 12d71b1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71b1e mov eax, dword ptr [0x12d7de3c] */
  EAX = (r32((uint32_t)(0x12d7de3c)));
  /* 12d71b23 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12d71b27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71b2a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71b2d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d71b30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71b33 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d71b36 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71b39 jne 0x12d71b4d */
  if (!C.zf) goto L_12d71b4d;
  /* 12d71b3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d71b3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71b41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d71b44 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71b47 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71b4a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d71b4d:;
  /* 12d71b4d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71b50 push eax */
  push32((uint32_t)(EAX));
  /* 12d71b51 call 0x12d71630 */
  push32(0x12d71b56u); f_12d71630();
  /* 12d71b56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71b59 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d71b5f mov dword ptr [0x12d7ddb0], eax */
  w32((uint32_t)(0x12d7ddb0), (EAX));
L_12d71b64:;
  /* 12d71b64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71b67 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d71b6a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71b6d je 0x12d71b85 */
  if (C.zf) goto L_12d71b85;
  /* 12d71b6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71b72 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d71b75 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71b78 jl 0x12d71b90 */
  if ((C.sf!=C.of)) goto L_12d71b90;
  /* 12d71b7a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71b7d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d71b80 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71b83 jg 0x12d71b90 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d71b90;
L_12d71b85:;
  /* 12d71b85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71b88 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71b8b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d71b8e jmp 0x12d71b64 */
  goto L_12d71b64;
L_12d71b90:;
  /* 12d71b90 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71b93 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d71b96 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71b99 jne 0x12d71c35 */
  if (!C.zf) goto L_12d71c35;
  /* 12d71b9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71ba2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71ba5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d71ba8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71bab push edx */
  push32((uint32_t)(EDX));
  /* 12d71bac call 0x12d71630 */
  push32(0x12d71bb1u); f_12d71630();
  /* 12d71bb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71bb4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d71bb7 mov ecx, dword ptr [0x12d7ddb0] */
  ECX = (r32((uint32_t)(0x12d7ddb0)));
  /* 12d71bbd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71bbf mov dword ptr [0x12d7ddb0], ecx */
  w32((uint32_t)(0x12d7ddb0), (ECX));
L_12d71bc5:;
  /* 12d71bc5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71bc8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d71bcb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71bce jl 0x12d71be6 */
  if ((C.sf!=C.of)) goto L_12d71be6;
  /* 12d71bd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71bd3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d71bd6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71bd9 jg 0x12d71be6 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d71be6;
  /* 12d71bdb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71bde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71be1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d71be4 jmp 0x12d71bc5 */
  goto L_12d71bc5;
L_12d71be6:;
  /* 12d71be6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71be9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d71bec cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71bef jne 0x12d71c35 */
  if (!C.zf) goto L_12d71c35;
  /* 12d71bf1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71bf4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71bf7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d71bfa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71bfd push ecx */
  push32((uint32_t)(ECX));
  /* 12d71bfe call 0x12d71630 */
  push32(0x12d71c03u); f_12d71630();
  /* 12d71c03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71c06 mov edx, dword ptr [0x12d7ddb0] */
  EDX = (r32((uint32_t)(0x12d7ddb0)));
  /* 12d71c0c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71c0e mov dword ptr [0x12d7ddb0], edx */
  w32((uint32_t)(0x12d7ddb0), (EDX));
L_12d71c14:;
  /* 12d71c14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71c17 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d71c1a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71c1d jl 0x12d71c35 */
  if ((C.sf!=C.of)) goto L_12d71c35;
  /* 12d71c1f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71c22 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d71c25 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71c28 jg 0x12d71c35 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d71c35;
  /* 12d71c2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71c2d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71c30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d71c33 jmp 0x12d71c14 */
  goto L_12d71c14;
L_12d71c35:;
  /* 12d71c35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71c39 je 0x12d71c49 */
  if (C.zf) goto L_12d71c49;
  /* 12d71c3b mov edx, dword ptr [0x12d7ddb0] */
  EDX = (r32((uint32_t)(0x12d7ddb0)));
  /* 12d71c41 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d71c43 mov dword ptr [0x12d7ddb0], edx */
  w32((uint32_t)(0x12d7ddb0), (EDX));
L_12d71c49:;
  /* 12d71c49 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71c4c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d71c4f mov dword ptr [0x12d7ddb4], ecx */
  w32((uint32_t)(0x12d7ddb4), (ECX));
  /* 12d71c55 cmp dword ptr [0x12d7ddb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7ddb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71c5c je 0x12d71c7e */
  if (C.zf) goto L_12d71c7e;
  /* 12d71c5e push 3 */
  push32((uint32_t)(0x3u));
  /* 12d71c60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71c63 push edx */
  push32((uint32_t)(EDX));
  /* 12d71c64 mov eax, dword ptr [0x12d7de40] */
  EAX = (r32((uint32_t)(0x12d7de40)));
  /* 12d71c69 push eax */
  push32((uint32_t)(EAX));
  /* 12d71c6a call 0x12d665a0 */
  push32(0x12d71c6fu); f_12d665a0();
  /* 12d71c6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71c72 mov ecx, dword ptr [0x12d7de40] */
  ECX = (r32((uint32_t)(0x12d7de40)));
  /* 12d71c78 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12d71c7c jmp 0x12d71c87 */
  goto L_12d71c87;
L_12d71c7e:;
  /* 12d71c7e mov edx, dword ptr [0x12d7de40] */
  EDX = (r32((uint32_t)(0x12d7de40)));
  /* 12d71c84 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12d71c87:;
  /* 12d71c87 mov esp, ebp */
  ESP = (EBP);
  /* 12d71c89 pop ebp */
  EBP = (pop32());
  /* 12d71c8a ret  */
  ESPCHK(0x12d718e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c90 @ 0x12d71c90 (46 bytes, 18 insns) */
void f_12d71c90(void) {
  FTRACE(0x12d71c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d71c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d71c91 mov ebp, esp */
  EBP = (ESP);
  /* 12d71c93 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71c94 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d71c96 call 0x12d66780 */
  push32(0x12d71c9bu); f_12d66780();
  /* 12d71c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71c9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71ca1 push eax */
  push32((uint32_t)(EAX));
  /* 12d71ca2 call 0x12d71cc0 */
  push32(0x12d71ca7u); f_12d71cc0();
  /* 12d71ca7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71caa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d71cad push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d71caf call 0x12d66820 */
  push32(0x12d71cb4u); f_12d66820();
  /* 12d71cb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71cb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d71cba mov esp, ebp */
  ESP = (EBP);
  /* 12d71cbc pop ebp */
  EBP = (pop32());
  /* 12d71cbd ret  */
  ESPCHK(0x12d71c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cc0 @ 0x12d71cc0 (762 bytes, 246 insns) */
void f_12d71cc0(void) {
  FTRACE(0x12d71cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d71cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d71cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12d71cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71cc4 cmp dword ptr [0x12d7ddb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7ddb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71ccb jne 0x12d71cd4 */
  if (!C.zf) goto L_12d71cd4;
  /* 12d71ccd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71ccf jmp 0x12d71fb6 */
  goto L_12d71fb6;
L_12d71cd4:;
  /* 12d71cd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71cd7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d71cda cmp ecx, dword ptr [0x12d7de48] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7de48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71ce0 jne 0x12d71cf4 */
  if (!C.zf) goto L_12d71cf4;
  /* 12d71ce2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71ce5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d71ce8 cmp eax, dword ptr [0x12d7de58] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7de58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71cee je 0x12d71ebb */
  if (C.zf) goto L_12d71ebb;
L_12d71cf4:;
  /* 12d71cf4 cmp dword ptr [0x12d7e720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71cfb je 0x12d71e75 */
  if (C.zf) goto L_12d71e75;
  /* 12d71d01 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d71d03 mov cx, word ptr [0x12d7e7c0] */
  CX = (r16((uint32_t)(0x12d7e7c0)));
  /* 12d71d0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d71d0c jne 0x12d71d69 */
  if (!C.zf) goto L_12d71d69;
  /* 12d71d0e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71d10 mov dx, word ptr [0x12d7e7ce] */
  DX = (r16((uint32_t)(0x12d7e7ce)));
  /* 12d71d17 push edx */
  push32((uint32_t)(EDX));
  /* 12d71d18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71d1a mov ax, word ptr [0x12d7e7cc] */
  AX = (r16((uint32_t)(0x12d7e7cc)));
  /* 12d71d20 push eax */
  push32((uint32_t)(EAX));
  /* 12d71d21 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d71d23 mov cx, word ptr [0x12d7e7ca] */
  CX = (r16((uint32_t)(0x12d7e7ca)));
  /* 12d71d2a push ecx */
  push32((uint32_t)(ECX));
  /* 12d71d2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71d2d mov dx, word ptr [0x12d7e7c8] */
  DX = (r16((uint32_t)(0x12d7e7c8)));
  /* 12d71d34 push edx */
  push32((uint32_t)(EDX));
  /* 12d71d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71d37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71d39 mov ax, word ptr [0x12d7e7c4] */
  AX = (r16((uint32_t)(0x12d7e7c4)));
  /* 12d71d3f push eax */
  push32((uint32_t)(EAX));
  /* 12d71d40 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d71d42 mov cx, word ptr [0x12d7e7c6] */
  CX = (r16((uint32_t)(0x12d7e7c6)));
  /* 12d71d49 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71d4a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71d4c mov dx, word ptr [0x12d7e7c2] */
  DX = (r16((uint32_t)(0x12d7e7c2)));
  /* 12d71d53 push edx */
  push32((uint32_t)(EDX));
  /* 12d71d54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71d57 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d71d5a push ecx */
  push32((uint32_t)(ECX));
  /* 12d71d5b push 1 */
  push32((uint32_t)(0x1u));
  /* 12d71d5d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d71d5f call 0x12d71fc0 */
  push32(0x12d71d64u); f_12d71fc0();
  /* 12d71d64 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71d67 jmp 0x12d71dba */
  goto L_12d71dba;
L_12d71d69:;
  /* 12d71d69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71d6b mov dx, word ptr [0x12d7e7ce] */
  DX = (r16((uint32_t)(0x12d7e7ce)));
  /* 12d71d72 push edx */
  push32((uint32_t)(EDX));
  /* 12d71d73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71d75 mov ax, word ptr [0x12d7e7cc] */
  AX = (r16((uint32_t)(0x12d7e7cc)));
  /* 12d71d7b push eax */
  push32((uint32_t)(EAX));
  /* 12d71d7c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d71d7e mov cx, word ptr [0x12d7e7ca] */
  CX = (r16((uint32_t)(0x12d7e7ca)));
  /* 12d71d85 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71d86 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71d88 mov dx, word ptr [0x12d7e7c8] */
  DX = (r16((uint32_t)(0x12d7e7c8)));
  /* 12d71d8f push edx */
  push32((uint32_t)(EDX));
  /* 12d71d90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71d92 mov ax, word ptr [0x12d7e7c6] */
  AX = (r16((uint32_t)(0x12d7e7c6)));
  /* 12d71d98 push eax */
  push32((uint32_t)(EAX));
  /* 12d71d99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71d9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71d9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d71d9f mov cx, word ptr [0x12d7e7c2] */
  CX = (r16((uint32_t)(0x12d7e7c2)));
  /* 12d71da6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71da7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71daa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d71dad push eax */
  push32((uint32_t)(EAX));
  /* 12d71dae push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71db0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d71db2 call 0x12d71fc0 */
  push32(0x12d71db7u); f_12d71fc0();
  /* 12d71db7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d71dba:;
  /* 12d71dba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d71dbc mov cx, word ptr [0x12d7e76c] */
  CX = (r16((uint32_t)(0x12d7e76c)));
  /* 12d71dc3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d71dc5 jne 0x12d71e22 */
  if (!C.zf) goto L_12d71e22;
  /* 12d71dc7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71dc9 mov dx, word ptr [0x12d7e77a] */
  DX = (r16((uint32_t)(0x12d7e77a)));
  /* 12d71dd0 push edx */
  push32((uint32_t)(EDX));
  /* 12d71dd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71dd3 mov ax, word ptr [0x12d7e778] */
  AX = (r16((uint32_t)(0x12d7e778)));
  /* 12d71dd9 push eax */
  push32((uint32_t)(EAX));
  /* 12d71dda xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d71ddc mov cx, word ptr [0x12d7e776] */
  CX = (r16((uint32_t)(0x12d7e776)));
  /* 12d71de3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71de4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71de6 mov dx, word ptr [0x12d7e774] */
  DX = (r16((uint32_t)(0x12d7e774)));
  /* 12d71ded push edx */
  push32((uint32_t)(EDX));
  /* 12d71dee push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71df0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71df2 mov ax, word ptr [0x12d7e770] */
  AX = (r16((uint32_t)(0x12d7e770)));
  /* 12d71df8 push eax */
  push32((uint32_t)(EAX));
  /* 12d71df9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d71dfb mov cx, word ptr [0x12d7e772] */
  CX = (r16((uint32_t)(0x12d7e772)));
  /* 12d71e02 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71e03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71e05 mov dx, word ptr [0x12d7e76e] */
  DX = (r16((uint32_t)(0x12d7e76e)));
  /* 12d71e0c push edx */
  push32((uint32_t)(EDX));
  /* 12d71e0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71e10 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d71e13 push ecx */
  push32((uint32_t)(ECX));
  /* 12d71e14 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d71e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71e18 call 0x12d71fc0 */
  push32(0x12d71e1du); f_12d71fc0();
  /* 12d71e1d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71e20 jmp 0x12d71e73 */
  goto L_12d71e73;
L_12d71e22:;
  /* 12d71e22 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71e24 mov dx, word ptr [0x12d7e77a] */
  DX = (r16((uint32_t)(0x12d7e77a)));
  /* 12d71e2b push edx */
  push32((uint32_t)(EDX));
  /* 12d71e2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71e2e mov ax, word ptr [0x12d7e778] */
  AX = (r16((uint32_t)(0x12d7e778)));
  /* 12d71e34 push eax */
  push32((uint32_t)(EAX));
  /* 12d71e35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d71e37 mov cx, word ptr [0x12d7e776] */
  CX = (r16((uint32_t)(0x12d7e776)));
  /* 12d71e3e push ecx */
  push32((uint32_t)(ECX));
  /* 12d71e3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d71e41 mov dx, word ptr [0x12d7e774] */
  DX = (r16((uint32_t)(0x12d7e774)));
  /* 12d71e48 push edx */
  push32((uint32_t)(EDX));
  /* 12d71e49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71e4b mov ax, word ptr [0x12d7e772] */
  AX = (r16((uint32_t)(0x12d7e772)));
  /* 12d71e51 push eax */
  push32((uint32_t)(EAX));
  /* 12d71e52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71e56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d71e58 mov cx, word ptr [0x12d7e76e] */
  CX = (r16((uint32_t)(0x12d7e76e)));
  /* 12d71e5f push ecx */
  push32((uint32_t)(ECX));
  /* 12d71e60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71e63 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d71e66 push eax */
  push32((uint32_t)(EAX));
  /* 12d71e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71e69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71e6b call 0x12d71fc0 */
  push32(0x12d71e70u); f_12d71fc0();
  /* 12d71e70 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d71e73:;
  /* 12d71e73 jmp 0x12d71ebb */
  goto L_12d71ebb;
L_12d71e75:;
  /* 12d71e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71e7b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d71e7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71e7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71e81 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d71e83 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d71e85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71e88 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d71e8b push edx */
  push32((uint32_t)(EDX));
  /* 12d71e8c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d71e8e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d71e90 call 0x12d71fc0 */
  push32(0x12d71e95u); f_12d71fc0();
  /* 12d71e95 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71e9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71e9e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d71ea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71ea4 push 5 */
  push32((uint32_t)(0x5u));
  /* 12d71ea6 push 0xa */
  push32((uint32_t)(0xau));
  /* 12d71ea8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71eab mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d71eae push ecx */
  push32((uint32_t)(ECX));
  /* 12d71eaf push 1 */
  push32((uint32_t)(0x1u));
  /* 12d71eb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d71eb3 call 0x12d71fc0 */
  push32(0x12d71eb8u); f_12d71fc0();
  /* 12d71eb8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d71ebb:;
  /* 12d71ebb mov edx, dword ptr [0x12d7de4c] */
  EDX = (r32((uint32_t)(0x12d7de4c)));
  /* 12d71ec1 cmp edx, dword ptr [0x12d7de5c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d7de5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71ec7 jge 0x12d71f14 */
  if ((C.sf==C.of)) goto L_12d71f14;
  /* 12d71ec9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71ecc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d71ecf cmp ecx, dword ptr [0x12d7de4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7de4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71ed5 jl 0x12d71ee5 */
  if ((C.sf!=C.of)) goto L_12d71ee5;
  /* 12d71ed7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71eda mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d71edd cmp eax, dword ptr [0x12d7de5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7de5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71ee3 jle 0x12d71eec */
  if ((C.zf||C.sf!=C.of)) goto L_12d71eec;
L_12d71ee5:;
  /* 12d71ee5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71ee7 jmp 0x12d71fb6 */
  goto L_12d71fb6;
L_12d71eec:;
  /* 12d71eec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71eef mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d71ef2 cmp edx, dword ptr [0x12d7de4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d7de4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71ef8 jle 0x12d71f12 */
  if ((C.zf||C.sf!=C.of)) goto L_12d71f12;
  /* 12d71efa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71efd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d71f00 cmp ecx, dword ptr [0x12d7de5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7de5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71f06 jge 0x12d71f12 */
  if ((C.sf==C.of)) goto L_12d71f12;
  /* 12d71f08 mov eax, 1 */
  EAX = (0x1u);
  /* 12d71f0d jmp 0x12d71fb6 */
  goto L_12d71fb6;
L_12d71f12:;
  /* 12d71f12 jmp 0x12d71f57 */
  goto L_12d71f57;
L_12d71f14:;
  /* 12d71f14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71f17 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d71f1a cmp eax, dword ptr [0x12d7de5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7de5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71f20 jl 0x12d71f30 */
  if ((C.sf!=C.of)) goto L_12d71f30;
  /* 12d71f22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71f25 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d71f28 cmp edx, dword ptr [0x12d7de4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d7de4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71f2e jle 0x12d71f37 */
  if ((C.zf||C.sf!=C.of)) goto L_12d71f37;
L_12d71f30:;
  /* 12d71f30 mov eax, 1 */
  EAX = (0x1u);
  /* 12d71f35 jmp 0x12d71fb6 */
  goto L_12d71fb6;
L_12d71f37:;
  /* 12d71f37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71f3a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d71f3d cmp ecx, dword ptr [0x12d7de5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7de5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71f43 jle 0x12d71f57 */
  if ((C.zf||C.sf!=C.of)) goto L_12d71f57;
  /* 12d71f45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71f48 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d71f4b cmp eax, dword ptr [0x12d7de4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7de4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71f51 jge 0x12d71f57 */
  if ((C.sf==C.of)) goto L_12d71f57;
  /* 12d71f53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71f55 jmp 0x12d71fb6 */
  goto L_12d71fb6;
L_12d71f57:;
  /* 12d71f57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71f5a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d71f5d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d71f60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71f63 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d71f65 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71f67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71f6a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d71f6d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d71f73 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71f75 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d71f7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d71f7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d71f81 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d71f84 cmp edx, dword ptr [0x12d7de4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d7de4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71f8a jne 0x12d71fa2 */
  if (!C.zf) goto L_12d71fa2;
  /* 12d71f8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d71f8f cmp eax, dword ptr [0x12d7de50] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7de50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71f95 jl 0x12d71f9e */
  if ((C.sf!=C.of)) goto L_12d71f9e;
  /* 12d71f97 mov eax, 1 */
  EAX = (0x1u);
  /* 12d71f9c jmp 0x12d71fb6 */
  goto L_12d71fb6;
L_12d71f9e:;
  /* 12d71f9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d71fa0 jmp 0x12d71fb6 */
  goto L_12d71fb6;
L_12d71fa2:;
  /* 12d71fa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d71fa5 cmp ecx, dword ptr [0x12d7de60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7de60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71fab jge 0x12d71fb4 */
  if ((C.sf==C.of)) goto L_12d71fb4;
  /* 12d71fad mov eax, 1 */
  EAX = (0x1u);
  /* 12d71fb2 jmp 0x12d71fb6 */
  goto L_12d71fb6;
L_12d71fb4:;
  /* 12d71fb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d71fb6:;
  /* 12d71fb6 mov esp, ebp */
  ESP = (EBP);
  /* 12d71fb8 pop ebp */
  EBP = (pop32());
  /* 12d71fb9 ret  */
  ESPCHK(0x12d71cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fc0 @ 0x12d71fc0 (504 bytes, 145 insns) */
void f_12d71fc0(void) {
  FTRACE(0x12d71fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d71fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d71fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12d71fc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d71fc6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d71fca jne 0x12d7209c */
  if (!C.zf) goto L_12d7209c;
  /* 12d71fd0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d71fd3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d71fd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d71fd8 jne 0x12d71fe9 */
  if (!C.zf) goto L_12d71fe9;
  /* 12d71fda mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d71fdd mov edx, dword ptr [ecx*4 + 0x12d7de6c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d7de6c)));
  /* 12d71fe4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d71fe7 jmp 0x12d71ff6 */
  goto L_12d71ff6;
L_12d71fe9:;
  /* 12d71fe9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d71fec mov ecx, dword ptr [eax*4 + 0x12d7dea0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d7dea0)));
  /* 12d71ff3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d71ff6:;
  /* 12d71ff6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d71ff9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d71ffc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d71fff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d72002 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d72005 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d7200b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d7200e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72010 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d72013 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d72016 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12d72019 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12d7201d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d7201e mov ecx, 7 */
  ECX = (0x7u);
  /* 12d72023 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d72025 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d72028 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d7202b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7202e jg 0x12d72049 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d72049;
  /* 12d72030 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d72033 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d72036 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d72039 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d7203c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d7203f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72042 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72044 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d72047 jmp 0x12d7205d */
  goto L_12d7205d;
L_12d72049:;
  /* 12d72049 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d7204c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d7204f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d72052 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d72055 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72058 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7205a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d7205d:;
  /* 12d7205d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72061 jne 0x12d7209a */
  if (!C.zf) goto L_12d7209a;
  /* 12d72063 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d72066 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12d72069 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d7206b jne 0x12d7207c */
  if (!C.zf) goto L_12d7207c;
  /* 12d7206d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d72070 mov eax, dword ptr [edx*4 + 0x12d7de70] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d7de70)));
  /* 12d72077 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d7207a jmp 0x12d72089 */
  goto L_12d72089;
L_12d7207c:;
  /* 12d7207c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d7207f mov edx, dword ptr [ecx*4 + 0x12d7dea4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d7dea4)));
  /* 12d72086 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d72089:;
  /* 12d72089 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d7208c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7208f jle 0x12d7209a */
  if ((C.zf||C.sf!=C.of)) goto L_12d7209a;
  /* 12d72091 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72094 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d72097 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d7209a:;
  /* 12d7209a jmp 0x12d720d1 */
  goto L_12d720d1;
L_12d7209c:;
  /* 12d7209c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7209f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d720a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d720a4 jne 0x12d720b5 */
  if (!C.zf) goto L_12d720b5;
  /* 12d720a6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d720a9 mov ecx, dword ptr [eax*4 + 0x12d7de6c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d7de6c)));
  /* 12d720b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d720b3 jmp 0x12d720c2 */
  goto L_12d720c2;
L_12d720b5:;
  /* 12d720b5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d720b8 mov eax, dword ptr [edx*4 + 0x12d7dea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d7dea0)));
  /* 12d720bf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12d720c2:;
  /* 12d720c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d720c5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d720c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d720cb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d720ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d720d1:;
  /* 12d720d1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d720d5 jne 0x12d72111 */
  if (!C.zf) goto L_12d72111;
  /* 12d720d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d720da mov dword ptr [0x12d7de4c], eax */
  w32((uint32_t)(0x12d7de4c), (EAX));
  /* 12d720df mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12d720e2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d720e5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12d720e8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d720ea imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d720ed mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12d720f0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d720f2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d720f8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12d720fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d720fd mov dword ptr [0x12d7de50], ecx */
  w32((uint32_t)(0x12d7de50), (ECX));
  /* 12d72103 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d72106 mov dword ptr [0x12d7de48], edx */
  w32((uint32_t)(0x12d7de48), (EDX));
  /* 12d7210c jmp 0x12d721b4 */
  goto L_12d721b4;
L_12d72111:;
  /* 12d72111 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72114 mov dword ptr [0x12d7de5c], eax */
  w32((uint32_t)(0x12d7de5c), (EAX));
  /* 12d72119 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12d7211c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d7211f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12d72122 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72124 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d72127 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12d7212a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7212c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d72132 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12d72135 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72137 mov dword ptr [0x12d7de60], ecx */
  w32((uint32_t)(0x12d7de60), (ECX));
  /* 12d7213d mov edx, dword ptr [0x12d7ddb8] */
  EDX = (r32((uint32_t)(0x12d7ddb8)));
  /* 12d72143 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d72149 mov eax, dword ptr [0x12d7de60] */
  EAX = (r32((uint32_t)(0x12d7de60)));
  /* 12d7214e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72150 mov dword ptr [0x12d7de60], eax */
  w32((uint32_t)(0x12d7de60), (EAX));
  /* 12d72155 cmp dword ptr [0x12d7de60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7de60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7215c jge 0x12d72181 */
  if ((C.sf==C.of)) goto L_12d72181;
  /* 12d7215e mov ecx, dword ptr [0x12d7de60] */
  ECX = (r32((uint32_t)(0x12d7de60)));
  /* 12d72164 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7216a mov dword ptr [0x12d7de60], ecx */
  w32((uint32_t)(0x12d7de60), (ECX));
  /* 12d72170 mov edx, dword ptr [0x12d7de5c] */
  EDX = (r32((uint32_t)(0x12d7de5c)));
  /* 12d72176 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d72179 mov dword ptr [0x12d7de5c], edx */
  w32((uint32_t)(0x12d7de5c), (EDX));
  /* 12d7217f jmp 0x12d721ab */
  goto L_12d721ab;
L_12d72181:;
  /* 12d72181 cmp dword ptr [0x12d7de60], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12d7de60))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7218b jl 0x12d721ab */
  if ((C.sf!=C.of)) goto L_12d721ab;
  /* 12d7218d mov eax, dword ptr [0x12d7de60] */
  EAX = (r32((uint32_t)(0x12d7de60)));
  /* 12d72192 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d72197 mov dword ptr [0x12d7de60], eax */
  w32((uint32_t)(0x12d7de60), (EAX));
  /* 12d7219c mov ecx, dword ptr [0x12d7de5c] */
  ECX = (r32((uint32_t)(0x12d7de5c)));
  /* 12d721a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d721a5 mov dword ptr [0x12d7de5c], ecx */
  w32((uint32_t)(0x12d7de5c), (ECX));
L_12d721ab:;
  /* 12d721ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d721ae mov dword ptr [0x12d7de58], edx */
  w32((uint32_t)(0x12d7de58), (EDX));
L_12d721b4:;
  /* 12d721b4 mov esp, ebp */
  ESP = (EBP);
  /* 12d721b6 pop ebp */
  EBP = (pop32());
  /* 12d721b7 ret  */
  ESPCHK(0x12d71fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100121c0 @ 0x12d721c0 (382 bytes, 135 insns) */
void f_12d721c0(void) {
  FTRACE(0x12d721c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d721c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d721c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d721c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d721c5 push 0x12d7a870 */
  push32((uint32_t)(0x12d7a870u));
  /* 12d721ca push 0x12d6be88 */
  push32((uint32_t)(0x12d6be88u));
  /* 12d721cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d721d5 push eax */
  push32((uint32_t)(EAX));
  /* 12d721d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d721dd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d721e0 push ebx */
  push32((uint32_t)(EBX));
  /* 12d721e1 push esi */
  push32((uint32_t)(ESI));
  /* 12d721e2 push edi */
  push32((uint32_t)(EDI));
  /* 12d721e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d721e6 cmp dword ptr [0x12d7e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d721ed jne 0x12d72232 */
  if (!C.zf) goto L_12d72232;
  /* 12d721ef push 0 */
  push32((uint32_t)(0x0u));
  /* 12d721f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d721f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d721f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d721f7 call dword ptr [0x12d8024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8024c))), 0x12d721fdu);
  /* 12d721fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d721ff je 0x12d7220d */
  if (C.zf) goto L_12d7220d;
  /* 12d72201 mov dword ptr [0x12d7e7dc], 1 */
  w32((uint32_t)(0x12d7e7dc), (0x1u));
  /* 12d7220b jmp 0x12d72232 */
  goto L_12d72232;
L_12d7220d:;
  /* 12d7220d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d7220f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72211 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d72213 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72215 call dword ptr [0x12d80264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80264))), 0x12d7221bu);
  /* 12d7221b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d7221d je 0x12d7222b */
  if (C.zf) goto L_12d7222b;
  /* 12d7221f mov dword ptr [0x12d7e7dc], 2 */
  w32((uint32_t)(0x12d7e7dc), (0x2u));
  /* 12d72229 jmp 0x12d72232 */
  goto L_12d72232;
L_12d7222b:;
  /* 12d7222b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d7222d jmp 0x12d72341 */
  goto L_12d72341;
L_12d72232:;
  /* 12d72232 cmp dword ptr [0x12d7e7dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72239 jne 0x12d72256 */
  if (!C.zf) goto L_12d72256;
  /* 12d7223b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d7223e push eax */
  push32((uint32_t)(EAX));
  /* 12d7223f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d72242 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72243 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d72246 push edx */
  push32((uint32_t)(EDX));
  /* 12d72247 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7224a push eax */
  push32((uint32_t)(EAX));
  /* 12d7224b call dword ptr [0x12d8024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8024c))), 0x12d72251u);
  /* 12d72251 jmp 0x12d72341 */
  goto L_12d72341;
L_12d72256:;
  /* 12d72256 cmp dword ptr [0x12d7e7dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7225d jne 0x12d7233f */
  if (!C.zf) goto L_12d7233f;
  /* 12d72263 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72267 jne 0x12d72272 */
  if (!C.zf) goto L_12d72272;
  /* 12d72269 mov ecx, dword ptr [0x12d7e690] */
  ECX = (r32((uint32_t)(0x12d7e690)));
  /* 12d7226f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12d72272:;
  /* 12d72272 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72274 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72276 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d72279 push edx */
  push32((uint32_t)(EDX));
  /* 12d7227a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7227d push eax */
  push32((uint32_t)(EAX));
  /* 12d7227e call dword ptr [0x12d80264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80264))), 0x12d72284u);
  /* 12d72284 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d72287 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7228b jne 0x12d72294 */
  if (!C.zf) goto L_12d72294;
  /* 12d7228d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d7228f jmp 0x12d72341 */
  goto L_12d72341;
L_12d72294:;
  /* 12d72294 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d7229b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d7229e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d722a1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d722a3 call 0x12d65f20 */
  push32(0x12d722a8u); f_12d65f20();
  /* 12d722a8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12d722ab mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d722ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d722b1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d722b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d722bb jmp 0x12d722d4 */
  goto L_12d722d4;
  /* 12d722bd mov eax, 1 */
  EAX = (0x1u);
  /* 12d722c2 ret  */
  ESPCHK(0x12d721c0u, _esp0);
  ESP += 4; return;
  /* 12d722c3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d722c6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d722cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d722d4:;
  /* 12d722d4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d722d8 jne 0x12d722de */
  if (!C.zf) goto L_12d722de;
  /* 12d722da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d722dc jmp 0x12d72341 */
  goto L_12d72341;
L_12d722de:;
  /* 12d722de mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d722e1 push edx */
  push32((uint32_t)(EDX));
  /* 12d722e2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d722e5 push eax */
  push32((uint32_t)(EAX));
  /* 12d722e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d722e9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d722ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d722ed push edx */
  push32((uint32_t)(EDX));
  /* 12d722ee call dword ptr [0x12d80264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80264))), 0x12d722f4u);
  /* 12d722f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d722f6 jne 0x12d722fc */
  if (!C.zf) goto L_12d722fc;
  /* 12d722f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d722fa jmp 0x12d72341 */
  goto L_12d72341;
L_12d722fc:;
  /* 12d722fc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72300 jne 0x12d7231d */
  if (!C.zf) goto L_12d7231d;
  /* 12d72302 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72304 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72306 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d72308 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d7230b push eax */
  push32((uint32_t)(EAX));
  /* 12d7230c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d7230e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d72311 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72312 call dword ptr [0x12d80348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80348))), 0x12d72318u);
  /* 12d72318 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d7231b jmp 0x12d7233a */
  goto L_12d7233a;
L_12d7231d:;
  /* 12d7231d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d72320 push edx */
  push32((uint32_t)(EDX));
  /* 12d72321 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d72324 push eax */
  push32((uint32_t)(EAX));
  /* 12d72325 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d72327 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d7232a push ecx */
  push32((uint32_t)(ECX));
  /* 12d7232b push 1 */
  push32((uint32_t)(0x1u));
  /* 12d7232d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d72330 push edx */
  push32((uint32_t)(EDX));
  /* 12d72331 call dword ptr [0x12d80348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80348))), 0x12d72337u);
  /* 12d72337 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d7233a:;
  /* 12d7233a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d7233d jmp 0x12d72341 */
  goto L_12d72341;
L_12d7233f:;
  /* 12d7233f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d72341:;
  /* 12d72341 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12d72344 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d72347 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d7234e pop edi */
  EDI = (pop32());
  /* 12d7234f pop esi */
  ESI = (pop32());
  /* 12d72350 pop ebx */
  EBX = (pop32());
  /* 12d72351 mov esp, ebp */
  ESP = (EBP);
  /* 12d72353 pop ebp */
  EBP = (pop32());
  /* 12d72354 ret  */
  ESPCHK(0x12d721c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012360 @ 0x12d72360 (398 bytes, 140 insns) */
void f_12d72360(void) {
  FTRACE(0x12d72360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d72360 push ebp */
  push32((uint32_t)(EBP));
  /* 12d72361 mov ebp, esp */
  EBP = (ESP);
  /* 12d72363 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d72365 push 0x12d7a880 */
  push32((uint32_t)(0x12d7a880u));
  /* 12d7236a push 0x12d6be88 */
  push32((uint32_t)(0x12d6be88u));
  /* 12d7236f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d72375 push eax */
  push32((uint32_t)(EAX));
  /* 12d72376 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d7237d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72380 push ebx */
  push32((uint32_t)(EBX));
  /* 12d72381 push esi */
  push32((uint32_t)(ESI));
  /* 12d72382 push edi */
  push32((uint32_t)(EDI));
  /* 12d72383 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d72386 cmp dword ptr [0x12d7e7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7238d jne 0x12d723d2 */
  if (!C.zf) goto L_12d723d2;
  /* 12d7238f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72391 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72393 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d72395 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72397 call dword ptr [0x12d8024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8024c))), 0x12d7239du);
  /* 12d7239d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d7239f je 0x12d723ad */
  if (C.zf) goto L_12d723ad;
  /* 12d723a1 mov dword ptr [0x12d7e7e0], 1 */
  w32((uint32_t)(0x12d7e7e0), (0x1u));
  /* 12d723ab jmp 0x12d723d2 */
  goto L_12d723d2;
L_12d723ad:;
  /* 12d723ad push 0 */
  push32((uint32_t)(0x0u));
  /* 12d723af push 0 */
  push32((uint32_t)(0x0u));
  /* 12d723b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d723b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d723b5 call dword ptr [0x12d80264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80264))), 0x12d723bbu);
  /* 12d723bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d723bd je 0x12d723cb */
  if (C.zf) goto L_12d723cb;
  /* 12d723bf mov dword ptr [0x12d7e7e0], 2 */
  w32((uint32_t)(0x12d7e7e0), (0x2u));
  /* 12d723c9 jmp 0x12d723d2 */
  goto L_12d723d2;
L_12d723cb:;
  /* 12d723cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d723cd jmp 0x12d724f1 */
  goto L_12d724f1;
L_12d723d2:;
  /* 12d723d2 cmp dword ptr [0x12d7e7e0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7e0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d723d9 jne 0x12d723f6 */
  if (!C.zf) goto L_12d723f6;
  /* 12d723db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d723de push eax */
  push32((uint32_t)(EAX));
  /* 12d723df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d723e2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d723e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d723e6 push edx */
  push32((uint32_t)(EDX));
  /* 12d723e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d723ea push eax */
  push32((uint32_t)(EAX));
  /* 12d723eb call dword ptr [0x12d80264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80264))), 0x12d723f1u);
  /* 12d723f1 jmp 0x12d724f1 */
  goto L_12d724f1;
L_12d723f6:;
  /* 12d723f6 cmp dword ptr [0x12d7e7e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d723fd jne 0x12d724ef */
  if (!C.zf) goto L_12d724ef;
  /* 12d72403 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72407 jne 0x12d72412 */
  if (!C.zf) goto L_12d72412;
  /* 12d72409 mov ecx, dword ptr [0x12d7e690] */
  ECX = (r32((uint32_t)(0x12d7e690)));
  /* 12d7240f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12d72412:;
  /* 12d72412 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72414 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72416 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d72419 push edx */
  push32((uint32_t)(EDX));
  /* 12d7241a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7241d push eax */
  push32((uint32_t)(EAX));
  /* 12d7241e call dword ptr [0x12d8024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8024c))), 0x12d72424u);
  /* 12d72424 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d72427 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7242b jne 0x12d72434 */
  if (!C.zf) goto L_12d72434;
  /* 12d7242d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d7242f jmp 0x12d724f1 */
  goto L_12d724f1;
L_12d72434:;
  /* 12d72434 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d7243b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d7243e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d72440 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72443 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d72445 call 0x12d65f20 */
  push32(0x12d7244au); f_12d65f20();
  /* 12d7244a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12d7244d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d72450 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d72453 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d72456 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d7245d jmp 0x12d72476 */
  goto L_12d72476;
  /* 12d7245f mov eax, 1 */
  EAX = (0x1u);
  /* 12d72464 ret  */
  ESPCHK(0x12d72360u, _esp0);
  ESP += 4; return;
  /* 12d72465 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d72468 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d7246f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d72476:;
  /* 12d72476 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7247a jne 0x12d72480 */
  if (!C.zf) goto L_12d72480;
  /* 12d7247c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d7247e jmp 0x12d724f1 */
  goto L_12d724f1;
L_12d72480:;
  /* 12d72480 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d72483 push edx */
  push32((uint32_t)(EDX));
  /* 12d72484 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d72487 push eax */
  push32((uint32_t)(EAX));
  /* 12d72488 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7248b push ecx */
  push32((uint32_t)(ECX));
  /* 12d7248c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7248f push edx */
  push32((uint32_t)(EDX));
  /* 12d72490 call dword ptr [0x12d8024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8024c))), 0x12d72496u);
  /* 12d72496 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d72498 jne 0x12d7249e */
  if (!C.zf) goto L_12d7249e;
  /* 12d7249a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d7249c jmp 0x12d724f1 */
  goto L_12d724f1;
L_12d7249e:;
  /* 12d7249e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d724a2 jne 0x12d724c6 */
  if (!C.zf) goto L_12d724c6;
  /* 12d724a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d724a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d724a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d724aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12d724ac push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d724ae mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d724b1 push eax */
  push32((uint32_t)(EAX));
  /* 12d724b2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d724b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d724ba push ecx */
  push32((uint32_t)(ECX));
  /* 12d724bb call dword ptr [0x12d802fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802fc))), 0x12d724c1u);
  /* 12d724c1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d724c4 jmp 0x12d724ea */
  goto L_12d724ea;
L_12d724c6:;
  /* 12d724c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d724c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d724ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d724cd push edx */
  push32((uint32_t)(EDX));
  /* 12d724ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d724d1 push eax */
  push32((uint32_t)(EAX));
  /* 12d724d2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d724d4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d724d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d724d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d724dd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d724e0 push edx */
  push32((uint32_t)(EDX));
  /* 12d724e1 call dword ptr [0x12d802fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802fc))), 0x12d724e7u);
  /* 12d724e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d724ea:;
  /* 12d724ea mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d724ed jmp 0x12d724f1 */
  goto L_12d724f1;
L_12d724ef:;
  /* 12d724ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d724f1:;
  /* 12d724f1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12d724f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d724f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d724fe pop edi */
  EDI = (pop32());
  /* 12d724ff pop esi */
  ESI = (pop32());
  /* 12d72500 pop ebx */
  EBX = (pop32());
  /* 12d72501 mov esp, ebp */
  ESP = (EBP);
  /* 12d72503 pop ebp */
  EBP = (pop32());
  /* 12d72504 ret  */
  ESPCHK(0x12d72360u, _esp0);
  ESP += 4; return;
}

/* FUN_10012510 @ 0x12d72510 (11 bytes, 6 insns) */
void f_12d72510(void) {
  FTRACE(0x12d72510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d72510 push ebp */
  push32((uint32_t)(EBP));
  /* 12d72511 mov ebp, esp */
  EBP = (ESP);
  /* 12d72513 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72516 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72519 pop ebp */
  EBP = (pop32());
  /* 12d7251a ret  */
  ESPCHK(0x12d72510u, _esp0);
  ESP += 4; return;
}

/* FUN_10012520 @ 0x12d72520 (147 bytes, 43 insns) */
void f_12d72520(void) {
  FTRACE(0x12d72520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d72520 push ebp */
  push32((uint32_t)(EBP));
  /* 12d72521 mov ebp, esp */
  EBP = (ESP);
  /* 12d72523 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72524 cmp dword ptr [0x12d7e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7252b jne 0x12d72547 */
  if (!C.zf) goto L_12d72547;
  /* 12d7252d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72531 jl 0x12d72542 */
  if ((C.sf!=C.of)) goto L_12d72542;
  /* 12d72533 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72537 jg 0x12d72542 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d72542;
  /* 12d72539 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7253c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7253f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d72542:;
  /* 12d72542 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72545 jmp 0x12d725af */
  goto L_12d725af;
L_12d72547:;
  /* 12d72547 push 0x12d7e80c */
  push32((uint32_t)(0x12d7e80cu));
  /* 12d7254c call dword ptr [0x12d802a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802a4))), 0x12d72552u);
  /* 12d72552 cmp dword ptr [0x12d7e7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72559 je 0x12d72579 */
  if (C.zf) goto L_12d72579;
  /* 12d7255b push 0x12d7e80c */
  push32((uint32_t)(0x12d7e80cu));
  /* 12d72560 call dword ptr [0x12d80294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80294))), 0x12d72566u);
  /* 12d72566 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d72568 call 0x12d66780 */
  push32(0x12d7256du); f_12d66780();
  /* 12d7256d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72570 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d72577 jmp 0x12d72580 */
  goto L_12d72580;
L_12d72579:;
  /* 12d72579 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d72580:;
  /* 12d72580 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72583 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72584 call 0x12d725c0 */
  push32(0x12d72589u); f_12d725c0();
  /* 12d72589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7258c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d7258f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72593 je 0x12d725a1 */
  if (C.zf) goto L_12d725a1;
  /* 12d72595 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d72597 call 0x12d66820 */
  push32(0x12d7259cu); f_12d66820();
  /* 12d7259c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7259f jmp 0x12d725ac */
  goto L_12d725ac;
L_12d725a1:;
  /* 12d725a1 push 0x12d7e80c */
  push32((uint32_t)(0x12d7e80cu));
  /* 12d725a6 call dword ptr [0x12d80294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80294))), 0x12d725acu);
L_12d725ac:;
  /* 12d725ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12d725af:;
  /* 12d725af mov esp, ebp */
  ESP = (EBP);
  /* 12d725b1 pop ebp */
  EBP = (pop32());
  /* 12d725b2 ret  */
  ESPCHK(0x12d72520u, _esp0);
  ESP += 4; return;
}

/* FUN_100125c0 @ 0x12d725c0 (299 bytes, 91 insns) */
void f_12d725c0(void) {
  FTRACE(0x12d725c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d725c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d725c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d725c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d725c6 cmp dword ptr [0x12d7e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d725cd jne 0x12d725ec */
  if (!C.zf) goto L_12d725ec;
  /* 12d725cf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d725d3 jl 0x12d725e4 */
  if ((C.sf!=C.of)) goto L_12d725e4;
  /* 12d725d5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d725d9 jg 0x12d725e4 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d725e4;
  /* 12d725db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d725de add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d725e1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d725e4:;
  /* 12d725e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d725e7 jmp 0x12d726e7 */
  goto L_12d726e7;
L_12d725ec:;
  /* 12d725ec cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d725f3 jge 0x12d72633 */
  if ((C.sf==C.of)) goto L_12d72633;
  /* 12d725f5 cmp dword ptr [0x12d7cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d725fc jle 0x12d72611 */
  if ((C.zf||C.sf!=C.of)) goto L_12d72611;
  /* 12d725fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12d72600 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72603 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72604 call 0x12d68d90 */
  push32(0x12d72609u); f_12d68d90();
  /* 12d72609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7260c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d7260f jmp 0x12d72625 */
  goto L_12d72625;
L_12d72611:;
  /* 12d72611 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72614 mov eax, dword ptr [0x12d7ccb8] */
  EAX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d72619 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d7261b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12d7261f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d72622 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d72625:;
  /* 12d72625 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72629 jne 0x12d72633 */
  if (!C.zf) goto L_12d72633;
  /* 12d7262b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7262e jmp 0x12d726e7 */
  goto L_12d726e7;
L_12d72633:;
  /* 12d72633 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72636 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12d72639 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d7263f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d72645 mov eax, dword ptr [0x12d7ccb8] */
  EAX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d7264a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d7264c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12d72650 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12d72656 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d72658 je 0x12d7267c */
  if (C.zf) goto L_12d7267c;
  /* 12d7265a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7265d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12d72660 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d72666 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12d72669 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d7266c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12d7266f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12d72673 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12d7267a jmp 0x12d7268d */
  goto L_12d7268d;
L_12d7267c:;
  /* 12d7267c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d7267f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12d72682 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12d72686 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12d7268d:;
  /* 12d7268d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d7268f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72691 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d72693 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12d72696 push edx */
  push32((uint32_t)(EDX));
  /* 12d72697 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d7269a push eax */
  push32((uint32_t)(EAX));
  /* 12d7269b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12d7269e push ecx */
  push32((uint32_t)(ECX));
  /* 12d7269f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d726a4 mov edx, dword ptr [0x12d7e680] */
  EDX = (r32((uint32_t)(0x12d7e680)));
  /* 12d726aa push edx */
  push32((uint32_t)(EDX));
  /* 12d726ab call 0x12d6b170 */
  push32(0x12d726b0u); f_12d6b170();
  /* 12d726b0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d726b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d726b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d726ba jne 0x12d726c1 */
  if (!C.zf) goto L_12d726c1;
  /* 12d726bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d726bf jmp 0x12d726e7 */
  goto L_12d726e7;
L_12d726c1:;
  /* 12d726c1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d726c5 jne 0x12d726d1 */
  if (!C.zf) goto L_12d726d1;
  /* 12d726c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d726ca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d726cf jmp 0x12d726e7 */
  goto L_12d726e7;
L_12d726d1:;
  /* 12d726d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d726d4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d726d9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12d726dc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d726e2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12d726e5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12d726e7:;
  /* 12d726e7 mov esp, ebp */
  ESP = (EBP);
  /* 12d726e9 pop ebp */
  EBP = (pop32());
  /* 12d726ea ret  */
  ESPCHK(0x12d725c0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12d726f0 (52 bytes, 19 insns) */
void f_12d726f0(void) {
  FTRACE(0x12d726f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d726f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d726f4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d726f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d726fa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d726fe jne 0x12d72709 */
  if (!C.zf) goto L_12d72709;
  /* 12d72700 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d72704 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d72706 ret 0x10 */
  ESPCHK(0x12d726f0u, _esp0);
  ESP += 20; return;
L_12d72709:;
  /* 12d72709 push ebx */
  push32((uint32_t)(EBX));
  /* 12d7270a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d7270c mov ebx, eax */
  EBX = (EAX);
  /* 12d7270e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d72712 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d72716 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72718 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d7271c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d7271e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72720 pop ebx */
  EBX = (pop32());
  /* 12d72721 ret 0x10 */
  ESPCHK(0x12d726f0u, _esp0);
  ESP += 20; return;
}

/* FUN_10012730 @ 0x12d72730 (46 bytes, 18 insns) */
void f_12d72730(void) {
  FTRACE(0x12d72730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d72730 push ebp */
  push32((uint32_t)(EBP));
  /* 12d72731 mov ebp, esp */
  EBP = (ESP);
  /* 12d72733 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72734 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d72736 call 0x12d66780 */
  push32(0x12d7273bu); f_12d66780();
  /* 12d7273b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7273e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72741 push eax */
  push32((uint32_t)(EAX));
  /* 12d72742 call 0x12d72760 */
  push32(0x12d72747u); f_12d72760();
  /* 12d72747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7274a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d7274d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d7274f call 0x12d66820 */
  push32(0x12d72754u); f_12d66820();
  /* 12d72754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72757 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d7275a mov esp, ebp */
  ESP = (EBP);
  /* 12d7275c pop ebp */
  EBP = (pop32());
  /* 12d7275d ret  */
  ESPCHK(0x12d72730u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12d72760 (198 bytes, 69 insns) */
void f_12d72760(void) {
  FTRACE(0x12d72760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d72760 push ebp */
  push32((uint32_t)(EBP));
  /* 12d72761 mov ebp, esp */
  EBP = (ESP);
  /* 12d72763 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d72766 mov eax, dword ptr [0x12d7e49c] */
  EAX = (r32((uint32_t)(0x12d7e49c)));
  /* 12d7276b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d7276e cmp dword ptr [0x12d7ffa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7ffa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72775 jne 0x12d7277e */
  if (!C.zf) goto L_12d7277e;
  /* 12d72777 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72779 jmp 0x12d72822 */
  goto L_12d72822;
L_12d7277e:;
  /* 12d7277e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72782 jne 0x12d727a6 */
  if (!C.zf) goto L_12d727a6;
  /* 12d72784 cmp dword ptr [0x12d7e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7278b je 0x12d727a6 */
  if (C.zf) goto L_12d727a6;
  /* 12d7278d call 0x12d72880 */
  push32(0x12d72792u); f_12d72880();
  /* 12d72792 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d72794 je 0x12d7279d */
  if (C.zf) goto L_12d7279d;
  /* 12d72796 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72798 jmp 0x12d72822 */
  goto L_12d72822;
L_12d7279d:;
  /* 12d7279d mov ecx, dword ptr [0x12d7e49c] */
  ECX = (r32((uint32_t)(0x12d7e49c)));
  /* 12d727a3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d727a6:;
  /* 12d727a6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d727aa je 0x12d72820 */
  if (C.zf) goto L_12d72820;
  /* 12d727ac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d727b0 je 0x12d72820 */
  if (C.zf) goto L_12d72820;
  /* 12d727b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d727b5 push edx */
  push32((uint32_t)(EDX));
  /* 12d727b6 call 0x12d65bb0 */
  push32(0x12d727bbu); f_12d65bb0();
  /* 12d727bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d727be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d727c1:;
  /* 12d727c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d727c4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d727c7 je 0x12d72820 */
  if (C.zf) goto L_12d72820;
  /* 12d727c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d727cc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d727ce push edx */
  push32((uint32_t)(EDX));
  /* 12d727cf call 0x12d65bb0 */
  push32(0x12d727d4u); f_12d65bb0();
  /* 12d727d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d727d7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d727da jbe 0x12d72815 */
  if ((C.cf||C.zf)) goto L_12d72815;
  /* 12d727dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d727df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d727e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d727e4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12d727e8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d727eb jne 0x12d72815 */
  if (!C.zf) goto L_12d72815;
  /* 12d727ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d727f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d727f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d727f4 push edx */
  push32((uint32_t)(EDX));
  /* 12d727f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d727f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d727fa push ecx */
  push32((uint32_t)(ECX));
  /* 12d727fb call 0x12d72830 */
  push32(0x12d72800u); f_12d72830();
  /* 12d72800 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72803 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d72805 jne 0x12d72815 */
  if (!C.zf) goto L_12d72815;
  /* 12d72807 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d7280a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d7280c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d7280f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12d72813 jmp 0x12d72822 */
  goto L_12d72822;
L_12d72815:;
  /* 12d72815 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72818 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7281b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d7281e jmp 0x12d727c1 */
  goto L_12d727c1;
L_12d72820:;
  /* 12d72820 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d72822:;
  /* 12d72822 mov esp, ebp */
  ESP = (EBP);
  /* 12d72824 pop ebp */
  EBP = (pop32());
  /* 12d72825 ret  */
  ESPCHK(0x12d72760u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12d72830 (79 bytes, 32 insns) */
void f_12d72830(void) {
  FTRACE(0x12d72830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d72830 push ebp */
  push32((uint32_t)(EBP));
  /* 12d72831 mov ebp, esp */
  EBP = (ESP);
  /* 12d72833 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72834 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72838 jne 0x12d7283e */
  if (!C.zf) goto L_12d7283e;
  /* 12d7283a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d7283c jmp 0x12d7287b */
  goto L_12d7287b;
L_12d7283e:;
  /* 12d7283e mov eax, dword ptr [0x12d7fb64] */
  EAX = (r32((uint32_t)(0x12d7fb64)));
  /* 12d72843 push eax */
  push32((uint32_t)(EAX));
  /* 12d72844 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d72847 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72848 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d7284b push edx */
  push32((uint32_t)(EDX));
  /* 12d7284c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d7284f push eax */
  push32((uint32_t)(EAX));
  /* 12d72850 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72853 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72854 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d72856 mov edx, dword ptr [0x12d7fe04] */
  EDX = (r32((uint32_t)(0x12d7fe04)));
  /* 12d7285c push edx */
  push32((uint32_t)(EDX));
  /* 12d7285d call 0x12d72930 */
  push32(0x12d72862u); f_12d72930();
  /* 12d72862 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72865 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d72868 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7286c jne 0x12d72875 */
  if (!C.zf) goto L_12d72875;
  /* 12d7286e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12d72873 jmp 0x12d7287b */
  goto L_12d7287b;
L_12d72875:;
  /* 12d72875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d72878 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12d7287b:;
  /* 12d7287b mov esp, ebp */
  ESP = (EBP);
  /* 12d7287d pop ebp */
  EBP = (pop32());
  /* 12d7287e ret  */
  ESPCHK(0x12d72830u, _esp0);
  ESP += 4; return;
}

/* FUN_10012880 @ 0x12d72880 (174 bytes, 66 insns) */
void f_12d72880(void) {
  FTRACE(0x12d72880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d72880 push ebp */
  push32((uint32_t)(EBP));
  /* 12d72881 mov ebp, esp */
  EBP = (ESP);
  /* 12d72883 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d72886 mov eax, dword ptr [0x12d7e4a4] */
  EAX = (r32((uint32_t)(0x12d7e4a4)));
  /* 12d7288b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d7288e:;
  /* 12d7288e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d72891 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72894 je 0x12d72928 */
  if (C.zf) goto L_12d72928;
  /* 12d7289a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d7289c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d7289e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d728a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d728a2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d728a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d728a7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d728a9 push eax */
  push32((uint32_t)(EAX));
  /* 12d728aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12d728ac push 1 */
  push32((uint32_t)(0x1u));
  /* 12d728ae call dword ptr [0x12d802fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802fc))), 0x12d728b4u);
  /* 12d728b4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d728b7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d728bb jne 0x12d728c2 */
  if (!C.zf) goto L_12d728c2;
  /* 12d728bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d728c0 jmp 0x12d7292a */
  goto L_12d7292a;
L_12d728c2:;
  /* 12d728c2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12d728c4 push 0x12d7a88c */
  push32((uint32_t)(0x12d7a88cu));
  /* 12d728c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d728cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d728ce push ecx */
  push32((uint32_t)(ECX));
  /* 12d728cf call 0x12d62d80 */
  push32(0x12d728d4u); f_12d62d80();
  /* 12d728d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d728d7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d728da cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d728de jne 0x12d728e5 */
  if (!C.zf) goto L_12d728e5;
  /* 12d728e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d728e3 jmp 0x12d7292a */
  goto L_12d7292a;
L_12d728e5:;
  /* 12d728e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d728e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d728e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d728ec push edx */
  push32((uint32_t)(EDX));
  /* 12d728ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d728f0 push eax */
  push32((uint32_t)(EAX));
  /* 12d728f1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d728f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d728f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d728f8 push edx */
  push32((uint32_t)(EDX));
  /* 12d728f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d728fb push 1 */
  push32((uint32_t)(0x1u));
  /* 12d728fd call dword ptr [0x12d802fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802fc))), 0x12d72903u);
  /* 12d72903 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d72905 jne 0x12d7290c */
  if (!C.zf) goto L_12d7290c;
  /* 12d72907 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d7290a jmp 0x12d7292a */
  goto L_12d7292a;
L_12d7290c:;
  /* 12d7290c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d7290e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72911 push eax */
  push32((uint32_t)(EAX));
  /* 12d72912 call 0x12d72d80 */
  push32(0x12d72917u); f_12d72d80();
  /* 12d72917 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7291a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d7291d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72920 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d72923 jmp 0x12d7288e */
  goto L_12d7288e;
L_12d72928:;
  /* 12d72928 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d7292a:;
  /* 12d7292a mov esp, ebp */
  ESP = (EBP);
  /* 12d7292c pop ebp */
  EBP = (pop32());
  /* 12d7292d ret  */
  ESPCHK(0x12d72880u, _esp0);
  ESP += 4; return;
}

/* FUN_10012930 @ 0x12d72930 (970 bytes, 340 insns) */
void f_12d72930(void) {
  FTRACE(0x12d72930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d72930 push ebp */
  push32((uint32_t)(EBP));
  /* 12d72931 mov ebp, esp */
  EBP = (ESP);
  /* 12d72933 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d72935 push 0x12d7a8e0 */
  push32((uint32_t)(0x12d7a8e0u));
  /* 12d7293a push 0x12d6be88 */
  push32((uint32_t)(0x12d6be88u));
  /* 12d7293f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d72945 push eax */
  push32((uint32_t)(EAX));
  /* 12d72946 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d7294d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72950 push ebx */
  push32((uint32_t)(EBX));
  /* 12d72951 push esi */
  push32((uint32_t)(ESI));
  /* 12d72952 push edi */
  push32((uint32_t)(EDI));
  /* 12d72953 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d72956 cmp dword ptr [0x12d7e7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7295d jne 0x12d729b6 */
  if (!C.zf) goto L_12d729b6;
  /* 12d7295f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d72961 push 0x12d79f38 */
  push32((uint32_t)(0x12d79f38u));
  /* 12d72966 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d72968 push 0x12d79f38 */
  push32((uint32_t)(0x12d79f38u));
  /* 12d7296d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d7296f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72971 call dword ptr [0x12d80248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80248))), 0x12d72977u);
  /* 12d72977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d72979 je 0x12d72987 */
  if (C.zf) goto L_12d72987;
  /* 12d7297b mov dword ptr [0x12d7e7e4], 1 */
  w32((uint32_t)(0x12d7e7e4), (0x1u));
  /* 12d72985 jmp 0x12d729b6 */
  goto L_12d729b6;
L_12d72987:;
  /* 12d72987 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d72989 push 0x12d79f34 */
  push32((uint32_t)(0x12d79f34u));
  /* 12d7298e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d72990 push 0x12d79f34 */
  push32((uint32_t)(0x12d79f34u));
  /* 12d72995 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72997 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72999 call dword ptr [0x12d80254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80254))), 0x12d7299fu);
  /* 12d7299f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d729a1 je 0x12d729af */
  if (C.zf) goto L_12d729af;
  /* 12d729a3 mov dword ptr [0x12d7e7e4], 2 */
  w32((uint32_t)(0x12d7e7e4), (0x2u));
  /* 12d729ad jmp 0x12d729b6 */
  goto L_12d729b6;
L_12d729af:;
  /* 12d729af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d729b1 jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d729b6:;
  /* 12d729b6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d729ba jle 0x12d729cf */
  if ((C.zf||C.sf!=C.of)) goto L_12d729cf;
  /* 12d729bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d729bf push eax */
  push32((uint32_t)(EAX));
  /* 12d729c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d729c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d729c4 call 0x12d72d30 */
  push32(0x12d729c9u); f_12d72d30();
  /* 12d729c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d729cc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12d729cf:;
  /* 12d729cf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d729d3 jle 0x12d729e8 */
  if ((C.zf||C.sf!=C.of)) goto L_12d729e8;
  /* 12d729d5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d729d8 push edx */
  push32((uint32_t)(EDX));
  /* 12d729d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d729dc push eax */
  push32((uint32_t)(EAX));
  /* 12d729dd call 0x12d72d30 */
  push32(0x12d729e2u); f_12d72d30();
  /* 12d729e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d729e5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12d729e8:;
  /* 12d729e8 cmp dword ptr [0x12d7e7e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d729ef jne 0x12d72a14 */
  if (!C.zf) goto L_12d72a14;
  /* 12d729f1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d729f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d729f5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d729f8 push edx */
  push32((uint32_t)(EDX));
  /* 12d729f9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d729fc push eax */
  push32((uint32_t)(EAX));
  /* 12d729fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d72a00 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72a01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d72a04 push edx */
  push32((uint32_t)(EDX));
  /* 12d72a05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72a08 push eax */
  push32((uint32_t)(EAX));
  /* 12d72a09 call dword ptr [0x12d80254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80254))), 0x12d72a0fu);
  /* 12d72a0f jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72a14:;
  /* 12d72a14 cmp dword ptr [0x12d7e7e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e7e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72a1b jne 0x12d72d12 */
  if (!C.zf) goto L_12d72d12;
  /* 12d72a21 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72a25 jne 0x12d72a30 */
  if (!C.zf) goto L_12d72a30;
  /* 12d72a27 mov ecx, dword ptr [0x12d7e690] */
  ECX = (r32((uint32_t)(0x12d7e690)));
  /* 12d72a2d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12d72a30:;
  /* 12d72a30 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72a34 je 0x12d72a40 */
  if (C.zf) goto L_12d72a40;
  /* 12d72a36 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72a3a jne 0x12d72bbc */
  if (!C.zf) goto L_12d72bbc;
L_12d72a40:;
  /* 12d72a40 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d72a43 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72a46 jne 0x12d72a52 */
  if (!C.zf) goto L_12d72a52;
  /* 12d72a48 mov eax, 2 */
  EAX = (0x2u);
  /* 12d72a4d jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72a52:;
  /* 12d72a52 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72a56 jle 0x12d72a62 */
  if ((C.zf||C.sf!=C.of)) goto L_12d72a62;
  /* 12d72a58 mov eax, 1 */
  EAX = (0x1u);
  /* 12d72a5d jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72a62:;
  /* 12d72a62 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72a66 jle 0x12d72a72 */
  if ((C.zf||C.sf!=C.of)) goto L_12d72a72;
  /* 12d72a68 mov eax, 3 */
  EAX = (0x3u);
  /* 12d72a6d jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72a72:;
  /* 12d72a72 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12d72a75 push eax */
  push32((uint32_t)(EAX));
  /* 12d72a76 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d72a79 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72a7a call dword ptr [0x12d8033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8033c))), 0x12d72a80u);
  /* 12d72a80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d72a82 jne 0x12d72a8b */
  if (!C.zf) goto L_12d72a8b;
  /* 12d72a84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72a86 jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72a8b:;
  /* 12d72a8b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72a8f jne 0x12d72a97 */
  if (!C.zf) goto L_12d72a97;
  /* 12d72a91 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72a95 je 0x12d72ac4 */
  if (C.zf) goto L_12d72ac4;
L_12d72a97:;
  /* 12d72a97 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72a9b jne 0x12d72aa3 */
  if (!C.zf) goto L_12d72aa3;
  /* 12d72a9d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72aa1 je 0x12d72ac4 */
  if (C.zf) goto L_12d72ac4;
L_12d72aa3:;
  /* 12d72aa3 push 0x12d7a8a0 */
  push32((uint32_t)(0x12d7a8a0u));
  /* 12d72aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72aaa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12d72aaf push 0x12d7a898 */
  push32((uint32_t)(0x12d7a898u));
  /* 12d72ab4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d72ab6 call 0x12d61e40 */
  push32(0x12d72abbu); f_12d61e40();
  /* 12d72abb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72abe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72ac1 jne 0x12d72ac4 */
  if (!C.zf) goto L_12d72ac4;
  /* 12d72ac3 int3  */
  x86_unimpl("int3 @ 0x12d72ac3");
L_12d72ac4:;
  /* 12d72ac4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d72ac6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d72ac8 jne 0x12d72a8b */
  if (!C.zf) goto L_12d72a8b;
  /* 12d72aca cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72ace jle 0x12d72b43 */
  if ((C.zf||C.sf!=C.of)) goto L_12d72b43;
  /* 12d72ad0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72ad4 jae 0x12d72ae0 */
  if (!C.cf) goto L_12d72ae0;
  /* 12d72ad6 mov eax, 3 */
  EAX = (0x3u);
  /* 12d72adb jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72ae0:;
  /* 12d72ae0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12d72ae3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12d72ae6 jmp 0x12d72af1 */
  goto L_12d72af1;
L_12d72ae8:;
  /* 12d72ae8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d72aeb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72aee mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12d72af1:;
  /* 12d72af1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d72af4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72af6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d72af8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d72afa je 0x12d72b39 */
  if (C.zf) goto L_12d72b39;
  /* 12d72afc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d72aff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d72b01 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12d72b04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d72b06 je 0x12d72b39 */
  if (C.zf) goto L_12d72b39;
  /* 12d72b08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d72b0b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d72b0d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d72b0f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d72b12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72b14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d72b16 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72b18 jl 0x12d72b37 */
  if ((C.sf!=C.of)) goto L_12d72b37;
  /* 12d72b1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d72b1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d72b1f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d72b21 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d72b24 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d72b26 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d72b29 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72b2b jg 0x12d72b37 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d72b37;
  /* 12d72b2d mov eax, 2 */
  EAX = (0x2u);
  /* 12d72b32 jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72b37:;
  /* 12d72b37 jmp 0x12d72ae8 */
  goto L_12d72ae8;
L_12d72b39:;
  /* 12d72b39 mov eax, 3 */
  EAX = (0x3u);
  /* 12d72b3e jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72b43:;
  /* 12d72b43 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72b47 jle 0x12d72bbc */
  if ((C.zf||C.sf!=C.of)) goto L_12d72bbc;
  /* 12d72b49 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72b4d jae 0x12d72b59 */
  if (!C.cf) goto L_12d72b59;
  /* 12d72b4f mov eax, 1 */
  EAX = (0x1u);
  /* 12d72b54 jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72b59:;
  /* 12d72b59 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12d72b5c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12d72b5f jmp 0x12d72b6a */
  goto L_12d72b6a;
L_12d72b61:;
  /* 12d72b61 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d72b64 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72b67 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12d72b6a:;
  /* 12d72b6a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d72b6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d72b6f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d72b71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d72b73 je 0x12d72bb2 */
  if (C.zf) goto L_12d72bb2;
  /* 12d72b75 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d72b78 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d72b7a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d72b7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d72b7f je 0x12d72bb2 */
  if (C.zf) goto L_12d72bb2;
  /* 12d72b81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d72b84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72b86 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d72b88 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d72b8b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d72b8d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d72b8f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72b91 jl 0x12d72bb0 */
  if ((C.sf!=C.of)) goto L_12d72bb0;
  /* 12d72b93 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d72b96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d72b98 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d72b9a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d72b9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72b9f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d72ba2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72ba4 jg 0x12d72bb0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d72bb0;
  /* 12d72ba6 mov eax, 2 */
  EAX = (0x2u);
  /* 12d72bab jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72bb0:;
  /* 12d72bb0 jmp 0x12d72b61 */
  goto L_12d72b61;
L_12d72bb2:;
  /* 12d72bb2 mov eax, 1 */
  EAX = (0x1u);
  /* 12d72bb7 jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72bbc:;
  /* 12d72bbc push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72bbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72bc0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d72bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72bc4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d72bc7 push edx */
  push32((uint32_t)(EDX));
  /* 12d72bc8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d72bca mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d72bcd push eax */
  push32((uint32_t)(EAX));
  /* 12d72bce call dword ptr [0x12d80348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80348))), 0x12d72bd4u);
  /* 12d72bd4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d72bd7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72bdb jne 0x12d72be4 */
  if (!C.zf) goto L_12d72be4;
  /* 12d72bdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72bdf jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72be4:;
  /* 12d72be4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d72beb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d72bee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d72bf0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72bf3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d72bf5 call 0x12d65f20 */
  push32(0x12d72bfau); f_12d65f20();
  /* 12d72bfa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12d72bfd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d72c00 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12d72c03 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d72c06 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d72c0d jmp 0x12d72c26 */
  goto L_12d72c26;
  /* 12d72c0f mov eax, 1 */
  EAX = (0x1u);
  /* 12d72c14 ret  */
  ESPCHK(0x12d72930u, _esp0);
  ESP += 4; return;
  /* 12d72c15 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d72c18 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d72c1f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d72c26:;
  /* 12d72c26 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72c2a jne 0x12d72c33 */
  if (!C.zf) goto L_12d72c33;
  /* 12d72c2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72c2e jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72c33:;
  /* 12d72c33 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d72c36 push edx */
  push32((uint32_t)(EDX));
  /* 12d72c37 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d72c3a push eax */
  push32((uint32_t)(EAX));
  /* 12d72c3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d72c3e push ecx */
  push32((uint32_t)(ECX));
  /* 12d72c3f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d72c42 push edx */
  push32((uint32_t)(EDX));
  /* 12d72c43 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d72c45 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d72c48 push eax */
  push32((uint32_t)(EAX));
  /* 12d72c49 call dword ptr [0x12d80348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80348))), 0x12d72c4fu);
  /* 12d72c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d72c51 jne 0x12d72c5a */
  if (!C.zf) goto L_12d72c5a;
  /* 12d72c53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72c55 jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72c5a:;
  /* 12d72c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d72c5e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d72c61 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72c62 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d72c65 push edx */
  push32((uint32_t)(EDX));
  /* 12d72c66 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d72c68 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d72c6b push eax */
  push32((uint32_t)(EAX));
  /* 12d72c6c call dword ptr [0x12d80348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80348))), 0x12d72c72u);
  /* 12d72c72 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d72c75 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72c79 jne 0x12d72c82 */
  if (!C.zf) goto L_12d72c82;
  /* 12d72c7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72c7d jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72c82:;
  /* 12d72c82 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d72c89 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d72c8c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d72c8e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72c91 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d72c93 call 0x12d65f20 */
  push32(0x12d72c98u); f_12d65f20();
  /* 12d72c98 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12d72c9b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d72c9e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12d72ca1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12d72ca4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d72cab jmp 0x12d72cc4 */
  goto L_12d72cc4;
  /* 12d72cad mov eax, 1 */
  EAX = (0x1u);
  /* 12d72cb2 ret  */
  ESPCHK(0x12d72930u, _esp0);
  ESP += 4; return;
  /* 12d72cb3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d72cb6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12d72cbd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d72cc4:;
  /* 12d72cc4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72cc8 jne 0x12d72cce */
  if (!C.zf) goto L_12d72cce;
  /* 12d72cca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72ccc jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72cce:;
  /* 12d72cce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d72cd1 push edx */
  push32((uint32_t)(EDX));
  /* 12d72cd2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d72cd5 push eax */
  push32((uint32_t)(EAX));
  /* 12d72cd6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d72cd9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72cda mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d72cdd push edx */
  push32((uint32_t)(EDX));
  /* 12d72cde push 1 */
  push32((uint32_t)(0x1u));
  /* 12d72ce0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d72ce3 push eax */
  push32((uint32_t)(EAX));
  /* 12d72ce4 call dword ptr [0x12d80348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80348))), 0x12d72ceau);
  /* 12d72cea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d72cec jne 0x12d72cf2 */
  if (!C.zf) goto L_12d72cf2;
  /* 12d72cee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72cf0 jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72cf2:;
  /* 12d72cf2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d72cf5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72cf6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d72cf9 push edx */
  push32((uint32_t)(EDX));
  /* 12d72cfa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d72cfd push eax */
  push32((uint32_t)(EAX));
  /* 12d72cfe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d72d01 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72d02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d72d05 push edx */
  push32((uint32_t)(EDX));
  /* 12d72d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72d09 push eax */
  push32((uint32_t)(EAX));
  /* 12d72d0a call dword ptr [0x12d80248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80248))), 0x12d72d10u);
  /* 12d72d10 jmp 0x12d72d14 */
  goto L_12d72d14;
L_12d72d12:;
  /* 12d72d12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d72d14:;
  /* 12d72d14 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12d72d17 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d72d1a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d72d21 pop edi */
  EDI = (pop32());
  /* 12d72d22 pop esi */
  ESI = (pop32());
  /* 12d72d23 pop ebx */
  EBX = (pop32());
  /* 12d72d24 mov esp, ebp */
  ESP = (EBP);
  /* 12d72d26 pop ebp */
  EBP = (pop32());
  /* 12d72d27 ret  */
  ESPCHK(0x12d72930u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d30 @ 0x12d72d30 (80 bytes, 32 insns) */
void f_12d72d30(void) {
  FTRACE(0x12d72d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d72d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d72d31 mov ebp, esp */
  EBP = (ESP);
  /* 12d72d33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d72d36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d72d39 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d72d3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72d3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d72d42:;
  /* 12d72d42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72d45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72d48 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d72d4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d72d4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d72d50 je 0x12d72d67 */
  if (C.zf) goto L_12d72d67;
  /* 12d72d52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d72d55 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d72d58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d72d5a je 0x12d72d67 */
  if (C.zf) goto L_12d72d67;
  /* 12d72d5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d72d5f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72d62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d72d65 jmp 0x12d72d42 */
  goto L_12d72d42;
L_12d72d67:;
  /* 12d72d67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d72d6a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d72d6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d72d6f jne 0x12d72d79 */
  if (!C.zf) goto L_12d72d79;
  /* 12d72d71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d72d74 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d72d77 jmp 0x12d72d7c */
  goto L_12d72d7c;
L_12d72d79:;
  /* 12d72d79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12d72d7c:;
  /* 12d72d7c mov esp, ebp */
  ESP = (EBP);
  /* 12d72d7e pop ebp */
  EBP = (pop32());
  /* 12d72d7f ret  */
  ESPCHK(0x12d72d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d80 @ 0x12d72d80 (736 bytes, 224 insns) */
void f_12d72d80(void) {
  FTRACE(0x12d72d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d72d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12d72d81 mov ebp, esp */
  EBP = (ESP);
  /* 12d72d83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d72d86 push esi */
  push32((uint32_t)(ESI));
  /* 12d72d87 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72d8b je 0x12d72dac */
  if (C.zf) goto L_12d72dac;
  /* 12d72d8d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12d72d8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72d92 push eax */
  push32((uint32_t)(EAX));
  /* 12d72d93 call 0x12d731d0 */
  push32(0x12d72d98u); f_12d731d0();
  /* 12d72d98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72d9b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d72d9e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72da2 je 0x12d72dac */
  if (C.zf) goto L_12d72dac;
  /* 12d72da4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72da7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72daa jne 0x12d72db4 */
  if (!C.zf) goto L_12d72db4;
L_12d72dac:;
  /* 12d72dac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d72daf jmp 0x12d7305b */
  goto L_12d7305b;
L_12d72db4:;
  /* 12d72db4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d72db7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d72dbb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d72dbd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d72dbf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12d72dc0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d72dc3 mov ecx, dword ptr [0x12d7e49c] */
  ECX = (r32((uint32_t)(0x12d7e49c)));
  /* 12d72dc9 cmp ecx, dword ptr [0x12d7e4a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7e4a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72dcf jne 0x12d72de5 */
  if (!C.zf) goto L_12d72de5;
  /* 12d72dd1 mov edx, dword ptr [0x12d7e49c] */
  EDX = (r32((uint32_t)(0x12d7e49c)));
  /* 12d72dd7 push edx */
  push32((uint32_t)(EDX));
  /* 12d72dd8 call 0x12d730e0 */
  push32(0x12d72dddu); f_12d730e0();
  /* 12d72ddd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72de0 mov dword ptr [0x12d7e49c], eax */
  w32((uint32_t)(0x12d7e49c), (EAX));
L_12d72de5:;
  /* 12d72de5 cmp dword ptr [0x12d7e49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72dec jne 0x12d72ea5 */
  if (!C.zf) goto L_12d72ea5;
  /* 12d72df2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72df6 je 0x12d72e17 */
  if (C.zf) goto L_12d72e17;
  /* 12d72df8 cmp dword ptr [0x12d7e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72dff je 0x12d72e17 */
  if (C.zf) goto L_12d72e17;
  /* 12d72e01 call 0x12d72880 */
  push32(0x12d72e06u); f_12d72880();
  /* 12d72e06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d72e08 je 0x12d72e12 */
  if (C.zf) goto L_12d72e12;
  /* 12d72e0a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d72e0d jmp 0x12d7305b */
  goto L_12d7305b;
L_12d72e12:;
  /* 12d72e12 jmp 0x12d72ea5 */
  goto L_12d72ea5;
L_12d72e17:;
  /* 12d72e17 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72e1b je 0x12d72e24 */
  if (C.zf) goto L_12d72e24;
  /* 12d72e1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72e1f jmp 0x12d7305b */
  goto L_12d7305b;
L_12d72e24:;
  /* 12d72e24 cmp dword ptr [0x12d7e49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72e2b jne 0x12d72e64 */
  if (!C.zf) goto L_12d72e64;
  /* 12d72e2d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12d72e32 push 0x12d7a8f8 */
  push32((uint32_t)(0x12d7a8f8u));
  /* 12d72e37 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d72e39 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d72e3b call 0x12d62d80 */
  push32(0x12d72e40u); f_12d62d80();
  /* 12d72e40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72e43 mov dword ptr [0x12d7e49c], eax */
  w32((uint32_t)(0x12d7e49c), (EAX));
  /* 12d72e48 cmp dword ptr [0x12d7e49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72e4f jne 0x12d72e59 */
  if (!C.zf) goto L_12d72e59;
  /* 12d72e51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d72e54 jmp 0x12d7305b */
  goto L_12d7305b;
L_12d72e59:;
  /* 12d72e59 mov eax, dword ptr [0x12d7e49c] */
  EAX = (r32((uint32_t)(0x12d7e49c)));
  /* 12d72e5e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12d72e64:;
  /* 12d72e64 cmp dword ptr [0x12d7e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72e6b jne 0x12d72ea5 */
  if (!C.zf) goto L_12d72ea5;
  /* 12d72e6d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12d72e72 push 0x12d7a8f8 */
  push32((uint32_t)(0x12d7a8f8u));
  /* 12d72e77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d72e79 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d72e7b call 0x12d62d80 */
  push32(0x12d72e80u); f_12d62d80();
  /* 12d72e80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72e83 mov dword ptr [0x12d7e4a4], eax */
  w32((uint32_t)(0x12d7e4a4), (EAX));
  /* 12d72e88 cmp dword ptr [0x12d7e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72e8f jne 0x12d72e99 */
  if (!C.zf) goto L_12d72e99;
  /* 12d72e91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d72e94 jmp 0x12d7305b */
  goto L_12d7305b;
L_12d72e99:;
  /* 12d72e99 mov ecx, dword ptr [0x12d7e4a4] */
  ECX = (r32((uint32_t)(0x12d7e4a4)));
  /* 12d72e9f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12d72ea5:;
  /* 12d72ea5 mov edx, dword ptr [0x12d7e49c] */
  EDX = (r32((uint32_t)(0x12d7e49c)));
  /* 12d72eab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d72eae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d72eb1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d72eb4 push eax */
  push32((uint32_t)(EAX));
  /* 12d72eb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72eb8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72eb9 call 0x12d73060 */
  push32(0x12d72ebeu); f_12d73060();
  /* 12d72ebe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72ec1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d72ec4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72ec8 jl 0x12d72f61 */
  if ((C.sf!=C.of)) goto L_12d72f61;
  /* 12d72ece mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d72ed1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72ed4 je 0x12d72f61 */
  if (C.zf) goto L_12d72f61;
  /* 12d72eda cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72ede je 0x12d72f53 */
  if (C.zf) goto L_12d72f53;
  /* 12d72ee0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d72ee2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72ee5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d72ee8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d72eeb push edx */
  push32((uint32_t)(EDX));
  /* 12d72eec call 0x12d63810 */
  push32(0x12d72ef1u); f_12d63810();
  /* 12d72ef1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72ef4 jmp 0x12d72eff */
  goto L_12d72eff;
L_12d72ef6:;
  /* 12d72ef6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72ef9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72efc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d72eff:;
  /* 12d72eff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72f02 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d72f05 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72f09 je 0x12d72f20 */
  if (C.zf) goto L_12d72f20;
  /* 12d72f0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72f0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d72f11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72f14 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12d72f17 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12d72f1b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12d72f1e jmp 0x12d72ef6 */
  goto L_12d72ef6;
L_12d72f20:;
  /* 12d72f20 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12d72f25 push 0x12d7a8f8 */
  push32((uint32_t)(0x12d7a8f8u));
  /* 12d72f2a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d72f2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72f2f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12d72f32 push eax */
  push32((uint32_t)(EAX));
  /* 12d72f33 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d72f36 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72f37 call 0x12d63210 */
  push32(0x12d72f3cu); f_12d63210();
  /* 12d72f3c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72f3f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d72f42 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72f46 je 0x12d72f51 */
  if (C.zf) goto L_12d72f51;
  /* 12d72f48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d72f4b mov dword ptr [0x12d7e49c], edx */
  w32((uint32_t)(0x12d7e49c), (EDX));
L_12d72f51:;
  /* 12d72f51 jmp 0x12d72f5f */
  goto L_12d72f5f;
L_12d72f53:;
  /* 12d72f53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72f56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d72f59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72f5c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12d72f5f:;
  /* 12d72f5f jmp 0x12d72fd4 */
  goto L_12d72fd4;
L_12d72f61:;
  /* 12d72f61 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72f65 jne 0x12d72fcd */
  if (!C.zf) goto L_12d72fcd;
  /* 12d72f67 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72f6b jge 0x12d72f75 */
  if ((C.sf==C.of)) goto L_12d72f75;
  /* 12d72f6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72f70 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d72f72 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d72f75:;
  /* 12d72f75 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12d72f7a push 0x12d7a8f8 */
  push32((uint32_t)(0x12d7a8f8u));
  /* 12d72f7f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d72f81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72f84 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12d72f8b push edx */
  push32((uint32_t)(EDX));
  /* 12d72f8c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d72f8f push eax */
  push32((uint32_t)(EAX));
  /* 12d72f90 call 0x12d63210 */
  push32(0x12d72f95u); f_12d63210();
  /* 12d72f95 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72f98 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d72f9b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72f9f jne 0x12d72fa9 */
  if (!C.zf) goto L_12d72fa9;
  /* 12d72fa1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d72fa4 jmp 0x12d7305b */
  goto L_12d7305b;
L_12d72fa9:;
  /* 12d72fa9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72fac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d72faf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72fb2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12d72fb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d72fb8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d72fbb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12d72fc3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d72fc6 mov dword ptr [0x12d7e49c], eax */
  w32((uint32_t)(0x12d7e49c), (EAX));
  /* 12d72fcb jmp 0x12d72fd4 */
  goto L_12d72fd4;
L_12d72fcd:;
  /* 12d72fcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d72fcf jmp 0x12d7305b */
  goto L_12d7305b;
L_12d72fd4:;
  /* 12d72fd4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d72fd8 je 0x12d73059 */
  if (C.zf) goto L_12d73059;
  /* 12d72fda push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12d72fdf push 0x12d7a8f8 */
  push32((uint32_t)(0x12d7a8f8u));
  /* 12d72fe4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d72fe6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d72fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d72fea call 0x12d65bb0 */
  push32(0x12d72fefu); f_12d65bb0();
  /* 12d72fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72ff2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72ff5 push eax */
  push32((uint32_t)(EAX));
  /* 12d72ff6 call 0x12d62d80 */
  push32(0x12d72ffbu); f_12d62d80();
  /* 12d72ffb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d72ffe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d73001 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d73005 je 0x12d73059 */
  if (C.zf) goto L_12d73059;
  /* 12d73007 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7300a push edx */
  push32((uint32_t)(EDX));
  /* 12d7300b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d7300e push eax */
  push32((uint32_t)(EAX));
  /* 12d7300f call 0x12d65d30 */
  push32(0x12d73014u); f_12d65d30();
  /* 12d73014 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d73017 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d7301a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d7301d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d73020 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d73022 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d73025 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d73028 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d7302b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d7302e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d73031 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d73034 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d73037 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d73039 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d7303b not edx */
  EDX = (~(EDX));
  /* 12d7303d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12d73040 push edx */
  push32((uint32_t)(EDX));
  /* 12d73041 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d73044 push eax */
  push32((uint32_t)(EAX));
  /* 12d73045 call dword ptr [0x12d80244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80244))), 0x12d7304bu);
  /* 12d7304b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d7304d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d73050 push ecx */
  push32((uint32_t)(ECX));
  /* 12d73051 call 0x12d63810 */
  push32(0x12d73056u); f_12d63810();
  /* 12d73056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d73059:;
  /* 12d73059 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d7305b:;
  /* 12d7305b pop esi */
  ESI = (pop32());
  /* 12d7305c mov esp, ebp */
  ESP = (EBP);
  /* 12d7305e pop ebp */
  EBP = (pop32());
  /* 12d7305f ret  */
  ESPCHK(0x12d72d80u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12d73060 (124 bytes, 47 insns) */
void f_12d73060(void) {
  FTRACE(0x12d73060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d73060 push ebp */
  push32((uint32_t)(EBP));
  /* 12d73061 mov ebp, esp */
  EBP = (ESP);
  /* 12d73063 push ecx */
  push32((uint32_t)(ECX));
  /* 12d73064 mov eax, dword ptr [0x12d7e49c] */
  EAX = (r32((uint32_t)(0x12d7e49c)));
  /* 12d73069 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d7306c jmp 0x12d73077 */
  goto L_12d73077;
L_12d7306e:;
  /* 12d7306e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d73071 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d73074 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d73077:;
  /* 12d73077 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d7307a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d7307d je 0x12d730ca */
  if (C.zf) goto L_12d730ca;
  /* 12d7307f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d73082 push eax */
  push32((uint32_t)(EAX));
  /* 12d73083 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d73086 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d73088 push edx */
  push32((uint32_t)(EDX));
  /* 12d73089 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7308c push eax */
  push32((uint32_t)(EAX));
  /* 12d7308d call 0x12d72830 */
  push32(0x12d73092u); f_12d72830();
  /* 12d73092 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d73095 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d73097 jne 0x12d730c8 */
  if (!C.zf) goto L_12d730c8;
  /* 12d73099 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d7309c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d7309e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d730a1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12d730a5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d730a8 je 0x12d730ba */
  if (C.zf) goto L_12d730ba;
  /* 12d730aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d730ad mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d730af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d730b2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12d730b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d730b8 jne 0x12d730c8 */
  if (!C.zf) goto L_12d730c8;
L_12d730ba:;
  /* 12d730ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d730bd sub eax, dword ptr [0x12d7e49c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7e49c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d730c3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12d730c6 jmp 0x12d730d8 */
  goto L_12d730d8;
L_12d730c8:;
  /* 12d730c8 jmp 0x12d7306e */
  goto L_12d7306e;
L_12d730ca:;
  /* 12d730ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d730cd sub eax, dword ptr [0x12d7e49c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7e49c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d730d3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12d730d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12d730d8:;
  /* 12d730d8 mov esp, ebp */
  ESP = (EBP);
  /* 12d730da pop ebp */
  EBP = (pop32());
  /* 12d730db ret  */
  ESPCHK(0x12d73060u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12d730e0 (238 bytes, 80 insns) */
void f_12d730e0(void) {
  FTRACE(0x12d730e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d730e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d730e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d730e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d730e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d730ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d730f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d730f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d730f7 jne 0x12d73100 */
  if (!C.zf) goto L_12d73100;
  /* 12d730f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d730fb jmp 0x12d731ca */
  goto L_12d731ca;
L_12d73100:;
  /* 12d73100 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d73103 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d73105 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d73108 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7310b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d7310e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d73110 je 0x12d7311d */
  if (C.zf) goto L_12d7311d;
  /* 12d73112 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d73115 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d73118 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d7311b jmp 0x12d73100 */
  goto L_12d73100;
L_12d7311d:;
  /* 12d7311d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12d73122 push 0x12d7a8f8 */
  push32((uint32_t)(0x12d7a8f8u));
  /* 12d73127 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d73129 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d7312c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12d73133 push eax */
  push32((uint32_t)(EAX));
  /* 12d73134 call 0x12d62d80 */
  push32(0x12d73139u); f_12d62d80();
  /* 12d73139 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7313c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d7313f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d73142 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d73145 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d73149 jne 0x12d73155 */
  if (!C.zf) goto L_12d73155;
  /* 12d7314b push 9 */
  push32((uint32_t)(0x9u));
  /* 12d7314d call 0x12d61cf0 */
  push32(0x12d73152u); f_12d61cf0();
  /* 12d73152 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d73155:;
  /* 12d73155 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d73158 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d7315b:;
  /* 12d7315b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d7315e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d73161 je 0x12d731be */
  if (C.zf) goto L_12d731be;
  /* 12d73163 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12d73168 push 0x12d7a8f8 */
  push32((uint32_t)(0x12d7a8f8u));
  /* 12d7316d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d7316f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d73172 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d73174 push edx */
  push32((uint32_t)(EDX));
  /* 12d73175 call 0x12d65bb0 */
  push32(0x12d7317au); f_12d65bb0();
  /* 12d7317a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7317d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d73180 push eax */
  push32((uint32_t)(EAX));
  /* 12d73181 call 0x12d62d80 */
  push32(0x12d73186u); f_12d62d80();
  /* 12d73186 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d73189 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d7318c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d7318e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d73191 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d73194 je 0x12d731aa */
  if (C.zf) goto L_12d731aa;
  /* 12d73196 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d73199 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d7319b push ecx */
  push32((uint32_t)(ECX));
  /* 12d7319c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d7319f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d731a1 push eax */
  push32((uint32_t)(EAX));
  /* 12d731a2 call 0x12d65d30 */
  push32(0x12d731a7u); f_12d65d30();
  /* 12d731a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d731aa:;
  /* 12d731aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d731ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d731b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d731b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d731b6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d731b9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d731bc jmp 0x12d7315b */
  goto L_12d7315b;
L_12d731be:;
  /* 12d731be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d731c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d731c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d731ca:;
  /* 12d731ca mov esp, ebp */
  ESP = (EBP);
  /* 12d731cc pop ebp */
  EBP = (pop32());
  /* 12d731cd ret  */
  ESPCHK(0x12d730e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100131d0 @ 0x12d731d0 (237 bytes, 81 insns) */
void f_12d731d0(void) {
  FTRACE(0x12d731d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d731d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d731d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d731d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d731d4 cmp dword ptr [0x12d7fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d731db jne 0x12d731f2 */
  if (!C.zf) goto L_12d731f2;
  /* 12d731dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d731e0 push eax */
  push32((uint32_t)(EAX));
  /* 12d731e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d731e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d731e5 call 0x12d732d0 */
  push32(0x12d731eau); f_12d732d0();
  /* 12d731ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d731ed jmp 0x12d732b9 */
  goto L_12d732b9;
L_12d731f2:;
  /* 12d731f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d731f4 call 0x12d66780 */
  push32(0x12d731f9u); f_12d66780();
  /* 12d731f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d731fc jmp 0x12d73207 */
  goto L_12d73207;
L_12d731fe:;
  /* 12d731fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d73201 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d73204 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12d73207:;
  /* 12d73207 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7320a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12d7320e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12d73212 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d73215 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d7321b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d7321d je 0x12d7329b */
  if (C.zf) goto L_12d7329b;
  /* 12d7321f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d73222 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d73227 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d73229 mov cl, byte ptr [eax + 0x12d7fd01] */
  CL = (r8((uint32_t)(EAX + 0x12d7fd01)));
  /* 12d7322f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d73232 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d73234 je 0x12d73286 */
  if (C.zf) goto L_12d73286;
  /* 12d73236 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d73239 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7323c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d7323f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d73242 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d73244 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d73246 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d73248 jne 0x12d73258 */
  if (!C.zf) goto L_12d73258;
  /* 12d7324a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d7324c call 0x12d66820 */
  push32(0x12d73251u); f_12d66820();
  /* 12d73251 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d73254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d73256 jmp 0x12d732b9 */
  goto L_12d732b9;
L_12d73258:;
  /* 12d73258 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d7325b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d73261 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12d73264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d73267 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d73269 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d7326b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d7326d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d73270 jne 0x12d73284 */
  if (!C.zf) goto L_12d73284;
  /* 12d73272 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d73274 call 0x12d66820 */
  push32(0x12d73279u); f_12d66820();
  /* 12d73279 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d7327c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d7327f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d73282 jmp 0x12d732b9 */
  goto L_12d732b9;
L_12d73284:;
  /* 12d73284 jmp 0x12d73296 */
  goto L_12d73296;
L_12d73286:;
  /* 12d73286 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d73289 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d7328f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d73292 jne 0x12d73296 */
  if (!C.zf) goto L_12d73296;
  /* 12d73294 jmp 0x12d7329b */
  goto L_12d7329b;
L_12d73296:;
  /* 12d73296 jmp 0x12d731fe */
  goto L_12d731fe;
L_12d7329b:;
  /* 12d7329b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d7329d call 0x12d66820 */
  push32(0x12d732a2u); f_12d66820();
  /* 12d732a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d732a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d732a8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d732ad cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d732b0 jne 0x12d732b7 */
  if (!C.zf) goto L_12d732b7;
  /* 12d732b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d732b5 jmp 0x12d732b9 */
  goto L_12d732b9;
L_12d732b7:;
  /* 12d732b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d732b9:;
  /* 12d732b9 mov esp, ebp */
  ESP = (EBP);
  /* 12d732bb pop ebp */
  EBP = (pop32());
  /* 12d732bc ret  */
  ESPCHK(0x12d731d0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12d732d0 (193 bytes, 87 insns) */
void f_12d732d0(void) {
  FTRACE(0x12d732d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d732d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d732d2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12d732d6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d732d7 mov ebx, eax */
  EBX = (EAX);
  /* 12d732d9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12d732dc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d732e0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12d732e6 je 0x12d732fb */
  if (C.zf) goto L_12d732fb;
L_12d732e8:;
  /* 12d732e8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12d732ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12d732eb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d732ed je 0x12d732c0 */
  if (C.zf) { jmp_ind(0x12d732c0u); return; }
  /* 12d732ef test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12d732f1 je 0x12d73344 */
  if (C.zf) goto L_12d73344;
  /* 12d732f3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12d732f9 jne 0x12d732e8 */
  if (!C.zf) goto L_12d732e8;
L_12d732fb:;
  /* 12d732fb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12d732fd push edi */
  push32((uint32_t)(EDI));
  /* 12d732fe mov eax, ebx */
  EAX = (EBX);
  /* 12d73300 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12d73303 push esi */
  push32((uint32_t)(ESI));
  /* 12d73304 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12d73306:;
  /* 12d73306 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12d73308 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12d7330d mov eax, ecx */
  EAX = (ECX);
  /* 12d7330f mov esi, edi */
  ESI = (EDI);
  /* 12d73311 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12d73313 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d73315 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d73317 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d7331a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d7331d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12d7331f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12d73321 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d73324 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12d7332a jne 0x12d73348 */
  if (!C.zf) goto L_12d73348;
  /* 12d7332c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12d73331 je 0x12d73306 */
  if (C.zf) goto L_12d73306;
  /* 12d73333 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12d73338 jne 0x12d73342 */
  if (!C.zf) goto L_12d73342;
  /* 12d7333a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12d73340 jne 0x12d73306 */
  if (!C.zf) goto L_12d73306;
L_12d73342:;
  /* 12d73342 pop esi */
  ESI = (pop32());
  /* 12d73343 pop edi */
  EDI = (pop32());
L_12d73344:;
  /* 12d73344 pop ebx */
  EBX = (pop32());
  /* 12d73345 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d73347 ret  */
  ESPCHK(0x12d732d0u, _esp0);
  ESP += 4; return;
L_12d73348:;
  /* 12d73348 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12d7334b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d7334d je 0x12d73385 */
  if (C.zf) goto L_12d73385;
  /* 12d7334f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d73351 je 0x12d73342 */
  if (C.zf) goto L_12d73342;
  /* 12d73353 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d73355 je 0x12d7337e */
  if (C.zf) goto L_12d7337e;
  /* 12d73357 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12d73359 je 0x12d73342 */
  if (C.zf) goto L_12d73342;
  /* 12d7335b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d7335e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d73360 je 0x12d73377 */
  if (C.zf) goto L_12d73377;
  /* 12d73362 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d73364 je 0x12d73342 */
  if (C.zf) goto L_12d73342;
  /* 12d73366 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d73368 je 0x12d73370 */
  if (C.zf) goto L_12d73370;
  /* 12d7336a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12d7336c je 0x12d73342 */
  if (C.zf) goto L_12d73342;
  /* 12d7336e jmp 0x12d73306 */
  goto L_12d73306;
L_12d73370:;
  /* 12d73370 pop esi */
  ESI = (pop32());
  /* 12d73371 pop edi */
  EDI = (pop32());
  /* 12d73372 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12d73375 pop ebx */
  EBX = (pop32());
  /* 12d73376 ret  */
  ESPCHK(0x12d732d0u, _esp0);
  ESP += 4; return;
L_12d73377:;
  /* 12d73377 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12d7337a pop esi */
  ESI = (pop32());
  /* 12d7337b pop edi */
  EDI = (pop32());
  /* 12d7337c pop ebx */
  EBX = (pop32());
  /* 12d7337d ret  */
  ESPCHK(0x12d732d0u, _esp0);
  ESP += 4; return;
L_12d7337e:;
  /* 12d7337e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12d73381 pop esi */
  ESI = (pop32());
  /* 12d73382 pop edi */
  EDI = (pop32());
  /* 12d73383 pop ebx */
  EBX = (pop32());
  /* 12d73384 ret  */
  ESPCHK(0x12d732d0u, _esp0);
  ESP += 4; return;
L_12d73385:;
  /* 12d73385 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12d73388 pop esi */
  ESI = (pop32());
  /* 12d73389 pop edi */
  EDI = (pop32());
  /* 12d7338a pop ebx */
  EBX = (pop32());
  /* 12d7338b ret  */
  ESPCHK(0x12d732d0u, _esp0);
  ESP += 4; return;
  /* 12d7338c jmp dword ptr [0x12d80280] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12d80280)))); return;
}

/* RtlUnwind @ 0x12d734dc (6 bytes, 1 insns) */
void f_12d734dc(void) {
  FTRACE(0x12d734dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d734dc jmp dword ptr [0x12d8027c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12d8027c)))); return;
}

