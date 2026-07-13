#include "recomp.h"

/* __CallSettingFrame@12 @ 0x10ede2f0 (76 bytes, 34 insns) */
void f_10ede2f0(void) {
  FTRACE(0x10ede2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede2f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ede2f3 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ede2f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ede2f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ede2f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ede2fb add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede2fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ede301 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede304 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede305 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10ede308 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ede30b mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede30e call 0x10ed9c1d */
  push32(0x10ede313u); f_10ed9c1d();
  /* 10ede313 push esi */
  push32((uint32_t)(ESI));
  /* 10ede314 push edi */
  push32((uint32_t)(EDI));
  /* 10ede315 call eax */
  call_ind((uint32_t)(EAX), 0x10ede317u);
  /* 10ede317 pop edi */
  EDI = (pop32());
  /* 10ede318 pop esi */
  ESI = (pop32());
  /* 10ede319 mov ebx, ebp */
  EBX = (EBP);
  /* 10ede31b pop ebp */
  EBP = (pop32());
  /* 10ede31c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ede31f push ebp */
  push32((uint32_t)(EBP));
  /* 10ede320 mov ebp, ebx */
  EBP = (EBX);
  /* 10ede322 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede328 jne 0x10ede32f */
  if (!C.zf) goto L_10ede32f;
  /* 10ede32a mov ecx, 2 */
  ECX = (0x2u);
L_10ede32f:;
  /* 10ede32f push ecx */
  push32((uint32_t)(ECX));
  /* 10ede330 call 0x10ed9c1d */
  push32(0x10ede335u); f_10ed9c1d();
  /* 10ede335 pop ebp */
  EBP = (pop32());
  /* 10ede336 pop ecx */
  ECX = (pop32());
  /* 10ede337 pop ebx */
  EBX = (pop32());
  /* 10ede338 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ede339 ret 0xc */
  ESPCHK(0x10ede2f0u, _esp0);
  ESP += 16; return;
}

/* FUN_1000e340 @ 0x10ede340 (130 bytes, 42 insns) */
void f_10ede340(void) {
  FTRACE(0x10ede340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede340 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede341 mov ebp, esp */
  EBP = (ESP);
  /* 10ede343 push ecx */
  push32((uint32_t)(ECX));
  /* 10ede344 call 0x10edb540 */
  push32(0x10ede349u); f_10edb540();
  /* 10ede349 call dword ptr [0x10f123e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123e4))), 0x10ede34fu);
  /* 10ede34f mov dword ptr [0x10f0cf20], eax */
  w32((uint32_t)(0x10f0cf20), (EAX));
  /* 10ede354 cmp dword ptr [0x10f0cf20], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cf20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede35b jne 0x10ede361 */
  if (!C.zf) goto L_10ede361;
  /* 10ede35d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ede35f jmp 0x10ede3be */
  goto L_10ede3be;
L_10ede361:;
  /* 10ede361 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10ede363 push 0x10f09cbc */
  push32((uint32_t)(0x10f09cbcu));
  /* 10ede368 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ede36a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10ede36c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede36e call 0x10edbb30 */
  push32(0x10ede373u); f_10edbb30();
  /* 10ede373 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede376 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ede379 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede37d je 0x10ede394 */
  if (C.zf) goto L_10ede394;
  /* 10ede37f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede382 push eax */
  push32((uint32_t)(EAX));
  /* 10ede383 mov ecx, dword ptr [0x10f0cf20] */
  ECX = (r32((uint32_t)(0x10f0cf20)));
  /* 10ede389 push ecx */
  push32((uint32_t)(ECX));
  /* 10ede38a call dword ptr [0x10f123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123e8))), 0x10ede390u);
  /* 10ede390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ede392 jne 0x10ede398 */
  if (!C.zf) goto L_10ede398;
L_10ede394:;
  /* 10ede394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ede396 jmp 0x10ede3be */
  goto L_10ede3be;
L_10ede398:;
  /* 10ede398 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede39b push edx */
  push32((uint32_t)(EDX));
  /* 10ede39c call 0x10ede400 */
  push32(0x10ede3a1u); f_10ede400();
  /* 10ede3a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede3a4 call dword ptr [0x10f123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123ec))), 0x10ede3aau);
  /* 10ede3aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede3ad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ede3af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede3b2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10ede3b9 mov eax, 1 */
  EAX = (0x1u);
L_10ede3be:;
  /* 10ede3be mov esp, ebp */
  ESP = (EBP);
  /* 10ede3c0 pop ebp */
  EBP = (pop32());
  /* 10ede3c1 ret  */
  ESPCHK(0x10ede340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3d0 @ 0x10ede3d0 (41 bytes, 11 insns) */
void f_10ede3d0(void) {
  FTRACE(0x10ede3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede3d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ede3d3 call 0x10edb580 */
  push32(0x10ede3d8u); f_10edb580();
  /* 10ede3d8 cmp dword ptr [0x10f0cf20], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cf20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede3df je 0x10ede3f7 */
  if (C.zf) goto L_10ede3f7;
  /* 10ede3e1 mov eax, dword ptr [0x10f0cf20] */
  EAX = (r32((uint32_t)(0x10f0cf20)));
  /* 10ede3e6 push eax */
  push32((uint32_t)(EAX));
  /* 10ede3e7 call dword ptr [0x10f123e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123e0))), 0x10ede3edu);
  /* 10ede3ed mov dword ptr [0x10f0cf20], 0xffffffff */
  w32((uint32_t)(0x10f0cf20), (0xffffffffu));
L_10ede3f7:;
  /* 10ede3f7 pop ebp */
  EBP = (pop32());
  /* 10ede3f8 ret  */
  ESPCHK(0x10ede3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e400 @ 0x10ede400 (25 bytes, 8 insns) */
void f_10ede400(void) {
  FTRACE(0x10ede400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede400 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede401 mov ebp, esp */
  EBP = (ESP);
  /* 10ede403 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede406 mov dword ptr [eax + 0x50], 0x10f0d240 */
  w32((uint32_t)(EAX + 0x50), (0x10f0d240u));
  /* 10ede40d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede410 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10ede417 pop ebp */
  EBP = (pop32());
  /* 10ede418 ret  */
  ESPCHK(0x10ede400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e420 @ 0x10ede420 (152 bytes, 48 insns) */
void f_10ede420(void) {
  FTRACE(0x10ede420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede420 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede421 mov ebp, esp */
  EBP = (ESP);
  /* 10ede423 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ede426 call dword ptr [0x10f123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123d4))), 0x10ede42cu);
  /* 10ede42c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ede42f mov eax, dword ptr [0x10f0cf20] */
  EAX = (r32((uint32_t)(0x10f0cf20)));
  /* 10ede434 push eax */
  push32((uint32_t)(EAX));
  /* 10ede435 call dword ptr [0x10f123d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123d8))), 0x10ede43bu);
  /* 10ede43b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ede43e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede442 jne 0x10ede4a7 */
  if (!C.zf) goto L_10ede4a7;
  /* 10ede444 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10ede449 push 0x10f09cbc */
  push32((uint32_t)(0x10f09cbcu));
  /* 10ede44e push 2 */
  push32((uint32_t)(0x2u));
  /* 10ede450 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10ede452 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede454 call 0x10edbb30 */
  push32(0x10ede459u); f_10edbb30();
  /* 10ede459 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede45c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ede45f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede463 je 0x10ede49d */
  if (C.zf) goto L_10ede49d;
  /* 10ede465 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede468 push ecx */
  push32((uint32_t)(ECX));
  /* 10ede469 mov edx, dword ptr [0x10f0cf20] */
  EDX = (r32((uint32_t)(0x10f0cf20)));
  /* 10ede46f push edx */
  push32((uint32_t)(EDX));
  /* 10ede470 call dword ptr [0x10f123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123e8))), 0x10ede476u);
  /* 10ede476 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ede478 je 0x10ede49d */
  if (C.zf) goto L_10ede49d;
  /* 10ede47a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede47d push eax */
  push32((uint32_t)(EAX));
  /* 10ede47e call 0x10ede400 */
  push32(0x10ede483u); f_10ede400();
  /* 10ede483 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede486 call dword ptr [0x10f123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123ec))), 0x10ede48cu);
  /* 10ede48c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede48f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ede491 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede494 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10ede49b jmp 0x10ede4a7 */
  goto L_10ede4a7;
L_10ede49d:;
  /* 10ede49d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10ede49f call 0x10eda190 */
  push32(0x10ede4a4u); f_10eda190();
  /* 10ede4a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ede4a7:;
  /* 10ede4a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ede4aa push eax */
  push32((uint32_t)(EAX));
  /* 10ede4ab call dword ptr [0x10f123dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123dc))), 0x10ede4b1u);
  /* 10ede4b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede4b4 mov esp, ebp */
  ESP = (EBP);
  /* 10ede4b6 pop ebp */
  EBP = (pop32());
  /* 10ede4b7 ret  */
  ESPCHK(0x10ede420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4c0 @ 0x10ede4c0 (263 bytes, 86 insns) */
void f_10ede4c0(void) {
  FTRACE(0x10ede4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede4c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ede4c3 cmp dword ptr [0x10f0cf20], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cf20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede4ca je 0x10ede5c5 */
  if (C.zf) goto L_10ede5c5;
  /* 10ede4d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede4d4 jne 0x10ede4e5 */
  if (!C.zf) goto L_10ede4e5;
  /* 10ede4d6 mov eax, dword ptr [0x10f0cf20] */
  EAX = (r32((uint32_t)(0x10f0cf20)));
  /* 10ede4db push eax */
  push32((uint32_t)(EAX));
  /* 10ede4dc call dword ptr [0x10f123d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123d8))), 0x10ede4e2u);
  /* 10ede4e2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ede4e5:;
  /* 10ede4e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede4e9 je 0x10ede5b6 */
  if (C.zf) goto L_10ede5b6;
  /* 10ede4ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede4f2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede4f6 je 0x10ede509 */
  if (C.zf) goto L_10ede509;
  /* 10ede4f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ede4fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede4fd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10ede500 push eax */
  push32((uint32_t)(EAX));
  /* 10ede501 call 0x10edc1b0 */
  push32(0x10ede506u); f_10edc1b0();
  /* 10ede506 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ede509:;
  /* 10ede509 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede50c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede510 je 0x10ede523 */
  if (C.zf) goto L_10ede523;
  /* 10ede512 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ede514 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede517 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10ede51a push eax */
  push32((uint32_t)(EAX));
  /* 10ede51b call 0x10edc1b0 */
  push32(0x10ede520u); f_10edc1b0();
  /* 10ede520 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ede523:;
  /* 10ede523 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede526 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede52a je 0x10ede53d */
  if (C.zf) goto L_10ede53d;
  /* 10ede52c push 2 */
  push32((uint32_t)(0x2u));
  /* 10ede52e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede531 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10ede534 push eax */
  push32((uint32_t)(EAX));
  /* 10ede535 call 0x10edc1b0 */
  push32(0x10ede53au); f_10edc1b0();
  /* 10ede53a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ede53d:;
  /* 10ede53d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede540 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede544 je 0x10ede557 */
  if (C.zf) goto L_10ede557;
  /* 10ede546 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ede548 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede54b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10ede54e push eax */
  push32((uint32_t)(EAX));
  /* 10ede54f call 0x10edc1b0 */
  push32(0x10ede554u); f_10edc1b0();
  /* 10ede554 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ede557:;
  /* 10ede557 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede55a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede55e je 0x10ede571 */
  if (C.zf) goto L_10ede571;
  /* 10ede560 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ede562 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede565 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10ede568 push eax */
  push32((uint32_t)(EAX));
  /* 10ede569 call 0x10edc1b0 */
  push32(0x10ede56eu); f_10edc1b0();
  /* 10ede56e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ede571:;
  /* 10ede571 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede574 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede578 je 0x10ede58b */
  if (C.zf) goto L_10ede58b;
  /* 10ede57a push 2 */
  push32((uint32_t)(0x2u));
  /* 10ede57c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede57f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10ede582 push eax */
  push32((uint32_t)(EAX));
  /* 10ede583 call 0x10edc1b0 */
  push32(0x10ede588u); f_10edc1b0();
  /* 10ede588 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ede58b:;
  /* 10ede58b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede58e cmp dword ptr [ecx + 0x50], 0x10f0d240 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10f0d240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede595 je 0x10ede5a8 */
  if (C.zf) goto L_10ede5a8;
  /* 10ede597 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ede599 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede59c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10ede59f push eax */
  push32((uint32_t)(EAX));
  /* 10ede5a0 call 0x10edc1b0 */
  push32(0x10ede5a5u); f_10edc1b0();
  /* 10ede5a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ede5a8:;
  /* 10ede5a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ede5aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede5ad push ecx */
  push32((uint32_t)(ECX));
  /* 10ede5ae call 0x10edc1b0 */
  push32(0x10ede5b3u); f_10edc1b0();
  /* 10ede5b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ede5b6:;
  /* 10ede5b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ede5b8 mov edx, dword ptr [0x10f0cf20] */
  EDX = (r32((uint32_t)(0x10f0cf20)));
  /* 10ede5be push edx */
  push32((uint32_t)(EDX));
  /* 10ede5bf call dword ptr [0x10f123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123e8))), 0x10ede5c5u);
L_10ede5c5:;
  /* 10ede5c5 pop ebp */
  EBP = (pop32());
  /* 10ede5c6 ret  */
  ESPCHK(0x10ede4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5d0 @ 0x10ede5d0 (11 bytes, 5 insns) */
void f_10ede5d0(void) {
  FTRACE(0x10ede5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ede5d3 call dword ptr [0x10f123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123ec))), 0x10ede5d9u);
  /* 10ede5d9 pop ebp */
  EBP = (pop32());
  /* 10ede5da ret  */
  ESPCHK(0x10ede5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5e0 @ 0x10ede5e0 (11 bytes, 5 insns) */
void f_10ede5e0(void) {
  FTRACE(0x10ede5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede5e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ede5e3 call dword ptr [0x10f123d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123d0))), 0x10ede5e9u);
  /* 10ede5e9 pop ebp */
  EBP = (pop32());
  /* 10ede5ea ret  */
  ESPCHK(0x10ede5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5f0 @ 0x10ede5f0 (92 bytes, 29 insns) */
void f_10ede5f0(void) {
  FTRACE(0x10ede5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede5f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ede5f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ede5f5 push 0x10f09cc8 */
  push32((uint32_t)(0x10f09cc8u));
  /* 10ede5fa push 0x10ee434c */
  push32((uint32_t)(0x10ee434cu));
  /* 10ede5ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ede605 push eax */
  push32((uint32_t)(EAX));
  /* 10ede606 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ede60d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ede610 push ebx */
  push32((uint32_t)(EBX));
  /* 10ede611 push esi */
  push32((uint32_t)(ESI));
  /* 10ede612 push edi */
  push32((uint32_t)(EDI));
  /* 10ede613 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ede616 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ede61d call 0x10ede420 */
  push32(0x10ede622u); f_10ede420();
  /* 10ede622 cmp dword ptr [eax + 0x60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede626 je 0x10ede650 */
  if (C.zf) goto L_10ede650;
  /* 10ede628 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ede62f call 0x10ede420 */
  push32(0x10ede634u); f_10ede420();
  /* 10ede634 call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x10ede637u);
  /* 10ede637 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ede63e jmp 0x10ede650 */
  goto L_10ede650;
  /* 10ede640 mov eax, 1 */
  EAX = (0x1u);
  /* 10ede645 ret  */
  ESPCHK(0x10ede5f0u, _esp0);
  ESP += 4; return;
  /* 10ede646 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ede649 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ede650:;
  /* 10ede650 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ede657 call 0x10ede65e */
  push32(0x10ede65cu); f_10ede65e();
  /* 10ede65c jmp 0x10ede664 */
  jmp_ind(0x10ede664u); return;
}

/* _abort @ 0x10ede65e (5 bytes, 2 insns) */
void f_10ede65e(void) {
  FTRACE(0x10ede65eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede65e call 0x10ee4650 */
  push32(0x10ede663u); f_10ee4650();
  /* 10ede663 ret  */
  ESPCHK(0x10ede65eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000e680 @ 0x10ede680 (29 bytes, 10 insns) */
void f_10ede680(void) {
  FTRACE(0x10ede680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede680 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede681 mov ebp, esp */
  EBP = (ESP);
  /* 10ede683 call 0x10ede420 */
  push32(0x10ede688u); f_10ede420();
  /* 10ede688 cmp dword ptr [eax + 0x64], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede68c je 0x10ede696 */
  if (C.zf) goto L_10ede696;
  /* 10ede68e call 0x10ede420 */
  push32(0x10ede693u); f_10ede420();
  /* 10ede693 call dword ptr [eax + 0x64] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x64))), 0x10ede696u);
L_10ede696:;
  /* 10ede696 call 0x10ede5f0 */
  push32(0x10ede69bu); f_10ede5f0();
  /* 10ede69b pop ebp */
  EBP = (pop32());
  /* 10ede69c ret  */
  ESPCHK(0x10ede680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6a0 @ 0x10ede6a0 (90 bytes, 27 insns) */
void f_10ede6a0(void) {
  FTRACE(0x10ede6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede6a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ede6a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ede6a5 push 0x10f09ce0 */
  push32((uint32_t)(0x10f09ce0u));
  /* 10ede6aa push 0x10ee434c */
  push32((uint32_t)(0x10ee434cu));
  /* 10ede6af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ede6b5 push eax */
  push32((uint32_t)(EAX));
  /* 10ede6b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ede6bd sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ede6c0 push ebx */
  push32((uint32_t)(EBX));
  /* 10ede6c1 push esi */
  push32((uint32_t)(ESI));
  /* 10ede6c2 push edi */
  push32((uint32_t)(EDI));
  /* 10ede6c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ede6c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ede6cd cmp dword ptr [0x10f0cf24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cf24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede6d4 je 0x10ede6fc */
  if (C.zf) goto L_10ede6fc;
  /* 10ede6d6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ede6dd call dword ptr [0x10f0cf24] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0cf24))), 0x10ede6e3u);
  /* 10ede6e3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ede6ea jmp 0x10ede6fc */
  goto L_10ede6fc;
  /* 10ede6ec mov eax, 1 */
  EAX = (0x1u);
  /* 10ede6f1 ret  */
  ESPCHK(0x10ede6a0u, _esp0);
  ESP += 4; return;
  /* 10ede6f2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ede6f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ede6fc:;
  /* 10ede6fc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ede703 call 0x10ede70a */
  push32(0x10ede708u); f_10ede70a();
  /* 10ede708 jmp 0x10ede710 */
  f_10ede710(); return;
}

/* FUN_1000e70a @ 0x10ede70a (6 bytes, 2 insns) */
void f_10ede70a(void) {
  FTRACE(0x10ede70au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede70a call 0x10ede5f0 */
  push32(0x10ede70fu); f_10ede5f0();
  /* 10ede70f ret  */
  ESPCHK(0x10ede70au, _esp0);
  ESP += 4; return;
}

/* FUN_1000e710 @ 0x10ede710 (17 bytes, 8 insns) */
void f_10ede710(void) {
  FTRACE(0x10ede710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede710 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ede713 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ede71a pop edi */
  EDI = (pop32());
  /* 10ede71b pop esi */
  ESI = (pop32());
  /* 10ede71c pop ebx */
  EBX = (pop32());
  /* 10ede71d mov esp, ebp */
  ESP = (EBP);
  /* 10ede71f pop ebp */
  EBP = (pop32());
  /* 10ede720 ret  */
  ESPCHK(0x10ede710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e730 @ 0x10ede730 (56 bytes, 15 insns) */
void f_10ede730(void) {
  FTRACE(0x10ede730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede730 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede731 mov ebp, esp */
  EBP = (ESP);
  /* 10ede733 cmp dword ptr [0x10f0cda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede73a je 0x10ede742 */
  if (C.zf) goto L_10ede742;
  /* 10ede73c call dword ptr [0x10f0cda0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0cda0))), 0x10ede742u);
L_10ede742:;
  /* 10ede742 push 0x10f0c630 */
  push32((uint32_t)(0x10f0c630u));
  /* 10ede747 push 0x10f0c318 */
  push32((uint32_t)(0x10f0c318u));
  /* 10ede74c call 0x10ede900 */
  push32(0x10ede751u); f_10ede900();
  /* 10ede751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede754 push 0x10f0c214 */
  push32((uint32_t)(0x10f0c214u));
  /* 10ede759 push 0x10f0c000 */
  push32((uint32_t)(0x10f0c000u));
  /* 10ede75e call 0x10ede900 */
  push32(0x10ede763u); f_10ede900();
  /* 10ede763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede766 pop ebp */
  EBP = (pop32());
  /* 10ede767 ret  */
  ESPCHK(0x10ede730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e770 @ 0x10ede770 (21 bytes, 10 insns) */
void f_10ede770(void) {
  FTRACE(0x10ede770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede770 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede771 mov ebp, esp */
  EBP = (ESP);
  /* 10ede773 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ede775 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ede777 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede77a push eax */
  push32((uint32_t)(EAX));
  /* 10ede77b call 0x10ede7f0 */
  push32(0x10ede780u); f_10ede7f0();
  /* 10ede780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede783 pop ebp */
  EBP = (pop32());
  /* 10ede784 ret  */
  ESPCHK(0x10ede770u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10ede790 (21 bytes, 10 insns) */
void f_10ede790(void) {
  FTRACE(0x10ede790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede790 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede791 mov ebp, esp */
  EBP = (ESP);
  /* 10ede793 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ede795 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede797 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede79a push eax */
  push32((uint32_t)(EAX));
  /* 10ede79b call 0x10ede7f0 */
  push32(0x10ede7a0u); f_10ede7f0();
  /* 10ede7a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede7a3 pop ebp */
  EBP = (pop32());
  /* 10ede7a4 ret  */
  ESPCHK(0x10ede790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7b0 @ 0x10ede7b0 (19 bytes, 9 insns) */
void f_10ede7b0(void) {
  FTRACE(0x10ede7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede7b1 mov ebp, esp */
  EBP = (ESP);
  /* 10ede7b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede7b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ede7b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ede7b9 call 0x10ede7f0 */
  push32(0x10ede7beu); f_10ede7f0();
  /* 10ede7be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede7c1 pop ebp */
  EBP = (pop32());
  /* 10ede7c2 ret  */
  ESPCHK(0x10ede7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7d0 @ 0x10ede7d0 (19 bytes, 9 insns) */
void f_10ede7d0(void) {
  FTRACE(0x10ede7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede7d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ede7d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede7d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede7d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ede7d9 call 0x10ede7f0 */
  push32(0x10ede7deu); f_10ede7f0();
  /* 10ede7de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede7e1 pop ebp */
  EBP = (pop32());
  /* 10ede7e2 ret  */
  ESPCHK(0x10ede7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7f0 @ 0x10ede7f0 (227 bytes, 61 insns) */
void f_10ede7f0(void) {
  FTRACE(0x10ede7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede7f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ede7f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ede7f4 call 0x10ede8e0 */
  push32(0x10ede7f9u); f_10ede8e0();
  /* 10ede7f9 cmp dword ptr [0x10f0f59c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f59c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede800 jne 0x10ede813 */
  if (!C.zf) goto L_10ede813;
  /* 10ede802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede805 push eax */
  push32((uint32_t)(EAX));
  /* 10ede806 call dword ptr [0x10f123c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123c8))), 0x10ede80cu);
  /* 10ede80c push eax */
  push32((uint32_t)(EAX));
  /* 10ede80d call dword ptr [0x10f123cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123cc))), 0x10ede813u);
L_10ede813:;
  /* 10ede813 mov dword ptr [0x10f0f598], 1 */
  w32((uint32_t)(0x10f0f598), (0x1u));
  /* 10ede81d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10ede820 mov byte ptr [0x10f0f594], cl */
  w8((uint32_t)(0x10f0f594), (CL));
  /* 10ede826 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede82a jne 0x10ede873 */
  if (!C.zf) goto L_10ede873;
  /* 10ede82c cmp dword ptr [0x10f10ff8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10ff8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede833 je 0x10ede861 */
  if (C.zf) goto L_10ede861;
  /* 10ede835 mov edx, dword ptr [0x10f10ff4] */
  EDX = (r32((uint32_t)(0x10f10ff4)));
  /* 10ede83b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ede83e:;
  /* 10ede83e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede841 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ede844 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ede847 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede84a cmp ecx, dword ptr [0x10f10ff8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f10ff8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede850 jb 0x10ede861 */
  if (C.cf) goto L_10ede861;
  /* 10ede852 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede855 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede858 je 0x10ede85f */
  if (C.zf) goto L_10ede85f;
  /* 10ede85a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede85d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10ede85fu);
L_10ede85f:;
  /* 10ede85f jmp 0x10ede83e */
  goto L_10ede83e;
L_10ede861:;
  /* 10ede861 push 0x10f0c93c */
  push32((uint32_t)(0x10f0c93cu));
  /* 10ede866 push 0x10f0c734 */
  push32((uint32_t)(0x10f0c734u));
  /* 10ede86b call 0x10ede900 */
  push32(0x10ede870u); f_10ede900();
  /* 10ede870 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ede873:;
  /* 10ede873 push 0x10f0cc48 */
  push32((uint32_t)(0x10f0cc48u));
  /* 10ede878 push 0x10f0ca40 */
  push32((uint32_t)(0x10f0ca40u));
  /* 10ede87d call 0x10ede900 */
  push32(0x10ede882u); f_10ede900();
  /* 10ede882 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede885 cmp dword ptr [0x10f0f5a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f5a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede88c jne 0x10ede8ae */
  if (!C.zf) goto L_10ede8ae;
  /* 10ede88e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ede890 call 0x10edcc30 */
  push32(0x10ede895u); f_10edcc30();
  /* 10ede895 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede898 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10ede89b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ede89d je 0x10ede8ae */
  if (C.zf) goto L_10ede8ae;
  /* 10ede89f mov dword ptr [0x10f0f5a0], 1 */
  w32((uint32_t)(0x10f0f5a0), (0x1u));
  /* 10ede8a9 call 0x10edd540 */
  push32(0x10ede8aeu); f_10edd540();
L_10ede8ae:;
  /* 10ede8ae cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede8b2 je 0x10ede8bb */
  if (C.zf) goto L_10ede8bb;
  /* 10ede8b4 call 0x10ede8f0 */
  push32(0x10ede8b9u); f_10ede8f0();
  /* 10ede8b9 jmp 0x10ede8cf */
  goto L_10ede8cf;
L_10ede8bb:;
  /* 10ede8bb mov dword ptr [0x10f0f59c], 1 */
  w32((uint32_t)(0x10f0f59c), (0x1u));
  /* 10ede8c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede8c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ede8c9 call dword ptr [0x10f12440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12440))), 0x10ede8cfu);
L_10ede8cf:;
  /* 10ede8cf mov esp, ebp */
  ESP = (EBP);
  /* 10ede8d1 pop ebp */
  EBP = (pop32());
  /* 10ede8d2 ret  */
  ESPCHK(0x10ede7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8e0 @ 0x10ede8e0 (15 bytes, 7 insns) */
void f_10ede8e0(void) {
  FTRACE(0x10ede8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede8e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ede8e3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10ede8e5 call 0x10edb620 */
  push32(0x10ede8eau); f_10edb620();
  /* 10ede8ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede8ed pop ebp */
  EBP = (pop32());
  /* 10ede8ee ret  */
  ESPCHK(0x10ede8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8f0 @ 0x10ede8f0 (15 bytes, 7 insns) */
void f_10ede8f0(void) {
  FTRACE(0x10ede8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede8f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ede8f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10ede8f5 call 0x10edb6c0 */
  push32(0x10ede8fau); f_10edb6c0();
  /* 10ede8fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede8fd pop ebp */
  EBP = (pop32());
  /* 10ede8fe ret  */
  ESPCHK(0x10ede8f0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10ede900 (37 bytes, 16 insns) */
void f_10ede900(void) {
  FTRACE(0x10ede900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede900 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede901 mov ebp, esp */
  EBP = (ESP);
L_10ede903:;
  /* 10ede903 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede906 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede909 jae 0x10ede923 */
  if (!C.cf) goto L_10ede923;
  /* 10ede90b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede90e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede911 je 0x10ede918 */
  if (C.zf) goto L_10ede918;
  /* 10ede913 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede916 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10ede918u);
L_10ede918:;
  /* 10ede918 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede91b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede91e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ede921 jmp 0x10ede903 */
  goto L_10ede903;
L_10ede923:;
  /* 10ede923 pop ebp */
  EBP = (pop32());
  /* 10ede924 ret  */
  ESPCHK(0x10ede900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e930 @ 0x10ede930 (238 bytes, 75 insns) */
void f_10ede930(void) {
  FTRACE(0x10ede930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede930 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede931 mov ebp, esp */
  EBP = (ESP);
  /* 10ede933 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ede936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede939 sub eax, 0x76c */
  { uint32_t _a=(EAX),_b=(0x76cu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ede93e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ede941 cmp dword ptr [ebp + 8], 0x46 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede945 jl 0x10ede950 */
  if ((C.sf!=C.of)) goto L_10ede950;
  /* 10ede947 cmp dword ptr [ebp + 8], 0x8a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede94e jle 0x10ede958 */
  if ((C.zf||C.sf!=C.of)) goto L_10ede958;
L_10ede950:;
  /* 10ede950 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ede953 jmp 0x10edea1a */
  goto L_10edea1a;
L_10ede958:;
  /* 10ede958 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ede95b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ede95e add edx, dword ptr [ecx*4 + 0x10f0d3ac] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x10f0d3ac))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede965 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10ede968 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede96b and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ede96e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ede970 jne 0x10ede981 */
  if (!C.zf) goto L_10ede981;
  /* 10ede972 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede976 jle 0x10ede981 */
  if ((C.zf||C.sf!=C.of)) goto L_10ede981;
  /* 10ede978 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ede97b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede97e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10ede981:;
  /* 10ede981 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede984 sub edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ede987 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ede98d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede990 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ede993 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ede996 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ede999 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede99b lea edx, [eax + ecx - 0x11] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x11));
  /* 10ede99f imul edx, edx, 0x18 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x18u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ede9a2 add edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede9a5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ede9a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede9ab imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ede9ae add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede9b1 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ede9b4 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede9b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ede9ba call 0x10ee4670 */
  push32(0x10ede9bfu); f_10ee4670();
  /* 10ede9bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede9c2 add ecx, dword ptr [0x10f0d2c8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f0d2c8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede9c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ede9cb mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ede9ce mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ede9d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede9d4 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ede9d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ede9da sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ede9dd mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10ede9e0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede9e3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ede9e6 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede9ea je 0x10edea0b */
  if (C.zf) goto L_10edea0b;
  /* 10ede9ec cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede9f0 jne 0x10edea17 */
  if (!C.zf) goto L_10edea17;
  /* 10ede9f2 cmp dword ptr [0x10f0d2cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0d2cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede9f9 je 0x10edea17 */
  if (C.zf) goto L_10edea17;
  /* 10ede9fb lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10ede9fe push eax */
  push32((uint32_t)(EAX));
  /* 10ede9ff call 0x10ee4a80 */
  push32(0x10edea04u); f_10ee4a80();
  /* 10edea04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edea07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edea09 je 0x10edea17 */
  if (C.zf) goto L_10edea17;
L_10edea0b:;
  /* 10edea0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edea0e add ecx, dword ptr [0x10f0d2d0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f0d2d0))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edea14 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10edea17:;
  /* 10edea17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10edea1a:;
  /* 10edea1a mov esp, ebp */
  ESP = (EBP);
  /* 10edea1c pop ebp */
  EBP = (pop32());
  /* 10edea1d ret  */
  ESPCHK(0x10ede930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea20 @ 0x10edea20 (804 bytes, 236 insns) */
void f_10edea20(void) {
  FTRACE(0x10edea20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edea20 push ebp */
  push32((uint32_t)(EBP));
  /* 10edea21 mov ebp, esp */
  EBP = (ESP);
  /* 10edea23 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edea26 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10edea2b push 0x10f09cf8 */
  push32((uint32_t)(0x10f09cf8u));
  /* 10edea30 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edea32 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10edea37 call 0x10edb720 */
  push32(0x10edea3cu); f_10edb720();
  /* 10edea3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edea3f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10edea42 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edea46 jne 0x10edea52 */
  if (!C.zf) goto L_10edea52;
  /* 10edea48 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10edea4a call 0x10eda190 */
  push32(0x10edea4fu); f_10eda190();
  /* 10edea4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edea52:;
  /* 10edea52 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edea55 mov dword ptr [0x10f10ea0], eax */
  w32((uint32_t)(0x10f10ea0), (EAX));
  /* 10edea5a mov dword ptr [0x10f10fdc], 0x20 */
  w32((uint32_t)(0x10f10fdc), (0x20u));
  /* 10edea64 jmp 0x10edea6f */
  goto L_10edea6f;
L_10edea66:;
  /* 10edea66 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edea69 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edea6c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10edea6f:;
  /* 10edea6f mov edx, dword ptr [0x10f10ea0] */
  EDX = (r32((uint32_t)(0x10f10ea0)));
  /* 10edea75 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edea7b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edea7e jae 0x10edeaa3 */
  if (!C.cf) goto L_10edeaa3;
  /* 10edea80 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edea83 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10edea87 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edea8a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10edea90 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edea93 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10edea97 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edea9a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10edeaa1 jmp 0x10edea66 */
  goto L_10edea66;
L_10edeaa3:;
  /* 10edeaa3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10edeaa6 push ecx */
  push32((uint32_t)(ECX));
  /* 10edeaa7 call dword ptr [0x10f123bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123bc))), 0x10edeaadu);
  /* 10edeaad mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10edeab0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edeab6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edeab8 je 0x10edec45 */
  if (C.zf) goto L_10edec45;
  /* 10edeabe cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edeac2 je 0x10edec45 */
  if (C.zf) goto L_10edec45;
  /* 10edeac8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edeacb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10edeacd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10edead0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edead3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edead6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edead9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edeadc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edeadf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10edeae2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edeae9 jge 0x10edeaf3 */
  if ((C.sf==C.of)) goto L_10edeaf3;
  /* 10edeaeb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10edeaee mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10edeaf1 jmp 0x10edeafa */
  goto L_10edeafa;
L_10edeaf3:;
  /* 10edeaf3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10edeafa:;
  /* 10edeafa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10edeafd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10edeb00 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10edeb07 jmp 0x10edeb12 */
  goto L_10edeb12;
L_10edeb09:;
  /* 10edeb09 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10edeb0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edeb0f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10edeb12:;
  /* 10edeb12 mov ecx, dword ptr [0x10f10fdc] */
  ECX = (r32((uint32_t)(0x10f10fdc)));
  /* 10edeb18 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edeb1b jge 0x10edebb2 */
  if ((C.sf==C.of)) goto L_10edebb2;
  /* 10edeb21 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10edeb26 push 0x10f09cf8 */
  push32((uint32_t)(0x10f09cf8u));
  /* 10edeb2b push 2 */
  push32((uint32_t)(0x2u));
  /* 10edeb2d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10edeb32 call 0x10edb720 */
  push32(0x10edeb37u); f_10edb720();
  /* 10edeb37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edeb3a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10edeb3d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edeb41 jne 0x10edeb4e */
  if (!C.zf) goto L_10edeb4e;
  /* 10edeb43 mov edx, dword ptr [0x10f10fdc] */
  EDX = (r32((uint32_t)(0x10f10fdc)));
  /* 10edeb49 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10edeb4c jmp 0x10edebb2 */
  goto L_10edebb2;
L_10edeb4e:;
  /* 10edeb4e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10edeb51 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edeb54 mov dword ptr [eax*4 + 0x10f10ea0], ecx */
  w32((uint32_t)(EAX*4 + 0x10f10ea0), (ECX));
  /* 10edeb5b mov edx, dword ptr [0x10f10fdc] */
  EDX = (r32((uint32_t)(0x10f10fdc)));
  /* 10edeb61 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edeb64 mov dword ptr [0x10f10fdc], edx */
  w32((uint32_t)(0x10f10fdc), (EDX));
  /* 10edeb6a jmp 0x10edeb75 */
  goto L_10edeb75;
L_10edeb6c:;
  /* 10edeb6c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edeb6f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edeb72 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10edeb75:;
  /* 10edeb75 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10edeb78 mov edx, dword ptr [ecx*4 + 0x10f10ea0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f10ea0)));
  /* 10edeb7f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edeb85 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edeb88 jae 0x10edebad */
  if (!C.cf) goto L_10edebad;
  /* 10edeb8a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edeb8d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10edeb91 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edeb94 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10edeb9a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edeb9d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10edeba1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edeba4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10edebab jmp 0x10edeb6c */
  goto L_10edeb6c;
L_10edebad:;
  /* 10edebad jmp 0x10edeb09 */
  goto L_10edeb09;
L_10edebb2:;
  /* 10edebb2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10edebb9 jmp 0x10edebd6 */
  goto L_10edebd6;
L_10edebbb:;
  /* 10edebbb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10edebbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edebc1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10edebc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edebc7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edebca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edebcd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10edebd0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edebd3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10edebd6:;
  /* 10edebd6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10edebd9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edebdc jge 0x10edec45 */
  if ((C.sf==C.of)) goto L_10edec45;
  /* 10edebde mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10edebe1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edebe4 je 0x10edec40 */
  if (C.zf) goto L_10edec40;
  /* 10edebe6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edebe9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edebec and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10edebef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edebf1 je 0x10edec40 */
  if (C.zf) goto L_10edec40;
  /* 10edebf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edebf6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10edebf9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10edebfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edebfe jne 0x10edec10 */
  if (!C.zf) goto L_10edec10;
  /* 10edec00 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10edec03 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10edec05 push edx */
  push32((uint32_t)(EDX));
  /* 10edec06 call dword ptr [0x10f123c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123c0))), 0x10edec0cu);
  /* 10edec0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edec0e je 0x10edec40 */
  if (C.zf) goto L_10edec40;
L_10edec10:;
  /* 10edec10 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10edec13 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10edec16 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10edec19 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10edec1c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10edec1f mov edx, dword ptr [eax*4 + 0x10f10ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f10ea0)));
  /* 10edec26 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edec28 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10edec2b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edec2e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10edec31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10edec33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10edec35 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edec38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edec3b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10edec3d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10edec40:;
  /* 10edec40 jmp 0x10edebbb */
  goto L_10edebbb;
L_10edec45:;
  /* 10edec45 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10edec4c jmp 0x10edec57 */
  goto L_10edec57;
L_10edec4e:;
  /* 10edec4e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10edec51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edec54 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10edec57:;
  /* 10edec57 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edec5b jge 0x10eded34 */
  if ((C.sf==C.of)) goto L_10eded34;
  /* 10edec61 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10edec64 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10edec67 mov edx, dword ptr [0x10f10ea0] */
  EDX = (r32((uint32_t)(0x10f10ea0)));
  /* 10edec6d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edec6f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10edec72 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edec75 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edec78 jne 0x10eded20 */
  if (!C.zf) goto L_10eded20;
  /* 10edec7e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edec81 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10edec85 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edec89 jne 0x10edec94 */
  if (!C.zf) goto L_10edec94;
  /* 10edec8b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10edec92 jmp 0x10edeca4 */
  goto L_10edeca4;
L_10edec94:;
  /* 10edec94 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10edec97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edec9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10edec9c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edec9e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edeca1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10edeca4:;
  /* 10edeca4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10edeca7 push eax */
  push32((uint32_t)(EAX));
  /* 10edeca8 call dword ptr [0x10f12410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12410))), 0x10edecaeu);
  /* 10edecae mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10edecb1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edecb5 je 0x10eded0f */
  if (C.zf) goto L_10eded0f;
  /* 10edecb7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10edecba push ecx */
  push32((uint32_t)(ECX));
  /* 10edecbb call dword ptr [0x10f123c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123c0))), 0x10edecc1u);
  /* 10edecc1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10edecc4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edecc8 je 0x10eded0f */
  if (C.zf) goto L_10eded0f;
  /* 10edecca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edeccd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10edecd0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10edecd2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10edecd5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edecdb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edecde jne 0x10edecf0 */
  if (!C.zf) goto L_10edecf0;
  /* 10edece0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edece3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10edece6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10edece8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edeceb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10edecee jmp 0x10eded0d */
  goto L_10eded0d;
L_10edecf0:;
  /* 10edecf0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10edecf3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edecf9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edecfc jne 0x10eded0d */
  if (!C.zf) goto L_10eded0d;
  /* 10edecfe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10eded01 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10eded04 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10eded07 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10eded0a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10eded0d:;
  /* 10eded0d jmp 0x10eded1e */
  goto L_10eded1e;
L_10eded0f:;
  /* 10eded0f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10eded12 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10eded15 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10eded18 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10eded1b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10eded1e:;
  /* 10eded1e jmp 0x10eded2f */
  goto L_10eded2f;
L_10eded20:;
  /* 10eded20 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10eded23 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10eded26 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10eded29 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10eded2c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10eded2f:;
  /* 10eded2f jmp 0x10edec4e */
  goto L_10edec4e;
L_10eded34:;
  /* 10eded34 mov eax, dword ptr [0x10f10fdc] */
  EAX = (r32((uint32_t)(0x10f10fdc)));
  /* 10eded39 push eax */
  push32((uint32_t)(EAX));
  /* 10eded3a call dword ptr [0x10f123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123c4))), 0x10eded40u);
  /* 10eded40 mov esp, ebp */
  ESP = (EBP);
  /* 10eded42 pop ebp */
  EBP = (pop32());
  /* 10eded43 ret  */
  ESPCHK(0x10edea20u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10eded50 (155 bytes, 45 insns) */
void f_10eded50(void) {
  FTRACE(0x10eded50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eded50 push ebp */
  push32((uint32_t)(EBP));
  /* 10eded51 mov ebp, esp */
  EBP = (ESP);
  /* 10eded53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eded56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10eded5d jmp 0x10eded68 */
  goto L_10eded68;
L_10eded5f:;
  /* 10eded5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eded62 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eded65 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10eded68:;
  /* 10eded68 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eded6c jge 0x10edede7 */
  if ((C.sf==C.of)) goto L_10edede7;
  /* 10eded6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eded71 cmp dword ptr [ecx*4 + 0x10f10ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10f10ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eded79 je 0x10edede2 */
  if (C.zf) goto L_10edede2;
  /* 10eded7b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eded7e mov eax, dword ptr [edx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f10ea0)));
  /* 10eded85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eded88 jmp 0x10eded93 */
  goto L_10eded93;
L_10eded8a:;
  /* 10eded8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eded8d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eded90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10eded93:;
  /* 10eded93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eded96 mov eax, dword ptr [edx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f10ea0)));
  /* 10eded9d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ededa2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ededa5 jae 0x10ededbf */
  if (!C.cf) goto L_10ededbf;
  /* 10ededa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ededaa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ededae je 0x10ededbd */
  if (C.zf) goto L_10ededbd;
  /* 10ededb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ededb3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ededb6 push edx */
  push32((uint32_t)(EDX));
  /* 10ededb7 call dword ptr [0x10f12420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12420))), 0x10ededbdu);
L_10ededbd:;
  /* 10ededbd jmp 0x10eded8a */
  goto L_10eded8a;
L_10ededbf:;
  /* 10ededbf push 2 */
  push32((uint32_t)(0x2u));
  /* 10ededc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ededc4 mov ecx, dword ptr [eax*4 + 0x10f10ea0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f10ea0)));
  /* 10ededcb push ecx */
  push32((uint32_t)(ECX));
  /* 10ededcc call 0x10edc1b0 */
  push32(0x10ededd1u); f_10edc1b0();
  /* 10ededd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ededd4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ededd7 mov dword ptr [edx*4 + 0x10f10ea0], 0 */
  w32((uint32_t)(EDX*4 + 0x10f10ea0), (0x0u));
L_10edede2:;
  /* 10edede2 jmp 0x10eded5f */
  goto L_10eded5f;
L_10edede7:;
  /* 10edede7 mov esp, ebp */
  ESP = (EBP);
  /* 10edede9 pop ebp */
  EBP = (pop32());
  /* 10ededea ret  */
  ESPCHK(0x10eded50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edf0 @ 0x10ededf0 (329 bytes, 102 insns) */
void f_10ededf0(void) {
  FTRACE(0x10ededf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ededf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ededf1 mov ebp, esp */
  EBP = (ESP);
  /* 10ededf3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ededf6 cmp dword ptr [0x10f10ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ededfd jne 0x10edee04 */
  if (!C.zf) goto L_10edee04;
  /* 10ededff call 0x10ee5790 */
  push32(0x10edee04u); f_10ee5790();
L_10edee04:;
  /* 10edee04 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10edee0b mov eax, dword ptr [0x10f0f4d4] */
  EAX = (r32((uint32_t)(0x10f0f4d4)));
  /* 10edee10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10edee13:;
  /* 10edee13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edee16 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10edee19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edee1b je 0x10edee49 */
  if (C.zf) goto L_10edee49;
  /* 10edee1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edee20 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edee23 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edee26 je 0x10edee31 */
  if (C.zf) goto L_10edee31;
  /* 10edee28 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edee2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edee2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10edee31:;
  /* 10edee31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edee34 push eax */
  push32((uint32_t)(EAX));
  /* 10edee35 call 0x10edfcb0 */
  push32(0x10edee3au); f_10edfcb0();
  /* 10edee3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edee3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edee40 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10edee44 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edee47 jmp 0x10edee13 */
  goto L_10edee13;
L_10edee49:;
  /* 10edee49 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10edee4b push 0x10f09d04 */
  push32((uint32_t)(0x10f09d04u));
  /* 10edee50 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edee52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edee55 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10edee5c push ecx */
  push32((uint32_t)(ECX));
  /* 10edee5d call 0x10edb720 */
  push32(0x10edee62u); f_10edb720();
  /* 10edee62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edee65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10edee68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edee6b mov dword ptr [0x10f0f57c], edx */
  w32((uint32_t)(0x10f0f57c), (EDX));
  /* 10edee71 cmp dword ptr [0x10f0f57c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f57c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edee78 jne 0x10edee84 */
  if (!C.zf) goto L_10edee84;
  /* 10edee7a push 9 */
  push32((uint32_t)(0x9u));
  /* 10edee7c call 0x10eda190 */
  push32(0x10edee81u); f_10eda190();
  /* 10edee81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edee84:;
  /* 10edee84 mov eax, dword ptr [0x10f0f4d4] */
  EAX = (r32((uint32_t)(0x10f0f4d4)));
  /* 10edee89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edee8c jmp 0x10edee97 */
  goto L_10edee97;
L_10edee8e:;
  /* 10edee8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edee91 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edee94 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10edee97:;
  /* 10edee97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edee9a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10edee9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edee9f je 0x10edef07 */
  if (C.zf) goto L_10edef07;
  /* 10edeea1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edeea4 push ecx */
  push32((uint32_t)(ECX));
  /* 10edeea5 call 0x10edfcb0 */
  push32(0x10edeeaau); f_10edfcb0();
  /* 10edeeaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edeead add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edeeb0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10edeeb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edeeb6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10edeeb9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edeebc je 0x10edef05 */
  if (C.zf) goto L_10edef05;
  /* 10edeebe push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10edeec0 push 0x10f09d04 */
  push32((uint32_t)(0x10f09d04u));
  /* 10edeec5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edeec7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edeeca push ecx */
  push32((uint32_t)(ECX));
  /* 10edeecb call 0x10edb720 */
  push32(0x10edeed0u); f_10edb720();
  /* 10edeed0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edeed3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edeed6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10edeed8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edeedb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edeede jne 0x10edeeea */
  if (!C.zf) goto L_10edeeea;
  /* 10edeee0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edeee2 call 0x10eda190 */
  push32(0x10edeee7u); f_10eda190();
  /* 10edeee7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edeeea:;
  /* 10edeeea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edeeed push ecx */
  push32((uint32_t)(ECX));
  /* 10edeeee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edeef1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10edeef3 push eax */
  push32((uint32_t)(EAX));
  /* 10edeef4 call 0x10edfe30 */
  push32(0x10edeef9u); f_10edfe30();
  /* 10edeef9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edeefc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edeeff add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edef02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10edef05:;
  /* 10edef05 jmp 0x10edee8e */
  goto L_10edee8e;
L_10edef07:;
  /* 10edef07 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edef09 mov edx, dword ptr [0x10f0f4d4] */
  EDX = (r32((uint32_t)(0x10f0f4d4)));
  /* 10edef0f push edx */
  push32((uint32_t)(EDX));
  /* 10edef10 call 0x10edc1b0 */
  push32(0x10edef15u); f_10edc1b0();
  /* 10edef15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edef18 mov dword ptr [0x10f0f4d4], 0 */
  w32((uint32_t)(0x10f0f4d4), (0x0u));
  /* 10edef22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edef25 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10edef2b mov dword ptr [0x10f10fe0], 1 */
  w32((uint32_t)(0x10f10fe0), (0x1u));
  /* 10edef35 mov esp, ebp */
  ESP = (EBP);
  /* 10edef37 pop ebp */
  EBP = (pop32());
  /* 10edef38 ret  */
  ESPCHK(0x10ededf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef40 @ 0x10edef40 (216 bytes, 69 insns) */
void f_10edef40(void) {
  FTRACE(0x10edef40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edef40 push ebp */
  push32((uint32_t)(EBP));
  /* 10edef41 mov ebp, esp */
  EBP = (ESP);
  /* 10edef43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edef46 cmp dword ptr [0x10f10ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edef4d jne 0x10edef54 */
  if (!C.zf) goto L_10edef54;
  /* 10edef4f call 0x10ee5790 */
  push32(0x10edef54u); f_10ee5790();
L_10edef54:;
  /* 10edef54 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10edef59 push 0x10f0f5a4 */
  push32((uint32_t)(0x10f0f5a4u));
  /* 10edef5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10edef60 call dword ptr [0x10f1242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1242c))), 0x10edef66u);
  /* 10edef66 mov dword ptr [0x10f0f58c], 0x10f0f5a4 */
  w32((uint32_t)(0x10f0f58c), (0x10f0f5a4u));
  /* 10edef70 mov eax, dword ptr [0x10f11014] */
  EAX = (r32((uint32_t)(0x10f11014)));
  /* 10edef75 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edef78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edef7a jne 0x10edef87 */
  if (!C.zf) goto L_10edef87;
  /* 10edef7c mov edx, dword ptr [0x10f0f58c] */
  EDX = (r32((uint32_t)(0x10f0f58c)));
  /* 10edef82 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10edef85 jmp 0x10edef8f */
  goto L_10edef8f;
L_10edef87:;
  /* 10edef87 mov eax, dword ptr [0x10f11014] */
  EAX = (r32((uint32_t)(0x10f11014)));
  /* 10edef8c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10edef8f:;
  /* 10edef8f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edef92 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10edef95 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10edef98 push edx */
  push32((uint32_t)(EDX));
  /* 10edef99 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10edef9c push eax */
  push32((uint32_t)(EAX));
  /* 10edef9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10edef9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10edefa1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edefa4 push ecx */
  push32((uint32_t)(ECX));
  /* 10edefa5 call 0x10edf020 */
  push32(0x10edefaau); f_10edf020();
  /* 10edefaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edefad push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10edefb2 push 0x10f09d10 */
  push32((uint32_t)(0x10f09d10u));
  /* 10edefb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edefb9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edefbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edefbf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10edefc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10edefc3 call 0x10edb720 */
  push32(0x10edefc8u); f_10edb720();
  /* 10edefc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edefcb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10edefce cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edefd2 jne 0x10edefde */
  if (!C.zf) goto L_10edefde;
  /* 10edefd4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10edefd6 call 0x10eda190 */
  push32(0x10edefdbu); f_10eda190();
  /* 10edefdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edefde:;
  /* 10edefde lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10edefe1 push edx */
  push32((uint32_t)(EDX));
  /* 10edefe2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10edefe5 push eax */
  push32((uint32_t)(EAX));
  /* 10edefe6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edefe9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edefec lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10edefef push eax */
  push32((uint32_t)(EAX));
  /* 10edeff0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edeff3 push ecx */
  push32((uint32_t)(ECX));
  /* 10edeff4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edeff7 push edx */
  push32((uint32_t)(EDX));
  /* 10edeff8 call 0x10edf020 */
  push32(0x10edeffdu); f_10edf020();
  /* 10edeffd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf000 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf003 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edf006 mov dword ptr [0x10f0f570], eax */
  w32((uint32_t)(0x10f0f570), (EAX));
  /* 10edf00b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf00e mov dword ptr [0x10f0f574], ecx */
  w32((uint32_t)(0x10f0f574), (ECX));
  /* 10edf014 mov esp, ebp */
  ESP = (EBP);
  /* 10edf016 pop ebp */
  EBP = (pop32());
  /* 10edf017 ret  */
  ESPCHK(0x10edef40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f020 @ 0x10edf020 (1060 bytes, 360 insns) */
void f_10edf020(void) {
  FTRACE(0x10edf020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edf020 push ebp */
  push32((uint32_t)(EBP));
  /* 10edf021 mov ebp, esp */
  EBP = (ESP);
  /* 10edf023 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edf026 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf029 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10edf02f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edf032 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10edf038 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edf03b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edf03e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf042 je 0x10edf055 */
  if (C.zf) goto L_10edf055;
  /* 10edf044 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edf047 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf04a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10edf04c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edf04f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf052 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10edf055:;
  /* 10edf055 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf058 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edf05b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf05e jne 0x10edf12d */
  if (!C.zf) goto L_10edf12d;
L_10edf064:;
  /* 10edf064 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf067 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf06a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edf06d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf070 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edf073 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf076 je 0x10edf0f2 */
  if (C.zf) goto L_10edf0f2;
  /* 10edf078 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf07b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10edf07e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edf080 je 0x10edf0f2 */
  if (C.zf) goto L_10edf0f2;
  /* 10edf082 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf085 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edf087 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10edf089 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edf08b mov al, byte ptr [edx + 0x10f10d61] */
  AL = (r8((uint32_t)(EDX + 0x10f10d61)));
  /* 10edf091 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10edf094 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edf096 je 0x10edf0c7 */
  if (C.zf) goto L_10edf0c7;
  /* 10edf098 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf09b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10edf09d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf0a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf0a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10edf0a5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf0a9 je 0x10edf0c7 */
  if (C.zf) goto L_10edf0c7;
  /* 10edf0ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf0ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf0b1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10edf0b3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10edf0b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf0b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf0bb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10edf0be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf0c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf0c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10edf0c7:;
  /* 10edf0c7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf0ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10edf0cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf0cf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf0d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10edf0d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf0d8 je 0x10edf0ed */
  if (C.zf) goto L_10edf0ed;
  /* 10edf0da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf0dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf0e0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10edf0e2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10edf0e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf0e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf0ea mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10edf0ed:;
  /* 10edf0ed jmp 0x10edf064 */
  goto L_10edf064;
L_10edf0f2:;
  /* 10edf0f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf0f5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10edf0f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf0fa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf0fd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10edf0ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf103 je 0x10edf114 */
  if (C.zf) goto L_10edf114;
  /* 10edf105 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf108 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10edf10b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf10e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf111 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10edf114:;
  /* 10edf114 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf117 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edf11a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf11d jne 0x10edf128 */
  if (!C.zf) goto L_10edf128;
  /* 10edf11f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf122 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf125 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10edf128:;
  /* 10edf128 jmp 0x10edf1fc */
  goto L_10edf1fc;
L_10edf12d:;
  /* 10edf12d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf130 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10edf132 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf135 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf138 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10edf13a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf13e je 0x10edf153 */
  if (C.zf) goto L_10edf153;
  /* 10edf140 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf143 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf146 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10edf148 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10edf14a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf14d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf150 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10edf153:;
  /* 10edf153 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf156 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10edf158 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10edf15b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf15e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf161 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edf164 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf167 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edf16d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edf16f mov dl, byte ptr [ecx + 0x10f10d61] */
  DL = (r8((uint32_t)(ECX + 0x10f10d61)));
  /* 10edf175 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10edf178 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edf17a je 0x10edf1ab */
  if (C.zf) goto L_10edf1ab;
  /* 10edf17c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf17f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10edf181 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf184 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf187 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10edf189 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf18d je 0x10edf1a2 */
  if (C.zf) goto L_10edf1a2;
  /* 10edf18f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf192 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf195 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10edf197 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10edf199 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf19c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf19f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10edf1a2:;
  /* 10edf1a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf1a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf1a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10edf1ab:;
  /* 10edf1ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf1ae and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edf1b4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf1b7 je 0x10edf1d7 */
  if (C.zf) goto L_10edf1d7;
  /* 10edf1b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf1bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edf1c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edf1c3 je 0x10edf1d7 */
  if (C.zf) goto L_10edf1d7;
  /* 10edf1c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf1c8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edf1ce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf1d1 jne 0x10edf12d */
  if (!C.zf) goto L_10edf12d;
L_10edf1d7:;
  /* 10edf1d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf1da and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edf1e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edf1e2 jne 0x10edf1ef */
  if (!C.zf) goto L_10edf1ef;
  /* 10edf1e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf1e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edf1ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edf1ed jmp 0x10edf1fc */
  goto L_10edf1fc;
L_10edf1ef:;
  /* 10edf1ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf1f3 je 0x10edf1fc */
  if (C.zf) goto L_10edf1fc;
  /* 10edf1f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf1f8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10edf1fc:;
  /* 10edf1fc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10edf203:;
  /* 10edf203 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf206 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10edf209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edf20b je 0x10edf22e */
  if (C.zf) goto L_10edf22e;
L_10edf20d:;
  /* 10edf20d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf210 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10edf213 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf216 je 0x10edf223 */
  if (C.zf) goto L_10edf223;
  /* 10edf218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf21b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edf21e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf221 jne 0x10edf22e */
  if (!C.zf) goto L_10edf22e;
L_10edf223:;
  /* 10edf223 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf226 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf229 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edf22c jmp 0x10edf20d */
  goto L_10edf20d;
L_10edf22e:;
  /* 10edf22e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf231 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edf234 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edf236 jne 0x10edf23d */
  if (!C.zf) goto L_10edf23d;
  /* 10edf238 jmp 0x10edf41b */
  goto L_10edf41b;
L_10edf23d:;
  /* 10edf23d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf241 je 0x10edf254 */
  if (C.zf) goto L_10edf254;
  /* 10edf243 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edf246 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf249 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10edf24b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edf24e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf251 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10edf254:;
  /* 10edf254 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edf257 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10edf259 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf25c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edf25f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10edf261:;
  /* 10edf261 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10edf268 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10edf26f:;
  /* 10edf26f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf272 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10edf275 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf278 jne 0x10edf28e */
  if (!C.zf) goto L_10edf28e;
  /* 10edf27a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf27d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf280 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10edf283 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edf286 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf289 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10edf28c jmp 0x10edf26f */
  goto L_10edf26f;
L_10edf28e:;
  /* 10edf28e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf291 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edf294 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf297 jne 0x10edf2ea */
  if (!C.zf) goto L_10edf2ea;
  /* 10edf299 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edf29c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edf29e mov ecx, 2 */
  ECX = (0x2u);
  /* 10edf2a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10edf2a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edf2a7 jne 0x10edf2e2 */
  if (!C.zf) goto L_10edf2e2;
  /* 10edf2a9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf2ad je 0x10edf2cf */
  if (C.zf) goto L_10edf2cf;
  /* 10edf2af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf2b2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10edf2b6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf2b9 jne 0x10edf2c6 */
  if (!C.zf) goto L_10edf2c6;
  /* 10edf2bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf2be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf2c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10edf2c4 jmp 0x10edf2cd */
  goto L_10edf2cd;
L_10edf2c6:;
  /* 10edf2c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10edf2cd:;
  /* 10edf2cd jmp 0x10edf2d6 */
  goto L_10edf2d6;
L_10edf2cf:;
  /* 10edf2cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10edf2d6:;
  /* 10edf2d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edf2d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf2dc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10edf2df mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10edf2e2:;
  /* 10edf2e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edf2e5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10edf2e7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10edf2ea:;
  /* 10edf2ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edf2ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edf2f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edf2f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10edf2f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edf2f8 je 0x10edf31e */
  if (C.zf) goto L_10edf31e;
  /* 10edf2fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf2fe je 0x10edf30f */
  if (C.zf) goto L_10edf30f;
  /* 10edf300 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf303 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10edf306 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf309 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf30c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10edf30f:;
  /* 10edf30f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf312 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10edf314 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf317 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf31a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10edf31c jmp 0x10edf2ea */
  goto L_10edf2ea;
L_10edf31e:;
  /* 10edf31e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf321 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10edf324 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edf326 je 0x10edf344 */
  if (C.zf) goto L_10edf344;
  /* 10edf328 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf32c jne 0x10edf349 */
  if (!C.zf) goto L_10edf349;
  /* 10edf32e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf331 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10edf334 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf337 je 0x10edf344 */
  if (C.zf) goto L_10edf344;
  /* 10edf339 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf33c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edf33f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf342 jne 0x10edf349 */
  if (!C.zf) goto L_10edf349;
L_10edf344:;
  /* 10edf344 jmp 0x10edf3f4 */
  goto L_10edf3f4;
L_10edf349:;
  /* 10edf349 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf34d je 0x10edf3e6 */
  if (C.zf) goto L_10edf3e6;
  /* 10edf353 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf357 je 0x10edf3ad */
  if (C.zf) goto L_10edf3ad;
  /* 10edf359 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf35c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edf35e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10edf360 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edf362 mov cl, byte ptr [eax + 0x10f10d61] */
  CL = (r8((uint32_t)(EAX + 0x10f10d61)));
  /* 10edf368 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10edf36b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edf36d je 0x10edf398 */
  if (C.zf) goto L_10edf398;
  /* 10edf36f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf372 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf375 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10edf377 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10edf379 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf37c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf37f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10edf382 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf385 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf388 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edf38b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf38e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10edf390 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf393 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf396 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10edf398:;
  /* 10edf398 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf39b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf39e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10edf3a0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10edf3a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf3a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf3a8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10edf3ab jmp 0x10edf3d9 */
  goto L_10edf3d9;
L_10edf3ad:;
  /* 10edf3ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf3b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edf3b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10edf3b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edf3b6 mov cl, byte ptr [eax + 0x10f10d61] */
  CL = (r8((uint32_t)(EAX + 0x10f10d61)));
  /* 10edf3bc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10edf3bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edf3c1 je 0x10edf3d9 */
  if (C.zf) goto L_10edf3d9;
  /* 10edf3c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf3c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf3c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edf3cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf3cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10edf3d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf3d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf3d7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10edf3d9:;
  /* 10edf3d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf3dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10edf3de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf3e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf3e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10edf3e6:;
  /* 10edf3e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf3e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf3ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edf3ef jmp 0x10edf261 */
  goto L_10edf261;
L_10edf3f4:;
  /* 10edf3f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf3f8 je 0x10edf409 */
  if (C.zf) goto L_10edf409;
  /* 10edf3fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf3fd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10edf400 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf403 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf406 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10edf409:;
  /* 10edf409 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf40c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10edf40e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf411 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edf414 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10edf416 jmp 0x10edf203 */
  goto L_10edf203;
L_10edf41b:;
  /* 10edf41b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf41f je 0x10edf433 */
  if (C.zf) goto L_10edf433;
  /* 10edf421 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edf424 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10edf42a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edf42d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf430 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10edf433:;
  /* 10edf433 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edf436 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10edf438 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf43b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edf43e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10edf440 mov esp, ebp */
  ESP = (EBP);
  /* 10edf442 pop ebp */
  EBP = (pop32());
  /* 10edf443 ret  */
  ESPCHK(0x10edf020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f450 @ 0x10edf450 (537 bytes, 173 insns) */
void f_10edf450(void) {
  FTRACE(0x10edf450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edf450 push ebp */
  push32((uint32_t)(EBP));
  /* 10edf451 mov ebp, esp */
  EBP = (ESP);
  /* 10edf453 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edf456 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10edf45d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10edf464 cmp dword ptr [0x10f0f6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf46b jne 0x10edf4aa */
  if (!C.zf) goto L_10edf4aa;
  /* 10edf46d call dword ptr [0x10f123a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123a8))), 0x10edf473u);
  /* 10edf473 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10edf476 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf47a je 0x10edf488 */
  if (C.zf) goto L_10edf488;
  /* 10edf47c mov dword ptr [0x10f0f6a8], 1 */
  w32((uint32_t)(0x10f0f6a8), (0x1u));
  /* 10edf486 jmp 0x10edf4aa */
  goto L_10edf4aa;
L_10edf488:;
  /* 10edf488 call dword ptr [0x10f123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123ac))), 0x10edf48eu);
  /* 10edf48e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10edf491 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf495 je 0x10edf4a3 */
  if (C.zf) goto L_10edf4a3;
  /* 10edf497 mov dword ptr [0x10f0f6a8], 2 */
  w32((uint32_t)(0x10f0f6a8), (0x2u));
  /* 10edf4a1 jmp 0x10edf4aa */
  goto L_10edf4aa;
L_10edf4a3:;
  /* 10edf4a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edf4a5 jmp 0x10edf665 */
  goto L_10edf665;
L_10edf4aa:;
  /* 10edf4aa cmp dword ptr [0x10f0f6a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f6a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf4b1 jne 0x10edf5ae */
  if (!C.zf) goto L_10edf5ae;
  /* 10edf4b7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf4bb jne 0x10edf4d3 */
  if (!C.zf) goto L_10edf4d3;
  /* 10edf4bd call dword ptr [0x10f123a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123a8))), 0x10edf4c3u);
  /* 10edf4c3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10edf4c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf4ca jne 0x10edf4d3 */
  if (!C.zf) goto L_10edf4d3;
  /* 10edf4cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edf4ce jmp 0x10edf665 */
  goto L_10edf665;
L_10edf4d3:;
  /* 10edf4d3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edf4d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10edf4d9:;
  /* 10edf4d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf4dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edf4de mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10edf4e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edf4e3 je 0x10edf505 */
  if (C.zf) goto L_10edf505;
  /* 10edf4e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf4e8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf4eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10edf4ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf4f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edf4f3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10edf4f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edf4f8 jne 0x10edf503 */
  if (!C.zf) goto L_10edf503;
  /* 10edf4fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf4fd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf500 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10edf503:;
  /* 10edf503 jmp 0x10edf4d9 */
  goto L_10edf4d9;
L_10edf505:;
  /* 10edf505 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf508 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edf50b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10edf50d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf510 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10edf513 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf515 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf517 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf519 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf51b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf51e push edx */
  push32((uint32_t)(EDX));
  /* 10edf51f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edf522 push eax */
  push32((uint32_t)(EAX));
  /* 10edf523 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf525 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf527 call dword ptr [0x10f123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b0))), 0x10edf52du);
  /* 10edf52d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10edf530 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf534 je 0x10edf554 */
  if (C.zf) goto L_10edf554;
  /* 10edf536 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10edf538 push 0x10f09d1c */
  push32((uint32_t)(0x10f09d1cu));
  /* 10edf53d push 2 */
  push32((uint32_t)(0x2u));
  /* 10edf53f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edf542 push ecx */
  push32((uint32_t)(ECX));
  /* 10edf543 call 0x10edb720 */
  push32(0x10edf548u); f_10edb720();
  /* 10edf548 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf54b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10edf54e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf552 jne 0x10edf565 */
  if (!C.zf) goto L_10edf565;
L_10edf554:;
  /* 10edf554 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edf557 push edx */
  push32((uint32_t)(EDX));
  /* 10edf558 call dword ptr [0x10f123b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b4))), 0x10edf55eu);
  /* 10edf55e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edf560 jmp 0x10edf665 */
  goto L_10edf665;
L_10edf565:;
  /* 10edf565 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf567 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf569 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edf56c push eax */
  push32((uint32_t)(EAX));
  /* 10edf56d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10edf570 push ecx */
  push32((uint32_t)(ECX));
  /* 10edf571 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf574 push edx */
  push32((uint32_t)(EDX));
  /* 10edf575 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edf578 push eax */
  push32((uint32_t)(EAX));
  /* 10edf579 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf57b push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf57d call dword ptr [0x10f123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b0))), 0x10edf583u);
  /* 10edf583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edf585 jne 0x10edf59c */
  if (!C.zf) goto L_10edf59c;
  /* 10edf587 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edf589 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10edf58c push ecx */
  push32((uint32_t)(ECX));
  /* 10edf58d call 0x10edc1b0 */
  push32(0x10edf592u); f_10edc1b0();
  /* 10edf592 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf595 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10edf59c:;
  /* 10edf59c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edf59f push edx */
  push32((uint32_t)(EDX));
  /* 10edf5a0 call dword ptr [0x10f123b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b4))), 0x10edf5a6u);
  /* 10edf5a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10edf5a9 jmp 0x10edf665 */
  goto L_10edf665;
L_10edf5ae:;
  /* 10edf5ae cmp dword ptr [0x10f0f6a8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f6a8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf5b5 jne 0x10edf663 */
  if (!C.zf) goto L_10edf663;
  /* 10edf5bb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf5bf jne 0x10edf5d7 */
  if (!C.zf) goto L_10edf5d7;
  /* 10edf5c1 call dword ptr [0x10f123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123ac))), 0x10edf5c7u);
  /* 10edf5c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10edf5ca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf5ce jne 0x10edf5d7 */
  if (!C.zf) goto L_10edf5d7;
  /* 10edf5d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edf5d2 jmp 0x10edf665 */
  goto L_10edf665;
L_10edf5d7:;
  /* 10edf5d7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10edf5da mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10edf5dd:;
  /* 10edf5dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf5e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10edf5e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edf5e5 je 0x10edf605 */
  if (C.zf) goto L_10edf605;
  /* 10edf5e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf5ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf5ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10edf5f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf5f3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10edf5f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edf5f8 jne 0x10edf603 */
  if (!C.zf) goto L_10edf603;
  /* 10edf5fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf5fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf600 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10edf603:;
  /* 10edf603 jmp 0x10edf5dd */
  goto L_10edf5dd;
L_10edf605:;
  /* 10edf605 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf608 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edf60b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf60e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10edf611 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10edf616 push 0x10f09d1c */
  push32((uint32_t)(0x10f09d1cu));
  /* 10edf61b push 2 */
  push32((uint32_t)(0x2u));
  /* 10edf61d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edf620 push edx */
  push32((uint32_t)(EDX));
  /* 10edf621 call 0x10edb720 */
  push32(0x10edf626u); f_10edb720();
  /* 10edf626 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf629 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10edf62c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf630 jne 0x10edf640 */
  if (!C.zf) goto L_10edf640;
  /* 10edf632 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10edf635 push eax */
  push32((uint32_t)(EAX));
  /* 10edf636 call dword ptr [0x10f123b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b8))), 0x10edf63cu);
  /* 10edf63c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edf63e jmp 0x10edf665 */
  goto L_10edf665;
L_10edf640:;
  /* 10edf640 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edf643 push ecx */
  push32((uint32_t)(ECX));
  /* 10edf644 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10edf647 push edx */
  push32((uint32_t)(EDX));
  /* 10edf648 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf64b push eax */
  push32((uint32_t)(EAX));
  /* 10edf64c call 0x10ee57c0 */
  push32(0x10edf651u); f_10ee57c0();
  /* 10edf651 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf654 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10edf657 push ecx */
  push32((uint32_t)(ECX));
  /* 10edf658 call dword ptr [0x10f123b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b8))), 0x10edf65eu);
  /* 10edf65e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf661 jmp 0x10edf665 */
  goto L_10edf665;
L_10edf663:;
  /* 10edf663 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10edf665:;
  /* 10edf665 mov esp, ebp */
  ESP = (EBP);
  /* 10edf667 pop ebp */
  EBP = (pop32());
  /* 10edf668 ret  */
  ESPCHK(0x10edf450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f670 @ 0x10edf670 (77 bytes, 25 insns) */
void f_10edf670(void) {
  FTRACE(0x10edf670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edf670 push ebp */
  push32((uint32_t)(EBP));
  /* 10edf671 mov ebp, esp */
  EBP = (ESP);
  /* 10edf673 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf675 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10edf67a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edf67c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf680 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10edf683 push eax */
  push32((uint32_t)(EAX));
  /* 10edf684 call dword ptr [0x10f123a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123a0))), 0x10edf68au);
  /* 10edf68a mov dword ptr [0x10f10e8c], eax */
  w32((uint32_t)(0x10f10e8c), (EAX));
  /* 10edf68f cmp dword ptr [0x10f10e8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10e8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf696 jne 0x10edf69c */
  if (!C.zf) goto L_10edf69c;
  /* 10edf698 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edf69a jmp 0x10edf6bb */
  goto L_10edf6bb;
L_10edf69c:;
  /* 10edf69c call 0x10ee2420 */
  push32(0x10edf6a1u); f_10ee2420();
  /* 10edf6a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edf6a3 jne 0x10edf6b6 */
  if (!C.zf) goto L_10edf6b6;
  /* 10edf6a5 mov ecx, dword ptr [0x10f10e8c] */
  ECX = (r32((uint32_t)(0x10f10e8c)));
  /* 10edf6ab push ecx */
  push32((uint32_t)(ECX));
  /* 10edf6ac call dword ptr [0x10f123a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123a4))), 0x10edf6b2u);
  /* 10edf6b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edf6b4 jmp 0x10edf6bb */
  goto L_10edf6bb;
L_10edf6b6:;
  /* 10edf6b6 mov eax, 1 */
  EAX = (0x1u);
L_10edf6bb:;
  /* 10edf6bb pop ebp */
  EBP = (pop32());
  /* 10edf6bc ret  */
  ESPCHK(0x10edf670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6c0 @ 0x10edf6c0 (156 bytes, 48 insns) */
void f_10edf6c0(void) {
  FTRACE(0x10edf6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edf6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edf6c1 mov ebp, esp */
  EBP = (ESP);
  /* 10edf6c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edf6c6 mov eax, dword ptr [0x10f10e88] */
  EAX = (r32((uint32_t)(0x10f10e88)));
  /* 10edf6cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10edf6ce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10edf6d5 jmp 0x10edf6e0 */
  goto L_10edf6e0;
L_10edf6d7:;
  /* 10edf6d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf6da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf6dd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10edf6e0:;
  /* 10edf6e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf6e3 cmp edx, dword ptr [0x10f10e84] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f10e84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf6e9 jge 0x10edf736 */
  if ((C.sf==C.of)) goto L_10edf736;
  /* 10edf6eb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10edf6f0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10edf6f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf6f8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10edf6fb push ecx */
  push32((uint32_t)(ECX));
  /* 10edf6fc call dword ptr [0x10f12398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12398))), 0x10edf702u);
  /* 10edf702 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10edf707 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf709 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf70c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10edf70f push eax */
  push32((uint32_t)(EAX));
  /* 10edf710 call dword ptr [0x10f12398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12398))), 0x10edf716u);
  /* 10edf716 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf719 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10edf71c push edx */
  push32((uint32_t)(EDX));
  /* 10edf71d push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf71f mov eax, dword ptr [0x10f10e8c] */
  EAX = (r32((uint32_t)(0x10f10e8c)));
  /* 10edf724 push eax */
  push32((uint32_t)(EAX));
  /* 10edf725 call dword ptr [0x10f1239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1239c))), 0x10edf72bu);
  /* 10edf72b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf72e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf731 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10edf734 jmp 0x10edf6d7 */
  goto L_10edf6d7;
L_10edf736:;
  /* 10edf736 mov edx, dword ptr [0x10f10e88] */
  EDX = (r32((uint32_t)(0x10f10e88)));
  /* 10edf73c push edx */
  push32((uint32_t)(EDX));
  /* 10edf73d push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf73f mov eax, dword ptr [0x10f10e8c] */
  EAX = (r32((uint32_t)(0x10f10e8c)));
  /* 10edf744 push eax */
  push32((uint32_t)(EAX));
  /* 10edf745 call dword ptr [0x10f1239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1239c))), 0x10edf74bu);
  /* 10edf74b mov ecx, dword ptr [0x10f10e8c] */
  ECX = (r32((uint32_t)(0x10f10e8c)));
  /* 10edf751 push ecx */
  push32((uint32_t)(ECX));
  /* 10edf752 call dword ptr [0x10f123a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123a4))), 0x10edf758u);
  /* 10edf758 mov esp, ebp */
  ESP = (EBP);
  /* 10edf75a pop ebp */
  EBP = (pop32());
  /* 10edf75b ret  */
  ESPCHK(0x10edf6c0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10edf760 (73 bytes, 19 insns) */
void f_10edf760(void) {
  FTRACE(0x10edf760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edf760 push ebp */
  push32((uint32_t)(EBP));
  /* 10edf761 mov ebp, esp */
  EBP = (ESP);
  /* 10edf763 cmp dword ptr [0x10f0f4dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf76a je 0x10edf77e */
  if (C.zf) goto L_10edf77e;
  /* 10edf76c cmp dword ptr [0x10f0f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf773 jne 0x10edf7a7 */
  if (!C.zf) goto L_10edf7a7;
  /* 10edf775 cmp dword ptr [0x10f0f4e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf77c jne 0x10edf7a7 */
  if (!C.zf) goto L_10edf7a7;
L_10edf77e:;
  /* 10edf77e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10edf783 call 0x10edf7b0 */
  push32(0x10edf788u); f_10edf7b0();
  /* 10edf788 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf78b cmp dword ptr [0x10f0f6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf792 je 0x10edf79a */
  if (C.zf) goto L_10edf79a;
  /* 10edf794 call dword ptr [0x10f0f6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f6ac))), 0x10edf79au);
L_10edf79a:;
  /* 10edf79a push 0xff */
  push32((uint32_t)(0xffu));
  /* 10edf79f call 0x10edf7b0 */
  push32(0x10edf7a4u); f_10edf7b0();
  /* 10edf7a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edf7a7:;
  /* 10edf7a7 pop ebp */
  EBP = (pop32());
  /* 10edf7a8 ret  */
  ESPCHK(0x10edf760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7b0 @ 0x10edf7b0 (447 bytes, 131 insns) */
void f_10edf7b0(void) {
  FTRACE(0x10edf7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edf7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edf7b1 mov ebp, esp */
  EBP = (ESP);
  /* 10edf7b3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edf7b9 push ebx */
  push32((uint32_t)(EBX));
  /* 10edf7ba push esi */
  push32((uint32_t)(ESI));
  /* 10edf7bb push edi */
  push32((uint32_t)(EDI));
  /* 10edf7bc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10edf7c3 jmp 0x10edf7ce */
  goto L_10edf7ce;
L_10edf7c5:;
  /* 10edf7c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf7c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf7cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10edf7ce:;
  /* 10edf7ce cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf7d2 jae 0x10edf7e7 */
  if (!C.cf) goto L_10edf7e7;
  /* 10edf7d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf7d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edf7da cmp edx, dword ptr [ecx*8 + 0x10f0cf50] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10f0cf50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf7e1 jne 0x10edf7e5 */
  if (!C.zf) goto L_10edf7e5;
  /* 10edf7e3 jmp 0x10edf7e7 */
  goto L_10edf7e7;
L_10edf7e5:;
  /* 10edf7e5 jmp 0x10edf7c5 */
  goto L_10edf7c5;
L_10edf7e7:;
  /* 10edf7e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf7ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edf7ed cmp ecx, dword ptr [eax*8 + 0x10f0cf50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10f0cf50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf7f4 jne 0x10edf968 */
  if (!C.zf) goto L_10edf968;
  /* 10edf7fa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf801 je 0x10edf824 */
  if (C.zf) goto L_10edf824;
  /* 10edf803 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf806 mov eax, dword ptr [edx*8 + 0x10f0cf54] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10f0cf54)));
  /* 10edf80d push eax */
  push32((uint32_t)(EAX));
  /* 10edf80e push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf810 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf812 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf814 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edf816 call 0x10eda2e0 */
  push32(0x10edf81bu); f_10eda2e0();
  /* 10edf81b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf81e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf821 jne 0x10edf824 */
  if (!C.zf) goto L_10edf824;
  /* 10edf823 int3  */
  x86_unimpl("int3 @ 0x10edf823");
L_10edf824:;
  /* 10edf824 cmp dword ptr [0x10f0f4dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf82b je 0x10edf83f */
  if (C.zf) goto L_10edf83f;
  /* 10edf82d cmp dword ptr [0x10f0f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf834 jne 0x10edf878 */
  if (!C.zf) goto L_10edf878;
  /* 10edf836 cmp dword ptr [0x10f0f4e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf83d jne 0x10edf878 */
  if (!C.zf) goto L_10edf878;
L_10edf83f:;
  /* 10edf83f push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf841 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10edf844 push ecx */
  push32((uint32_t)(ECX));
  /* 10edf845 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf848 mov eax, dword ptr [edx*8 + 0x10f0cf54] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10f0cf54)));
  /* 10edf84f push eax */
  push32((uint32_t)(EAX));
  /* 10edf850 call 0x10edfcb0 */
  push32(0x10edf855u); f_10edfcb0();
  /* 10edf855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf858 push eax */
  push32((uint32_t)(EAX));
  /* 10edf859 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf85c mov edx, dword ptr [ecx*8 + 0x10f0cf54] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10f0cf54)));
  /* 10edf863 push edx */
  push32((uint32_t)(EDX));
  /* 10edf864 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10edf866 call dword ptr [0x10f12410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12410))), 0x10edf86cu);
  /* 10edf86c push eax */
  push32((uint32_t)(EAX));
  /* 10edf86d call dword ptr [0x10f12414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12414))), 0x10edf873u);
  /* 10edf873 jmp 0x10edf968 */
  goto L_10edf968;
L_10edf878:;
  /* 10edf878 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf87f je 0x10edf968 */
  if (C.zf) goto L_10edf968;
  /* 10edf885 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10edf88a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10edf890 push eax */
  push32((uint32_t)(EAX));
  /* 10edf891 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf893 call dword ptr [0x10f1242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1242c))), 0x10edf899u);
  /* 10edf899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edf89b jne 0x10edf8b1 */
  if (!C.zf) goto L_10edf8b1;
  /* 10edf89d push 0x10f094a0 */
  push32((uint32_t)(0x10f094a0u));
  /* 10edf8a2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10edf8a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10edf8a9 call 0x10edfe30 */
  push32(0x10edf8aeu); f_10edfe30();
  /* 10edf8ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edf8b1:;
  /* 10edf8b1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10edf8b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10edf8ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf8bd push eax */
  push32((uint32_t)(EAX));
  /* 10edf8be call 0x10edfcb0 */
  push32(0x10edf8c3u); f_10edfcb0();
  /* 10edf8c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf8c6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf8c9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf8cc jbe 0x10edf8fa */
  if ((C.cf||C.zf)) goto L_10edf8fa;
  /* 10edf8ce lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10edf8d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10edf8d5 call 0x10edfcb0 */
  push32(0x10edf8dau); f_10edfcb0();
  /* 10edf8da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf8dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf8e0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10edf8e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10edf8e7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10edf8e9 push 0x10f0949c */
  push32((uint32_t)(0x10f0949cu));
  /* 10edf8ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf8f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10edf8f2 call 0x10ee06a0 */
  push32(0x10edf8f7u); f_10ee06a0();
  /* 10edf8f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edf8fa:;
  /* 10edf8fa push 0x10f09fd8 */
  push32((uint32_t)(0x10f09fd8u));
  /* 10edf8ff lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10edf905 push edx */
  push32((uint32_t)(EDX));
  /* 10edf906 call 0x10edfe30 */
  push32(0x10edf90bu); f_10edfe30();
  /* 10edf90b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf90e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edf911 push eax */
  push32((uint32_t)(EAX));
  /* 10edf912 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10edf918 push ecx */
  push32((uint32_t)(ECX));
  /* 10edf919 call 0x10edfe40 */
  push32(0x10edf91eu); f_10edfe40();
  /* 10edf91e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf921 push 0x10f09414 */
  push32((uint32_t)(0x10f09414u));
  /* 10edf926 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10edf92c push edx */
  push32((uint32_t)(EDX));
  /* 10edf92d call 0x10edfe40 */
  push32(0x10edf932u); f_10edfe40();
  /* 10edf932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf935 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edf938 mov ecx, dword ptr [eax*8 + 0x10f0cf54] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10f0cf54)));
  /* 10edf93f push ecx */
  push32((uint32_t)(ECX));
  /* 10edf940 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10edf946 push edx */
  push32((uint32_t)(EDX));
  /* 10edf947 call 0x10edfe40 */
  push32(0x10edf94cu); f_10edfe40();
  /* 10edf94c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf94f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10edf954 push 0x10f09fb0 */
  push32((uint32_t)(0x10f09fb0u));
  /* 10edf959 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10edf95f push eax */
  push32((uint32_t)(EAX));
  /* 10edf960 call 0x10ee05e0 */
  push32(0x10edf965u); f_10ee05e0();
  /* 10edf965 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edf968:;
  /* 10edf968 pop edi */
  EDI = (pop32());
  /* 10edf969 pop esi */
  ESI = (pop32());
  /* 10edf96a pop ebx */
  EBX = (pop32());
  /* 10edf96b mov esp, ebp */
  ESP = (EBP);
  /* 10edf96d pop ebp */
  EBP = (pop32());
  /* 10edf96e ret  */
  ESPCHK(0x10edf7b0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10edf970 (80 bytes, 27 insns) */
void f_10edf970(void) {
  FTRACE(0x10edf970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edf970 push ebp */
  push32((uint32_t)(EBP));
  /* 10edf971 mov ebp, esp */
  EBP = (ESP);
  /* 10edf973 push ecx */
  push32((uint32_t)(ECX));
  /* 10edf974 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10edf97b jmp 0x10edf986 */
  goto L_10edf986;
L_10edf97d:;
  /* 10edf97d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf980 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf983 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10edf986:;
  /* 10edf986 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf98a jae 0x10edf99f */
  if (!C.cf) goto L_10edf99f;
  /* 10edf98c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf98f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edf992 cmp edx, dword ptr [ecx*8 + 0x10f0cf50] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10f0cf50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf999 jne 0x10edf99d */
  if (!C.zf) goto L_10edf99d;
  /* 10edf99b jmp 0x10edf99f */
  goto L_10edf99f;
L_10edf99d:;
  /* 10edf99d jmp 0x10edf97d */
  goto L_10edf97d;
L_10edf99f:;
  /* 10edf99f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf9a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edf9a5 cmp ecx, dword ptr [eax*8 + 0x10f0cf50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10f0cf50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf9ac jne 0x10edf9ba */
  if (!C.zf) goto L_10edf9ba;
  /* 10edf9ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edf9b1 mov eax, dword ptr [edx*8 + 0x10f0cf54] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10f0cf54)));
  /* 10edf9b8 jmp 0x10edf9bc */
  goto L_10edf9bc;
L_10edf9ba:;
  /* 10edf9ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10edf9bc:;
  /* 10edf9bc mov esp, ebp */
  ESP = (EBP);
  /* 10edf9be pop ebp */
  EBP = (pop32());
  /* 10edf9bf ret  */
  ESPCHK(0x10edf970u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10edf9c0 (66 bytes, 28 insns) */
void f_10edf9c0(void) {
  FTRACE(0x10edf9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edf9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edf9c1 mov ebp, esp */
  EBP = (ESP);
  /* 10edf9c3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf9c7 jne 0x10edf9e7 */
  if (!C.zf) goto L_10edf9e7;
  /* 10edf9c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edf9cd jge 0x10edf9e7 */
  if ((C.sf==C.of)) goto L_10edf9e7;
  /* 10edf9cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10edf9d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf9d4 push eax */
  push32((uint32_t)(EAX));
  /* 10edf9d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edf9d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10edf9d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edf9dc push edx */
  push32((uint32_t)(EDX));
  /* 10edf9dd call 0x10edfa10 */
  push32(0x10edf9e2u); f_10edfa10();
  /* 10edf9e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edf9e5 jmp 0x10edf9fd */
  goto L_10edf9fd;
L_10edf9e7:;
  /* 10edf9e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edf9e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edf9ec push eax */
  push32((uint32_t)(EAX));
  /* 10edf9ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edf9f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10edf9f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edf9f4 push edx */
  push32((uint32_t)(EDX));
  /* 10edf9f5 call 0x10edfa10 */
  push32(0x10edf9fau); f_10edfa10();
  /* 10edf9fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edf9fd:;
  /* 10edf9fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edfa00 pop ebp */
  EBP = (pop32());
  /* 10edfa01 ret  */
  ESPCHK(0x10edf9c0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10edfa10 (194 bytes, 71 insns) */
void f_10edfa10(void) {
  FTRACE(0x10edfa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edfa10 push ebp */
  push32((uint32_t)(EBP));
  /* 10edfa11 mov ebp, esp */
  EBP = (ESP);
  /* 10edfa13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edfa16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edfa19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edfa1c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfa20 je 0x10edfa39 */
  if (C.zf) goto L_10edfa39;
  /* 10edfa22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfa25 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10edfa28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfa2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfa2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edfa31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edfa34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10edfa36 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10edfa39:;
  /* 10edfa39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfa3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10edfa3f:;
  /* 10edfa3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edfa42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edfa44 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10edfa47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10edfa4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edfa4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edfa4f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10edfa52 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10edfa55 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfa59 jbe 0x10edfa71 */
  if ((C.cf||C.zf)) goto L_10edfa71;
  /* 10edfa5b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edfa5e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfa61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfa64 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10edfa66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfa69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfa6c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10edfa6f jmp 0x10edfa85 */
  goto L_10edfa85;
L_10edfa71:;
  /* 10edfa71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edfa74 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfa77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfa7a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10edfa7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfa7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfa82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10edfa85:;
  /* 10edfa85 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfa89 ja 0x10edfa3f */
  if ((!C.cf&&!C.zf)) goto L_10edfa3f;
  /* 10edfa8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfa8e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10edfa91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfa94 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edfa97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10edfa9a:;
  /* 10edfa9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfa9d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10edfa9f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10edfaa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfaa5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edfaa8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10edfaaa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10edfaac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edfaaf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10edfab2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10edfab4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfab7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edfaba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edfabd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edfac0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfac3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10edfac6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edfac9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfacc jb 0x10edfa9a */
  if (C.cf) goto L_10edfa9a;
  /* 10edface mov esp, ebp */
  ESP = (EBP);
  /* 10edfad0 pop ebp */
  EBP = (pop32());
  /* 10edfad1 ret  */
  ESPCHK(0x10edfa10u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10edfae0 (63 bytes, 24 insns) */
void f_10edfae0(void) {
  FTRACE(0x10edfae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edfae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edfae1 mov ebp, esp */
  EBP = (ESP);
  /* 10edfae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10edfae4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfae8 jne 0x10edfaf9 */
  if (!C.zf) goto L_10edfaf9;
  /* 10edfaea cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfaee jge 0x10edfaf9 */
  if ((C.sf==C.of)) goto L_10edfaf9;
  /* 10edfaf0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10edfaf7 jmp 0x10edfb00 */
  goto L_10edfb00;
L_10edfaf9:;
  /* 10edfaf9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10edfb00:;
  /* 10edfb00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfb03 push eax */
  push32((uint32_t)(EAX));
  /* 10edfb04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edfb07 push ecx */
  push32((uint32_t)(ECX));
  /* 10edfb08 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edfb0b push edx */
  push32((uint32_t)(EDX));
  /* 10edfb0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edfb0f push eax */
  push32((uint32_t)(EAX));
  /* 10edfb10 call 0x10edfa10 */
  push32(0x10edfb15u); f_10edfa10();
  /* 10edfb15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfb18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edfb1b mov esp, ebp */
  ESP = (EBP);
  /* 10edfb1d pop ebp */
  EBP = (pop32());
  /* 10edfb1e ret  */
  ESPCHK(0x10edfae0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10edfb20 (30 bytes, 14 insns) */
void f_10edfb20(void) {
  FTRACE(0x10edfb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edfb20 push ebp */
  push32((uint32_t)(EBP));
  /* 10edfb21 mov ebp, esp */
  EBP = (ESP);
  /* 10edfb23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edfb25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edfb28 push eax */
  push32((uint32_t)(EAX));
  /* 10edfb29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edfb2c push ecx */
  push32((uint32_t)(ECX));
  /* 10edfb2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edfb30 push edx */
  push32((uint32_t)(EDX));
  /* 10edfb31 call 0x10edfa10 */
  push32(0x10edfb36u); f_10edfa10();
  /* 10edfb36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfb39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edfb3c pop ebp */
  EBP = (pop32());
  /* 10edfb3d ret  */
  ESPCHK(0x10edfb20u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10edfb40 (72 bytes, 28 insns) */
void f_10edfb40(void) {
  FTRACE(0x10edfb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edfb40 push ebp */
  push32((uint32_t)(EBP));
  /* 10edfb41 mov ebp, esp */
  EBP = (ESP);
  /* 10edfb43 push ecx */
  push32((uint32_t)(ECX));
  /* 10edfb44 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfb48 jne 0x10edfb61 */
  if (!C.zf) goto L_10edfb61;
  /* 10edfb4a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfb4e jg 0x10edfb61 */
  if ((!C.zf&&C.sf==C.of)) goto L_10edfb61;
  /* 10edfb50 jl 0x10edfb58 */
  if ((C.sf!=C.of)) goto L_10edfb58;
  /* 10edfb52 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfb56 jae 0x10edfb61 */
  if (!C.cf) goto L_10edfb61;
L_10edfb58:;
  /* 10edfb58 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10edfb5f jmp 0x10edfb68 */
  goto L_10edfb68;
L_10edfb61:;
  /* 10edfb61 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10edfb68:;
  /* 10edfb68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfb6b push eax */
  push32((uint32_t)(EAX));
  /* 10edfb6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edfb6f push ecx */
  push32((uint32_t)(ECX));
  /* 10edfb70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edfb73 push edx */
  push32((uint32_t)(EDX));
  /* 10edfb74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edfb77 push eax */
  push32((uint32_t)(EAX));
  /* 10edfb78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edfb7b push ecx */
  push32((uint32_t)(ECX));
  /* 10edfb7c call 0x10edfb90 */
  push32(0x10edfb81u); f_10edfb90();
  /* 10edfb81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edfb84 mov esp, ebp */
  ESP = (EBP);
  /* 10edfb86 pop ebp */
  EBP = (pop32());
  /* 10edfb87 ret  */
  ESPCHK(0x10edfb40u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10edfb90 (242 bytes, 91 insns) */
void f_10edfb90(void) {
  FTRACE(0x10edfb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edfb90 push ebp */
  push32((uint32_t)(EBP));
  /* 10edfb91 mov ebp, esp */
  EBP = (ESP);
  /* 10edfb93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edfb96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edfb99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edfb9c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfba0 je 0x10edfbc4 */
  if (C.zf) goto L_10edfbc4;
  /* 10edfba2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfba5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10edfba8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfbab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfbae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edfbb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edfbb4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10edfbb6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edfbb9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfbbc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10edfbbe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10edfbc1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10edfbc4:;
  /* 10edfbc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfbc7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10edfbca:;
  /* 10edfbca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edfbcd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edfbcf push ecx */
  push32((uint32_t)(ECX));
  /* 10edfbd0 push eax */
  push32((uint32_t)(EAX));
  /* 10edfbd1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edfbd4 push edx */
  push32((uint32_t)(EDX));
  /* 10edfbd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edfbd8 push eax */
  push32((uint32_t)(EAX));
  /* 10edfbd9 call 0x10ee5b70 */
  push32(0x10edfbdeu); f_10ee5b70();
  /* 10edfbde mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10edfbe1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edfbe4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edfbe6 push edx */
  push32((uint32_t)(EDX));
  /* 10edfbe7 push ecx */
  push32((uint32_t)(ECX));
  /* 10edfbe8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edfbeb push eax */
  push32((uint32_t)(EAX));
  /* 10edfbec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edfbef push ecx */
  push32((uint32_t)(ECX));
  /* 10edfbf0 call 0x10ee5b00 */
  push32(0x10edfbf5u); f_10ee5b00();
  /* 10edfbf5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10edfbf8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10edfbfb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfbff jbe 0x10edfc17 */
  if ((C.cf||C.zf)) goto L_10edfc17;
  /* 10edfc01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edfc04 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfc07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfc0a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10edfc0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfc0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfc12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10edfc15 jmp 0x10edfc2b */
  goto L_10edfc2b;
L_10edfc17:;
  /* 10edfc17 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edfc1a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfc1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfc20 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10edfc22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfc25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfc28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10edfc2b:;
  /* 10edfc2b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfc2f ja 0x10edfbca */
  if ((!C.cf&&!C.zf)) goto L_10edfbca;
  /* 10edfc31 jb 0x10edfc39 */
  if (C.cf) goto L_10edfc39;
  /* 10edfc33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfc37 ja 0x10edfbca */
  if ((!C.cf&&!C.zf)) goto L_10edfbca;
L_10edfc39:;
  /* 10edfc39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfc3c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10edfc3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfc42 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edfc45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10edfc48:;
  /* 10edfc48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfc4b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10edfc4d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10edfc50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfc53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edfc56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10edfc58 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10edfc5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edfc5d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10edfc60 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10edfc62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edfc65 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edfc68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edfc6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edfc6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfc71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10edfc74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edfc77 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfc7a jb 0x10edfc48 */
  if (C.cf) goto L_10edfc48;
  /* 10edfc7c mov esp, ebp */
  ESP = (EBP);
  /* 10edfc7e pop ebp */
  EBP = (pop32());
  /* 10edfc7f ret 0x14 */
  ESPCHK(0x10edfb90u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10edfc90 (31 bytes, 15 insns) */
void f_10edfc90(void) {
  FTRACE(0x10edfc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edfc90 push ebp */
  push32((uint32_t)(EBP));
  /* 10edfc91 mov ebp, esp */
  EBP = (ESP);
  /* 10edfc93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edfc95 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edfc98 push eax */
  push32((uint32_t)(EAX));
  /* 10edfc99 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edfc9c push ecx */
  push32((uint32_t)(ECX));
  /* 10edfc9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edfca0 push edx */
  push32((uint32_t)(EDX));
  /* 10edfca1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edfca4 push eax */
  push32((uint32_t)(EAX));
  /* 10edfca5 call 0x10edfb90 */
  push32(0x10edfcaau); f_10edfb90();
  /* 10edfcaa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edfcad pop ebp */
  EBP = (pop32());
  /* 10edfcae ret  */
  ESPCHK(0x10edfc90u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10edfcb0 (123 bytes, 44 insns) */
void f_10edfcb0(void) {
  FTRACE(0x10edfcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edfcb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10edfcb4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10edfcba je 0x10edfcd0 */
  if (C.zf) goto L_10edfcd0;
L_10edfcbc:;
  /* 10edfcbc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10edfcbe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10edfcbf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10edfcc1 je 0x10edfd03 */
  if (C.zf) goto L_10edfd03;
  /* 10edfcc3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10edfcc9 jne 0x10edfcbc */
  if (!C.zf) goto L_10edfcbc;
  /* 10edfccb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10edfcd0:;
  /* 10edfcd0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10edfcd2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10edfcd7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfcd9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edfcdc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10edfcde add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfce1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10edfce6 je 0x10edfcd0 */
  if (C.zf) goto L_10edfcd0;
  /* 10edfce8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10edfceb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10edfced je 0x10edfd21 */
  if (C.zf) goto L_10edfd21;
  /* 10edfcef test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10edfcf1 je 0x10edfd17 */
  if (C.zf) goto L_10edfd17;
  /* 10edfcf3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10edfcf8 je 0x10edfd0d */
  if (C.zf) goto L_10edfd0d;
  /* 10edfcfa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10edfcff je 0x10edfd03 */
  if (C.zf) goto L_10edfd03;
  /* 10edfd01 jmp 0x10edfcd0 */
  goto L_10edfcd0;
L_10edfd03:;
  /* 10edfd03 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10edfd06 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10edfd0a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edfd0c ret  */
  ESPCHK(0x10edfcb0u, _esp0);
  ESP += 4; return;
L_10edfd0d:;
  /* 10edfd0d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10edfd10 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10edfd14 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edfd16 ret  */
  ESPCHK(0x10edfcb0u, _esp0);
  ESP += 4; return;
L_10edfd17:;
  /* 10edfd17 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10edfd1a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10edfd1e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edfd20 ret  */
  ESPCHK(0x10edfcb0u, _esp0);
  ESP += 4; return;
L_10edfd21:;
  /* 10edfd21 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10edfd24 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10edfd28 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edfd2a ret  */
  ESPCHK(0x10edfcb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd30 @ 0x10edfd30 (249 bytes, 93 insns) */
void f_10edfd30(void) {
  FTRACE(0x10edfd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edfd30 push ebp */
  push32((uint32_t)(EBP));
  /* 10edfd31 mov ebp, esp */
  EBP = (ESP);
  /* 10edfd33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edfd36 push ebx */
  push32((uint32_t)(EBX));
  /* 10edfd37 push esi */
  push32((uint32_t)(ESI));
  /* 10edfd38 push edi */
  push32((uint32_t)(EDI));
  /* 10edfd39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10edfd3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10edfd3f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10edfd42 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10edfd45:;
  /* 10edfd45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfd49 jne 0x10edfd69 */
  if (!C.zf) goto L_10edfd69;
  /* 10edfd4b push 0x10f0a010 */
  push32((uint32_t)(0x10f0a010u));
  /* 10edfd50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edfd52 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10edfd54 push 0x10f0a004 */
  push32((uint32_t)(0x10f0a004u));
  /* 10edfd59 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edfd5b call 0x10eda2e0 */
  push32(0x10edfd60u); f_10eda2e0();
  /* 10edfd60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfd63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfd66 jne 0x10edfd69 */
  if (!C.zf) goto L_10edfd69;
  /* 10edfd68 int3  */
  x86_unimpl("int3 @ 0x10edfd68");
L_10edfd69:;
  /* 10edfd69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edfd6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edfd6d jne 0x10edfd45 */
  if (!C.zf) goto L_10edfd45;
L_10edfd6f:;
  /* 10edfd6f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfd73 jne 0x10edfd93 */
  if (!C.zf) goto L_10edfd93;
  /* 10edfd75 push 0x10f09ff4 */
  push32((uint32_t)(0x10f09ff4u));
  /* 10edfd7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10edfd7c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10edfd7e push 0x10f0a004 */
  push32((uint32_t)(0x10f0a004u));
  /* 10edfd83 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edfd85 call 0x10eda2e0 */
  push32(0x10edfd8au); f_10eda2e0();
  /* 10edfd8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfd8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfd90 jne 0x10edfd93 */
  if (!C.zf) goto L_10edfd93;
  /* 10edfd92 int3  */
  x86_unimpl("int3 @ 0x10edfd92");
L_10edfd93:;
  /* 10edfd93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edfd95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edfd97 jne 0x10edfd6f */
  if (!C.zf) goto L_10edfd6f;
  /* 10edfd99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edfd9c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10edfda3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edfda6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edfda9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10edfdac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edfdaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edfdb2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10edfdb4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edfdb7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edfdba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10edfdbd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10edfdc0 push edx */
  push32((uint32_t)(EDX));
  /* 10edfdc1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edfdc4 push eax */
  push32((uint32_t)(EAX));
  /* 10edfdc5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edfdc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10edfdc9 call 0x10ee5e70 */
  push32(0x10edfdceu); f_10ee5e70();
  /* 10edfdce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfdd1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10edfdd4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edfdd7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10edfdda sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edfddd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edfde0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10edfde3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edfde6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edfdea jl 0x10edfe0e */
  if ((C.sf!=C.of)) goto L_10edfe0e;
  /* 10edfdec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edfdef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10edfdf1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10edfdf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edfdf6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edfdfc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10edfdff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edfe02 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10edfe04 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfe07 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edfe0a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10edfe0c jmp 0x10edfe1f */
  goto L_10edfe1f;
L_10edfe0e:;
  /* 10edfe0e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edfe11 push eax */
  push32((uint32_t)(EAX));
  /* 10edfe12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edfe14 call 0x10ee5bf0 */
  push32(0x10edfe19u); f_10ee5bf0();
  /* 10edfe19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfe1c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10edfe1f:;
  /* 10edfe1f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10edfe22 pop edi */
  EDI = (pop32());
  /* 10edfe23 pop esi */
  ESI = (pop32());
  /* 10edfe24 pop ebx */
  EBX = (pop32());
  /* 10edfe25 mov esp, ebp */
  ESP = (EBP);
  /* 10edfe27 pop ebp */
  EBP = (pop32());
  /* 10edfe28 ret  */
  ESPCHK(0x10edfd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe30 @ 0x10edfe30 (7 bytes, 3 insns) */
void f_10edfe30(void) {
  FTRACE(0x10edfe30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edfe30 push edi */
  push32((uint32_t)(EDI));
  /* 10edfe31 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10edfe35 jmp 0x10edfea1 */
  jmp_ind(0x10edfea1u); return;
}

/* FUN_1000fe40 @ 0x10edfe40 (224 bytes, 84 insns) */
void f_10edfe40(void) {
  FTRACE(0x10edfe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edfe40 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10edfe44 push edi */
  push32((uint32_t)(EDI));
  /* 10edfe45 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10edfe4b je 0x10edfe5c */
  if (C.zf) goto L_10edfe5c;
L_10edfe4d:;
  /* 10edfe4d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10edfe4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10edfe50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10edfe52 je 0x10edfe8f */
  if (C.zf) goto L_10edfe8f;
  /* 10edfe54 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10edfe5a jne 0x10edfe4d */
  if (!C.zf) goto L_10edfe4d;
L_10edfe5c:;
  /* 10edfe5c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10edfe5e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10edfe63 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfe65 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edfe68 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10edfe6a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfe6d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10edfe72 je 0x10edfe5c */
  if (C.zf) goto L_10edfe5c;
  /* 10edfe74 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10edfe77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10edfe79 je 0x10edfe9e */
  if (C.zf) goto L_10edfe9e;
  /* 10edfe7b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10edfe7d je 0x10edfe99 */
  if (C.zf) goto L_10edfe99;
  /* 10edfe7f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10edfe84 je 0x10edfe94 */
  if (C.zf) goto L_10edfe94;
  /* 10edfe86 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10edfe8b je 0x10edfe8f */
  if (C.zf) goto L_10edfe8f;
  /* 10edfe8d jmp 0x10edfe5c */
  goto L_10edfe5c;
L_10edfe8f:;
  /* 10edfe8f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10edfe92 jmp 0x10edfea1 */
  goto L_10edfea1;
L_10edfe94:;
  /* 10edfe94 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10edfe97 jmp 0x10edfea1 */
  goto L_10edfea1;
L_10edfe99:;
  /* 10edfe99 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10edfe9c jmp 0x10edfea1 */
  goto L_10edfea1;
L_10edfe9e:;
  /* 10edfe9e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10edfea1:;
  /* 10edfea1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10edfea5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10edfeab je 0x10edfec6 */
  if (C.zf) goto L_10edfec6;
L_10edfead:;
  /* 10edfead mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10edfeaf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10edfeb0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10edfeb2 je 0x10edff18 */
  if (C.zf) goto L_10edff18;
  /* 10edfeb4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10edfeb6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10edfeb7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10edfebd jne 0x10edfead */
  if (!C.zf) goto L_10edfead;
  /* 10edfebf jmp 0x10edfec6 */
  goto L_10edfec6;
L_10edfec1:;
  /* 10edfec1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10edfec3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10edfec6:;
  /* 10edfec6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10edfecb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10edfecd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfecf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edfed2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10edfed4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10edfed6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfed9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10edfede je 0x10edfec1 */
  if (C.zf) goto L_10edfec1;
  /* 10edfee0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10edfee2 je 0x10edff18 */
  if (C.zf) goto L_10edff18;
  /* 10edfee4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10edfee6 je 0x10edff0f */
  if (C.zf) goto L_10edff0f;
  /* 10edfee8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10edfeee je 0x10edff02 */
  if (C.zf) goto L_10edff02;
  /* 10edfef0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10edfef6 je 0x10edfefa */
  if (C.zf) goto L_10edfefa;
  /* 10edfef8 jmp 0x10edfec1 */
  goto L_10edfec1;
L_10edfefa:;
  /* 10edfefa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10edfefc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10edff00 pop edi */
  EDI = (pop32());
  /* 10edff01 ret  */
  ESPCHK(0x10edfe40u, _esp0);
  ESP += 4; return;
L_10edff02:;
  /* 10edff02 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10edff05 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10edff09 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10edff0d pop edi */
  EDI = (pop32());
  /* 10edff0e ret  */
  ESPCHK(0x10edfe40u, _esp0);
  ESP += 4; return;
L_10edff0f:;
  /* 10edff0f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10edff12 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10edff16 pop edi */
  EDI = (pop32());
  /* 10edff17 ret  */
  ESPCHK(0x10edfe40u, _esp0);
  ESP += 4; return;
L_10edff18:;
  /* 10edff18 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10edff1a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10edff1e pop edi */
  EDI = (pop32());
  /* 10edff1f ret  */
  ESPCHK(0x10edfe40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff20 @ 0x10edff20 (243 bytes, 91 insns) */
void f_10edff20(void) {
  FTRACE(0x10edff20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edff20 push ebp */
  push32((uint32_t)(EBP));
  /* 10edff21 mov ebp, esp */
  EBP = (ESP);
  /* 10edff23 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edff26 push ebx */
  push32((uint32_t)(EBX));
  /* 10edff27 push esi */
  push32((uint32_t)(ESI));
  /* 10edff28 push edi */
  push32((uint32_t)(EDI));
  /* 10edff29 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10edff2c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10edff2f:;
  /* 10edff2f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edff33 jne 0x10edff53 */
  if (!C.zf) goto L_10edff53;
  /* 10edff35 push 0x10f0a010 */
  push32((uint32_t)(0x10f0a010u));
  /* 10edff3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10edff3c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10edff3e push 0x10f0a020 */
  push32((uint32_t)(0x10f0a020u));
  /* 10edff43 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edff45 call 0x10eda2e0 */
  push32(0x10edff4au); f_10eda2e0();
  /* 10edff4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edff4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edff50 jne 0x10edff53 */
  if (!C.zf) goto L_10edff53;
  /* 10edff52 int3  */
  x86_unimpl("int3 @ 0x10edff52");
L_10edff53:;
  /* 10edff53 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edff55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edff57 jne 0x10edff2f */
  if (!C.zf) goto L_10edff2f;
L_10edff59:;
  /* 10edff59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edff5d jne 0x10edff7d */
  if (!C.zf) goto L_10edff7d;
  /* 10edff5f push 0x10f09ff4 */
  push32((uint32_t)(0x10f09ff4u));
  /* 10edff64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edff66 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10edff68 push 0x10f0a020 */
  push32((uint32_t)(0x10f0a020u));
  /* 10edff6d push 2 */
  push32((uint32_t)(0x2u));
  /* 10edff6f call 0x10eda2e0 */
  push32(0x10edff74u); f_10eda2e0();
  /* 10edff74 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edff77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edff7a jne 0x10edff7d */
  if (!C.zf) goto L_10edff7d;
  /* 10edff7c int3  */
  x86_unimpl("int3 @ 0x10edff7c");
L_10edff7d:;
  /* 10edff7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edff7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edff81 jne 0x10edff59 */
  if (!C.zf) goto L_10edff59;
  /* 10edff83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edff86 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10edff8d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edff90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edff93 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10edff96 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edff99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edff9c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10edff9e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edffa1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edffa4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10edffa7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edffaa push ecx */
  push32((uint32_t)(ECX));
  /* 10edffab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edffae push edx */
  push32((uint32_t)(EDX));
  /* 10edffaf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edffb2 push eax */
  push32((uint32_t)(EAX));
  /* 10edffb3 call 0x10ee5e70 */
  push32(0x10edffb8u); f_10ee5e70();
  /* 10edffb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edffbb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10edffbe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edffc1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10edffc4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edffc7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edffca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10edffcd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edffd0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edffd4 jl 0x10edfff8 */
  if ((C.sf!=C.of)) goto L_10edfff8;
  /* 10edffd6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edffd9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10edffdb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10edffde xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edffe0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edffe6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10edffe9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edffec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10edffee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edfff1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edfff4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10edfff6 jmp 0x10ee0009 */
  goto L_10ee0009;
L_10edfff8:;
  /* 10edfff8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edfffb push edx */
  push32((uint32_t)(EDX));
  /* 10edfffc push 0 */
  push32((uint32_t)(0x0u));
  /* 10edfffe call 0x10ee5bf0 */
  push32(0x10ee0003u); f_10ee5bf0();
  /* 10ee0003 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0006 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10ee0009:;
  /* 10ee0009 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee000c pop edi */
  EDI = (pop32());
  /* 10ee000d pop esi */
  ESI = (pop32());
  /* 10ee000e pop ebx */
  EBX = (pop32());
  /* 10ee000f mov esp, ebp */
  ESP = (EBP);
  /* 10ee0011 pop ebp */
  EBP = (pop32());
  /* 10ee0012 ret  */
  ESPCHK(0x10edff20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010020 @ 0x10ee0020 (47 bytes, 17 insns) */
void f_10ee0020(void) {
  FTRACE(0x10ee0020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0020 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee0021 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0026 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10ee002a jb 0x10ee0040 */
  if (C.cf) goto L_10ee0040;
L_10ee002c:;
  /* 10ee002c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee0032 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee0037 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10ee0039 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee003e jae 0x10ee002c */
  if (!C.cf) goto L_10ee002c;
L_10ee0040:;
  /* 10ee0040 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee0042 mov eax, esp */
  EAX = (ESP);
  /* 10ee0044 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10ee0046 mov esp, ecx */
  ESP = (ECX);
  /* 10ee0048 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee004a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee004d push eax */
  push32((uint32_t)(EAX));
  /* 10ee004e ret  */
  ESPCHK(0x10ee0020u, _esp0);
  ESP += 4; return;
}

/* FUN_10010050 @ 0x10ee0050 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10ee0050(void) {
  FTRACE(0x10ee0050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0050 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee0051 mov ebp, esp */
  EBP = (ESP);
  /* 10ee0053 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee0056 push esi */
  push32((uint32_t)(ESI));
  /* 10ee0057 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee005b je 0x10ee0063 */
  if (C.zf) goto L_10ee0063;
  /* 10ee005d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0061 jne 0x10ee0068 */
  if (!C.zf) goto L_10ee0068;
L_10ee0063:;
  /* 10ee0063 jmp 0x10ee0238 */
  goto L_10ee0238;
L_10ee0068:;
  /* 10ee0068 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee006c je 0x10ee0084 */
  if (C.zf) goto L_10ee0084;
  /* 10ee006e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0072 je 0x10ee0084 */
  if (C.zf) goto L_10ee0084;
  /* 10ee0074 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0078 je 0x10ee0084 */
  if (C.zf) goto L_10ee0084;
  /* 10ee007a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee007e jne 0x10ee0161 */
  if (!C.zf) goto L_10ee0161;
L_10ee0084:;
  /* 10ee0084 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee0086 call 0x10edb620 */
  push32(0x10ee008bu); f_10edb620();
  /* 10ee008b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee008e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0092 je 0x10ee009a */
  if (C.zf) goto L_10ee009a;
  /* 10ee0094 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0098 jne 0x10ee00df */
  if (!C.zf) goto L_10ee00df;
L_10ee009a:;
  /* 10ee009a cmp dword ptr [0x10f0f6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee00a1 jne 0x10ee00df */
  if (!C.zf) goto L_10ee00df;
  /* 10ee00a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee00a5 push 0x10ee0280 */
  push32((uint32_t)(0x10ee0280u));
  /* 10ee00aa call dword ptr [0x10f12394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12394))), 0x10ee00b0u);
  /* 10ee00b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee00b3 jne 0x10ee00c1 */
  if (!C.zf) goto L_10ee00c1;
  /* 10ee00b5 mov dword ptr [0x10f0f6c0], 1 */
  w32((uint32_t)(0x10f0f6c0), (0x1u));
  /* 10ee00bf jmp 0x10ee00df */
  goto L_10ee00df;
L_10ee00c1:;
  /* 10ee00c1 call dword ptr [0x10f123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123d4))), 0x10ee00c7u);
  /* 10ee00c7 mov esi, eax */
  ESI = (EAX);
  /* 10ee00c9 call 0x10ee6dc0 */
  push32(0x10ee00ceu); f_10ee6dc0();
  /* 10ee00ce mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10ee00d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee00d2 call 0x10edb6c0 */
  push32(0x10ee00d7u); f_10edb6c0();
  /* 10ee00d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee00da jmp 0x10ee0238 */
  goto L_10ee0238;
L_10ee00df:;
  /* 10ee00df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee00e2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee00e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee00e8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee00eb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ee00ee cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee00f2 ja 0x10ee0152 */
  if ((!C.cf&&!C.zf)) goto L_10ee0152;
  /* 10ee00f4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee00f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee00f9 mov dl, byte ptr [eax + 0x10ee025f] */
  DL = (r8((uint32_t)(EAX + 0x10ee025f)));
  /* 10ee00ff jmp dword ptr [edx*4 + 0x10ee024b] */
  switch (EDX) {
    case 0: goto L_10ee0106;
    case 1: goto L_10ee0140;
    case 2: goto L_10ee011a;
    case 3: goto L_10ee012d;
    case 4: goto L_10ee0152;
    default: x86_unimpl("switch@0x10ee00ff out of table"); return;
  }
L_10ee0106:;
  /* 10ee0106 mov ecx, dword ptr [0x10f0f6b0] */
  ECX = (r32((uint32_t)(0x10f0f6b0)));
  /* 10ee010c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee010f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee0112 mov dword ptr [0x10f0f6b0], edx */
  w32((uint32_t)(0x10f0f6b0), (EDX));
  /* 10ee0118 jmp 0x10ee0152 */
  goto L_10ee0152;
L_10ee011a:;
  /* 10ee011a mov eax, dword ptr [0x10f0f6b4] */
  EAX = (r32((uint32_t)(0x10f0f6b4)));
  /* 10ee011f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee0122 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee0125 mov dword ptr [0x10f0f6b4], ecx */
  w32((uint32_t)(0x10f0f6b4), (ECX));
  /* 10ee012b jmp 0x10ee0152 */
  goto L_10ee0152;
L_10ee012d:;
  /* 10ee012d mov edx, dword ptr [0x10f0f6b8] */
  EDX = (r32((uint32_t)(0x10f0f6b8)));
  /* 10ee0133 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ee0136 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee0139 mov dword ptr [0x10f0f6b8], eax */
  w32((uint32_t)(0x10f0f6b8), (EAX));
  /* 10ee013e jmp 0x10ee0152 */
  goto L_10ee0152;
L_10ee0140:;
  /* 10ee0140 mov ecx, dword ptr [0x10f0f6bc] */
  ECX = (r32((uint32_t)(0x10f0f6bc)));
  /* 10ee0146 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee0149 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee014c mov dword ptr [0x10f0f6bc], edx */
  w32((uint32_t)(0x10f0f6bc), (EDX));
L_10ee0152:;
  /* 10ee0152 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee0154 call 0x10edb6c0 */
  push32(0x10ee0159u); f_10edb6c0();
  /* 10ee0159 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee015c jmp 0x10ee0233 */
  goto L_10ee0233;
L_10ee0161:;
  /* 10ee0161 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0165 je 0x10ee0178 */
  if (C.zf) goto L_10ee0178;
  /* 10ee0167 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee016b je 0x10ee0178 */
  if (C.zf) goto L_10ee0178;
  /* 10ee016d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0171 je 0x10ee0178 */
  if (C.zf) goto L_10ee0178;
  /* 10ee0173 jmp 0x10ee0238 */
  goto L_10ee0238;
L_10ee0178:;
  /* 10ee0178 call 0x10ede420 */
  push32(0x10ee017du); f_10ede420();
  /* 10ee017d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee0180 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0183 cmp dword ptr [eax + 0x50], 0x10f0d240 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10f0d240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee018a jne 0x10ee01d5 */
  if (!C.zf) goto L_10ee01d5;
  /* 10ee018c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10ee0191 push 0x10f0a02c */
  push32((uint32_t)(0x10f0a02cu));
  /* 10ee0196 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee0198 mov ecx, dword ptr [0x10f0d2c0] */
  ECX = (r32((uint32_t)(0x10f0d2c0)));
  /* 10ee019e push ecx */
  push32((uint32_t)(ECX));
  /* 10ee019f call 0x10edb720 */
  push32(0x10ee01a4u); f_10edb720();
  /* 10ee01a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee01a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee01aa mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10ee01ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee01b0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee01b4 je 0x10ee01d3 */
  if (C.zf) goto L_10ee01d3;
  /* 10ee01b6 mov ecx, dword ptr [0x10f0d2c0] */
  ECX = (r32((uint32_t)(0x10f0d2c0)));
  /* 10ee01bc push ecx */
  push32((uint32_t)(ECX));
  /* 10ee01bd push 0x10f0d240 */
  push32((uint32_t)(0x10f0d240u));
  /* 10ee01c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee01c5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10ee01c8 push eax */
  push32((uint32_t)(EAX));
  /* 10ee01c9 call 0x10ee57c0 */
  push32(0x10ee01ceu); f_10ee57c0();
  /* 10ee01ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee01d1 jmp 0x10ee01d5 */
  goto L_10ee01d5;
L_10ee01d3:;
  /* 10ee01d3 jmp 0x10ee0238 */
  goto L_10ee0238;
L_10ee01d5:;
  /* 10ee01d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee01d8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10ee01db push edx */
  push32((uint32_t)(EDX));
  /* 10ee01dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee01df push eax */
  push32((uint32_t)(EAX));
  /* 10ee01e0 call 0x10ee0560 */
  push32(0x10ee01e5u); f_10ee0560();
  /* 10ee01e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee01e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee01eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee01ef jne 0x10ee01f3 */
  if (!C.zf) goto L_10ee01f3;
  /* 10ee01f1 jmp 0x10ee0238 */
  goto L_10ee0238;
L_10ee01f3:;
  /* 10ee01f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee01f6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee01f9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ee01fc:;
  /* 10ee01fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee01ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee0202 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0205 jne 0x10ee0233 */
  if (!C.zf) goto L_10ee0233;
  /* 10ee0207 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee020a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee020d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ee0210 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee0213 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0216 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee0219 mov edx, dword ptr [0x10f0d2c4] */
  EDX = (r32((uint32_t)(0x10f0d2c4)));
  /* 10ee021f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee0222 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0225 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10ee0228 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee022a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee022d jb 0x10ee0231 */
  if (C.cf) goto L_10ee0231;
  /* 10ee022f jmp 0x10ee0233 */
  goto L_10ee0233;
L_10ee0231:;
  /* 10ee0231 jmp 0x10ee01fc */
  goto L_10ee01fc;
L_10ee0233:;
  /* 10ee0233 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee0236 jmp 0x10ee0246 */
  goto L_10ee0246;
L_10ee0238:;
  /* 10ee0238 call 0x10ee6db0 */
  push32(0x10ee023du); f_10ee6db0();
  /* 10ee023d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10ee0243 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10ee0246:;
  /* 10ee0246 pop esi */
  ESI = (pop32());
  /* 10ee0247 mov esp, ebp */
  ESP = (EBP);
  /* 10ee0249 pop ebp */
  EBP = (pop32());
  /* 10ee024a ret  */
  ESPCHK(0x10ee0050u, _esp0);
  ESP += 4; return;
}

/* FUN_10010280 @ 0x10ee0280 (146 bytes, 45 insns) */
void f_10ee0280(void) {
  FTRACE(0x10ee0280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0280 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee0281 mov ebp, esp */
  EBP = (ESP);
  /* 10ee0283 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee0286 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee0288 call 0x10edb620 */
  push32(0x10ee028du); f_10edb620();
  /* 10ee028d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0290 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0294 jne 0x10ee02ae */
  if (!C.zf) goto L_10ee02ae;
  /* 10ee0296 mov dword ptr [ebp - 8], 0x10f0f6b0 */
  w32((uint32_t)(EBP + -0x8), (0x10f0f6b0u));
  /* 10ee029d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee02a0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee02a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee02a5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10ee02ac jmp 0x10ee02c4 */
  goto L_10ee02c4;
L_10ee02ae:;
  /* 10ee02ae mov dword ptr [ebp - 8], 0x10f0f6b4 */
  w32((uint32_t)(EBP + -0x8), (0x10f0f6b4u));
  /* 10ee02b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee02b8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee02ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee02bd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10ee02c4:;
  /* 10ee02c4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee02c8 jne 0x10ee02d8 */
  if (!C.zf) goto L_10ee02d8;
  /* 10ee02ca push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee02cc call 0x10edb6c0 */
  push32(0x10ee02d1u); f_10edb6c0();
  /* 10ee02d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee02d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee02d6 jmp 0x10ee030c */
  goto L_10ee030c;
L_10ee02d8:;
  /* 10ee02d8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee02dc je 0x10ee02fd */
  if (C.zf) goto L_10ee02fd;
  /* 10ee02de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee02e1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10ee02e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee02e9 call 0x10edb6c0 */
  push32(0x10ee02eeu); f_10edb6c0();
  /* 10ee02ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee02f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee02f4 push edx */
  push32((uint32_t)(EDX));
  /* 10ee02f5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10ee02f8u);
  /* 10ee02f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee02fb jmp 0x10ee0307 */
  goto L_10ee0307;
L_10ee02fd:;
  /* 10ee02fd push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee02ff call 0x10edb6c0 */
  push32(0x10ee0304u); f_10edb6c0();
  /* 10ee0304 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee0307:;
  /* 10ee0307 mov eax, 1 */
  EAX = (0x1u);
L_10ee030c:;
  /* 10ee030c mov esp, ebp */
  ESP = (EBP);
  /* 10ee030e pop ebp */
  EBP = (pop32());
  /* 10ee030f ret 4 */
  ESPCHK(0x10ee0280u, _esp0);
  ESP += 8; return;
}

/* FUN_10010320 @ 0x10ee0320 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10ee0320(void) {
  FTRACE(0x10ee0320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0320 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee0321 mov ebp, esp */
  EBP = (ESP);
  /* 10ee0323 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee0326 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ee032d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0330 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ee0333 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee0336 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee0339 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ee033c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0340 ja 0x10ee03ee */
  if ((!C.cf&&!C.zf)) goto L_10ee03ee;
  /* 10ee0346 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee0349 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee034b mov dl, byte ptr [eax + 0x10ee0542] */
  DL = (r8((uint32_t)(EAX + 0x10ee0542)));
  /* 10ee0351 jmp dword ptr [edx*4 + 0x10ee052a] */
  switch (EDX) {
    case 0: goto L_10ee0358;
    case 1: goto L_10ee03c3;
    case 2: goto L_10ee03a9;
    case 3: goto L_10ee0375;
    case 4: goto L_10ee038f;
    case 5: goto L_10ee03ee;
    default: x86_unimpl("switch@0x10ee0351 out of table"); return;
  }
L_10ee0358:;
  /* 10ee0358 mov dword ptr [ebp - 0x18], 0x10f0f6b0 */
  w32((uint32_t)(EBP + -0x18), (0x10f0f6b0u));
  /* 10ee035f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee0362 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee0364 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ee0367 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee036a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee036d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee0370 jmp 0x10ee03f6 */
  goto L_10ee03f6;
L_10ee0375:;
  /* 10ee0375 mov dword ptr [ebp - 0x18], 0x10f0f6b4 */
  w32((uint32_t)(EBP + -0x18), (0x10f0f6b4u));
  /* 10ee037c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee037f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee0381 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ee0384 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee0387 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee038a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee038d jmp 0x10ee03f6 */
  goto L_10ee03f6;
L_10ee038f:;
  /* 10ee038f mov dword ptr [ebp - 0x18], 0x10f0f6b8 */
  w32((uint32_t)(EBP + -0x18), (0x10f0f6b8u));
  /* 10ee0396 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee0399 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee039b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ee039e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee03a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee03a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee03a7 jmp 0x10ee03f6 */
  goto L_10ee03f6;
L_10ee03a9:;
  /* 10ee03a9 mov dword ptr [ebp - 0x18], 0x10f0f6bc */
  w32((uint32_t)(EBP + -0x18), (0x10f0f6bcu));
  /* 10ee03b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee03b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee03b5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ee03b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee03bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee03be mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee03c1 jmp 0x10ee03f6 */
  goto L_10ee03f6;
L_10ee03c3:;
  /* 10ee03c3 call 0x10ede420 */
  push32(0x10ee03c8u); f_10ede420();
  /* 10ee03c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee03cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee03ce mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10ee03d1 push edx */
  push32((uint32_t)(EDX));
  /* 10ee03d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee03d5 push eax */
  push32((uint32_t)(EAX));
  /* 10ee03d6 call 0x10ee0560 */
  push32(0x10ee03dbu); f_10ee0560();
  /* 10ee03db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee03de add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee03e1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ee03e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee03e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee03e9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ee03ec jmp 0x10ee03f6 */
  goto L_10ee03f6;
L_10ee03ee:;
  /* 10ee03ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee03f1 jmp 0x10ee0526 */
  goto L_10ee0526;
L_10ee03f6:;
  /* 10ee03f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee03fa je 0x10ee0406 */
  if (C.zf) goto L_10ee0406;
  /* 10ee03fc push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee03fe call 0x10edb620 */
  push32(0x10ee0403u); f_10edb620();
  /* 10ee0403 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee0406:;
  /* 10ee0406 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee040a jne 0x10ee0423 */
  if (!C.zf) goto L_10ee0423;
  /* 10ee040c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0410 je 0x10ee041c */
  if (C.zf) goto L_10ee041c;
  /* 10ee0412 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee0414 call 0x10edb6c0 */
  push32(0x10ee0419u); f_10edb6c0();
  /* 10ee0419 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee041c:;
  /* 10ee041c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee041e jmp 0x10ee0526 */
  goto L_10ee0526;
L_10ee0423:;
  /* 10ee0423 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0427 jne 0x10ee0440 */
  if (!C.zf) goto L_10ee0440;
  /* 10ee0429 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee042d je 0x10ee0439 */
  if (C.zf) goto L_10ee0439;
  /* 10ee042f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee0431 call 0x10edb6c0 */
  push32(0x10ee0436u); f_10edb6c0();
  /* 10ee0436 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee0439:;
  /* 10ee0439 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ee043b call 0x10ede790 */
  push32(0x10ee0440u); f_10ede790();
L_10ee0440:;
  /* 10ee0440 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0444 je 0x10ee0452 */
  if (C.zf) goto L_10ee0452;
  /* 10ee0446 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee044a je 0x10ee0452 */
  if (C.zf) goto L_10ee0452;
  /* 10ee044c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0450 jne 0x10ee047e */
  if (!C.zf) goto L_10ee047e;
L_10ee0452:;
  /* 10ee0452 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0455 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10ee0458 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ee045b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee045e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10ee0465 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0469 jne 0x10ee047e */
  if (!C.zf) goto L_10ee047e;
  /* 10ee046b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee046e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10ee0471 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee0474 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0477 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10ee047e:;
  /* 10ee047e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0482 jne 0x10ee04c0 */
  if (!C.zf) goto L_10ee04c0;
  /* 10ee0484 mov eax, dword ptr [0x10f0d2b8] */
  EAX = (r32((uint32_t)(0x10f0d2b8)));
  /* 10ee0489 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee048c jmp 0x10ee0497 */
  goto L_10ee0497;
L_10ee048e:;
  /* 10ee048e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee0491 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0494 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ee0497:;
  /* 10ee0497 mov edx, dword ptr [0x10f0d2b8] */
  EDX = (r32((uint32_t)(0x10f0d2b8)));
  /* 10ee049d add edx, dword ptr [0x10f0d2bc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f0d2bc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee04a3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee04a6 jge 0x10ee04be */
  if ((C.sf==C.of)) goto L_10ee04be;
  /* 10ee04a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee04ab imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee04ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee04b1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10ee04b4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10ee04bc jmp 0x10ee048e */
  goto L_10ee048e;
L_10ee04be:;
  /* 10ee04be jmp 0x10ee04c9 */
  goto L_10ee04c9;
L_10ee04c0:;
  /* 10ee04c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee04c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10ee04c9:;
  /* 10ee04c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee04cd je 0x10ee04d9 */
  if (C.zf) goto L_10ee04d9;
  /* 10ee04cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee04d1 call 0x10edb6c0 */
  push32(0x10ee04d6u); f_10edb6c0();
  /* 10ee04d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee04d9:;
  /* 10ee04d9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee04dd jne 0x10ee04f0 */
  if (!C.zf) goto L_10ee04f0;
  /* 10ee04df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee04e2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10ee04e5 push edx */
  push32((uint32_t)(EDX));
  /* 10ee04e6 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ee04e8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10ee04ebu);
  /* 10ee04eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee04ee jmp 0x10ee04fa */
  goto L_10ee04fa;
L_10ee04f0:;
  /* 10ee04f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee04f3 push eax */
  push32((uint32_t)(EAX));
  /* 10ee04f4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10ee04f7u);
  /* 10ee04f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee04fa:;
  /* 10ee04fa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee04fe je 0x10ee050c */
  if (C.zf) goto L_10ee050c;
  /* 10ee0500 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0504 je 0x10ee050c */
  if (C.zf) goto L_10ee050c;
  /* 10ee0506 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee050a jne 0x10ee0524 */
  if (!C.zf) goto L_10ee0524;
L_10ee050c:;
  /* 10ee050c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee050f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee0512 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10ee0515 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0519 jne 0x10ee0524 */
  if (!C.zf) goto L_10ee0524;
  /* 10ee051b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee051e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee0521 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10ee0524:;
  /* 10ee0524 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ee0526:;
  /* 10ee0526 mov esp, ebp */
  ESP = (EBP);
  /* 10ee0528 pop ebp */
  EBP = (pop32());
  /* 10ee0529 ret  */
  ESPCHK(0x10ee0320u, _esp0);
  ESP += 4; return;
}

/* FUN_10010560 @ 0x10ee0560 (91 bytes, 35 insns) */
void f_10ee0560(void) {
  FTRACE(0x10ee0560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0560 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee0561 mov ebp, esp */
  EBP = (ESP);
  /* 10ee0563 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee0564 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee0567 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee056a:;
  /* 10ee056a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee056d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee0570 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0573 je 0x10ee0593 */
  if (C.zf) goto L_10ee0593;
  /* 10ee0575 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0578 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee057b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee057e mov ecx, dword ptr [0x10f0d2c4] */
  ECX = (r32((uint32_t)(0x10f0d2c4)));
  /* 10ee0584 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee0587 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee058a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee058c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee058f jae 0x10ee0593 */
  if (!C.cf) goto L_10ee0593;
  /* 10ee0591 jmp 0x10ee056a */
  goto L_10ee056a;
L_10ee0593:;
  /* 10ee0593 mov eax, dword ptr [0x10f0d2c4] */
  EAX = (r32((uint32_t)(0x10f0d2c4)));
  /* 10ee0598 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee059b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee059e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee05a0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee05a3 jae 0x10ee05b5 */
  if (!C.cf) goto L_10ee05b5;
  /* 10ee05a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee05a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee05ab cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee05ae jne 0x10ee05b5 */
  if (!C.zf) goto L_10ee05b5;
  /* 10ee05b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee05b3 jmp 0x10ee05b7 */
  goto L_10ee05b7;
L_10ee05b5:;
  /* 10ee05b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ee05b7:;
  /* 10ee05b7 mov esp, ebp */
  ESP = (EBP);
  /* 10ee05b9 pop ebp */
  EBP = (pop32());
  /* 10ee05ba ret  */
  ESPCHK(0x10ee0560u, _esp0);
  ESP += 4; return;
}

/* FUN_100105c0 @ 0x10ee05c0 (13 bytes, 6 insns) */
void f_10ee05c0(void) {
  FTRACE(0x10ee05c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee05c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee05c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee05c3 call 0x10ede420 */
  push32(0x10ee05c8u); f_10ede420();
  /* 10ee05c8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee05cb pop ebp */
  EBP = (pop32());
  /* 10ee05cc ret  */
  ESPCHK(0x10ee05c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100105d0 @ 0x10ee05d0 (13 bytes, 6 insns) */
void f_10ee05d0(void) {
  FTRACE(0x10ee05d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee05d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee05d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee05d3 call 0x10ede420 */
  push32(0x10ee05d8u); f_10ede420();
  /* 10ee05d8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee05db pop ebp */
  EBP = (pop32());
  /* 10ee05dc ret  */
  ESPCHK(0x10ee05d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100105e0 @ 0x10ee05e0 (187 bytes, 54 insns) */
void f_10ee05e0(void) {
  FTRACE(0x10ee05e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee05e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee05e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee05e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee05e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee05ed cmp dword ptr [0x10f0f6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee05f4 jne 0x10ee0653 */
  if (!C.zf) goto L_10ee0653;
  /* 10ee05f6 push 0x10f09374 */
  push32((uint32_t)(0x10f09374u));
  /* 10ee05fb call dword ptr [0x10f12424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12424))), 0x10ee0601u);
  /* 10ee0601 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee0604 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0608 je 0x10ee0627 */
  if (C.zf) goto L_10ee0627;
  /* 10ee060a push 0x10f0a05c */
  push32((uint32_t)(0x10f0a05cu));
  /* 10ee060f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee0612 push eax */
  push32((uint32_t)(EAX));
  /* 10ee0613 call dword ptr [0x10f12314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12314))), 0x10ee0619u);
  /* 10ee0619 mov dword ptr [0x10f0f6c4], eax */
  w32((uint32_t)(0x10f0f6c4), (EAX));
  /* 10ee061e cmp dword ptr [0x10f0f6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0625 jne 0x10ee062b */
  if (!C.zf) goto L_10ee062b;
L_10ee0627:;
  /* 10ee0627 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0629 jmp 0x10ee0697 */
  goto L_10ee0697;
L_10ee062b:;
  /* 10ee062b push 0x10f0a04c */
  push32((uint32_t)(0x10f0a04cu));
  /* 10ee0630 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee0633 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee0634 call dword ptr [0x10f12314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12314))), 0x10ee063au);
  /* 10ee063a mov dword ptr [0x10f0f6c8], eax */
  w32((uint32_t)(0x10f0f6c8), (EAX));
  /* 10ee063f push 0x10f0a038 */
  push32((uint32_t)(0x10f0a038u));
  /* 10ee0644 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee0647 push edx */
  push32((uint32_t)(EDX));
  /* 10ee0648 call dword ptr [0x10f12314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12314))), 0x10ee064eu);
  /* 10ee064e mov dword ptr [0x10f0f6cc], eax */
  w32((uint32_t)(0x10f0f6cc), (EAX));
L_10ee0653:;
  /* 10ee0653 cmp dword ptr [0x10f0f6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee065a je 0x10ee0665 */
  if (C.zf) goto L_10ee0665;
  /* 10ee065c call dword ptr [0x10f0f6c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f6c8))), 0x10ee0662u);
  /* 10ee0662 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee0665:;
  /* 10ee0665 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0669 je 0x10ee0681 */
  if (C.zf) goto L_10ee0681;
  /* 10ee066b cmp dword ptr [0x10f0f6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0672 je 0x10ee0681 */
  if (C.zf) goto L_10ee0681;
  /* 10ee0674 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0677 push eax */
  push32((uint32_t)(EAX));
  /* 10ee0678 call dword ptr [0x10f0f6cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f6cc))), 0x10ee067eu);
  /* 10ee067e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee0681:;
  /* 10ee0681 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee0684 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee0685 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee0688 push edx */
  push32((uint32_t)(EDX));
  /* 10ee0689 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee068c push eax */
  push32((uint32_t)(EAX));
  /* 10ee068d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0690 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee0691 call dword ptr [0x10f0f6c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f6c4))), 0x10ee0697u);
L_10ee0697:;
  /* 10ee0697 mov esp, ebp */
  ESP = (EBP);
  /* 10ee0699 pop ebp */
  EBP = (pop32());
  /* 10ee069a ret  */
  ESPCHK(0x10ee05e0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10ee06a0 (254 bytes, 109 insns) */
void f_10ee06a0(void) {
  FTRACE(0x10ee06a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee06a0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ee06a4 push edi */
  push32((uint32_t)(EDI));
  /* 10ee06a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee06a7 je 0x10ee0723 */
  if (C.zf) goto L_10ee0723;
  /* 10ee06a9 push esi */
  push32((uint32_t)(ESI));
  /* 10ee06aa push ebx */
  push32((uint32_t)(EBX));
  /* 10ee06ab mov ebx, ecx */
  EBX = (ECX);
  /* 10ee06ad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10ee06b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10ee06b7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10ee06bb jne 0x10ee06c4 */
  if (!C.zf) goto L_10ee06c4;
  /* 10ee06bd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee06c0 jne 0x10ee0731 */
  if (!C.zf) goto L_10ee0731;
  /* 10ee06c2 jmp 0x10ee06e5 */
  goto L_10ee06e5;
L_10ee06c4:;
  /* 10ee06c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ee06c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ee06c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee06c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ee06ca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ee06cb je 0x10ee06f2 */
  if (C.zf) goto L_10ee06f2;
  /* 10ee06cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ee06cf je 0x10ee06fa */
  if (C.zf) goto L_10ee06fa;
  /* 10ee06d1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10ee06d7 jne 0x10ee06c4 */
  if (!C.zf) goto L_10ee06c4;
  /* 10ee06d9 mov ebx, ecx */
  EBX = (ECX);
  /* 10ee06db shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee06de jne 0x10ee0731 */
  if (!C.zf) goto L_10ee0731;
L_10ee06e0:;
  /* 10ee06e0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10ee06e3 je 0x10ee06f2 */
  if (C.zf) goto L_10ee06f2;
L_10ee06e5:;
  /* 10ee06e5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ee06e7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ee06e8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee06ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ee06eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ee06ed je 0x10ee071e */
  if (C.zf) goto L_10ee071e;
  /* 10ee06ef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10ee06f0 jne 0x10ee06e5 */
  if (!C.zf) goto L_10ee06e5;
L_10ee06f2:;
  /* 10ee06f2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ee06f6 pop ebx */
  EBX = (pop32());
  /* 10ee06f7 pop esi */
  ESI = (pop32());
  /* 10ee06f8 pop edi */
  EDI = (pop32());
  /* 10ee06f9 ret  */
  ESPCHK(0x10ee06a0u, _esp0);
  ESP += 4; return;
L_10ee06fa:;
  /* 10ee06fa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ee0700 je 0x10ee0714 */
  if (C.zf) goto L_10ee0714;
L_10ee0702:;
  /* 10ee0702 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee0704 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ee0705 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ee0706 je 0x10ee0796 */
  if (C.zf) goto L_10ee0796;
  /* 10ee070c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ee0712 jne 0x10ee0702 */
  if (!C.zf) goto L_10ee0702;
L_10ee0714:;
  /* 10ee0714 mov ebx, ecx */
  EBX = (ECX);
  /* 10ee0716 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee0719 jne 0x10ee0787 */
  if (!C.zf) goto L_10ee0787;
L_10ee071b:;
  /* 10ee071b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee071d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10ee071e:;
  /* 10ee071e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10ee071f jne 0x10ee071b */
  if (!C.zf) goto L_10ee071b;
  /* 10ee0721 pop ebx */
  EBX = (pop32());
  /* 10ee0722 pop esi */
  ESI = (pop32());
L_10ee0723:;
  /* 10ee0723 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ee0727 pop edi */
  EDI = (pop32());
  /* 10ee0728 ret  */
  ESPCHK(0x10ee06a0u, _esp0);
  ESP += 4; return;
L_10ee0729:;
  /* 10ee0729 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ee072b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee072e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ee072f je 0x10ee06e0 */
  if (C.zf) goto L_10ee06e0;
L_10ee0731:;
  /* 10ee0731 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10ee0736 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10ee0738 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee073a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee073d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee073f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10ee0741 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0744 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10ee0749 je 0x10ee0729 */
  if (C.zf) goto L_10ee0729;
  /* 10ee074b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10ee074d je 0x10ee077b */
  if (C.zf) goto L_10ee077b;
  /* 10ee074f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10ee0751 je 0x10ee0771 */
  if (C.zf) goto L_10ee0771;
  /* 10ee0753 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10ee0759 je 0x10ee0767 */
  if (C.zf) goto L_10ee0767;
  /* 10ee075b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10ee0761 jne 0x10ee0729 */
  if (!C.zf) goto L_10ee0729;
  /* 10ee0763 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ee0765 jmp 0x10ee077f */
  goto L_10ee077f;
L_10ee0767:;
  /* 10ee0767 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee076d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ee076f jmp 0x10ee077f */
  goto L_10ee077f;
L_10ee0771:;
  /* 10ee0771 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0777 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ee0779 jmp 0x10ee077f */
  goto L_10ee077f;
L_10ee077b:;
  /* 10ee077b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee077d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10ee077f:;
  /* 10ee077f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0782 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0784 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ee0785 je 0x10ee0791 */
  if (C.zf) goto L_10ee0791;
L_10ee0787:;
  /* 10ee0787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ee0789:;
  /* 10ee0789 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10ee078b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee078e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ee078f jne 0x10ee0789 */
  if (!C.zf) goto L_10ee0789;
L_10ee0791:;
  /* 10ee0791 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10ee0794 jne 0x10ee071b */
  if (!C.zf) goto L_10ee071b;
L_10ee0796:;
  /* 10ee0796 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ee079a pop ebx */
  EBX = (pop32());
  /* 10ee079b pop esi */
  ESI = (pop32());
  /* 10ee079c pop edi */
  EDI = (pop32());
  /* 10ee079d ret  */
  ESPCHK(0x10ee06a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100107a0 @ 0x10ee07a0 (348 bytes, 114 insns) [1 switch table(s)] */
void f_10ee07a0(void) {
  FTRACE(0x10ee07a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee07a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee07a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee07a3 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee07a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee07a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee07ab mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 10ee07ae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ee07b1 lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 10ee07b4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ee07b7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee07ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee07bc mov dword ptr [ebp - 0x6c], ecx */
  w32((uint32_t)(EBP + -0x6c), (ECX));
  /* 10ee07bf mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10ee07c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee07c5 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
  /* 10ee07c8 cmp dword ptr [ebp - 0x6c], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x6c))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee07cc ja 0x10ee080e */
  if ((!C.cf&&!C.zf)) goto L_10ee080e;
  /* 10ee07ce mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10ee07d1 jmp dword ptr [eax*4 + 0x10ee08fc] */
  switch (EAX) {
    case 0: goto L_10ee07d8;
    case 1: goto L_10ee07f3;
    case 2: goto L_10ee07e1;
    case 3: goto L_10ee07ea;
    case 4: goto L_10ee07d8;
    case 5: goto L_10ee080e;
    case 6: goto L_10ee0805;
    case 7: goto L_10ee07fc;
    default: x86_unimpl("switch@0x10ee07d1 out of table"); return;
  }
L_10ee07d8:;
  /* 10ee07d8 mov dword ptr [ebp - 4], 8 */
  w32((uint32_t)(EBP + -0x4), (0x8u));
  /* 10ee07df jmp 0x10ee0815 */
  goto L_10ee0815;
L_10ee07e1:;
  /* 10ee07e1 mov dword ptr [ebp - 4], 0x11 */
  w32((uint32_t)(EBP + -0x4), (0x11u));
  /* 10ee07e8 jmp 0x10ee0815 */
  goto L_10ee0815;
L_10ee07ea:;
  /* 10ee07ea mov dword ptr [ebp - 4], 0x12 */
  w32((uint32_t)(EBP + -0x4), (0x12u));
  /* 10ee07f1 jmp 0x10ee0815 */
  goto L_10ee0815;
L_10ee07f3:;
  /* 10ee07f3 mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 10ee07fa jmp 0x10ee0815 */
  goto L_10ee0815;
L_10ee07fc:;
  /* 10ee07fc mov dword ptr [ebp - 4], 0x10 */
  w32((uint32_t)(EBP + -0x4), (0x10u));
  /* 10ee0803 jmp 0x10ee0815 */
  goto L_10ee0815;
L_10ee0805:;
  /* 10ee0805 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee0808 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
L_10ee080e:;
  /* 10ee080e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ee0815:;
  /* 10ee0815 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0819 je 0x10ee08aa */
  if (C.zf) goto L_10ee08aa;
  /* 10ee081f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee0822 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee0824 push eax */
  push32((uint32_t)(EAX));
  /* 10ee0825 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee0828 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee082b push ecx */
  push32((uint32_t)(ECX));
  /* 10ee082c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee082f push edx */
  push32((uint32_t)(EDX));
  /* 10ee0830 call 0x10ee7500 */
  push32(0x10ee0835u); f_10ee7500();
  /* 10ee0835 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0838 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee083a jne 0x10ee08aa */
  if (!C.zf) goto L_10ee08aa;
  /* 10ee083c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee083f mov dword ptr [ebp - 0x70], eax */
  w32((uint32_t)(EBP + -0x70), (EAX));
  /* 10ee0842 cmp dword ptr [ebp - 0x70], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0846 je 0x10ee0856 */
  if (C.zf) goto L_10ee0856;
  /* 10ee0848 cmp dword ptr [ebp - 0x70], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee084c je 0x10ee0856 */
  if (C.zf) goto L_10ee0856;
  /* 10ee084e cmp dword ptr [ebp - 0x70], 0x1d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x1du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0852 je 0x10ee0856 */
  if (C.zf) goto L_10ee0856;
  /* 10ee0854 jmp 0x10ee087c */
  goto L_10ee087c;
L_10ee0856:;
  /* 10ee0856 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee0859 or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee085c mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10ee085f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee0862 and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0865 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0868 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10ee086b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee086e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ee0871 mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
  /* 10ee0874 mov edx, dword ptr [eax + 0x14] */
  EDX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ee0877 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 10ee087a jmp 0x10ee0884 */
  goto L_10ee0884;
L_10ee087c:;
  /* 10ee087c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee087f and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10ee0881 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10ee0884:;
  /* 10ee0884 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee0887 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee088a push ecx */
  push32((uint32_t)(ECX));
  /* 10ee088b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee088e add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0891 push edx */
  push32((uint32_t)(EDX));
  /* 10ee0892 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0895 push eax */
  push32((uint32_t)(EAX));
  /* 10ee0896 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0899 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee089a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee089d push edx */
  push32((uint32_t)(EDX));
  /* 10ee089e lea eax, [ebp - 0x68] */
  EAX = ((uint32_t)(EBP + -0x68));
  /* 10ee08a1 push eax */
  push32((uint32_t)(EAX));
  /* 10ee08a2 call 0x10ee7030 */
  push32(0x10ee08a7u); f_10ee7030();
  /* 10ee08a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee08aa:;
  /* 10ee08aa push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 10ee08af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee08b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee08b4 push edx */
  push32((uint32_t)(EDX));
  /* 10ee08b5 call 0x10ee7a70 */
  push32(0x10ee08bau); f_10ee7a70();
  /* 10ee08ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee08bd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ee08c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee08c7 cmp dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee08ca je 0x10ee08e4 */
  if (C.zf) goto L_10ee08e4;
  /* 10ee08cc cmp dword ptr [0x10f0d728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0d728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee08d3 jne 0x10ee08e4 */
  if (!C.zf) goto L_10ee08e4;
  /* 10ee08d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee08d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee08d9 call 0x10ee7a20 */
  push32(0x10ee08deu); f_10ee7a20();
  /* 10ee08de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee08e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ee08e4:;
  /* 10ee08e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee08e8 jne 0x10ee08f8 */
  if (!C.zf) goto L_10ee08f8;
  /* 10ee08ea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee08ed mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee08ef push eax */
  push32((uint32_t)(EAX));
  /* 10ee08f0 call 0x10ee7920 */
  push32(0x10ee08f5u); f_10ee7920();
  /* 10ee08f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee08f8:;
  /* 10ee08f8 mov esp, ebp */
  ESP = (EBP);
  /* 10ee08fa pop ebp */
  EBP = (pop32());
  /* 10ee08fb ret  */
  ESPCHK(0x10ee07a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010920 @ 0x10ee0920 (31 bytes, 18 insns) */
void f_10ee0920(void) {
  FTRACE(0x10ee0920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0920 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee0921 mov ebp, esp */
  EBP = (ESP);
  /* 10ee0923 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee0924 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee0925 push esi */
  push32((uint32_t)(ESI));
  /* 10ee0926 push edi */
  push32((uint32_t)(EDI));
  /* 10ee0927 wait  */
  /* wait (no observable integer/reg state) */
  /* 10ee0928 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 10ee092b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee092f push eax */
  push32((uint32_t)(EAX));
  /* 10ee0930 call 0x10ee0d10 */
  push32(0x10ee0935u); f_10ee0d10();
  /* 10ee0935 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0938 pop edi */
  EDI = (pop32());
  /* 10ee0939 pop esi */
  ESI = (pop32());
  /* 10ee093a pop ebx */
  EBX = (pop32());
  /* 10ee093b mov esp, ebp */
  ESP = (EBP);
  /* 10ee093d pop ebp */
  EBP = (pop32());
  /* 10ee093e ret  */
  ESPCHK(0x10ee0920u, _esp0);
  ESP += 4; return;
}

/* FUN_10010940 @ 0x10ee0940 (32 bytes, 18 insns) */
void f_10ee0940(void) {
  FTRACE(0x10ee0940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0940 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee0941 mov ebp, esp */
  EBP = (ESP);
  /* 10ee0943 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee0944 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee0945 push esi */
  push32((uint32_t)(ESI));
  /* 10ee0946 push edi */
  push32((uint32_t)(EDI));
  /* 10ee0947 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 10ee094a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10ee094c mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0950 push eax */
  push32((uint32_t)(EAX));
  /* 10ee0951 call 0x10ee0d10 */
  push32(0x10ee0956u); f_10ee0d10();
  /* 10ee0956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0959 pop edi */
  EDI = (pop32());
  /* 10ee095a pop esi */
  ESI = (pop32());
  /* 10ee095b pop ebx */
  EBX = (pop32());
  /* 10ee095c mov esp, ebp */
  ESP = (EBP);
  /* 10ee095e pop ebp */
  EBP = (pop32());
  /* 10ee095f ret  */
  ESPCHK(0x10ee0940u, _esp0);
  ESP += 4; return;
}

/* FUN_10010960 @ 0x10ee0960 (79 bytes, 34 insns) */
void f_10ee0960(void) {
  FTRACE(0x10ee0960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0960 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee0961 mov ebp, esp */
  EBP = (ESP);
  /* 10ee0963 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee0966 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee0967 push esi */
  push32((uint32_t)(ESI));
  /* 10ee0968 push edi */
  push32((uint32_t)(EDI));
  /* 10ee0969 wait  */
  /* wait (no observable integer/reg state) */
  /* 10ee096a fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 10ee096d mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 10ee0971 push eax */
  push32((uint32_t)(EAX));
  /* 10ee0972 call 0x10ee0a30 */
  push32(0x10ee0977u); f_10ee0a30();
  /* 10ee0977 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee097a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee097d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0980 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0983 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee0986 not edx */
  EDX = (~(EDX));
  /* 10ee0988 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee098b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee098d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee098f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee0992 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee0995 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee0996 call 0x10ee0bb0 */
  push32(0x10ee099bu); f_10ee0bb0();
  /* 10ee099b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee099e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10ee09a2 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10ee09a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee09a8 pop edi */
  EDI = (pop32());
  /* 10ee09a9 pop esi */
  ESI = (pop32());
  /* 10ee09aa pop ebx */
  EBX = (pop32());
  /* 10ee09ab mov esp, ebp */
  ESP = (EBP);
  /* 10ee09ad pop ebp */
  EBP = (pop32());
  /* 10ee09ae ret  */
  ESPCHK(0x10ee0960u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x10ee09b0 (26 bytes, 11 insns) */
void f_10ee09b0(void) {
  FTRACE(0x10ee09b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee09b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee09b1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee09b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee09b6 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee09bb push eax */
  push32((uint32_t)(EAX));
  /* 10ee09bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee09bf push ecx */
  push32((uint32_t)(ECX));
  /* 10ee09c0 call 0x10ee0960 */
  push32(0x10ee09c5u); f_10ee0960();
  /* 10ee09c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee09c8 pop ebp */
  EBP = (pop32());
  /* 10ee09c9 ret  */
  ESPCHK(0x10ee09b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100109d0 @ 0x10ee09d0 (88 bytes, 33 insns) */
void f_10ee09d0(void) {
  FTRACE(0x10ee09d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee09d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee09d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee09d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee09d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee09d7 push esi */
  push32((uint32_t)(ESI));
  /* 10ee09d8 push edi */
  push32((uint32_t)(EDI));
  /* 10ee09d9 call 0x10ee05d0 */
  push32(0x10ee09deu); f_10ee05d0();
  /* 10ee09de mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10ee09e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee09e3 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 10ee09e5 call 0x10edad40 */
  push32(0x10ee09eau); f_10edad40();
  /* 10ee09ea cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee09ee je 0x10ee0a21 */
  if (C.zf) goto L_10ee0a21;
  /* 10ee09f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee09f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee09f6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee09f8 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee09fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee09ff je 0x10ee0a21 */
  if (C.zf) goto L_10ee0a21;
  /* 10ee0a01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0a04 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee0a07 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0a0a mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ee0a0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee0a10 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10ee0a17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee0a1a mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_10ee0a21:;
  /* 10ee0a21 pop edi */
  EDI = (pop32());
  /* 10ee0a22 pop esi */
  ESI = (pop32());
  /* 10ee0a23 pop ebx */
  EBX = (pop32());
  /* 10ee0a24 mov esp, ebp */
  ESP = (EBP);
  /* 10ee0a26 pop ebp */
  EBP = (pop32());
  /* 10ee0a27 ret  */
  ESPCHK(0x10ee09d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a30 @ 0x10ee0a30 (377 bytes, 115 insns) */
void f_10ee0a30(void) {
  FTRACE(0x10ee0a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee0a31 mov ebp, esp */
  EBP = (ESP);
  /* 10ee0a33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee0a36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee0a3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0a40 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0a45 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0a48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee0a4a je 0x10ee0a55 */
  if (C.zf) goto L_10ee0a55;
  /* 10ee0a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0a4f or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0a52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee0a55:;
  /* 10ee0a55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0a58 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0a5e and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0a61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee0a63 je 0x10ee0a6d */
  if (C.zf) goto L_10ee0a6d;
  /* 10ee0a65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0a68 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10ee0a6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee0a6d:;
  /* 10ee0a6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0a70 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0a76 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0a79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee0a7b je 0x10ee0a86 */
  if (C.zf) goto L_10ee0a86;
  /* 10ee0a7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0a80 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0a83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee0a86:;
  /* 10ee0a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0a89 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0a8e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0a91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee0a93 je 0x10ee0a9e */
  if (C.zf) goto L_10ee0a9e;
  /* 10ee0a95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0a98 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0a9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee0a9e:;
  /* 10ee0a9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0aa1 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0aa7 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0aaa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee0aac je 0x10ee0ab6 */
  if (C.zf) goto L_10ee0ab6;
  /* 10ee0aae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0ab1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10ee0ab3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee0ab6:;
  /* 10ee0ab6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0ab9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0abf and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0ac2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee0ac4 je 0x10ee0ad2 */
  if (C.zf) goto L_10ee0ad2;
  /* 10ee0ac6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0ac9 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0acf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee0ad2:;
  /* 10ee0ad2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0ad5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0ada and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0adf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee0ae2 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0ae9 jg 0x10ee0b05 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee0b05;
  /* 10ee0aeb cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0af2 je 0x10ee0b18 */
  if (C.zf) goto L_10ee0b18;
  /* 10ee0af4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0af8 je 0x10ee0b10 */
  if (C.zf) goto L_10ee0b10;
  /* 10ee0afa cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0b01 je 0x10ee0b23 */
  if (C.zf) goto L_10ee0b23;
  /* 10ee0b03 jmp 0x10ee0b37 */
  goto L_10ee0b37;
L_10ee0b05:;
  /* 10ee0b05 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0b0c je 0x10ee0b2e */
  if (C.zf) goto L_10ee0b2e;
  /* 10ee0b0e jmp 0x10ee0b37 */
  goto L_10ee0b37;
L_10ee0b10:;
  /* 10ee0b10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0b13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee0b16 jmp 0x10ee0b37 */
  goto L_10ee0b37;
L_10ee0b18:;
  /* 10ee0b18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0b1b or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ee0b1e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee0b21 jmp 0x10ee0b37 */
  goto L_10ee0b37;
L_10ee0b23:;
  /* 10ee0b23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0b26 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10ee0b29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee0b2c jmp 0x10ee0b37 */
  goto L_10ee0b37;
L_10ee0b2e:;
  /* 10ee0b2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0b31 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10ee0b34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee0b37:;
  /* 10ee0b37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0b3a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0b40 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0b46 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ee0b49 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0b4d je 0x10ee0b79 */
  if (C.zf) goto L_10ee0b79;
  /* 10ee0b4f cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0b56 je 0x10ee0b6b */
  if (C.zf) goto L_10ee0b6b;
  /* 10ee0b58 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0b5f je 0x10ee0b63 */
  if (C.zf) goto L_10ee0b63;
  /* 10ee0b61 jmp 0x10ee0b85 */
  goto L_10ee0b85;
L_10ee0b63:;
  /* 10ee0b63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0b66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee0b69 jmp 0x10ee0b85 */
  goto L_10ee0b85;
L_10ee0b6b:;
  /* 10ee0b6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0b6e or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0b74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee0b77 jmp 0x10ee0b85 */
  goto L_10ee0b85;
L_10ee0b79:;
  /* 10ee0b79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0b7c or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0b82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee0b85:;
  /* 10ee0b85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0b88 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0b8d and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0b92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee0b94 je 0x10ee0ba2 */
  if (C.zf) goto L_10ee0ba2;
  /* 10ee0b96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0b99 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0b9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee0ba2:;
  /* 10ee0ba2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0ba5 mov esp, ebp */
  ESP = (EBP);
  /* 10ee0ba7 pop ebp */
  EBP = (pop32());
  /* 10ee0ba8 ret  */
  ESPCHK(0x10ee0a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bb0 @ 0x10ee0bb0 (346 bytes, 106 insns) */
void f_10ee0bb0(void) {
  FTRACE(0x10ee0bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee0bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee0bb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee0bb6 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee0bbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0bbf and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0bc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee0bc4 je 0x10ee0bd1 */
  if (C.zf) goto L_10ee0bd1;
  /* 10ee0bc6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0bca or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 10ee0bcd mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_10ee0bd1:;
  /* 10ee0bd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0bd4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0bd7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee0bd9 je 0x10ee0be5 */
  if (C.zf) goto L_10ee0be5;
  /* 10ee0bdb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0bdf or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10ee0be1 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_10ee0be5:;
  /* 10ee0be5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0be8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0beb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee0bed je 0x10ee0bfa */
  if (C.zf) goto L_10ee0bfa;
  /* 10ee0bef mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0bf3 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10ee0bf6 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_10ee0bfa:;
  /* 10ee0bfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0bfd and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0c00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee0c02 je 0x10ee0c0f */
  if (C.zf) goto L_10ee0c0f;
  /* 10ee0c04 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0c08 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10ee0c0b mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_10ee0c0f:;
  /* 10ee0c0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0c12 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0c15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee0c17 je 0x10ee0c23 */
  if (C.zf) goto L_10ee0c23;
  /* 10ee0c19 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0c1d or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10ee0c1f mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_10ee0c23:;
  /* 10ee0c23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0c26 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0c2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee0c2e je 0x10ee0c3b */
  if (C.zf) goto L_10ee0c3b;
  /* 10ee0c30 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0c34 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 10ee0c37 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_10ee0c3b:;
  /* 10ee0c3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0c3e and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0c43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee0c46 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0c4d ja 0x10ee0c69 */
  if ((!C.cf&&!C.zf)) goto L_10ee0c69;
  /* 10ee0c4f cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0c56 je 0x10ee0c7e */
  if (C.zf) goto L_10ee0c7e;
  /* 10ee0c58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0c5c je 0x10ee0c74 */
  if (C.zf) goto L_10ee0c74;
  /* 10ee0c5e cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0c65 je 0x10ee0c8b */
  if (C.zf) goto L_10ee0c8b;
  /* 10ee0c67 jmp 0x10ee0ca3 */
  goto L_10ee0ca3;
L_10ee0c69:;
  /* 10ee0c69 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0c70 je 0x10ee0c98 */
  if (C.zf) goto L_10ee0c98;
  /* 10ee0c72 jmp 0x10ee0ca3 */
  goto L_10ee0ca3;
L_10ee0c74:;
  /* 10ee0c74 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0c78 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10ee0c7c jmp 0x10ee0ca3 */
  goto L_10ee0ca3;
L_10ee0c7e:;
  /* 10ee0c7e mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0c82 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ee0c85 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 10ee0c89 jmp 0x10ee0ca3 */
  goto L_10ee0ca3;
L_10ee0c8b:;
  /* 10ee0c8b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0c8f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10ee0c92 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10ee0c96 jmp 0x10ee0ca3 */
  goto L_10ee0ca3;
L_10ee0c98:;
  /* 10ee0c98 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0c9c or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10ee0c9f mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_10ee0ca3:;
  /* 10ee0ca3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0ca6 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0cac mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ee0caf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0cb3 je 0x10ee0cc9 */
  if (C.zf) goto L_10ee0cc9;
  /* 10ee0cb5 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0cbc je 0x10ee0cd6 */
  if (C.zf) goto L_10ee0cd6;
  /* 10ee0cbe cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0cc5 je 0x10ee0ce3 */
  if (C.zf) goto L_10ee0ce3;
  /* 10ee0cc7 jmp 0x10ee0ceb */
  goto L_10ee0ceb;
L_10ee0cc9:;
  /* 10ee0cc9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0ccd or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 10ee0cd0 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10ee0cd4 jmp 0x10ee0ceb */
  goto L_10ee0ceb;
L_10ee0cd6:;
  /* 10ee0cd6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0cda or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10ee0cdd mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10ee0ce1 jmp 0x10ee0ceb */
  goto L_10ee0ceb;
L_10ee0ce3:;
  /* 10ee0ce3 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0ce7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_10ee0ceb:;
  /* 10ee0ceb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0cee and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0cf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee0cf5 je 0x10ee0d02 */
  if (C.zf) goto L_10ee0d02;
  /* 10ee0cf7 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0cfb or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10ee0cfe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_10ee0d02:;
  /* 10ee0d02 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee0d06 mov esp, ebp */
  ESP = (EBP);
  /* 10ee0d08 pop ebp */
  EBP = (pop32());
  /* 10ee0d09 ret  */
  ESPCHK(0x10ee0bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d10 @ 0x10ee0d10 (167 bytes, 56 insns) */
void f_10ee0d10(void) {
  FTRACE(0x10ee0d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0d10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee0d11 mov ebp, esp */
  EBP = (ESP);
  /* 10ee0d13 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee0d14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee0d1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0d1e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0d23 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0d26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee0d28 je 0x10ee0d33 */
  if (C.zf) goto L_10ee0d33;
  /* 10ee0d2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0d2d or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0d30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee0d33:;
  /* 10ee0d33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0d36 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0d3c and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0d3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee0d41 je 0x10ee0d4b */
  if (C.zf) goto L_10ee0d4b;
  /* 10ee0d43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0d46 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10ee0d48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee0d4b:;
  /* 10ee0d4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0d4e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0d54 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0d57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee0d59 je 0x10ee0d64 */
  if (C.zf) goto L_10ee0d64;
  /* 10ee0d5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0d5e or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0d61 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee0d64:;
  /* 10ee0d64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0d67 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0d6c and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0d6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee0d71 je 0x10ee0d7c */
  if (C.zf) goto L_10ee0d7c;
  /* 10ee0d73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0d76 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0d79 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee0d7c:;
  /* 10ee0d7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0d7f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0d85 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0d88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee0d8a je 0x10ee0d94 */
  if (C.zf) goto L_10ee0d94;
  /* 10ee0d8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0d8f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10ee0d91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee0d94:;
  /* 10ee0d94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0d97 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0d9d and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0da0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee0da2 je 0x10ee0db0 */
  if (C.zf) goto L_10ee0db0;
  /* 10ee0da4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0da7 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0dad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee0db0:;
  /* 10ee0db0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0db3 mov esp, ebp */
  ESP = (EBP);
  /* 10ee0db5 pop ebp */
  EBP = (pop32());
  /* 10ee0db6 ret  */
  ESPCHK(0x10ee0d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010dc0 @ 0x10ee0dc0 (183 bytes, 58 insns) */
void f_10ee0dc0(void) {
  FTRACE(0x10ee0dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee0dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee0dc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee0dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0dc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0dcc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0dd1 ja 0x10ee0dea */
  if ((!C.cf&&!C.zf)) goto L_10ee0dea;
  /* 10ee0dd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0dd6 mov edx, dword ptr [0x10f0cfec] */
  EDX = (r32((uint32_t)(0x10f0cfec)));
  /* 10ee0ddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0dde mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10ee0de2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0de5 jmp 0x10ee0e73 */
  goto L_10ee0e73;
L_10ee0dea:;
  /* 10ee0dea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0ded sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10ee0df0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0df6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0dfc mov edx, dword ptr [0x10f0cfec] */
  EDX = (r32((uint32_t)(0x10f0cfec)));
  /* 10ee0e02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0e04 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10ee0e08 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0e0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee0e0f je 0x10ee0e33 */
  if (C.zf) goto L_10ee0e33;
  /* 10ee0e11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0e14 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10ee0e17 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0e1d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10ee0e20 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ee0e23 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10ee0e26 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10ee0e2a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10ee0e31 jmp 0x10ee0e44 */
  goto L_10ee0e44;
L_10ee0e33:;
  /* 10ee0e33 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ee0e36 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10ee0e39 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10ee0e3d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10ee0e44:;
  /* 10ee0e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee0e46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee0e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee0e4a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10ee0e4d push ecx */
  push32((uint32_t)(ECX));
  /* 10ee0e4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee0e51 push edx */
  push32((uint32_t)(EDX));
  /* 10ee0e52 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10ee0e55 push eax */
  push32((uint32_t)(EAX));
  /* 10ee0e56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee0e58 call 0x10ee7b30 */
  push32(0x10ee0e5du); f_10ee7b30();
  /* 10ee0e5d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0e60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee0e62 jne 0x10ee0e68 */
  if (!C.zf) goto L_10ee0e68;
  /* 10ee0e64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0e66 jmp 0x10ee0e73 */
  goto L_10ee0e73;
L_10ee0e68:;
  /* 10ee0e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee0e6b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee0e70 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10ee0e73:;
  /* 10ee0e73 mov esp, ebp */
  ESP = (EBP);
  /* 10ee0e75 pop ebp */
  EBP = (pop32());
  /* 10ee0e76 ret  */
  ESPCHK(0x10ee0dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e80 @ 0x10ee0e80 (11 bytes, 6 insns) */
void f_10ee0e80(void) {
  FTRACE(0x10ee0e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee0e81 mov ebp, esp */
  EBP = (ESP);
  /* 10ee0e83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0e86 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0e89 pop ebp */
  EBP = (pop32());
  /* 10ee0e8a ret  */
  ESPCHK(0x10ee0e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e90 @ 0x10ee0e90 (147 bytes, 43 insns) */
void f_10ee0e90(void) {
  FTRACE(0x10ee0e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee0e91 mov ebp, esp */
  EBP = (ESP);
  /* 10ee0e93 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee0e94 cmp dword ptr [0x10f0f7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0e9b jne 0x10ee0eb7 */
  if (!C.zf) goto L_10ee0eb7;
  /* 10ee0e9d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0ea1 jl 0x10ee0eb2 */
  if ((C.sf!=C.of)) goto L_10ee0eb2;
  /* 10ee0ea3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0ea7 jg 0x10ee0eb2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee0eb2;
  /* 10ee0ea9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0eac add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0eaf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ee0eb2:;
  /* 10ee0eb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0eb5 jmp 0x10ee0f1f */
  goto L_10ee0f1f;
L_10ee0eb7:;
  /* 10ee0eb7 push 0x10f10bd4 */
  push32((uint32_t)(0x10f10bd4u));
  /* 10ee0ebc call dword ptr [0x10f12428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12428))), 0x10ee0ec2u);
  /* 10ee0ec2 cmp dword ptr [0x10f10bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0ec9 je 0x10ee0ee9 */
  if (C.zf) goto L_10ee0ee9;
  /* 10ee0ecb push 0x10f10bd4 */
  push32((uint32_t)(0x10f10bd4u));
  /* 10ee0ed0 call dword ptr [0x10f12418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12418))), 0x10ee0ed6u);
  /* 10ee0ed6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ee0ed8 call 0x10edb620 */
  push32(0x10ee0eddu); f_10edb620();
  /* 10ee0edd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0ee0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ee0ee7 jmp 0x10ee0ef0 */
  goto L_10ee0ef0;
L_10ee0ee9:;
  /* 10ee0ee9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ee0ef0:;
  /* 10ee0ef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee0ef4 call 0x10ee0f30 */
  push32(0x10ee0ef9u); f_10ee0f30();
  /* 10ee0ef9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0efc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ee0eff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0f03 je 0x10ee0f11 */
  if (C.zf) goto L_10ee0f11;
  /* 10ee0f05 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ee0f07 call 0x10edb6c0 */
  push32(0x10ee0f0cu); f_10edb6c0();
  /* 10ee0f0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0f0f jmp 0x10ee0f1c */
  goto L_10ee0f1c;
L_10ee0f11:;
  /* 10ee0f11 push 0x10f10bd4 */
  push32((uint32_t)(0x10f10bd4u));
  /* 10ee0f16 call dword ptr [0x10f12418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12418))), 0x10ee0f1cu);
L_10ee0f1c:;
  /* 10ee0f1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10ee0f1f:;
  /* 10ee0f1f mov esp, ebp */
  ESP = (EBP);
  /* 10ee0f21 pop ebp */
  EBP = (pop32());
  /* 10ee0f22 ret  */
  ESPCHK(0x10ee0e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f30 @ 0x10ee0f30 (299 bytes, 91 insns) */
void f_10ee0f30(void) {
  FTRACE(0x10ee0f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee0f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee0f31 mov ebp, esp */
  EBP = (ESP);
  /* 10ee0f33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee0f36 cmp dword ptr [0x10f0f7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0f3d jne 0x10ee0f5c */
  if (!C.zf) goto L_10ee0f5c;
  /* 10ee0f3f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0f43 jl 0x10ee0f54 */
  if ((C.sf!=C.of)) goto L_10ee0f54;
  /* 10ee0f45 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0f49 jg 0x10ee0f54 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee0f54;
  /* 10ee0f4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0f4e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0f51 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ee0f54:;
  /* 10ee0f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0f57 jmp 0x10ee1057 */
  goto L_10ee1057;
L_10ee0f5c:;
  /* 10ee0f5c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0f63 jge 0x10ee0fa3 */
  if ((C.sf==C.of)) goto L_10ee0fa3;
  /* 10ee0f65 cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0f6c jle 0x10ee0f81 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee0f81;
  /* 10ee0f6e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee0f70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0f73 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee0f74 call 0x10ee0dc0 */
  push32(0x10ee0f79u); f_10ee0dc0();
  /* 10ee0f79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee0f7c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee0f7f jmp 0x10ee0f95 */
  goto L_10ee0f95;
L_10ee0f81:;
  /* 10ee0f81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0f84 mov eax, dword ptr [0x10f0cfec] */
  EAX = (r32((uint32_t)(0x10f0cfec)));
  /* 10ee0f89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0f8b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ee0f8f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0f92 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ee0f95:;
  /* 10ee0f95 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee0f99 jne 0x10ee0fa3 */
  if (!C.zf) goto L_10ee0fa3;
  /* 10ee0f9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0f9e jmp 0x10ee1057 */
  goto L_10ee1057;
L_10ee0fa3:;
  /* 10ee0fa3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0fa6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ee0fa9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0faf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0fb5 mov eax, dword ptr [0x10f0cfec] */
  EAX = (r32((uint32_t)(0x10f0cfec)));
  /* 10ee0fba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0fbc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ee0fc0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee0fc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee0fc8 je 0x10ee0fec */
  if (C.zf) goto L_10ee0fec;
  /* 10ee0fca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee0fcd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ee0fd0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee0fd6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10ee0fd9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ee0fdc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10ee0fdf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10ee0fe3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10ee0fea jmp 0x10ee0ffd */
  goto L_10ee0ffd;
L_10ee0fec:;
  /* 10ee0fec mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ee0fef mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10ee0ff2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10ee0ff6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10ee0ffd:;
  /* 10ee0ffd push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee0fff push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee1001 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ee1003 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ee1006 push edx */
  push32((uint32_t)(EDX));
  /* 10ee1007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee100a push eax */
  push32((uint32_t)(EAX));
  /* 10ee100b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10ee100e push ecx */
  push32((uint32_t)(ECX));
  /* 10ee100f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ee1014 mov edx, dword ptr [0x10f0f7b8] */
  EDX = (r32((uint32_t)(0x10f0f7b8)));
  /* 10ee101a push edx */
  push32((uint32_t)(EDX));
  /* 10ee101b call 0x10ee8740 */
  push32(0x10ee1020u); f_10ee8740();
  /* 10ee1020 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1023 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee1026 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee102a jne 0x10ee1031 */
  if (!C.zf) goto L_10ee1031;
  /* 10ee102c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee102f jmp 0x10ee1057 */
  goto L_10ee1057;
L_10ee1031:;
  /* 10ee1031 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1035 jne 0x10ee1041 */
  if (!C.zf) goto L_10ee1041;
  /* 10ee1037 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee103a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee103f jmp 0x10ee1057 */
  goto L_10ee1057;
L_10ee1041:;
  /* 10ee1041 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee1044 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1049 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10ee104c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee1052 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10ee1055 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10ee1057:;
  /* 10ee1057 mov esp, ebp */
  ESP = (EBP);
  /* 10ee1059 pop ebp */
  EBP = (pop32());
  /* 10ee105a ret  */
  ESPCHK(0x10ee0f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011060 @ 0x10ee1060 (132 bytes, 51 insns) */
void f_10ee1060(void) {
  FTRACE(0x10ee1060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1060 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1061 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1063 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1066 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee1069 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ee106a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee106d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee106f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ee1072 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee1075 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee1078 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee107d jns 0x10ee1084 */
  if (!C.sf) goto L_10ee1084;
  /* 10ee107f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10ee1080 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1083 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10ee1084:;
  /* 10ee1084 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 10ee1089 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee108b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee108e or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1091 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee1094 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee1096 not edx */
  EDX = (~(EDX));
  /* 10ee1098 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ee109b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee109e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee10a1 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ee10a4 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10ee10a7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee10a9 je 0x10ee10af */
  if (C.zf) goto L_10ee10af;
  /* 10ee10ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee10ad jmp 0x10ee10e0 */
  goto L_10ee10e0;
L_10ee10af:;
  /* 10ee10af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee10b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee10b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee10b8 jmp 0x10ee10c3 */
  goto L_10ee10c3;
L_10ee10ba:;
  /* 10ee10ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee10bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee10c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10ee10c3:;
  /* 10ee10c3 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee10c7 jge 0x10ee10db */
  if ((C.sf==C.of)) goto L_10ee10db;
  /* 10ee10c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee10cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee10cf cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee10d3 je 0x10ee10d9 */
  if (C.zf) goto L_10ee10d9;
  /* 10ee10d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee10d7 jmp 0x10ee10e0 */
  goto L_10ee10e0;
L_10ee10d9:;
  /* 10ee10d9 jmp 0x10ee10ba */
  goto L_10ee10ba;
L_10ee10db:;
  /* 10ee10db mov eax, 1 */
  EAX = (0x1u);
L_10ee10e0:;
  /* 10ee10e0 mov esp, ebp */
  ESP = (EBP);
  /* 10ee10e2 pop ebp */
  EBP = (pop32());
  /* 10ee10e3 ret  */
  ESPCHK(0x10ee1060u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x10ee10f0 (168 bytes, 63 insns) */
void f_10ee10f0(void) {
  FTRACE(0x10ee10f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee10f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee10f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee10f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee10f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee10f9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ee10fa and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee10fd add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee10ff sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ee1102 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee1105 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee1108 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee110d jns 0x10ee1114 */
  if (!C.sf) goto L_10ee1114;
  /* 10ee110f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10ee1110 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1113 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10ee1114:;
  /* 10ee1114 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 10ee1119 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee111b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee111e mov edx, 1 */
  EDX = (0x1u);
  /* 10ee1123 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee1126 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee1128 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ee112b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee112e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1131 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 10ee1134 push edx */
  push32((uint32_t)(EDX));
  /* 10ee1135 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee1138 push eax */
  push32((uint32_t)(EAX));
  /* 10ee1139 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee113c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee113f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10ee1142 push eax */
  push32((uint32_t)(EAX));
  /* 10ee1143 call 0x10ee8aa0 */
  push32(0x10ee1148u); f_10ee8aa0();
  /* 10ee1148 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee114b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee114e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee1151 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1154 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee1157 jmp 0x10ee1162 */
  goto L_10ee1162;
L_10ee1159:;
  /* 10ee1159 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee115c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee115f mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ee1162:;
  /* 10ee1162 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1166 jl 0x10ee1191 */
  if ((C.sf!=C.of)) goto L_10ee1191;
  /* 10ee1168 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee116c je 0x10ee1191 */
  if (C.zf) goto L_10ee1191;
  /* 10ee116e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee1171 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1174 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 10ee1177 push edx */
  push32((uint32_t)(EDX));
  /* 10ee1178 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee117a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee117d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1180 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ee1183 push edx */
  push32((uint32_t)(EDX));
  /* 10ee1184 call 0x10ee8aa0 */
  push32(0x10ee1189u); f_10ee8aa0();
  /* 10ee1189 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee118c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee118f jmp 0x10ee1159 */
  goto L_10ee1159;
L_10ee1191:;
  /* 10ee1191 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee1194 mov esp, ebp */
  ESP = (EBP);
  /* 10ee1196 pop ebp */
  EBP = (pop32());
  /* 10ee1197 ret  */
  ESPCHK(0x10ee10f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100111a0 @ 0x10ee11a0 (219 bytes, 78 insns) */
void f_10ee11a0(void) {
  FTRACE(0x10ee11a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee11a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee11a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee11a3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee11a6 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10ee11ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee11b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee11b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee11b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee11b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee11bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee11bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee11c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ee11c3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee11c6 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee11c8 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ee11cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ee11ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee11d1 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee11d7 jns 0x10ee11de */
  if (!C.sf) goto L_10ee11de;
  /* 10ee11d9 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10ee11da or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee11dd inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_10ee11de:;
  /* 10ee11de mov eax, 0x1f */
  EAX = (0x1fu);
  /* 10ee11e3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee11e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee11e8 mov edx, 1 */
  EDX = (0x1u);
  /* 10ee11ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee11f0 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee11f2 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ee11f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee11f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee11fb mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ee11fe and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1201 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee1203 je 0x10ee122f */
  if (C.zf) goto L_10ee122f;
  /* 10ee1205 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee1208 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee120b push eax */
  push32((uint32_t)(EAX));
  /* 10ee120c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee120f push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1210 call 0x10ee1060 */
  push32(0x10ee1215u); f_10ee1060();
  /* 10ee1215 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee121a jne 0x10ee122f */
  if (!C.zf) goto L_10ee122f;
  /* 10ee121c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee121f push edx */
  push32((uint32_t)(EDX));
  /* 10ee1220 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1223 push eax */
  push32((uint32_t)(EAX));
  /* 10ee1224 call 0x10ee10f0 */
  push32(0x10ee1229u); f_10ee10f0();
  /* 10ee1229 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee122c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10ee122f:;
  /* 10ee122f or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1232 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee1235 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee1237 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee123a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee123d mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ee1240 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1242 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee1245 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1248 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10ee124b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee124e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1251 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee1254 jmp 0x10ee125f */
  goto L_10ee125f;
L_10ee1256:;
  /* 10ee1256 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee1259 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee125c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ee125f:;
  /* 10ee125f cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1263 jge 0x10ee1274 */
  if ((C.sf==C.of)) goto L_10ee1274;
  /* 10ee1265 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee1268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee126b mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 10ee1272 jmp 0x10ee1256 */
  goto L_10ee1256;
L_10ee1274:;
  /* 10ee1274 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee1277 mov esp, ebp */
  ESP = (EBP);
  /* 10ee1279 pop ebp */
  EBP = (pop32());
  /* 10ee127a ret  */
  ESPCHK(0x10ee11a0u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x10ee1280 (76 bytes, 28 insns) */
void f_10ee1280(void) {
  FTRACE(0x10ee1280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1280 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1281 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1283 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1286 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee1289 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee128c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee128f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee1292 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ee1299 jmp 0x10ee12a4 */
  goto L_10ee12a4;
L_10ee129b:;
  /* 10ee129b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee129e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee12a1 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ee12a4:;
  /* 10ee12a4 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee12a8 jge 0x10ee12c8 */
  if ((C.sf==C.of)) goto L_10ee12c8;
  /* 10ee12aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee12ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee12b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee12b2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ee12b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee12b7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee12ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee12bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee12c0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee12c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee12c6 jmp 0x10ee129b */
  goto L_10ee129b;
L_10ee12c8:;
  /* 10ee12c8 mov esp, ebp */
  ESP = (EBP);
  /* 10ee12ca pop ebp */
  EBP = (pop32());
  /* 10ee12cb ret  */
  ESPCHK(0x10ee1280u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x10ee12d0 (47 bytes, 17 insns) */
void f_10ee12d0(void) {
  FTRACE(0x10ee12d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee12d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee12d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee12d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee12d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee12db jmp 0x10ee12e6 */
  goto L_10ee12e6;
L_10ee12dd:;
  /* 10ee12dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee12e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee12e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee12e6:;
  /* 10ee12e6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee12ea jge 0x10ee12fb */
  if ((C.sf==C.of)) goto L_10ee12fb;
  /* 10ee12ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee12ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee12f2 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 10ee12f9 jmp 0x10ee12dd */
  goto L_10ee12dd;
L_10ee12fb:;
  /* 10ee12fb mov esp, ebp */
  ESP = (EBP);
  /* 10ee12fd pop ebp */
  EBP = (pop32());
  /* 10ee12fe ret  */
  ESPCHK(0x10ee12d0u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x10ee1300 (55 bytes, 21 insns) */
void f_10ee1300(void) {
  FTRACE(0x10ee1300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1300 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1301 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1303 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1304 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee130b jmp 0x10ee1316 */
  goto L_10ee1316;
L_10ee130d:;
  /* 10ee130d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee1310 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1313 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee1316:;
  /* 10ee1316 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee131a jge 0x10ee132e */
  if ((C.sf==C.of)) goto L_10ee132e;
  /* 10ee131c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee131f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1322 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1326 je 0x10ee132c */
  if (C.zf) goto L_10ee132c;
  /* 10ee1328 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee132a jmp 0x10ee1333 */
  goto L_10ee1333;
L_10ee132c:;
  /* 10ee132c jmp 0x10ee130d */
  goto L_10ee130d;
L_10ee132e:;
  /* 10ee132e mov eax, 1 */
  EAX = (0x1u);
L_10ee1333:;
  /* 10ee1333 mov esp, ebp */
  ESP = (EBP);
  /* 10ee1335 pop ebp */
  EBP = (pop32());
  /* 10ee1336 ret  */
  ESPCHK(0x10ee1300u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x10ee1340 (236 bytes, 82 insns) */
void f_10ee1340(void) {
  FTRACE(0x10ee1340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1340 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1341 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1343 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1346 push esi */
  push32((uint32_t)(ESI));
  /* 10ee1347 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee134a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ee134b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee134e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1350 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ee1353 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ee1356 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee1359 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee135e jns 0x10ee1365 */
  if (!C.sf) goto L_10ee1365;
  /* 10ee1360 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10ee1361 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1364 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10ee1365:;
  /* 10ee1365 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee1368 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee136b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee136e shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee1370 not edx */
  EDX = (~(EDX));
  /* 10ee1372 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ee1375 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ee137c mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ee1383 jmp 0x10ee138e */
  goto L_10ee138e;
L_10ee1385:;
  /* 10ee1385 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee1388 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee138b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10ee138e:;
  /* 10ee138e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1392 jge 0x10ee13e1 */
  if ((C.sf==C.of)) goto L_10ee13e1;
  /* 10ee1394 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee1397 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee139a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10ee139d and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 10ee13a0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee13a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee13a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee13a9 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10ee13ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee13af shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee13b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee13b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee13b7 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10ee13ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee13bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee13c0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10ee13c3 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10ee13c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee13c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee13cc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10ee13cf mov ecx, 0x20 */
  ECX = (0x20u);
  /* 10ee13d4 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee13d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee13da shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee13dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ee13df jmp 0x10ee1385 */
  goto L_10ee1385;
L_10ee13e1:;
  /* 10ee13e1 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 10ee13e8 jmp 0x10ee13f3 */
  goto L_10ee13f3;
L_10ee13ea:;
  /* 10ee13ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee13ed sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee13f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10ee13f3:;
  /* 10ee13f3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee13f7 jl 0x10ee1427 */
  if ((C.sf!=C.of)) goto L_10ee1427;
  /* 10ee13f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee13fc cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee13ff jl 0x10ee1418 */
  if ((C.sf!=C.of)) goto L_10ee1418;
  /* 10ee1401 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee1404 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1407 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee140a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee140d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1410 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 10ee1413 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10ee1416 jmp 0x10ee1425 */
  goto L_10ee1425;
L_10ee1418:;
  /* 10ee1418 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee141b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee141e mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10ee1425:;
  /* 10ee1425 jmp 0x10ee13ea */
  goto L_10ee13ea;
L_10ee1427:;
  /* 10ee1427 pop esi */
  ESI = (pop32());
  /* 10ee1428 mov esp, ebp */
  ESP = (EBP);
  /* 10ee142a pop ebp */
  EBP = (pop32());
  /* 10ee142b ret  */
  ESPCHK(0x10ee1340u, _esp0);
  ESP += 4; return;
}

/* FUN_10011430 @ 0x10ee1430 (578 bytes, 188 insns) */
void f_10ee1430(void) {
  FTRACE(0x10ee1430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1430 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1431 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1433 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1439 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee143b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 10ee143f and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee1445 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee144b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee144e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1451 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1453 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 10ee1457 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee145c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ee145f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1462 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 10ee1465 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ee1468 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee146b mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 10ee146e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ee1471 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1474 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1476 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10ee1479 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ee147c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee147f cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1486 jne 0x10ee14c0 */
  if (!C.zf) goto L_10ee14c0;
  /* 10ee1488 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ee148f lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 10ee1492 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1493 call 0x10ee1300 */
  push32(0x10ee1498u); f_10ee1300();
  /* 10ee1498 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee149b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee149d je 0x10ee14a8 */
  if (C.zf) goto L_10ee14a8;
  /* 10ee149f mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10ee14a6 jmp 0x10ee14bb */
  goto L_10ee14bb;
L_10ee14a8:;
  /* 10ee14a8 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 10ee14ab push edx */
  push32((uint32_t)(EDX));
  /* 10ee14ac call 0x10ee12d0 */
  push32(0x10ee14b1u); f_10ee12d0();
  /* 10ee14b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee14b4 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_10ee14bb:;
  /* 10ee14bb jmp 0x10ee160c */
  goto L_10ee160c;
L_10ee14c0:;
  /* 10ee14c0 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10ee14c3 push eax */
  push32((uint32_t)(EAX));
  /* 10ee14c4 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 10ee14c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee14c8 call 0x10ee1280 */
  push32(0x10ee14cdu); f_10ee1280();
  /* 10ee14cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee14d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee14d3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee14d6 push eax */
  push32((uint32_t)(EAX));
  /* 10ee14d7 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 10ee14da push ecx */
  push32((uint32_t)(ECX));
  /* 10ee14db call 0x10ee11a0 */
  push32(0x10ee14e0u); f_10ee11a0();
  /* 10ee14e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee14e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee14e5 je 0x10ee14f0 */
  if (C.zf) goto L_10ee14f0;
  /* 10ee14e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee14ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee14ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee14f0:;
  /* 10ee14f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee14f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee14f6 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee14f9 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee14fc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee14ff jge 0x10ee1520 */
  if ((C.sf==C.of)) goto L_10ee1520;
  /* 10ee1501 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10ee1504 push eax */
  push32((uint32_t)(EAX));
  /* 10ee1505 call 0x10ee12d0 */
  push32(0x10ee150au); f_10ee12d0();
  /* 10ee150a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee150d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ee1514 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 10ee151b jmp 0x10ee160c */
  goto L_10ee160c;
L_10ee1520:;
  /* 10ee1520 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee1523 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee1526 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1529 jg 0x10ee1590 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee1590;
  /* 10ee152b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee152e mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee1531 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1534 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 10ee1537 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 10ee153a push edx */
  push32((uint32_t)(EDX));
  /* 10ee153b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10ee153e push eax */
  push32((uint32_t)(EAX));
  /* 10ee153f call 0x10ee1280 */
  push32(0x10ee1544u); f_10ee1280();
  /* 10ee1544 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1547 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee154a push ecx */
  push32((uint32_t)(ECX));
  /* 10ee154b lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 10ee154e push edx */
  push32((uint32_t)(EDX));
  /* 10ee154f call 0x10ee1340 */
  push32(0x10ee1554u); f_10ee1340();
  /* 10ee1554 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1557 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee155a mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ee155d push ecx */
  push32((uint32_t)(ECX));
  /* 10ee155e lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 10ee1561 push edx */
  push32((uint32_t)(EDX));
  /* 10ee1562 call 0x10ee11a0 */
  push32(0x10ee1567u); f_10ee11a0();
  /* 10ee1567 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee156a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee156d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ee1570 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1573 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1574 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 10ee1577 push edx */
  push32((uint32_t)(EDX));
  /* 10ee1578 call 0x10ee1340 */
  push32(0x10ee157du); f_10ee1340();
  /* 10ee157d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1580 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ee1587 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 10ee158e jmp 0x10ee160c */
  goto L_10ee160c;
L_10ee1590:;
  /* 10ee1590 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee1593 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee1596 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1598 jl 0x10ee15db */
  if ((C.sf!=C.of)) goto L_10ee15db;
  /* 10ee159a lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 10ee159d push edx */
  push32((uint32_t)(EDX));
  /* 10ee159e call 0x10ee12d0 */
  push32(0x10ee15a3u); f_10ee12d0();
  /* 10ee15a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee15a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee15a9 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee15ae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ee15b1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee15b4 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ee15b7 push edx */
  push32((uint32_t)(EDX));
  /* 10ee15b8 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10ee15bb push eax */
  push32((uint32_t)(EAX));
  /* 10ee15bc call 0x10ee1340 */
  push32(0x10ee15c1u); f_10ee1340();
  /* 10ee15c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee15c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee15c7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee15c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee15cc add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee15cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ee15d2 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10ee15d9 jmp 0x10ee160c */
  goto L_10ee160c;
L_10ee15db:;
  /* 10ee15db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee15de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee15e1 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee15e4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ee15e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee15ea and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee15ef mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ee15f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee15f5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ee15f8 push edx */
  push32((uint32_t)(EDX));
  /* 10ee15f9 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10ee15fc push eax */
  push32((uint32_t)(EAX));
  /* 10ee15fd call 0x10ee1340 */
  push32(0x10ee1602u); f_10ee1340();
  /* 10ee1602 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1605 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_10ee160c:;
  /* 10ee160c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee160f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ee1612 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1615 mov eax, 0x20 */
  EAX = (0x20u);
  /* 10ee161a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee161c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee161f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee1622 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee1625 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee1627 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee162a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee162c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee162f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee1631 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1633 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee1639 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee163b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ee163e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee1641 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1645 jne 0x10ee165a */
  if (!C.zf) goto L_10ee165a;
  /* 10ee1647 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee164a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee164d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10ee1650 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee1653 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee1656 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ee1658 jmp 0x10ee166b */
  goto L_10ee166b;
L_10ee165a:;
  /* 10ee165a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee165d cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1661 jne 0x10ee166b */
  if (!C.zf) goto L_10ee166b;
  /* 10ee1663 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee1666 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee1669 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_10ee166b:;
  /* 10ee166b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee166e mov esp, ebp */
  ESP = (EBP);
  /* 10ee1670 pop ebp */
  EBP = (pop32());
  /* 10ee1671 ret  */
  ESPCHK(0x10ee1430u, _esp0);
  ESP += 4; return;
}

/* FUN_10011680 @ 0x10ee1680 (26 bytes, 11 insns) */
void f_10ee1680(void) {
  FTRACE(0x10ee1680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1680 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1681 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1683 push 0x10f0d1f8 */
  push32((uint32_t)(0x10f0d1f8u));
  /* 10ee1688 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee168b push eax */
  push32((uint32_t)(EAX));
  /* 10ee168c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee168f push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1690 call 0x10ee1430 */
  push32(0x10ee1695u); f_10ee1430();
  /* 10ee1695 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1698 pop ebp */
  EBP = (pop32());
  /* 10ee1699 ret  */
  ESPCHK(0x10ee1680u, _esp0);
  ESP += 4; return;
}

/* FUN_100116a0 @ 0x10ee16a0 (26 bytes, 11 insns) */
void f_10ee16a0(void) {
  FTRACE(0x10ee16a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee16a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee16a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee16a3 push 0x10f0d210 */
  push32((uint32_t)(0x10f0d210u));
  /* 10ee16a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee16ab push eax */
  push32((uint32_t)(EAX));
  /* 10ee16ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee16af push ecx */
  push32((uint32_t)(ECX));
  /* 10ee16b0 call 0x10ee1430 */
  push32(0x10ee16b5u); f_10ee1430();
  /* 10ee16b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee16b8 pop ebp */
  EBP = (pop32());
  /* 10ee16b9 ret  */
  ESPCHK(0x10ee16a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100116c0 @ 0x10ee16c0 (191 bytes, 58 insns) */
void f_10ee16c0(void) {
  FTRACE(0x10ee16c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee16c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee16c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee16c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee16c6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10ee16cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee16d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee16d2 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 10ee16d6 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee16dc mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10ee16e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee16e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee16e5 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 10ee16e9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee16ee mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 10ee16f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee16f5 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 10ee16f8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ee16fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee16fe mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 10ee1701 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee1704 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1707 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1709 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10ee170c shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ee170f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee1712 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10ee1714 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 10ee1717 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1718 call 0x10ee11a0 */
  push32(0x10ee171du); f_10ee11a0();
  /* 10ee171d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1720 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee1722 je 0x10ee1737 */
  if (C.zf) goto L_10ee1737;
  /* 10ee1724 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 10ee172b mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee172f add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 10ee1733 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_10ee1737:;
  /* 10ee1737 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee173a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee173f cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1744 jne 0x10ee174d */
  if (!C.zf) goto L_10ee174d;
  /* 10ee1746 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10ee174d:;
  /* 10ee174d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee1750 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee1753 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10ee1756 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee1759 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee175c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ee175e mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee1761 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1767 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee176a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee176f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1771 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee1774 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 10ee1778 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee177b mov esp, ebp */
  ESP = (EBP);
  /* 10ee177d pop ebp */
  EBP = (pop32());
  /* 10ee177e ret  */
  ESPCHK(0x10ee16c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011780 @ 0x10ee1780 (54 bytes, 24 insns) */
void f_10ee1780(void) {
  FTRACE(0x10ee1780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1780 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1781 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1783 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1786 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee1788 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee178a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee178c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee178e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee1791 push eax */
  push32((uint32_t)(EAX));
  /* 10ee1792 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 10ee1795 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1796 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ee1799 push edx */
  push32((uint32_t)(EDX));
  /* 10ee179a call 0x10ee8da0 */
  push32(0x10ee179fu); f_10ee8da0();
  /* 10ee179f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee17a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee17a5 push eax */
  push32((uint32_t)(EAX));
  /* 10ee17a6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10ee17a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee17aa call 0x10ee1680 */
  push32(0x10ee17afu); f_10ee1680();
  /* 10ee17af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee17b2 mov esp, ebp */
  ESP = (EBP);
  /* 10ee17b4 pop ebp */
  EBP = (pop32());
  /* 10ee17b5 ret  */
  ESPCHK(0x10ee1780u, _esp0);
  ESP += 4; return;
}

/* FUN_100117c0 @ 0x10ee17c0 (54 bytes, 24 insns) */
void f_10ee17c0(void) {
  FTRACE(0x10ee17c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee17c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee17c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee17c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee17c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee17c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee17ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee17cc push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee17ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee17d1 push eax */
  push32((uint32_t)(EAX));
  /* 10ee17d2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 10ee17d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee17d6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ee17d9 push edx */
  push32((uint32_t)(EDX));
  /* 10ee17da call 0x10ee8da0 */
  push32(0x10ee17dfu); f_10ee8da0();
  /* 10ee17df add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee17e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee17e5 push eax */
  push32((uint32_t)(EAX));
  /* 10ee17e6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10ee17e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee17ea call 0x10ee16c0 */
  push32(0x10ee17efu); f_10ee16c0();
  /* 10ee17ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee17f2 mov esp, ebp */
  ESP = (EBP);
  /* 10ee17f4 pop ebp */
  EBP = (pop32());
  /* 10ee17f5 ret  */
  ESPCHK(0x10ee17c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011800 @ 0x10ee1800 (54 bytes, 24 insns) */
void f_10ee1800(void) {
  FTRACE(0x10ee1800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1800 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1801 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1803 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1806 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee1808 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee180a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee180c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee180e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee1811 push eax */
  push32((uint32_t)(EAX));
  /* 10ee1812 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 10ee1815 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1816 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ee1819 push edx */
  push32((uint32_t)(EDX));
  /* 10ee181a call 0x10ee8da0 */
  push32(0x10ee181fu); f_10ee8da0();
  /* 10ee181f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1822 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1825 push eax */
  push32((uint32_t)(EAX));
  /* 10ee1826 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10ee1829 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee182a call 0x10ee16a0 */
  push32(0x10ee182fu); f_10ee16a0();
  /* 10ee182f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1832 mov esp, ebp */
  ESP = (EBP);
  /* 10ee1834 pop ebp */
  EBP = (pop32());
  /* 10ee1835 ret  */
  ESPCHK(0x10ee1800u, _esp0);
  ESP += 4; return;
}

/* FUN_10011840 @ 0x10ee1840 (250 bytes, 90 insns) */
void f_10ee1840(void) {
  FTRACE(0x10ee1840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1840 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1841 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1843 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1849 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee184c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee184f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ee1852 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ee1855 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee1858 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10ee185b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee185e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1861 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee1864:;
  /* 10ee1864 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1868 jle 0x10ee18ab */
  if ((C.zf||C.sf!=C.of)) goto L_10ee18ab;
  /* 10ee186a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee186d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ee1870 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee1872 je 0x10ee1888 */
  if (C.zf) goto L_10ee1888;
  /* 10ee1874 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee1877 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ee187a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ee187d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee1880 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1883 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee1886 jmp 0x10ee188f */
  goto L_10ee188f;
L_10ee1888:;
  /* 10ee1888 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_10ee188f:;
  /* 10ee188f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee1892 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ee1895 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10ee1897 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee189a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee189d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee18a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee18a3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee18a6 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10ee18a9 jmp 0x10ee1864 */
  goto L_10ee1864;
L_10ee18ab:;
  /* 10ee18ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee18ae mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10ee18b1 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee18b5 jl 0x10ee18f4 */
  if ((C.sf!=C.of)) goto L_10ee18f4;
  /* 10ee18b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee18ba movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee18bd cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee18c0 jl 0x10ee18f4 */
  if ((C.sf!=C.of)) goto L_10ee18f4;
  /* 10ee18c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee18c5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee18c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee18cb:;
  /* 10ee18cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee18ce movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee18d1 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee18d4 jne 0x10ee18e7 */
  if (!C.zf) goto L_10ee18e7;
  /* 10ee18d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee18d9 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 10ee18dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee18df sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee18e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee18e5 jmp 0x10ee18cb */
  goto L_10ee18cb;
L_10ee18e7:;
  /* 10ee18e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee18ea mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ee18ec add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ee18ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee18f2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_10ee18f4:;
  /* 10ee18f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee18f7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ee18fa cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee18fd jne 0x10ee1910 */
  if (!C.zf) goto L_10ee1910;
  /* 10ee18ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee1902 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee1905 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1908 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee190b mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ee190e jmp 0x10ee1936 */
  goto L_10ee1936;
L_10ee1910:;
  /* 10ee1910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1913 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1916 push eax */
  push32((uint32_t)(EAX));
  /* 10ee1917 call 0x10edfcb0 */
  push32(0x10ee191cu); f_10edfcb0();
  /* 10ee191c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee191f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1922 push eax */
  push32((uint32_t)(EAX));
  /* 10ee1923 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1926 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1929 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee192a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee192d push edx */
  push32((uint32_t)(EDX));
  /* 10ee192e call 0x10ee1b90 */
  push32(0x10ee1933u); f_10ee1b90();
  /* 10ee1933 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee1936:;
  /* 10ee1936 mov esp, ebp */
  ESP = (EBP);
  /* 10ee1938 pop ebp */
  EBP = (pop32());
  /* 10ee1939 ret  */
  ESPCHK(0x10ee1840u, _esp0);
  ESP += 4; return;
}

/* FUN_10011940 @ 0x10ee1940 (119 bytes, 44 insns) */
void f_10ee1940(void) {
  FTRACE(0x10ee1940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1940 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1941 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1943 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1946 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10ee1949 push eax */
  push32((uint32_t)(EAX));
  /* 10ee194a lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10ee194d push ecx */
  push32((uint32_t)(ECX));
  /* 10ee194e call 0x10ee19c0 */
  push32(0x10ee1953u); f_10ee19c0();
  /* 10ee1953 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1956 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 10ee1959 push edx */
  push32((uint32_t)(EDX));
  /* 10ee195a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee195c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10ee195e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1961 mov eax, esp */
  EAX = (ESP);
  /* 10ee1963 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee1966 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ee1968 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee196b mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ee196e mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee1972 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 10ee1976 call 0x10ee9920 */
  push32(0x10ee197bu); f_10ee9920();
  /* 10ee197b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee197e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee1981 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ee1984 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 10ee1988 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee198b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ee198d movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 10ee1991 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee1994 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ee1997 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 10ee199a push ecx */
  push32((uint32_t)(ECX));
  /* 10ee199b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee199e push edx */
  push32((uint32_t)(EDX));
  /* 10ee199f call 0x10edfe30 */
  push32(0x10ee19a4u); f_10edfe30();
  /* 10ee19a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee19a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee19aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee19ad mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10ee19b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee19b3 mov esp, ebp */
  ESP = (EBP);
  /* 10ee19b5 pop ebp */
  EBP = (pop32());
  /* 10ee19b6 ret  */
  ESPCHK(0x10ee1940u, _esp0);
  ESP += 4; return;
}

/* FUN_100119c0 @ 0x10ee19c0 (354 bytes, 104 insns) */
void f_10ee19c0(void) {
  FTRACE(0x10ee19c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee19c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee19c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee19c3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee19c6 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 10ee19cd mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee19d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee19d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee19d8 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 10ee19dc and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee19e2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10ee19e5 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 10ee19e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee19ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee19ee mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 10ee19f2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee19f7 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 10ee19fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee19fe mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee1a01 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1a07 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ee1a0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee1a0d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee1a0f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ee1a12 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee1a15 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1a1b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ee1a1e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1a22 je 0x10ee1a37 */
  if (C.zf) goto L_10ee1a37;
  /* 10ee1a24 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1a2b je 0x10ee1a2f */
  if (C.zf) goto L_10ee1a2f;
  /* 10ee1a2d jmp 0x10ee1a7a */
  goto L_10ee1a7a;
L_10ee1a2f:;
  /* 10ee1a2f mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 10ee1a35 jmp 0x10ee1a95 */
  goto L_10ee1a95;
L_10ee1a37:;
  /* 10ee1a37 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1a3b jne 0x10ee1a64 */
  if (!C.zf) goto L_10ee1a64;
  /* 10ee1a3d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1a41 jne 0x10ee1a64 */
  if (!C.zf) goto L_10ee1a64;
  /* 10ee1a43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1a46 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10ee1a4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1a50 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10ee1a56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1a59 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 10ee1a5f jmp 0x10ee1b1e */
  goto L_10ee1b1e;
L_10ee1a64:;
  /* 10ee1a64 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 10ee1a68 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1a6d mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10ee1a71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ee1a78 jmp 0x10ee1a95 */
  goto L_10ee1a95;
L_10ee1a7a:;
  /* 10ee1a7a mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10ee1a7e sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 10ee1a83 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 10ee1a87 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 10ee1a8b add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1a91 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_10ee1a95:;
  /* 10ee1a95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee1a98 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 10ee1a9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee1a9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee1aa0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee1aa3 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 10ee1aa6 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee1aa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1aab mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10ee1aae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee1ab1 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 10ee1ab4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1ab7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ee1ab9:;
  /* 10ee1ab9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1abc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee1abf and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee1ac5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee1ac7 jne 0x10ee1b04 */
  if (!C.zf) goto L_10ee1b04;
  /* 10ee1ac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1acc mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee1acf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ee1ad1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1ad4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee1ad6 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1adc neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee1ade sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1ae0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee1ae2 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1ae4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1ae7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10ee1aea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1aed mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee1aef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ee1af1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1af4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ee1af6 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 10ee1afa sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 10ee1afe mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 10ee1b02 jmp 0x10ee1ab9 */
  goto L_10ee1ab9;
L_10ee1b04:;
  /* 10ee1b04 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee1b07 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1b0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee1b0f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee1b15 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1b17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1b1a mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_10ee1b1e:;
  /* 10ee1b1e mov esp, ebp */
  ESP = (EBP);
  /* 10ee1b20 pop ebp */
  EBP = (pop32());
  /* 10ee1b21 ret  */
  ESPCHK(0x10ee19c0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10ee1b30 (88 bytes, 40 insns) */
void f_10ee1b30(void) {
  FTRACE(0x10ee1b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1b30 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ee1b34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ee1b38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee1b3a je 0x10ee1b83 */
  if (C.zf) goto L_10ee1b83;
  /* 10ee1b3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1b3e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10ee1b42 push edi */
  push32((uint32_t)(EDI));
  /* 10ee1b43 mov edi, ecx */
  EDI = (ECX);
  /* 10ee1b45 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1b48 jb 0x10ee1b77 */
  if (C.cf) goto L_10ee1b77;
  /* 10ee1b4a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee1b4c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee1b4f je 0x10ee1b59 */
  if (C.zf) goto L_10ee1b59;
  /* 10ee1b51 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10ee1b53:;
  /* 10ee1b53 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee1b55 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ee1b56 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ee1b57 jne 0x10ee1b53 */
  if (!C.zf) goto L_10ee1b53;
L_10ee1b59:;
  /* 10ee1b59 mov ecx, eax */
  ECX = (EAX);
  /* 10ee1b5b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10ee1b5e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1b60 mov ecx, eax */
  ECX = (EAX);
  /* 10ee1b62 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ee1b65 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1b67 mov ecx, edx */
  ECX = (EDX);
  /* 10ee1b69 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1b6c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee1b6f je 0x10ee1b77 */
  if (C.zf) goto L_10ee1b77;
  /* 10ee1b71 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ee1b73 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee1b75 je 0x10ee1b7d */
  if (C.zf) goto L_10ee1b7d;
L_10ee1b77:;
  /* 10ee1b77 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee1b79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ee1b7a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10ee1b7b jne 0x10ee1b77 */
  if (!C.zf) goto L_10ee1b77;
L_10ee1b7d:;
  /* 10ee1b7d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ee1b81 pop edi */
  EDI = (pop32());
  /* 10ee1b82 ret  */
  ESPCHK(0x10ee1b30u, _esp0);
  ESP += 4; return;
L_10ee1b83:;
  /* 10ee1b83 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ee1b87 ret  */
  ESPCHK(0x10ee1b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b90 @ 0x10ee1b90 (664 bytes, 262 insns) [15 switch table(s)] */
void f_10ee1b90(void) {
  FTRACE(0x10ee1b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1b91 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1b93 push edi */
  push32((uint32_t)(EDI));
  /* 10ee1b94 push esi */
  push32((uint32_t)(ESI));
  /* 10ee1b95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee1b98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee1b9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1b9e mov eax, ecx */
  EAX = (ECX);
  /* 10ee1ba0 mov edx, ecx */
  EDX = (ECX);
  /* 10ee1ba2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1ba4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1ba6 jbe 0x10ee1bb0 */
  if ((C.cf||C.zf)) goto L_10ee1bb0;
  /* 10ee1ba8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1baa jb 0x10ee1d28 */
  if (C.cf) goto L_10ee1d28;
L_10ee1bb0:;
  /* 10ee1bb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ee1bb6 jne 0x10ee1bcc */
  if (!C.zf) goto L_10ee1bcc;
  /* 10ee1bb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee1bbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1bbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1bc1 jb 0x10ee1bec */
  if (C.cf) goto L_10ee1bec;
  /* 10ee1bc3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee1bc5 jmp dword ptr [edx*4 + 0x10ee1cd8] */
  switch (EDX) {
    case 0: goto L_10ee1ce8;
    case 1: goto L_10ee1cf0;
    case 2: goto L_10ee1cfc;
    case 3: goto L_10ee1d10;
    default: x86_unimpl("switch@0x10ee1bc5 out of table"); return;
  }
L_10ee1bcc:;
  /* 10ee1bcc mov eax, edi */
  EAX = (EDI);
  /* 10ee1bce mov edx, 3 */
  EDX = (0x3u);
  /* 10ee1bd3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1bd6 jb 0x10ee1be4 */
  if (C.cf) goto L_10ee1be4;
  /* 10ee1bd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1bdb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1bdd jmp dword ptr [eax*4 + 0x10ee1bf0] */
  switch (EAX) {
    case 1: goto L_10ee1c00;
    case 2: goto L_10ee1c2c;
    case 3: goto L_10ee1c50;
    default: x86_unimpl("switch@0x10ee1bdd out of table"); return;
  }
L_10ee1be4:;
  /* 10ee1be4 jmp dword ptr [ecx*4 + 0x10ee1ce8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10ee1ce8)))); return;
  /* 10ee1beb nop  */
  /* nop */
L_10ee1bec:;
  /* 10ee1bec jmp dword ptr [ecx*4 + 0x10ee1c6c] */
  switch (ECX) {
    case 0: goto L_10ee1ccf;
    case 1: goto L_10ee1cbc;
    case 2: goto L_10ee1cb4;
    case 3: goto L_10ee1cac;
    case 4: goto L_10ee1ca4;
    case 5: goto L_10ee1c9c;
    case 6: goto L_10ee1c94;
    case 7: goto L_10ee1c8c;
    default: x86_unimpl("switch@0x10ee1bec out of table"); return;
  }
  /* 10ee1bf3 nop  */
  /* nop */
L_10ee1c00:;
  /* 10ee1c00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1c02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ee1c04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee1c06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ee1c09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ee1c0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ee1c0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee1c12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ee1c15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1c18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1c1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1c1e jb 0x10ee1bec */
  if (C.cf) goto L_10ee1bec;
  /* 10ee1c20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee1c22 jmp dword ptr [edx*4 + 0x10ee1cd8] */
  switch (EDX) {
    case 0: goto L_10ee1ce8;
    case 1: goto L_10ee1cf0;
    case 2: goto L_10ee1cfc;
    case 3: goto L_10ee1d10;
    default: x86_unimpl("switch@0x10ee1c22 out of table"); return;
  }
  /* 10ee1c29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ee1c2c:;
  /* 10ee1c2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1c2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ee1c30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee1c32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ee1c35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee1c38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ee1c3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1c3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1c41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1c44 jb 0x10ee1bec */
  if (C.cf) goto L_10ee1bec;
  /* 10ee1c46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee1c48 jmp dword ptr [edx*4 + 0x10ee1cd8] */
  switch (EDX) {
    case 0: goto L_10ee1ce8;
    case 1: goto L_10ee1cf0;
    case 2: goto L_10ee1cfc;
    case 3: goto L_10ee1d10;
    default: x86_unimpl("switch@0x10ee1c48 out of table"); return;
  }
  /* 10ee1c4f nop  */
  /* nop */
L_10ee1c50:;
  /* 10ee1c50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1c52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ee1c54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee1c56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ee1c57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee1c5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ee1c5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1c5e jb 0x10ee1bec */
  if (C.cf) goto L_10ee1bec;
  /* 10ee1c60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee1c62 jmp dword ptr [edx*4 + 0x10ee1cd8] */
  switch (EDX) {
    case 0: goto L_10ee1ce8;
    case 1: goto L_10ee1cf0;
    case 2: goto L_10ee1cfc;
    case 3: goto L_10ee1d10;
    default: x86_unimpl("switch@0x10ee1c62 out of table"); return;
  }
  /* 10ee1c69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ee1c8c:;
  /* 10ee1c8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10ee1c90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10ee1c94:;
  /* 10ee1c94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10ee1c98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10ee1c9c:;
  /* 10ee1c9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10ee1ca0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10ee1ca4:;
  /* 10ee1ca4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10ee1ca8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10ee1cac:;
  /* 10ee1cac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10ee1cb0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10ee1cb4:;
  /* 10ee1cb4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10ee1cb8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10ee1cbc:;
  /* 10ee1cbc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10ee1cc0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10ee1cc4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10ee1ccb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1ccd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10ee1ccf:;
  /* 10ee1ccf jmp dword ptr [edx*4 + 0x10ee1cd8] */
  switch (EDX) {
    case 0: goto L_10ee1ce8;
    case 1: goto L_10ee1cf0;
    case 2: goto L_10ee1cfc;
    case 3: goto L_10ee1d10;
    default: x86_unimpl("switch@0x10ee1ccf out of table"); return;
  }
  /* 10ee1cd6 mov edi, edi */
  EDI = (EDI);
L_10ee1ce8:;
  /* 10ee1ce8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1ceb pop esi */
  ESI = (pop32());
  /* 10ee1cec pop edi */
  EDI = (pop32());
  /* 10ee1ced leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee1cee ret  */
  ESPCHK(0x10ee1b90u, _esp0);
  ESP += 4; return;
  /* 10ee1cef nop  */
  /* nop */
L_10ee1cf0:;
  /* 10ee1cf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ee1cf2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee1cf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1cf7 pop esi */
  ESI = (pop32());
  /* 10ee1cf8 pop edi */
  EDI = (pop32());
  /* 10ee1cf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee1cfa ret  */
  ESPCHK(0x10ee1b90u, _esp0);
  ESP += 4; return;
  /* 10ee1cfb nop  */
  /* nop */
L_10ee1cfc:;
  /* 10ee1cfc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ee1cfe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee1d00 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ee1d03 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ee1d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1d09 pop esi */
  ESI = (pop32());
  /* 10ee1d0a pop edi */
  EDI = (pop32());
  /* 10ee1d0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee1d0c ret  */
  ESPCHK(0x10ee1b90u, _esp0);
  ESP += 4; return;
  /* 10ee1d0d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ee1d10:;
  /* 10ee1d10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ee1d12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee1d14 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ee1d17 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ee1d1a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ee1d1d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ee1d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1d23 pop esi */
  ESI = (pop32());
  /* 10ee1d24 pop edi */
  EDI = (pop32());
  /* 10ee1d25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee1d26 ret  */
  ESPCHK(0x10ee1b90u, _esp0);
  ESP += 4; return;
  /* 10ee1d27 nop  */
  /* nop */
L_10ee1d28:;
  /* 10ee1d28 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10ee1d2c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10ee1d30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ee1d36 jne 0x10ee1d5c */
  if (!C.zf) goto L_10ee1d5c;
  /* 10ee1d38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee1d3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1d3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1d41 jb 0x10ee1d50 */
  if (C.cf) goto L_10ee1d50;
  /* 10ee1d43 std  */
  C.df=1;
  /* 10ee1d44 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee1d46 cld  */
  C.df=0;
  /* 10ee1d47 jmp dword ptr [edx*4 + 0x10ee1e70] */
  switch (EDX) {
    case 0: goto L_10ee1e80;
    case 1: goto L_10ee1e88;
    case 2: goto L_10ee1e98;
    case 3: goto L_10ee1eac;
    default: x86_unimpl("switch@0x10ee1d47 out of table"); return;
  }
  /* 10ee1d4e mov edi, edi */
  EDI = (EDI);
L_10ee1d50:;
  /* 10ee1d50 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee1d52 jmp dword ptr [ecx*4 + 0x10ee1e20] */
  switch (ECX) {
    case 0: goto L_10ee1e67;
    default: x86_unimpl("switch@0x10ee1d52 out of table"); return;
  }
  /* 10ee1d59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ee1d5c:;
  /* 10ee1d5c mov eax, edi */
  EAX = (EDI);
  /* 10ee1d5e mov edx, 3 */
  EDX = (0x3u);
  /* 10ee1d63 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1d66 jb 0x10ee1d74 */
  if (C.cf) goto L_10ee1d74;
  /* 10ee1d68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1d6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1d6d jmp dword ptr [eax*4 + 0x10ee1d78] */
  switch (EAX) {
    case 1: goto L_10ee1d88;
    case 2: goto L_10ee1da8;
    case 3: goto L_10ee1dd0;
    default: x86_unimpl("switch@0x10ee1d6d out of table"); return;
  }
L_10ee1d74:;
  /* 10ee1d74 jmp dword ptr [ecx*4 + 0x10ee1e70] */
  switch (ECX) {
    case 0: goto L_10ee1e80;
    case 1: goto L_10ee1e88;
    case 2: goto L_10ee1e98;
    case 3: goto L_10ee1eac;
    default: x86_unimpl("switch@0x10ee1d74 out of table"); return;
  }
  /* 10ee1d7b nop  */
  /* nop */
L_10ee1d88:;
  /* 10ee1d88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ee1d8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1d8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ee1d90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10ee1d91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee1d94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10ee1d95 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1d98 jb 0x10ee1d50 */
  if (C.cf) goto L_10ee1d50;
  /* 10ee1d9a std  */
  C.df=1;
  /* 10ee1d9b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee1d9d cld  */
  C.df=0;
  /* 10ee1d9e jmp dword ptr [edx*4 + 0x10ee1e70] */
  switch (EDX) {
    case 0: goto L_10ee1e80;
    case 1: goto L_10ee1e88;
    case 2: goto L_10ee1e98;
    case 3: goto L_10ee1eac;
    default: x86_unimpl("switch@0x10ee1d9e out of table"); return;
  }
  /* 10ee1da5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ee1da8:;
  /* 10ee1da8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ee1dab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1dad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ee1db0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ee1db3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee1db6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ee1db9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1dbc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1dbf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1dc2 jb 0x10ee1d50 */
  if (C.cf) goto L_10ee1d50;
  /* 10ee1dc4 std  */
  C.df=1;
  /* 10ee1dc5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee1dc7 cld  */
  C.df=0;
  /* 10ee1dc8 jmp dword ptr [edx*4 + 0x10ee1e70] */
  switch (EDX) {
    case 0: goto L_10ee1e80;
    case 1: goto L_10ee1e88;
    case 2: goto L_10ee1e98;
    case 3: goto L_10ee1eac;
    default: x86_unimpl("switch@0x10ee1dc8 out of table"); return;
  }
  /* 10ee1dcf nop  */
  /* nop */
L_10ee1dd0:;
  /* 10ee1dd0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ee1dd3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee1dd5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ee1dd8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ee1ddb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ee1dde mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ee1de1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee1de4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ee1de7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1dea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee1ded cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1df0 jb 0x10ee1d50 */
  if (C.cf) goto L_10ee1d50;
  /* 10ee1df6 std  */
  C.df=1;
  /* 10ee1df7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee1df9 cld  */
  C.df=0;
  /* 10ee1dfa jmp dword ptr [edx*4 + 0x10ee1e70] */
  switch (EDX) {
    case 0: goto L_10ee1e80;
    case 1: goto L_10ee1e88;
    case 2: goto L_10ee1e98;
    case 3: goto L_10ee1eac;
    default: x86_unimpl("switch@0x10ee1dfa out of table"); return;
  }
  /* 10ee1e01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10ee1e04 and al, 0x1e */
  { uint32_t _r=(AL)&(0x1eu); AL = (_r); fl_logic(_r,8); }
  /* 10ee1e06 out dx, al */
  x86_unimpl("out @ 0x10ee1e06");
  /* 10ee1e07 adc byte ptr [esi + ebx], ch */
  { uint32_t _a=(r8((uint32_t)(ESI + EBX*1))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EBX*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10ee1e0a out dx, al */
  x86_unimpl("out @ 0x10ee1e0a");
  /* 10ee1e0b adc byte ptr [esi + ebx], dh */
  { uint32_t _a=(r8((uint32_t)(ESI + EBX*1))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EBX*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10ee1e0e out dx, al */
  x86_unimpl("out @ 0x10ee1e0e");
  /* 10ee1e0f adc byte ptr [esi + ebx], bh */
  { uint32_t _a=(r8((uint32_t)(ESI + EBX*1))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EBX*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10ee1e12 out dx, al */
  x86_unimpl("out @ 0x10ee1e12");
  /* 10ee1e13 adc byte ptr [esi + ebx - 0x12], al */
  { uint32_t _a=(r8((uint32_t)(ESI + EBX*1 + -0x12))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EBX*1 + -0x12), (_r)); fl_add(_a,_b,_r,8); }
  /* 10ee1e17 adc byte ptr [esi + ebx - 0x12], cl */
  { uint32_t _a=(r8((uint32_t)(ESI + EBX*1 + -0x12))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EBX*1 + -0x12), (_r)); fl_add(_a,_b,_r,8); }
  /* 10ee1e1b adc byte ptr [esi + ebx - 0x12], dl */
  { uint32_t _a=(r8((uint32_t)(ESI + EBX*1 + -0x12))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EBX*1 + -0x12), (_r)); fl_add(_a,_b,_r,8); }
  /* 10ee1e24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10ee1e28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10ee1e2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10ee1e30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10ee1e34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10ee1e38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10ee1e3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10ee1e40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10ee1e44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10ee1e48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10ee1e4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10ee1e50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10ee1e54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10ee1e58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10ee1e5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10ee1e63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1e65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10ee1e67:;
  /* 10ee1e67 jmp dword ptr [edx*4 + 0x10ee1e70] */
  switch (EDX) {
    case 0: goto L_10ee1e80;
    case 1: goto L_10ee1e88;
    case 2: goto L_10ee1e98;
    case 3: goto L_10ee1eac;
    default: x86_unimpl("switch@0x10ee1e67 out of table"); return;
  }
  /* 10ee1e6e mov edi, edi */
  EDI = (EDI);
L_10ee1e80:;
  /* 10ee1e80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1e83 pop esi */
  ESI = (pop32());
  /* 10ee1e84 pop edi */
  EDI = (pop32());
  /* 10ee1e85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee1e86 ret  */
  ESPCHK(0x10ee1b90u, _esp0);
  ESP += 4; return;
  /* 10ee1e87 nop  */
  /* nop */
L_10ee1e88:;
  /* 10ee1e88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ee1e8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ee1e8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1e91 pop esi */
  ESI = (pop32());
  /* 10ee1e92 pop edi */
  EDI = (pop32());
  /* 10ee1e93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee1e94 ret  */
  ESPCHK(0x10ee1b90u, _esp0);
  ESP += 4; return;
  /* 10ee1e95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ee1e98:;
  /* 10ee1e98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ee1e9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ee1e9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ee1ea1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ee1ea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1ea7 pop esi */
  ESI = (pop32());
  /* 10ee1ea8 pop edi */
  EDI = (pop32());
  /* 10ee1ea9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee1eaa ret  */
  ESPCHK(0x10ee1b90u, _esp0);
  ESP += 4; return;
  /* 10ee1eab nop  */
  /* nop */
L_10ee1eac:;
  /* 10ee1eac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ee1eaf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ee1eb2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ee1eb5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ee1eb8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ee1ebb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ee1ebe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1ec1 pop esi */
  ESI = (pop32());
  /* 10ee1ec2 pop edi */
  EDI = (pop32());
  /* 10ee1ec3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee1ec4 ret  */
  ESPCHK(0x10ee1b90u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10ee1ed0 (15 bytes, 7 insns) */
void f_10ee1ed0(void) {
  FTRACE(0x10ee1ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1ed3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee1ed5 call 0x10eda190 */
  push32(0x10ee1edau); f_10eda190();
  /* 10ee1eda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1edd pop ebp */
  EBP = (pop32());
  /* 10ee1ede ret  */
  ESPCHK(0x10ee1ed0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10ee1ee0 (48 bytes, 17 insns) */
void f_10ee1ee0(void) {
  FTRACE(0x10ee1ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1ee4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee1ee6 call 0x10edb620 */
  push32(0x10ee1eebu); f_10edb620();
  /* 10ee1eeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1eee mov eax, dword ptr [0x10f0f6d4] */
  EAX = (r32((uint32_t)(0x10f0f6d4)));
  /* 10ee1ef3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee1ef6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1ef9 mov dword ptr [0x10f0f6d4], ecx */
  w32((uint32_t)(0x10f0f6d4), (ECX));
  /* 10ee1eff push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee1f01 call 0x10edb6c0 */
  push32(0x10ee1f06u); f_10edb6c0();
  /* 10ee1f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1f09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee1f0c mov esp, ebp */
  ESP = (EBP);
  /* 10ee1f0e pop ebp */
  EBP = (pop32());
  /* 10ee1f0f ret  */
  ESPCHK(0x10ee1ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f10 @ 0x10ee1f10 (10 bytes, 5 insns) */
void f_10ee1f10(void) {
  FTRACE(0x10ee1f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1f11 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1f13 mov eax, dword ptr [0x10f0f6d4] */
  EAX = (r32((uint32_t)(0x10f0f6d4)));
  /* 10ee1f18 pop ebp */
  EBP = (pop32());
  /* 10ee1f19 ret  */
  ESPCHK(0x10ee1f10u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10ee1f20 (45 bytes, 19 insns) */
void f_10ee1f20(void) {
  FTRACE(0x10ee1f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1f21 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1f23 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1f24 mov eax, dword ptr [0x10f0f6d4] */
  EAX = (r32((uint32_t)(0x10f0f6d4)));
  /* 10ee1f29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee1f2c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1f30 je 0x10ee1f40 */
  if (C.zf) goto L_10ee1f40;
  /* 10ee1f32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1f35 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1f36 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10ee1f39u);
  /* 10ee1f39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1f3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee1f3e jne 0x10ee1f44 */
  if (!C.zf) goto L_10ee1f44;
L_10ee1f40:;
  /* 10ee1f40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1f42 jmp 0x10ee1f49 */
  goto L_10ee1f49;
L_10ee1f44:;
  /* 10ee1f44 mov eax, 1 */
  EAX = (0x1u);
L_10ee1f49:;
  /* 10ee1f49 mov esp, ebp */
  ESP = (EBP);
  /* 10ee1f4b pop ebp */
  EBP = (pop32());
  /* 10ee1f4c ret  */
  ESPCHK(0x10ee1f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f50 @ 0x10ee1f50 (23 bytes, 10 insns) */
void f_10ee1f50(void) {
  FTRACE(0x10ee1f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1f51 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1f53 mov eax, dword ptr [0x10f0f6d0] */
  EAX = (r32((uint32_t)(0x10f0f6d0)));
  /* 10ee1f58 push eax */
  push32((uint32_t)(EAX));
  /* 10ee1f59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1f5c push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1f5d call 0x10ee1f70 */
  push32(0x10ee1f62u); f_10ee1f70();
  /* 10ee1f62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1f65 pop ebp */
  EBP = (pop32());
  /* 10ee1f66 ret  */
  ESPCHK(0x10ee1f50u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10ee1f70 (87 bytes, 34 insns) */
void f_10ee1f70(void) {
  FTRACE(0x10ee1f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1f71 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1f73 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1f74 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1f78 jbe 0x10ee1f7e */
  if ((C.cf||C.zf)) goto L_10ee1f7e;
  /* 10ee1f7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1f7c jmp 0x10ee1fc3 */
  goto L_10ee1fc3;
L_10ee1f7e:;
  /* 10ee1f7e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1f82 ja 0x10ee1f95 */
  if ((!C.cf&&!C.zf)) goto L_10ee1f95;
  /* 10ee1f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1f87 push eax */
  push32((uint32_t)(EAX));
  /* 10ee1f88 call 0x10ee1fd0 */
  push32(0x10ee1f8du); f_10ee1fd0();
  /* 10ee1f8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1f90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee1f93 jmp 0x10ee1f9c */
  goto L_10ee1f9c;
L_10ee1f95:;
  /* 10ee1f95 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ee1f9c:;
  /* 10ee1f9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1fa0 jne 0x10ee1fa8 */
  if (!C.zf) goto L_10ee1fa8;
  /* 10ee1fa2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1fa6 jne 0x10ee1fad */
  if (!C.zf) goto L_10ee1fad;
L_10ee1fa8:;
  /* 10ee1fa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee1fab jmp 0x10ee1fc3 */
  goto L_10ee1fc3;
L_10ee1fad:;
  /* 10ee1fad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1fb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1fb1 call 0x10ee1f20 */
  push32(0x10ee1fb6u); f_10ee1f20();
  /* 10ee1fb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1fb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee1fbb jne 0x10ee1fc1 */
  if (!C.zf) goto L_10ee1fc1;
  /* 10ee1fbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee1fbf jmp 0x10ee1fc3 */
  goto L_10ee1fc3;
L_10ee1fc1:;
  /* 10ee1fc1 jmp 0x10ee1f7e */
  goto L_10ee1f7e;
L_10ee1fc3:;
  /* 10ee1fc3 mov esp, ebp */
  ESP = (EBP);
  /* 10ee1fc5 pop ebp */
  EBP = (pop32());
  /* 10ee1fc6 ret  */
  ESPCHK(0x10ee1f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fd0 @ 0x10ee1fd0 (109 bytes, 37 insns) */
void f_10ee1fd0(void) {
  FTRACE(0x10ee1fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee1fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee1fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee1fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1fd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1fd7 cmp eax, dword ptr [0x10f0d234] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f0d234))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee1fdd ja 0x10ee200d */
  if ((!C.cf&&!C.zf)) goto L_10ee200d;
  /* 10ee1fdf push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee1fe1 call 0x10edb620 */
  push32(0x10ee1fe6u); f_10edb620();
  /* 10ee1fe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1fe9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee1fec push ecx */
  push32((uint32_t)(ECX));
  /* 10ee1fed call 0x10ee2b10 */
  push32(0x10ee1ff2u); f_10ee2b10();
  /* 10ee1ff2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee1ff5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee1ff8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee1ffa call 0x10edb6c0 */
  push32(0x10ee1fffu); f_10edb6c0();
  /* 10ee1fff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2002 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2006 je 0x10ee200d */
  if (C.zf) goto L_10ee200d;
  /* 10ee2008 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee200b jmp 0x10ee2039 */
  goto L_10ee2039;
L_10ee200d:;
  /* 10ee200d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2011 jne 0x10ee201a */
  if (!C.zf) goto L_10ee201a;
  /* 10ee2013 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10ee201a:;
  /* 10ee201a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee201d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2020 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee2023 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ee2026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2029 push eax */
  push32((uint32_t)(EAX));
  /* 10ee202a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee202c mov ecx, dword ptr [0x10f10e8c] */
  ECX = (r32((uint32_t)(0x10f10e8c)));
  /* 10ee2032 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee2033 call dword ptr [0x10f12390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12390))), 0x10ee2039u);
L_10ee2039:;
  /* 10ee2039 mov esp, ebp */
  ESP = (EBP);
  /* 10ee203b pop ebp */
  EBP = (pop32());
  /* 10ee203c ret  */
  ESPCHK(0x10ee1fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012040 @ 0x10ee2040 (10 bytes, 5 insns) */
void f_10ee2040(void) {
  FTRACE(0x10ee2040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee2040 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee2041 mov ebp, esp */
  EBP = (ESP);
  /* 10ee2043 mov eax, 1 */
  EAX = (0x1u);
  /* 10ee2048 pop ebp */
  EBP = (pop32());
  /* 10ee2049 ret  */
  ESPCHK(0x10ee2040u, _esp0);
  ESP += 4; return;
}

/* FUN_10012050 @ 0x10ee2050 (173 bytes, 59 insns) */
void f_10ee2050(void) {
  FTRACE(0x10ee2050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee2050 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee2051 mov ebp, esp */
  EBP = (ESP);
  /* 10ee2053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2056 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee205a jbe 0x10ee2063 */
  if ((C.cf||C.zf)) goto L_10ee2063;
  /* 10ee205c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee205e jmp 0x10ee20f9 */
  goto L_10ee20f9;
L_10ee2063:;
  /* 10ee2063 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee2065 call 0x10edb620 */
  push32(0x10ee206au); f_10edb620();
  /* 10ee206a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee206d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2070 push eax */
  push32((uint32_t)(EAX));
  /* 10ee2071 call 0x10ee2480 */
  push32(0x10ee2076u); f_10ee2480();
  /* 10ee2076 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2079 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee207c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2080 je 0x10ee20c1 */
  if (C.zf) goto L_10ee20c1;
  /* 10ee2082 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee2089 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee208c cmp ecx, dword ptr [0x10f0d234] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f0d234))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2092 ja 0x10ee20b2 */
  if ((!C.cf&&!C.zf)) goto L_10ee20b2;
  /* 10ee2094 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee2097 push edx */
  push32((uint32_t)(EDX));
  /* 10ee2098 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee209b push eax */
  push32((uint32_t)(EAX));
  /* 10ee209c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee209f push ecx */
  push32((uint32_t)(ECX));
  /* 10ee20a0 call 0x10ee3350 */
  push32(0x10ee20a5u); f_10ee3350();
  /* 10ee20a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee20a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee20aa je 0x10ee20b2 */
  if (C.zf) goto L_10ee20b2;
  /* 10ee20ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee20af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee20b2:;
  /* 10ee20b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee20b4 call 0x10edb6c0 */
  push32(0x10ee20b9u); f_10edb6c0();
  /* 10ee20b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee20bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee20bf jmp 0x10ee20f9 */
  goto L_10ee20f9;
L_10ee20c1:;
  /* 10ee20c1 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee20c3 call 0x10edb6c0 */
  push32(0x10ee20c8u); f_10edb6c0();
  /* 10ee20c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee20cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee20cf jne 0x10ee20d8 */
  if (!C.zf) goto L_10ee20d8;
  /* 10ee20d1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10ee20d8:;
  /* 10ee20d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee20db add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee20de and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10ee20e0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10ee20e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee20e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee20e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee20ea push edx */
  push32((uint32_t)(EDX));
  /* 10ee20eb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10ee20ed mov eax, dword ptr [0x10f10e8c] */
  EAX = (r32((uint32_t)(0x10f10e8c)));
  /* 10ee20f2 push eax */
  push32((uint32_t)(EAX));
  /* 10ee20f3 call dword ptr [0x10f1238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1238c))), 0x10ee20f9u);
L_10ee20f9:;
  /* 10ee20f9 mov esp, ebp */
  ESP = (EBP);
  /* 10ee20fb pop ebp */
  EBP = (pop32());
  /* 10ee20fc ret  */
  ESPCHK(0x10ee2050u, _esp0);
  ESP += 4; return;
}

/* FUN_10012100 @ 0x10ee2100 (490 bytes, 165 insns) */
void f_10ee2100(void) {
  FTRACE(0x10ee2100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee2100 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee2101 mov ebp, esp */
  EBP = (ESP);
  /* 10ee2103 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2106 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee210a jne 0x10ee211d */
  if (!C.zf) goto L_10ee211d;
  /* 10ee210c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee210f push eax */
  push32((uint32_t)(EAX));
  /* 10ee2110 call 0x10ee1f50 */
  push32(0x10ee2115u); f_10ee1f50();
  /* 10ee2115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2118 jmp 0x10ee22e6 */
  goto L_10ee22e6;
L_10ee211d:;
  /* 10ee211d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2121 jne 0x10ee2136 */
  if (!C.zf) goto L_10ee2136;
  /* 10ee2123 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2126 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee2127 call 0x10ee22f0 */
  push32(0x10ee212cu); f_10ee22f0();
  /* 10ee212c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee212f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2131 jmp 0x10ee22e6 */
  goto L_10ee22e6;
L_10ee2136:;
  /* 10ee2136 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ee213d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2141 ja 0x10ee22b9 */
  if ((!C.cf&&!C.zf)) goto L_10ee22b9;
  /* 10ee2147 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee2149 call 0x10edb620 */
  push32(0x10ee214eu); f_10edb620();
  /* 10ee214e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2154 push edx */
  push32((uint32_t)(EDX));
  /* 10ee2155 call 0x10ee2480 */
  push32(0x10ee215au); f_10ee2480();
  /* 10ee215a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee215d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee2160 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2164 je 0x10ee227c */
  if (C.zf) goto L_10ee227c;
  /* 10ee216a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee216d cmp eax, dword ptr [0x10f0d234] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f0d234))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2173 ja 0x10ee21f0 */
  if ((!C.cf&&!C.zf)) goto L_10ee21f0;
  /* 10ee2175 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee2178 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee2179 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee217c push edx */
  push32((uint32_t)(EDX));
  /* 10ee217d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee2180 push eax */
  push32((uint32_t)(EAX));
  /* 10ee2181 call 0x10ee3350 */
  push32(0x10ee2186u); f_10ee3350();
  /* 10ee2186 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee218b je 0x10ee2195 */
  if (C.zf) goto L_10ee2195;
  /* 10ee218d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2190 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee2193 jmp 0x10ee21f0 */
  goto L_10ee21f0;
L_10ee2195:;
  /* 10ee2195 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee2198 push edx */
  push32((uint32_t)(EDX));
  /* 10ee2199 call 0x10ee2b10 */
  push32(0x10ee219eu); f_10ee2b10();
  /* 10ee219e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee21a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee21a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee21a8 je 0x10ee21f0 */
  if (C.zf) goto L_10ee21f0;
  /* 10ee21aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee21ad mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10ee21b0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee21b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee21b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee21b9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee21bc jae 0x10ee21c6 */
  if (!C.cf) goto L_10ee21c6;
  /* 10ee21be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee21c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee21c4 jmp 0x10ee21cc */
  goto L_10ee21cc;
L_10ee21c6:;
  /* 10ee21c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee21c9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ee21cc:;
  /* 10ee21cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee21cf push edx */
  push32((uint32_t)(EDX));
  /* 10ee21d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee21d3 push eax */
  push32((uint32_t)(EAX));
  /* 10ee21d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee21d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee21d8 call 0x10ee57c0 */
  push32(0x10ee21ddu); f_10ee57c0();
  /* 10ee21dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee21e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee21e3 push edx */
  push32((uint32_t)(EDX));
  /* 10ee21e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee21e7 push eax */
  push32((uint32_t)(EAX));
  /* 10ee21e8 call 0x10ee2540 */
  push32(0x10ee21edu); f_10ee2540();
  /* 10ee21ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee21f0:;
  /* 10ee21f0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee21f4 jne 0x10ee2270 */
  if (!C.zf) goto L_10ee2270;
  /* 10ee21f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee21fa jne 0x10ee2203 */
  if (!C.zf) goto L_10ee2203;
  /* 10ee21fc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10ee2203:;
  /* 10ee2203 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee2206 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2209 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee220c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10ee220f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee2212 push edx */
  push32((uint32_t)(EDX));
  /* 10ee2213 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee2215 mov eax, dword ptr [0x10f10e8c] */
  EAX = (r32((uint32_t)(0x10f10e8c)));
  /* 10ee221a push eax */
  push32((uint32_t)(EAX));
  /* 10ee221b call dword ptr [0x10f12390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12390))), 0x10ee2221u);
  /* 10ee2221 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee2224 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2228 je 0x10ee2270 */
  if (C.zf) goto L_10ee2270;
  /* 10ee222a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee222d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10ee2230 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2233 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee2236 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2239 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee223c jae 0x10ee2246 */
  if (!C.cf) goto L_10ee2246;
  /* 10ee223e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2241 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ee2244 jmp 0x10ee224c */
  goto L_10ee224c;
L_10ee2246:;
  /* 10ee2246 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee2249 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10ee224c:;
  /* 10ee224c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee224f push eax */
  push32((uint32_t)(EAX));
  /* 10ee2250 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2253 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee2254 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee2257 push edx */
  push32((uint32_t)(EDX));
  /* 10ee2258 call 0x10ee57c0 */
  push32(0x10ee225du); f_10ee57c0();
  /* 10ee225d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2260 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2263 push eax */
  push32((uint32_t)(EAX));
  /* 10ee2264 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee2267 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee2268 call 0x10ee2540 */
  push32(0x10ee226du); f_10ee2540();
  /* 10ee226d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee2270:;
  /* 10ee2270 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee2272 call 0x10edb6c0 */
  push32(0x10ee2277u); f_10edb6c0();
  /* 10ee2277 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee227a jmp 0x10ee22b9 */
  goto L_10ee22b9;
L_10ee227c:;
  /* 10ee227c push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee227e call 0x10edb6c0 */
  push32(0x10ee2283u); f_10edb6c0();
  /* 10ee2283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2286 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee228a jne 0x10ee2293 */
  if (!C.zf) goto L_10ee2293;
  /* 10ee228c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10ee2293:;
  /* 10ee2293 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee2296 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2299 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee229c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10ee229f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee22a2 push eax */
  push32((uint32_t)(EAX));
  /* 10ee22a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee22a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee22a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee22a9 mov edx, dword ptr [0x10f10e8c] */
  EDX = (r32((uint32_t)(0x10f10e8c)));
  /* 10ee22af push edx */
  push32((uint32_t)(EDX));
  /* 10ee22b0 call dword ptr [0x10f1238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1238c))), 0x10ee22b6u);
  /* 10ee22b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ee22b9:;
  /* 10ee22b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee22bd jne 0x10ee22c8 */
  if (!C.zf) goto L_10ee22c8;
  /* 10ee22bf cmp dword ptr [0x10f0f6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee22c6 jne 0x10ee22cd */
  if (!C.zf) goto L_10ee22cd;
L_10ee22c8:;
  /* 10ee22c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee22cb jmp 0x10ee22e6 */
  goto L_10ee22e6;
L_10ee22cd:;
  /* 10ee22cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee22d0 push eax */
  push32((uint32_t)(EAX));
  /* 10ee22d1 call 0x10ee1f20 */
  push32(0x10ee22d6u); f_10ee1f20();
  /* 10ee22d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee22d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee22db jne 0x10ee22e1 */
  if (!C.zf) goto L_10ee22e1;
  /* 10ee22dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee22df jmp 0x10ee22e6 */
  goto L_10ee22e6;
L_10ee22e1:;
  /* 10ee22e1 jmp 0x10ee2136 */
  goto L_10ee2136;
L_10ee22e6:;
  /* 10ee22e6 mov esp, ebp */
  ESP = (EBP);
  /* 10ee22e8 pop ebp */
  EBP = (pop32());
  /* 10ee22e9 ret  */
  ESPCHK(0x10ee2100u, _esp0);
  ESP += 4; return;
}

/* FUN_100122f0 @ 0x10ee22f0 (104 bytes, 38 insns) */
void f_10ee22f0(void) {
  FTRACE(0x10ee22f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee22f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee22f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee22f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee22f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee22f8 jne 0x10ee22fc */
  if (!C.zf) goto L_10ee22fc;
  /* 10ee22fa jmp 0x10ee2354 */
  goto L_10ee2354;
L_10ee22fc:;
  /* 10ee22fc push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee22fe call 0x10edb620 */
  push32(0x10ee2303u); f_10edb620();
  /* 10ee2303 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2309 push eax */
  push32((uint32_t)(EAX));
  /* 10ee230a call 0x10ee2480 */
  push32(0x10ee230fu); f_10ee2480();
  /* 10ee230f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2312 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee2315 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2319 je 0x10ee2337 */
  if (C.zf) goto L_10ee2337;
  /* 10ee231b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee231e push ecx */
  push32((uint32_t)(ECX));
  /* 10ee231f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2322 push edx */
  push32((uint32_t)(EDX));
  /* 10ee2323 call 0x10ee2540 */
  push32(0x10ee2328u); f_10ee2540();
  /* 10ee2328 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee232b push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee232d call 0x10edb6c0 */
  push32(0x10ee2332u); f_10edb6c0();
  /* 10ee2332 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2335 jmp 0x10ee2354 */
  goto L_10ee2354;
L_10ee2337:;
  /* 10ee2337 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee2339 call 0x10edb6c0 */
  push32(0x10ee233eu); f_10edb6c0();
  /* 10ee233e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2341 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2344 push eax */
  push32((uint32_t)(EAX));
  /* 10ee2345 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee2347 mov ecx, dword ptr [0x10f10e8c] */
  ECX = (r32((uint32_t)(0x10f10e8c)));
  /* 10ee234d push ecx */
  push32((uint32_t)(ECX));
  /* 10ee234e call dword ptr [0x10f1239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1239c))), 0x10ee2354u);
L_10ee2354:;
  /* 10ee2354 mov esp, ebp */
  ESP = (EBP);
  /* 10ee2356 pop ebp */
  EBP = (pop32());
  /* 10ee2357 ret  */
  ESPCHK(0x10ee22f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012360 @ 0x10ee2360 (116 bytes, 34 insns) */
void f_10ee2360(void) {
  FTRACE(0x10ee2360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee2360 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee2361 mov ebp, esp */
  EBP = (ESP);
  /* 10ee2363 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee2364 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10ee236b push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee236d call 0x10edb620 */
  push32(0x10ee2372u); f_10edb620();
  /* 10ee2372 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2375 call 0x10ee3a70 */
  push32(0x10ee237au); f_10ee3a70();
  /* 10ee237a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee237c jge 0x10ee2385 */
  if ((C.sf==C.of)) goto L_10ee2385;
  /* 10ee237e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10ee2385:;
  /* 10ee2385 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ee2387 call 0x10edb6c0 */
  push32(0x10ee238cu); f_10edb6c0();
  /* 10ee238c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee238f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee2391 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee2393 mov eax, dword ptr [0x10f10e8c] */
  EAX = (r32((uint32_t)(0x10f10e8c)));
  /* 10ee2398 push eax */
  push32((uint32_t)(EAX));
  /* 10ee2399 call dword ptr [0x10f123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123f0))), 0x10ee239fu);
  /* 10ee239f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee23a1 jne 0x10ee23cd */
  if (!C.zf) goto L_10ee23cd;
  /* 10ee23a3 call dword ptr [0x10f123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123d4))), 0x10ee23a9u);
  /* 10ee23a9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee23ac jne 0x10ee23c6 */
  if (!C.zf) goto L_10ee23c6;
  /* 10ee23ae call 0x10ee6dc0 */
  push32(0x10ee23b3u); f_10ee6dc0();
  /* 10ee23b3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10ee23b9 call 0x10ee6db0 */
  push32(0x10ee23beu); f_10ee6db0();
  /* 10ee23be mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10ee23c4 jmp 0x10ee23cd */
  goto L_10ee23cd;
L_10ee23c6:;
  /* 10ee23c6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10ee23cd:;
  /* 10ee23cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee23d0 mov esp, ebp */
  ESP = (EBP);
  /* 10ee23d2 pop ebp */
  EBP = (pop32());
  /* 10ee23d3 ret  */
  ESPCHK(0x10ee2360u, _esp0);
  ESP += 4; return;
}

/* FUN_100123e0 @ 0x10ee23e0 (10 bytes, 5 insns) */
void f_10ee23e0(void) {
  FTRACE(0x10ee23e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee23e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee23e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee23e3 call 0x10ee2360 */
  push32(0x10ee23e8u); f_10ee2360();
  /* 10ee23e8 pop ebp */
  EBP = (pop32());
  /* 10ee23e9 ret  */
  ESPCHK(0x10ee23e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123f0 @ 0x10ee23f0 (10 bytes, 5 insns) */
void f_10ee23f0(void) {
  FTRACE(0x10ee23f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee23f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee23f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee23f3 mov eax, dword ptr [0x10f0d234] */
  EAX = (r32((uint32_t)(0x10f0d234)));
  /* 10ee23f8 pop ebp */
  EBP = (pop32());
  /* 10ee23f9 ret  */
  ESPCHK(0x10ee23f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012400 @ 0x10ee2400 (31 bytes, 11 insns) */
void f_10ee2400(void) {
  FTRACE(0x10ee2400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee2400 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee2401 mov ebp, esp */
  EBP = (ESP);
  /* 10ee2403 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee240a jbe 0x10ee2410 */
  if ((C.cf||C.zf)) goto L_10ee2410;
  /* 10ee240c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee240e jmp 0x10ee241d */
  goto L_10ee241d;
L_10ee2410:;
  /* 10ee2410 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2413 mov dword ptr [0x10f0d234], eax */
  w32((uint32_t)(0x10f0d234), (EAX));
  /* 10ee2418 mov eax, 1 */
  EAX = (0x1u);
L_10ee241d:;
  /* 10ee241d pop ebp */
  EBP = (pop32());
  /* 10ee241e ret  */
  ESPCHK(0x10ee2400u, _esp0);
  ESP += 4; return;
}

/* FUN_10012420 @ 0x10ee2420 (89 bytes, 20 insns) */
void f_10ee2420(void) {
  FTRACE(0x10ee2420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee2420 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee2421 mov ebp, esp */
  EBP = (ESP);
  /* 10ee2423 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10ee2428 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee242a mov eax, dword ptr [0x10f10e8c] */
  EAX = (r32((uint32_t)(0x10f10e8c)));
  /* 10ee242f push eax */
  push32((uint32_t)(EAX));
  /* 10ee2430 call dword ptr [0x10f12390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12390))), 0x10ee2436u);
  /* 10ee2436 mov dword ptr [0x10f10e88], eax */
  w32((uint32_t)(0x10f10e88), (EAX));
  /* 10ee243b cmp dword ptr [0x10f10e88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10e88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2442 jne 0x10ee2448 */
  if (!C.zf) goto L_10ee2448;
  /* 10ee2444 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2446 jmp 0x10ee2477 */
  goto L_10ee2477;
L_10ee2448:;
  /* 10ee2448 mov ecx, dword ptr [0x10f10e88] */
  ECX = (r32((uint32_t)(0x10f10e88)));
  /* 10ee244e mov dword ptr [0x10f10e7c], ecx */
  w32((uint32_t)(0x10f10e7c), (ECX));
  /* 10ee2454 mov dword ptr [0x10f10e80], 0 */
  w32((uint32_t)(0x10f10e80), (0x0u));
  /* 10ee245e mov dword ptr [0x10f10e84], 0 */
  w32((uint32_t)(0x10f10e84), (0x0u));
  /* 10ee2468 mov dword ptr [0x10f10e68], 0x10 */
  w32((uint32_t)(0x10f10e68), (0x10u));
  /* 10ee2472 mov eax, 1 */
  EAX = (0x1u);
L_10ee2477:;
  /* 10ee2477 pop ebp */
  EBP = (pop32());
  /* 10ee2478 ret  */
  ESPCHK(0x10ee2420u, _esp0);
  ESP += 4; return;
}

/* FUN_10012480 @ 0x10ee2480 (85 bytes, 29 insns) */
void f_10ee2480(void) {
  FTRACE(0x10ee2480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee2480 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee2481 mov ebp, esp */
  EBP = (ESP);
  /* 10ee2483 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2486 mov eax, dword ptr [0x10f10e84] */
  EAX = (r32((uint32_t)(0x10f10e84)));
  /* 10ee248b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee248e mov ecx, dword ptr [0x10f10e88] */
  ECX = (r32((uint32_t)(0x10f10e88)));
  /* 10ee2494 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2496 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee2499 mov edx, dword ptr [0x10f10e88] */
  EDX = (r32((uint32_t)(0x10f10e88)));
  /* 10ee249f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ee24a2:;
  /* 10ee24a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee24a5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee24a8 jae 0x10ee24cf */
  if (!C.cf) goto L_10ee24cf;
  /* 10ee24aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee24ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee24b0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee24b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee24b6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee24bd jae 0x10ee24c4 */
  if (!C.cf) goto L_10ee24c4;
  /* 10ee24bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee24c2 jmp 0x10ee24d1 */
  goto L_10ee24d1;
L_10ee24c4:;
  /* 10ee24c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee24c7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee24ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee24cd jmp 0x10ee24a2 */
  goto L_10ee24a2;
L_10ee24cf:;
  /* 10ee24cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ee24d1:;
  /* 10ee24d1 mov esp, ebp */
  ESP = (EBP);
  /* 10ee24d3 pop ebp */
  EBP = (pop32());
  /* 10ee24d4 ret  */
  ESPCHK(0x10ee2480u, _esp0);
  ESP += 4; return;
}

/* FUN_100124e0 @ 0x10ee24e0 (95 bytes, 33 insns) */
void f_10ee24e0(void) {
  FTRACE(0x10ee24e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee24e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee24e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee24e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee24e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee24e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee24ec sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee24ef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee24f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee24f5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10ee24f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee24fb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee2500 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2503 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee2505 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2508 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee250b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee250d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee250f jne 0x10ee2531 */
  if (!C.zf) goto L_10ee2531;
  /* 10ee2511 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee2514 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2517 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee2519 jne 0x10ee2531 */
  if (!C.zf) goto L_10ee2531;
  /* 10ee251b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee251e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee2524 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee2526 je 0x10ee2531 */
  if (C.zf) goto L_10ee2531;
  /* 10ee2528 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10ee252f jmp 0x10ee2538 */
  goto L_10ee2538;
L_10ee2531:;
  /* 10ee2531 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10ee2538:;
  /* 10ee2538 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee253b mov esp, ebp */
  ESP = (EBP);
  /* 10ee253d pop ebp */
  EBP = (pop32());
  /* 10ee253e ret  */
  ESPCHK(0x10ee24e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012540 @ 0x10ee2540 (1485 bytes, 453 insns) */
void f_10ee2540(void) {
  FTRACE(0x10ee2540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee2540 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee2541 mov ebp, esp */
  EBP = (ESP);
  /* 10ee2543 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2549 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ee254c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10ee254f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2552 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee2555 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2558 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee255b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee255e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10ee2561 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee2564 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2567 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee256d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2570 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10ee2577 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee257a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee257d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2580 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ee2583 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee2586 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee2588 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee258b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10ee258e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee2591 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2594 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10ee2597 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee259a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee259c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ee259f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee25a2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10ee25a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee25a8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee25ab and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee25ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee25b0 jne 0x10ee26d8 */
  if (!C.zf) goto L_10ee26d8;
  /* 10ee25b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee25b9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10ee25bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee25bf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10ee25c2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee25c6 jbe 0x10ee25cf */
  if ((C.cf||C.zf)) goto L_10ee25cf;
  /* 10ee25c8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10ee25cf:;
  /* 10ee25cf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee25d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee25d5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee25d8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee25db jne 0x10ee26b1 */
  if (!C.zf) goto L_10ee26b1;
  /* 10ee25e1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee25e5 jae 0x10ee2646 */
  if (!C.cf) goto L_10ee2646;
  /* 10ee25e7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee25ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee25ef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee25f1 not eax */
  EAX = (~(EAX));
  /* 10ee25f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee25f6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee25f9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10ee25fd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee25ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2602 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2605 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10ee2609 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee260c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee260f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10ee2612 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ee2615 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2618 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee261b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10ee261e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2621 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2624 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ee2628 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee262a jne 0x10ee2644 */
  if (!C.zf) goto L_10ee2644;
  /* 10ee262c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee2631 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee2634 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee2636 not eax */
  EAX = (~(EAX));
  /* 10ee2638 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee263b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee263d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee263f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2642 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ee2644:;
  /* 10ee2644 jmp 0x10ee26b1 */
  goto L_10ee26b1;
L_10ee2646:;
  /* 10ee2646 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee2649 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee264c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee2651 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee2653 not edx */
  EDX = (~(EDX));
  /* 10ee2655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2658 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee265b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10ee2662 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2664 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2667 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee266a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10ee2671 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2674 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2677 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ee267a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ee267d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2680 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2683 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10ee2686 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2689 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee268c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ee2690 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee2692 jne 0x10ee26b1 */
  if (!C.zf) goto L_10ee26b1;
  /* 10ee2694 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee2697 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee269a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee269f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee26a1 not edx */
  EDX = (~(EDX));
  /* 10ee26a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee26a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee26a9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee26ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee26ae mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10ee26b1:;
  /* 10ee26b1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee26b4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ee26b7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee26ba mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee26bd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10ee26c0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee26c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee26c6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee26c9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ee26cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ee26cf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee26d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee26d5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10ee26d8:;
  /* 10ee26d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee26db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10ee26de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee26e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ee26e4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee26e8 jbe 0x10ee26f1 */
  if ((C.cf||C.zf)) goto L_10ee26f1;
  /* 10ee26ea mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10ee26f1:;
  /* 10ee26f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee26f4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee26f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee26f9 jne 0x10ee2855 */
  if (!C.zf) goto L_10ee2855;
  /* 10ee26ff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee2702 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2705 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10ee2708 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee270b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10ee270e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2711 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10ee2714 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2718 jbe 0x10ee2721 */
  if ((C.cf||C.zf)) goto L_10ee2721;
  /* 10ee271a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10ee2721:;
  /* 10ee2721 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2724 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2727 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10ee272a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee272d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10ee2730 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2733 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10ee2736 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee273a jbe 0x10ee2743 */
  if ((C.cf||C.zf)) goto L_10ee2743;
  /* 10ee273c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10ee2743:;
  /* 10ee2743 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee2746 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2749 je 0x10ee284f */
  if (C.zf) goto L_10ee284f;
  /* 10ee274f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee2752 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee2755 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee2758 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee275b jne 0x10ee2831 */
  if (!C.zf) goto L_10ee2831;
  /* 10ee2761 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2765 jae 0x10ee27c6 */
  if (!C.cf) goto L_10ee27c6;
  /* 10ee2767 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee276c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee276f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee2771 not edx */
  EDX = (~(EDX));
  /* 10ee2773 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2776 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2779 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10ee277d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee277f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2782 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2785 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10ee2789 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee278c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee278f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ee2792 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ee2795 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2798 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee279b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10ee279e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee27a1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee27a4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ee27a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee27aa jne 0x10ee27c4 */
  if (!C.zf) goto L_10ee27c4;
  /* 10ee27ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee27b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee27b4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee27b6 not edx */
  EDX = (~(EDX));
  /* 10ee27b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee27bb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee27bd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee27bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee27c2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ee27c4:;
  /* 10ee27c4 jmp 0x10ee2831 */
  goto L_10ee2831;
L_10ee27c6:;
  /* 10ee27c6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee27c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee27cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee27d1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee27d3 not eax */
  EAX = (~(EAX));
  /* 10ee27d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee27d8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee27db mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10ee27e2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee27e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee27e7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee27ea mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10ee27f1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee27f4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee27f7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10ee27fa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ee27fd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2800 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2803 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10ee2806 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2809 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee280c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ee2810 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee2812 jne 0x10ee2831 */
  if (!C.zf) goto L_10ee2831;
  /* 10ee2814 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee2817 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee281a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee281f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee2821 not eax */
  EAX = (~(EAX));
  /* 10ee2823 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2826 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee2829 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee282b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee282e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10ee2831:;
  /* 10ee2831 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee2834 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee2837 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee283a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee283d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ee2840 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee2843 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee2846 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee2849 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee284c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10ee284f:;
  /* 10ee284f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee2852 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10ee2855:;
  /* 10ee2855 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee2858 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee285b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee285d jne 0x10ee286b */
  if (!C.zf) goto L_10ee286b;
  /* 10ee285f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee2862 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2865 je 0x10ee297b */
  if (C.zf) goto L_10ee297b;
L_10ee286b:;
  /* 10ee286b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee286e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee2871 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10ee2874 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ee2877 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee287a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee287d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee2880 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ee2883 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee2886 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee2889 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10ee288c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee288f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee2892 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10ee2895 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee2898 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee289b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee289e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ee28a1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee28a4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee28a7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee28aa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee28ad jne 0x10ee297b */
  if (!C.zf) goto L_10ee297b;
  /* 10ee28b3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee28b7 jae 0x10ee2914 */
  if (!C.cf) goto L_10ee2914;
  /* 10ee28b9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee28bc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee28bf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ee28c3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee28c6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee28c9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ee28cc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ee28cf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee28d2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee28d5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10ee28d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee28da jne 0x10ee28f2 */
  if (!C.zf) goto L_10ee28f2;
  /* 10ee28dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee28e1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee28e4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee28e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee28e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee28eb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee28ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee28f0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ee28f2:;
  /* 10ee28f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee28f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee28fa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee28fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee28ff mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2902 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10ee2906 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee2908 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee290b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee290e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10ee2912 jmp 0x10ee297b */
  goto L_10ee297b;
L_10ee2914:;
  /* 10ee2914 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2917 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee291a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ee291e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2921 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2924 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ee2927 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ee292a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee292d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2930 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10ee2933 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee2935 jne 0x10ee2952 */
  if (!C.zf) goto L_10ee2952;
  /* 10ee2937 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee293a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee293d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee2942 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee2944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2947 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee294a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee294c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee294f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10ee2952:;
  /* 10ee2952 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee2955 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2958 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee295d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee295f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2962 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2965 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10ee296c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee296e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2971 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee2974 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10ee297b:;
  /* 10ee297b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee297e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2981 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ee2983 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee2986 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2989 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee298c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10ee298f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee2992 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee2994 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2997 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee299a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ee299c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee299f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee29a2 jne 0x10ee2b09 */
  if (!C.zf) goto L_10ee2b09;
  /* 10ee29a8 cmp dword ptr [0x10f10e80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10e80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee29af je 0x10ee2af8 */
  if (C.zf) goto L_10ee2af8;
  /* 10ee29b5 mov eax, dword ptr [0x10f10e78] */
  EAX = (r32((uint32_t)(0x10f10e78)));
  /* 10ee29ba shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10ee29bd mov ecx, dword ptr [0x10f10e80] */
  ECX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee29c3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ee29c6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee29c8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ee29cb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10ee29d0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10ee29d5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee29d8 push eax */
  push32((uint32_t)(EAX));
  /* 10ee29d9 call dword ptr [0x10f12398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12398))), 0x10ee29dfu);
  /* 10ee29df mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee29e4 mov ecx, dword ptr [0x10f10e78] */
  ECX = (r32((uint32_t)(0x10f10e78)));
  /* 10ee29ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee29ec mov eax, dword ptr [0x10f10e80] */
  EAX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee29f1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ee29f4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee29f6 mov edx, dword ptr [0x10f10e80] */
  EDX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee29fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ee29ff mov eax, dword ptr [0x10f10e80] */
  EAX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee2a04 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ee2a07 mov edx, dword ptr [0x10f10e78] */
  EDX = (r32((uint32_t)(0x10f10e78)));
  /* 10ee2a0d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10ee2a18 mov eax, dword ptr [0x10f10e80] */
  EAX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee2a1d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ee2a20 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10ee2a23 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ee2a26 mov eax, dword ptr [0x10f10e80] */
  EAX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee2a2b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ee2a2e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10ee2a31 mov edx, dword ptr [0x10f10e80] */
  EDX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee2a37 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ee2a3a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10ee2a3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee2a40 jne 0x10ee2a56 */
  if (!C.zf) goto L_10ee2a56;
  /* 10ee2a42 mov edx, dword ptr [0x10f10e80] */
  EDX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee2a48 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee2a4b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10ee2a4d mov ecx, dword ptr [0x10f10e80] */
  ECX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee2a53 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10ee2a56:;
  /* 10ee2a56 mov edx, dword ptr [0x10f10e80] */
  EDX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee2a5c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2a60 jne 0x10ee2af8 */
  if (!C.zf) goto L_10ee2af8;
  /* 10ee2a66 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10ee2a6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee2a6d mov eax, dword ptr [0x10f10e80] */
  EAX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee2a72 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ee2a75 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee2a76 call dword ptr [0x10f12398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12398))), 0x10ee2a7cu);
  /* 10ee2a7c mov edx, dword ptr [0x10f10e80] */
  EDX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee2a82 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ee2a85 push eax */
  push32((uint32_t)(EAX));
  /* 10ee2a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee2a88 mov ecx, dword ptr [0x10f10e8c] */
  ECX = (r32((uint32_t)(0x10f10e8c)));
  /* 10ee2a8e push ecx */
  push32((uint32_t)(ECX));
  /* 10ee2a8f call dword ptr [0x10f1239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1239c))), 0x10ee2a95u);
  /* 10ee2a95 mov edx, dword ptr [0x10f10e84] */
  EDX = (r32((uint32_t)(0x10f10e84)));
  /* 10ee2a9b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee2a9e mov eax, dword ptr [0x10f10e88] */
  EAX = (r32((uint32_t)(0x10f10e88)));
  /* 10ee2aa3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2aa5 mov ecx, dword ptr [0x10f10e80] */
  ECX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee2aab add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2aae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2ab0 push eax */
  push32((uint32_t)(EAX));
  /* 10ee2ab1 mov edx, dword ptr [0x10f10e80] */
  EDX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee2ab7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2aba push edx */
  push32((uint32_t)(EDX));
  /* 10ee2abb mov eax, dword ptr [0x10f10e80] */
  EAX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee2ac0 push eax */
  push32((uint32_t)(EAX));
  /* 10ee2ac1 call 0x10ee1b90 */
  push32(0x10ee2ac6u); f_10ee1b90();
  /* 10ee2ac6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2ac9 mov ecx, dword ptr [0x10f10e84] */
  ECX = (r32((uint32_t)(0x10f10e84)));
  /* 10ee2acf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2ad2 mov dword ptr [0x10f10e84], ecx */
  w32((uint32_t)(0x10f10e84), (ECX));
  /* 10ee2ad8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2adb cmp edx, dword ptr [0x10f10e80] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f10e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2ae1 jbe 0x10ee2aec */
  if ((C.cf||C.zf)) goto L_10ee2aec;
  /* 10ee2ae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2ae6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2ae9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ee2aec:;
  /* 10ee2aec mov ecx, dword ptr [0x10f10e88] */
  ECX = (r32((uint32_t)(0x10f10e88)));
  /* 10ee2af2 mov dword ptr [0x10f10e7c], ecx */
  w32((uint32_t)(0x10f10e7c), (ECX));
L_10ee2af8:;
  /* 10ee2af8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2afb mov dword ptr [0x10f10e80], edx */
  w32((uint32_t)(0x10f10e80), (EDX));
  /* 10ee2b01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2b04 mov dword ptr [0x10f10e78], eax */
  w32((uint32_t)(0x10f10e78), (EAX));
L_10ee2b09:;
  /* 10ee2b09 mov esp, ebp */
  ESP = (EBP);
  /* 10ee2b0b pop ebp */
  EBP = (pop32());
  /* 10ee2b0c ret  */
  ESPCHK(0x10ee2540u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b10 @ 0x10ee2b10 (1334 bytes, 427 insns) */
void f_10ee2b10(void) {
  FTRACE(0x10ee2b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee2b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee2b11 mov ebp, esp */
  EBP = (ESP);
  /* 10ee2b13 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2b16 push esi */
  push32((uint32_t)(ESI));
  /* 10ee2b17 mov eax, dword ptr [0x10f10e84] */
  EAX = (r32((uint32_t)(0x10f10e84)));
  /* 10ee2b1c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee2b1f mov ecx, dword ptr [0x10f10e88] */
  ECX = (r32((uint32_t)(0x10f10e88)));
  /* 10ee2b25 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2b27 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10ee2b2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee2b2d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2b30 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee2b33 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10ee2b36 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee2b39 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10ee2b3c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2b3f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ee2b42 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2b46 jge 0x10ee2b5c */
  if ((C.sf==C.of)) goto L_10ee2b5c;
  /* 10ee2b48 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee2b4b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee2b4e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee2b50 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10ee2b53 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10ee2b5a jmp 0x10ee2b71 */
  goto L_10ee2b71;
L_10ee2b5c:;
  /* 10ee2b5c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ee2b63 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee2b66 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2b69 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2b6c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee2b6e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10ee2b71:;
  /* 10ee2b71 mov ecx, dword ptr [0x10f10e7c] */
  ECX = (r32((uint32_t)(0x10f10e7c)));
  /* 10ee2b77 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10ee2b7a:;
  /* 10ee2b7a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2b7d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2b80 jae 0x10ee2ba6 */
  if (!C.cf) goto L_10ee2ba6;
  /* 10ee2b82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2b85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee2b88 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10ee2b8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2b8d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee2b90 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2b93 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee2b95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee2b97 je 0x10ee2b9b */
  if (C.zf) goto L_10ee2b9b;
  /* 10ee2b99 jmp 0x10ee2ba6 */
  goto L_10ee2ba6;
L_10ee2b9b:;
  /* 10ee2b9b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2b9e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2ba1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10ee2ba4 jmp 0x10ee2b7a */
  goto L_10ee2b7a;
L_10ee2ba6:;
  /* 10ee2ba6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2ba9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2bac jne 0x10ee2c8d */
  if (!C.zf) goto L_10ee2c8d;
  /* 10ee2bb2 mov eax, dword ptr [0x10f10e88] */
  EAX = (r32((uint32_t)(0x10f10e88)));
  /* 10ee2bb7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10ee2bba:;
  /* 10ee2bba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2bbd cmp ecx, dword ptr [0x10f10e7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f10e7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2bc3 jae 0x10ee2be9 */
  if (!C.cf) goto L_10ee2be9;
  /* 10ee2bc5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2bc8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee2bcb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2bcd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2bd0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee2bd3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10ee2bd6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee2bda je 0x10ee2bde */
  if (C.zf) goto L_10ee2bde;
  /* 10ee2bdc jmp 0x10ee2be9 */
  goto L_10ee2be9;
L_10ee2bde:;
  /* 10ee2bde mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2be1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2be4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ee2be7 jmp 0x10ee2bba */
  goto L_10ee2bba;
L_10ee2be9:;
  /* 10ee2be9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2bec cmp ecx, dword ptr [0x10f10e7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f10e7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2bf2 jne 0x10ee2c8d */
  if (!C.zf) goto L_10ee2c8d;
L_10ee2bf8:;
  /* 10ee2bf8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2bfb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2bfe jae 0x10ee2c16 */
  if (!C.cf) goto L_10ee2c16;
  /* 10ee2c00 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2c03 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2c07 je 0x10ee2c0b */
  if (C.zf) goto L_10ee2c0b;
  /* 10ee2c09 jmp 0x10ee2c16 */
  goto L_10ee2c16;
L_10ee2c0b:;
  /* 10ee2c0b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2c0e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2c11 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10ee2c14 jmp 0x10ee2bf8 */
  goto L_10ee2bf8;
L_10ee2c16:;
  /* 10ee2c16 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2c19 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2c1c jne 0x10ee2c67 */
  if (!C.zf) goto L_10ee2c67;
  /* 10ee2c1e mov eax, dword ptr [0x10f10e88] */
  EAX = (r32((uint32_t)(0x10f10e88)));
  /* 10ee2c23 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10ee2c26:;
  /* 10ee2c26 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2c29 cmp ecx, dword ptr [0x10f10e7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f10e7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2c2f jae 0x10ee2c47 */
  if (!C.cf) goto L_10ee2c47;
  /* 10ee2c31 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2c34 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2c38 je 0x10ee2c3c */
  if (C.zf) goto L_10ee2c3c;
  /* 10ee2c3a jmp 0x10ee2c47 */
  goto L_10ee2c47;
L_10ee2c3c:;
  /* 10ee2c3c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2c3f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2c42 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ee2c45 jmp 0x10ee2c26 */
  goto L_10ee2c26;
L_10ee2c47:;
  /* 10ee2c47 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2c4a cmp ecx, dword ptr [0x10f10e7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f10e7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2c50 jne 0x10ee2c67 */
  if (!C.zf) goto L_10ee2c67;
  /* 10ee2c52 call 0x10ee3050 */
  push32(0x10ee2c57u); f_10ee3050();
  /* 10ee2c57 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ee2c5a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2c5e jne 0x10ee2c67 */
  if (!C.zf) goto L_10ee2c67;
  /* 10ee2c60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2c62 jmp 0x10ee3041 */
  goto L_10ee3041;
L_10ee2c67:;
  /* 10ee2c67 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2c6a push edx */
  push32((uint32_t)(EDX));
  /* 10ee2c6b call 0x10ee3160 */
  push32(0x10ee2c70u); f_10ee3160();
  /* 10ee2c70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2c73 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2c76 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10ee2c79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ee2c7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2c7e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ee2c81 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2c84 jne 0x10ee2c8d */
  if (!C.zf) goto L_10ee2c8d;
  /* 10ee2c86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2c88 jmp 0x10ee3041 */
  goto L_10ee3041;
L_10ee2c8d:;
  /* 10ee2c8d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2c90 mov dword ptr [0x10f10e7c], edx */
  w32((uint32_t)(0x10f10e7c), (EDX));
  /* 10ee2c96 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2c99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ee2c9c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10ee2c9f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2ca2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee2ca4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10ee2ca7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2cab je 0x10ee2cd0 */
  if (C.zf) goto L_10ee2cd0;
  /* 10ee2cad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2cb0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2cb3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee2cb6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2cba mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2cbd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2cc0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee2cc3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10ee2cca or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2ccc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee2cce jne 0x10ee2d05 */
  if (!C.zf) goto L_10ee2d05;
L_10ee2cd0:;
  /* 10ee2cd0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10ee2cd7:;
  /* 10ee2cd7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2cda mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2cdd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee2ce0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10ee2ce4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2ce7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2cea mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee2ced and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10ee2cf4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10ee2cf6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee2cf8 jne 0x10ee2d05 */
  if (!C.zf) goto L_10ee2d05;
  /* 10ee2cfa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2cfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2d00 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10ee2d03 jmp 0x10ee2cd7 */
  goto L_10ee2cd7;
L_10ee2d05:;
  /* 10ee2d05 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2d08 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee2d0e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2d11 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10ee2d18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee2d1b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ee2d22 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2d25 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2d28 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee2d2b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10ee2d2f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ee2d32 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2d36 jne 0x10ee2d52 */
  if (!C.zf) goto L_10ee2d52;
  /* 10ee2d38 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10ee2d3f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2d42 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2d45 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee2d48 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10ee2d4f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10ee2d52:;
  /* 10ee2d52 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2d56 jl 0x10ee2d6b */
  if ((C.sf!=C.of)) goto L_10ee2d6b;
  /* 10ee2d58 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee2d5b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ee2d5d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ee2d60 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee2d63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2d66 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ee2d69 jmp 0x10ee2d52 */
  goto L_10ee2d52;
L_10ee2d6b:;
  /* 10ee2d6b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee2d6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2d71 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10ee2d75 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ee2d78 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2d7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee2d7d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2d80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee2d83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee2d86 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10ee2d89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2d8c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ee2d8f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2d93 jle 0x10ee2d9c */
  if ((C.zf||C.sf!=C.of)) goto L_10ee2d9c;
  /* 10ee2d95 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10ee2d9c:;
  /* 10ee2d9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee2d9f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2da2 je 0x10ee2fc0 */
  if (C.zf) goto L_10ee2fc0;
  /* 10ee2da8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2dab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2dae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee2db1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2db4 jne 0x10ee2e8a */
  if (!C.zf) goto L_10ee2e8a;
  /* 10ee2dba cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2dbe jge 0x10ee2e1f */
  if ((C.sf==C.of)) goto L_10ee2e1f;
  /* 10ee2dc0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee2dc5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee2dc8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee2dca not eax */
  EAX = (~(EAX));
  /* 10ee2dcc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2dcf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2dd2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10ee2dd6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee2dd8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2ddb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2dde mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10ee2de2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2de5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2de8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10ee2deb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ee2dee mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2df1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2df4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10ee2df7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2dfa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2dfd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ee2e01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee2e03 jne 0x10ee2e1d */
  if (!C.zf) goto L_10ee2e1d;
  /* 10ee2e05 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee2e0a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee2e0d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee2e0f not eax */
  EAX = (~(EAX));
  /* 10ee2e11 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2e14 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee2e16 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee2e18 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2e1b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ee2e1d:;
  /* 10ee2e1d jmp 0x10ee2e8a */
  goto L_10ee2e8a;
L_10ee2e1f:;
  /* 10ee2e1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee2e22 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2e25 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee2e2a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee2e2c not edx */
  EDX = (~(EDX));
  /* 10ee2e2e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2e31 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2e34 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10ee2e3b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2e3d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2e40 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2e43 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10ee2e4a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2e4d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2e50 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ee2e53 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ee2e56 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2e59 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2e5c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10ee2e5f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2e62 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2e65 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ee2e69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee2e6b jne 0x10ee2e8a */
  if (!C.zf) goto L_10ee2e8a;
  /* 10ee2e6d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee2e70 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2e73 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee2e78 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee2e7a not edx */
  EDX = (~(EDX));
  /* 10ee2e7c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2e7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee2e82 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee2e84 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2e87 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10ee2e8a:;
  /* 10ee2e8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2e8d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ee2e90 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2e93 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee2e96 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10ee2e99 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2e9c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee2e9f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2ea2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ee2ea5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ee2ea8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2eac je 0x10ee2fc0 */
  if (C.zf) goto L_10ee2fc0;
  /* 10ee2eb2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee2eb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee2eb8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10ee2ebb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee2ebe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2ec1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee2ec4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee2ec7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ee2eca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2ecd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee2ed0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ee2ed3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee2ed6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2ed9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10ee2edc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2edf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee2ee2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2ee5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10ee2ee8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2eeb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2eee mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee2ef1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2ef4 jne 0x10ee2fc0 */
  if (!C.zf) goto L_10ee2fc0;
  /* 10ee2efa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2efe jge 0x10ee2f5a */
  if ((C.sf==C.of)) goto L_10ee2f5a;
  /* 10ee2f00 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2f03 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2f06 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ee2f0a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2f0d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2f10 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10ee2f13 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ee2f15 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2f18 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2f1b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10ee2f1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee2f20 jne 0x10ee2f38 */
  if (!C.zf) goto L_10ee2f38;
  /* 10ee2f22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee2f27 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee2f2a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee2f2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2f2f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee2f31 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee2f33 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2f36 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ee2f38:;
  /* 10ee2f38 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee2f3d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee2f40 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee2f42 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2f45 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2f48 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10ee2f4c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2f4e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2f51 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2f54 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10ee2f58 jmp 0x10ee2fc0 */
  goto L_10ee2fc0;
L_10ee2f5a:;
  /* 10ee2f5a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2f5d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2f60 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ee2f64 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2f67 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2f6a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10ee2f6d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ee2f6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2f72 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2f75 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10ee2f78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee2f7a jne 0x10ee2f97 */
  if (!C.zf) goto L_10ee2f97;
  /* 10ee2f7c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee2f7f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2f82 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee2f87 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee2f89 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2f8c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee2f8f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee2f91 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee2f94 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10ee2f97:;
  /* 10ee2f97 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee2f9a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee2f9d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee2fa2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee2fa4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2fa7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2faa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10ee2fb1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee2fb3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee2fb6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee2fb9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10ee2fc0:;
  /* 10ee2fc0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee2fc4 je 0x10ee2fda */
  if (C.zf) goto L_10ee2fda;
  /* 10ee2fc6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2fc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee2fcc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ee2fce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2fd1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2fd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee2fd7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10ee2fda:;
  /* 10ee2fda mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2fdd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2fe0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ee2fe3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee2fe6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2fe9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2fec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ee2fee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee2ff1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2ff4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee2ff7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee2ffa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10ee2ffd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3000 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee3002 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3005 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee3007 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee300a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee300d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ee300f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee3011 jne 0x10ee3033 */
  if (!C.zf) goto L_10ee3033;
  /* 10ee3013 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee3016 cmp eax, dword ptr [0x10f10e80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f10e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee301c jne 0x10ee3033 */
  if (!C.zf) goto L_10ee3033;
  /* 10ee301e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3021 cmp ecx, dword ptr [0x10f10e78] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f10e78))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3027 jne 0x10ee3033 */
  if (!C.zf) goto L_10ee3033;
  /* 10ee3029 mov dword ptr [0x10f10e80], 0 */
  w32((uint32_t)(0x10f10e80), (0x0u));
L_10ee3033:;
  /* 10ee3033 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee3036 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3039 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ee303b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee303e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10ee3041:;
  /* 10ee3041 pop esi */
  ESI = (pop32());
  /* 10ee3042 mov esp, ebp */
  ESP = (EBP);
  /* 10ee3044 pop ebp */
  EBP = (pop32());
  /* 10ee3045 ret  */
  ESPCHK(0x10ee2b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013050 @ 0x10ee3050 (271 bytes, 78 insns) */
void f_10ee3050(void) {
  FTRACE(0x10ee3050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee3050 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee3051 mov ebp, esp */
  EBP = (ESP);
  /* 10ee3053 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee3054 mov eax, dword ptr [0x10f10e84] */
  EAX = (r32((uint32_t)(0x10f10e84)));
  /* 10ee3059 cmp eax, dword ptr [0x10f10e68] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f10e68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee305f jne 0x10ee30ab */
  if (!C.zf) goto L_10ee30ab;
  /* 10ee3061 mov ecx, dword ptr [0x10f10e68] */
  ECX = (r32((uint32_t)(0x10f10e68)));
  /* 10ee3067 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee306a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee306d push ecx */
  push32((uint32_t)(ECX));
  /* 10ee306e mov edx, dword ptr [0x10f10e88] */
  EDX = (r32((uint32_t)(0x10f10e88)));
  /* 10ee3074 push edx */
  push32((uint32_t)(EDX));
  /* 10ee3075 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee3077 mov eax, dword ptr [0x10f10e8c] */
  EAX = (r32((uint32_t)(0x10f10e8c)));
  /* 10ee307c push eax */
  push32((uint32_t)(EAX));
  /* 10ee307d call dword ptr [0x10f1238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1238c))), 0x10ee3083u);
  /* 10ee3083 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee3086 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee308a jne 0x10ee3093 */
  if (!C.zf) goto L_10ee3093;
  /* 10ee308c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee308e jmp 0x10ee315b */
  goto L_10ee315b;
L_10ee3093:;
  /* 10ee3093 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3096 mov dword ptr [0x10f10e88], ecx */
  w32((uint32_t)(0x10f10e88), (ECX));
  /* 10ee309c mov edx, dword ptr [0x10f10e68] */
  EDX = (r32((uint32_t)(0x10f10e68)));
  /* 10ee30a2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee30a5 mov dword ptr [0x10f10e68], edx */
  w32((uint32_t)(0x10f10e68), (EDX));
L_10ee30ab:;
  /* 10ee30ab mov eax, dword ptr [0x10f10e84] */
  EAX = (r32((uint32_t)(0x10f10e84)));
  /* 10ee30b0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee30b3 mov ecx, dword ptr [0x10f10e88] */
  ECX = (r32((uint32_t)(0x10f10e88)));
  /* 10ee30b9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee30bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee30be push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10ee30c3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ee30c5 mov edx, dword ptr [0x10f10e8c] */
  EDX = (r32((uint32_t)(0x10f10e8c)));
  /* 10ee30cb push edx */
  push32((uint32_t)(EDX));
  /* 10ee30cc call dword ptr [0x10f12390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12390))), 0x10ee30d2u);
  /* 10ee30d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee30d5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10ee30d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee30db cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee30df jne 0x10ee30e5 */
  if (!C.zf) goto L_10ee30e5;
  /* 10ee30e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee30e3 jmp 0x10ee315b */
  goto L_10ee315b;
L_10ee30e5:;
  /* 10ee30e5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ee30e7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10ee30ec push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10ee30f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee30f3 call dword ptr [0x10f12388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12388))), 0x10ee30f9u);
  /* 10ee30f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee30fc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10ee30ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3102 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3106 jne 0x10ee3122 */
  if (!C.zf) goto L_10ee3122;
  /* 10ee3108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee310b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ee310e push ecx */
  push32((uint32_t)(ECX));
  /* 10ee310f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee3111 mov edx, dword ptr [0x10f10e8c] */
  EDX = (r32((uint32_t)(0x10f10e8c)));
  /* 10ee3117 push edx */
  push32((uint32_t)(EDX));
  /* 10ee3118 call dword ptr [0x10f1239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1239c))), 0x10ee311eu);
  /* 10ee311e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee3120 jmp 0x10ee315b */
  goto L_10ee315b;
L_10ee3122:;
  /* 10ee3122 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3125 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ee312b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee312e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10ee3135 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3138 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10ee313f mov eax, dword ptr [0x10f10e84] */
  EAX = (r32((uint32_t)(0x10f10e84)));
  /* 10ee3144 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3147 mov dword ptr [0x10f10e84], eax */
  w32((uint32_t)(0x10f10e84), (EAX));
  /* 10ee314c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee314f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10ee3152 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10ee3158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ee315b:;
  /* 10ee315b mov esp, ebp */
  ESP = (EBP);
  /* 10ee315d pop ebp */
  EBP = (pop32());
  /* 10ee315e ret  */
  ESPCHK(0x10ee3050u, _esp0);
  ESP += 4; return;
}

/* FUN_10013160 @ 0x10ee3160 (494 bytes, 149 insns) */
void f_10ee3160(void) {
  FTRACE(0x10ee3160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee3160 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee3161 mov ebp, esp */
  EBP = (ESP);
  /* 10ee3163 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee3169 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ee316c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10ee316f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee3172 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee3175 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee3178 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10ee317f:;
  /* 10ee317f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3183 jl 0x10ee3198 */
  if ((C.sf!=C.of)) goto L_10ee3198;
  /* 10ee3185 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee3188 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10ee318a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee318d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee3190 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3193 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10ee3196 jmp 0x10ee317f */
  goto L_10ee317f;
L_10ee3198:;
  /* 10ee3198 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee319b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee31a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee31a4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10ee31ab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ee31ae mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ee31b5 jmp 0x10ee31c0 */
  goto L_10ee31c0;
L_10ee31b7:;
  /* 10ee31b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee31ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee31bd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10ee31c0:;
  /* 10ee31c0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee31c4 jge 0x10ee31e6 */
  if ((C.sf==C.of)) goto L_10ee31e6;
  /* 10ee31c6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee31c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee31cc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10ee31cf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ee31d2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee31d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee31d8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10ee31db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee31de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee31e1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10ee31e4 jmp 0x10ee31b7 */
  goto L_10ee31b7;
L_10ee31e6:;
  /* 10ee31e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee31e9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10ee31ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee31ef mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ee31f2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee31f4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ee31f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ee31f9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10ee31fe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10ee3203 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee3206 push edx */
  push32((uint32_t)(EDX));
  /* 10ee3207 call dword ptr [0x10f12388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12388))), 0x10ee320du);
  /* 10ee320d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee320f jne 0x10ee3219 */
  if (!C.zf) goto L_10ee3219;
  /* 10ee3211 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee3214 jmp 0x10ee334a */
  goto L_10ee334a;
L_10ee3219:;
  /* 10ee3219 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee321c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3221 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ee3224 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee3227 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee322a jmp 0x10ee3238 */
  goto L_10ee3238;
L_10ee322c:;
  /* 10ee322c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee322f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3235 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee3238:;
  /* 10ee3238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee323b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee323e ja 0x10ee329d */
  if ((!C.cf&&!C.zf)) goto L_10ee329d;
  /* 10ee3240 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3243 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10ee324a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee324d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10ee3257 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee325a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee325d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ee3260 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee3263 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10ee3269 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee326c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3272 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee3275 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ee3278 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee327b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3281 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee3284 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ee3287 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee328a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee328f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ee3292 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee3295 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10ee329b jmp 0x10ee322c */
  goto L_10ee322c;
L_10ee329d:;
  /* 10ee329d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee32a0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee32a6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ee32a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee32ac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee32af mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee32b2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10ee32b5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee32b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee32bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ee32be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee32c1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee32c4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10ee32c7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee32ca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee32cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee32d0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10ee32d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee32d6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee32d9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ee32dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee32df mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee32e2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10ee32e5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee32e8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee32eb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10ee32f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee32f6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee32f9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10ee3304 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee3307 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10ee330b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee330e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10ee3311 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ee3314 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee3317 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10ee331a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee331c jne 0x10ee332d */
  if (!C.zf) goto L_10ee332d;
  /* 10ee331e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee3321 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee3324 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee3327 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee332a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10ee332d:;
  /* 10ee332d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee3332 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee3335 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee3337 not edx */
  EDX = (~(EDX));
  /* 10ee3339 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee333c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ee333f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee3341 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee3344 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ee3347 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10ee334a:;
  /* 10ee334a mov esp, ebp */
  ESP = (EBP);
  /* 10ee334c pop ebp */
  EBP = (pop32());
  /* 10ee334d ret  */
  ESPCHK(0x10ee3160u, _esp0);
  ESP += 4; return;
}

/* FUN_10013350 @ 0x10ee3350 (1515 bytes, 489 insns) */
void f_10ee3350(void) {
  FTRACE(0x10ee3350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee3350 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee3351 mov ebp, esp */
  EBP = (ESP);
  /* 10ee3353 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3356 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee3359 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee335c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10ee335e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ee3361 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee3364 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10ee3367 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10ee336a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee336d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee3370 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3373 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee3376 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee3379 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10ee337c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee337f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3382 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee3388 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee338b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10ee3392 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ee3395 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee3398 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee339b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ee339e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee33a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee33a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee33a6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10ee33a9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee33ac add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee33af mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10ee33b2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee33b5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee33b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ee33ba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee33bd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee33c0 jle 0x10ee3676 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee3676;
  /* 10ee33c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee33c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee33cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee33ce jne 0x10ee33db */
  if (!C.zf) goto L_10ee33db;
  /* 10ee33d0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee33d3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee33d6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee33d9 jle 0x10ee33e2 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee33e2;
L_10ee33db:;
  /* 10ee33db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee33dd jmp 0x10ee3937 */
  goto L_10ee3937;
L_10ee33e2:;
  /* 10ee33e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee33e5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10ee33e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee33eb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ee33ee cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee33f2 jbe 0x10ee33fb */
  if ((C.cf||C.zf)) goto L_10ee33fb;
  /* 10ee33f4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10ee33fb:;
  /* 10ee33fb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee33fe mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee3401 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee3404 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3407 jne 0x10ee34dd */
  if (!C.zf) goto L_10ee34dd;
  /* 10ee340d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3411 jae 0x10ee3472 */
  if (!C.cf) goto L_10ee3472;
  /* 10ee3413 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee3418 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee341b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee341d not edx */
  EDX = (~(EDX));
  /* 10ee341f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3422 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3425 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10ee3429 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee342b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee342e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3431 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10ee3435 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3438 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee343b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ee343e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ee3441 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3444 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3447 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10ee344a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee344d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3450 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ee3454 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee3456 jne 0x10ee3470 */
  if (!C.zf) goto L_10ee3470;
  /* 10ee3458 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee345d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee3460 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee3462 not edx */
  EDX = (~(EDX));
  /* 10ee3464 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee3467 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee3469 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee346b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee346e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ee3470:;
  /* 10ee3470 jmp 0x10ee34dd */
  goto L_10ee34dd;
L_10ee3472:;
  /* 10ee3472 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee3475 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3478 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee347d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee347f not eax */
  EAX = (~(EAX));
  /* 10ee3481 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3484 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3487 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10ee348e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee3490 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3493 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3496 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10ee349d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee34a0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee34a3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10ee34a6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ee34a9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee34ac add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee34af mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10ee34b2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee34b5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee34b8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ee34bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee34be jne 0x10ee34dd */
  if (!C.zf) goto L_10ee34dd;
  /* 10ee34c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee34c3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee34c6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee34cb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee34cd not eax */
  EAX = (~(EAX));
  /* 10ee34cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee34d2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee34d5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee34d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee34da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10ee34dd:;
  /* 10ee34dd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee34e0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee34e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee34e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee34e9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ee34ec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee34ef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee34f2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee34f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee34f8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10ee34fb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee34fe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3501 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3504 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee3507 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee350b jle 0x10ee3657 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee3657;
  /* 10ee3511 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3514 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3517 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10ee351a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee351d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10ee3520 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3523 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ee3526 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee352a jbe 0x10ee3533 */
  if ((C.cf||C.zf)) goto L_10ee3533;
  /* 10ee352c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10ee3533:;
  /* 10ee3533 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee3536 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee3539 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10ee353c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ee353f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee3542 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee3545 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee3548 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ee354b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee354e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee3551 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10ee3554 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee3557 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee355a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10ee355d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee3560 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee3563 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee3566 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ee3569 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee356c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee356f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee3572 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3575 jne 0x10ee3643 */
  if (!C.zf) goto L_10ee3643;
  /* 10ee357b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee357f jae 0x10ee35dc */
  if (!C.cf) goto L_10ee35dc;
  /* 10ee3581 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3584 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3587 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ee358b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee358e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3591 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ee3594 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ee3597 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee359a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee359d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10ee35a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee35a2 jne 0x10ee35ba */
  if (!C.zf) goto L_10ee35ba;
  /* 10ee35a4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee35a9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee35ac shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee35ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee35b1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee35b3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee35b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee35b8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ee35ba:;
  /* 10ee35ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee35bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee35c2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee35c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee35c7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee35ca mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10ee35ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee35d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee35d3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee35d6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10ee35da jmp 0x10ee3643 */
  goto L_10ee3643;
L_10ee35dc:;
  /* 10ee35dc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee35df add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee35e2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ee35e6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee35e9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee35ec mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ee35ef add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ee35f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee35f5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee35f8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10ee35fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee35fd jne 0x10ee361a */
  if (!C.zf) goto L_10ee361a;
  /* 10ee35ff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee3602 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3605 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee360a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee360c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee360f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee3612 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee3614 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee3617 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10ee361a:;
  /* 10ee361a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee361d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3620 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee3625 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee3627 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee362a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee362d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10ee3634 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee3636 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3639 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee363c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10ee3643:;
  /* 10ee3643 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee3646 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee3649 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ee364b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee364e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3651 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee3654 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10ee3657:;
  /* 10ee3657 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee365a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee365d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3660 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ee3662 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee3665 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3668 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee366b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee366e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10ee3671 jmp 0x10ee3932 */
  goto L_10ee3932;
L_10ee3676:;
  /* 10ee3676 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee3679 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee367c jge 0x10ee3932 */
  if ((C.sf==C.of)) goto L_10ee3932;
  /* 10ee3682 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee3685 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3688 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee368b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ee368d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee3690 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3693 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3696 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3699 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10ee369c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee369f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee36a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ee36a5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee36a8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee36ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ee36ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee36b1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10ee36b4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee36b7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ee36ba cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee36be jbe 0x10ee36c7 */
  if ((C.cf||C.zf)) goto L_10ee36c7;
  /* 10ee36c0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10ee36c7:;
  /* 10ee36c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee36ca and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee36cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee36cf jne 0x10ee3810 */
  if (!C.zf) goto L_10ee3810;
  /* 10ee36d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee36d8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10ee36db sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee36de mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ee36e1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee36e5 jbe 0x10ee36ee */
  if ((C.cf||C.zf)) goto L_10ee36ee;
  /* 10ee36e7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10ee36ee:;
  /* 10ee36ee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee36f1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee36f4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee36f7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee36fa jne 0x10ee37d0 */
  if (!C.zf) goto L_10ee37d0;
  /* 10ee3700 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3704 jae 0x10ee3765 */
  if (!C.cf) goto L_10ee3765;
  /* 10ee3706 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee370b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee370e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee3710 not edx */
  EDX = (~(EDX));
  /* 10ee3712 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3715 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3718 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10ee371c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee371e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3721 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3724 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10ee3728 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee372b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee372e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ee3731 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ee3734 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3737 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee373a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10ee373d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3740 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3743 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ee3747 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee3749 jne 0x10ee3763 */
  if (!C.zf) goto L_10ee3763;
  /* 10ee374b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee3750 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee3753 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee3755 not edx */
  EDX = (~(EDX));
  /* 10ee3757 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee375a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee375c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee375e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee3761 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ee3763:;
  /* 10ee3763 jmp 0x10ee37d0 */
  goto L_10ee37d0;
L_10ee3765:;
  /* 10ee3765 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee3768 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee376b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee3770 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee3772 not eax */
  EAX = (~(EAX));
  /* 10ee3774 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3777 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee377a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10ee3781 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee3783 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3786 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3789 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10ee3790 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3793 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3796 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10ee3799 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ee379c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee379f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee37a2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10ee37a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee37a8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee37ab movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ee37af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee37b1 jne 0x10ee37d0 */
  if (!C.zf) goto L_10ee37d0;
  /* 10ee37b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee37b6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee37b9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee37be shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee37c0 not eax */
  EAX = (~(EAX));
  /* 10ee37c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee37c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee37c8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee37ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee37cd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10ee37d0:;
  /* 10ee37d0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee37d3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee37d6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee37d9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee37dc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ee37df mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee37e2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee37e5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee37e8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee37eb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10ee37ee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee37f1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee37f4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ee37f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee37fa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10ee37fd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3800 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ee3803 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3807 jbe 0x10ee3810 */
  if ((C.cf||C.zf)) goto L_10ee3810;
  /* 10ee3809 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10ee3810:;
  /* 10ee3810 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee3813 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee3816 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10ee3819 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10ee381c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee381f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee3822 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee3825 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ee3828 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee382b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee382e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ee3831 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee3834 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3837 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10ee383a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee383d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee3840 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3843 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10ee3846 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3849 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee384c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee384f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3852 jne 0x10ee391e */
  if (!C.zf) goto L_10ee391e;
  /* 10ee3858 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee385c jae 0x10ee38b8 */
  if (!C.cf) goto L_10ee38b8;
  /* 10ee385e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3861 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3864 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ee3868 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee386b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee386e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10ee3871 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ee3873 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3876 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3879 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10ee387c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee387e jne 0x10ee3896 */
  if (!C.zf) goto L_10ee3896;
  /* 10ee3880 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee3885 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee3888 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee388a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee388d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee388f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee3891 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee3894 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ee3896:;
  /* 10ee3896 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee389b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee389e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee38a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee38a3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee38a6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10ee38aa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee38ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee38af mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee38b2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10ee38b6 jmp 0x10ee391e */
  goto L_10ee391e;
L_10ee38b8:;
  /* 10ee38b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee38bb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee38be movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ee38c2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee38c5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee38c8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10ee38cb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ee38cd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee38d0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee38d3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10ee38d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee38d8 jne 0x10ee38f5 */
  if (!C.zf) goto L_10ee38f5;
  /* 10ee38da mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee38dd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee38e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ee38e5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ee38e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee38ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee38ed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee38ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee38f2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10ee38f5:;
  /* 10ee38f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee38f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee38fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee3900 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee3902 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3905 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3908 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10ee390f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee3911 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3914 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee3917 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10ee391e:;
  /* 10ee391e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3921 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee3924 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ee3926 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3929 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee392c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee392f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10ee3932:;
  /* 10ee3932 mov eax, 1 */
  EAX = (0x1u);
L_10ee3937:;
  /* 10ee3937 mov esp, ebp */
  ESP = (EBP);
  /* 10ee3939 pop ebp */
  EBP = (pop32());
  /* 10ee393a ret  */
  ESPCHK(0x10ee3350u, _esp0);
  ESP += 4; return;
}

/* FUN_10013940 @ 0x10ee3940 (304 bytes, 79 insns) */
void f_10ee3940(void) {
  FTRACE(0x10ee3940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee3940 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee3941 mov ebp, esp */
  EBP = (ESP);
  /* 10ee3943 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee3944 cmp dword ptr [0x10f10e80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10e80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee394b je 0x10ee3a6c */
  if (C.zf) goto L_10ee3a6c;
  /* 10ee3951 mov eax, dword ptr [0x10f10e78] */
  EAX = (r32((uint32_t)(0x10f10e78)));
  /* 10ee3956 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10ee3959 mov ecx, dword ptr [0x10f10e80] */
  ECX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee395f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ee3962 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3964 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee3967 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10ee396c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10ee3971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee3974 push eax */
  push32((uint32_t)(EAX));
  /* 10ee3975 call dword ptr [0x10f12398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12398))), 0x10ee397bu);
  /* 10ee397b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee3980 mov ecx, dword ptr [0x10f10e78] */
  ECX = (r32((uint32_t)(0x10f10e78)));
  /* 10ee3986 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee3988 mov eax, dword ptr [0x10f10e80] */
  EAX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee398d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ee3990 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee3992 mov edx, dword ptr [0x10f10e80] */
  EDX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee3998 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ee399b mov eax, dword ptr [0x10f10e80] */
  EAX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee39a0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ee39a3 mov edx, dword ptr [0x10f10e78] */
  EDX = (r32((uint32_t)(0x10f10e78)));
  /* 10ee39a9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10ee39b4 mov eax, dword ptr [0x10f10e80] */
  EAX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee39b9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ee39bc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10ee39bf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ee39c2 mov eax, dword ptr [0x10f10e80] */
  EAX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee39c7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ee39ca mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10ee39cd mov edx, dword ptr [0x10f10e80] */
  EDX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee39d3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ee39d6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10ee39da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee39dc jne 0x10ee39f2 */
  if (!C.zf) goto L_10ee39f2;
  /* 10ee39de mov edx, dword ptr [0x10f10e80] */
  EDX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee39e4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee39e7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10ee39e9 mov ecx, dword ptr [0x10f10e80] */
  ECX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee39ef mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10ee39f2:;
  /* 10ee39f2 mov edx, dword ptr [0x10f10e80] */
  EDX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee39f8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee39fc jne 0x10ee3a62 */
  if (!C.zf) goto L_10ee3a62;
  /* 10ee39fe cmp dword ptr [0x10f10e84], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f10e84))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3a05 jle 0x10ee3a62 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee3a62;
  /* 10ee3a07 mov eax, dword ptr [0x10f10e80] */
  EAX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee3a0c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ee3a0f push ecx */
  push32((uint32_t)(ECX));
  /* 10ee3a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee3a12 mov edx, dword ptr [0x10f10e8c] */
  EDX = (r32((uint32_t)(0x10f10e8c)));
  /* 10ee3a18 push edx */
  push32((uint32_t)(EDX));
  /* 10ee3a19 call dword ptr [0x10f1239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1239c))), 0x10ee3a1fu);
  /* 10ee3a1f mov eax, dword ptr [0x10f10e84] */
  EAX = (r32((uint32_t)(0x10f10e84)));
  /* 10ee3a24 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee3a27 mov ecx, dword ptr [0x10f10e88] */
  ECX = (r32((uint32_t)(0x10f10e88)));
  /* 10ee3a2d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3a2f mov edx, dword ptr [0x10f10e80] */
  EDX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee3a35 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3a38 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3a3a push ecx */
  push32((uint32_t)(ECX));
  /* 10ee3a3b mov eax, dword ptr [0x10f10e80] */
  EAX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee3a40 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3a43 push eax */
  push32((uint32_t)(EAX));
  /* 10ee3a44 mov ecx, dword ptr [0x10f10e80] */
  ECX = (r32((uint32_t)(0x10f10e80)));
  /* 10ee3a4a push ecx */
  push32((uint32_t)(ECX));
  /* 10ee3a4b call 0x10ee1b90 */
  push32(0x10ee3a50u); f_10ee1b90();
  /* 10ee3a50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3a53 mov edx, dword ptr [0x10f10e84] */
  EDX = (r32((uint32_t)(0x10f10e84)));
  /* 10ee3a59 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3a5c mov dword ptr [0x10f10e84], edx */
  w32((uint32_t)(0x10f10e84), (EDX));
L_10ee3a62:;
  /* 10ee3a62 mov dword ptr [0x10f10e80], 0 */
  w32((uint32_t)(0x10f10e80), (0x0u));
L_10ee3a6c:;
  /* 10ee3a6c mov esp, ebp */
  ESP = (EBP);
  /* 10ee3a6e pop ebp */
  EBP = (pop32());
  /* 10ee3a6f ret  */
  ESPCHK(0x10ee3940u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a70 @ 0x10ee3a70 (1565 bytes, 343 insns) */
void f_10ee3a70(void) {
  FTRACE(0x10ee3a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee3a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee3a71 mov ebp, esp */
  EBP = (ESP);
  /* 10ee3a73 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3a79 mov eax, dword ptr [0x10f10e84] */
  EAX = (r32((uint32_t)(0x10f10e84)));
  /* 10ee3a7e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee3a81 push eax */
  push32((uint32_t)(EAX));
  /* 10ee3a82 mov ecx, dword ptr [0x10f10e88] */
  ECX = (r32((uint32_t)(0x10f10e88)));
  /* 10ee3a88 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee3a89 call dword ptr [0x10f12448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12448))), 0x10ee3a8fu);
  /* 10ee3a8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee3a91 je 0x10ee3a9b */
  if (C.zf) goto L_10ee3a9b;
  /* 10ee3a93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee3a96 jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3a9b:;
  /* 10ee3a9b mov edx, dword ptr [0x10f10e88] */
  EDX = (r32((uint32_t)(0x10f10e88)));
  /* 10ee3aa1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10ee3aa7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10ee3ab1 jmp 0x10ee3ac2 */
  goto L_10ee3ac2;
L_10ee3ab3:;
  /* 10ee3ab3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10ee3ab9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3abc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10ee3ac2:;
  /* 10ee3ac2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10ee3ac8 cmp ecx, dword ptr [0x10f10e84] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f10e84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3ace jge 0x10ee4087 */
  if ((C.sf==C.of)) goto L_10ee4087;
  /* 10ee3ad4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10ee3ada mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ee3add mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10ee3ae3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10ee3ae8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10ee3aee push ecx */
  push32((uint32_t)(ECX));
  /* 10ee3aef call dword ptr [0x10f12448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12448))), 0x10ee3af5u);
  /* 10ee3af5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee3af7 je 0x10ee3b03 */
  if (C.zf) goto L_10ee3b03;
  /* 10ee3af9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10ee3afe jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3b03:;
  /* 10ee3b03 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10ee3b09 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ee3b0c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10ee3b12 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10ee3b18 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3b1e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10ee3b21 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10ee3b27 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee3b2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee3b2d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10ee3b37 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10ee3b41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ee3b48 jmp 0x10ee3b53 */
  goto L_10ee3b53;
L_10ee3b4a:;
  /* 10ee3b4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee3b4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3b50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10ee3b53:;
  /* 10ee3b53 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3b57 jge 0x10ee404b */
  if ((C.sf==C.of)) goto L_10ee404b;
  /* 10ee3b5d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10ee3b67 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10ee3b71 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10ee3b7b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10ee3b85 jmp 0x10ee3b96 */
  goto L_10ee3b96;
L_10ee3b87:;
  /* 10ee3b87 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10ee3b8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3b90 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10ee3b96:;
  /* 10ee3b96 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3b9d jge 0x10ee3bb2 */
  if ((C.sf==C.of)) goto L_10ee3bb2;
  /* 10ee3b9f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10ee3ba5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10ee3bb0 jmp 0x10ee3b87 */
  goto L_10ee3b87;
L_10ee3bb2:;
  /* 10ee3bb2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3bb6 jl 0x10ee3fed */
  if ((C.sf!=C.of)) goto L_10ee3fed;
  /* 10ee3bbc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10ee3bc1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10ee3bc7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee3bc8 call dword ptr [0x10f12448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12448))), 0x10ee3bceu);
  /* 10ee3bce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee3bd0 je 0x10ee3bdc */
  if (C.zf) goto L_10ee3bdc;
  /* 10ee3bd2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10ee3bd7 jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3bdc:;
  /* 10ee3bdc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10ee3be2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ee3be5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10ee3bef jmp 0x10ee3c00 */
  goto L_10ee3c00;
L_10ee3bf1:;
  /* 10ee3bf1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10ee3bf7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3bfa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10ee3c00:;
  /* 10ee3c00 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3c07 jge 0x10ee3d84 */
  if ((C.sf==C.of)) goto L_10ee3d84;
  /* 10ee3c0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee3c10 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3c13 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10ee3c19 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ee3c1f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3c25 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10ee3c2b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ee3c31 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3c35 jne 0x10ee3c42 */
  if (!C.zf) goto L_10ee3c42;
  /* 10ee3c37 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10ee3c3d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3c40 je 0x10ee3c4c */
  if (C.zf) goto L_10ee3c4c;
L_10ee3c42:;
  /* 10ee3c42 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10ee3c47 jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3c4c:;
  /* 10ee3c4c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ee3c52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee3c54 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10ee3c5a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10ee3c60 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10ee3c66 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10ee3c6c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee3c6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee3c71 je 0x10ee3ca9 */
  if (C.zf) goto L_10ee3ca9;
  /* 10ee3c73 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10ee3c79 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3c7c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10ee3c82 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3c8c jle 0x10ee3c98 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee3c98;
  /* 10ee3c8e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10ee3c93 jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3c98:;
  /* 10ee3c98 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10ee3c9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3ca1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10ee3ca7 jmp 0x10ee3ceb */
  goto L_10ee3ceb;
L_10ee3ca9:;
  /* 10ee3ca9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10ee3caf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10ee3cb2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3cb5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10ee3cbb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3cc2 jle 0x10ee3cce */
  if ((C.zf||C.sf!=C.of)) goto L_10ee3cce;
  /* 10ee3cc4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10ee3cce:;
  /* 10ee3cce mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10ee3cd4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10ee3cdb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3cde mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10ee3ce4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10ee3ceb:;
  /* 10ee3ceb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3cf2 jl 0x10ee3d0d */
  if ((C.sf!=C.of)) goto L_10ee3d0d;
  /* 10ee3cf4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10ee3cfa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee3cfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee3cff jne 0x10ee3d0d */
  if (!C.zf) goto L_10ee3d0d;
  /* 10ee3d01 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3d0b jle 0x10ee3d17 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee3d17;
L_10ee3d0d:;
  /* 10ee3d0d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10ee3d12 jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3d17:;
  /* 10ee3d17 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ee3d1d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3d23 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10ee3d26 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3d2c je 0x10ee3d38 */
  if (C.zf) goto L_10ee3d38;
  /* 10ee3d2e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10ee3d33 jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3d38:;
  /* 10ee3d38 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ee3d3e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3d44 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10ee3d4a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ee3d50 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3d56 jb 0x10ee3c4c */
  if (C.cf) goto L_10ee3c4c;
  /* 10ee3d5c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ee3d62 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3d68 je 0x10ee3d74 */
  if (C.zf) goto L_10ee3d74;
  /* 10ee3d6a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10ee3d6f jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3d74:;
  /* 10ee3d74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee3d77 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3d7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee3d7f jmp 0x10ee3bf1 */
  goto L_10ee3bf1;
L_10ee3d84:;
  /* 10ee3d84 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee3d87 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee3d89 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3d8f je 0x10ee3d9b */
  if (C.zf) goto L_10ee3d9b;
  /* 10ee3d91 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10ee3d96 jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3d9b:;
  /* 10ee3d9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee3d9e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10ee3da4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10ee3dab jmp 0x10ee3db6 */
  goto L_10ee3db6;
L_10ee3dad:;
  /* 10ee3dad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3db0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3db3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10ee3db6:;
  /* 10ee3db6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3dba jge 0x10ee3fed */
  if ((C.sf==C.of)) goto L_10ee3fed;
  /* 10ee3dc0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10ee3dca mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10ee3dd0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10ee3dd6:;
  /* 10ee3dd6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ee3ddc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee3ddf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10ee3de5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10ee3deb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3df1 je 0x10ee3f1a */
  if (C.zf) goto L_10ee3f1a;
  /* 10ee3df7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3dfa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10ee3e00 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3e07 je 0x10ee3f1a */
  if (C.zf) goto L_10ee3f1a;
  /* 10ee3e0d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10ee3e13 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3e19 jb 0x10ee3e2e */
  if (C.cf) goto L_10ee3e2e;
  /* 10ee3e1b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10ee3e21 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3e26 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3e2c jb 0x10ee3e38 */
  if (C.cf) goto L_10ee3e38;
L_10ee3e2e:;
  /* 10ee3e2e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10ee3e33 jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3e38:;
  /* 10ee3e38 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10ee3e3e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee3e44 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10ee3e4a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10ee3e50 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3e53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ee3e56 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee3e59 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3e5e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10ee3e64:;
  /* 10ee3e64 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee3e67 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3e6d je 0x10ee3e8e */
  if (C.zf) goto L_10ee3e8e;
  /* 10ee3e6f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee3e72 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3e78 jne 0x10ee3e7c */
  if (!C.zf) goto L_10ee3e7c;
  /* 10ee3e7a jmp 0x10ee3e8e */
  goto L_10ee3e8e;
L_10ee3e7c:;
  /* 10ee3e7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee3e7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee3e81 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee3e84 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee3e87 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3e89 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ee3e8c jmp 0x10ee3e64 */
  goto L_10ee3e64;
L_10ee3e8e:;
  /* 10ee3e8e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee3e91 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3e97 jne 0x10ee3ea3 */
  if (!C.zf) goto L_10ee3ea3;
  /* 10ee3e99 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10ee3e9e jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3ea3:;
  /* 10ee3ea3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10ee3ea9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee3eab sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10ee3eae sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3eb1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10ee3eb7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3ebe jle 0x10ee3eca */
  if ((C.zf||C.sf!=C.of)) goto L_10ee3eca;
  /* 10ee3ec0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10ee3eca:;
  /* 10ee3eca mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10ee3ed0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3ed3 je 0x10ee3edf */
  if (C.zf) goto L_10ee3edf;
  /* 10ee3ed5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10ee3eda jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3edf:;
  /* 10ee3edf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10ee3ee5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee3ee8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3eee je 0x10ee3efa */
  if (C.zf) goto L_10ee3efa;
  /* 10ee3ef0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10ee3ef5 jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3efa:;
  /* 10ee3efa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10ee3f00 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10ee3f06 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10ee3f0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3f0f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10ee3f15 jmp 0x10ee3dd6 */
  goto L_10ee3dd6;
L_10ee3f1a:;
  /* 10ee3f1a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3f21 je 0x10ee3f91 */
  if (C.zf) goto L_10ee3f91;
  /* 10ee3f23 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3f27 jge 0x10ee3f5b */
  if ((C.sf==C.of)) goto L_10ee3f5b;
  /* 10ee3f29 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee3f2e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3f31 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee3f33 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10ee3f39 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee3f3b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10ee3f41 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee3f46 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3f49 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee3f4b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10ee3f51 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee3f53 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10ee3f59 jmp 0x10ee3f91 */
  goto L_10ee3f91;
L_10ee3f5b:;
  /* 10ee3f5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3f5e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3f61 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee3f66 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee3f68 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10ee3f6e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee3f70 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10ee3f76 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3f79 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee3f7c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ee3f81 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ee3f83 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10ee3f89 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee3f8b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10ee3f91:;
  /* 10ee3f91 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ee3f97 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee3f9a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3fa0 jne 0x10ee3fb4 */
  if (!C.zf) goto L_10ee3fb4;
  /* 10ee3fa2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee3fa5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10ee3fab cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3fb2 je 0x10ee3fbe */
  if (C.zf) goto L_10ee3fbe;
L_10ee3fb4:;
  /* 10ee3fb4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10ee3fb9 jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3fbe:;
  /* 10ee3fbe mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10ee3fc4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee3fc7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee3fcd je 0x10ee3fd9 */
  if (C.zf) goto L_10ee3fd9;
  /* 10ee3fcf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10ee3fd4 jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee3fd9:;
  /* 10ee3fd9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10ee3fdf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee3fe2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10ee3fe8 jmp 0x10ee3dad */
  goto L_10ee3dad;
L_10ee3fed:;
  /* 10ee3fed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee3ff0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10ee3ff6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10ee3ffc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4000 jne 0x10ee401a */
  if (!C.zf) goto L_10ee401a;
  /* 10ee4002 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4005 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10ee400b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10ee4011 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4018 je 0x10ee4021 */
  if (C.zf) goto L_10ee4021;
L_10ee401a:;
  /* 10ee401a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10ee401f jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee4021:;
  /* 10ee4021 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10ee4027 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee402d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10ee4033 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee4036 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee403b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ee403e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee4041 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10ee4043 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee4046 jmp 0x10ee3b4a */
  goto L_10ee3b4a;
L_10ee404b:;
  /* 10ee404b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10ee4051 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10ee4057 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4059 jne 0x10ee406c */
  if (!C.zf) goto L_10ee406c;
  /* 10ee405b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10ee4061 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10ee4067 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee406a je 0x10ee4073 */
  if (C.zf) goto L_10ee4073;
L_10ee406c:;
  /* 10ee406c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10ee4071 jmp 0x10ee4089 */
  goto L_10ee4089;
L_10ee4073:;
  /* 10ee4073 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10ee4079 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee407c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10ee4082 jmp 0x10ee3ab3 */
  goto L_10ee3ab3;
L_10ee4087:;
  /* 10ee4087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ee4089:;
  /* 10ee4089 mov esp, ebp */
  ESP = (EBP);
  /* 10ee408b pop ebp */
  EBP = (pop32());
  /* 10ee408c ret  */
  ESPCHK(0x10ee3a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10014090 @ 0x10ee4090 (250 bytes, 92 insns) */
void f_10ee4090(void) {
  FTRACE(0x10ee4090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee4090 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee4091 mov ebp, esp */
  EBP = (ESP);
  /* 10ee4093 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee4096 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee4097 push esi */
  push32((uint32_t)(ESI));
  /* 10ee4098 push edi */
  push32((uint32_t)(EDI));
  /* 10ee4099 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10ee409c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ee409f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10ee40a2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10ee40a5:;
  /* 10ee40a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee40a9 jne 0x10ee40c9 */
  if (!C.zf) goto L_10ee40c9;
  /* 10ee40ab push 0x10f0a010 */
  push32((uint32_t)(0x10f0a010u));
  /* 10ee40b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee40b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10ee40b4 push 0x10f0a004 */
  push32((uint32_t)(0x10f0a004u));
  /* 10ee40b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee40bb call 0x10eda2e0 */
  push32(0x10ee40c0u); f_10eda2e0();
  /* 10ee40c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee40c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee40c6 jne 0x10ee40c9 */
  if (!C.zf) goto L_10ee40c9;
  /* 10ee40c8 int3  */
  x86_unimpl("int3 @ 0x10ee40c8");
L_10ee40c9:;
  /* 10ee40c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee40cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee40cd jne 0x10ee40a5 */
  if (!C.zf) goto L_10ee40a5;
L_10ee40cf:;
  /* 10ee40cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee40d3 jne 0x10ee40f3 */
  if (!C.zf) goto L_10ee40f3;
  /* 10ee40d5 push 0x10f09ff4 */
  push32((uint32_t)(0x10f09ff4u));
  /* 10ee40da push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee40dc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10ee40de push 0x10f0a004 */
  push32((uint32_t)(0x10f0a004u));
  /* 10ee40e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee40e5 call 0x10eda2e0 */
  push32(0x10ee40eau); f_10eda2e0();
  /* 10ee40ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee40ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee40f0 jne 0x10ee40f3 */
  if (!C.zf) goto L_10ee40f3;
  /* 10ee40f2 int3  */
  x86_unimpl("int3 @ 0x10ee40f2");
L_10ee40f3:;
  /* 10ee40f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee40f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee40f7 jne 0x10ee40cf */
  if (!C.zf) goto L_10ee40cf;
  /* 10ee40f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee40fc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10ee4103 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee4106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4109 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ee410c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee410f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4112 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ee4114 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee4117 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10ee411e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee4121 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4122 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee4125 push edx */
  push32((uint32_t)(EDX));
  /* 10ee4126 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee4129 push eax */
  push32((uint32_t)(EAX));
  /* 10ee412a call 0x10ee5e70 */
  push32(0x10ee412fu); f_10ee5e70();
  /* 10ee412f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4132 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ee4135 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee4138 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee413b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee413e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee4141 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ee4144 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee4147 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee414b jl 0x10ee416f */
  if ((C.sf!=C.of)) goto L_10ee416f;
  /* 10ee414d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee4150 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee4152 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10ee4155 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee4157 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee415d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10ee4160 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee4163 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee4165 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4168 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee416b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ee416d jmp 0x10ee4180 */
  goto L_10ee4180;
L_10ee416f:;
  /* 10ee416f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee4172 push edx */
  push32((uint32_t)(EDX));
  /* 10ee4173 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4175 call 0x10ee5bf0 */
  push32(0x10ee417au); f_10ee5bf0();
  /* 10ee417a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee417d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10ee4180:;
  /* 10ee4180 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee4183 pop edi */
  EDI = (pop32());
  /* 10ee4184 pop esi */
  ESI = (pop32());
  /* 10ee4185 pop ebx */
  EBX = (pop32());
  /* 10ee4186 mov esp, ebp */
  ESP = (EBP);
  /* 10ee4188 pop ebp */
  EBP = (pop32());
  /* 10ee4189 ret  */
  ESPCHK(0x10ee4090u, _esp0);
  ESP += 4; return;
}

/* FUN_10014190 @ 0x10ee4190 (91 bytes, 30 insns) */
void f_10ee4190(void) {
  FTRACE(0x10ee4190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee4190 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee4191 mov ebp, esp */
  EBP = (ESP);
  /* 10ee4193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4196 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee4198 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee419e jne 0x10ee41be */
  if (!C.zf) goto L_10ee41be;
  /* 10ee41a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee41a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee41a5 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee41a9 jne 0x10ee41be */
  if (!C.zf) goto L_10ee41be;
  /* 10ee41ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee41ae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee41b0 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee41b7 jne 0x10ee41be */
  if (!C.zf) goto L_10ee41be;
  /* 10ee41b9 call 0x10ede5f0 */
  push32(0x10ee41beu); f_10ede5f0();
L_10ee41be:;
  /* 10ee41be cmp dword ptr [0x10f0f6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee41c5 je 0x10ee41e5 */
  if (C.zf) goto L_10ee41e5;
  /* 10ee41c7 mov eax, dword ptr [0x10f0f6d8] */
  EAX = (r32((uint32_t)(0x10f0f6d8)));
  /* 10ee41cc push eax */
  push32((uint32_t)(EAX));
  /* 10ee41cd call 0x10ee4290 */
  push32(0x10ee41d2u); f_10ee4290();
  /* 10ee41d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee41d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee41d7 je 0x10ee41e5 */
  if (C.zf) goto L_10ee41e5;
  /* 10ee41d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee41dc push ecx */
  push32((uint32_t)(ECX));
  /* 10ee41dd call dword ptr [0x10f0f6d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f6d8))), 0x10ee41e3u);
  /* 10ee41e3 jmp 0x10ee41e7 */
  goto L_10ee41e7;
L_10ee41e5:;
  /* 10ee41e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ee41e7:;
  /* 10ee41e7 pop ebp */
  EBP = (pop32());
  /* 10ee41e8 ret 4 */
  ESPCHK(0x10ee4190u, _esp0);
  ESP += 8; return;
}

/* FUN_100141f0 @ 0x10ee41f0 (21 bytes, 7 insns) */
void f_10ee41f0(void) {
  FTRACE(0x10ee41f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee41f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee41f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee41f3 push 0x10ee4190 */
  push32((uint32_t)(0x10ee4190u));
  /* 10ee41f8 call dword ptr [0x10f12384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12384))), 0x10ee41feu);
  /* 10ee41fe mov dword ptr [0x10f0f6d8], eax */
  w32((uint32_t)(0x10f0f6d8), (EAX));
  /* 10ee4203 pop ebp */
  EBP = (pop32());
  /* 10ee4204 ret  */
  ESPCHK(0x10ee41f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014210 @ 0x10ee4210 (17 bytes, 7 insns) */
void f_10ee4210(void) {
  FTRACE(0x10ee4210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee4210 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee4211 mov ebp, esp */
  EBP = (ESP);
  /* 10ee4213 mov eax, dword ptr [0x10f0f6d8] */
  EAX = (r32((uint32_t)(0x10f0f6d8)));
  /* 10ee4218 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4219 call dword ptr [0x10f12384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12384))), 0x10ee421fu);
  /* 10ee421f pop ebp */
  EBP = (pop32());
  /* 10ee4220 ret  */
  ESPCHK(0x10ee4210u, _esp0);
  ESP += 4; return;
}

/* FUN_10014230 @ 0x10ee4230 (43 bytes, 16 insns) */
void f_10ee4230(void) {
  FTRACE(0x10ee4230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee4230 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee4231 mov ebp, esp */
  EBP = (ESP);
  /* 10ee4233 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4234 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ee423b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee423e push eax */
  push32((uint32_t)(EAX));
  /* 10ee423f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4242 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4243 call dword ptr [0x10f1241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1241c))), 0x10ee4249u);
  /* 10ee4249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee424b je 0x10ee4254 */
  if (C.zf) goto L_10ee4254;
  /* 10ee424d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ee4254:;
  /* 10ee4254 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee4257 mov esp, ebp */
  ESP = (EBP);
  /* 10ee4259 pop ebp */
  EBP = (pop32());
  /* 10ee425a ret  */
  ESPCHK(0x10ee4230u, _esp0);
  ESP += 4; return;
}

/* FUN_10014260 @ 0x10ee4260 (43 bytes, 16 insns) */
void f_10ee4260(void) {
  FTRACE(0x10ee4260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee4260 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee4261 mov ebp, esp */
  EBP = (ESP);
  /* 10ee4263 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4264 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ee426b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee426e push eax */
  push32((uint32_t)(EAX));
  /* 10ee426f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4272 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4273 call dword ptr [0x10f12448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12448))), 0x10ee4279u);
  /* 10ee4279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee427b je 0x10ee4284 */
  if (C.zf) goto L_10ee4284;
  /* 10ee427d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ee4284:;
  /* 10ee4284 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee4287 mov esp, ebp */
  ESP = (EBP);
  /* 10ee4289 pop ebp */
  EBP = (pop32());
  /* 10ee428a ret  */
  ESPCHK(0x10ee4260u, _esp0);
  ESP += 4; return;
}

/* _ValidateExecute @ 0x10ee4290 (39 bytes, 14 insns) */
void f_10ee4290(void) {
  FTRACE(0x10ee4290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee4290 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee4291 mov ebp, esp */
  EBP = (ESP);
  /* 10ee4293 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4294 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ee429b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee429e push eax */
  push32((uint32_t)(EAX));
  /* 10ee429f call dword ptr [0x10f12380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12380))), 0x10ee42a5u);
  /* 10ee42a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee42a7 je 0x10ee42b0 */
  if (C.zf) goto L_10ee42b0;
  /* 10ee42a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ee42b0:;
  /* 10ee42b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee42b3 mov esp, ebp */
  ESP = (EBP);
  /* 10ee42b5 pop ebp */
  EBP = (pop32());
  /* 10ee42b6 ret  */
  ESPCHK(0x10ee4290u, _esp0);
  ESP += 4; return;
}

