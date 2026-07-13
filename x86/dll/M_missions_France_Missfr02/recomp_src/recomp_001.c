#include "recomp.h"

/* FUN_100073a0 @ 0x105e73a0 (34 bytes, 13 insns) */
void f_105e73a0(void) {
  FTRACE(0x105e73a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e73a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e73a1 mov ebp, esp */
  EBP = (ESP);
  /* 105e73a3 push ecx */
  push32((uint32_t)(ECX));
  /* 105e73a4 mov eax, dword ptr [0x1060ea8c] */
  EAX = (r32((uint32_t)(0x1060ea8c)));
  /* 105e73a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e73ac cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e73b0 je 0x105e73bb */
  if (C.zf) goto L_105e73bb;
  /* 105e73b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e73b5 mov dword ptr [0x1060ea8c], ecx */
  w32((uint32_t)(0x1060ea8c), (ECX));
L_105e73bb:;
  /* 105e73bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e73be mov esp, ebp */
  ESP = (EBP);
  /* 105e73c0 pop ebp */
  EBP = (pop32());
  /* 105e73c1 ret  */
  ESPCHK(0x105e73a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100073d0 @ 0x105e73d0 (103 bytes, 38 insns) */
void f_105e73d0(void) {
  FTRACE(0x105e73d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e73d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e73d1 mov ebp, esp */
  EBP = (ESP);
  /* 105e73d3 push ecx */
  push32((uint32_t)(ECX));
  /* 105e73d4 mov eax, dword ptr [0x1060ea8c] */
  EAX = (r32((uint32_t)(0x1060ea8c)));
  /* 105e73d9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 105e73dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e73de jne 0x105e73e2 */
  if (!C.zf) goto L_105e73e2;
  /* 105e73e0 jmp 0x105e7433 */
  goto L_105e7433;
L_105e73e2:;
  /* 105e73e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 105e73e4 call 0x105ea240 */
  push32(0x105e73e9u); f_105ea240();
  /* 105e73e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e73ec mov ecx, dword ptr [0x10610800] */
  ECX = (r32((uint32_t)(0x10610800)));
  /* 105e73f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105e73f5 jmp 0x105e73ff */
  goto L_105e73ff;
L_105e73f7:;
  /* 105e73f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e73fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105e73fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105e73ff:;
  /* 105e73ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7403 je 0x105e7429 */
  if (C.zf) goto L_105e7429;
  /* 105e7405 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7408 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105e740b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105e7411 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7414 jne 0x105e7427 */
  if (!C.zf) goto L_105e7427;
  /* 105e7416 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e7419 push eax */
  push32((uint32_t)(EAX));
  /* 105e741a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e741d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7420 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7421 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x105e7424u);
  /* 105e7424 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e7427:;
  /* 105e7427 jmp 0x105e73f7 */
  goto L_105e73f7;
L_105e7429:;
  /* 105e7429 push 9 */
  push32((uint32_t)(0x9u));
  /* 105e742b call 0x105ea2e0 */
  push32(0x105e7430u); f_105ea2e0();
  /* 105e7430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e7433:;
  /* 105e7433 mov esp, ebp */
  ESP = (EBP);
  /* 105e7435 pop ebp */
  EBP = (pop32());
  /* 105e7436 ret  */
  ESPCHK(0x105e73d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x105e7440 (75 bytes, 28 insns) */
void f_105e7440(void) {
  FTRACE(0x105e7440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e7440 push ebp */
  push32((uint32_t)(EBP));
  /* 105e7441 mov ebp, esp */
  EBP = (ESP);
  /* 105e7443 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7444 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7448 je 0x105e747d */
  if (C.zf) goto L_105e747d;
  /* 105e744a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e744d push eax */
  push32((uint32_t)(EAX));
  /* 105e744e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7451 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7452 call dword ptr [0x1061326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061326c))), 0x105e7458u);
  /* 105e7458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e745a jne 0x105e747d */
  if (!C.zf) goto L_105e747d;
  /* 105e745c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7460 je 0x105e7474 */
  if (C.zf) goto L_105e7474;
  /* 105e7462 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e7465 push edx */
  push32((uint32_t)(EDX));
  /* 105e7466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7469 push eax */
  push32((uint32_t)(EAX));
  /* 105e746a call dword ptr [0x10613268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613268))), 0x105e7470u);
  /* 105e7470 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e7472 jne 0x105e747d */
  if (!C.zf) goto L_105e747d;
L_105e7474:;
  /* 105e7474 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105e747b jmp 0x105e7484 */
  goto L_105e7484;
L_105e747d:;
  /* 105e747d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105e7484:;
  /* 105e7484 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7487 mov esp, ebp */
  ESP = (EBP);
  /* 105e7489 pop ebp */
  EBP = (pop32());
  /* 105e748a ret  */
  ESPCHK(0x105e7440u, _esp0);
  ESP += 4; return;
}

/* FUN_10007490 @ 0x105e7490 (134 bytes, 50 insns) */
void f_105e7490(void) {
  FTRACE(0x105e7490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e7490 push ebp */
  push32((uint32_t)(EBP));
  /* 105e7491 mov ebp, esp */
  EBP = (ESP);
  /* 105e7493 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7494 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7498 jne 0x105e749e */
  if (!C.zf) goto L_105e749e;
  /* 105e749a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e749c jmp 0x105e7512 */
  goto L_105e7512;
L_105e749e:;
  /* 105e749e push 1 */
  push32((uint32_t)(0x1u));
  /* 105e74a0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 105e74a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e74a5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e74a8 push eax */
  push32((uint32_t)(EAX));
  /* 105e74a9 call 0x105e7440 */
  push32(0x105e74aeu); f_105e7440();
  /* 105e74ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e74b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e74b3 jne 0x105e74b9 */
  if (!C.zf) goto L_105e74b9;
  /* 105e74b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e74b7 jmp 0x105e7512 */
  goto L_105e7512;
L_105e74b9:;
  /* 105e74b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e74bc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e74bf push ecx */
  push32((uint32_t)(ECX));
  /* 105e74c0 call 0x105eab40 */
  push32(0x105e74c5u); f_105eab40();
  /* 105e74c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e74c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e74cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e74cf je 0x105e74e6 */
  if (C.zf) goto L_105e74e6;
  /* 105e74d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e74d4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e74d7 push edx */
  push32((uint32_t)(EDX));
  /* 105e74d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e74db push eax */
  push32((uint32_t)(EAX));
  /* 105e74dc call 0x105eaba0 */
  push32(0x105e74e1u); f_105eaba0();
  /* 105e74e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e74e4 jmp 0x105e7512 */
  goto L_105e7512;
L_105e74e6:;
  /* 105e74e6 mov ecx, dword ptr [0x106107b4] */
  ECX = (r32((uint32_t)(0x106107b4)));
  /* 105e74ec and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 105e74f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e74f4 je 0x105e74fd */
  if (C.zf) goto L_105e74fd;
  /* 105e74f6 mov eax, 1 */
  EAX = (0x1u);
  /* 105e74fb jmp 0x105e7512 */
  goto L_105e7512;
L_105e74fd:;
  /* 105e74fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7500 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e7503 push edx */
  push32((uint32_t)(EDX));
  /* 105e7504 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7506 mov eax, dword ptr [0x10612164] */
  EAX = (r32((uint32_t)(0x10612164)));
  /* 105e750b push eax */
  push32((uint32_t)(EAX));
  /* 105e750c call dword ptr [0x10613270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613270))), 0x105e7512u);
L_105e7512:;
  /* 105e7512 mov esp, ebp */
  ESP = (EBP);
  /* 105e7514 pop ebp */
  EBP = (pop32());
  /* 105e7515 ret  */
  ESPCHK(0x105e7490u, _esp0);
  ESP += 4; return;
}

/* FUN_10007520 @ 0x105e7520 (227 bytes, 80 insns) */
void f_105e7520(void) {
  FTRACE(0x105e7520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e7520 push ebp */
  push32((uint32_t)(EBP));
  /* 105e7521 mov ebp, esp */
  EBP = (ESP);
  /* 105e7523 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7524 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7527 push eax */
  push32((uint32_t)(EAX));
  /* 105e7528 call 0x105e7490 */
  push32(0x105e752du); f_105e7490();
  /* 105e752d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7530 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e7532 jne 0x105e753b */
  if (!C.zf) goto L_105e753b;
  /* 105e7534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e7536 jmp 0x105e75ff */
  goto L_105e75ff;
L_105e753b:;
  /* 105e753b push 9 */
  push32((uint32_t)(0x9u));
  /* 105e753d call 0x105ea240 */
  push32(0x105e7542u); f_105ea240();
  /* 105e7542 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7545 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7548 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e754b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105e754e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7551 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105e7554 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e7559 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e755c je 0x105e7580 */
  if (C.zf) goto L_105e7580;
  /* 105e755e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7561 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7565 je 0x105e7580 */
  if (C.zf) goto L_105e7580;
  /* 105e7567 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e756a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105e756d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e7572 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7575 je 0x105e7580 */
  if (C.zf) goto L_105e7580;
  /* 105e7577 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e757a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e757e jne 0x105e75f3 */
  if (!C.zf) goto L_105e75f3;
L_105e7580:;
  /* 105e7580 push 1 */
  push32((uint32_t)(0x1u));
  /* 105e7582 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e7585 push edx */
  push32((uint32_t)(EDX));
  /* 105e7586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7589 push eax */
  push32((uint32_t)(EAX));
  /* 105e758a call 0x105e7440 */
  push32(0x105e758fu); f_105e7440();
  /* 105e758f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7592 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e7594 je 0x105e75f3 */
  if (C.zf) goto L_105e75f3;
  /* 105e7596 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7599 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105e759c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e759f jne 0x105e75f3 */
  if (!C.zf) goto L_105e75f3;
  /* 105e75a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e75a4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 105e75a7 cmp ecx, dword ptr [0x1060ea90] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1060ea90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e75ad jg 0x105e75f3 */
  if ((!C.zf&&C.sf==C.of)) goto L_105e75f3;
  /* 105e75af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e75b3 je 0x105e75c0 */
  if (C.zf) goto L_105e75c0;
  /* 105e75b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e75b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e75bb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 105e75be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105e75c0:;
  /* 105e75c0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e75c4 je 0x105e75d1 */
  if (C.zf) goto L_105e75d1;
  /* 105e75c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105e75c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e75cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105e75cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105e75d1:;
  /* 105e75d1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e75d5 je 0x105e75e2 */
  if (C.zf) goto L_105e75e2;
  /* 105e75d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e75da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e75dd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105e75e0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105e75e2:;
  /* 105e75e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 105e75e4 call 0x105ea2e0 */
  push32(0x105e75e9u); f_105ea2e0();
  /* 105e75e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e75ec mov eax, 1 */
  EAX = (0x1u);
  /* 105e75f1 jmp 0x105e75ff */
  goto L_105e75ff;
L_105e75f3:;
  /* 105e75f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 105e75f5 call 0x105ea2e0 */
  push32(0x105e75fau); f_105ea2e0();
  /* 105e75fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e75fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105e75ff:;
  /* 105e75ff mov esp, ebp */
  ESP = (EBP);
  /* 105e7601 pop ebp */
  EBP = (pop32());
  /* 105e7602 ret  */
  ESPCHK(0x105e7520u, _esp0);
  ESP += 4; return;
}

/* FUN_10007610 @ 0x105e7610 (28 bytes, 11 insns) */
void f_105e7610(void) {
  FTRACE(0x105e7610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e7610 push ebp */
  push32((uint32_t)(EBP));
  /* 105e7611 mov ebp, esp */
  EBP = (ESP);
  /* 105e7613 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7614 mov eax, dword ptr [0x10612170] */
  EAX = (r32((uint32_t)(0x10612170)));
  /* 105e7619 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e761c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e761f mov dword ptr [0x10612170], ecx */
  w32((uint32_t)(0x10612170), (ECX));
  /* 105e7625 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7628 mov esp, ebp */
  ESP = (EBP);
  /* 105e762a pop ebp */
  EBP = (pop32());
  /* 105e762b ret  */
  ESPCHK(0x105e7610u, _esp0);
  ESP += 4; return;
}

/* FUN_10007630 @ 0x105e7630 (362 bytes, 116 insns) */
void f_105e7630(void) {
  FTRACE(0x105e7630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e7630 push ebp */
  push32((uint32_t)(EBP));
  /* 105e7631 mov ebp, esp */
  EBP = (ESP);
  /* 105e7633 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e7636 push ebx */
  push32((uint32_t)(EBX));
  /* 105e7637 push esi */
  push32((uint32_t)(ESI));
  /* 105e7638 push edi */
  push32((uint32_t)(EDI));
  /* 105e7639 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e763d jne 0x105e766a */
  if (!C.zf) goto L_105e766a;
L_105e763f:;
  /* 105e763f push 0x1060c248 */
  push32((uint32_t)(0x1060c248u));
  /* 105e7644 push 0x1060bd60 */
  push32((uint32_t)(0x1060bd60u));
  /* 105e7649 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e764b push 0 */
  push32((uint32_t)(0x0u));
  /* 105e764d push 0 */
  push32((uint32_t)(0x0u));
  /* 105e764f push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7651 call 0x105e3e30 */
  push32(0x105e7656u); f_105e3e30();
  /* 105e7656 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7659 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e765c jne 0x105e765f */
  if (!C.zf) goto L_105e765f;
  /* 105e765e int3  */
  x86_unimpl("int3 @ 0x105e765e");
L_105e765f:;
  /* 105e765f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e7661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e7663 jne 0x105e763f */
  if (!C.zf) goto L_105e763f;
  /* 105e7665 jmp 0x105e7793 */
  goto L_105e7793;
L_105e766a:;
  /* 105e766a push 9 */
  push32((uint32_t)(0x9u));
  /* 105e766c call 0x105ea240 */
  push32(0x105e7671u); f_105ea240();
  /* 105e7671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7674 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7677 mov edx, dword ptr [0x10610800] */
  EDX = (r32((uint32_t)(0x10610800)));
  /* 105e767d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105e767f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105e7686 jmp 0x105e7691 */
  goto L_105e7691;
L_105e7688:;
  /* 105e7688 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e768b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e768e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105e7691:;
  /* 105e7691 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7695 jge 0x105e76b5 */
  if ((C.sf==C.of)) goto L_105e76b5;
  /* 105e7697 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e769a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e769d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 105e76a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e76a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e76ab mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 105e76b3 jmp 0x105e7688 */
  goto L_105e7688;
L_105e76b5:;
  /* 105e76b5 mov edx, dword ptr [0x10610800] */
  EDX = (r32((uint32_t)(0x10610800)));
  /* 105e76bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105e76be jmp 0x105e76c8 */
  goto L_105e76c8;
L_105e76c0:;
  /* 105e76c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e76c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105e76c5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105e76c8:;
  /* 105e76c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e76cc je 0x105e7771 */
  if (C.zf) goto L_105e7771;
  /* 105e76d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e76d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105e76d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e76dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e76df jl 0x105e7747 */
  if ((C.sf!=C.of)) goto L_105e7747;
  /* 105e76e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e76e4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105e76e7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105e76ed cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e76f0 jge 0x105e7747 */
  if ((C.sf==C.of)) goto L_105e7747;
  /* 105e76f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e76f5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105e76f8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105e76fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7701 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 105e7705 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7708 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e770b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105e770e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105e7714 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7717 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 105e771b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e771e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105e7721 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e7726 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7729 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 105e772d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e7730 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7733 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e7736 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 105e7739 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e773e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7741 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 105e7745 jmp 0x105e776c */
  goto L_105e776c;
L_105e7747:;
  /* 105e7747 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e774a push edx */
  push32((uint32_t)(EDX));
  /* 105e774b push 0x1060c224 */
  push32((uint32_t)(0x1060c224u));
  /* 105e7750 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7752 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7754 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7756 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7758 call 0x105e3e30 */
  push32(0x105e775du); f_105e3e30();
  /* 105e775d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7760 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7763 jne 0x105e7766 */
  if (!C.zf) goto L_105e7766;
  /* 105e7765 int3  */
  x86_unimpl("int3 @ 0x105e7765");
L_105e7766:;
  /* 105e7766 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e7768 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e776a jne 0x105e7747 */
  if (!C.zf) goto L_105e7747;
L_105e776c:;
  /* 105e776c jmp 0x105e76c0 */
  goto L_105e76c0;
L_105e7771:;
  /* 105e7771 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7774 mov edx, dword ptr [0x10610808] */
  EDX = (r32((uint32_t)(0x10610808)));
  /* 105e777a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 105e777d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7780 mov ecx, dword ptr [0x106107fc] */
  ECX = (r32((uint32_t)(0x106107fc)));
  /* 105e7786 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 105e7789 push 9 */
  push32((uint32_t)(0x9u));
  /* 105e778b call 0x105ea2e0 */
  push32(0x105e7790u); f_105ea2e0();
  /* 105e7790 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e7793:;
  /* 105e7793 pop edi */
  EDI = (pop32());
  /* 105e7794 pop esi */
  ESI = (pop32());
  /* 105e7795 pop ebx */
  EBX = (pop32());
  /* 105e7796 mov esp, ebp */
  ESP = (EBP);
  /* 105e7798 pop ebp */
  EBP = (pop32());
  /* 105e7799 ret  */
  ESPCHK(0x105e7630u, _esp0);
  ESP += 4; return;
}

/* FUN_100077a0 @ 0x105e77a0 (291 bytes, 95 insns) */
void f_105e77a0(void) {
  FTRACE(0x105e77a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e77a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e77a1 mov ebp, esp */
  EBP = (ESP);
  /* 105e77a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e77a6 push ebx */
  push32((uint32_t)(EBX));
  /* 105e77a7 push esi */
  push32((uint32_t)(ESI));
  /* 105e77a8 push edi */
  push32((uint32_t)(EDI));
  /* 105e77a9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105e77b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e77b4 je 0x105e77c2 */
  if (C.zf) goto L_105e77c2;
  /* 105e77b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e77ba je 0x105e77c2 */
  if (C.zf) goto L_105e77c2;
  /* 105e77bc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e77c0 jne 0x105e77f0 */
  if (!C.zf) goto L_105e77f0;
L_105e77c2:;
  /* 105e77c2 push 0x1060c270 */
  push32((uint32_t)(0x1060c270u));
  /* 105e77c7 push 0x1060bd60 */
  push32((uint32_t)(0x1060bd60u));
  /* 105e77cc push 0 */
  push32((uint32_t)(0x0u));
  /* 105e77ce push 0 */
  push32((uint32_t)(0x0u));
  /* 105e77d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e77d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e77d4 call 0x105e3e30 */
  push32(0x105e77d9u); f_105e3e30();
  /* 105e77d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e77dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e77df jne 0x105e77e2 */
  if (!C.zf) goto L_105e77e2;
  /* 105e77e1 int3  */
  x86_unimpl("int3 @ 0x105e77e1");
L_105e77e2:;
  /* 105e77e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e77e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e77e6 jne 0x105e77c2 */
  if (!C.zf) goto L_105e77c2;
  /* 105e77e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e77eb jmp 0x105e78bc */
  goto L_105e78bc;
L_105e77f0:;
  /* 105e77f0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105e77f7 jmp 0x105e7802 */
  goto L_105e7802;
L_105e77f9:;
  /* 105e77f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e77fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e77ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105e7802:;
  /* 105e7802 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7806 jge 0x105e788c */
  if ((C.sf==C.of)) goto L_105e788c;
  /* 105e780c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e780f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e7812 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7815 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105e7818 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 105e781c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e7820 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7823 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7826 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 105e782a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e782d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e7830 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7833 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105e7836 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 105e783a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e783e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7841 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7844 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 105e7848 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e784b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e784e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7853 jne 0x105e7862 */
  if (!C.zf) goto L_105e7862;
  /* 105e7855 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7858 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e785b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7860 je 0x105e7887 */
  if (C.zf) goto L_105e7887;
L_105e7862:;
  /* 105e7862 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7866 je 0x105e7887 */
  if (C.zf) goto L_105e7887;
  /* 105e7868 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e786c jne 0x105e7880 */
  if (!C.zf) goto L_105e7880;
  /* 105e786e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7872 jne 0x105e7887 */
  if (!C.zf) goto L_105e7887;
  /* 105e7874 mov eax, dword ptr [0x1060ea8c] */
  EAX = (r32((uint32_t)(0x1060ea8c)));
  /* 105e7879 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 105e787c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e787e je 0x105e7887 */
  if (C.zf) goto L_105e7887;
L_105e7880:;
  /* 105e7880 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_105e7887:;
  /* 105e7887 jmp 0x105e77f9 */
  goto L_105e77f9;
L_105e788c:;
  /* 105e788c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e788f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e7892 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 105e7895 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e7898 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e789b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 105e789e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e78a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e78a4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 105e78a7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e78aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e78ad mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 105e78b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e78b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105e78b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105e78bc:;
  /* 105e78bc pop edi */
  EDI = (pop32());
  /* 105e78bd pop esi */
  ESI = (pop32());
  /* 105e78be pop ebx */
  EBX = (pop32());
  /* 105e78bf mov esp, ebp */
  ESP = (EBP);
  /* 105e78c1 pop ebp */
  EBP = (pop32());
  /* 105e78c2 ret  */
  ESPCHK(0x105e77a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078d0 @ 0x105e78d0 (697 bytes, 253 insns) */
void f_105e78d0(void) {
  FTRACE(0x105e78d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e78d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e78d1 mov ebp, esp */
  EBP = (ESP);
  /* 105e78d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e78d6 push ebx */
  push32((uint32_t)(EBX));
  /* 105e78d7 push esi */
  push32((uint32_t)(ESI));
  /* 105e78d8 push edi */
  push32((uint32_t)(EDI));
  /* 105e78d9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105e78e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 105e78e2 call 0x105ea240 */
  push32(0x105e78e7u); f_105ea240();
  /* 105e78e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e78ea:;
  /* 105e78ea push 0x1060c368 */
  push32((uint32_t)(0x1060c368u));
  /* 105e78ef push 0x1060bd60 */
  push32((uint32_t)(0x1060bd60u));
  /* 105e78f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e78f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e78f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e78fa push 0 */
  push32((uint32_t)(0x0u));
  /* 105e78fc call 0x105e3e30 */
  push32(0x105e7901u); f_105e3e30();
  /* 105e7901 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7904 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7907 jne 0x105e790a */
  if (!C.zf) goto L_105e790a;
  /* 105e7909 int3  */
  x86_unimpl("int3 @ 0x105e7909");
L_105e790a:;
  /* 105e790a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e790c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e790e jne 0x105e78ea */
  if (!C.zf) goto L_105e78ea;
  /* 105e7910 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7914 je 0x105e791e */
  if (C.zf) goto L_105e791e;
  /* 105e7916 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7919 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105e791b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105e791e:;
  /* 105e791e mov eax, dword ptr [0x10610800] */
  EAX = (r32((uint32_t)(0x10610800)));
  /* 105e7923 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e7926 jmp 0x105e7930 */
  goto L_105e7930;
L_105e7928:;
  /* 105e7928 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e792b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105e792d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105e7930:;
  /* 105e7930 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7934 je 0x105e7b52 */
  if (C.zf) goto L_105e7b52;
  /* 105e793a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e793d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7940 je 0x105e7b52 */
  if (C.zf) goto L_105e7b52;
  /* 105e7946 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7949 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105e794c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105e7952 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7955 je 0x105e7984 */
  if (C.zf) goto L_105e7984;
  /* 105e7957 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e795a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105e795d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105e7963 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e7965 je 0x105e7984 */
  if (C.zf) goto L_105e7984;
  /* 105e7967 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e796a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105e796d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e7972 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7975 jne 0x105e7989 */
  if (!C.zf) goto L_105e7989;
  /* 105e7977 mov ecx, dword ptr [0x1060ea8c] */
  ECX = (r32((uint32_t)(0x1060ea8c)));
  /* 105e797d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 105e7980 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e7982 jne 0x105e7989 */
  if (!C.zf) goto L_105e7989;
L_105e7984:;
  /* 105e7984 jmp 0x105e7b4d */
  goto L_105e7b4d;
L_105e7989:;
  /* 105e7989 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e798c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7990 je 0x105e7a02 */
  if (C.zf) goto L_105e7a02;
  /* 105e7992 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7994 push 1 */
  push32((uint32_t)(0x1u));
  /* 105e7996 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7999 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105e799c push ecx */
  push32((uint32_t)(ECX));
  /* 105e799d call 0x105e7440 */
  push32(0x105e79a2u); f_105e7440();
  /* 105e79a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e79a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e79a7 jne 0x105e79d3 */
  if (!C.zf) goto L_105e79d3;
L_105e79a9:;
  /* 105e79a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e79ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 105e79af push eax */
  push32((uint32_t)(EAX));
  /* 105e79b0 push 0x1060c354 */
  push32((uint32_t)(0x1060c354u));
  /* 105e79b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e79b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e79b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e79bb push 0 */
  push32((uint32_t)(0x0u));
  /* 105e79bd call 0x105e3e30 */
  push32(0x105e79c2u); f_105e3e30();
  /* 105e79c2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e79c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e79c8 jne 0x105e79cb */
  if (!C.zf) goto L_105e79cb;
  /* 105e79ca int3  */
  x86_unimpl("int3 @ 0x105e79ca");
L_105e79cb:;
  /* 105e79cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105e79cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e79cf jne 0x105e79a9 */
  if (!C.zf) goto L_105e79a9;
  /* 105e79d1 jmp 0x105e7a02 */
  goto L_105e7a02;
L_105e79d3:;
  /* 105e79d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e79d6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 105e79d9 push eax */
  push32((uint32_t)(EAX));
  /* 105e79da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e79dd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105e79e0 push edx */
  push32((uint32_t)(EDX));
  /* 105e79e1 push 0x1060c348 */
  push32((uint32_t)(0x1060c348u));
  /* 105e79e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e79e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e79ea push 0 */
  push32((uint32_t)(0x0u));
  /* 105e79ec push 0 */
  push32((uint32_t)(0x0u));
  /* 105e79ee call 0x105e3e30 */
  push32(0x105e79f3u); f_105e3e30();
  /* 105e79f3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e79f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e79f9 jne 0x105e79fc */
  if (!C.zf) goto L_105e79fc;
  /* 105e79fb int3  */
  x86_unimpl("int3 @ 0x105e79fb");
L_105e79fc:;
  /* 105e79fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e79fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e7a00 jne 0x105e79d3 */
  if (!C.zf) goto L_105e79d3;
L_105e7a02:;
  /* 105e7a02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7a05 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 105e7a08 push edx */
  push32((uint32_t)(EDX));
  /* 105e7a09 push 0x1060c340 */
  push32((uint32_t)(0x1060c340u));
  /* 105e7a0e push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7a16 call 0x105e3e30 */
  push32(0x105e7a1bu); f_105e3e30();
  /* 105e7a1b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7a1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7a21 jne 0x105e7a24 */
  if (!C.zf) goto L_105e7a24;
  /* 105e7a23 int3  */
  x86_unimpl("int3 @ 0x105e7a23");
L_105e7a24:;
  /* 105e7a24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e7a26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e7a28 jne 0x105e7a02 */
  if (!C.zf) goto L_105e7a02;
  /* 105e7a2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7a2d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105e7a30 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105e7a36 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7a39 jne 0x105e7aac */
  if (!C.zf) goto L_105e7aac;
L_105e7a3b:;
  /* 105e7a3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7a3e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105e7a41 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7a42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7a45 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105e7a48 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105e7a4b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e7a50 push eax */
  push32((uint32_t)(EAX));
  /* 105e7a51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7a54 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7a57 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7a58 push 0x1060c30c */
  push32((uint32_t)(0x1060c30cu));
  /* 105e7a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7a61 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7a65 call 0x105e3e30 */
  push32(0x105e7a6au); f_105e3e30();
  /* 105e7a6a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7a6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7a70 jne 0x105e7a73 */
  if (!C.zf) goto L_105e7a73;
  /* 105e7a72 int3  */
  x86_unimpl("int3 @ 0x105e7a72");
L_105e7a73:;
  /* 105e7a73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e7a75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e7a77 jne 0x105e7a3b */
  if (!C.zf) goto L_105e7a3b;
  /* 105e7a79 cmp dword ptr [0x10612170], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10612170))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7a80 je 0x105e7a9b */
  if (C.zf) goto L_105e7a9b;
  /* 105e7a82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7a85 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105e7a88 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7a89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7a8c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7a8f push edx */
  push32((uint32_t)(EDX));
  /* 105e7a90 call dword ptr [0x10612170] */
  call_ind((uint32_t)(r32((uint32_t)(0x10612170))), 0x105e7a96u);
  /* 105e7a96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7a99 jmp 0x105e7aa7 */
  goto L_105e7aa7;
L_105e7a9b:;
  /* 105e7a9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7a9e push eax */
  push32((uint32_t)(EAX));
  /* 105e7a9f call 0x105e7b90 */
  push32(0x105e7aa4u); f_105e7b90();
  /* 105e7aa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e7aa7:;
  /* 105e7aa7 jmp 0x105e7b4d */
  goto L_105e7b4d;
L_105e7aac:;
  /* 105e7aac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7aaf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7ab3 jne 0x105e7af2 */
  if (!C.zf) goto L_105e7af2;
L_105e7ab5:;
  /* 105e7ab5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7ab8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105e7abb push eax */
  push32((uint32_t)(EAX));
  /* 105e7abc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7abf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7ac2 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7ac3 push 0x1060c2e4 */
  push32((uint32_t)(0x1060c2e4u));
  /* 105e7ac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7aca push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7acc push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7ace push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7ad0 call 0x105e3e30 */
  push32(0x105e7ad5u); f_105e3e30();
  /* 105e7ad5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7ad8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7adb jne 0x105e7ade */
  if (!C.zf) goto L_105e7ade;
  /* 105e7add int3  */
  x86_unimpl("int3 @ 0x105e7add");
L_105e7ade:;
  /* 105e7ade xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e7ae0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e7ae2 jne 0x105e7ab5 */
  if (!C.zf) goto L_105e7ab5;
  /* 105e7ae4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7ae7 push eax */
  push32((uint32_t)(EAX));
  /* 105e7ae8 call 0x105e7b90 */
  push32(0x105e7aedu); f_105e7b90();
  /* 105e7aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7af0 jmp 0x105e7b4d */
  goto L_105e7b4d;
L_105e7af2:;
  /* 105e7af2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7af5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105e7af8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105e7afe cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7b01 jne 0x105e7b4d */
  if (!C.zf) goto L_105e7b4d;
L_105e7b03:;
  /* 105e7b03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7b06 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105e7b09 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7b0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7b0d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105e7b10 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105e7b13 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e7b18 push eax */
  push32((uint32_t)(EAX));
  /* 105e7b19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7b1c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7b1f push ecx */
  push32((uint32_t)(ECX));
  /* 105e7b20 push 0x1060c2b0 */
  push32((uint32_t)(0x1060c2b0u));
  /* 105e7b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7b2d call 0x105e3e30 */
  push32(0x105e7b32u); f_105e3e30();
  /* 105e7b32 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7b35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7b38 jne 0x105e7b3b */
  if (!C.zf) goto L_105e7b3b;
  /* 105e7b3a int3  */
  x86_unimpl("int3 @ 0x105e7b3a");
L_105e7b3b:;
  /* 105e7b3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e7b3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e7b3f jne 0x105e7b03 */
  if (!C.zf) goto L_105e7b03;
  /* 105e7b41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7b44 push eax */
  push32((uint32_t)(EAX));
  /* 105e7b45 call 0x105e7b90 */
  push32(0x105e7b4au); f_105e7b90();
  /* 105e7b4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e7b4d:;
  /* 105e7b4d jmp 0x105e7928 */
  goto L_105e7928;
L_105e7b52:;
  /* 105e7b52 push 9 */
  push32((uint32_t)(0x9u));
  /* 105e7b54 call 0x105ea2e0 */
  push32(0x105e7b59u); f_105ea2e0();
  /* 105e7b59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e7b5c:;
  /* 105e7b5c push 0x1060c298 */
  push32((uint32_t)(0x1060c298u));
  /* 105e7b61 push 0x1060bd60 */
  push32((uint32_t)(0x1060bd60u));
  /* 105e7b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7b68 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7b6c push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7b6e call 0x105e3e30 */
  push32(0x105e7b73u); f_105e3e30();
  /* 105e7b73 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7b76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7b79 jne 0x105e7b7c */
  if (!C.zf) goto L_105e7b7c;
  /* 105e7b7b int3  */
  x86_unimpl("int3 @ 0x105e7b7b");
L_105e7b7c:;
  /* 105e7b7c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105e7b7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e7b80 jne 0x105e7b5c */
  if (!C.zf) goto L_105e7b5c;
  /* 105e7b82 pop edi */
  EDI = (pop32());
  /* 105e7b83 pop esi */
  ESI = (pop32());
  /* 105e7b84 pop ebx */
  EBX = (pop32());
  /* 105e7b85 mov esp, ebp */
  ESP = (EBP);
  /* 105e7b87 pop ebp */
  EBP = (pop32());
  /* 105e7b88 ret  */
  ESPCHK(0x105e78d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b90 @ 0x105e7b90 (276 bytes, 89 insns) */
void f_105e7b90(void) {
  FTRACE(0x105e7b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e7b90 push ebp */
  push32((uint32_t)(EBP));
  /* 105e7b91 mov ebp, esp */
  EBP = (ESP);
  /* 105e7b93 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e7b96 push ebx */
  push32((uint32_t)(EBX));
  /* 105e7b97 push esi */
  push32((uint32_t)(ESI));
  /* 105e7b98 push edi */
  push32((uint32_t)(EDI));
  /* 105e7b99 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 105e7ba0 jmp 0x105e7bab */
  goto L_105e7bab;
L_105e7ba2:;
  /* 105e7ba2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105e7ba5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7ba8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_105e7bab:;
  /* 105e7bab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7bae cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7bb2 jge 0x105e7bbf */
  if ((C.sf==C.of)) goto L_105e7bbf;
  /* 105e7bb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7bb7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105e7bba mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 105e7bbd jmp 0x105e7bc6 */
  goto L_105e7bc6;
L_105e7bbf:;
  /* 105e7bbf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_105e7bc6:;
  /* 105e7bc6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105e7bc9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7bcc jge 0x105e7c6c */
  if ((C.sf==C.of)) goto L_105e7c6c;
  /* 105e7bd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7bd5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7bd8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 105e7bdb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 105e7bde cmp dword ptr [0x1060f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1060f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7be5 jle 0x105e7c03 */
  if ((C.zf||C.sf!=C.of)) goto L_105e7c03;
  /* 105e7be7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 105e7bec mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 105e7bef and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105e7bf5 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7bf6 call 0x105ec750 */
  push32(0x105e7bfbu); f_105ec750();
  /* 105e7bfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7bfe mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 105e7c01 jmp 0x105e7c20 */
  goto L_105e7c20;
L_105e7c03:;
  /* 105e7c03 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105e7c06 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105e7c0c mov eax, dword ptr [0x1060ede8] */
  EAX = (r32((uint32_t)(0x1060ede8)));
  /* 105e7c11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105e7c13 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 105e7c17 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 105e7c1d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_105e7c20:;
  /* 105e7c20 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7c24 je 0x105e7c34 */
  if (C.zf) goto L_105e7c34;
  /* 105e7c26 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105e7c29 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105e7c2f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 105e7c32 jmp 0x105e7c3b */
  goto L_105e7c3b;
L_105e7c34:;
  /* 105e7c34 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_105e7c3b:;
  /* 105e7c3b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105e7c3e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 105e7c41 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 105e7c45 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105e7c48 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105e7c4e push edx */
  push32((uint32_t)(EDX));
  /* 105e7c4f push 0x1060c38c */
  push32((uint32_t)(0x1060c38cu));
  /* 105e7c54 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105e7c57 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e7c5a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 105e7c5e push ecx */
  push32((uint32_t)(ECX));
  /* 105e7c5f call 0x105e39a0 */
  push32(0x105e7c64u); f_105e39a0();
  /* 105e7c64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7c67 jmp 0x105e7ba2 */
  goto L_105e7ba2;
L_105e7c6c:;
  /* 105e7c6c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105e7c6f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_105e7c74:;
  /* 105e7c74 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 105e7c77 push eax */
  push32((uint32_t)(EAX));
  /* 105e7c78 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 105e7c7b push ecx */
  push32((uint32_t)(ECX));
  /* 105e7c7c push 0x1060c37c */
  push32((uint32_t)(0x1060c37cu));
  /* 105e7c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7c87 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7c89 call 0x105e3e30 */
  push32(0x105e7c8eu); f_105e3e30();
  /* 105e7c8e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7c91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7c94 jne 0x105e7c97 */
  if (!C.zf) goto L_105e7c97;
  /* 105e7c96 int3  */
  x86_unimpl("int3 @ 0x105e7c96");
L_105e7c97:;
  /* 105e7c97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e7c99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e7c9b jne 0x105e7c74 */
  if (!C.zf) goto L_105e7c74;
  /* 105e7c9d pop edi */
  EDI = (pop32());
  /* 105e7c9e pop esi */
  ESI = (pop32());
  /* 105e7c9f pop ebx */
  EBX = (pop32());
  /* 105e7ca0 mov esp, ebp */
  ESP = (EBP);
  /* 105e7ca2 pop ebp */
  EBP = (pop32());
  /* 105e7ca3 ret  */
  ESPCHK(0x105e7b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cb0 @ 0x105e7cb0 (116 bytes, 46 insns) */
void f_105e7cb0(void) {
  FTRACE(0x105e7cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e7cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e7cb1 mov ebp, esp */
  EBP = (ESP);
  /* 105e7cb3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e7cb6 push ebx */
  push32((uint32_t)(EBX));
  /* 105e7cb7 push esi */
  push32((uint32_t)(ESI));
  /* 105e7cb8 push edi */
  push32((uint32_t)(EDI));
  /* 105e7cb9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 105e7cbc push eax */
  push32((uint32_t)(EAX));
  /* 105e7cbd call 0x105e7630 */
  push32(0x105e7cc2u); f_105e7630();
  /* 105e7cc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7cc5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7cc9 jne 0x105e7ce4 */
  if (!C.zf) goto L_105e7ce4;
  /* 105e7ccb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7ccf jne 0x105e7ce4 */
  if (!C.zf) goto L_105e7ce4;
  /* 105e7cd1 mov ecx, dword ptr [0x1060ea8c] */
  ECX = (r32((uint32_t)(0x1060ea8c)));
  /* 105e7cd7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 105e7cda test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e7cdc je 0x105e7d1b */
  if (C.zf) goto L_105e7d1b;
  /* 105e7cde cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7ce2 je 0x105e7d1b */
  if (C.zf) goto L_105e7d1b;
L_105e7ce4:;
  /* 105e7ce4 push 0x1060c394 */
  push32((uint32_t)(0x1060c394u));
  /* 105e7ce9 push 0x1060bd60 */
  push32((uint32_t)(0x1060bd60u));
  /* 105e7cee push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7cf6 call 0x105e3e30 */
  push32(0x105e7cfbu); f_105e3e30();
  /* 105e7cfb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7cfe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7d01 jne 0x105e7d04 */
  if (!C.zf) goto L_105e7d04;
  /* 105e7d03 int3  */
  x86_unimpl("int3 @ 0x105e7d03");
L_105e7d04:;
  /* 105e7d04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e7d06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e7d08 jne 0x105e7ce4 */
  if (!C.zf) goto L_105e7ce4;
  /* 105e7d0a push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7d0c call 0x105e78d0 */
  push32(0x105e7d11u); f_105e78d0();
  /* 105e7d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7d14 mov eax, 1 */
  EAX = (0x1u);
  /* 105e7d19 jmp 0x105e7d1d */
  goto L_105e7d1d;
L_105e7d1b:;
  /* 105e7d1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105e7d1d:;
  /* 105e7d1d pop edi */
  EDI = (pop32());
  /* 105e7d1e pop esi */
  ESI = (pop32());
  /* 105e7d1f pop ebx */
  EBX = (pop32());
  /* 105e7d20 mov esp, ebp */
  ESP = (EBP);
  /* 105e7d22 pop ebp */
  EBP = (pop32());
  /* 105e7d23 ret  */
  ESPCHK(0x105e7cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d30 @ 0x105e7d30 (197 bytes, 79 insns) */
void f_105e7d30(void) {
  FTRACE(0x105e7d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e7d30 push ebp */
  push32((uint32_t)(EBP));
  /* 105e7d31 mov ebp, esp */
  EBP = (ESP);
  /* 105e7d33 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7d34 push ebx */
  push32((uint32_t)(EBX));
  /* 105e7d35 push esi */
  push32((uint32_t)(ESI));
  /* 105e7d36 push edi */
  push32((uint32_t)(EDI));
  /* 105e7d37 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7d3b jne 0x105e7d42 */
  if (!C.zf) goto L_105e7d42;
  /* 105e7d3d jmp 0x105e7dee */
  goto L_105e7dee;
L_105e7d42:;
  /* 105e7d42 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105e7d49 jmp 0x105e7d54 */
  goto L_105e7d54;
L_105e7d4b:;
  /* 105e7d4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7d4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7d51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105e7d54:;
  /* 105e7d54 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7d58 jge 0x105e7d9e */
  if ((C.sf==C.of)) goto L_105e7d9e;
L_105e7d5a:;
  /* 105e7d5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7d5d mov edx, dword ptr [ecx*4 + 0x1060ea9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1060ea9c)));
  /* 105e7d64 push edx */
  push32((uint32_t)(EDX));
  /* 105e7d65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7d68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7d6b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 105e7d6f push edx */
  push32((uint32_t)(EDX));
  /* 105e7d70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7d73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7d76 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 105e7d7a push edx */
  push32((uint32_t)(EDX));
  /* 105e7d7b push 0x1060c3f0 */
  push32((uint32_t)(0x1060c3f0u));
  /* 105e7d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7d88 call 0x105e3e30 */
  push32(0x105e7d8du); f_105e3e30();
  /* 105e7d8d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7d90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7d93 jne 0x105e7d96 */
  if (!C.zf) goto L_105e7d96;
  /* 105e7d95 int3  */
  x86_unimpl("int3 @ 0x105e7d95");
L_105e7d96:;
  /* 105e7d96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e7d98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e7d9a jne 0x105e7d5a */
  if (!C.zf) goto L_105e7d5a;
  /* 105e7d9c jmp 0x105e7d4b */
  goto L_105e7d4b;
L_105e7d9e:;
  /* 105e7d9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7da1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 105e7da4 push edx */
  push32((uint32_t)(EDX));
  /* 105e7da5 push 0x1060c3cc */
  push32((uint32_t)(0x1060c3ccu));
  /* 105e7daa push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7dac push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7dae push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7db0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7db2 call 0x105e3e30 */
  push32(0x105e7db7u); f_105e3e30();
  /* 105e7db7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7dba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7dbd jne 0x105e7dc0 */
  if (!C.zf) goto L_105e7dc0;
  /* 105e7dbf int3  */
  x86_unimpl("int3 @ 0x105e7dbf");
L_105e7dc0:;
  /* 105e7dc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e7dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e7dc4 jne 0x105e7d9e */
  if (!C.zf) goto L_105e7d9e;
L_105e7dc6:;
  /* 105e7dc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e7dc9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 105e7dcc push edx */
  push32((uint32_t)(EDX));
  /* 105e7dcd push 0x1060c3ac */
  push32((uint32_t)(0x1060c3acu));
  /* 105e7dd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7dd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7dd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7dda call 0x105e3e30 */
  push32(0x105e7ddfu); f_105e3e30();
  /* 105e7ddf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7de2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7de5 jne 0x105e7de8 */
  if (!C.zf) goto L_105e7de8;
  /* 105e7de7 int3  */
  x86_unimpl("int3 @ 0x105e7de7");
L_105e7de8:;
  /* 105e7de8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e7dea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e7dec jne 0x105e7dc6 */
  if (!C.zf) goto L_105e7dc6;
L_105e7dee:;
  /* 105e7dee pop edi */
  EDI = (pop32());
  /* 105e7def pop esi */
  ESI = (pop32());
  /* 105e7df0 pop ebx */
  EBX = (pop32());
  /* 105e7df1 mov esp, ebp */
  ESP = (EBP);
  /* 105e7df3 pop ebp */
  EBP = (pop32());
  /* 105e7df4 ret  */
  ESPCHK(0x105e7d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e00 @ 0x105e7e00 (329 bytes, 102 insns) */
void f_105e7e00(void) {
  FTRACE(0x105e7e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e7e00 push ebp */
  push32((uint32_t)(EBP));
  /* 105e7e01 mov ebp, esp */
  EBP = (ESP);
  /* 105e7e03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e7e06 cmp dword ptr [0x106122d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106122d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7e0d jne 0x105e7e14 */
  if (!C.zf) goto L_105e7e14;
  /* 105e7e0f call 0x105ecff0 */
  push32(0x105e7e14u); f_105ecff0();
L_105e7e14:;
  /* 105e7e14 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105e7e1b mov eax, dword ptr [0x1061079c] */
  EAX = (r32((uint32_t)(0x1061079c)));
  /* 105e7e20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105e7e23:;
  /* 105e7e23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7e26 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105e7e29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e7e2b je 0x105e7e59 */
  if (C.zf) goto L_105e7e59;
  /* 105e7e2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7e30 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105e7e33 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7e36 je 0x105e7e41 */
  if (C.zf) goto L_105e7e41;
  /* 105e7e38 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e7e3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7e3e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105e7e41:;
  /* 105e7e41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7e44 push eax */
  push32((uint32_t)(EAX));
  /* 105e7e45 call 0x105e8cc0 */
  push32(0x105e7e4au); f_105e8cc0();
  /* 105e7e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7e4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7e50 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 105e7e54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105e7e57 jmp 0x105e7e23 */
  goto L_105e7e23;
L_105e7e59:;
  /* 105e7e59 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 105e7e5b push 0x1060c410 */
  push32((uint32_t)(0x1060c410u));
  /* 105e7e60 push 2 */
  push32((uint32_t)(0x2u));
  /* 105e7e62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e7e65 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 105e7e6c push ecx */
  push32((uint32_t)(ECX));
  /* 105e7e6d call 0x105e5e90 */
  push32(0x105e7e72u); f_105e5e90();
  /* 105e7e72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7e75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105e7e78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e7e7b mov dword ptr [0x106107d0], edx */
  w32((uint32_t)(0x106107d0), (EDX));
  /* 105e7e81 cmp dword ptr [0x106107d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106107d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7e88 jne 0x105e7e94 */
  if (!C.zf) goto L_105e7e94;
  /* 105e7e8a push 9 */
  push32((uint32_t)(0x9u));
  /* 105e7e8c call 0x105e3ce0 */
  push32(0x105e7e91u); f_105e3ce0();
  /* 105e7e91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e7e94:;
  /* 105e7e94 mov eax, dword ptr [0x1061079c] */
  EAX = (r32((uint32_t)(0x1061079c)));
  /* 105e7e99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e7e9c jmp 0x105e7ea7 */
  goto L_105e7ea7;
L_105e7e9e:;
  /* 105e7e9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7ea1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7ea4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105e7ea7:;
  /* 105e7ea7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7eaa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105e7ead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e7eaf je 0x105e7f17 */
  if (C.zf) goto L_105e7f17;
  /* 105e7eb1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7eb4 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7eb5 call 0x105e8cc0 */
  push32(0x105e7ebau); f_105e8cc0();
  /* 105e7eba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7ebd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7ec0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105e7ec3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7ec6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105e7ec9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7ecc je 0x105e7f15 */
  if (C.zf) goto L_105e7f15;
  /* 105e7ece push 0x79 */
  push32((uint32_t)(0x79u));
  /* 105e7ed0 push 0x1060c410 */
  push32((uint32_t)(0x1060c410u));
  /* 105e7ed5 push 2 */
  push32((uint32_t)(0x2u));
  /* 105e7ed7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e7eda push ecx */
  push32((uint32_t)(ECX));
  /* 105e7edb call 0x105e5e90 */
  push32(0x105e7ee0u); f_105e5e90();
  /* 105e7ee0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7ee3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e7ee6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105e7ee8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e7eeb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7eee jne 0x105e7efa */
  if (!C.zf) goto L_105e7efa;
  /* 105e7ef0 push 9 */
  push32((uint32_t)(0x9u));
  /* 105e7ef2 call 0x105e3ce0 */
  push32(0x105e7ef7u); f_105e3ce0();
  /* 105e7ef7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e7efa:;
  /* 105e7efa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7efd push ecx */
  push32((uint32_t)(ECX));
  /* 105e7efe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e7f01 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105e7f03 push eax */
  push32((uint32_t)(EAX));
  /* 105e7f04 call 0x105e8e40 */
  push32(0x105e7f09u); f_105e8e40();
  /* 105e7f09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7f0c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e7f0f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7f12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_105e7f15:;
  /* 105e7f15 jmp 0x105e7e9e */
  goto L_105e7e9e;
L_105e7f17:;
  /* 105e7f17 push 2 */
  push32((uint32_t)(0x2u));
  /* 105e7f19 mov edx, dword ptr [0x1061079c] */
  EDX = (r32((uint32_t)(0x1061079c)));
  /* 105e7f1f push edx */
  push32((uint32_t)(EDX));
  /* 105e7f20 call 0x105e6920 */
  push32(0x105e7f25u); f_105e6920();
  /* 105e7f25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7f28 mov dword ptr [0x1061079c], 0 */
  w32((uint32_t)(0x1061079c), (0x0u));
  /* 105e7f32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e7f35 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105e7f3b mov dword ptr [0x106122c0], 1 */
  w32((uint32_t)(0x106122c0), (0x1u));
  /* 105e7f45 mov esp, ebp */
  ESP = (EBP);
  /* 105e7f47 pop ebp */
  EBP = (pop32());
  /* 105e7f48 ret  */
  ESPCHK(0x105e7e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f50 @ 0x105e7f50 (216 bytes, 69 insns) */
void f_105e7f50(void) {
  FTRACE(0x105e7f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e7f50 push ebp */
  push32((uint32_t)(EBP));
  /* 105e7f51 mov ebp, esp */
  EBP = (ESP);
  /* 105e7f53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e7f56 cmp dword ptr [0x106122d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106122d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7f5d jne 0x105e7f64 */
  if (!C.zf) goto L_105e7f64;
  /* 105e7f5f call 0x105ecff0 */
  push32(0x105e7f64u); f_105ecff0();
L_105e7f64:;
  /* 105e7f64 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 105e7f69 push 0x1061080c */
  push32((uint32_t)(0x1061080cu));
  /* 105e7f6e push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7f70 call dword ptr [0x10613228] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613228))), 0x105e7f76u);
  /* 105e7f76 mov dword ptr [0x106107e0], 0x1061080c */
  w32((uint32_t)(0x106107e0), (0x1061080cu));
  /* 105e7f80 mov eax, dword ptr [0x106122ec] */
  EAX = (r32((uint32_t)(0x106122ec)));
  /* 105e7f85 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105e7f88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e7f8a jne 0x105e7f97 */
  if (!C.zf) goto L_105e7f97;
  /* 105e7f8c mov edx, dword ptr [0x106107e0] */
  EDX = (r32((uint32_t)(0x106107e0)));
  /* 105e7f92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105e7f95 jmp 0x105e7f9f */
  goto L_105e7f9f;
L_105e7f97:;
  /* 105e7f97 mov eax, dword ptr [0x106122ec] */
  EAX = (r32((uint32_t)(0x106122ec)));
  /* 105e7f9c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_105e7f9f:;
  /* 105e7f9f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105e7fa2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105e7fa5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 105e7fa8 push edx */
  push32((uint32_t)(EDX));
  /* 105e7fa9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 105e7fac push eax */
  push32((uint32_t)(EAX));
  /* 105e7fad push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7faf push 0 */
  push32((uint32_t)(0x0u));
  /* 105e7fb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e7fb4 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7fb5 call 0x105e8030 */
  push32(0x105e7fbau); f_105e8030();
  /* 105e7fba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7fbd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 105e7fc2 push 0x1060c41c */
  push32((uint32_t)(0x1060c41cu));
  /* 105e7fc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 105e7fc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e7fcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e7fcf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 105e7fd2 push ecx */
  push32((uint32_t)(ECX));
  /* 105e7fd3 call 0x105e5e90 */
  push32(0x105e7fd8u); f_105e5e90();
  /* 105e7fd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e7fdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105e7fde cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e7fe2 jne 0x105e7fee */
  if (!C.zf) goto L_105e7fee;
  /* 105e7fe4 push 8 */
  push32((uint32_t)(0x8u));
  /* 105e7fe6 call 0x105e3ce0 */
  push32(0x105e7febu); f_105e3ce0();
  /* 105e7feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e7fee:;
  /* 105e7fee lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 105e7ff1 push edx */
  push32((uint32_t)(EDX));
  /* 105e7ff2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 105e7ff5 push eax */
  push32((uint32_t)(EAX));
  /* 105e7ff6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e7ff9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e7ffc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 105e7fff push eax */
  push32((uint32_t)(EAX));
  /* 105e8000 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8003 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8004 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e8007 push edx */
  push32((uint32_t)(EDX));
  /* 105e8008 call 0x105e8030 */
  push32(0x105e800du); f_105e8030();
  /* 105e800d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8010 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e8013 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8016 mov dword ptr [0x106107c4], eax */
  w32((uint32_t)(0x106107c4), (EAX));
  /* 105e801b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e801e mov dword ptr [0x106107c8], ecx */
  w32((uint32_t)(0x106107c8), (ECX));
  /* 105e8024 mov esp, ebp */
  ESP = (EBP);
  /* 105e8026 pop ebp */
  EBP = (pop32());
  /* 105e8027 ret  */
  ESPCHK(0x105e7f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008030 @ 0x105e8030 (1060 bytes, 360 insns) */
void f_105e8030(void) {
  FTRACE(0x105e8030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8030 push ebp */
  push32((uint32_t)(EBP));
  /* 105e8031 mov ebp, esp */
  EBP = (ESP);
  /* 105e8033 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8036 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e8039 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105e803f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105e8042 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 105e8048 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e804b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105e804e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8052 je 0x105e8065 */
  if (C.zf) goto L_105e8065;
  /* 105e8054 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8057 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e805a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105e805c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e805f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8062 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_105e8065:;
  /* 105e8065 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8068 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105e806b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e806e jne 0x105e813d */
  if (!C.zf) goto L_105e813d;
L_105e8074:;
  /* 105e8074 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8077 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e807a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105e807d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8080 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105e8083 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8086 je 0x105e8102 */
  if (C.zf) goto L_105e8102;
  /* 105e8088 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e808b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105e808e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e8090 je 0x105e8102 */
  if (C.zf) goto L_105e8102;
  /* 105e8092 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8095 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e8097 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105e8099 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e809b mov al, byte ptr [edx + 0x10610ce1] */
  AL = (r8((uint32_t)(EDX + 0x10610ce1)));
  /* 105e80a1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105e80a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e80a6 je 0x105e80d7 */
  if (C.zf) goto L_105e80d7;
  /* 105e80a8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e80ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105e80ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e80b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e80b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105e80b5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e80b9 je 0x105e80d7 */
  if (C.zf) goto L_105e80d7;
  /* 105e80bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e80be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e80c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105e80c3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105e80c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e80c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e80cb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 105e80ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e80d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e80d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105e80d7:;
  /* 105e80d7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e80da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105e80dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e80df mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e80e2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105e80e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e80e8 je 0x105e80fd */
  if (C.zf) goto L_105e80fd;
  /* 105e80ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e80ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e80f0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105e80f2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105e80f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e80f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e80fa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_105e80fd:;
  /* 105e80fd jmp 0x105e8074 */
  goto L_105e8074;
L_105e8102:;
  /* 105e8102 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e8105 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105e8107 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e810a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e810d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105e810f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8113 je 0x105e8124 */
  if (C.zf) goto L_105e8124;
  /* 105e8115 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8118 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 105e811b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e811e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8121 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_105e8124:;
  /* 105e8124 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8127 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105e812a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e812d jne 0x105e8138 */
  if (!C.zf) goto L_105e8138;
  /* 105e812f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8132 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8135 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105e8138:;
  /* 105e8138 jmp 0x105e820c */
  goto L_105e820c;
L_105e813d:;
  /* 105e813d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e8140 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105e8142 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8145 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e8148 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105e814a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e814e je 0x105e8163 */
  if (C.zf) goto L_105e8163;
  /* 105e8150 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8153 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8156 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105e8158 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105e815a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e815d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8160 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_105e8163:;
  /* 105e8163 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8166 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105e8168 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 105e816b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e816e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8171 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e8174 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e8177 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105e817d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e817f mov dl, byte ptr [ecx + 0x10610ce1] */
  DL = (r8((uint32_t)(ECX + 0x10610ce1)));
  /* 105e8185 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 105e8188 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e818a je 0x105e81bb */
  if (C.zf) goto L_105e81bb;
  /* 105e818c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e818f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105e8191 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8194 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e8197 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105e8199 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e819d je 0x105e81b2 */
  if (C.zf) goto L_105e81b2;
  /* 105e819f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e81a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e81a5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105e81a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105e81a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e81ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e81af mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_105e81b2:;
  /* 105e81b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e81b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e81b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105e81bb:;
  /* 105e81bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e81be and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105e81c4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e81c7 je 0x105e81e7 */
  if (C.zf) goto L_105e81e7;
  /* 105e81c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e81cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e81d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e81d3 je 0x105e81e7 */
  if (C.zf) goto L_105e81e7;
  /* 105e81d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e81d8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105e81de cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e81e1 jne 0x105e813d */
  if (!C.zf) goto L_105e813d;
L_105e81e7:;
  /* 105e81e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e81ea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105e81f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e81f2 jne 0x105e81ff */
  if (!C.zf) goto L_105e81ff;
  /* 105e81f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e81f7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e81fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e81fd jmp 0x105e820c */
  goto L_105e820c;
L_105e81ff:;
  /* 105e81ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8203 je 0x105e820c */
  if (C.zf) goto L_105e820c;
  /* 105e8205 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8208 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_105e820c:;
  /* 105e820c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_105e8213:;
  /* 105e8213 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8216 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105e8219 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e821b je 0x105e823e */
  if (C.zf) goto L_105e823e;
L_105e821d:;
  /* 105e821d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8220 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105e8223 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8226 je 0x105e8233 */
  if (C.zf) goto L_105e8233;
  /* 105e8228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e822b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105e822e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8231 jne 0x105e823e */
  if (!C.zf) goto L_105e823e;
L_105e8233:;
  /* 105e8233 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8236 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8239 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105e823c jmp 0x105e821d */
  goto L_105e821d;
L_105e823e:;
  /* 105e823e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8241 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105e8244 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e8246 jne 0x105e824d */
  if (!C.zf) goto L_105e824d;
  /* 105e8248 jmp 0x105e842b */
  goto L_105e842b;
L_105e824d:;
  /* 105e824d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8251 je 0x105e8264 */
  if (C.zf) goto L_105e8264;
  /* 105e8253 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8256 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8259 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105e825b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e825e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8261 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_105e8264:;
  /* 105e8264 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105e8267 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105e8269 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e826c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105e826f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_105e8271:;
  /* 105e8271 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 105e8278 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_105e827f:;
  /* 105e827f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8282 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105e8285 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8288 jne 0x105e829e */
  if (!C.zf) goto L_105e829e;
  /* 105e828a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e828d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8290 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105e8293 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e8296 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8299 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105e829c jmp 0x105e827f */
  goto L_105e827f;
L_105e829e:;
  /* 105e829e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e82a1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105e82a4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e82a7 jne 0x105e82fa */
  if (!C.zf) goto L_105e82fa;
  /* 105e82a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e82ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e82ae mov ecx, 2 */
  ECX = (0x2u);
  /* 105e82b3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105e82b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e82b7 jne 0x105e82f2 */
  if (!C.zf) goto L_105e82f2;
  /* 105e82b9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e82bd je 0x105e82df */
  if (C.zf) goto L_105e82df;
  /* 105e82bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e82c2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 105e82c6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e82c9 jne 0x105e82d6 */
  if (!C.zf) goto L_105e82d6;
  /* 105e82cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e82ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e82d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105e82d4 jmp 0x105e82dd */
  goto L_105e82dd;
L_105e82d6:;
  /* 105e82d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_105e82dd:;
  /* 105e82dd jmp 0x105e82e6 */
  goto L_105e82e6;
L_105e82df:;
  /* 105e82df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_105e82e6:;
  /* 105e82e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e82e8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e82ec sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 105e82ef mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_105e82f2:;
  /* 105e82f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e82f5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105e82f7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_105e82fa:;
  /* 105e82fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e82fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e8300 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8303 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105e8306 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e8308 je 0x105e832e */
  if (C.zf) goto L_105e832e;
  /* 105e830a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e830e je 0x105e831f */
  if (C.zf) goto L_105e831f;
  /* 105e8310 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8313 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 105e8316 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8319 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e831c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_105e831f:;
  /* 105e831f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e8322 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105e8324 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8327 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e832a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105e832c jmp 0x105e82fa */
  goto L_105e82fa;
L_105e832e:;
  /* 105e832e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8331 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105e8334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e8336 je 0x105e8354 */
  if (C.zf) goto L_105e8354;
  /* 105e8338 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e833c jne 0x105e8359 */
  if (!C.zf) goto L_105e8359;
  /* 105e833e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8341 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105e8344 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8347 je 0x105e8354 */
  if (C.zf) goto L_105e8354;
  /* 105e8349 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e834c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105e834f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8352 jne 0x105e8359 */
  if (!C.zf) goto L_105e8359;
L_105e8354:;
  /* 105e8354 jmp 0x105e8404 */
  goto L_105e8404;
L_105e8359:;
  /* 105e8359 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e835d je 0x105e83f6 */
  if (C.zf) goto L_105e83f6;
  /* 105e8363 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8367 je 0x105e83bd */
  if (C.zf) goto L_105e83bd;
  /* 105e8369 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e836c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e836e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105e8370 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105e8372 mov cl, byte ptr [eax + 0x10610ce1] */
  CL = (r8((uint32_t)(EAX + 0x10610ce1)));
  /* 105e8378 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105e837b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e837d je 0x105e83a8 */
  if (C.zf) goto L_105e83a8;
  /* 105e837f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8382 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8385 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105e8387 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 105e8389 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e838c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e838f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 105e8392 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8395 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8398 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e839b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e839e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105e83a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e83a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e83a6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105e83a8:;
  /* 105e83a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e83ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e83ae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105e83b0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105e83b2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e83b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e83b8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 105e83bb jmp 0x105e83e9 */
  goto L_105e83e9;
L_105e83bd:;
  /* 105e83bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e83c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e83c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105e83c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105e83c6 mov cl, byte ptr [eax + 0x10610ce1] */
  CL = (r8((uint32_t)(EAX + 0x10610ce1)));
  /* 105e83cc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105e83cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e83d1 je 0x105e83e9 */
  if (C.zf) goto L_105e83e9;
  /* 105e83d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e83d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e83d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105e83dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e83df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105e83e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e83e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e83e7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105e83e9:;
  /* 105e83e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e83ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105e83ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e83f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e83f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105e83f6:;
  /* 105e83f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e83f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e83fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e83ff jmp 0x105e8271 */
  goto L_105e8271;
L_105e8404:;
  /* 105e8404 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8408 je 0x105e8419 */
  if (C.zf) goto L_105e8419;
  /* 105e840a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e840d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 105e8410 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8413 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8416 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_105e8419:;
  /* 105e8419 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e841c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105e841e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8421 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105e8424 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105e8426 jmp 0x105e8213 */
  goto L_105e8213;
L_105e842b:;
  /* 105e842b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e842f je 0x105e8443 */
  if (C.zf) goto L_105e8443;
  /* 105e8431 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8434 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105e843a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e843d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8440 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_105e8443:;
  /* 105e8443 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105e8446 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105e8448 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e844b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105e844e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105e8450 mov esp, ebp */
  ESP = (EBP);
  /* 105e8452 pop ebp */
  EBP = (pop32());
  /* 105e8453 ret  */
  ESPCHK(0x105e8030u, _esp0);
  ESP += 4; return;
}

/* FUN_10008460 @ 0x105e8460 (537 bytes, 173 insns) */
void f_105e8460(void) {
  FTRACE(0x105e8460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8460 push ebp */
  push32((uint32_t)(EBP));
  /* 105e8461 mov ebp, esp */
  EBP = (ESP);
  /* 105e8463 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8466 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 105e846d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 105e8474 cmp dword ptr [0x10610910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e847b jne 0x105e84ba */
  if (!C.zf) goto L_105e84ba;
  /* 105e847d call dword ptr [0x10613284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613284))), 0x105e8483u);
  /* 105e8483 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105e8486 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e848a je 0x105e8498 */
  if (C.zf) goto L_105e8498;
  /* 105e848c mov dword ptr [0x10610910], 1 */
  w32((uint32_t)(0x10610910), (0x1u));
  /* 105e8496 jmp 0x105e84ba */
  goto L_105e84ba;
L_105e8498:;
  /* 105e8498 call dword ptr [0x10613280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613280))), 0x105e849eu);
  /* 105e849e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105e84a1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e84a5 je 0x105e84b3 */
  if (C.zf) goto L_105e84b3;
  /* 105e84a7 mov dword ptr [0x10610910], 2 */
  w32((uint32_t)(0x10610910), (0x2u));
  /* 105e84b1 jmp 0x105e84ba */
  goto L_105e84ba;
L_105e84b3:;
  /* 105e84b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e84b5 jmp 0x105e8675 */
  goto L_105e8675;
L_105e84ba:;
  /* 105e84ba cmp dword ptr [0x10610910], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10610910))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e84c1 jne 0x105e85be */
  if (!C.zf) goto L_105e85be;
  /* 105e84c7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e84cb jne 0x105e84e3 */
  if (!C.zf) goto L_105e84e3;
  /* 105e84cd call dword ptr [0x10613284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613284))), 0x105e84d3u);
  /* 105e84d3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105e84d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e84da jne 0x105e84e3 */
  if (!C.zf) goto L_105e84e3;
  /* 105e84dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e84de jmp 0x105e8675 */
  goto L_105e8675;
L_105e84e3:;
  /* 105e84e3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105e84e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105e84e9:;
  /* 105e84e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e84ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e84ee mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 105e84f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e84f3 je 0x105e8515 */
  if (C.zf) goto L_105e8515;
  /* 105e84f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e84f8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e84fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105e84fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8501 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e8503 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 105e8506 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e8508 jne 0x105e8513 */
  if (!C.zf) goto L_105e8513;
  /* 105e850a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e850d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8510 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105e8513:;
  /* 105e8513 jmp 0x105e84e9 */
  goto L_105e84e9;
L_105e8515:;
  /* 105e8515 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8518 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e851b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 105e851d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8520 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105e8523 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8525 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8527 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8529 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e852b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e852e push edx */
  push32((uint32_t)(EDX));
  /* 105e852f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105e8532 push eax */
  push32((uint32_t)(EAX));
  /* 105e8533 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8535 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8537 call dword ptr [0x1061327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061327c))), 0x105e853du);
  /* 105e853d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105e8540 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8544 je 0x105e8564 */
  if (C.zf) goto L_105e8564;
  /* 105e8546 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 105e8548 push 0x1060c428 */
  push32((uint32_t)(0x1060c428u));
  /* 105e854d push 2 */
  push32((uint32_t)(0x2u));
  /* 105e854f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e8552 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8553 call 0x105e5e90 */
  push32(0x105e8558u); f_105e5e90();
  /* 105e8558 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e855b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105e855e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8562 jne 0x105e8575 */
  if (!C.zf) goto L_105e8575;
L_105e8564:;
  /* 105e8564 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105e8567 push edx */
  push32((uint32_t)(EDX));
  /* 105e8568 call dword ptr [0x10613278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613278))), 0x105e856eu);
  /* 105e856e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e8570 jmp 0x105e8675 */
  goto L_105e8675;
L_105e8575:;
  /* 105e8575 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8577 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8579 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e857c push eax */
  push32((uint32_t)(EAX));
  /* 105e857d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105e8580 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8581 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8584 push edx */
  push32((uint32_t)(EDX));
  /* 105e8585 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105e8588 push eax */
  push32((uint32_t)(EAX));
  /* 105e8589 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e858b push 0 */
  push32((uint32_t)(0x0u));
  /* 105e858d call dword ptr [0x1061327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061327c))), 0x105e8593u);
  /* 105e8593 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e8595 jne 0x105e85ac */
  if (!C.zf) goto L_105e85ac;
  /* 105e8597 push 2 */
  push32((uint32_t)(0x2u));
  /* 105e8599 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105e859c push ecx */
  push32((uint32_t)(ECX));
  /* 105e859d call 0x105e6920 */
  push32(0x105e85a2u); f_105e6920();
  /* 105e85a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e85a5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_105e85ac:;
  /* 105e85ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105e85af push edx */
  push32((uint32_t)(EDX));
  /* 105e85b0 call dword ptr [0x10613278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613278))), 0x105e85b6u);
  /* 105e85b6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105e85b9 jmp 0x105e8675 */
  goto L_105e8675;
L_105e85be:;
  /* 105e85be cmp dword ptr [0x10610910], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10610910))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e85c5 jne 0x105e8673 */
  if (!C.zf) goto L_105e8673;
  /* 105e85cb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e85cf jne 0x105e85e7 */
  if (!C.zf) goto L_105e85e7;
  /* 105e85d1 call dword ptr [0x10613280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613280))), 0x105e85d7u);
  /* 105e85d7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105e85da cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e85de jne 0x105e85e7 */
  if (!C.zf) goto L_105e85e7;
  /* 105e85e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e85e2 jmp 0x105e8675 */
  goto L_105e8675;
L_105e85e7:;
  /* 105e85e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105e85ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105e85ed:;
  /* 105e85ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e85f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105e85f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e85f5 je 0x105e8615 */
  if (C.zf) goto L_105e8615;
  /* 105e85f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e85fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e85fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105e8600 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e8603 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105e8606 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e8608 jne 0x105e8613 */
  if (!C.zf) goto L_105e8613;
  /* 105e860a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e860d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8610 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105e8613:;
  /* 105e8613 jmp 0x105e85ed */
  goto L_105e85ed;
L_105e8615:;
  /* 105e8615 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e8618 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e861b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e861e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105e8621 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 105e8626 push 0x1060c428 */
  push32((uint32_t)(0x1060c428u));
  /* 105e862b push 2 */
  push32((uint32_t)(0x2u));
  /* 105e862d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e8630 push edx */
  push32((uint32_t)(EDX));
  /* 105e8631 call 0x105e5e90 */
  push32(0x105e8636u); f_105e5e90();
  /* 105e8636 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8639 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105e863c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8640 jne 0x105e8650 */
  if (!C.zf) goto L_105e8650;
  /* 105e8642 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105e8645 push eax */
  push32((uint32_t)(EAX));
  /* 105e8646 call dword ptr [0x10613274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613274))), 0x105e864cu);
  /* 105e864c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e864e jmp 0x105e8675 */
  goto L_105e8675;
L_105e8650:;
  /* 105e8650 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e8653 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8654 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105e8657 push edx */
  push32((uint32_t)(EDX));
  /* 105e8658 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e865b push eax */
  push32((uint32_t)(EAX));
  /* 105e865c call 0x105ed020 */
  push32(0x105e8661u); f_105ed020();
  /* 105e8661 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8664 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105e8667 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8668 call dword ptr [0x10613274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613274))), 0x105e866eu);
  /* 105e866e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e8671 jmp 0x105e8675 */
  goto L_105e8675;
L_105e8673:;
  /* 105e8673 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105e8675:;
  /* 105e8675 mov esp, ebp */
  ESP = (EBP);
  /* 105e8677 pop ebp */
  EBP = (pop32());
  /* 105e8678 ret  */
  ESPCHK(0x105e8460u, _esp0);
  ESP += 4; return;
}

/* FUN_10008680 @ 0x105e8680 (77 bytes, 25 insns) */
void f_105e8680(void) {
  FTRACE(0x105e8680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8680 push ebp */
  push32((uint32_t)(EBP));
  /* 105e8681 mov ebp, esp */
  EBP = (ESP);
  /* 105e8683 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8685 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 105e868a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e868c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8690 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 105e8693 push eax */
  push32((uint32_t)(EAX));
  /* 105e8694 call dword ptr [0x106131fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106131fc))), 0x105e869au);
  /* 105e869a mov dword ptr [0x10612164], eax */
  w32((uint32_t)(0x10612164), (EAX));
  /* 105e869f cmp dword ptr [0x10612164], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10612164))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e86a6 jne 0x105e86ac */
  if (!C.zf) goto L_105e86ac;
  /* 105e86a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e86aa jmp 0x105e86cb */
  goto L_105e86cb;
L_105e86ac:;
  /* 105e86ac call 0x105eaae0 */
  push32(0x105e86b1u); f_105eaae0();
  /* 105e86b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e86b3 jne 0x105e86c6 */
  if (!C.zf) goto L_105e86c6;
  /* 105e86b5 mov ecx, dword ptr [0x10612164] */
  ECX = (r32((uint32_t)(0x10612164)));
  /* 105e86bb push ecx */
  push32((uint32_t)(ECX));
  /* 105e86bc call dword ptr [0x106131f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106131f4))), 0x105e86c2u);
  /* 105e86c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e86c4 jmp 0x105e86cb */
  goto L_105e86cb;
L_105e86c6:;
  /* 105e86c6 mov eax, 1 */
  EAX = (0x1u);
L_105e86cb:;
  /* 105e86cb pop ebp */
  EBP = (pop32());
  /* 105e86cc ret  */
  ESPCHK(0x105e8680u, _esp0);
  ESP += 4; return;
}

/* FUN_100086d0 @ 0x105e86d0 (156 bytes, 48 insns) */
void f_105e86d0(void) {
  FTRACE(0x105e86d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e86d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e86d1 mov ebp, esp */
  EBP = (ESP);
  /* 105e86d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e86d6 mov eax, dword ptr [0x10610e08] */
  EAX = (r32((uint32_t)(0x10610e08)));
  /* 105e86db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105e86de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105e86e5 jmp 0x105e86f0 */
  goto L_105e86f0;
L_105e86e7:;
  /* 105e86e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e86ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e86ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105e86f0:;
  /* 105e86f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e86f3 cmp edx, dword ptr [0x10610e04] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10610e04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e86f9 jge 0x105e8746 */
  if ((C.sf==C.of)) goto L_105e8746;
  /* 105e86fb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 105e8700 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 105e8705 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8708 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105e870b push ecx */
  push32((uint32_t)(ECX));
  /* 105e870c call dword ptr [0x10613294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613294))), 0x105e8712u);
  /* 105e8712 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105e8717 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8719 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e871c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 105e871f push eax */
  push32((uint32_t)(EAX));
  /* 105e8720 call dword ptr [0x10613294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613294))), 0x105e8726u);
  /* 105e8726 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8729 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105e872c push edx */
  push32((uint32_t)(EDX));
  /* 105e872d push 0 */
  push32((uint32_t)(0x0u));
  /* 105e872f mov eax, dword ptr [0x10612164] */
  EAX = (r32((uint32_t)(0x10612164)));
  /* 105e8734 push eax */
  push32((uint32_t)(EAX));
  /* 105e8735 call dword ptr [0x10613200] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613200))), 0x105e873bu);
  /* 105e873b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e873e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8741 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105e8744 jmp 0x105e86e7 */
  goto L_105e86e7;
L_105e8746:;
  /* 105e8746 mov edx, dword ptr [0x10610e08] */
  EDX = (r32((uint32_t)(0x10610e08)));
  /* 105e874c push edx */
  push32((uint32_t)(EDX));
  /* 105e874d push 0 */
  push32((uint32_t)(0x0u));
  /* 105e874f mov eax, dword ptr [0x10612164] */
  EAX = (r32((uint32_t)(0x10612164)));
  /* 105e8754 push eax */
  push32((uint32_t)(EAX));
  /* 105e8755 call dword ptr [0x10613200] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613200))), 0x105e875bu);
  /* 105e875b mov ecx, dword ptr [0x10612164] */
  ECX = (r32((uint32_t)(0x10612164)));
  /* 105e8761 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8762 call dword ptr [0x106131f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106131f4))), 0x105e8768u);
  /* 105e8768 mov esp, ebp */
  ESP = (EBP);
  /* 105e876a pop ebp */
  EBP = (pop32());
  /* 105e876b ret  */
  ESPCHK(0x105e86d0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x105e8770 (73 bytes, 19 insns) */
void f_105e8770(void) {
  FTRACE(0x105e8770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8770 push ebp */
  push32((uint32_t)(EBP));
  /* 105e8771 mov ebp, esp */
  EBP = (ESP);
  /* 105e8773 cmp dword ptr [0x106107a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106107a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e877a je 0x105e878e */
  if (C.zf) goto L_105e878e;
  /* 105e877c cmp dword ptr [0x106107a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106107a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8783 jne 0x105e87b7 */
  if (!C.zf) goto L_105e87b7;
  /* 105e8785 cmp dword ptr [0x106107a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106107a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e878c jne 0x105e87b7 */
  if (!C.zf) goto L_105e87b7;
L_105e878e:;
  /* 105e878e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 105e8793 call 0x105e87c0 */
  push32(0x105e8798u); f_105e87c0();
  /* 105e8798 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e879b cmp dword ptr [0x10610914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e87a2 je 0x105e87aa */
  if (C.zf) goto L_105e87aa;
  /* 105e87a4 call dword ptr [0x10610914] */
  call_ind((uint32_t)(r32((uint32_t)(0x10610914))), 0x105e87aau);
L_105e87aa:;
  /* 105e87aa push 0xff */
  push32((uint32_t)(0xffu));
  /* 105e87af call 0x105e87c0 */
  push32(0x105e87b4u); f_105e87c0();
  /* 105e87b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e87b7:;
  /* 105e87b7 pop ebp */
  EBP = (pop32());
  /* 105e87b8 ret  */
  ESPCHK(0x105e8770u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c0 @ 0x105e87c0 (447 bytes, 131 insns) */
void f_105e87c0(void) {
  FTRACE(0x105e87c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e87c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e87c1 mov ebp, esp */
  EBP = (ESP);
  /* 105e87c3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e87c9 push ebx */
  push32((uint32_t)(EBX));
  /* 105e87ca push esi */
  push32((uint32_t)(ESI));
  /* 105e87cb push edi */
  push32((uint32_t)(EDI));
  /* 105e87cc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105e87d3 jmp 0x105e87de */
  goto L_105e87de;
L_105e87d5:;
  /* 105e87d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e87d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e87db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105e87de:;
  /* 105e87de cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e87e2 jae 0x105e87f7 */
  if (!C.cf) goto L_105e87f7;
  /* 105e87e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e87e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e87ea cmp edx, dword ptr [ecx*8 + 0x1060eab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1060eab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e87f1 jne 0x105e87f5 */
  if (!C.zf) goto L_105e87f5;
  /* 105e87f3 jmp 0x105e87f7 */
  goto L_105e87f7;
L_105e87f5:;
  /* 105e87f5 jmp 0x105e87d5 */
  goto L_105e87d5;
L_105e87f7:;
  /* 105e87f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e87fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e87fd cmp ecx, dword ptr [eax*8 + 0x1060eab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1060eab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8804 jne 0x105e8978 */
  if (!C.zf) goto L_105e8978;
  /* 105e880a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8811 je 0x105e8834 */
  if (C.zf) goto L_105e8834;
  /* 105e8813 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8816 mov eax, dword ptr [edx*8 + 0x1060eabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1060eabc)));
  /* 105e881d push eax */
  push32((uint32_t)(EAX));
  /* 105e881e push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8820 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8822 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8824 push 1 */
  push32((uint32_t)(0x1u));
  /* 105e8826 call 0x105e3e30 */
  push32(0x105e882bu); f_105e3e30();
  /* 105e882b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e882e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8831 jne 0x105e8834 */
  if (!C.zf) goto L_105e8834;
  /* 105e8833 int3  */
  x86_unimpl("int3 @ 0x105e8833");
L_105e8834:;
  /* 105e8834 cmp dword ptr [0x106107a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106107a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e883b je 0x105e884f */
  if (C.zf) goto L_105e884f;
  /* 105e883d cmp dword ptr [0x106107a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106107a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8844 jne 0x105e8888 */
  if (!C.zf) goto L_105e8888;
  /* 105e8846 cmp dword ptr [0x106107a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106107a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e884d jne 0x105e8888 */
  if (!C.zf) goto L_105e8888;
L_105e884f:;
  /* 105e884f push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8851 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 105e8854 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8855 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8858 mov eax, dword ptr [edx*8 + 0x1060eabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1060eabc)));
  /* 105e885f push eax */
  push32((uint32_t)(EAX));
  /* 105e8860 call 0x105e8cc0 */
  push32(0x105e8865u); f_105e8cc0();
  /* 105e8865 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8868 push eax */
  push32((uint32_t)(EAX));
  /* 105e8869 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e886c mov edx, dword ptr [ecx*8 + 0x1060eabc] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1060eabc)));
  /* 105e8873 push edx */
  push32((uint32_t)(EDX));
  /* 105e8874 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 105e8876 call dword ptr [0x10613210] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613210))), 0x105e887cu);
  /* 105e887c push eax */
  push32((uint32_t)(EAX));
  /* 105e887d call dword ptr [0x10613214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613214))), 0x105e8883u);
  /* 105e8883 jmp 0x105e8978 */
  goto L_105e8978;
L_105e8888:;
  /* 105e8888 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e888f je 0x105e8978 */
  if (C.zf) goto L_105e8978;
  /* 105e8895 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 105e889a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 105e88a0 push eax */
  push32((uint32_t)(EAX));
  /* 105e88a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e88a3 call dword ptr [0x10613228] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613228))), 0x105e88a9u);
  /* 105e88a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e88ab jne 0x105e88c1 */
  if (!C.zf) goto L_105e88c1;
  /* 105e88ad push 0x1060bba8 */
  push32((uint32_t)(0x1060bba8u));
  /* 105e88b2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 105e88b8 push ecx */
  push32((uint32_t)(ECX));
  /* 105e88b9 call 0x105e8e40 */
  push32(0x105e88beu); f_105e8e40();
  /* 105e88be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e88c1:;
  /* 105e88c1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 105e88c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105e88ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e88cd push eax */
  push32((uint32_t)(EAX));
  /* 105e88ce call 0x105e8cc0 */
  push32(0x105e88d3u); f_105e8cc0();
  /* 105e88d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e88d6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e88d9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e88dc jbe 0x105e890a */
  if ((C.cf||C.zf)) goto L_105e890a;
  /* 105e88de lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 105e88e4 push ecx */
  push32((uint32_t)(ECX));
  /* 105e88e5 call 0x105e8cc0 */
  push32(0x105e88eau); f_105e8cc0();
  /* 105e88ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e88ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e88f0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 105e88f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105e88f7 push 3 */
  push32((uint32_t)(0x3u));
  /* 105e88f9 push 0x1060bba4 */
  push32((uint32_t)(0x1060bba4u));
  /* 105e88fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e8901 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8902 call 0x105e96b0 */
  push32(0x105e8907u); f_105e96b0();
  /* 105e8907 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e890a:;
  /* 105e890a push 0x1060c6e4 */
  push32((uint32_t)(0x1060c6e4u));
  /* 105e890f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 105e8915 push edx */
  push32((uint32_t)(EDX));
  /* 105e8916 call 0x105e8e40 */
  push32(0x105e891bu); f_105e8e40();
  /* 105e891b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e891e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e8921 push eax */
  push32((uint32_t)(EAX));
  /* 105e8922 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 105e8928 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8929 call 0x105e8e50 */
  push32(0x105e892eu); f_105e8e50();
  /* 105e892e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8931 push 0x1060bb1c */
  push32((uint32_t)(0x1060bb1cu));
  /* 105e8936 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 105e893c push edx */
  push32((uint32_t)(EDX));
  /* 105e893d call 0x105e8e50 */
  push32(0x105e8942u); f_105e8e50();
  /* 105e8942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8945 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8948 mov ecx, dword ptr [eax*8 + 0x1060eabc] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1060eabc)));
  /* 105e894f push ecx */
  push32((uint32_t)(ECX));
  /* 105e8950 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 105e8956 push edx */
  push32((uint32_t)(EDX));
  /* 105e8957 call 0x105e8e50 */
  push32(0x105e895cu); f_105e8e50();
  /* 105e895c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e895f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 105e8964 push 0x1060c6bc */
  push32((uint32_t)(0x1060c6bcu));
  /* 105e8969 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 105e896f push eax */
  push32((uint32_t)(EAX));
  /* 105e8970 call 0x105e95f0 */
  push32(0x105e8975u); f_105e95f0();
  /* 105e8975 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e8978:;
  /* 105e8978 pop edi */
  EDI = (pop32());
  /* 105e8979 pop esi */
  ESI = (pop32());
  /* 105e897a pop ebx */
  EBX = (pop32());
  /* 105e897b mov esp, ebp */
  ESP = (EBP);
  /* 105e897d pop ebp */
  EBP = (pop32());
  /* 105e897e ret  */
  ESPCHK(0x105e87c0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x105e8980 (80 bytes, 27 insns) */
void f_105e8980(void) {
  FTRACE(0x105e8980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8980 push ebp */
  push32((uint32_t)(EBP));
  /* 105e8981 mov ebp, esp */
  EBP = (ESP);
  /* 105e8983 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8984 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105e898b jmp 0x105e8996 */
  goto L_105e8996;
L_105e898d:;
  /* 105e898d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8990 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8993 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105e8996:;
  /* 105e8996 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e899a jae 0x105e89af */
  if (!C.cf) goto L_105e89af;
  /* 105e899c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e899f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e89a2 cmp edx, dword ptr [ecx*8 + 0x1060eab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1060eab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e89a9 jne 0x105e89ad */
  if (!C.zf) goto L_105e89ad;
  /* 105e89ab jmp 0x105e89af */
  goto L_105e89af;
L_105e89ad:;
  /* 105e89ad jmp 0x105e898d */
  goto L_105e898d;
L_105e89af:;
  /* 105e89af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e89b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e89b5 cmp ecx, dword ptr [eax*8 + 0x1060eab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1060eab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e89bc jne 0x105e89ca */
  if (!C.zf) goto L_105e89ca;
  /* 105e89be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e89c1 mov eax, dword ptr [edx*8 + 0x1060eabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1060eabc)));
  /* 105e89c8 jmp 0x105e89cc */
  goto L_105e89cc;
L_105e89ca:;
  /* 105e89ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105e89cc:;
  /* 105e89cc mov esp, ebp */
  ESP = (EBP);
  /* 105e89ce pop ebp */
  EBP = (pop32());
  /* 105e89cf ret  */
  ESPCHK(0x105e8980u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x105e89d0 (66 bytes, 28 insns) */
void f_105e89d0(void) {
  FTRACE(0x105e89d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e89d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e89d1 mov ebp, esp */
  EBP = (ESP);
  /* 105e89d3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e89d7 jne 0x105e89f7 */
  if (!C.zf) goto L_105e89f7;
  /* 105e89d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e89dd jge 0x105e89f7 */
  if ((C.sf==C.of)) goto L_105e89f7;
  /* 105e89df push 1 */
  push32((uint32_t)(0x1u));
  /* 105e89e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e89e4 push eax */
  push32((uint32_t)(EAX));
  /* 105e89e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e89e8 push ecx */
  push32((uint32_t)(ECX));
  /* 105e89e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e89ec push edx */
  push32((uint32_t)(EDX));
  /* 105e89ed call 0x105e8a20 */
  push32(0x105e89f2u); f_105e8a20();
  /* 105e89f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e89f5 jmp 0x105e8a0d */
  goto L_105e8a0d;
L_105e89f7:;
  /* 105e89f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e89f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e89fc push eax */
  push32((uint32_t)(EAX));
  /* 105e89fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8a00 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8a01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8a04 push edx */
  push32((uint32_t)(EDX));
  /* 105e8a05 call 0x105e8a20 */
  push32(0x105e8a0au); f_105e8a20();
  /* 105e8a0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e8a0d:;
  /* 105e8a0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8a10 pop ebp */
  EBP = (pop32());
  /* 105e8a11 ret  */
  ESPCHK(0x105e89d0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x105e8a20 (194 bytes, 71 insns) */
void f_105e8a20(void) {
  FTRACE(0x105e8a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8a20 push ebp */
  push32((uint32_t)(EBP));
  /* 105e8a21 mov ebp, esp */
  EBP = (ESP);
  /* 105e8a23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8a26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8a29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e8a2c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8a30 je 0x105e8a49 */
  if (C.zf) goto L_105e8a49;
  /* 105e8a32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8a35 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 105e8a38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8a3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8a3e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105e8a41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8a44 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105e8a46 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105e8a49:;
  /* 105e8a49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8a4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105e8a4f:;
  /* 105e8a4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8a52 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e8a54 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105e8a57 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105e8a5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8a5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e8a5f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105e8a62 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105e8a65 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8a69 jbe 0x105e8a81 */
  if ((C.cf||C.zf)) goto L_105e8a81;
  /* 105e8a6b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e8a6e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8a71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8a74 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105e8a76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8a79 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8a7c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105e8a7f jmp 0x105e8a95 */
  goto L_105e8a95;
L_105e8a81:;
  /* 105e8a81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e8a84 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8a87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8a8a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105e8a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8a8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8a92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105e8a95:;
  /* 105e8a95 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8a99 ja 0x105e8a4f */
  if ((!C.cf&&!C.zf)) goto L_105e8a4f;
  /* 105e8a9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8a9e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 105e8aa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8aa4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8aa7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105e8aaa:;
  /* 105e8aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8aad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105e8aaf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 105e8ab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8ab5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8ab8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105e8aba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105e8abc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8abf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 105e8ac2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 105e8ac4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8ac7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8aca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105e8acd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8ad0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8ad3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105e8ad6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8ad9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8adc jb 0x105e8aaa */
  if (C.cf) goto L_105e8aaa;
  /* 105e8ade mov esp, ebp */
  ESP = (EBP);
  /* 105e8ae0 pop ebp */
  EBP = (pop32());
  /* 105e8ae1 ret  */
  ESPCHK(0x105e8a20u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x105e8af0 (63 bytes, 24 insns) */
void f_105e8af0(void) {
  FTRACE(0x105e8af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8af0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e8af1 mov ebp, esp */
  EBP = (ESP);
  /* 105e8af3 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8af4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8af8 jne 0x105e8b09 */
  if (!C.zf) goto L_105e8b09;
  /* 105e8afa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8afe jge 0x105e8b09 */
  if ((C.sf==C.of)) goto L_105e8b09;
  /* 105e8b00 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105e8b07 jmp 0x105e8b10 */
  goto L_105e8b10;
L_105e8b09:;
  /* 105e8b09 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105e8b10:;
  /* 105e8b10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8b13 push eax */
  push32((uint32_t)(EAX));
  /* 105e8b14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8b17 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8b18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8b1b push edx */
  push32((uint32_t)(EDX));
  /* 105e8b1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8b1f push eax */
  push32((uint32_t)(EAX));
  /* 105e8b20 call 0x105e8a20 */
  push32(0x105e8b25u); f_105e8a20();
  /* 105e8b25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8b28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8b2b mov esp, ebp */
  ESP = (EBP);
  /* 105e8b2d pop ebp */
  EBP = (pop32());
  /* 105e8b2e ret  */
  ESPCHK(0x105e8af0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x105e8b30 (30 bytes, 14 insns) */
void f_105e8b30(void) {
  FTRACE(0x105e8b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8b30 push ebp */
  push32((uint32_t)(EBP));
  /* 105e8b31 mov ebp, esp */
  EBP = (ESP);
  /* 105e8b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8b35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8b38 push eax */
  push32((uint32_t)(EAX));
  /* 105e8b39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8b3c push ecx */
  push32((uint32_t)(ECX));
  /* 105e8b3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8b40 push edx */
  push32((uint32_t)(EDX));
  /* 105e8b41 call 0x105e8a20 */
  push32(0x105e8b46u); f_105e8a20();
  /* 105e8b46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8b49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8b4c pop ebp */
  EBP = (pop32());
  /* 105e8b4d ret  */
  ESPCHK(0x105e8b30u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x105e8b50 (72 bytes, 28 insns) */
void f_105e8b50(void) {
  FTRACE(0x105e8b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8b50 push ebp */
  push32((uint32_t)(EBP));
  /* 105e8b51 mov ebp, esp */
  EBP = (ESP);
  /* 105e8b53 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8b54 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8b58 jne 0x105e8b71 */
  if (!C.zf) goto L_105e8b71;
  /* 105e8b5a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8b5e jg 0x105e8b71 */
  if ((!C.zf&&C.sf==C.of)) goto L_105e8b71;
  /* 105e8b60 jl 0x105e8b68 */
  if ((C.sf!=C.of)) goto L_105e8b68;
  /* 105e8b62 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8b66 jae 0x105e8b71 */
  if (!C.cf) goto L_105e8b71;
L_105e8b68:;
  /* 105e8b68 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105e8b6f jmp 0x105e8b78 */
  goto L_105e8b78;
L_105e8b71:;
  /* 105e8b71 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105e8b78:;
  /* 105e8b78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8b7b push eax */
  push32((uint32_t)(EAX));
  /* 105e8b7c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105e8b7f push ecx */
  push32((uint32_t)(ECX));
  /* 105e8b80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8b83 push edx */
  push32((uint32_t)(EDX));
  /* 105e8b84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8b87 push eax */
  push32((uint32_t)(EAX));
  /* 105e8b88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8b8b push ecx */
  push32((uint32_t)(ECX));
  /* 105e8b8c call 0x105e8ba0 */
  push32(0x105e8b91u); f_105e8ba0();
  /* 105e8b91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8b94 mov esp, ebp */
  ESP = (EBP);
  /* 105e8b96 pop ebp */
  EBP = (pop32());
  /* 105e8b97 ret  */
  ESPCHK(0x105e8b50u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x105e8ba0 (242 bytes, 91 insns) */
void f_105e8ba0(void) {
  FTRACE(0x105e8ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e8ba1 mov ebp, esp */
  EBP = (ESP);
  /* 105e8ba3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8ba6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8ba9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e8bac cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8bb0 je 0x105e8bd4 */
  if (C.zf) goto L_105e8bd4;
  /* 105e8bb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8bb5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 105e8bb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8bbb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8bbe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105e8bc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8bc4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105e8bc6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8bc9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8bcc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105e8bce mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105e8bd1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_105e8bd4:;
  /* 105e8bd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8bd7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105e8bda:;
  /* 105e8bda mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105e8bdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105e8bdf push ecx */
  push32((uint32_t)(ECX));
  /* 105e8be0 push eax */
  push32((uint32_t)(EAX));
  /* 105e8be1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8be4 push edx */
  push32((uint32_t)(EDX));
  /* 105e8be5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8be8 push eax */
  push32((uint32_t)(EAX));
  /* 105e8be9 call 0x105ea0e0 */
  push32(0x105e8beeu); f_105ea0e0();
  /* 105e8bee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105e8bf1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105e8bf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e8bf6 push edx */
  push32((uint32_t)(EDX));
  /* 105e8bf7 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8bf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8bfb push eax */
  push32((uint32_t)(EAX));
  /* 105e8bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8bff push ecx */
  push32((uint32_t)(ECX));
  /* 105e8c00 call 0x105ea070 */
  push32(0x105e8c05u); f_105ea070();
  /* 105e8c05 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105e8c08 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 105e8c0b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8c0f jbe 0x105e8c27 */
  if ((C.cf||C.zf)) goto L_105e8c27;
  /* 105e8c11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e8c14 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8c17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8c1a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105e8c1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8c1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8c22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105e8c25 jmp 0x105e8c3b */
  goto L_105e8c3b;
L_105e8c27:;
  /* 105e8c27 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e8c2a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8c2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8c30 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105e8c32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8c35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8c38 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105e8c3b:;
  /* 105e8c3b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8c3f ja 0x105e8bda */
  if ((!C.cf&&!C.zf)) goto L_105e8bda;
  /* 105e8c41 jb 0x105e8c49 */
  if (C.cf) goto L_105e8c49;
  /* 105e8c43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8c47 ja 0x105e8bda */
  if ((!C.cf&&!C.zf)) goto L_105e8bda;
L_105e8c49:;
  /* 105e8c49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8c4c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 105e8c4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8c52 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8c55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105e8c58:;
  /* 105e8c58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8c5b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105e8c5d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 105e8c60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8c63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8c66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105e8c68 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105e8c6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8c6d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 105e8c70 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 105e8c72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e8c75 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8c78 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105e8c7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8c7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8c81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105e8c84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e8c87 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8c8a jb 0x105e8c58 */
  if (C.cf) goto L_105e8c58;
  /* 105e8c8c mov esp, ebp */
  ESP = (EBP);
  /* 105e8c8e pop ebp */
  EBP = (pop32());
  /* 105e8c8f ret 0x14 */
  ESPCHK(0x105e8ba0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x105e8ca0 (31 bytes, 15 insns) */
void f_105e8ca0(void) {
  FTRACE(0x105e8ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e8ca1 mov ebp, esp */
  EBP = (ESP);
  /* 105e8ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8ca5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105e8ca8 push eax */
  push32((uint32_t)(EAX));
  /* 105e8ca9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8cac push ecx */
  push32((uint32_t)(ECX));
  /* 105e8cad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8cb0 push edx */
  push32((uint32_t)(EDX));
  /* 105e8cb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8cb4 push eax */
  push32((uint32_t)(EAX));
  /* 105e8cb5 call 0x105e8ba0 */
  push32(0x105e8cbau); f_105e8ba0();
  /* 105e8cba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8cbd pop ebp */
  EBP = (pop32());
  /* 105e8cbe ret  */
  ESPCHK(0x105e8ca0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x105e8cc0 (123 bytes, 44 insns) */
void f_105e8cc0(void) {
  FTRACE(0x105e8cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8cc0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105e8cc4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 105e8cca je 0x105e8ce0 */
  if (C.zf) goto L_105e8ce0;
L_105e8ccc:;
  /* 105e8ccc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 105e8cce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 105e8ccf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105e8cd1 je 0x105e8d13 */
  if (C.zf) goto L_105e8d13;
  /* 105e8cd3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 105e8cd9 jne 0x105e8ccc */
  if (!C.zf) goto L_105e8ccc;
  /* 105e8cdb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_105e8ce0:;
  /* 105e8ce0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 105e8ce2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 105e8ce7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8ce9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e8cec xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105e8cee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8cf1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 105e8cf6 je 0x105e8ce0 */
  if (C.zf) goto L_105e8ce0;
  /* 105e8cf8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 105e8cfb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105e8cfd je 0x105e8d31 */
  if (C.zf) goto L_105e8d31;
  /* 105e8cff test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 105e8d01 je 0x105e8d27 */
  if (C.zf) goto L_105e8d27;
  /* 105e8d03 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 105e8d08 je 0x105e8d1d */
  if (C.zf) goto L_105e8d1d;
  /* 105e8d0a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 105e8d0f je 0x105e8d13 */
  if (C.zf) goto L_105e8d13;
  /* 105e8d11 jmp 0x105e8ce0 */
  goto L_105e8ce0;
L_105e8d13:;
  /* 105e8d13 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 105e8d16 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105e8d1a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8d1c ret  */
  ESPCHK(0x105e8cc0u, _esp0);
  ESP += 4; return;
L_105e8d1d:;
  /* 105e8d1d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 105e8d20 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105e8d24 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8d26 ret  */
  ESPCHK(0x105e8cc0u, _esp0);
  ESP += 4; return;
L_105e8d27:;
  /* 105e8d27 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 105e8d2a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105e8d2e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8d30 ret  */
  ESPCHK(0x105e8cc0u, _esp0);
  ESP += 4; return;
L_105e8d31:;
  /* 105e8d31 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 105e8d34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105e8d38 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8d3a ret  */
  ESPCHK(0x105e8cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d40 @ 0x105e8d40 (249 bytes, 93 insns) */
void f_105e8d40(void) {
  FTRACE(0x105e8d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8d40 push ebp */
  push32((uint32_t)(EBP));
  /* 105e8d41 mov ebp, esp */
  EBP = (ESP);
  /* 105e8d43 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8d46 push ebx */
  push32((uint32_t)(EBX));
  /* 105e8d47 push esi */
  push32((uint32_t)(ESI));
  /* 105e8d48 push edi */
  push32((uint32_t)(EDI));
  /* 105e8d49 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 105e8d4c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105e8d4f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 105e8d52 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_105e8d55:;
  /* 105e8d55 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8d59 jne 0x105e8d79 */
  if (!C.zf) goto L_105e8d79;
  /* 105e8d5b push 0x1060b9a0 */
  push32((uint32_t)(0x1060b9a0u));
  /* 105e8d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8d62 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 105e8d64 push 0x1060b994 */
  push32((uint32_t)(0x1060b994u));
  /* 105e8d69 push 2 */
  push32((uint32_t)(0x2u));
  /* 105e8d6b call 0x105e3e30 */
  push32(0x105e8d70u); f_105e3e30();
  /* 105e8d70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8d73 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8d76 jne 0x105e8d79 */
  if (!C.zf) goto L_105e8d79;
  /* 105e8d78 int3  */
  x86_unimpl("int3 @ 0x105e8d78");
L_105e8d79:;
  /* 105e8d79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e8d7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e8d7d jne 0x105e8d55 */
  if (!C.zf) goto L_105e8d55;
L_105e8d7f:;
  /* 105e8d7f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8d83 jne 0x105e8da3 */
  if (!C.zf) goto L_105e8da3;
  /* 105e8d85 push 0x1060b984 */
  push32((uint32_t)(0x1060b984u));
  /* 105e8d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8d8c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 105e8d8e push 0x1060b994 */
  push32((uint32_t)(0x1060b994u));
  /* 105e8d93 push 2 */
  push32((uint32_t)(0x2u));
  /* 105e8d95 call 0x105e3e30 */
  push32(0x105e8d9au); f_105e3e30();
  /* 105e8d9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8d9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8da0 jne 0x105e8da3 */
  if (!C.zf) goto L_105e8da3;
  /* 105e8da2 int3  */
  x86_unimpl("int3 @ 0x105e8da2");
L_105e8da3:;
  /* 105e8da3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e8da5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e8da7 jne 0x105e8d7f */
  if (!C.zf) goto L_105e8d7f;
  /* 105e8da9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8dac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 105e8db3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8db9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105e8dbc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8dbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8dc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105e8dc4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8dc7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8dca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 105e8dcd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105e8dd0 push edx */
  push32((uint32_t)(EDX));
  /* 105e8dd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8dd4 push eax */
  push32((uint32_t)(EAX));
  /* 105e8dd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8dd8 push ecx */
  push32((uint32_t)(ECX));
  /* 105e8dd9 call 0x105e4750 */
  push32(0x105e8ddeu); f_105e4750();
  /* 105e8dde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8de1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105e8de4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8de7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105e8dea sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8ded mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8df0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 105e8df3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8df6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8dfa jl 0x105e8e1e */
  if ((C.sf!=C.of)) goto L_105e8e1e;
  /* 105e8dfc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8dff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105e8e01 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 105e8e04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e8e06 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105e8e0c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 105e8e0f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8e12 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105e8e14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8e17 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8e1a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105e8e1c jmp 0x105e8e2f */
  goto L_105e8e2f;
L_105e8e1e:;
  /* 105e8e1e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8e21 push eax */
  push32((uint32_t)(EAX));
  /* 105e8e22 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8e24 call 0x105e44d0 */
  push32(0x105e8e29u); f_105e44d0();
  /* 105e8e29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8e2c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_105e8e2f:;
  /* 105e8e2f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105e8e32 pop edi */
  EDI = (pop32());
  /* 105e8e33 pop esi */
  ESI = (pop32());
  /* 105e8e34 pop ebx */
  EBX = (pop32());
  /* 105e8e35 mov esp, ebp */
  ESP = (EBP);
  /* 105e8e37 pop ebp */
  EBP = (pop32());
  /* 105e8e38 ret  */
  ESPCHK(0x105e8d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e40 @ 0x105e8e40 (7 bytes, 3 insns) */
void f_105e8e40(void) {
  FTRACE(0x105e8e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8e40 push edi */
  push32((uint32_t)(EDI));
  /* 105e8e41 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 105e8e45 jmp 0x105e8eb1 */
  jmp_ind(0x105e8eb1u); return;
}

/* FUN_10008e50 @ 0x105e8e50 (224 bytes, 84 insns) */
void f_105e8e50(void) {
  FTRACE(0x105e8e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8e50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105e8e54 push edi */
  push32((uint32_t)(EDI));
  /* 105e8e55 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 105e8e5b je 0x105e8e6c */
  if (C.zf) goto L_105e8e6c;
L_105e8e5d:;
  /* 105e8e5d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 105e8e5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 105e8e60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105e8e62 je 0x105e8e9f */
  if (C.zf) goto L_105e8e9f;
  /* 105e8e64 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 105e8e6a jne 0x105e8e5d */
  if (!C.zf) goto L_105e8e5d;
L_105e8e6c:;
  /* 105e8e6c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 105e8e6e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 105e8e73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8e75 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e8e78 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105e8e7a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8e7d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 105e8e82 je 0x105e8e6c */
  if (C.zf) goto L_105e8e6c;
  /* 105e8e84 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 105e8e87 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105e8e89 je 0x105e8eae */
  if (C.zf) goto L_105e8eae;
  /* 105e8e8b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 105e8e8d je 0x105e8ea9 */
  if (C.zf) goto L_105e8ea9;
  /* 105e8e8f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 105e8e94 je 0x105e8ea4 */
  if (C.zf) goto L_105e8ea4;
  /* 105e8e96 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 105e8e9b je 0x105e8e9f */
  if (C.zf) goto L_105e8e9f;
  /* 105e8e9d jmp 0x105e8e6c */
  goto L_105e8e6c;
L_105e8e9f:;
  /* 105e8e9f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 105e8ea2 jmp 0x105e8eb1 */
  goto L_105e8eb1;
L_105e8ea4:;
  /* 105e8ea4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 105e8ea7 jmp 0x105e8eb1 */
  goto L_105e8eb1;
L_105e8ea9:;
  /* 105e8ea9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 105e8eac jmp 0x105e8eb1 */
  goto L_105e8eb1;
L_105e8eae:;
  /* 105e8eae lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_105e8eb1:;
  /* 105e8eb1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 105e8eb5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 105e8ebb je 0x105e8ed6 */
  if (C.zf) goto L_105e8ed6;
L_105e8ebd:;
  /* 105e8ebd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105e8ebf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 105e8ec0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 105e8ec2 je 0x105e8f28 */
  if (C.zf) goto L_105e8f28;
  /* 105e8ec4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 105e8ec6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105e8ec7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 105e8ecd jne 0x105e8ebd */
  if (!C.zf) goto L_105e8ebd;
  /* 105e8ecf jmp 0x105e8ed6 */
  goto L_105e8ed6;
L_105e8ed1:;
  /* 105e8ed1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105e8ed3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_105e8ed6:;
  /* 105e8ed6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 105e8edb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 105e8edd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8edf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e8ee2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105e8ee4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105e8ee6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8ee9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 105e8eee je 0x105e8ed1 */
  if (C.zf) goto L_105e8ed1;
  /* 105e8ef0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 105e8ef2 je 0x105e8f28 */
  if (C.zf) goto L_105e8f28;
  /* 105e8ef4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 105e8ef6 je 0x105e8f1f */
  if (C.zf) goto L_105e8f1f;
  /* 105e8ef8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 105e8efe je 0x105e8f12 */
  if (C.zf) goto L_105e8f12;
  /* 105e8f00 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 105e8f06 je 0x105e8f0a */
  if (C.zf) goto L_105e8f0a;
  /* 105e8f08 jmp 0x105e8ed1 */
  goto L_105e8ed1;
L_105e8f0a:;
  /* 105e8f0a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105e8f0c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105e8f10 pop edi */
  EDI = (pop32());
  /* 105e8f11 ret  */
  ESPCHK(0x105e8e50u, _esp0);
  ESP += 4; return;
L_105e8f12:;
  /* 105e8f12 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 105e8f15 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105e8f19 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 105e8f1d pop edi */
  EDI = (pop32());
  /* 105e8f1e ret  */
  ESPCHK(0x105e8e50u, _esp0);
  ESP += 4; return;
L_105e8f1f:;
  /* 105e8f1f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 105e8f22 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105e8f26 pop edi */
  EDI = (pop32());
  /* 105e8f27 ret  */
  ESPCHK(0x105e8e50u, _esp0);
  ESP += 4; return;
L_105e8f28:;
  /* 105e8f28 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 105e8f2a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105e8f2e pop edi */
  EDI = (pop32());
  /* 105e8f2f ret  */
  ESPCHK(0x105e8e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f30 @ 0x105e8f30 (243 bytes, 91 insns) */
void f_105e8f30(void) {
  FTRACE(0x105e8f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e8f30 push ebp */
  push32((uint32_t)(EBP));
  /* 105e8f31 mov ebp, esp */
  EBP = (ESP);
  /* 105e8f33 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8f36 push ebx */
  push32((uint32_t)(EBX));
  /* 105e8f37 push esi */
  push32((uint32_t)(ESI));
  /* 105e8f38 push edi */
  push32((uint32_t)(EDI));
  /* 105e8f39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 105e8f3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_105e8f3f:;
  /* 105e8f3f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8f43 jne 0x105e8f63 */
  if (!C.zf) goto L_105e8f63;
  /* 105e8f45 push 0x1060b9a0 */
  push32((uint32_t)(0x1060b9a0u));
  /* 105e8f4a push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8f4c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 105e8f4e push 0x1060c700 */
  push32((uint32_t)(0x1060c700u));
  /* 105e8f53 push 2 */
  push32((uint32_t)(0x2u));
  /* 105e8f55 call 0x105e3e30 */
  push32(0x105e8f5au); f_105e3e30();
  /* 105e8f5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8f5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8f60 jne 0x105e8f63 */
  if (!C.zf) goto L_105e8f63;
  /* 105e8f62 int3  */
  x86_unimpl("int3 @ 0x105e8f62");
L_105e8f63:;
  /* 105e8f63 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105e8f65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e8f67 jne 0x105e8f3f */
  if (!C.zf) goto L_105e8f3f;
L_105e8f69:;
  /* 105e8f69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8f6d jne 0x105e8f8d */
  if (!C.zf) goto L_105e8f8d;
  /* 105e8f6f push 0x1060b984 */
  push32((uint32_t)(0x1060b984u));
  /* 105e8f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e8f76 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 105e8f78 push 0x1060c700 */
  push32((uint32_t)(0x1060c700u));
  /* 105e8f7d push 2 */
  push32((uint32_t)(0x2u));
  /* 105e8f7f call 0x105e3e30 */
  push32(0x105e8f84u); f_105e3e30();
  /* 105e8f84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8f87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8f8a jne 0x105e8f8d */
  if (!C.zf) goto L_105e8f8d;
  /* 105e8f8c int3  */
  x86_unimpl("int3 @ 0x105e8f8c");
L_105e8f8d:;
  /* 105e8f8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e8f8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105e8f91 jne 0x105e8f69 */
  if (!C.zf) goto L_105e8f69;
  /* 105e8f93 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8f96 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 105e8f9d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8fa0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8fa3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 105e8fa6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8fa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e8fac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105e8fae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8fb1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e8fb4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 105e8fb7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105e8fba push ecx */
  push32((uint32_t)(ECX));
  /* 105e8fbb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e8fbe push edx */
  push32((uint32_t)(EDX));
  /* 105e8fbf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8fc2 push eax */
  push32((uint32_t)(EAX));
  /* 105e8fc3 call 0x105e4750 */
  push32(0x105e8fc8u); f_105e4750();
  /* 105e8fc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e8fcb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105e8fce mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8fd1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105e8fd4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e8fd7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8fda mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 105e8fdd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8fe0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e8fe4 jl 0x105e9008 */
  if ((C.sf!=C.of)) goto L_105e9008;
  /* 105e8fe6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8fe9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105e8feb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 105e8fee xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105e8ff0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105e8ff6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 105e8ff9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e8ffc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105e8ffe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9001 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e9004 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105e9006 jmp 0x105e9019 */
  goto L_105e9019;
L_105e9008:;
  /* 105e9008 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105e900b push edx */
  push32((uint32_t)(EDX));
  /* 105e900c push 0 */
  push32((uint32_t)(0x0u));
  /* 105e900e call 0x105e44d0 */
  push32(0x105e9013u); f_105e44d0();
  /* 105e9013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9016 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_105e9019:;
  /* 105e9019 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105e901c pop edi */
  EDI = (pop32());
  /* 105e901d pop esi */
  ESI = (pop32());
  /* 105e901e pop ebx */
  EBX = (pop32());
  /* 105e901f mov esp, ebp */
  ESP = (EBP);
  /* 105e9021 pop ebp */
  EBP = (pop32());
  /* 105e9022 ret  */
  ESPCHK(0x105e8f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009030 @ 0x105e9030 (47 bytes, 17 insns) */
void f_105e9030(void) {
  FTRACE(0x105e9030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9030 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9031 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9036 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 105e903a jb 0x105e9050 */
  if (C.cf) goto L_105e9050;
L_105e903c:;
  /* 105e903c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9042 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9047 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 105e9049 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e904e jae 0x105e903c */
  if (!C.cf) goto L_105e903c;
L_105e9050:;
  /* 105e9050 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9052 mov eax, esp */
  EAX = (ESP);
  /* 105e9054 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 105e9056 mov esp, ecx */
  ESP = (ECX);
  /* 105e9058 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105e905a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 105e905d push eax */
  push32((uint32_t)(EAX));
  /* 105e905e ret  */
  ESPCHK(0x105e9030u, _esp0);
  ESP += 4; return;
}

/* FUN_10009060 @ 0x105e9060 (507 bytes, 151 insns) [1 switch table(s)] */
void f_105e9060(void) {
  FTRACE(0x105e9060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9060 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9061 mov ebp, esp */
  EBP = (ESP);
  /* 105e9063 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9066 push esi */
  push32((uint32_t)(ESI));
  /* 105e9067 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e906b je 0x105e9073 */
  if (C.zf) goto L_105e9073;
  /* 105e906d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9071 jne 0x105e9078 */
  if (!C.zf) goto L_105e9078;
L_105e9073:;
  /* 105e9073 jmp 0x105e9248 */
  goto L_105e9248;
L_105e9078:;
  /* 105e9078 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e907c je 0x105e9094 */
  if (C.zf) goto L_105e9094;
  /* 105e907e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9082 je 0x105e9094 */
  if (C.zf) goto L_105e9094;
  /* 105e9084 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9088 je 0x105e9094 */
  if (C.zf) goto L_105e9094;
  /* 105e908a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e908e jne 0x105e9171 */
  if (!C.zf) goto L_105e9171;
L_105e9094:;
  /* 105e9094 push 1 */
  push32((uint32_t)(0x1u));
  /* 105e9096 call 0x105ea240 */
  push32(0x105e909bu); f_105ea240();
  /* 105e909b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e909e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e90a2 je 0x105e90aa */
  if (C.zf) goto L_105e90aa;
  /* 105e90a4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e90a8 jne 0x105e90ef */
  if (!C.zf) goto L_105e90ef;
L_105e90aa:;
  /* 105e90aa cmp dword ptr [0x10610928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e90b1 jne 0x105e90ef */
  if (!C.zf) goto L_105e90ef;
  /* 105e90b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105e90b5 push 0x105e9290 */
  push32((uint32_t)(0x105e9290u));
  /* 105e90ba call dword ptr [0x10613298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613298))), 0x105e90c0u);
  /* 105e90c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e90c3 jne 0x105e90d1 */
  if (!C.zf) goto L_105e90d1;
  /* 105e90c5 mov dword ptr [0x10610928], 1 */
  w32((uint32_t)(0x10610928), (0x1u));
  /* 105e90cf jmp 0x105e90ef */
  goto L_105e90ef;
L_105e90d1:;
  /* 105e90d1 call dword ptr [0x10613250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613250))), 0x105e90d7u);
  /* 105e90d7 mov esi, eax */
  ESI = (EAX);
  /* 105e90d9 call 0x105ed410 */
  push32(0x105e90deu); f_105ed410();
  /* 105e90de mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 105e90e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 105e90e2 call 0x105ea2e0 */
  push32(0x105e90e7u); f_105ea2e0();
  /* 105e90e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e90ea jmp 0x105e9248 */
  goto L_105e9248;
L_105e90ef:;
  /* 105e90ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e90f2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105e90f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e90f8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e90fb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105e90fe cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9102 ja 0x105e9162 */
  if ((!C.cf&&!C.zf)) goto L_105e9162;
  /* 105e9104 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e9107 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e9109 mov dl, byte ptr [eax + 0x105e926f] */
  DL = (r8((uint32_t)(EAX + 0x105e926f)));
  /* 105e910f jmp dword ptr [edx*4 + 0x105e925b] */
  switch (EDX) {
    case 0: goto L_105e9116;
    case 1: goto L_105e9150;
    case 2: goto L_105e912a;
    case 3: goto L_105e913d;
    case 4: goto L_105e9162;
    default: x86_unimpl("switch@0x105e910f out of table"); return;
  }
L_105e9116:;
  /* 105e9116 mov ecx, dword ptr [0x10610918] */
  ECX = (r32((uint32_t)(0x10610918)));
  /* 105e911c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105e911f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e9122 mov dword ptr [0x10610918], edx */
  w32((uint32_t)(0x10610918), (EDX));
  /* 105e9128 jmp 0x105e9162 */
  goto L_105e9162;
L_105e912a:;
  /* 105e912a mov eax, dword ptr [0x1061091c] */
  EAX = (r32((uint32_t)(0x1061091c)));
  /* 105e912f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105e9132 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e9135 mov dword ptr [0x1061091c], ecx */
  w32((uint32_t)(0x1061091c), (ECX));
  /* 105e913b jmp 0x105e9162 */
  goto L_105e9162;
L_105e913d:;
  /* 105e913d mov edx, dword ptr [0x10610920] */
  EDX = (r32((uint32_t)(0x10610920)));
  /* 105e9143 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105e9146 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e9149 mov dword ptr [0x10610920], eax */
  w32((uint32_t)(0x10610920), (EAX));
  /* 105e914e jmp 0x105e9162 */
  goto L_105e9162;
L_105e9150:;
  /* 105e9150 mov ecx, dword ptr [0x10610924] */
  ECX = (r32((uint32_t)(0x10610924)));
  /* 105e9156 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105e9159 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e915c mov dword ptr [0x10610924], edx */
  w32((uint32_t)(0x10610924), (EDX));
L_105e9162:;
  /* 105e9162 push 1 */
  push32((uint32_t)(0x1u));
  /* 105e9164 call 0x105ea2e0 */
  push32(0x105e9169u); f_105ea2e0();
  /* 105e9169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e916c jmp 0x105e9243 */
  goto L_105e9243;
L_105e9171:;
  /* 105e9171 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9175 je 0x105e9188 */
  if (C.zf) goto L_105e9188;
  /* 105e9177 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e917b je 0x105e9188 */
  if (C.zf) goto L_105e9188;
  /* 105e917d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9181 je 0x105e9188 */
  if (C.zf) goto L_105e9188;
  /* 105e9183 jmp 0x105e9248 */
  goto L_105e9248;
L_105e9188:;
  /* 105e9188 call 0x105e58d0 */
  push32(0x105e918du); f_105e58d0();
  /* 105e918d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e9190 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9193 cmp dword ptr [eax + 0x50], 0x1060f0c0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1060f0c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e919a jne 0x105e91e5 */
  if (!C.zf) goto L_105e91e5;
  /* 105e919c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 105e91a1 push 0x1060c70c */
  push32((uint32_t)(0x1060c70cu));
  /* 105e91a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 105e91a8 mov ecx, dword ptr [0x1060f140] */
  ECX = (r32((uint32_t)(0x1060f140)));
  /* 105e91ae push ecx */
  push32((uint32_t)(ECX));
  /* 105e91af call 0x105e5e90 */
  push32(0x105e91b4u); f_105e5e90();
  /* 105e91b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e91b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e91ba mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 105e91bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e91c0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e91c4 je 0x105e91e3 */
  if (C.zf) goto L_105e91e3;
  /* 105e91c6 mov ecx, dword ptr [0x1060f140] */
  ECX = (r32((uint32_t)(0x1060f140)));
  /* 105e91cc push ecx */
  push32((uint32_t)(ECX));
  /* 105e91cd push 0x1060f0c0 */
  push32((uint32_t)(0x1060f0c0u));
  /* 105e91d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e91d5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 105e91d8 push eax */
  push32((uint32_t)(EAX));
  /* 105e91d9 call 0x105ed020 */
  push32(0x105e91deu); f_105ed020();
  /* 105e91de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e91e1 jmp 0x105e91e5 */
  goto L_105e91e5;
L_105e91e3:;
  /* 105e91e3 jmp 0x105e9248 */
  goto L_105e9248;
L_105e91e5:;
  /* 105e91e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e91e8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 105e91eb push edx */
  push32((uint32_t)(EDX));
  /* 105e91ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e91ef push eax */
  push32((uint32_t)(EAX));
  /* 105e91f0 call 0x105e9570 */
  push32(0x105e91f5u); f_105e9570();
  /* 105e91f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e91f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105e91fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e91ff jne 0x105e9203 */
  if (!C.zf) goto L_105e9203;
  /* 105e9201 jmp 0x105e9248 */
  goto L_105e9248;
L_105e9203:;
  /* 105e9203 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e9206 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105e9209 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105e920c:;
  /* 105e920c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e920f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105e9212 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9215 jne 0x105e9243 */
  if (!C.zf) goto L_105e9243;
  /* 105e9217 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e921a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e921d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105e9220 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e9223 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9226 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105e9229 mov edx, dword ptr [0x1060f144] */
  EDX = (r32((uint32_t)(0x1060f144)));
  /* 105e922f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e9232 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9235 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 105e9238 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e923a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e923d jb 0x105e9241 */
  if (C.cf) goto L_105e9241;
  /* 105e923f jmp 0x105e9243 */
  goto L_105e9243;
L_105e9241:;
  /* 105e9241 jmp 0x105e920c */
  goto L_105e920c;
L_105e9243:;
  /* 105e9243 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e9246 jmp 0x105e9256 */
  goto L_105e9256;
L_105e9248:;
  /* 105e9248 call 0x105ed400 */
  push32(0x105e924du); f_105ed400();
  /* 105e924d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 105e9253 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105e9256:;
  /* 105e9256 pop esi */
  ESI = (pop32());
  /* 105e9257 mov esp, ebp */
  ESP = (EBP);
  /* 105e9259 pop ebp */
  EBP = (pop32());
  /* 105e925a ret  */
  ESPCHK(0x105e9060u, _esp0);
  ESP += 4; return;
}

/* FUN_10009290 @ 0x105e9290 (146 bytes, 45 insns) */
void f_105e9290(void) {
  FTRACE(0x105e9290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9290 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9291 mov ebp, esp */
  EBP = (ESP);
  /* 105e9293 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9296 push 1 */
  push32((uint32_t)(0x1u));
  /* 105e9298 call 0x105ea240 */
  push32(0x105e929du); f_105ea240();
  /* 105e929d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e92a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e92a4 jne 0x105e92be */
  if (!C.zf) goto L_105e92be;
  /* 105e92a6 mov dword ptr [ebp - 8], 0x10610918 */
  w32((uint32_t)(EBP + -0x8), (0x10610918u));
  /* 105e92ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e92b0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105e92b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105e92b5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 105e92bc jmp 0x105e92d4 */
  goto L_105e92d4;
L_105e92be:;
  /* 105e92be mov dword ptr [ebp - 8], 0x1061091c */
  w32((uint32_t)(EBP + -0x8), (0x1061091cu));
  /* 105e92c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e92c8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105e92ca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105e92cd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_105e92d4:;
  /* 105e92d4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e92d8 jne 0x105e92e8 */
  if (!C.zf) goto L_105e92e8;
  /* 105e92da push 1 */
  push32((uint32_t)(0x1u));
  /* 105e92dc call 0x105ea2e0 */
  push32(0x105e92e1u); f_105ea2e0();
  /* 105e92e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e92e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e92e6 jmp 0x105e931c */
  goto L_105e931c;
L_105e92e8:;
  /* 105e92e8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e92ec je 0x105e930d */
  if (C.zf) goto L_105e930d;
  /* 105e92ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e92f1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 105e92f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 105e92f9 call 0x105ea2e0 */
  push32(0x105e92feu); f_105ea2e0();
  /* 105e92fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9301 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9304 push edx */
  push32((uint32_t)(EDX));
  /* 105e9305 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x105e9308u);
  /* 105e9308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e930b jmp 0x105e9317 */
  goto L_105e9317;
L_105e930d:;
  /* 105e930d push 1 */
  push32((uint32_t)(0x1u));
  /* 105e930f call 0x105ea2e0 */
  push32(0x105e9314u); f_105ea2e0();
  /* 105e9314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e9317:;
  /* 105e9317 mov eax, 1 */
  EAX = (0x1u);
L_105e931c:;
  /* 105e931c mov esp, ebp */
  ESP = (EBP);
  /* 105e931e pop ebp */
  EBP = (pop32());
  /* 105e931f ret 4 */
  ESPCHK(0x105e9290u, _esp0);
  ESP += 8; return;
}

/* FUN_10009330 @ 0x105e9330 (522 bytes, 162 insns) [1 switch table(s)] */
void f_105e9330(void) {
  FTRACE(0x105e9330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9330 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9331 mov ebp, esp */
  EBP = (ESP);
  /* 105e9333 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9336 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105e933d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9340 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105e9343 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105e9346 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9349 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105e934c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9350 ja 0x105e93fe */
  if ((!C.cf&&!C.zf)) goto L_105e93fe;
  /* 105e9356 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105e9359 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e935b mov dl, byte ptr [eax + 0x105e9552] */
  DL = (r8((uint32_t)(EAX + 0x105e9552)));
  /* 105e9361 jmp dword ptr [edx*4 + 0x105e953a] */
  switch (EDX) {
    case 0: goto L_105e9368;
    case 1: goto L_105e93d3;
    case 2: goto L_105e93b9;
    case 3: goto L_105e9385;
    case 4: goto L_105e939f;
    case 5: goto L_105e93fe;
    default: x86_unimpl("switch@0x105e9361 out of table"); return;
  }
L_105e9368:;
  /* 105e9368 mov dword ptr [ebp - 0x18], 0x10610918 */
  w32((uint32_t)(EBP + -0x18), (0x10610918u));
  /* 105e936f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105e9372 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105e9374 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105e9377 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e937a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e937d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105e9380 jmp 0x105e9406 */
  goto L_105e9406;
L_105e9385:;
  /* 105e9385 mov dword ptr [ebp - 0x18], 0x1061091c */
  w32((uint32_t)(EBP + -0x18), (0x1061091cu));
  /* 105e938c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105e938f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105e9391 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105e9394 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e9397 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e939a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105e939d jmp 0x105e9406 */
  goto L_105e9406;
L_105e939f:;
  /* 105e939f mov dword ptr [ebp - 0x18], 0x10610920 */
  w32((uint32_t)(EBP + -0x18), (0x10610920u));
  /* 105e93a6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105e93a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105e93ab mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105e93ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e93b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e93b4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105e93b7 jmp 0x105e9406 */
  goto L_105e9406;
L_105e93b9:;
  /* 105e93b9 mov dword ptr [ebp - 0x18], 0x10610924 */
  w32((uint32_t)(EBP + -0x18), (0x10610924u));
  /* 105e93c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105e93c3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105e93c5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105e93c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e93cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e93ce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105e93d1 jmp 0x105e9406 */
  goto L_105e9406;
L_105e93d3:;
  /* 105e93d3 call 0x105e58d0 */
  push32(0x105e93d8u); f_105e58d0();
  /* 105e93d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e93db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e93de mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 105e93e1 push edx */
  push32((uint32_t)(EDX));
  /* 105e93e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e93e5 push eax */
  push32((uint32_t)(EAX));
  /* 105e93e6 call 0x105e9570 */
  push32(0x105e93ebu); f_105e9570();
  /* 105e93eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e93ee add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e93f1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105e93f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105e93f7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105e93f9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105e93fc jmp 0x105e9406 */
  goto L_105e9406;
L_105e93fe:;
  /* 105e93fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e9401 jmp 0x105e9536 */
  goto L_105e9536;
L_105e9406:;
  /* 105e9406 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e940a je 0x105e9416 */
  if (C.zf) goto L_105e9416;
  /* 105e940c push 1 */
  push32((uint32_t)(0x1u));
  /* 105e940e call 0x105ea240 */
  push32(0x105e9413u); f_105ea240();
  /* 105e9413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e9416:;
  /* 105e9416 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e941a jne 0x105e9433 */
  if (!C.zf) goto L_105e9433;
  /* 105e941c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9420 je 0x105e942c */
  if (C.zf) goto L_105e942c;
  /* 105e9422 push 1 */
  push32((uint32_t)(0x1u));
  /* 105e9424 call 0x105ea2e0 */
  push32(0x105e9429u); f_105ea2e0();
  /* 105e9429 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e942c:;
  /* 105e942c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e942e jmp 0x105e9536 */
  goto L_105e9536;
L_105e9433:;
  /* 105e9433 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9437 jne 0x105e9450 */
  if (!C.zf) goto L_105e9450;
  /* 105e9439 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e943d je 0x105e9449 */
  if (C.zf) goto L_105e9449;
  /* 105e943f push 1 */
  push32((uint32_t)(0x1u));
  /* 105e9441 call 0x105ea2e0 */
  push32(0x105e9446u); f_105ea2e0();
  /* 105e9446 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e9449:;
  /* 105e9449 push 3 */
  push32((uint32_t)(0x3u));
  /* 105e944b call 0x105e5650 */
  push32(0x105e9450u); f_105e5650();
L_105e9450:;
  /* 105e9450 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9454 je 0x105e9462 */
  if (C.zf) goto L_105e9462;
  /* 105e9456 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e945a je 0x105e9462 */
  if (C.zf) goto L_105e9462;
  /* 105e945c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9460 jne 0x105e948e */
  if (!C.zf) goto L_105e948e;
L_105e9462:;
  /* 105e9462 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9465 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 105e9468 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105e946b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e946e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 105e9475 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9479 jne 0x105e948e */
  if (!C.zf) goto L_105e948e;
  /* 105e947b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e947e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 105e9481 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105e9484 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9487 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_105e948e:;
  /* 105e948e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9492 jne 0x105e94d0 */
  if (!C.zf) goto L_105e94d0;
  /* 105e9494 mov eax, dword ptr [0x1060f138] */
  EAX = (r32((uint32_t)(0x1060f138)));
  /* 105e9499 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105e949c jmp 0x105e94a7 */
  goto L_105e94a7;
L_105e949e:;
  /* 105e949e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e94a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e94a4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105e94a7:;
  /* 105e94a7 mov edx, dword ptr [0x1060f138] */
  EDX = (r32((uint32_t)(0x1060f138)));
  /* 105e94ad add edx, dword ptr [0x1060f13c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1060f13c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e94b3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e94b6 jge 0x105e94ce */
  if ((C.sf==C.of)) goto L_105e94ce;
  /* 105e94b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e94bb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e94be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e94c1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 105e94c4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 105e94cc jmp 0x105e949e */
  goto L_105e949e;
L_105e94ce:;
  /* 105e94ce jmp 0x105e94d9 */
  goto L_105e94d9;
L_105e94d0:;
  /* 105e94d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105e94d3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_105e94d9:;
  /* 105e94d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e94dd je 0x105e94e9 */
  if (C.zf) goto L_105e94e9;
  /* 105e94df push 1 */
  push32((uint32_t)(0x1u));
  /* 105e94e1 call 0x105ea2e0 */
  push32(0x105e94e6u); f_105ea2e0();
  /* 105e94e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e94e9:;
  /* 105e94e9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e94ed jne 0x105e9500 */
  if (!C.zf) goto L_105e9500;
  /* 105e94ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e94f2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 105e94f5 push edx */
  push32((uint32_t)(EDX));
  /* 105e94f6 push 8 */
  push32((uint32_t)(0x8u));
  /* 105e94f8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x105e94fbu);
  /* 105e94fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e94fe jmp 0x105e950a */
  goto L_105e950a;
L_105e9500:;
  /* 105e9500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9503 push eax */
  push32((uint32_t)(EAX));
  /* 105e9504 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x105e9507u);
  /* 105e9507 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e950a:;
  /* 105e950a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e950e je 0x105e951c */
  if (C.zf) goto L_105e951c;
  /* 105e9510 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9514 je 0x105e951c */
  if (C.zf) goto L_105e951c;
  /* 105e9516 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e951a jne 0x105e9534 */
  if (!C.zf) goto L_105e9534;
L_105e951c:;
  /* 105e951c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e951f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105e9522 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 105e9525 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9529 jne 0x105e9534 */
  if (!C.zf) goto L_105e9534;
  /* 105e952b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e952e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e9531 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_105e9534:;
  /* 105e9534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105e9536:;
  /* 105e9536 mov esp, ebp */
  ESP = (EBP);
  /* 105e9538 pop ebp */
  EBP = (pop32());
  /* 105e9539 ret  */
  ESPCHK(0x105e9330u, _esp0);
  ESP += 4; return;
}

/* FUN_10009570 @ 0x105e9570 (91 bytes, 35 insns) */
void f_105e9570(void) {
  FTRACE(0x105e9570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9570 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9571 mov ebp, esp */
  EBP = (ESP);
  /* 105e9573 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9574 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e9577 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105e957a:;
  /* 105e957a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e957d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105e9580 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9583 je 0x105e95a3 */
  if (C.zf) goto L_105e95a3;
  /* 105e9585 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9588 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e958b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e958e mov ecx, dword ptr [0x1060f144] */
  ECX = (r32((uint32_t)(0x1060f144)));
  /* 105e9594 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e9597 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e959a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e959c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e959f jae 0x105e95a3 */
  if (!C.cf) goto L_105e95a3;
  /* 105e95a1 jmp 0x105e957a */
  goto L_105e957a;
L_105e95a3:;
  /* 105e95a3 mov eax, dword ptr [0x1060f144] */
  EAX = (r32((uint32_t)(0x1060f144)));
  /* 105e95a8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e95ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e95ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e95b0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e95b3 jae 0x105e95c5 */
  if (!C.cf) goto L_105e95c5;
  /* 105e95b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e95b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105e95bb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e95be jne 0x105e95c5 */
  if (!C.zf) goto L_105e95c5;
  /* 105e95c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e95c3 jmp 0x105e95c7 */
  goto L_105e95c7;
L_105e95c5:;
  /* 105e95c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105e95c7:;
  /* 105e95c7 mov esp, ebp */
  ESP = (EBP);
  /* 105e95c9 pop ebp */
  EBP = (pop32());
  /* 105e95ca ret  */
  ESPCHK(0x105e9570u, _esp0);
  ESP += 4; return;
}

/* FUN_100095d0 @ 0x105e95d0 (13 bytes, 6 insns) */
void f_105e95d0(void) {
  FTRACE(0x105e95d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e95d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e95d1 mov ebp, esp */
  EBP = (ESP);
  /* 105e95d3 call 0x105e58d0 */
  push32(0x105e95d8u); f_105e58d0();
  /* 105e95d8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e95db pop ebp */
  EBP = (pop32());
  /* 105e95dc ret  */
  ESPCHK(0x105e95d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095e0 @ 0x105e95e0 (13 bytes, 6 insns) */
void f_105e95e0(void) {
  FTRACE(0x105e95e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e95e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e95e1 mov ebp, esp */
  EBP = (ESP);
  /* 105e95e3 call 0x105e58d0 */
  push32(0x105e95e8u); f_105e58d0();
  /* 105e95e8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e95eb pop ebp */
  EBP = (pop32());
  /* 105e95ec ret  */
  ESPCHK(0x105e95e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095f0 @ 0x105e95f0 (187 bytes, 54 insns) */
void f_105e95f0(void) {
  FTRACE(0x105e95f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e95f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e95f1 mov ebp, esp */
  EBP = (ESP);
  /* 105e95f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e95f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105e95fd cmp dword ptr [0x1061092c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1061092c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9604 jne 0x105e9663 */
  if (!C.zf) goto L_105e9663;
  /* 105e9606 push 0x1060ba7c */
  push32((uint32_t)(0x1060ba7cu));
  /* 105e960b call dword ptr [0x10613220] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613220))), 0x105e9611u);
  /* 105e9611 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105e9614 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9618 je 0x105e9637 */
  if (C.zf) goto L_105e9637;
  /* 105e961a push 0x1060c73c */
  push32((uint32_t)(0x1060c73cu));
  /* 105e961f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e9622 push eax */
  push32((uint32_t)(EAX));
  /* 105e9623 call dword ptr [0x10613288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613288))), 0x105e9629u);
  /* 105e9629 mov dword ptr [0x1061092c], eax */
  w32((uint32_t)(0x1061092c), (EAX));
  /* 105e962e cmp dword ptr [0x1061092c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1061092c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9635 jne 0x105e963b */
  if (!C.zf) goto L_105e963b;
L_105e9637:;
  /* 105e9637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e9639 jmp 0x105e96a7 */
  goto L_105e96a7;
L_105e963b:;
  /* 105e963b push 0x1060c72c */
  push32((uint32_t)(0x1060c72cu));
  /* 105e9640 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e9643 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9644 call dword ptr [0x10613288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613288))), 0x105e964au);
  /* 105e964a mov dword ptr [0x10610930], eax */
  w32((uint32_t)(0x10610930), (EAX));
  /* 105e964f push 0x1060c718 */
  push32((uint32_t)(0x1060c718u));
  /* 105e9654 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e9657 push edx */
  push32((uint32_t)(EDX));
  /* 105e9658 call dword ptr [0x10613288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613288))), 0x105e965eu);
  /* 105e965e mov dword ptr [0x10610934], eax */
  w32((uint32_t)(0x10610934), (EAX));
L_105e9663:;
  /* 105e9663 cmp dword ptr [0x10610930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e966a je 0x105e9675 */
  if (C.zf) goto L_105e9675;
  /* 105e966c call dword ptr [0x10610930] */
  call_ind((uint32_t)(r32((uint32_t)(0x10610930))), 0x105e9672u);
  /* 105e9672 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105e9675:;
  /* 105e9675 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9679 je 0x105e9691 */
  if (C.zf) goto L_105e9691;
  /* 105e967b cmp dword ptr [0x10610934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9682 je 0x105e9691 */
  if (C.zf) goto L_105e9691;
  /* 105e9684 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9687 push eax */
  push32((uint32_t)(EAX));
  /* 105e9688 call dword ptr [0x10610934] */
  call_ind((uint32_t)(r32((uint32_t)(0x10610934))), 0x105e968eu);
  /* 105e968e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105e9691:;
  /* 105e9691 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e9694 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9695 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e9698 push edx */
  push32((uint32_t)(EDX));
  /* 105e9699 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e969c push eax */
  push32((uint32_t)(EAX));
  /* 105e969d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e96a0 push ecx */
  push32((uint32_t)(ECX));
  /* 105e96a1 call dword ptr [0x1061092c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061092c))), 0x105e96a7u);
L_105e96a7:;
  /* 105e96a7 mov esp, ebp */
  ESP = (EBP);
  /* 105e96a9 pop ebp */
  EBP = (pop32());
  /* 105e96aa ret  */
  ESPCHK(0x105e95f0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x105e96b0 (254 bytes, 109 insns) */
void f_105e96b0(void) {
  FTRACE(0x105e96b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e96b0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 105e96b4 push edi */
  push32((uint32_t)(EDI));
  /* 105e96b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e96b7 je 0x105e9733 */
  if (C.zf) goto L_105e9733;
  /* 105e96b9 push esi */
  push32((uint32_t)(ESI));
  /* 105e96ba push ebx */
  push32((uint32_t)(EBX));
  /* 105e96bb mov ebx, ecx */
  EBX = (ECX);
  /* 105e96bd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 105e96c1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 105e96c7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 105e96cb jne 0x105e96d4 */
  if (!C.zf) goto L_105e96d4;
  /* 105e96cd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105e96d0 jne 0x105e9741 */
  if (!C.zf) goto L_105e9741;
  /* 105e96d2 jmp 0x105e96f5 */
  goto L_105e96f5;
L_105e96d4:;
  /* 105e96d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105e96d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105e96d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105e96d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105e96da dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105e96db je 0x105e9702 */
  if (C.zf) goto L_105e9702;
  /* 105e96dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105e96df je 0x105e970a */
  if (C.zf) goto L_105e970a;
  /* 105e96e1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 105e96e7 jne 0x105e96d4 */
  if (!C.zf) goto L_105e96d4;
  /* 105e96e9 mov ebx, ecx */
  EBX = (ECX);
  /* 105e96eb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105e96ee jne 0x105e9741 */
  if (!C.zf) goto L_105e9741;
L_105e96f0:;
  /* 105e96f0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 105e96f3 je 0x105e9702 */
  if (C.zf) goto L_105e9702;
L_105e96f5:;
  /* 105e96f5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105e96f7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105e96f8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105e96fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105e96fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105e96fd je 0x105e972e */
  if (C.zf) goto L_105e972e;
  /* 105e96ff dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 105e9700 jne 0x105e96f5 */
  if (!C.zf) goto L_105e96f5;
L_105e9702:;
  /* 105e9702 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 105e9706 pop ebx */
  EBX = (pop32());
  /* 105e9707 pop esi */
  ESI = (pop32());
  /* 105e9708 pop edi */
  EDI = (pop32());
  /* 105e9709 ret  */
  ESPCHK(0x105e96b0u, _esp0);
  ESP += 4; return;
L_105e970a:;
  /* 105e970a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 105e9710 je 0x105e9724 */
  if (C.zf) goto L_105e9724;
L_105e9712:;
  /* 105e9712 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105e9714 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105e9715 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105e9716 je 0x105e97a6 */
  if (C.zf) goto L_105e97a6;
  /* 105e971c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 105e9722 jne 0x105e9712 */
  if (!C.zf) goto L_105e9712;
L_105e9724:;
  /* 105e9724 mov ebx, ecx */
  EBX = (ECX);
  /* 105e9726 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105e9729 jne 0x105e9797 */
  if (!C.zf) goto L_105e9797;
L_105e972b:;
  /* 105e972b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105e972d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_105e972e:;
  /* 105e972e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 105e972f jne 0x105e972b */
  if (!C.zf) goto L_105e972b;
  /* 105e9731 pop ebx */
  EBX = (pop32());
  /* 105e9732 pop esi */
  ESI = (pop32());
L_105e9733:;
  /* 105e9733 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105e9737 pop edi */
  EDI = (pop32());
  /* 105e9738 ret  */
  ESPCHK(0x105e96b0u, _esp0);
  ESP += 4; return;
L_105e9739:;
  /* 105e9739 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105e973b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105e973e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105e973f je 0x105e96f0 */
  if (C.zf) goto L_105e96f0;
L_105e9741:;
  /* 105e9741 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 105e9746 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 105e9748 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e974a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e974d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105e974f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 105e9751 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9754 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 105e9759 je 0x105e9739 */
  if (C.zf) goto L_105e9739;
  /* 105e975b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 105e975d je 0x105e978b */
  if (C.zf) goto L_105e978b;
  /* 105e975f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 105e9761 je 0x105e9781 */
  if (C.zf) goto L_105e9781;
  /* 105e9763 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 105e9769 je 0x105e9777 */
  if (C.zf) goto L_105e9777;
  /* 105e976b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 105e9771 jne 0x105e9739 */
  if (!C.zf) goto L_105e9739;
  /* 105e9773 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105e9775 jmp 0x105e978f */
  goto L_105e978f;
L_105e9777:;
  /* 105e9777 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105e977d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105e977f jmp 0x105e978f */
  goto L_105e978f;
L_105e9781:;
  /* 105e9781 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105e9787 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105e9789 jmp 0x105e978f */
  goto L_105e978f;
L_105e978b:;
  /* 105e978b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105e978d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_105e978f:;
  /* 105e978f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9792 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e9794 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105e9795 je 0x105e97a1 */
  if (C.zf) goto L_105e97a1;
L_105e9797:;
  /* 105e9797 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105e9799:;
  /* 105e9799 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 105e979b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105e979e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105e979f jne 0x105e9799 */
  if (!C.zf) goto L_105e9799;
L_105e97a1:;
  /* 105e97a1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 105e97a4 jne 0x105e972b */
  if (!C.zf) goto L_105e972b;
L_105e97a6:;
  /* 105e97a6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 105e97aa pop ebx */
  EBX = (pop32());
  /* 105e97ab pop esi */
  ESI = (pop32());
  /* 105e97ac pop edi */
  EDI = (pop32());
  /* 105e97ad ret  */
  ESPCHK(0x105e96b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097b0 @ 0x105e97b0 (130 bytes, 43 insns) */
void f_105e97b0(void) {
  FTRACE(0x105e97b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e97b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e97b1 mov ebp, esp */
  EBP = (ESP);
  /* 105e97b3 push ecx */
  push32((uint32_t)(ECX));
  /* 105e97b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e97b7 cmp eax, dword ptr [0x106122bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106122bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e97bd jae 0x105e97e1 */
  if (!C.cf) goto L_105e97e1;
  /* 105e97bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e97c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105e97c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e97c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105e97cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e97ce mov eax, dword ptr [ecx*4 + 0x10612180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10612180)));
  /* 105e97d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105e97da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105e97dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e97df jne 0x105e97fc */
  if (!C.zf) goto L_105e97fc;
L_105e97e1:;
  /* 105e97e1 call 0x105ed400 */
  push32(0x105e97e6u); f_105ed400();
  /* 105e97e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105e97ec call 0x105ed410 */
  push32(0x105e97f1u); f_105ed410();
  /* 105e97f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105e97f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e97fa jmp 0x105e982e */
  goto L_105e982e;
L_105e97fc:;
  /* 105e97fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e97ff push edx */
  push32((uint32_t)(EDX));
  /* 105e9800 call 0x105ed930 */
  push32(0x105e9805u); f_105ed930();
  /* 105e9805 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9808 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e980b push eax */
  push32((uint32_t)(EAX));
  /* 105e980c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e980f push ecx */
  push32((uint32_t)(ECX));
  /* 105e9810 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9813 push edx */
  push32((uint32_t)(EDX));
  /* 105e9814 call 0x105e9840 */
  push32(0x105e9819u); f_105e9840();
  /* 105e9819 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e981c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e981f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9822 push eax */
  push32((uint32_t)(EAX));
  /* 105e9823 call 0x105ed9c0 */
  push32(0x105e9828u); f_105ed9c0();
  /* 105e9828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e982b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105e982e:;
  /* 105e982e mov esp, ebp */
  ESP = (EBP);
  /* 105e9830 pop ebp */
  EBP = (pop32());
  /* 105e9831 ret  */
  ESPCHK(0x105e97b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009840 @ 0x105e9840 (178 bytes, 56 insns) */
void f_105e9840(void) {
  FTRACE(0x105e9840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9840 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9841 mov ebp, esp */
  EBP = (ESP);
  /* 105e9843 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9849 push eax */
  push32((uint32_t)(EAX));
  /* 105e984a call 0x105ed7b0 */
  push32(0x105e984fu); f_105ed7b0();
  /* 105e984f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9852 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105e9855 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9859 jne 0x105e986e */
  if (!C.zf) goto L_105e986e;
  /* 105e985b call 0x105ed400 */
  push32(0x105e9860u); f_105ed400();
  /* 105e9860 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105e9866 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e9869 jmp 0x105e98ee */
  goto L_105e98ee;
L_105e986e:;
  /* 105e986e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e9871 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9872 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e9874 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e9877 push edx */
  push32((uint32_t)(EDX));
  /* 105e9878 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e987b push eax */
  push32((uint32_t)(EAX));
  /* 105e987c call dword ptr [0x1061329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061329c))), 0x105e9882u);
  /* 105e9882 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105e9885 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9889 jne 0x105e9896 */
  if (!C.zf) goto L_105e9896;
  /* 105e988b call dword ptr [0x10613250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613250))), 0x105e9891u);
  /* 105e9891 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e9894 jmp 0x105e989d */
  goto L_105e989d;
L_105e9896:;
  /* 105e9896 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105e989d:;
  /* 105e989d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e98a1 je 0x105e98b4 */
  if (C.zf) goto L_105e98b4;
  /* 105e98a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e98a6 push ecx */
  push32((uint32_t)(ECX));
  /* 105e98a7 call 0x105ed360 */
  push32(0x105e98acu); f_105ed360();
  /* 105e98ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e98af or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e98b2 jmp 0x105e98ee */
  goto L_105e98ee;
L_105e98b4:;
  /* 105e98b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e98b7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 105e98ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e98bd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 105e98c0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e98c3 mov ecx, dword ptr [edx*4 + 0x10612180] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10612180)));
  /* 105e98ca mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 105e98ce and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 105e98d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e98d4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105e98d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e98da and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105e98dd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e98e0 mov eax, dword ptr [eax*4 + 0x10612180] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10612180)));
  /* 105e98e7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 105e98eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105e98ee:;
  /* 105e98ee mov esp, ebp */
  ESP = (EBP);
  /* 105e98f0 pop ebp */
  EBP = (pop32());
  /* 105e98f1 ret  */
  ESPCHK(0x105e9840u, _esp0);
  ESP += 4; return;
}

/* FUN_10009900 @ 0x105e9900 (130 bytes, 43 insns) */
void f_105e9900(void) {
  FTRACE(0x105e9900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9900 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9901 mov ebp, esp */
  EBP = (ESP);
  /* 105e9903 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9907 cmp eax, dword ptr [0x106122bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106122bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e990d jae 0x105e9931 */
  if (!C.cf) goto L_105e9931;
  /* 105e990f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9912 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105e9915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9918 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105e991b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e991e mov eax, dword ptr [ecx*4 + 0x10612180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10612180)));
  /* 105e9925 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105e992a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105e992d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e992f jne 0x105e994c */
  if (!C.zf) goto L_105e994c;
L_105e9931:;
  /* 105e9931 call 0x105ed400 */
  push32(0x105e9936u); f_105ed400();
  /* 105e9936 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105e993c call 0x105ed410 */
  push32(0x105e9941u); f_105ed410();
  /* 105e9941 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105e9947 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e994a jmp 0x105e997e */
  goto L_105e997e;
L_105e994c:;
  /* 105e994c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e994f push edx */
  push32((uint32_t)(EDX));
  /* 105e9950 call 0x105ed930 */
  push32(0x105e9955u); f_105ed930();
  /* 105e9955 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9958 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e995b push eax */
  push32((uint32_t)(EAX));
  /* 105e995c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e995f push ecx */
  push32((uint32_t)(ECX));
  /* 105e9960 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9963 push edx */
  push32((uint32_t)(EDX));
  /* 105e9964 call 0x105e9990 */
  push32(0x105e9969u); f_105e9990();
  /* 105e9969 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e996c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e996f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9972 push eax */
  push32((uint32_t)(EAX));
  /* 105e9973 call 0x105ed9c0 */
  push32(0x105e9978u); f_105ed9c0();
  /* 105e9978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e997b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105e997e:;
  /* 105e997e mov esp, ebp */
  ESP = (EBP);
  /* 105e9980 pop ebp */
  EBP = (pop32());
  /* 105e9981 ret  */
  ESPCHK(0x105e9900u, _esp0);
  ESP += 4; return;
}

/* FUN_10009990 @ 0x105e9990 (627 bytes, 182 insns) */
void f_105e9990(void) {
  FTRACE(0x105e9990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9990 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9991 mov ebp, esp */
  EBP = (ESP);
  /* 105e9993 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9999 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105e99a0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e99a3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 105e99a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e99ad jne 0x105e99b6 */
  if (!C.zf) goto L_105e99b6;
  /* 105e99af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e99b1 jmp 0x105e9bff */
  goto L_105e9bff;
L_105e99b6:;
  /* 105e99b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e99b9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105e99bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e99bf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105e99c2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e99c5 mov eax, dword ptr [ecx*4 + 0x10612180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10612180)));
  /* 105e99cc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105e99d1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 105e99d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105e99d6 je 0x105e99e8 */
  if (C.zf) goto L_105e99e8;
  /* 105e99d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 105e99da push 0 */
  push32((uint32_t)(0x0u));
  /* 105e99dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e99df push edx */
  push32((uint32_t)(EDX));
  /* 105e99e0 call 0x105e9840 */
  push32(0x105e99e5u); f_105e9840();
  /* 105e99e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e99e8:;
  /* 105e99e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e99eb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105e99ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e99f1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105e99f4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e99f7 mov edx, dword ptr [eax*4 + 0x10612180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10612180)));
  /* 105e99fe movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 105e9a03 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 105e9a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e9a0a je 0x105e9b1c */
  if (C.zf) goto L_105e9b1c;
  /* 105e9a10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e9a13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105e9a16 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_105e9a1d:;
  /* 105e9a1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9a20 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9a23 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9a26 jae 0x105e9b1a */
  if (!C.cf) goto L_105e9b1a;
  /* 105e9a2c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 105e9a32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105e9a35:;
  /* 105e9a35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e9a38 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 105e9a3e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9a40 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9a46 jge 0x105e9aa7 */
  if ((C.sf==C.of)) goto L_105e9aa7;
  /* 105e9a48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9a4b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9a4e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9a51 jae 0x105e9aa7 */
  if (!C.cf) goto L_105e9aa7;
  /* 105e9a53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9a56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105e9a58 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 105e9a5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9a61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9a64 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105e9a67 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 105e9a6e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9a71 jne 0x105e9a91 */
  if (!C.zf) goto L_105e9a91;
  /* 105e9a73 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 105e9a79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9a7c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 105e9a82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e9a85 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 105e9a88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e9a8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9a8e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105e9a91:;
  /* 105e9a91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e9a94 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 105e9a9a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 105e9a9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e9a9f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9aa2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105e9aa5 jmp 0x105e9a35 */
  goto L_105e9a35;
L_105e9aa7:;
  /* 105e9aa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e9aa9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 105e9aaf push edx */
  push32((uint32_t)(EDX));
  /* 105e9ab0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e9ab3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 105e9ab9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9abb push eax */
  push32((uint32_t)(EAX));
  /* 105e9abc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 105e9ac2 push edx */
  push32((uint32_t)(EDX));
  /* 105e9ac3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9ac6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105e9ac9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9acc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105e9acf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e9ad2 mov edx, dword ptr [eax*4 + 0x10612180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10612180)));
  /* 105e9ad9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 105e9adc push eax */
  push32((uint32_t)(EAX));
  /* 105e9add call dword ptr [0x10613214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613214))), 0x105e9ae3u);
  /* 105e9ae3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e9ae5 je 0x105e9b0a */
  if (C.zf) goto L_105e9b0a;
  /* 105e9ae7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e9aea add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9af0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105e9af3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e9af6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 105e9afc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9afe cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9b04 jge 0x105e9b08 */
  if ((C.sf==C.of)) goto L_105e9b08;
  /* 105e9b06 jmp 0x105e9b1a */
  goto L_105e9b1a;
L_105e9b08:;
  /* 105e9b08 jmp 0x105e9b15 */
  goto L_105e9b15;
L_105e9b0a:;
  /* 105e9b0a call dword ptr [0x10613250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613250))), 0x105e9b10u);
  /* 105e9b10 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105e9b13 jmp 0x105e9b1a */
  goto L_105e9b1a;
L_105e9b15:;
  /* 105e9b15 jmp 0x105e9a1d */
  goto L_105e9a1d;
L_105e9b1a:;
  /* 105e9b1a jmp 0x105e9b6c */
  goto L_105e9b6c;
L_105e9b1c:;
  /* 105e9b1c push 0 */
  push32((uint32_t)(0x0u));
  /* 105e9b1e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 105e9b24 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9b25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105e9b28 push edx */
  push32((uint32_t)(EDX));
  /* 105e9b29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e9b2c push eax */
  push32((uint32_t)(EAX));
  /* 105e9b2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9b30 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105e9b33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9b36 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105e9b39 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e9b3c mov eax, dword ptr [ecx*4 + 0x10612180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10612180)));
  /* 105e9b43 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 105e9b46 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9b47 call dword ptr [0x10613214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613214))), 0x105e9b4du);
  /* 105e9b4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e9b4f je 0x105e9b63 */
  if (C.zf) goto L_105e9b63;
  /* 105e9b51 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105e9b58 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 105e9b5e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105e9b61 jmp 0x105e9b6c */
  goto L_105e9b6c;
L_105e9b63:;
  /* 105e9b63 call dword ptr [0x10613250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613250))), 0x105e9b69u);
  /* 105e9b69 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105e9b6c:;
  /* 105e9b6c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9b70 jne 0x105e9bf6 */
  if (!C.zf) goto L_105e9bf6;
  /* 105e9b76 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9b7a je 0x105e9baa */
  if (C.zf) goto L_105e9baa;
  /* 105e9b7c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9b80 jne 0x105e9b99 */
  if (!C.zf) goto L_105e9b99;
  /* 105e9b82 call 0x105ed400 */
  push32(0x105e9b87u); f_105ed400();
  /* 105e9b87 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105e9b8d call 0x105ed410 */
  push32(0x105e9b92u); f_105ed410();
  /* 105e9b92 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e9b95 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105e9b97 jmp 0x105e9ba5 */
  goto L_105e9ba5;
L_105e9b99:;
  /* 105e9b99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105e9b9c push edx */
  push32((uint32_t)(EDX));
  /* 105e9b9d call 0x105ed360 */
  push32(0x105e9ba2u); f_105ed360();
  /* 105e9ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e9ba5:;
  /* 105e9ba5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e9ba8 jmp 0x105e9bff */
  goto L_105e9bff;
L_105e9baa:;
  /* 105e9baa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9bad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105e9bb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9bb3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105e9bb6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e9bb9 mov edx, dword ptr [eax*4 + 0x10612180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10612180)));
  /* 105e9bc0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 105e9bc5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 105e9bc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e9bca je 0x105e9bdb */
  if (C.zf) goto L_105e9bdb;
  /* 105e9bcc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e9bcf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105e9bd2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9bd5 jne 0x105e9bdb */
  if (!C.zf) goto L_105e9bdb;
  /* 105e9bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e9bd9 jmp 0x105e9bff */
  goto L_105e9bff;
L_105e9bdb:;
  /* 105e9bdb call 0x105ed400 */
  push32(0x105e9be0u); f_105ed400();
  /* 105e9be0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 105e9be6 call 0x105ed410 */
  push32(0x105e9bebu); f_105ed410();
  /* 105e9beb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105e9bf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e9bf4 jmp 0x105e9bff */
  goto L_105e9bff;
L_105e9bf6:;
  /* 105e9bf6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105e9bf9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_105e9bff:;
  /* 105e9bff mov esp, ebp */
  ESP = (EBP);
  /* 105e9c01 pop ebp */
  EBP = (pop32());
  /* 105e9c02 ret  */
  ESPCHK(0x105e9990u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c10 @ 0x105e9c10 (199 bytes, 68 insns) */
void f_105e9c10(void) {
  FTRACE(0x105e9c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9c10 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9c11 mov ebp, esp */
  EBP = (ESP);
  /* 105e9c13 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9c14 push ebx */
  push32((uint32_t)(EBX));
  /* 105e9c15 push esi */
  push32((uint32_t)(ESI));
  /* 105e9c16 push edi */
  push32((uint32_t)(EDI));
L_105e9c17:;
  /* 105e9c17 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9c1b jne 0x105e9c3b */
  if (!C.zf) goto L_105e9c3b;
  /* 105e9c1d push 0x1060bc30 */
  push32((uint32_t)(0x1060bc30u));
  /* 105e9c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 105e9c24 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 105e9c26 push 0x1060c748 */
  push32((uint32_t)(0x1060c748u));
  /* 105e9c2b push 2 */
  push32((uint32_t)(0x2u));
  /* 105e9c2d call 0x105e3e30 */
  push32(0x105e9c32u); f_105e3e30();
  /* 105e9c32 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9c35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9c38 jne 0x105e9c3b */
  if (!C.zf) goto L_105e9c3b;
  /* 105e9c3a int3  */
  x86_unimpl("int3 @ 0x105e9c3a");
L_105e9c3b:;
  /* 105e9c3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e9c3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e9c3f jne 0x105e9c17 */
  if (!C.zf) goto L_105e9c17;
  /* 105e9c41 mov ecx, dword ptr [0x10610938] */
  ECX = (r32((uint32_t)(0x10610938)));
  /* 105e9c47 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9c4a mov dword ptr [0x10610938], ecx */
  w32((uint32_t)(0x10610938), (ECX));
  /* 105e9c50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9c53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105e9c56 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 105e9c58 push 0x1060c748 */
  push32((uint32_t)(0x1060c748u));
  /* 105e9c5d push 2 */
  push32((uint32_t)(0x2u));
  /* 105e9c5f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 105e9c64 call 0x105e5e90 */
  push32(0x105e9c69u); f_105e5e90();
  /* 105e9c69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9c6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9c6f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 105e9c72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9c75 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9c79 je 0x105e9c96 */
  if (C.zf) goto L_105e9c96;
  /* 105e9c7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9c7e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105e9c81 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 105e9c84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9c87 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 105e9c8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9c8d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 105e9c94 jmp 0x105e9cbb */
  goto L_105e9cbb;
L_105e9c96:;
  /* 105e9c96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9c99 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105e9c9c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 105e9c9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9ca2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 105e9ca5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9ca8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9cab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9cae mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 105e9cb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9cb4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_105e9cbb:;
  /* 105e9cbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9cbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9cc1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105e9cc4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105e9cc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9cc9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 105e9cd0 pop edi */
  EDI = (pop32());
  /* 105e9cd1 pop esi */
  ESI = (pop32());
  /* 105e9cd2 pop ebx */
  EBX = (pop32());
  /* 105e9cd3 mov esp, ebp */
  ESP = (EBP);
  /* 105e9cd5 pop ebp */
  EBP = (pop32());
  /* 105e9cd6 ret  */
  ESPCHK(0x105e9c10u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x105e9ce0 (50 bytes, 17 insns) */
void f_105e9ce0(void) {
  FTRACE(0x105e9ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9ce1 mov ebp, esp */
  EBP = (ESP);
  /* 105e9ce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9ce6 cmp eax, dword ptr [0x106122bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106122bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9cec jb 0x105e9cf2 */
  if (C.cf) goto L_105e9cf2;
  /* 105e9cee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e9cf0 jmp 0x105e9d10 */
  goto L_105e9d10;
L_105e9cf2:;
  /* 105e9cf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9cf5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105e9cf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9cfb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105e9cfe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e9d01 mov eax, dword ptr [ecx*4 + 0x10612180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10612180)));
  /* 105e9d08 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105e9d0d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_105e9d10:;
  /* 105e9d10 pop ebp */
  EBP = (pop32());
  /* 105e9d11 ret  */
  ESPCHK(0x105e9ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d20 @ 0x105e9d20 (300 bytes, 80 insns) */
void f_105e9d20(void) {
  FTRACE(0x105e9d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9d20 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9d21 mov ebp, esp */
  EBP = (ESP);
  /* 105e9d23 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9d24 cmp dword ptr [0x10612160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10612160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9d2b jne 0x105e9d39 */
  if (!C.zf) goto L_105e9d39;
  /* 105e9d2d mov dword ptr [0x10612160], 0x200 */
  w32((uint32_t)(0x10612160), (0x200u));
  /* 105e9d37 jmp 0x105e9d4c */
  goto L_105e9d4c;
L_105e9d39:;
  /* 105e9d39 cmp dword ptr [0x10612160], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10612160))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9d40 jge 0x105e9d4c */
  if ((C.sf==C.of)) goto L_105e9d4c;
  /* 105e9d42 mov dword ptr [0x10612160], 0x14 */
  w32((uint32_t)(0x10612160), (0x14u));
L_105e9d4c:;
  /* 105e9d4c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 105e9d51 push 0x1060c754 */
  push32((uint32_t)(0x1060c754u));
  /* 105e9d56 push 2 */
  push32((uint32_t)(0x2u));
  /* 105e9d58 push 4 */
  push32((uint32_t)(0x4u));
  /* 105e9d5a mov eax, dword ptr [0x10612160] */
  EAX = (r32((uint32_t)(0x10612160)));
  /* 105e9d5f push eax */
  push32((uint32_t)(EAX));
  /* 105e9d60 call 0x105e62a0 */
  push32(0x105e9d65u); f_105e62a0();
  /* 105e9d65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9d68 mov dword ptr [0x10610e0c], eax */
  w32((uint32_t)(0x10610e0c), (EAX));
  /* 105e9d6d cmp dword ptr [0x10610e0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610e0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9d74 jne 0x105e9db5 */
  if (!C.zf) goto L_105e9db5;
  /* 105e9d76 mov dword ptr [0x10612160], 0x14 */
  w32((uint32_t)(0x10612160), (0x14u));
  /* 105e9d80 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 105e9d85 push 0x1060c754 */
  push32((uint32_t)(0x1060c754u));
  /* 105e9d8a push 2 */
  push32((uint32_t)(0x2u));
  /* 105e9d8c push 4 */
  push32((uint32_t)(0x4u));
  /* 105e9d8e mov ecx, dword ptr [0x10612160] */
  ECX = (r32((uint32_t)(0x10612160)));
  /* 105e9d94 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9d95 call 0x105e62a0 */
  push32(0x105e9d9au); f_105e62a0();
  /* 105e9d9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9d9d mov dword ptr [0x10610e0c], eax */
  w32((uint32_t)(0x10610e0c), (EAX));
  /* 105e9da2 cmp dword ptr [0x10610e0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610e0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9da9 jne 0x105e9db5 */
  if (!C.zf) goto L_105e9db5;
  /* 105e9dab push 0x1a */
  push32((uint32_t)(0x1au));
  /* 105e9dad call 0x105e3ce0 */
  push32(0x105e9db2u); f_105e3ce0();
  /* 105e9db2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105e9db5:;
  /* 105e9db5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105e9dbc jmp 0x105e9dc7 */
  goto L_105e9dc7;
L_105e9dbe:;
  /* 105e9dbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9dc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9dc4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105e9dc7:;
  /* 105e9dc7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9dcb jge 0x105e9de6 */
  if ((C.sf==C.of)) goto L_105e9de6;
  /* 105e9dcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9dd0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105e9dd3 add eax, 0x1060eb50 */
  { uint32_t _a=(EAX),_b=(0x1060eb50u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9dd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9ddb mov edx, dword ptr [0x10610e0c] */
  EDX = (r32((uint32_t)(0x10610e0c)));
  /* 105e9de1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 105e9de4 jmp 0x105e9dbe */
  goto L_105e9dbe;
L_105e9de6:;
  /* 105e9de6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105e9ded jmp 0x105e9df8 */
  goto L_105e9df8;
L_105e9def:;
  /* 105e9def mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9df2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9df5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105e9df8:;
  /* 105e9df8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9dfc jge 0x105e9e48 */
  if ((C.sf==C.of)) goto L_105e9e48;
  /* 105e9dfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9e01 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105e9e04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9e07 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105e9e0a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e9e0d mov eax, dword ptr [ecx*4 + 0x10612180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10612180)));
  /* 105e9e14 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9e18 je 0x105e9e36 */
  if (C.zf) goto L_105e9e36;
  /* 105e9e1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9e1d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105e9e20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9e23 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105e9e26 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105e9e29 mov eax, dword ptr [ecx*4 + 0x10612180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10612180)));
  /* 105e9e30 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9e34 jne 0x105e9e46 */
  if (!C.zf) goto L_105e9e46;
L_105e9e36:;
  /* 105e9e36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105e9e39 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105e9e3c mov dword ptr [ecx + 0x1060eb60], 0xffffffff */
  w32((uint32_t)(ECX + 0x1060eb60), (0xffffffffu));
L_105e9e46:;
  /* 105e9e46 jmp 0x105e9def */
  goto L_105e9def;
L_105e9e48:;
  /* 105e9e48 mov esp, ebp */
  ESP = (EBP);
  /* 105e9e4a pop ebp */
  EBP = (pop32());
  /* 105e9e4b ret  */
  ESPCHK(0x105e9d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e50 @ 0x105e9e50 (26 bytes, 9 insns) */
void f_105e9e50(void) {
  FTRACE(0x105e9e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9e50 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9e51 mov ebp, esp */
  EBP = (ESP);
  /* 105e9e53 call 0x105edc30 */
  push32(0x105e9e58u); f_105edc30();
  /* 105e9e58 movsx eax, byte ptr [0x106107e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x106107e8))));
  /* 105e9e5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105e9e61 je 0x105e9e68 */
  if (C.zf) goto L_105e9e68;
  /* 105e9e63 call 0x105ed9f0 */
  push32(0x105e9e68u); f_105ed9f0();
L_105e9e68:;
  /* 105e9e68 pop ebp */
  EBP = (pop32());
  /* 105e9e69 ret  */
  ESPCHK(0x105e9e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e70 @ 0x105e9e70 (61 bytes, 20 insns) */
void f_105e9e70(void) {
  FTRACE(0x105e9e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9e70 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9e71 mov ebp, esp */
  EBP = (ESP);
  /* 105e9e73 cmp dword ptr [ebp + 8], 0x1060eb50 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1060eb50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9e7a jb 0x105e9e9e */
  if (C.cf) goto L_105e9e9e;
  /* 105e9e7c cmp dword ptr [ebp + 8], 0x1060edb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1060edb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9e83 ja 0x105e9e9e */
  if ((!C.cf&&!C.zf)) goto L_105e9e9e;
  /* 105e9e85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9e88 sub eax, 0x1060eb50 */
  { uint32_t _a=(EAX),_b=(0x1060eb50u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9e8d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105e9e90 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9e93 push eax */
  push32((uint32_t)(EAX));
  /* 105e9e94 call 0x105ea240 */
  push32(0x105e9e99u); f_105ea240();
  /* 105e9e99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9e9c jmp 0x105e9eab */
  goto L_105e9eab;
L_105e9e9e:;
  /* 105e9e9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9ea1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9ea5 call dword ptr [0x106132a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a0))), 0x105e9eabu);
L_105e9eab:;
  /* 105e9eab pop ebp */
  EBP = (pop32());
  /* 105e9eac ret  */
  ESPCHK(0x105e9e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009eb0 @ 0x105e9eb0 (41 bytes, 16 insns) */
void f_105e9eb0(void) {
  FTRACE(0x105e9eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9eb1 mov ebp, esp */
  EBP = (ESP);
  /* 105e9eb3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9eb7 jge 0x105e9eca */
  if ((C.sf==C.of)) goto L_105e9eca;
  /* 105e9eb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9ebc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9ebf push eax */
  push32((uint32_t)(EAX));
  /* 105e9ec0 call 0x105ea240 */
  push32(0x105e9ec5u); f_105ea240();
  /* 105e9ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9ec8 jmp 0x105e9ed7 */
  goto L_105e9ed7;
L_105e9eca:;
  /* 105e9eca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e9ecd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9ed1 call dword ptr [0x106132a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a0))), 0x105e9ed7u);
L_105e9ed7:;
  /* 105e9ed7 pop ebp */
  EBP = (pop32());
  /* 105e9ed8 ret  */
  ESPCHK(0x105e9eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ee0 @ 0x105e9ee0 (61 bytes, 20 insns) */
void f_105e9ee0(void) {
  FTRACE(0x105e9ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9ee1 mov ebp, esp */
  EBP = (ESP);
  /* 105e9ee3 cmp dword ptr [ebp + 8], 0x1060eb50 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1060eb50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9eea jb 0x105e9f0e */
  if (C.cf) goto L_105e9f0e;
  /* 105e9eec cmp dword ptr [ebp + 8], 0x1060edb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1060edb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9ef3 ja 0x105e9f0e */
  if ((!C.cf&&!C.zf)) goto L_105e9f0e;
  /* 105e9ef5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9ef8 sub eax, 0x1060eb50 */
  { uint32_t _a=(EAX),_b=(0x1060eb50u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9efd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105e9f00 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9f03 push eax */
  push32((uint32_t)(EAX));
  /* 105e9f04 call 0x105ea2e0 */
  push32(0x105e9f09u); f_105ea2e0();
  /* 105e9f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9f0c jmp 0x105e9f1b */
  goto L_105e9f1b;
L_105e9f0e:;
  /* 105e9f0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9f11 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9f14 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9f15 call dword ptr [0x106132a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a4))), 0x105e9f1bu);
L_105e9f1b:;
  /* 105e9f1b pop ebp */
  EBP = (pop32());
  /* 105e9f1c ret  */
  ESPCHK(0x105e9ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f20 @ 0x105e9f20 (41 bytes, 16 insns) */
void f_105e9f20(void) {
  FTRACE(0x105e9f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9f20 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9f21 mov ebp, esp */
  EBP = (ESP);
  /* 105e9f23 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9f27 jge 0x105e9f3a */
  if ((C.sf==C.of)) goto L_105e9f3a;
  /* 105e9f29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9f2c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9f2f push eax */
  push32((uint32_t)(EAX));
  /* 105e9f30 call 0x105ea2e0 */
  push32(0x105e9f35u); f_105ea2e0();
  /* 105e9f35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9f38 jmp 0x105e9f47 */
  goto L_105e9f47;
L_105e9f3a:;
  /* 105e9f3a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e9f3d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9f40 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9f41 call dword ptr [0x106132a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a4))), 0x105e9f47u);
L_105e9f47:;
  /* 105e9f47 pop ebp */
  EBP = (pop32());
  /* 105e9f48 ret  */
  ESPCHK(0x105e9f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f50 @ 0x105e9f50 (119 bytes, 34 insns) */
void f_105e9f50(void) {
  FTRACE(0x105e9f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9f50 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9f51 mov ebp, esp */
  EBP = (ESP);
  /* 105e9f53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9f56 push 0x10610b44 */
  push32((uint32_t)(0x10610b44u));
  /* 105e9f5b call dword ptr [0x10613224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613224))), 0x105e9f61u);
  /* 105e9f61 cmp dword ptr [0x10610b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9f68 je 0x105e9f88 */
  if (C.zf) goto L_105e9f88;
  /* 105e9f6a push 0x10610b44 */
  push32((uint32_t)(0x10610b44u));
  /* 105e9f6f call dword ptr [0x10613218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613218))), 0x105e9f75u);
  /* 105e9f75 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105e9f77 call 0x105ea240 */
  push32(0x105e9f7cu); f_105ea240();
  /* 105e9f7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9f7f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105e9f86 jmp 0x105e9f8f */
  goto L_105e9f8f;
L_105e9f88:;
  /* 105e9f88 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105e9f8f:;
  /* 105e9f8f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 105e9f93 push eax */
  push32((uint32_t)(EAX));
  /* 105e9f94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105e9f97 push ecx */
  push32((uint32_t)(ECX));
  /* 105e9f98 call 0x105e9fd0 */
  push32(0x105e9f9du); f_105e9fd0();
  /* 105e9f9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9fa0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105e9fa3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9fa7 je 0x105e9fb5 */
  if (C.zf) goto L_105e9fb5;
  /* 105e9fa9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105e9fab call 0x105ea2e0 */
  push32(0x105e9fb0u); f_105ea2e0();
  /* 105e9fb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105e9fb3 jmp 0x105e9fc0 */
  goto L_105e9fc0;
L_105e9fb5:;
  /* 105e9fb5 push 0x10610b44 */
  push32((uint32_t)(0x10610b44u));
  /* 105e9fba call dword ptr [0x10613218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613218))), 0x105e9fc0u);
L_105e9fc0:;
  /* 105e9fc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105e9fc3 mov esp, ebp */
  ESP = (EBP);
  /* 105e9fc5 pop ebp */
  EBP = (pop32());
  /* 105e9fc6 ret  */
  ESPCHK(0x105e9f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fd0 @ 0x105e9fd0 (160 bytes, 50 insns) */
void f_105e9fd0(void) {
  FTRACE(0x105e9fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105e9fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 105e9fd1 mov ebp, esp */
  EBP = (ESP);
  /* 105e9fd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105e9fd6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9fda jne 0x105e9fe3 */
  if (!C.zf) goto L_105e9fe3;
  /* 105e9fdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105e9fde jmp 0x105ea06c */
  goto L_105ea06c;
L_105e9fe3:;
  /* 105e9fe3 cmp dword ptr [0x106109c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106109c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9fea jne 0x105ea01a */
  if (!C.zf) goto L_105ea01a;
  /* 105e9fec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105e9fef and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105e9ff4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105e9ff9 jle 0x105ea00b */
  if ((C.zf||C.sf!=C.of)) goto L_105ea00b;
  /* 105e9ffb call 0x105ed400 */
  push32(0x105ea000u); f_105ed400();
  /* 105ea000 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 105ea006 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ea009 jmp 0x105ea06c */
  goto L_105ea06c;
L_105ea00b:;
  /* 105ea00b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea00e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 105ea011 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 105ea013 mov eax, 1 */
  EAX = (0x1u);
  /* 105ea018 jmp 0x105ea06c */
  goto L_105ea06c;
L_105ea01a:;
  /* 105ea01a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105ea021 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 105ea024 push eax */
  push32((uint32_t)(EAX));
  /* 105ea025 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ea027 mov ecx, dword ptr [0x1060f158] */
  ECX = (r32((uint32_t)(0x1060f158)));
  /* 105ea02d push ecx */
  push32((uint32_t)(ECX));
  /* 105ea02e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea031 push edx */
  push32((uint32_t)(EDX));
  /* 105ea032 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ea034 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 105ea037 push eax */
  push32((uint32_t)(EAX));
  /* 105ea038 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105ea03d mov ecx, dword ptr [0x106109d0] */
  ECX = (r32((uint32_t)(0x106109d0)));
  /* 105ea043 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea044 call dword ptr [0x1061327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061327c))), 0x105ea04au);
  /* 105ea04a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ea04d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea051 je 0x105ea059 */
  if (C.zf) goto L_105ea059;
  /* 105ea053 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea057 je 0x105ea069 */
  if (C.zf) goto L_105ea069;
L_105ea059:;
  /* 105ea059 call 0x105ed400 */
  push32(0x105ea05eu); f_105ed400();
  /* 105ea05e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 105ea064 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ea067 jmp 0x105ea06c */
  goto L_105ea06c;
L_105ea069:;
  /* 105ea069 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105ea06c:;
  /* 105ea06c mov esp, ebp */
  ESP = (EBP);
  /* 105ea06e pop ebp */
  EBP = (pop32());
  /* 105ea06f ret  */
  ESPCHK(0x105e9fd0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x105ea070 (104 bytes, 43 insns) */
void f_105ea070(void) {
  FTRACE(0x105ea070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea070 push ebx */
  push32((uint32_t)(EBX));
  /* 105ea071 push esi */
  push32((uint32_t)(ESI));
  /* 105ea072 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 105ea076 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ea078 jne 0x105ea092 */
  if (!C.zf) goto L_105ea092;
  /* 105ea07a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 105ea07e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 105ea082 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ea084 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105ea086 mov ebx, eax */
  EBX = (EAX);
  /* 105ea088 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 105ea08c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105ea08e mov edx, ebx */
  EDX = (EBX);
  /* 105ea090 jmp 0x105ea0d3 */
  goto L_105ea0d3;
L_105ea092:;
  /* 105ea092 mov ecx, eax */
  ECX = (EAX);
  /* 105ea094 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 105ea098 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 105ea09c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_105ea0a0:;
  /* 105ea0a0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 105ea0a2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 105ea0a4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 105ea0a6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 105ea0a8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105ea0aa jne 0x105ea0a0 */
  if (!C.zf) goto L_105ea0a0;
  /* 105ea0ac div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105ea0ae mov esi, eax */
  ESI = (EAX);
  /* 105ea0b0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105ea0b4 mov ecx, eax */
  ECX = (EAX);
  /* 105ea0b6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 105ea0ba mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105ea0bc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea0be jb 0x105ea0ce */
  if (C.cf) goto L_105ea0ce;
  /* 105ea0c0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea0c4 ja 0x105ea0ce */
  if ((!C.cf&&!C.zf)) goto L_105ea0ce;
  /* 105ea0c6 jb 0x105ea0cf */
  if (C.cf) goto L_105ea0cf;
  /* 105ea0c8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea0cc jbe 0x105ea0cf */
  if ((C.cf||C.zf)) goto L_105ea0cf;
L_105ea0ce:;
  /* 105ea0ce dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_105ea0cf:;
  /* 105ea0cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ea0d1 mov eax, esi */
  EAX = (ESI);
L_105ea0d3:;
  /* 105ea0d3 pop esi */
  ESI = (pop32());
  /* 105ea0d4 pop ebx */
  EBX = (pop32());
  /* 105ea0d5 ret 0x10 */
  ESPCHK(0x105ea070u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x105ea0e0 (117 bytes, 44 insns) */
void f_105ea0e0(void) {
  FTRACE(0x105ea0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea0e0 push ebx */
  push32((uint32_t)(EBX));
  /* 105ea0e1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 105ea0e5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ea0e7 jne 0x105ea101 */
  if (!C.zf) goto L_105ea101;
  /* 105ea0e9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 105ea0ed mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 105ea0f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ea0f3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105ea0f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105ea0f9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105ea0fb mov eax, edx */
  EAX = (EDX);
  /* 105ea0fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ea0ff jmp 0x105ea151 */
  goto L_105ea151;
L_105ea101:;
  /* 105ea101 mov ecx, eax */
  ECX = (EAX);
  /* 105ea103 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 105ea107 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 105ea10b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_105ea10f:;
  /* 105ea10f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 105ea111 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 105ea113 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 105ea115 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 105ea117 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105ea119 jne 0x105ea10f */
  if (!C.zf) goto L_105ea10f;
  /* 105ea11b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105ea11d mov ecx, eax */
  ECX = (EAX);
  /* 105ea11f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105ea123 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 105ea124 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105ea128 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea12a jb 0x105ea13a */
  if (C.cf) goto L_105ea13a;
  /* 105ea12c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea130 ja 0x105ea13a */
  if ((!C.cf&&!C.zf)) goto L_105ea13a;
  /* 105ea132 jb 0x105ea142 */
  if (C.cf) goto L_105ea142;
  /* 105ea134 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea138 jbe 0x105ea142 */
  if ((C.cf||C.zf)) goto L_105ea142;
L_105ea13a:;
  /* 105ea13a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ea13e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_105ea142:;
  /* 105ea142 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ea146 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ea14a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105ea14c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105ea14e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_105ea151:;
  /* 105ea151 pop ebx */
  EBX = (pop32());
  /* 105ea152 ret 0x10 */
  ESPCHK(0x105ea0e0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a160 @ 0x105ea160 (55 bytes, 16 insns) */
void f_105ea160(void) {
  FTRACE(0x105ea160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea160 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea161 mov ebp, esp */
  EBP = (ESP);
  /* 105ea163 mov eax, dword ptr [0x1060f044] */
  EAX = (r32((uint32_t)(0x1060f044)));
  /* 105ea168 push eax */
  push32((uint32_t)(EAX));
  /* 105ea169 call dword ptr [0x106132a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a8))), 0x105ea16fu);
  /* 105ea16f mov ecx, dword ptr [0x1060f034] */
  ECX = (r32((uint32_t)(0x1060f034)));
  /* 105ea175 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea176 call dword ptr [0x106132a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a8))), 0x105ea17cu);
  /* 105ea17c mov edx, dword ptr [0x1060f024] */
  EDX = (r32((uint32_t)(0x1060f024)));
  /* 105ea182 push edx */
  push32((uint32_t)(EDX));
  /* 105ea183 call dword ptr [0x106132a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a8))), 0x105ea189u);
  /* 105ea189 mov eax, dword ptr [0x1060f004] */
  EAX = (r32((uint32_t)(0x1060f004)));
  /* 105ea18e push eax */
  push32((uint32_t)(EAX));
  /* 105ea18f call dword ptr [0x106132a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a8))), 0x105ea195u);
  /* 105ea195 pop ebp */
  EBP = (pop32());
  /* 105ea196 ret  */
  ESPCHK(0x105ea160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1a0 @ 0x105ea1a0 (159 bytes, 47 insns) */
void f_105ea1a0(void) {
  FTRACE(0x105ea1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea1a1 mov ebp, esp */
  EBP = (ESP);
  /* 105ea1a3 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea1a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ea1ab jmp 0x105ea1b6 */
  goto L_105ea1b6;
L_105ea1ad:;
  /* 105ea1ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea1b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea1b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105ea1b6:;
  /* 105ea1b6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea1ba jge 0x105ea209 */
  if ((C.sf==C.of)) goto L_105ea209;
  /* 105ea1bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea1bf cmp dword ptr [ecx*4 + 0x1060f000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1060f000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea1c7 je 0x105ea207 */
  if (C.zf) goto L_105ea207;
  /* 105ea1c9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea1cd je 0x105ea207 */
  if (C.zf) goto L_105ea207;
  /* 105ea1cf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea1d3 je 0x105ea207 */
  if (C.zf) goto L_105ea207;
  /* 105ea1d5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea1d9 je 0x105ea207 */
  if (C.zf) goto L_105ea207;
  /* 105ea1db cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea1df je 0x105ea207 */
  if (C.zf) goto L_105ea207;
  /* 105ea1e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea1e4 mov eax, dword ptr [edx*4 + 0x1060f000] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1060f000)));
  /* 105ea1eb push eax */
  push32((uint32_t)(EAX));
  /* 105ea1ec call dword ptr [0x10613264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613264))), 0x105ea1f2u);
  /* 105ea1f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ea1f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea1f7 mov edx, dword ptr [ecx*4 + 0x1060f000] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1060f000)));
  /* 105ea1fe push edx */
  push32((uint32_t)(EDX));
  /* 105ea1ff call 0x105e6920 */
  push32(0x105ea204u); f_105e6920();
  /* 105ea204 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ea207:;
  /* 105ea207 jmp 0x105ea1ad */
  goto L_105ea1ad;
L_105ea209:;
  /* 105ea209 mov eax, dword ptr [0x1060f024] */
  EAX = (r32((uint32_t)(0x1060f024)));
  /* 105ea20e push eax */
  push32((uint32_t)(EAX));
  /* 105ea20f call dword ptr [0x10613264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613264))), 0x105ea215u);
  /* 105ea215 mov ecx, dword ptr [0x1060f034] */
  ECX = (r32((uint32_t)(0x1060f034)));
  /* 105ea21b push ecx */
  push32((uint32_t)(ECX));
  /* 105ea21c call dword ptr [0x10613264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613264))), 0x105ea222u);
  /* 105ea222 mov edx, dword ptr [0x1060f044] */
  EDX = (r32((uint32_t)(0x1060f044)));
  /* 105ea228 push edx */
  push32((uint32_t)(EDX));
  /* 105ea229 call dword ptr [0x10613264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613264))), 0x105ea22fu);
  /* 105ea22f mov eax, dword ptr [0x1060f004] */
  EAX = (r32((uint32_t)(0x1060f004)));
  /* 105ea234 push eax */
  push32((uint32_t)(EAX));
  /* 105ea235 call dword ptr [0x10613264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613264))), 0x105ea23bu);
  /* 105ea23b mov esp, ebp */
  ESP = (EBP);
  /* 105ea23d pop ebp */
  EBP = (pop32());
  /* 105ea23e ret  */
  ESPCHK(0x105ea1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a240 @ 0x105ea240 (151 bytes, 46 insns) */
void f_105ea240(void) {
  FTRACE(0x105ea240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea240 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea241 mov ebp, esp */
  EBP = (ESP);
  /* 105ea243 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea247 cmp dword ptr [eax*4 + 0x1060f000], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1060f000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea24f jne 0x105ea2c2 */
  if (!C.zf) goto L_105ea2c2;
  /* 105ea251 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 105ea256 push 0x1060c75c */
  push32((uint32_t)(0x1060c75cu));
  /* 105ea25b push 2 */
  push32((uint32_t)(0x2u));
  /* 105ea25d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 105ea25f call 0x105e5e90 */
  push32(0x105ea264u); f_105e5e90();
  /* 105ea264 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea267 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ea26a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea26e jne 0x105ea27a */
  if (!C.zf) goto L_105ea27a;
  /* 105ea270 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105ea272 call 0x105e3ce0 */
  push32(0x105ea277u); f_105e3ce0();
  /* 105ea277 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ea27a:;
  /* 105ea27a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105ea27c call 0x105ea240 */
  push32(0x105ea281u); f_105ea240();
  /* 105ea281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea284 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea287 cmp dword ptr [ecx*4 + 0x1060f000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1060f000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea28f jne 0x105ea2aa */
  if (!C.zf) goto L_105ea2aa;
  /* 105ea291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea294 push edx */
  push32((uint32_t)(EDX));
  /* 105ea295 call dword ptr [0x106132a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a8))), 0x105ea29bu);
  /* 105ea29b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea29e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea2a1 mov dword ptr [eax*4 + 0x1060f000], ecx */
  w32((uint32_t)(EAX*4 + 0x1060f000), (ECX));
  /* 105ea2a8 jmp 0x105ea2b8 */
  goto L_105ea2b8;
L_105ea2aa:;
  /* 105ea2aa push 2 */
  push32((uint32_t)(0x2u));
  /* 105ea2ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea2af push edx */
  push32((uint32_t)(EDX));
  /* 105ea2b0 call 0x105e6920 */
  push32(0x105ea2b5u); f_105e6920();
  /* 105ea2b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ea2b8:;
  /* 105ea2b8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105ea2ba call 0x105ea2e0 */
  push32(0x105ea2bfu); f_105ea2e0();
  /* 105ea2bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ea2c2:;
  /* 105ea2c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea2c5 mov ecx, dword ptr [eax*4 + 0x1060f000] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1060f000)));
  /* 105ea2cc push ecx */
  push32((uint32_t)(ECX));
  /* 105ea2cd call dword ptr [0x106132a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a0))), 0x105ea2d3u);
  /* 105ea2d3 mov esp, ebp */
  ESP = (EBP);
  /* 105ea2d5 pop ebp */
  EBP = (pop32());
  /* 105ea2d6 ret  */
  ESPCHK(0x105ea240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2e0 @ 0x105ea2e0 (22 bytes, 8 insns) */
void f_105ea2e0(void) {
  FTRACE(0x105ea2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea2e1 mov ebp, esp */
  EBP = (ESP);
  /* 105ea2e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea2e6 mov ecx, dword ptr [eax*4 + 0x1060f000] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1060f000)));
  /* 105ea2ed push ecx */
  push32((uint32_t)(ECX));
  /* 105ea2ee call dword ptr [0x106132a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a4))), 0x105ea2f4u);
  /* 105ea2f4 pop ebp */
  EBP = (pop32());
  /* 105ea2f5 ret  */
  ESPCHK(0x105ea2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a300 @ 0x105ea300 (26 bytes, 10 insns) */
void f_105ea300(void) {
  FTRACE(0x105ea300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea300 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea301 mov ebp, esp */
  EBP = (ESP);
  /* 105ea303 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea306 push eax */
  push32((uint32_t)(EAX));
  /* 105ea307 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ea309 call dword ptr [0x106132ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132ac))), 0x105ea30fu);
  /* 105ea30f push 0xff */
  push32((uint32_t)(0xffu));
  /* 105ea314 call dword ptr [0x1061322c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061322c))), 0x105ea31au);
  /* 105ea31a pop ebp */
  EBP = (pop32());
  /* 105ea31b ret  */
  ESPCHK(0x105ea300u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x105ea320 (446 bytes, 130 insns) */
void f_105ea320(void) {
  FTRACE(0x105ea320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea320 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea321 mov ebp, esp */
  EBP = (ESP);
  /* 105ea323 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ea326 call 0x105e58d0 */
  push32(0x105ea32bu); f_105e58d0();
  /* 105ea32b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ea32e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea331 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 105ea334 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea335 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea338 push edx */
  push32((uint32_t)(EDX));
  /* 105ea339 call 0x105ea4e0 */
  push32(0x105ea33eu); f_105ea4e0();
  /* 105ea33e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea341 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105ea344 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea348 je 0x105ea353 */
  if (C.zf) goto L_105ea353;
  /* 105ea34a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea34d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea351 jne 0x105ea362 */
  if (!C.zf) goto L_105ea362;
L_105ea353:;
  /* 105ea353 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea356 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea357 call dword ptr [0x106132b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132b0))), 0x105ea35du);
  /* 105ea35d jmp 0x105ea4da */
  goto L_105ea4da;
L_105ea362:;
  /* 105ea362 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea365 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea369 jne 0x105ea37f */
  if (!C.zf) goto L_105ea37f;
  /* 105ea36b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea36e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 105ea375 mov eax, 1 */
  EAX = (0x1u);
  /* 105ea37a jmp 0x105ea4da */
  goto L_105ea4da;
L_105ea37f:;
  /* 105ea37f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea382 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea386 jne 0x105ea390 */
  if (!C.zf) goto L_105ea390;
  /* 105ea388 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ea38b jmp 0x105ea4da */
  goto L_105ea4da;
L_105ea390:;
  /* 105ea390 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea393 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105ea396 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ea399 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea39c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 105ea39f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 105ea3a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea3a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea3a8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 105ea3ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea3ae cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea3b2 jne 0x105ea4b7 */
  if (!C.zf) goto L_105ea4b7;
  /* 105ea3b8 mov eax, dword ptr [0x1060f138] */
  EAX = (r32((uint32_t)(0x1060f138)));
  /* 105ea3bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105ea3c0 jmp 0x105ea3cb */
  goto L_105ea3cb;
L_105ea3c2:;
  /* 105ea3c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ea3c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea3c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_105ea3cb:;
  /* 105ea3cb mov edx, dword ptr [0x1060f138] */
  EDX = (r32((uint32_t)(0x1060f138)));
  /* 105ea3d1 add edx, dword ptr [0x1060f13c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1060f13c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea3d7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea3da jge 0x105ea3f2 */
  if ((C.sf==C.of)) goto L_105ea3f2;
  /* 105ea3dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ea3df imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ea3e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea3e5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 105ea3e8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 105ea3f0 jmp 0x105ea3c2 */
  goto L_105ea3c2;
L_105ea3f2:;
  /* 105ea3f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea3f5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 105ea3f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ea3fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea3fe cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea404 jne 0x105ea415 */
  if (!C.zf) goto L_105ea415;
  /* 105ea406 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea409 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 105ea410 jmp 0x105ea49d */
  goto L_105ea49d;
L_105ea415:;
  /* 105ea415 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea418 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea41e jne 0x105ea42c */
  if (!C.zf) goto L_105ea42c;
  /* 105ea420 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea423 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 105ea42a jmp 0x105ea49d */
  goto L_105ea49d;
L_105ea42c:;
  /* 105ea42c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea42f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea435 jne 0x105ea443 */
  if (!C.zf) goto L_105ea443;
  /* 105ea437 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea43a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 105ea441 jmp 0x105ea49d */
  goto L_105ea49d;
L_105ea443:;
  /* 105ea443 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea446 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea44c jne 0x105ea45a */
  if (!C.zf) goto L_105ea45a;
  /* 105ea44e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea451 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 105ea458 jmp 0x105ea49d */
  goto L_105ea49d;
L_105ea45a:;
  /* 105ea45a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea45d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea463 jne 0x105ea471 */
  if (!C.zf) goto L_105ea471;
  /* 105ea465 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea468 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 105ea46f jmp 0x105ea49d */
  goto L_105ea49d;
L_105ea471:;
  /* 105ea471 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea474 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea47a jne 0x105ea488 */
  if (!C.zf) goto L_105ea488;
  /* 105ea47c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea47f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 105ea486 jmp 0x105ea49d */
  goto L_105ea49d;
L_105ea488:;
  /* 105ea488 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea48b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea491 jne 0x105ea49d */
  if (!C.zf) goto L_105ea49d;
  /* 105ea493 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea496 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_105ea49d:;
  /* 105ea49d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea4a0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 105ea4a3 push edx */
  push32((uint32_t)(EDX));
  /* 105ea4a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 105ea4a6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x105ea4a9u);
  /* 105ea4a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea4ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea4af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ea4b2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 105ea4b5 jmp 0x105ea4ce */
  goto L_105ea4ce;
L_105ea4b7:;
  /* 105ea4b7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea4ba mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 105ea4c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea4c4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ea4c7 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea4c8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x105ea4cbu);
  /* 105ea4cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ea4ce:;
  /* 105ea4ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea4d1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ea4d4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 105ea4d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105ea4da:;
  /* 105ea4da mov esp, ebp */
  ESP = (EBP);
  /* 105ea4dc pop ebp */
  EBP = (pop32());
  /* 105ea4dd ret  */
  ESPCHK(0x105ea320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4e0 @ 0x105ea4e0 (89 bytes, 35 insns) */
void f_105ea4e0(void) {
  FTRACE(0x105ea4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea4e1 mov ebp, esp */
  EBP = (ESP);
  /* 105ea4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea4e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea4e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105ea4ea:;
  /* 105ea4ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea4ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105ea4ef cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea4f2 je 0x105ea512 */
  if (C.zf) goto L_105ea512;
  /* 105ea4f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea4f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea4fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ea4fd mov ecx, dword ptr [0x1060f144] */
  ECX = (r32((uint32_t)(0x1060f144)));
  /* 105ea503 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ea506 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea509 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea50b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea50e jae 0x105ea512 */
  if (!C.cf) goto L_105ea512;
  /* 105ea510 jmp 0x105ea4ea */
  goto L_105ea4ea;
L_105ea512:;
  /* 105ea512 mov eax, dword ptr [0x1060f144] */
  EAX = (r32((uint32_t)(0x1060f144)));
  /* 105ea517 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ea51a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea51d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea51f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea522 jae 0x105ea52e */
  if (!C.cf) goto L_105ea52e;
  /* 105ea524 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea527 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105ea529 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea52c je 0x105ea532 */
  if (C.zf) goto L_105ea532;
L_105ea52e:;
  /* 105ea52e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ea530 jmp 0x105ea535 */
  goto L_105ea535;
L_105ea532:;
  /* 105ea532 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105ea535:;
  /* 105ea535 mov esp, ebp */
  ESP = (EBP);
  /* 105ea537 pop ebp */
  EBP = (pop32());
  /* 105ea538 ret  */
  ESPCHK(0x105ea4e0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x105ea540 (48 bytes, 17 insns) */
void f_105ea540(void) {
  FTRACE(0x105ea540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea540 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea541 mov ebp, esp */
  EBP = (ESP);
  /* 105ea543 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea544 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ea546 call 0x105ea240 */
  push32(0x105ea54bu); f_105ea240();
  /* 105ea54b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea54e mov eax, dword ptr [0x106109a4] */
  EAX = (r32((uint32_t)(0x106109a4)));
  /* 105ea553 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ea556 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea559 mov dword ptr [0x106109a4], ecx */
  w32((uint32_t)(0x106109a4), (ECX));
  /* 105ea55f push 9 */
  push32((uint32_t)(0x9u));
  /* 105ea561 call 0x105ea2e0 */
  push32(0x105ea566u); f_105ea2e0();
  /* 105ea566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea569 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea56c mov esp, ebp */
  ESP = (EBP);
  /* 105ea56e pop ebp */
  EBP = (pop32());
  /* 105ea56f ret  */
  ESPCHK(0x105ea540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a570 @ 0x105ea570 (10 bytes, 5 insns) */
void f_105ea570(void) {
  FTRACE(0x105ea570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea570 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea571 mov ebp, esp */
  EBP = (ESP);
  /* 105ea573 mov eax, dword ptr [0x106109a4] */
  EAX = (r32((uint32_t)(0x106109a4)));
  /* 105ea578 pop ebp */
  EBP = (pop32());
  /* 105ea579 ret  */
  ESPCHK(0x105ea570u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x105ea580 (45 bytes, 19 insns) */
void f_105ea580(void) {
  FTRACE(0x105ea580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea580 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea581 mov ebp, esp */
  EBP = (ESP);
  /* 105ea583 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea584 mov eax, dword ptr [0x106109a4] */
  EAX = (r32((uint32_t)(0x106109a4)));
  /* 105ea589 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ea58c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea590 je 0x105ea5a0 */
  if (C.zf) goto L_105ea5a0;
  /* 105ea592 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea595 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea596 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x105ea599u);
  /* 105ea599 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea59c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ea59e jne 0x105ea5a4 */
  if (!C.zf) goto L_105ea5a4;
L_105ea5a0:;
  /* 105ea5a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ea5a2 jmp 0x105ea5a9 */
  goto L_105ea5a9;
L_105ea5a4:;
  /* 105ea5a4 mov eax, 1 */
  EAX = (0x1u);
L_105ea5a9:;
  /* 105ea5a9 mov esp, ebp */
  ESP = (EBP);
  /* 105ea5ab pop ebp */
  EBP = (pop32());
  /* 105ea5ac ret  */
  ESPCHK(0x105ea580u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x105ea5b0 (88 bytes, 40 insns) */
void f_105ea5b0(void) {
  FTRACE(0x105ea5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea5b0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 105ea5b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105ea5b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ea5ba je 0x105ea603 */
  if (C.zf) goto L_105ea603;
  /* 105ea5bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ea5be mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 105ea5c2 push edi */
  push32((uint32_t)(EDI));
  /* 105ea5c3 mov edi, ecx */
  EDI = (ECX);
  /* 105ea5c5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea5c8 jb 0x105ea5f7 */
  if (C.cf) goto L_105ea5f7;
  /* 105ea5ca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105ea5cc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 105ea5cf je 0x105ea5d9 */
  if (C.zf) goto L_105ea5d9;
  /* 105ea5d1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_105ea5d3:;
  /* 105ea5d3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ea5d5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105ea5d6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105ea5d7 jne 0x105ea5d3 */
  if (!C.zf) goto L_105ea5d3;
L_105ea5d9:;
  /* 105ea5d9 mov ecx, eax */
  ECX = (EAX);
  /* 105ea5db shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 105ea5de add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea5e0 mov ecx, eax */
  ECX = (EAX);
  /* 105ea5e2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105ea5e5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea5e7 mov ecx, edx */
  ECX = (EDX);
  /* 105ea5e9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105ea5ec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ea5ef je 0x105ea5f7 */
  if (C.zf) goto L_105ea5f7;
  /* 105ea5f1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 105ea5f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ea5f5 je 0x105ea5fd */
  if (C.zf) goto L_105ea5fd;
L_105ea5f7:;
  /* 105ea5f7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ea5f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105ea5fa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 105ea5fb jne 0x105ea5f7 */
  if (!C.zf) goto L_105ea5f7;
L_105ea5fd:;
  /* 105ea5fd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105ea601 pop edi */
  EDI = (pop32());
  /* 105ea602 ret  */
  ESPCHK(0x105ea5b0u, _esp0);
  ESP += 4; return;
L_105ea603:;
  /* 105ea603 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 105ea607 ret  */
  ESPCHK(0x105ea5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a610 @ 0x105ea610 (23 bytes, 10 insns) */
void f_105ea610(void) {
  FTRACE(0x105ea610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea610 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea611 mov ebp, esp */
  EBP = (ESP);
  /* 105ea613 mov eax, dword ptr [0x106109a0] */
  EAX = (r32((uint32_t)(0x106109a0)));
  /* 105ea618 push eax */
  push32((uint32_t)(EAX));
  /* 105ea619 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea61c push ecx */
  push32((uint32_t)(ECX));
  /* 105ea61d call 0x105ea630 */
  push32(0x105ea622u); f_105ea630();
  /* 105ea622 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea625 pop ebp */
  EBP = (pop32());
  /* 105ea626 ret  */
  ESPCHK(0x105ea610u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x105ea630 (87 bytes, 34 insns) */
void f_105ea630(void) {
  FTRACE(0x105ea630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea630 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea631 mov ebp, esp */
  EBP = (ESP);
  /* 105ea633 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea634 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea638 jbe 0x105ea63e */
  if ((C.cf||C.zf)) goto L_105ea63e;
  /* 105ea63a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ea63c jmp 0x105ea683 */
  goto L_105ea683;
L_105ea63e:;
  /* 105ea63e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea642 ja 0x105ea655 */
  if ((!C.cf&&!C.zf)) goto L_105ea655;
  /* 105ea644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea647 push eax */
  push32((uint32_t)(EAX));
  /* 105ea648 call 0x105ea690 */
  push32(0x105ea64du); f_105ea690();
  /* 105ea64d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea650 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ea653 jmp 0x105ea65c */
  goto L_105ea65c;
L_105ea655:;
  /* 105ea655 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105ea65c:;
  /* 105ea65c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea660 jne 0x105ea668 */
  if (!C.zf) goto L_105ea668;
  /* 105ea662 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea666 jne 0x105ea66d */
  if (!C.zf) goto L_105ea66d;
L_105ea668:;
  /* 105ea668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea66b jmp 0x105ea683 */
  goto L_105ea683;
L_105ea66d:;
  /* 105ea66d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea670 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea671 call 0x105ea580 */
  push32(0x105ea676u); f_105ea580();
  /* 105ea676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ea67b jne 0x105ea681 */
  if (!C.zf) goto L_105ea681;
  /* 105ea67d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ea67f jmp 0x105ea683 */
  goto L_105ea683;
L_105ea681:;
  /* 105ea681 jmp 0x105ea63e */
  goto L_105ea63e;
L_105ea683:;
  /* 105ea683 mov esp, ebp */
  ESP = (EBP);
  /* 105ea685 pop ebp */
  EBP = (pop32());
  /* 105ea686 ret  */
  ESPCHK(0x105ea630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a690 @ 0x105ea690 (109 bytes, 37 insns) */
void f_105ea690(void) {
  FTRACE(0x105ea690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea690 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea691 mov ebp, esp */
  EBP = (ESP);
  /* 105ea693 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea697 cmp eax, dword ptr [0x1060f154] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1060f154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea69d ja 0x105ea6cd */
  if ((!C.cf&&!C.zf)) goto L_105ea6cd;
  /* 105ea69f push 9 */
  push32((uint32_t)(0x9u));
  /* 105ea6a1 call 0x105ea240 */
  push32(0x105ea6a6u); f_105ea240();
  /* 105ea6a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea6a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea6ac push ecx */
  push32((uint32_t)(ECX));
  /* 105ea6ad call 0x105eb1d0 */
  push32(0x105ea6b2u); f_105eb1d0();
  /* 105ea6b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea6b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ea6b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ea6ba call 0x105ea2e0 */
  push32(0x105ea6bfu); f_105ea2e0();
  /* 105ea6bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea6c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea6c6 je 0x105ea6cd */
  if (C.zf) goto L_105ea6cd;
  /* 105ea6c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea6cb jmp 0x105ea6f9 */
  goto L_105ea6f9;
L_105ea6cd:;
  /* 105ea6cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea6d1 jne 0x105ea6da */
  if (!C.zf) goto L_105ea6da;
  /* 105ea6d3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_105ea6da:;
  /* 105ea6da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea6dd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea6e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 105ea6e3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105ea6e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea6e9 push eax */
  push32((uint32_t)(EAX));
  /* 105ea6ea push 0 */
  push32((uint32_t)(0x0u));
  /* 105ea6ec mov ecx, dword ptr [0x10612164] */
  ECX = (r32((uint32_t)(0x10612164)));
  /* 105ea6f2 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea6f3 call dword ptr [0x106132b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132b4))), 0x105ea6f9u);
L_105ea6f9:;
  /* 105ea6f9 mov esp, ebp */
  ESP = (EBP);
  /* 105ea6fb pop ebp */
  EBP = (pop32());
  /* 105ea6fc ret  */
  ESPCHK(0x105ea690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a700 @ 0x105ea700 (10 bytes, 5 insns) */
void f_105ea700(void) {
  FTRACE(0x105ea700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea700 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea701 mov ebp, esp */
  EBP = (ESP);
  /* 105ea703 mov eax, 1 */
  EAX = (0x1u);
  /* 105ea708 pop ebp */
  EBP = (pop32());
  /* 105ea709 ret  */
  ESPCHK(0x105ea700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a710 @ 0x105ea710 (173 bytes, 59 insns) */
void f_105ea710(void) {
  FTRACE(0x105ea710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea710 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea711 mov ebp, esp */
  EBP = (ESP);
  /* 105ea713 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ea716 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea71a jbe 0x105ea723 */
  if ((C.cf||C.zf)) goto L_105ea723;
  /* 105ea71c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ea71e jmp 0x105ea7b9 */
  goto L_105ea7b9;
L_105ea723:;
  /* 105ea723 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ea725 call 0x105ea240 */
  push32(0x105ea72au); f_105ea240();
  /* 105ea72a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea72d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea730 push eax */
  push32((uint32_t)(EAX));
  /* 105ea731 call 0x105eab40 */
  push32(0x105ea736u); f_105eab40();
  /* 105ea736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea739 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ea73c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea740 je 0x105ea781 */
  if (C.zf) goto L_105ea781;
  /* 105ea742 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ea749 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea74c cmp ecx, dword ptr [0x1060f154] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1060f154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea752 ja 0x105ea772 */
  if ((!C.cf&&!C.zf)) goto L_105ea772;
  /* 105ea754 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea757 push edx */
  push32((uint32_t)(EDX));
  /* 105ea758 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea75b push eax */
  push32((uint32_t)(EAX));
  /* 105ea75c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea75f push ecx */
  push32((uint32_t)(ECX));
  /* 105ea760 call 0x105eba10 */
  push32(0x105ea765u); f_105eba10();
  /* 105ea765 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea768 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ea76a je 0x105ea772 */
  if (C.zf) goto L_105ea772;
  /* 105ea76c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea76f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105ea772:;
  /* 105ea772 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ea774 call 0x105ea2e0 */
  push32(0x105ea779u); f_105ea2e0();
  /* 105ea779 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea77c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea77f jmp 0x105ea7b9 */
  goto L_105ea7b9;
L_105ea781:;
  /* 105ea781 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ea783 call 0x105ea2e0 */
  push32(0x105ea788u); f_105ea2e0();
  /* 105ea788 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea78b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea78f jne 0x105ea798 */
  if (!C.zf) goto L_105ea798;
  /* 105ea791 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_105ea798:;
  /* 105ea798 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea79b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea79e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 105ea7a0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 105ea7a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea7a6 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea7a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea7aa push edx */
  push32((uint32_t)(EDX));
  /* 105ea7ab push 0x10 */
  push32((uint32_t)(0x10u));
  /* 105ea7ad mov eax, dword ptr [0x10612164] */
  EAX = (r32((uint32_t)(0x10612164)));
  /* 105ea7b2 push eax */
  push32((uint32_t)(EAX));
  /* 105ea7b3 call dword ptr [0x106132b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132b8))), 0x105ea7b9u);
L_105ea7b9:;
  /* 105ea7b9 mov esp, ebp */
  ESP = (EBP);
  /* 105ea7bb pop ebp */
  EBP = (pop32());
  /* 105ea7bc ret  */
  ESPCHK(0x105ea710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c0 @ 0x105ea7c0 (490 bytes, 165 insns) */
void f_105ea7c0(void) {
  FTRACE(0x105ea7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea7c1 mov ebp, esp */
  EBP = (ESP);
  /* 105ea7c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ea7c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea7ca jne 0x105ea7dd */
  if (!C.zf) goto L_105ea7dd;
  /* 105ea7cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea7cf push eax */
  push32((uint32_t)(EAX));
  /* 105ea7d0 call 0x105ea610 */
  push32(0x105ea7d5u); f_105ea610();
  /* 105ea7d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea7d8 jmp 0x105ea9a6 */
  goto L_105ea9a6;
L_105ea7dd:;
  /* 105ea7dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea7e1 jne 0x105ea7f6 */
  if (!C.zf) goto L_105ea7f6;
  /* 105ea7e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea7e6 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea7e7 call 0x105ea9b0 */
  push32(0x105ea7ecu); f_105ea9b0();
  /* 105ea7ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea7ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ea7f1 jmp 0x105ea9a6 */
  goto L_105ea9a6;
L_105ea7f6:;
  /* 105ea7f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105ea7fd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea801 ja 0x105ea979 */
  if ((!C.cf&&!C.zf)) goto L_105ea979;
  /* 105ea807 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ea809 call 0x105ea240 */
  push32(0x105ea80eu); f_105ea240();
  /* 105ea80e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea811 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea814 push edx */
  push32((uint32_t)(EDX));
  /* 105ea815 call 0x105eab40 */
  push32(0x105ea81au); f_105eab40();
  /* 105ea81a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea81d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105ea820 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea824 je 0x105ea93c */
  if (C.zf) goto L_105ea93c;
  /* 105ea82a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea82d cmp eax, dword ptr [0x1060f154] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1060f154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea833 ja 0x105ea8b0 */
  if ((!C.cf&&!C.zf)) goto L_105ea8b0;
  /* 105ea835 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea838 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea839 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea83c push edx */
  push32((uint32_t)(EDX));
  /* 105ea83d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ea840 push eax */
  push32((uint32_t)(EAX));
  /* 105ea841 call 0x105eba10 */
  push32(0x105ea846u); f_105eba10();
  /* 105ea846 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ea84b je 0x105ea855 */
  if (C.zf) goto L_105ea855;
  /* 105ea84d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea850 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105ea853 jmp 0x105ea8b0 */
  goto L_105ea8b0;
L_105ea855:;
  /* 105ea855 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea858 push edx */
  push32((uint32_t)(EDX));
  /* 105ea859 call 0x105eb1d0 */
  push32(0x105ea85eu); f_105eb1d0();
  /* 105ea85e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea861 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ea864 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea868 je 0x105ea8b0 */
  if (C.zf) goto L_105ea8b0;
  /* 105ea86a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea86d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 105ea870 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ea873 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105ea876 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea879 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea87c jae 0x105ea886 */
  if (!C.cf) goto L_105ea886;
  /* 105ea87e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea881 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105ea884 jmp 0x105ea88c */
  goto L_105ea88c;
L_105ea886:;
  /* 105ea886 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea889 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105ea88c:;
  /* 105ea88c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ea88f push edx */
  push32((uint32_t)(EDX));
  /* 105ea890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea893 push eax */
  push32((uint32_t)(EAX));
  /* 105ea894 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea897 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea898 call 0x105ed020 */
  push32(0x105ea89du); f_105ed020();
  /* 105ea89d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea8a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea8a3 push edx */
  push32((uint32_t)(EDX));
  /* 105ea8a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ea8a7 push eax */
  push32((uint32_t)(EAX));
  /* 105ea8a8 call 0x105eac00 */
  push32(0x105ea8adu); f_105eac00();
  /* 105ea8ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ea8b0:;
  /* 105ea8b0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea8b4 jne 0x105ea930 */
  if (!C.zf) goto L_105ea930;
  /* 105ea8b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea8ba jne 0x105ea8c3 */
  if (!C.zf) goto L_105ea8c3;
  /* 105ea8bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_105ea8c3:;
  /* 105ea8c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea8c6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea8c9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 105ea8cc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 105ea8cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea8d2 push edx */
  push32((uint32_t)(EDX));
  /* 105ea8d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ea8d5 mov eax, dword ptr [0x10612164] */
  EAX = (r32((uint32_t)(0x10612164)));
  /* 105ea8da push eax */
  push32((uint32_t)(EAX));
  /* 105ea8db call dword ptr [0x106132b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132b4))), 0x105ea8e1u);
  /* 105ea8e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ea8e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea8e8 je 0x105ea930 */
  if (C.zf) goto L_105ea930;
  /* 105ea8ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea8ed mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 105ea8f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ea8f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105ea8f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea8f9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea8fc jae 0x105ea906 */
  if (!C.cf) goto L_105ea906;
  /* 105ea8fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea901 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105ea904 jmp 0x105ea90c */
  goto L_105ea90c;
L_105ea906:;
  /* 105ea906 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea909 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_105ea90c:;
  /* 105ea90c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ea90f push eax */
  push32((uint32_t)(EAX));
  /* 105ea910 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea913 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea914 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea917 push edx */
  push32((uint32_t)(EDX));
  /* 105ea918 call 0x105ed020 */
  push32(0x105ea91du); f_105ed020();
  /* 105ea91d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea923 push eax */
  push32((uint32_t)(EAX));
  /* 105ea924 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ea927 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea928 call 0x105eac00 */
  push32(0x105ea92du); f_105eac00();
  /* 105ea92d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ea930:;
  /* 105ea930 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ea932 call 0x105ea2e0 */
  push32(0x105ea937u); f_105ea2e0();
  /* 105ea937 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea93a jmp 0x105ea979 */
  goto L_105ea979;
L_105ea93c:;
  /* 105ea93c push 9 */
  push32((uint32_t)(0x9u));
  /* 105ea93e call 0x105ea2e0 */
  push32(0x105ea943u); f_105ea2e0();
  /* 105ea943 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea946 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea94a jne 0x105ea953 */
  if (!C.zf) goto L_105ea953;
  /* 105ea94c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_105ea953:;
  /* 105ea953 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea956 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea959 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 105ea95c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 105ea95f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea962 push eax */
  push32((uint32_t)(EAX));
  /* 105ea963 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea966 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea967 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ea969 mov edx, dword ptr [0x10612164] */
  EDX = (r32((uint32_t)(0x10612164)));
  /* 105ea96f push edx */
  push32((uint32_t)(EDX));
  /* 105ea970 call dword ptr [0x106132b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132b8))), 0x105ea976u);
  /* 105ea976 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105ea979:;
  /* 105ea979 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea97d jne 0x105ea988 */
  if (!C.zf) goto L_105ea988;
  /* 105ea97f cmp dword ptr [0x106109a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106109a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea986 jne 0x105ea98d */
  if (!C.zf) goto L_105ea98d;
L_105ea988:;
  /* 105ea988 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ea98b jmp 0x105ea9a6 */
  goto L_105ea9a6;
L_105ea98d:;
  /* 105ea98d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ea990 push eax */
  push32((uint32_t)(EAX));
  /* 105ea991 call 0x105ea580 */
  push32(0x105ea996u); f_105ea580();
  /* 105ea996 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea999 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ea99b jne 0x105ea9a1 */
  if (!C.zf) goto L_105ea9a1;
  /* 105ea99d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ea99f jmp 0x105ea9a6 */
  goto L_105ea9a6;
L_105ea9a1:;
  /* 105ea9a1 jmp 0x105ea7f6 */
  goto L_105ea7f6;
L_105ea9a6:;
  /* 105ea9a6 mov esp, ebp */
  ESP = (EBP);
  /* 105ea9a8 pop ebp */
  EBP = (pop32());
  /* 105ea9a9 ret  */
  ESPCHK(0x105ea7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9b0 @ 0x105ea9b0 (104 bytes, 38 insns) */
void f_105ea9b0(void) {
  FTRACE(0x105ea9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ea9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ea9b1 mov ebp, esp */
  EBP = (ESP);
  /* 105ea9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 105ea9b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea9b8 jne 0x105ea9bc */
  if (!C.zf) goto L_105ea9bc;
  /* 105ea9ba jmp 0x105eaa14 */
  goto L_105eaa14;
L_105ea9bc:;
  /* 105ea9bc push 9 */
  push32((uint32_t)(0x9u));
  /* 105ea9be call 0x105ea240 */
  push32(0x105ea9c3u); f_105ea240();
  /* 105ea9c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea9c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea9c9 push eax */
  push32((uint32_t)(EAX));
  /* 105ea9ca call 0x105eab40 */
  push32(0x105ea9cfu); f_105eab40();
  /* 105ea9cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea9d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ea9d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ea9d9 je 0x105ea9f7 */
  if (C.zf) goto L_105ea9f7;
  /* 105ea9db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ea9de push ecx */
  push32((uint32_t)(ECX));
  /* 105ea9df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ea9e2 push edx */
  push32((uint32_t)(EDX));
  /* 105ea9e3 call 0x105eac00 */
  push32(0x105ea9e8u); f_105eac00();
  /* 105ea9e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea9eb push 9 */
  push32((uint32_t)(0x9u));
  /* 105ea9ed call 0x105ea2e0 */
  push32(0x105ea9f2u); f_105ea2e0();
  /* 105ea9f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ea9f5 jmp 0x105eaa14 */
  goto L_105eaa14;
L_105ea9f7:;
  /* 105ea9f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ea9f9 call 0x105ea2e0 */
  push32(0x105ea9feu); f_105ea2e0();
  /* 105ea9fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eaa01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eaa04 push eax */
  push32((uint32_t)(EAX));
  /* 105eaa05 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eaa07 mov ecx, dword ptr [0x10612164] */
  ECX = (r32((uint32_t)(0x10612164)));
  /* 105eaa0d push ecx */
  push32((uint32_t)(ECX));
  /* 105eaa0e call dword ptr [0x10613200] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613200))), 0x105eaa14u);
L_105eaa14:;
  /* 105eaa14 mov esp, ebp */
  ESP = (EBP);
  /* 105eaa16 pop ebp */
  EBP = (pop32());
  /* 105eaa17 ret  */
  ESPCHK(0x105ea9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa20 @ 0x105eaa20 (116 bytes, 34 insns) */
void f_105eaa20(void) {
  FTRACE(0x105eaa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eaa20 push ebp */
  push32((uint32_t)(EBP));
  /* 105eaa21 mov ebp, esp */
  EBP = (ESP);
  /* 105eaa23 push ecx */
  push32((uint32_t)(ECX));
  /* 105eaa24 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 105eaa2b push 9 */
  push32((uint32_t)(0x9u));
  /* 105eaa2d call 0x105ea240 */
  push32(0x105eaa32u); f_105ea240();
  /* 105eaa32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eaa35 call 0x105ec130 */
  push32(0x105eaa3au); f_105ec130();
  /* 105eaa3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eaa3c jge 0x105eaa45 */
  if ((C.sf==C.of)) goto L_105eaa45;
  /* 105eaa3e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_105eaa45:;
  /* 105eaa45 push 9 */
  push32((uint32_t)(0x9u));
  /* 105eaa47 call 0x105ea2e0 */
  push32(0x105eaa4cu); f_105ea2e0();
  /* 105eaa4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eaa4f push 0 */
  push32((uint32_t)(0x0u));
  /* 105eaa51 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eaa53 mov eax, dword ptr [0x10612164] */
  EAX = (r32((uint32_t)(0x10612164)));
  /* 105eaa58 push eax */
  push32((uint32_t)(EAX));
  /* 105eaa59 call dword ptr [0x10613270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613270))), 0x105eaa5fu);
  /* 105eaa5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eaa61 jne 0x105eaa8d */
  if (!C.zf) goto L_105eaa8d;
  /* 105eaa63 call dword ptr [0x10613250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613250))), 0x105eaa69u);
  /* 105eaa69 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eaa6c jne 0x105eaa86 */
  if (!C.zf) goto L_105eaa86;
  /* 105eaa6e call 0x105ed410 */
  push32(0x105eaa73u); f_105ed410();
  /* 105eaa73 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 105eaa79 call 0x105ed400 */
  push32(0x105eaa7eu); f_105ed400();
  /* 105eaa7e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 105eaa84 jmp 0x105eaa8d */
  goto L_105eaa8d;
L_105eaa86:;
  /* 105eaa86 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_105eaa8d:;
  /* 105eaa8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eaa90 mov esp, ebp */
  ESP = (EBP);
  /* 105eaa92 pop ebp */
  EBP = (pop32());
  /* 105eaa93 ret  */
  ESPCHK(0x105eaa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aaa0 @ 0x105eaaa0 (10 bytes, 5 insns) */
void f_105eaaa0(void) {
  FTRACE(0x105eaaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eaaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 105eaaa1 mov ebp, esp */
  EBP = (ESP);
  /* 105eaaa3 call 0x105eaa20 */
  push32(0x105eaaa8u); f_105eaa20();
  /* 105eaaa8 pop ebp */
  EBP = (pop32());
  /* 105eaaa9 ret  */
  ESPCHK(0x105eaaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aab0 @ 0x105eaab0 (10 bytes, 5 insns) */
void f_105eaab0(void) {
  FTRACE(0x105eaab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eaab0 push ebp */
  push32((uint32_t)(EBP));
  /* 105eaab1 mov ebp, esp */
  EBP = (ESP);
  /* 105eaab3 mov eax, dword ptr [0x1060f154] */
  EAX = (r32((uint32_t)(0x1060f154)));
  /* 105eaab8 pop ebp */
  EBP = (pop32());
  /* 105eaab9 ret  */
  ESPCHK(0x105eaab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aac0 @ 0x105eaac0 (31 bytes, 11 insns) */
void f_105eaac0(void) {
  FTRACE(0x105eaac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eaac0 push ebp */
  push32((uint32_t)(EBP));
  /* 105eaac1 mov ebp, esp */
  EBP = (ESP);
  /* 105eaac3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eaaca jbe 0x105eaad0 */
  if ((C.cf||C.zf)) goto L_105eaad0;
  /* 105eaacc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eaace jmp 0x105eaadd */
  goto L_105eaadd;
L_105eaad0:;
  /* 105eaad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eaad3 mov dword ptr [0x1060f154], eax */
  w32((uint32_t)(0x1060f154), (EAX));
  /* 105eaad8 mov eax, 1 */
  EAX = (0x1u);
L_105eaadd:;
  /* 105eaadd pop ebp */
  EBP = (pop32());
  /* 105eaade ret  */
  ESPCHK(0x105eaac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aae0 @ 0x105eaae0 (89 bytes, 20 insns) */
void f_105eaae0(void) {
  FTRACE(0x105eaae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eaae0 push ebp */
  push32((uint32_t)(EBP));
  /* 105eaae1 mov ebp, esp */
  EBP = (ESP);
  /* 105eaae3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 105eaae8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eaaea mov eax, dword ptr [0x10612164] */
  EAX = (r32((uint32_t)(0x10612164)));
  /* 105eaaef push eax */
  push32((uint32_t)(EAX));
  /* 105eaaf0 call dword ptr [0x106132b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132b4))), 0x105eaaf6u);
  /* 105eaaf6 mov dword ptr [0x10610e08], eax */
  w32((uint32_t)(0x10610e08), (EAX));
  /* 105eaafb cmp dword ptr [0x10610e08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610e08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eab02 jne 0x105eab08 */
  if (!C.zf) goto L_105eab08;
  /* 105eab04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eab06 jmp 0x105eab37 */
  goto L_105eab37;
L_105eab08:;
  /* 105eab08 mov ecx, dword ptr [0x10610e08] */
  ECX = (r32((uint32_t)(0x10610e08)));
  /* 105eab0e mov dword ptr [0x10610dfc], ecx */
  w32((uint32_t)(0x10610dfc), (ECX));
  /* 105eab14 mov dword ptr [0x10610e00], 0 */
  w32((uint32_t)(0x10610e00), (0x0u));
  /* 105eab1e mov dword ptr [0x10610e04], 0 */
  w32((uint32_t)(0x10610e04), (0x0u));
  /* 105eab28 mov dword ptr [0x10610de8], 0x10 */
  w32((uint32_t)(0x10610de8), (0x10u));
  /* 105eab32 mov eax, 1 */
  EAX = (0x1u);
L_105eab37:;
  /* 105eab37 pop ebp */
  EBP = (pop32());
  /* 105eab38 ret  */
  ESPCHK(0x105eaae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab40 @ 0x105eab40 (85 bytes, 29 insns) */
void f_105eab40(void) {
  FTRACE(0x105eab40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eab40 push ebp */
  push32((uint32_t)(EBP));
  /* 105eab41 mov ebp, esp */
  EBP = (ESP);
  /* 105eab43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eab46 mov eax, dword ptr [0x10610e04] */
  EAX = (r32((uint32_t)(0x10610e04)));
  /* 105eab4b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105eab4e mov ecx, dword ptr [0x10610e08] */
  ECX = (r32((uint32_t)(0x10610e08)));
  /* 105eab54 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eab56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105eab59 mov edx, dword ptr [0x10610e08] */
  EDX = (r32((uint32_t)(0x10610e08)));
  /* 105eab5f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105eab62:;
  /* 105eab62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eab65 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eab68 jae 0x105eab8f */
  if (!C.cf) goto L_105eab8f;
  /* 105eab6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eab6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eab70 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eab73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105eab76 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eab7d jae 0x105eab84 */
  if (!C.cf) goto L_105eab84;
  /* 105eab7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eab82 jmp 0x105eab91 */
  goto L_105eab91;
L_105eab84:;
  /* 105eab84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eab87 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eab8a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105eab8d jmp 0x105eab62 */
  goto L_105eab62;
L_105eab8f:;
  /* 105eab8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105eab91:;
  /* 105eab91 mov esp, ebp */
  ESP = (EBP);
  /* 105eab93 pop ebp */
  EBP = (pop32());
  /* 105eab94 ret  */
  ESPCHK(0x105eab40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aba0 @ 0x105eaba0 (95 bytes, 33 insns) */
void f_105eaba0(void) {
  FTRACE(0x105eaba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eaba0 push ebp */
  push32((uint32_t)(EBP));
  /* 105eaba1 mov ebp, esp */
  EBP = (ESP);
  /* 105eaba3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eaba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eaba9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eabac sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eabaf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105eabb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eabb5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 105eabb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105eabbb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105eabc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eabc3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105eabc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eabc8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105eabcb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105eabcd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105eabcf jne 0x105eabf1 */
  if (!C.zf) goto L_105eabf1;
  /* 105eabd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eabd4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 105eabd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eabd9 jne 0x105eabf1 */
  if (!C.zf) goto L_105eabf1;
  /* 105eabdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eabde and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 105eabe4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eabe6 je 0x105eabf1 */
  if (C.zf) goto L_105eabf1;
  /* 105eabe8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 105eabef jmp 0x105eabf8 */
  goto L_105eabf8;
L_105eabf1:;
  /* 105eabf1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_105eabf8:;
  /* 105eabf8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105eabfb mov esp, ebp */
  ESP = (EBP);
  /* 105eabfd pop ebp */
  EBP = (pop32());
  /* 105eabfe ret  */
  ESPCHK(0x105eaba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac00 @ 0x105eac00 (1485 bytes, 453 insns) */
void f_105eac00(void) {
  FTRACE(0x105eac00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eac00 push ebp */
  push32((uint32_t)(EBP));
  /* 105eac01 mov ebp, esp */
  EBP = (ESP);
  /* 105eac03 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eac06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eac09 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105eac0c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 105eac0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eac12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eac15 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eac18 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105eac1b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eac1e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 105eac21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105eac24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eac27 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105eac2d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eac30 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 105eac37 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105eac3a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eac3d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eac40 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105eac43 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eac46 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105eac48 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eac4b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 105eac4e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eac51 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eac54 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 105eac57 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eac5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105eac5c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105eac5f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eac62 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 105eac65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105eac68 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eac6b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105eac6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eac70 jne 0x105ead98 */
  if (!C.zf) goto L_105ead98;
  /* 105eac76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eac79 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 105eac7c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eac7f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 105eac82 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eac86 jbe 0x105eac8f */
  if ((C.cf||C.zf)) goto L_105eac8f;
  /* 105eac88 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_105eac8f:;
  /* 105eac8f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eac92 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eac95 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 105eac98 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eac9b jne 0x105ead71 */
  if (!C.zf) goto L_105ead71;
  /* 105eaca1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eaca5 jae 0x105ead06 */
  if (!C.cf) goto L_105ead06;
  /* 105eaca7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105eacac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eacaf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105eacb1 not eax */
  EAX = (~(EAX));
  /* 105eacb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eacb6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eacb9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 105eacbd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105eacbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eacc2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eacc5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 105eacc9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eaccc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eaccf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 105eacd2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105eacd5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eacd8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eacdb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 105eacde mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eace1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eace4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105eace8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105eacea jne 0x105ead04 */
  if (!C.zf) goto L_105ead04;
  /* 105eacec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105eacf1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eacf4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105eacf6 not eax */
  EAX = (~(EAX));
  /* 105eacf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eacfb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105eacfd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105eacff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ead02 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105ead04:;
  /* 105ead04 jmp 0x105ead71 */
  goto L_105ead71;
L_105ead06:;
  /* 105ead06 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ead09 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ead0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ead11 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ead13 not edx */
  EDX = (~(EDX));
  /* 105ead15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ead18 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ead1b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 105ead22 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ead24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ead27 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ead2a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 105ead31 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ead34 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ead37 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105ead3a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ead3d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ead40 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ead43 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 105ead46 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ead49 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ead4c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105ead50 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ead52 jne 0x105ead71 */
  if (!C.zf) goto L_105ead71;
  /* 105ead54 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ead57 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ead5a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ead5f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ead61 not edx */
  EDX = (~(EDX));
  /* 105ead63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ead66 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ead69 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105ead6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ead6e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_105ead71:;
  /* 105ead71 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ead74 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105ead77 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ead7a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105ead7d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 105ead80 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ead83 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ead86 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ead89 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105ead8c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 105ead8f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ead92 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ead95 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_105ead98:;
  /* 105ead98 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ead9b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 105ead9e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eada1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105eada4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eada8 jbe 0x105eadb1 */
  if ((C.cf||C.zf)) goto L_105eadb1;
  /* 105eadaa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_105eadb1:;
  /* 105eadb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105eadb4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105eadb7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eadb9 jne 0x105eaf15 */
  if (!C.zf) goto L_105eaf15;
  /* 105eadbf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eadc2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eadc5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 105eadc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105eadcb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 105eadce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eadd1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 105eadd4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eadd8 jbe 0x105eade1 */
  if ((C.cf||C.zf)) goto L_105eade1;
  /* 105eadda mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_105eade1:;
  /* 105eade1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eade4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eade7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 105eadea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eaded sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 105eadf0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eadf3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 105eadf6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eadfa jbe 0x105eae03 */
  if ((C.cf||C.zf)) goto L_105eae03;
  /* 105eadfc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_105eae03:;
  /* 105eae03 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eae06 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eae09 je 0x105eaf0f */
  if (C.zf) goto L_105eaf0f;
  /* 105eae0f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105eae12 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105eae15 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 105eae18 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eae1b jne 0x105eaef1 */
  if (!C.zf) goto L_105eaef1;
  /* 105eae21 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eae25 jae 0x105eae86 */
  if (!C.cf) goto L_105eae86;
  /* 105eae27 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105eae2c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eae2f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105eae31 not edx */
  EDX = (~(EDX));
  /* 105eae33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eae36 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eae39 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 105eae3d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105eae3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eae42 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eae45 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 105eae49 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eae4c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eae4f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105eae52 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105eae55 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eae58 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eae5b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 105eae5e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eae61 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eae64 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105eae68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eae6a jne 0x105eae84 */
  if (!C.zf) goto L_105eae84;
  /* 105eae6c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105eae71 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eae74 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105eae76 not edx */
  EDX = (~(EDX));
  /* 105eae78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eae7b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105eae7d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105eae7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eae82 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105eae84:;
  /* 105eae84 jmp 0x105eaef1 */
  goto L_105eaef1;
L_105eae86:;
  /* 105eae86 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eae89 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eae8c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105eae91 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105eae93 not eax */
  EAX = (~(EAX));
  /* 105eae95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eae98 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eae9b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 105eaea2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105eaea4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eaea7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eaeaa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 105eaeb1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eaeb4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eaeb7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 105eaeba sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105eaebd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eaec0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eaec3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 105eaec6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eaec9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eaecc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105eaed0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105eaed2 jne 0x105eaef1 */
  if (!C.zf) goto L_105eaef1;
  /* 105eaed4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eaed7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eaeda mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105eaedf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105eaee1 not eax */
  EAX = (~(EAX));
  /* 105eaee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eaee6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105eaee9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105eaeeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eaeee mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_105eaef1:;
  /* 105eaef1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105eaef4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105eaef7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 105eaefa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105eaefd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 105eaf00 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105eaf03 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105eaf06 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105eaf09 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105eaf0c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_105eaf0f:;
  /* 105eaf0f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 105eaf12 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_105eaf15:;
  /* 105eaf15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105eaf18 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105eaf1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eaf1d jne 0x105eaf2b */
  if (!C.zf) goto L_105eaf2b;
  /* 105eaf1f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eaf22 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eaf25 je 0x105eb03b */
  if (C.zf) goto L_105eb03b;
L_105eaf2b:;
  /* 105eaf2b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eaf2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eaf31 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 105eaf34 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 105eaf37 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eaf3a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eaf3d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105eaf40 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 105eaf43 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eaf46 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eaf49 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 105eaf4c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eaf4f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eaf52 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 105eaf55 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eaf58 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105eaf5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eaf5e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105eaf61 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eaf64 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eaf67 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 105eaf6a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eaf6d jne 0x105eb03b */
  if (!C.zf) goto L_105eb03b;
  /* 105eaf73 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eaf77 jae 0x105eafd4 */
  if (!C.cf) goto L_105eafd4;
  /* 105eaf79 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eaf7c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eaf7f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105eaf83 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eaf86 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eaf89 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105eaf8c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 105eaf8f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eaf92 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eaf95 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 105eaf98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105eaf9a jne 0x105eafb2 */
  if (!C.zf) goto L_105eafb2;
  /* 105eaf9c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105eafa1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eafa4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105eafa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eafa9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105eafab or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105eafad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eafb0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105eafb2:;
  /* 105eafb2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105eafb7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eafba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105eafbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eafbf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eafc2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 105eafc6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105eafc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eafcb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eafce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 105eafd2 jmp 0x105eb03b */
  goto L_105eb03b;
L_105eafd4:;
  /* 105eafd4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eafd7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eafda movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105eafde mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eafe1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eafe4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105eafe7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 105eafea mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eafed add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eaff0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 105eaff3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105eaff5 jne 0x105eb012 */
  if (!C.zf) goto L_105eb012;
  /* 105eaff7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eaffa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eaffd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105eb002 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105eb004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eb007 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105eb00a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105eb00c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eb00f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_105eb012:;
  /* 105eb012 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eb015 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb018 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105eb01d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105eb01f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb022 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eb025 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 105eb02c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105eb02e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb031 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105eb034 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_105eb03b:;
  /* 105eb03b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eb03e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb041 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105eb043 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eb046 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb049 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb04c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 105eb04f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eb052 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105eb054 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb057 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eb05a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105eb05c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eb05f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb062 jne 0x105eb1c9 */
  if (!C.zf) goto L_105eb1c9;
  /* 105eb068 cmp dword ptr [0x10610e00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610e00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb06f je 0x105eb1b8 */
  if (C.zf) goto L_105eb1b8;
  /* 105eb075 mov eax, dword ptr [0x10610df8] */
  EAX = (r32((uint32_t)(0x10610df8)));
  /* 105eb07a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 105eb07d mov ecx, dword ptr [0x10610e00] */
  ECX = (r32((uint32_t)(0x10610e00)));
  /* 105eb083 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105eb086 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb088 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 105eb08b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 105eb090 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105eb095 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb098 push eax */
  push32((uint32_t)(EAX));
  /* 105eb099 call dword ptr [0x10613294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613294))), 0x105eb09fu);
  /* 105eb09f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105eb0a4 mov ecx, dword ptr [0x10610df8] */
  ECX = (r32((uint32_t)(0x10610df8)));
  /* 105eb0aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105eb0ac mov eax, dword ptr [0x10610e00] */
  EAX = (r32((uint32_t)(0x10610e00)));
  /* 105eb0b1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105eb0b4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105eb0b6 mov edx, dword ptr [0x10610e00] */
  EDX = (r32((uint32_t)(0x10610e00)));
  /* 105eb0bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 105eb0bf mov eax, dword ptr [0x10610e00] */
  EAX = (r32((uint32_t)(0x10610e00)));
  /* 105eb0c4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105eb0c7 mov edx, dword ptr [0x10610df8] */
  EDX = (r32((uint32_t)(0x10610df8)));
  /* 105eb0cd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 105eb0d8 mov eax, dword ptr [0x10610e00] */
  EAX = (r32((uint32_t)(0x10610e00)));
  /* 105eb0dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105eb0e0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 105eb0e3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105eb0e6 mov eax, dword ptr [0x10610e00] */
  EAX = (r32((uint32_t)(0x10610e00)));
  /* 105eb0eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105eb0ee mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 105eb0f1 mov edx, dword ptr [0x10610e00] */
  EDX = (r32((uint32_t)(0x10610e00)));
  /* 105eb0f7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105eb0fa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 105eb0fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eb100 jne 0x105eb116 */
  if (!C.zf) goto L_105eb116;
  /* 105eb102 mov edx, dword ptr [0x10610e00] */
  EDX = (r32((uint32_t)(0x10610e00)));
  /* 105eb108 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105eb10b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 105eb10d mov ecx, dword ptr [0x10610e00] */
  ECX = (r32((uint32_t)(0x10610e00)));
  /* 105eb113 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_105eb116:;
  /* 105eb116 mov edx, dword ptr [0x10610e00] */
  EDX = (r32((uint32_t)(0x10610e00)));
  /* 105eb11c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb120 jne 0x105eb1b8 */
  if (!C.zf) goto L_105eb1b8;
  /* 105eb126 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105eb12b push 0 */
  push32((uint32_t)(0x0u));
  /* 105eb12d mov eax, dword ptr [0x10610e00] */
  EAX = (r32((uint32_t)(0x10610e00)));
  /* 105eb132 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105eb135 push ecx */
  push32((uint32_t)(ECX));
  /* 105eb136 call dword ptr [0x10613294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613294))), 0x105eb13cu);
  /* 105eb13c mov edx, dword ptr [0x10610e00] */
  EDX = (r32((uint32_t)(0x10610e00)));
  /* 105eb142 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105eb145 push eax */
  push32((uint32_t)(EAX));
  /* 105eb146 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eb148 mov ecx, dword ptr [0x10612164] */
  ECX = (r32((uint32_t)(0x10612164)));
  /* 105eb14e push ecx */
  push32((uint32_t)(ECX));
  /* 105eb14f call dword ptr [0x10613200] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613200))), 0x105eb155u);
  /* 105eb155 mov edx, dword ptr [0x10610e04] */
  EDX = (r32((uint32_t)(0x10610e04)));
  /* 105eb15b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105eb15e mov eax, dword ptr [0x10610e08] */
  EAX = (r32((uint32_t)(0x10610e08)));
  /* 105eb163 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb165 mov ecx, dword ptr [0x10610e00] */
  ECX = (r32((uint32_t)(0x10610e00)));
  /* 105eb16b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb16e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb170 push eax */
  push32((uint32_t)(EAX));
  /* 105eb171 mov edx, dword ptr [0x10610e00] */
  EDX = (r32((uint32_t)(0x10610e00)));
  /* 105eb177 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb17a push edx */
  push32((uint32_t)(EDX));
  /* 105eb17b mov eax, dword ptr [0x10610e00] */
  EAX = (r32((uint32_t)(0x10610e00)));
  /* 105eb180 push eax */
  push32((uint32_t)(EAX));
  /* 105eb181 call 0x105ee7e0 */
  push32(0x105eb186u); f_105ee7e0();
  /* 105eb186 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb189 mov ecx, dword ptr [0x10610e04] */
  ECX = (r32((uint32_t)(0x10610e04)));
  /* 105eb18f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb192 mov dword ptr [0x10610e04], ecx */
  w32((uint32_t)(0x10610e04), (ECX));
  /* 105eb198 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eb19b cmp edx, dword ptr [0x10610e00] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10610e00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb1a1 jbe 0x105eb1ac */
  if ((C.cf||C.zf)) goto L_105eb1ac;
  /* 105eb1a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eb1a6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb1a9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105eb1ac:;
  /* 105eb1ac mov ecx, dword ptr [0x10610e08] */
  ECX = (r32((uint32_t)(0x10610e08)));
  /* 105eb1b2 mov dword ptr [0x10610dfc], ecx */
  w32((uint32_t)(0x10610dfc), (ECX));
L_105eb1b8:;
  /* 105eb1b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eb1bb mov dword ptr [0x10610e00], edx */
  w32((uint32_t)(0x10610e00), (EDX));
  /* 105eb1c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb1c4 mov dword ptr [0x10610df8], eax */
  w32((uint32_t)(0x10610df8), (EAX));
L_105eb1c9:;
  /* 105eb1c9 mov esp, ebp */
  ESP = (EBP);
  /* 105eb1cb pop ebp */
  EBP = (pop32());
  /* 105eb1cc ret  */
  ESPCHK(0x105eac00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1d0 @ 0x105eb1d0 (1334 bytes, 427 insns) */
void f_105eb1d0(void) {
  FTRACE(0x105eb1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eb1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105eb1d1 mov ebp, esp */
  EBP = (ESP);
  /* 105eb1d3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb1d6 push esi */
  push32((uint32_t)(ESI));
  /* 105eb1d7 mov eax, dword ptr [0x10610e04] */
  EAX = (r32((uint32_t)(0x10610e04)));
  /* 105eb1dc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105eb1df mov ecx, dword ptr [0x10610e08] */
  ECX = (r32((uint32_t)(0x10610e08)));
  /* 105eb1e5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb1e7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 105eb1ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eb1ed add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb1f0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 105eb1f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 105eb1f6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eb1f9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 105eb1fc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb1ff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105eb202 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb206 jge 0x105eb21c */
  if ((C.sf==C.of)) goto L_105eb21c;
  /* 105eb208 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105eb20b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eb20e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105eb210 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 105eb213 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 105eb21a jmp 0x105eb231 */
  goto L_105eb231;
L_105eb21c:;
  /* 105eb21c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105eb223 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eb226 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb229 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105eb22c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105eb22e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_105eb231:;
  /* 105eb231 mov ecx, dword ptr [0x10610dfc] */
  ECX = (r32((uint32_t)(0x10610dfc)));
  /* 105eb237 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_105eb23a:;
  /* 105eb23a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb23d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb240 jae 0x105eb266 */
  if (!C.cf) goto L_105eb266;
  /* 105eb242 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb245 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eb248 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 105eb24a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb24d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 105eb250 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 105eb253 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105eb255 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eb257 je 0x105eb25b */
  if (C.zf) goto L_105eb25b;
  /* 105eb259 jmp 0x105eb266 */
  goto L_105eb266;
L_105eb25b:;
  /* 105eb25b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb25e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb261 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105eb264 jmp 0x105eb23a */
  goto L_105eb23a;
L_105eb266:;
  /* 105eb266 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb269 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb26c jne 0x105eb34d */
  if (!C.zf) goto L_105eb34d;
  /* 105eb272 mov eax, dword ptr [0x10610e08] */
  EAX = (r32((uint32_t)(0x10610e08)));
  /* 105eb277 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_105eb27a:;
  /* 105eb27a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb27d cmp ecx, dword ptr [0x10610dfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10610dfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb283 jae 0x105eb2a9 */
  if (!C.cf) goto L_105eb2a9;
  /* 105eb285 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb288 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eb28b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 105eb28d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb290 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105eb293 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 105eb296 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105eb298 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eb29a je 0x105eb29e */
  if (C.zf) goto L_105eb29e;
  /* 105eb29c jmp 0x105eb2a9 */
  goto L_105eb2a9;
L_105eb29e:;
  /* 105eb29e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb2a1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb2a4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105eb2a7 jmp 0x105eb27a */
  goto L_105eb27a;
L_105eb2a9:;
  /* 105eb2a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb2ac cmp ecx, dword ptr [0x10610dfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10610dfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb2b2 jne 0x105eb34d */
  if (!C.zf) goto L_105eb34d;
L_105eb2b8:;
  /* 105eb2b8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb2bb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb2be jae 0x105eb2d6 */
  if (!C.cf) goto L_105eb2d6;
  /* 105eb2c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb2c3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb2c7 je 0x105eb2cb */
  if (C.zf) goto L_105eb2cb;
  /* 105eb2c9 jmp 0x105eb2d6 */
  goto L_105eb2d6;
L_105eb2cb:;
  /* 105eb2cb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb2ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb2d1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105eb2d4 jmp 0x105eb2b8 */
  goto L_105eb2b8;
L_105eb2d6:;
  /* 105eb2d6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb2d9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb2dc jne 0x105eb327 */
  if (!C.zf) goto L_105eb327;
  /* 105eb2de mov eax, dword ptr [0x10610e08] */
  EAX = (r32((uint32_t)(0x10610e08)));
  /* 105eb2e3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_105eb2e6:;
  /* 105eb2e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb2e9 cmp ecx, dword ptr [0x10610dfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10610dfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb2ef jae 0x105eb307 */
  if (!C.cf) goto L_105eb307;
  /* 105eb2f1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb2f4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb2f8 je 0x105eb2fc */
  if (C.zf) goto L_105eb2fc;
  /* 105eb2fa jmp 0x105eb307 */
  goto L_105eb307;
L_105eb2fc:;
  /* 105eb2fc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb2ff add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb302 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105eb305 jmp 0x105eb2e6 */
  goto L_105eb2e6;
L_105eb307:;
  /* 105eb307 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb30a cmp ecx, dword ptr [0x10610dfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10610dfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb310 jne 0x105eb327 */
  if (!C.zf) goto L_105eb327;
  /* 105eb312 call 0x105eb710 */
  push32(0x105eb317u); f_105eb710();
  /* 105eb317 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105eb31a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb31e jne 0x105eb327 */
  if (!C.zf) goto L_105eb327;
  /* 105eb320 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eb322 jmp 0x105eb701 */
  goto L_105eb701;
L_105eb327:;
  /* 105eb327 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb32a push edx */
  push32((uint32_t)(EDX));
  /* 105eb32b call 0x105eb820 */
  push32(0x105eb330u); f_105eb820();
  /* 105eb330 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb333 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb336 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105eb339 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105eb33b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb33e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105eb341 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb344 jne 0x105eb34d */
  if (!C.zf) goto L_105eb34d;
  /* 105eb346 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eb348 jmp 0x105eb701 */
  goto L_105eb701;
L_105eb34d:;
  /* 105eb34d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb350 mov dword ptr [0x10610dfc], edx */
  w32((uint32_t)(0x10610dfc), (EDX));
  /* 105eb356 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb359 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105eb35c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 105eb35f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb362 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105eb364 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 105eb367 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb36b je 0x105eb390 */
  if (C.zf) goto L_105eb390;
  /* 105eb36d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb370 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb373 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eb376 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 105eb37a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb37d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb380 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 105eb383 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 105eb38a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 105eb38c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eb38e jne 0x105eb3c5 */
  if (!C.zf) goto L_105eb3c5;
L_105eb390:;
  /* 105eb390 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_105eb397:;
  /* 105eb397 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb39a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb39d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eb3a0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 105eb3a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb3a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb3aa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 105eb3ad and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 105eb3b4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 105eb3b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105eb3b8 jne 0x105eb3c5 */
  if (!C.zf) goto L_105eb3c5;
  /* 105eb3ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb3bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb3c0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 105eb3c3 jmp 0x105eb397 */
  goto L_105eb397;
L_105eb3c5:;
  /* 105eb3c5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb3c8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105eb3ce mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb3d1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 105eb3d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105eb3db mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105eb3e2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb3e5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb3e8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eb3eb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 105eb3ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105eb3f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb3f6 jne 0x105eb412 */
  if (!C.zf) goto L_105eb412;
  /* 105eb3f8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 105eb3ff mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb402 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb405 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105eb408 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 105eb40f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_105eb412:;
  /* 105eb412 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb416 jl 0x105eb42b */
  if ((C.sf!=C.of)) goto L_105eb42b;
  /* 105eb418 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eb41b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105eb41d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105eb420 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eb423 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb426 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105eb429 jmp 0x105eb412 */
  goto L_105eb412;
L_105eb42b:;
  /* 105eb42b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eb42e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb431 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 105eb435 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105eb438 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb43b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105eb43d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb440 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105eb443 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eb446 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 105eb449 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb44c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105eb44f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb453 jle 0x105eb45c */
  if ((C.zf||C.sf!=C.of)) goto L_105eb45c;
  /* 105eb455 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_105eb45c:;
  /* 105eb45c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eb45f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb462 je 0x105eb680 */
  if (C.zf) goto L_105eb680;
  /* 105eb468 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb46b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb46e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 105eb471 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb474 jne 0x105eb54a */
  if (!C.zf) goto L_105eb54a;
  /* 105eb47a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb47e jge 0x105eb4df */
  if ((C.sf==C.of)) goto L_105eb4df;
  /* 105eb480 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105eb485 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eb488 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105eb48a not eax */
  EAX = (~(EAX));
  /* 105eb48c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb48f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb492 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 105eb496 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105eb498 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb49b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb49e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 105eb4a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb4a5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb4a8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 105eb4ab sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105eb4ae mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb4b1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb4b4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 105eb4b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb4ba add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb4bd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105eb4c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105eb4c3 jne 0x105eb4dd */
  if (!C.zf) goto L_105eb4dd;
  /* 105eb4c5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105eb4ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eb4cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105eb4cf not eax */
  EAX = (~(EAX));
  /* 105eb4d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb4d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105eb4d6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105eb4d8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb4db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105eb4dd:;
  /* 105eb4dd jmp 0x105eb54a */
  goto L_105eb54a;
L_105eb4df:;
  /* 105eb4df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eb4e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb4e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105eb4ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105eb4ec not edx */
  EDX = (~(EDX));
  /* 105eb4ee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb4f1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb4f4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 105eb4fb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105eb4fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb500 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb503 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 105eb50a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb50d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb510 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105eb513 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105eb516 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb519 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb51c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 105eb51f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb522 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb525 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105eb529 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eb52b jne 0x105eb54a */
  if (!C.zf) goto L_105eb54a;
  /* 105eb52d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eb530 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb533 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105eb538 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105eb53a not edx */
  EDX = (~(EDX));
  /* 105eb53c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb53f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105eb542 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105eb544 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb547 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_105eb54a:;
  /* 105eb54a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb54d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105eb550 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb553 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105eb556 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 105eb559 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb55c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105eb55f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb562 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105eb565 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 105eb568 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb56c je 0x105eb680 */
  if (C.zf) goto L_105eb680;
  /* 105eb572 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eb575 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb578 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 105eb57b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105eb57e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb581 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105eb584 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105eb587 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 105eb58a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb58d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105eb590 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105eb593 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105eb596 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb599 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 105eb59c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb59f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105eb5a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb5a5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 105eb5a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb5ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb5ae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 105eb5b1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb5b4 jne 0x105eb680 */
  if (!C.zf) goto L_105eb680;
  /* 105eb5ba cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb5be jge 0x105eb61a */
  if ((C.sf==C.of)) goto L_105eb61a;
  /* 105eb5c0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb5c3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb5c6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105eb5ca mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb5cd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb5d0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 105eb5d3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105eb5d5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb5d8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb5db mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 105eb5de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eb5e0 jne 0x105eb5f8 */
  if (!C.zf) goto L_105eb5f8;
  /* 105eb5e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105eb5e7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eb5ea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105eb5ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb5ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105eb5f1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105eb5f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb5f6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105eb5f8:;
  /* 105eb5f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105eb5fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eb600 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105eb602 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb605 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb608 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 105eb60c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105eb60e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb611 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb614 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 105eb618 jmp 0x105eb680 */
  goto L_105eb680;
L_105eb61a:;
  /* 105eb61a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb61d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb620 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105eb624 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb627 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb62a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 105eb62d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105eb62f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb632 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb635 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 105eb638 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eb63a jne 0x105eb657 */
  if (!C.zf) goto L_105eb657;
  /* 105eb63c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eb63f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb642 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105eb647 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105eb649 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb64c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105eb64f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105eb651 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb654 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_105eb657:;
  /* 105eb657 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eb65a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb65d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105eb662 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105eb664 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb667 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb66a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 105eb671 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105eb673 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb676 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb679 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_105eb680:;
  /* 105eb680 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb684 je 0x105eb69a */
  if (C.zf) goto L_105eb69a;
  /* 105eb686 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eb68c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105eb68e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb691 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb694 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eb697 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_105eb69a:;
  /* 105eb69a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb69d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb6a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105eb6a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eb6a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb6a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb6ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105eb6ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eb6b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb6b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb6b7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb6ba mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 105eb6bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb6c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105eb6c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb6c5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105eb6c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb6ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb6cd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105eb6cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eb6d1 jne 0x105eb6f3 */
  if (!C.zf) goto L_105eb6f3;
  /* 105eb6d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb6d6 cmp eax, dword ptr [0x10610e00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10610e00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb6dc jne 0x105eb6f3 */
  if (!C.zf) goto L_105eb6f3;
  /* 105eb6de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb6e1 cmp ecx, dword ptr [0x10610df8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10610df8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb6e7 jne 0x105eb6f3 */
  if (!C.zf) goto L_105eb6f3;
  /* 105eb6e9 mov dword ptr [0x10610e00], 0 */
  w32((uint32_t)(0x10610e00), (0x0u));
L_105eb6f3:;
  /* 105eb6f3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105eb6f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eb6f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105eb6fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb6fe add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_105eb701:;
  /* 105eb701 pop esi */
  ESI = (pop32());
  /* 105eb702 mov esp, ebp */
  ESP = (EBP);
  /* 105eb704 pop ebp */
  EBP = (pop32());
  /* 105eb705 ret  */
  ESPCHK(0x105eb1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b710 @ 0x105eb710 (271 bytes, 78 insns) */
void f_105eb710(void) {
  FTRACE(0x105eb710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eb710 push ebp */
  push32((uint32_t)(EBP));
  /* 105eb711 mov ebp, esp */
  EBP = (ESP);
  /* 105eb713 push ecx */
  push32((uint32_t)(ECX));
  /* 105eb714 mov eax, dword ptr [0x10610e04] */
  EAX = (r32((uint32_t)(0x10610e04)));
  /* 105eb719 cmp eax, dword ptr [0x10610de8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10610de8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb71f jne 0x105eb76b */
  if (!C.zf) goto L_105eb76b;
  /* 105eb721 mov ecx, dword ptr [0x10610de8] */
  ECX = (r32((uint32_t)(0x10610de8)));
  /* 105eb727 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb72a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105eb72d push ecx */
  push32((uint32_t)(ECX));
  /* 105eb72e mov edx, dword ptr [0x10610e08] */
  EDX = (r32((uint32_t)(0x10610e08)));
  /* 105eb734 push edx */
  push32((uint32_t)(EDX));
  /* 105eb735 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eb737 mov eax, dword ptr [0x10612164] */
  EAX = (r32((uint32_t)(0x10612164)));
  /* 105eb73c push eax */
  push32((uint32_t)(EAX));
  /* 105eb73d call dword ptr [0x106132b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132b8))), 0x105eb743u);
  /* 105eb743 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105eb746 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb74a jne 0x105eb753 */
  if (!C.zf) goto L_105eb753;
  /* 105eb74c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eb74e jmp 0x105eb81b */
  goto L_105eb81b;
L_105eb753:;
  /* 105eb753 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb756 mov dword ptr [0x10610e08], ecx */
  w32((uint32_t)(0x10610e08), (ECX));
  /* 105eb75c mov edx, dword ptr [0x10610de8] */
  EDX = (r32((uint32_t)(0x10610de8)));
  /* 105eb762 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb765 mov dword ptr [0x10610de8], edx */
  w32((uint32_t)(0x10610de8), (EDX));
L_105eb76b:;
  /* 105eb76b mov eax, dword ptr [0x10610e04] */
  EAX = (r32((uint32_t)(0x10610e04)));
  /* 105eb770 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105eb773 mov ecx, dword ptr [0x10610e08] */
  ECX = (r32((uint32_t)(0x10610e08)));
  /* 105eb779 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb77b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105eb77e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 105eb783 push 8 */
  push32((uint32_t)(0x8u));
  /* 105eb785 mov edx, dword ptr [0x10612164] */
  EDX = (r32((uint32_t)(0x10612164)));
  /* 105eb78b push edx */
  push32((uint32_t)(EDX));
  /* 105eb78c call dword ptr [0x106132b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132b4))), 0x105eb792u);
  /* 105eb792 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb795 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 105eb798 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb79b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb79f jne 0x105eb7a5 */
  if (!C.zf) goto L_105eb7a5;
  /* 105eb7a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eb7a3 jmp 0x105eb81b */
  goto L_105eb81b;
L_105eb7a5:;
  /* 105eb7a5 push 4 */
  push32((uint32_t)(0x4u));
  /* 105eb7a7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 105eb7ac push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 105eb7b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eb7b3 call dword ptr [0x106132bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132bc))), 0x105eb7b9u);
  /* 105eb7b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb7bc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 105eb7bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb7c2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb7c6 jne 0x105eb7e2 */
  if (!C.zf) goto L_105eb7e2;
  /* 105eb7c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb7cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105eb7ce push ecx */
  push32((uint32_t)(ECX));
  /* 105eb7cf push 0 */
  push32((uint32_t)(0x0u));
  /* 105eb7d1 mov edx, dword ptr [0x10612164] */
  EDX = (r32((uint32_t)(0x10612164)));
  /* 105eb7d7 push edx */
  push32((uint32_t)(EDX));
  /* 105eb7d8 call dword ptr [0x10613200] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613200))), 0x105eb7deu);
  /* 105eb7de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eb7e0 jmp 0x105eb81b */
  goto L_105eb81b;
L_105eb7e2:;
  /* 105eb7e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb7e5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105eb7eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb7ee mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 105eb7f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb7f8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 105eb7ff mov eax, dword ptr [0x10610e04] */
  EAX = (r32((uint32_t)(0x10610e04)));
  /* 105eb804 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb807 mov dword ptr [0x10610e04], eax */
  w32((uint32_t)(0x10610e04), (EAX));
  /* 105eb80c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb80f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105eb812 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 105eb818 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105eb81b:;
  /* 105eb81b mov esp, ebp */
  ESP = (EBP);
  /* 105eb81d pop ebp */
  EBP = (pop32());
  /* 105eb81e ret  */
  ESPCHK(0x105eb710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b820 @ 0x105eb820 (494 bytes, 149 insns) */
void f_105eb820(void) {
  FTRACE(0x105eb820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eb820 push ebp */
  push32((uint32_t)(EBP));
  /* 105eb821 mov ebp, esp */
  EBP = (ESP);
  /* 105eb823 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb826 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eb829 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105eb82c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 105eb82f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eb832 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105eb835 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105eb838 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_105eb83f:;
  /* 105eb83f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb843 jl 0x105eb858 */
  if ((C.sf!=C.of)) goto L_105eb858;
  /* 105eb845 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eb848 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 105eb84a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105eb84d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eb850 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb853 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 105eb856 jmp 0x105eb83f */
  goto L_105eb83f;
L_105eb858:;
  /* 105eb858 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eb85b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105eb861 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eb864 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 105eb86b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105eb86e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105eb875 jmp 0x105eb880 */
  goto L_105eb880;
L_105eb877:;
  /* 105eb877 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eb87a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb87d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_105eb880:;
  /* 105eb880 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb884 jge 0x105eb8a6 */
  if ((C.sf==C.of)) goto L_105eb8a6;
  /* 105eb886 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eb889 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105eb88c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 105eb88f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105eb892 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb895 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb898 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 105eb89b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb89e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb8a1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 105eb8a4 jmp 0x105eb877 */
  goto L_105eb877;
L_105eb8a6:;
  /* 105eb8a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eb8a9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 105eb8ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eb8af mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105eb8b2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb8b4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105eb8b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 105eb8b9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 105eb8be push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105eb8c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb8c6 push edx */
  push32((uint32_t)(EDX));
  /* 105eb8c7 call dword ptr [0x106132bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132bc))), 0x105eb8cdu);
  /* 105eb8cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eb8cf jne 0x105eb8d9 */
  if (!C.zf) goto L_105eb8d9;
  /* 105eb8d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105eb8d4 jmp 0x105eba0a */
  goto L_105eba0a;
L_105eb8d9:;
  /* 105eb8d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb8dc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb8e1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105eb8e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb8e7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105eb8ea jmp 0x105eb8f8 */
  goto L_105eb8f8;
L_105eb8ec:;
  /* 105eb8ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb8ef add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb8f5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105eb8f8:;
  /* 105eb8f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb8fb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eb8fe ja 0x105eb95d */
  if ((!C.cf&&!C.zf)) goto L_105eb95d;
  /* 105eb900 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb903 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 105eb90a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb90d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 105eb917 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eb91a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb91d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105eb920 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb923 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 105eb929 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb92c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb932 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb935 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 105eb938 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb93b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eb941 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb944 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 105eb947 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb94a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb94f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105eb952 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eb955 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 105eb95b jmp 0x105eb8ec */
  goto L_105eb8ec;
L_105eb95d:;
  /* 105eb95d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105eb960 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb966 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105eb969 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eb96c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb96f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eb972 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 105eb975 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eb978 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105eb97b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105eb97e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb981 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eb984 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 105eb987 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eb98a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eb98d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eb990 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 105eb993 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eb996 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105eb999 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105eb99c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105eb99f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eb9a2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 105eb9a5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eb9a8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eb9ab mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 105eb9b3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eb9b6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eb9b9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 105eb9c4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eb9c7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 105eb9cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eb9ce mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 105eb9d1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 105eb9d4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eb9d7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 105eb9da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105eb9dc jne 0x105eb9ed */
  if (!C.zf) goto L_105eb9ed;
  /* 105eb9de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eb9e1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105eb9e4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105eb9e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eb9ea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_105eb9ed:;
  /* 105eb9ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105eb9f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eb9f5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105eb9f7 not edx */
  EDX = (~(EDX));
  /* 105eb9f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eb9fc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105eb9ff and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105eba01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eba04 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 105eba07 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_105eba0a:;
  /* 105eba0a mov esp, ebp */
  ESP = (EBP);
  /* 105eba0c pop ebp */
  EBP = (pop32());
  /* 105eba0d ret  */
  ESPCHK(0x105eb820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba10 @ 0x105eba10 (1515 bytes, 489 insns) */
void f_105eba10(void) {
  FTRACE(0x105eba10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eba10 push ebp */
  push32((uint32_t)(EBP));
  /* 105eba11 mov ebp, esp */
  EBP = (ESP);
  /* 105eba13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eba16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105eba19 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eba1c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 105eba1e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105eba21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eba24 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105eba27 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 105eba2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eba2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eba30 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eba33 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105eba36 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105eba39 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 105eba3c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105eba3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eba42 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105eba48 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eba4b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 105eba52 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105eba55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eba58 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eba5b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105eba5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eba61 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105eba63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eba66 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 105eba69 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105eba6c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eba6f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 105eba72 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eba75 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105eba77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105eba7a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eba7d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eba80 jle 0x105ebd36 */
  if ((C.zf||C.sf!=C.of)) goto L_105ebd36;
  /* 105eba86 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eba89 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105eba8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eba8e jne 0x105eba9b */
  if (!C.zf) goto L_105eba9b;
  /* 105eba90 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eba93 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eba96 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eba99 jle 0x105ebaa2 */
  if ((C.zf||C.sf!=C.of)) goto L_105ebaa2;
L_105eba9b:;
  /* 105eba9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eba9d jmp 0x105ebff7 */
  goto L_105ebff7;
L_105ebaa2:;
  /* 105ebaa2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ebaa5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 105ebaa8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebaab mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105ebaae cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebab2 jbe 0x105ebabb */
  if ((C.cf||C.zf)) goto L_105ebabb;
  /* 105ebab4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_105ebabb:;
  /* 105ebabb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebabe mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebac1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ebac4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebac7 jne 0x105ebb9d */
  if (!C.zf) goto L_105ebb9d;
  /* 105ebacd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebad1 jae 0x105ebb32 */
  if (!C.cf) goto L_105ebb32;
  /* 105ebad3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ebad8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ebadb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ebadd not edx */
  EDX = (~(EDX));
  /* 105ebadf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebae2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebae5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 105ebae9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ebaeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebaee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebaf1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 105ebaf5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebaf8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebafb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105ebafe sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ebb01 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebb04 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebb07 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 105ebb0a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebb0d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebb10 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105ebb14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ebb16 jne 0x105ebb30 */
  if (!C.zf) goto L_105ebb30;
  /* 105ebb18 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ebb1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ebb20 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ebb22 not edx */
  EDX = (~(EDX));
  /* 105ebb24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebb27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105ebb29 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105ebb2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebb2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105ebb30:;
  /* 105ebb30 jmp 0x105ebb9d */
  goto L_105ebb9d;
L_105ebb32:;
  /* 105ebb32 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ebb35 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebb38 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ebb3d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ebb3f not eax */
  EAX = (~(EAX));
  /* 105ebb41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebb44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebb47 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 105ebb4e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ebb50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebb53 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebb56 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 105ebb5d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebb60 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebb63 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 105ebb66 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ebb69 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebb6c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebb6f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 105ebb72 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebb75 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebb78 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105ebb7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ebb7e jne 0x105ebb9d */
  if (!C.zf) goto L_105ebb9d;
  /* 105ebb80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ebb83 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebb86 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ebb8b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ebb8d not eax */
  EAX = (~(EAX));
  /* 105ebb8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebb92 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ebb95 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105ebb97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebb9a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_105ebb9d:;
  /* 105ebb9d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebba0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105ebba3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebba6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ebba9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 105ebbac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebbaf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105ebbb2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebbb5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105ebbb8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 105ebbbb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ebbbe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebbc1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebbc4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105ebbc7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebbcb jle 0x105ebd17 */
  if ((C.zf||C.sf!=C.of)) goto L_105ebd17;
  /* 105ebbd1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebbd4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebbd7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 105ebbda mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ebbdd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 105ebbe0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebbe3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 105ebbe6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebbea jbe 0x105ebbf3 */
  if ((C.cf||C.zf)) goto L_105ebbf3;
  /* 105ebbec mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_105ebbf3:;
  /* 105ebbf3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ebbf6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ebbf9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 105ebbfc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 105ebbff mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebc02 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ebc05 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ebc08 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 105ebc0b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebc0e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ebc11 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 105ebc14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ebc17 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebc1a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 105ebc1d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebc20 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ebc23 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebc26 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105ebc29 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebc2c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebc2f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ebc32 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebc35 jne 0x105ebd03 */
  if (!C.zf) goto L_105ebd03;
  /* 105ebc3b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebc3f jae 0x105ebc9c */
  if (!C.cf) goto L_105ebc9c;
  /* 105ebc41 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebc44 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebc47 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105ebc4b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebc4e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebc51 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105ebc54 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 105ebc57 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebc5a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebc5d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 105ebc60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ebc62 jne 0x105ebc7a */
  if (!C.zf) goto L_105ebc7a;
  /* 105ebc64 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ebc69 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ebc6c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ebc6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebc71 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105ebc73 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105ebc75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebc78 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105ebc7a:;
  /* 105ebc7a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ebc7f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ebc82 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ebc84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebc87 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebc8a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 105ebc8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ebc90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebc93 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebc96 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 105ebc9a jmp 0x105ebd03 */
  goto L_105ebd03;
L_105ebc9c:;
  /* 105ebc9c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebc9f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebca2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105ebca6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebca9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebcac mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105ebcaf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 105ebcb2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebcb5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebcb8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 105ebcbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ebcbd jne 0x105ebcda */
  if (!C.zf) goto L_105ebcda;
  /* 105ebcbf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ebcc2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebcc5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ebcca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ebccc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebccf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ebcd2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105ebcd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebcd7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_105ebcda:;
  /* 105ebcda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ebcdd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebce0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ebce5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ebce7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebcea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebced mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 105ebcf4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ebcf6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebcf9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebcfc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_105ebd03:;
  /* 105ebd03 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebd06 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ebd09 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105ebd0b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebd0e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebd11 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ebd14 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_105ebd17:;
  /* 105ebd17 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ebd1a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebd1d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebd20 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105ebd22 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ebd25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebd28 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebd2b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebd2e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 105ebd31 jmp 0x105ebff2 */
  goto L_105ebff2;
L_105ebd36:;
  /* 105ebd36 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ebd39 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebd3c jge 0x105ebff2 */
  if ((C.sf==C.of)) goto L_105ebff2;
  /* 105ebd42 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ebd45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebd48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebd4b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105ebd4d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ebd50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebd53 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebd56 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebd59 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 105ebd5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebd5f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebd62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105ebd65 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ebd68 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebd6b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105ebd6e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ebd71 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 105ebd74 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebd77 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105ebd7a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebd7e jbe 0x105ebd87 */
  if ((C.cf||C.zf)) goto L_105ebd87;
  /* 105ebd80 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_105ebd87:;
  /* 105ebd87 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ebd8a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105ebd8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ebd8f jne 0x105ebed0 */
  if (!C.zf) goto L_105ebed0;
  /* 105ebd95 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ebd98 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 105ebd9b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebd9e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105ebda1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebda5 jbe 0x105ebdae */
  if ((C.cf||C.zf)) goto L_105ebdae;
  /* 105ebda7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_105ebdae:;
  /* 105ebdae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebdb1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebdb4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ebdb7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebdba jne 0x105ebe90 */
  if (!C.zf) goto L_105ebe90;
  /* 105ebdc0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebdc4 jae 0x105ebe25 */
  if (!C.cf) goto L_105ebe25;
  /* 105ebdc6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ebdcb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ebdce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ebdd0 not edx */
  EDX = (~(EDX));
  /* 105ebdd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebdd5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebdd8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 105ebddc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ebdde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebde1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebde4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 105ebde8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebdeb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebdee mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105ebdf1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ebdf4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebdf7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebdfa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 105ebdfd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebe00 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebe03 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105ebe07 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ebe09 jne 0x105ebe23 */
  if (!C.zf) goto L_105ebe23;
  /* 105ebe0b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ebe10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ebe13 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ebe15 not edx */
  EDX = (~(EDX));
  /* 105ebe17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebe1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105ebe1c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105ebe1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebe21 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105ebe23:;
  /* 105ebe23 jmp 0x105ebe90 */
  goto L_105ebe90;
L_105ebe25:;
  /* 105ebe25 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ebe28 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebe2b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ebe30 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ebe32 not eax */
  EAX = (~(EAX));
  /* 105ebe34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebe37 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebe3a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 105ebe41 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ebe43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebe46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebe49 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 105ebe50 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebe53 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebe56 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 105ebe59 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ebe5c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebe5f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebe62 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 105ebe65 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebe68 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebe6b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105ebe6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ebe71 jne 0x105ebe90 */
  if (!C.zf) goto L_105ebe90;
  /* 105ebe73 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ebe76 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebe79 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ebe7e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ebe80 not eax */
  EAX = (~(EAX));
  /* 105ebe82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebe85 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ebe88 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105ebe8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebe8d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_105ebe90:;
  /* 105ebe90 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebe93 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105ebe96 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebe99 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ebe9c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 105ebe9f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebea2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105ebea5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ebea8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105ebeab mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 105ebeae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ebeb1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebeb4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105ebeb7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ebeba sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 105ebebd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebec0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105ebec3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebec7 jbe 0x105ebed0 */
  if ((C.cf||C.zf)) goto L_105ebed0;
  /* 105ebec9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_105ebed0:;
  /* 105ebed0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ebed3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ebed6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 105ebed9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105ebedc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebedf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ebee2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ebee5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 105ebee8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebeeb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ebeee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105ebef1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ebef4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebef7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 105ebefa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebefd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ebf00 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebf03 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 105ebf06 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebf09 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebf0c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ebf0f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebf12 jne 0x105ebfde */
  if (!C.zf) goto L_105ebfde;
  /* 105ebf18 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ebf1c jae 0x105ebf78 */
  if (!C.cf) goto L_105ebf78;
  /* 105ebf1e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebf21 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebf24 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105ebf28 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebf2b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebf2e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 105ebf31 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105ebf33 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebf36 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebf39 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 105ebf3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ebf3e jne 0x105ebf56 */
  if (!C.zf) goto L_105ebf56;
  /* 105ebf40 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ebf45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ebf48 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ebf4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebf4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105ebf4f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105ebf51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebf54 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105ebf56:;
  /* 105ebf56 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ebf5b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ebf5e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ebf60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebf63 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebf66 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 105ebf6a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ebf6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebf6f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebf72 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 105ebf76 jmp 0x105ebfde */
  goto L_105ebfde;
L_105ebf78:;
  /* 105ebf78 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebf7b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebf7e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105ebf82 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebf85 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebf88 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 105ebf8b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105ebf8d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebf90 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebf93 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 105ebf96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ebf98 jne 0x105ebfb5 */
  if (!C.zf) goto L_105ebfb5;
  /* 105ebf9a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ebf9d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebfa0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ebfa5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ebfa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebfaa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ebfad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105ebfaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ebfb2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_105ebfb5:;
  /* 105ebfb5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ebfb8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ebfbb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ebfc0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ebfc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebfc5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebfc8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 105ebfcf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ebfd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ebfd4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ebfd7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_105ebfde:;
  /* 105ebfde mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebfe1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ebfe4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105ebfe6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ebfe9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ebfec mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ebfef mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_105ebff2:;
  /* 105ebff2 mov eax, 1 */
  EAX = (0x1u);
L_105ebff7:;
  /* 105ebff7 mov esp, ebp */
  ESP = (EBP);
  /* 105ebff9 pop ebp */
  EBP = (pop32());
  /* 105ebffa ret  */
  ESPCHK(0x105eba10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c000 @ 0x105ec000 (304 bytes, 79 insns) */
void f_105ec000(void) {
  FTRACE(0x105ec000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ec000 push ebp */
  push32((uint32_t)(EBP));
  /* 105ec001 mov ebp, esp */
  EBP = (ESP);
  /* 105ec003 push ecx */
  push32((uint32_t)(ECX));
  /* 105ec004 cmp dword ptr [0x10610e00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610e00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec00b je 0x105ec12c */
  if (C.zf) goto L_105ec12c;
  /* 105ec011 mov eax, dword ptr [0x10610df8] */
  EAX = (r32((uint32_t)(0x10610df8)));
  /* 105ec016 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 105ec019 mov ecx, dword ptr [0x10610e00] */
  ECX = (r32((uint32_t)(0x10610e00)));
  /* 105ec01f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105ec022 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec024 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105ec027 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 105ec02c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105ec031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ec034 push eax */
  push32((uint32_t)(EAX));
  /* 105ec035 call dword ptr [0x10613294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613294))), 0x105ec03bu);
  /* 105ec03b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ec040 mov ecx, dword ptr [0x10610df8] */
  ECX = (r32((uint32_t)(0x10610df8)));
  /* 105ec046 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ec048 mov eax, dword ptr [0x10610e00] */
  EAX = (r32((uint32_t)(0x10610e00)));
  /* 105ec04d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105ec050 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105ec052 mov edx, dword ptr [0x10610e00] */
  EDX = (r32((uint32_t)(0x10610e00)));
  /* 105ec058 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 105ec05b mov eax, dword ptr [0x10610e00] */
  EAX = (r32((uint32_t)(0x10610e00)));
  /* 105ec060 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105ec063 mov edx, dword ptr [0x10610df8] */
  EDX = (r32((uint32_t)(0x10610df8)));
  /* 105ec069 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 105ec074 mov eax, dword ptr [0x10610e00] */
  EAX = (r32((uint32_t)(0x10610e00)));
  /* 105ec079 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105ec07c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 105ec07f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ec082 mov eax, dword ptr [0x10610e00] */
  EAX = (r32((uint32_t)(0x10610e00)));
  /* 105ec087 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105ec08a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 105ec08d mov edx, dword ptr [0x10610e00] */
  EDX = (r32((uint32_t)(0x10610e00)));
  /* 105ec093 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105ec096 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 105ec09a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ec09c jne 0x105ec0b2 */
  if (!C.zf) goto L_105ec0b2;
  /* 105ec09e mov edx, dword ptr [0x10610e00] */
  EDX = (r32((uint32_t)(0x10610e00)));
  /* 105ec0a4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105ec0a7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 105ec0a9 mov ecx, dword ptr [0x10610e00] */
  ECX = (r32((uint32_t)(0x10610e00)));
  /* 105ec0af mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_105ec0b2:;
  /* 105ec0b2 mov edx, dword ptr [0x10610e00] */
  EDX = (r32((uint32_t)(0x10610e00)));
  /* 105ec0b8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec0bc jne 0x105ec122 */
  if (!C.zf) goto L_105ec122;
  /* 105ec0be cmp dword ptr [0x10610e04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10610e04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec0c5 jle 0x105ec122 */
  if ((C.zf||C.sf!=C.of)) goto L_105ec122;
  /* 105ec0c7 mov eax, dword ptr [0x10610e00] */
  EAX = (r32((uint32_t)(0x10610e00)));
  /* 105ec0cc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105ec0cf push ecx */
  push32((uint32_t)(ECX));
  /* 105ec0d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ec0d2 mov edx, dword ptr [0x10612164] */
  EDX = (r32((uint32_t)(0x10612164)));
  /* 105ec0d8 push edx */
  push32((uint32_t)(EDX));
  /* 105ec0d9 call dword ptr [0x10613200] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613200))), 0x105ec0dfu);
  /* 105ec0df mov eax, dword ptr [0x10610e04] */
  EAX = (r32((uint32_t)(0x10610e04)));
  /* 105ec0e4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ec0e7 mov ecx, dword ptr [0x10610e08] */
  ECX = (r32((uint32_t)(0x10610e08)));
  /* 105ec0ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec0ef mov edx, dword ptr [0x10610e00] */
  EDX = (r32((uint32_t)(0x10610e00)));
  /* 105ec0f5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec0f8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ec0fa push ecx */
  push32((uint32_t)(ECX));
  /* 105ec0fb mov eax, dword ptr [0x10610e00] */
  EAX = (r32((uint32_t)(0x10610e00)));
  /* 105ec100 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec103 push eax */
  push32((uint32_t)(EAX));
  /* 105ec104 mov ecx, dword ptr [0x10610e00] */
  ECX = (r32((uint32_t)(0x10610e00)));
  /* 105ec10a push ecx */
  push32((uint32_t)(ECX));
  /* 105ec10b call 0x105ee7e0 */
  push32(0x105ec110u); f_105ee7e0();
  /* 105ec110 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec113 mov edx, dword ptr [0x10610e04] */
  EDX = (r32((uint32_t)(0x10610e04)));
  /* 105ec119 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ec11c mov dword ptr [0x10610e04], edx */
  w32((uint32_t)(0x10610e04), (EDX));
L_105ec122:;
  /* 105ec122 mov dword ptr [0x10610e00], 0 */
  w32((uint32_t)(0x10610e00), (0x0u));
L_105ec12c:;
  /* 105ec12c mov esp, ebp */
  ESP = (EBP);
  /* 105ec12e pop ebp */
  EBP = (pop32());
  /* 105ec12f ret  */
  ESPCHK(0x105ec000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c130 @ 0x105ec130 (1565 bytes, 343 insns) */
void f_105ec130(void) {
  FTRACE(0x105ec130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ec130 push ebp */
  push32((uint32_t)(EBP));
  /* 105ec131 mov ebp, esp */
  EBP = (ESP);
  /* 105ec133 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ec139 mov eax, dword ptr [0x10610e04] */
  EAX = (r32((uint32_t)(0x10610e04)));
  /* 105ec13e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ec141 push eax */
  push32((uint32_t)(EAX));
  /* 105ec142 mov ecx, dword ptr [0x10610e08] */
  ECX = (r32((uint32_t)(0x10610e08)));
  /* 105ec148 push ecx */
  push32((uint32_t)(ECX));
  /* 105ec149 call dword ptr [0x10613268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613268))), 0x105ec14fu);
  /* 105ec14f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ec151 je 0x105ec15b */
  if (C.zf) goto L_105ec15b;
  /* 105ec153 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ec156 jmp 0x105ec749 */
  goto L_105ec749;
L_105ec15b:;
  /* 105ec15b mov edx, dword ptr [0x10610e08] */
  EDX = (r32((uint32_t)(0x10610e08)));
  /* 105ec161 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 105ec167 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 105ec171 jmp 0x105ec182 */
  goto L_105ec182;
L_105ec173:;
  /* 105ec173 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 105ec179 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec17c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_105ec182:;
  /* 105ec182 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 105ec188 cmp ecx, dword ptr [0x10610e04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10610e04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec18e jge 0x105ec747 */
  if ((C.sf==C.of)) goto L_105ec747;
  /* 105ec194 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105ec19a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105ec19d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 105ec1a3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 105ec1a8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 105ec1ae push ecx */
  push32((uint32_t)(ECX));
  /* 105ec1af call dword ptr [0x10613268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613268))), 0x105ec1b5u);
  /* 105ec1b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ec1b7 je 0x105ec1c3 */
  if (C.zf) goto L_105ec1c3;
  /* 105ec1b9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 105ec1be jmp 0x105ec749 */
  goto L_105ec749;
L_105ec1c3:;
  /* 105ec1c3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105ec1c9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 105ec1cc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 105ec1d2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 105ec1d8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec1de mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105ec1e1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105ec1e7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105ec1ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ec1ed mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 105ec1f7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 105ec201 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105ec208 jmp 0x105ec213 */
  goto L_105ec213;
L_105ec20a:;
  /* 105ec20a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ec20d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec210 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_105ec213:;
  /* 105ec213 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec217 jge 0x105ec70b */
  if ((C.sf==C.of)) goto L_105ec70b;
  /* 105ec21d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 105ec227 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 105ec231 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 105ec23b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 105ec245 jmp 0x105ec256 */
  goto L_105ec256;
L_105ec247:;
  /* 105ec247 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 105ec24d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec250 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_105ec256:;
  /* 105ec256 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec25d jge 0x105ec272 */
  if ((C.sf==C.of)) goto L_105ec272;
  /* 105ec25f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 105ec265 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 105ec270 jmp 0x105ec247 */
  goto L_105ec247;
L_105ec272:;
  /* 105ec272 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec276 jl 0x105ec6ad */
  if ((C.sf!=C.of)) goto L_105ec6ad;
  /* 105ec27c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105ec281 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 105ec287 push ecx */
  push32((uint32_t)(ECX));
  /* 105ec288 call dword ptr [0x10613268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613268))), 0x105ec28eu);
  /* 105ec28e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ec290 je 0x105ec29c */
  if (C.zf) goto L_105ec29c;
  /* 105ec292 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 105ec297 jmp 0x105ec749 */
  goto L_105ec749;
L_105ec29c:;
  /* 105ec29c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 105ec2a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105ec2a5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 105ec2af jmp 0x105ec2c0 */
  goto L_105ec2c0;
L_105ec2b1:;
  /* 105ec2b1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 105ec2b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec2ba mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_105ec2c0:;
  /* 105ec2c0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec2c7 jge 0x105ec444 */
  if ((C.sf==C.of)) goto L_105ec444;
  /* 105ec2cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ec2d0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec2d3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 105ec2d9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 105ec2df add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec2e5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 105ec2eb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 105ec2f1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec2f5 jne 0x105ec302 */
  if (!C.zf) goto L_105ec302;
  /* 105ec2f7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 105ec2fd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec300 je 0x105ec30c */
  if (C.zf) goto L_105ec30c;
L_105ec302:;
  /* 105ec302 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 105ec307 jmp 0x105ec749 */
  goto L_105ec749;
L_105ec30c:;
  /* 105ec30c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 105ec312 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105ec314 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 105ec31a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 105ec320 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 105ec326 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 105ec32c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105ec32f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ec331 je 0x105ec369 */
  if (C.zf) goto L_105ec369;
  /* 105ec333 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 105ec339 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ec33c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 105ec342 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec34c jle 0x105ec358 */
  if ((C.zf||C.sf!=C.of)) goto L_105ec358;
  /* 105ec34e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 105ec353 jmp 0x105ec749 */
  goto L_105ec749;
L_105ec358:;
  /* 105ec358 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 105ec35e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec361 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 105ec367 jmp 0x105ec3ab */
  goto L_105ec3ab;
L_105ec369:;
  /* 105ec369 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 105ec36f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 105ec372 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ec375 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 105ec37b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec382 jle 0x105ec38e */
  if ((C.zf||C.sf!=C.of)) goto L_105ec38e;
  /* 105ec384 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_105ec38e:;
  /* 105ec38e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 105ec394 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 105ec39b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec39e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 105ec3a4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_105ec3ab:;
  /* 105ec3ab cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec3b2 jl 0x105ec3cd */
  if ((C.sf!=C.of)) goto L_105ec3cd;
  /* 105ec3b4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 105ec3ba and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 105ec3bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ec3bf jne 0x105ec3cd */
  if (!C.zf) goto L_105ec3cd;
  /* 105ec3c1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec3cb jle 0x105ec3d7 */
  if ((C.zf||C.sf!=C.of)) goto L_105ec3d7;
L_105ec3cd:;
  /* 105ec3cd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 105ec3d2 jmp 0x105ec749 */
  goto L_105ec749;
L_105ec3d7:;
  /* 105ec3d7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 105ec3dd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec3e3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 105ec3e6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec3ec je 0x105ec3f8 */
  if (C.zf) goto L_105ec3f8;
  /* 105ec3ee mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 105ec3f3 jmp 0x105ec749 */
  goto L_105ec749;
L_105ec3f8:;
  /* 105ec3f8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 105ec3fe add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec404 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 105ec40a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 105ec410 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec416 jb 0x105ec30c */
  if (C.cf) goto L_105ec30c;
  /* 105ec41c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 105ec422 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec428 je 0x105ec434 */
  if (C.zf) goto L_105ec434;
  /* 105ec42a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 105ec42f jmp 0x105ec749 */
  goto L_105ec749;
L_105ec434:;
  /* 105ec434 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ec437 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec43c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ec43f jmp 0x105ec2b1 */
  goto L_105ec2b1;
L_105ec444:;
  /* 105ec444 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ec447 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105ec449 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec44f je 0x105ec45b */
  if (C.zf) goto L_105ec45b;
  /* 105ec451 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 105ec456 jmp 0x105ec749 */
  goto L_105ec749;
L_105ec45b:;
  /* 105ec45b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ec45e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 105ec464 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 105ec46b jmp 0x105ec476 */
  goto L_105ec476;
L_105ec46d:;
  /* 105ec46d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ec470 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec473 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_105ec476:;
  /* 105ec476 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec47a jge 0x105ec6ad */
  if ((C.sf==C.of)) goto L_105ec6ad;
  /* 105ec480 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 105ec48a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 105ec490 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_105ec496:;
  /* 105ec496 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 105ec49c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ec49f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 105ec4a5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105ec4ab cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec4b1 je 0x105ec5da */
  if (C.zf) goto L_105ec5da;
  /* 105ec4b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ec4ba mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 105ec4c0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec4c7 je 0x105ec5da */
  if (C.zf) goto L_105ec5da;
  /* 105ec4cd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105ec4d3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec4d9 jb 0x105ec4ee */
  if (C.cf) goto L_105ec4ee;
  /* 105ec4db mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 105ec4e1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec4e6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec4ec jb 0x105ec4f8 */
  if (C.cf) goto L_105ec4f8;
L_105ec4ee:;
  /* 105ec4ee mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 105ec4f3 jmp 0x105ec749 */
  goto L_105ec749;
L_105ec4f8:;
  /* 105ec4f8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105ec4fe and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 105ec504 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 105ec50a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 105ec510 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec513 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105ec516 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ec519 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec51e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_105ec524:;
  /* 105ec524 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ec527 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec52d je 0x105ec54e */
  if (C.zf) goto L_105ec54e;
  /* 105ec52f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ec532 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec538 jne 0x105ec53c */
  if (!C.zf) goto L_105ec53c;
  /* 105ec53a jmp 0x105ec54e */
  goto L_105ec54e;
L_105ec53c:;
  /* 105ec53c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ec53f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105ec541 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 105ec544 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ec547 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec549 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105ec54c jmp 0x105ec524 */
  goto L_105ec524;
L_105ec54e:;
  /* 105ec54e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ec551 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec557 jne 0x105ec563 */
  if (!C.zf) goto L_105ec563;
  /* 105ec559 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 105ec55e jmp 0x105ec749 */
  goto L_105ec749;
L_105ec563:;
  /* 105ec563 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105ec569 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105ec56b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 105ec56e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ec571 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 105ec577 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec57e jle 0x105ec58a */
  if ((C.zf||C.sf!=C.of)) goto L_105ec58a;
  /* 105ec580 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_105ec58a:;
  /* 105ec58a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 105ec590 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec593 je 0x105ec59f */
  if (C.zf) goto L_105ec59f;
  /* 105ec595 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 105ec59a jmp 0x105ec749 */
  goto L_105ec749;
L_105ec59f:;
  /* 105ec59f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105ec5a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105ec5a8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec5ae je 0x105ec5ba */
  if (C.zf) goto L_105ec5ba;
  /* 105ec5b0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 105ec5b5 jmp 0x105ec749 */
  goto L_105ec749;
L_105ec5ba:;
  /* 105ec5ba mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105ec5c0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 105ec5c6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 105ec5cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec5cf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 105ec5d5 jmp 0x105ec496 */
  goto L_105ec496;
L_105ec5da:;
  /* 105ec5da cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec5e1 je 0x105ec651 */
  if (C.zf) goto L_105ec651;
  /* 105ec5e3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec5e7 jge 0x105ec61b */
  if ((C.sf==C.of)) goto L_105ec61b;
  /* 105ec5e9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ec5ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ec5f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ec5f3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 105ec5f9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ec5fb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 105ec601 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ec606 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ec609 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ec60b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 105ec611 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ec613 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 105ec619 jmp 0x105ec651 */
  goto L_105ec651;
L_105ec61b:;
  /* 105ec61b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ec61e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ec621 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ec626 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ec628 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 105ec62e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ec630 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 105ec636 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ec639 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ec63c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ec641 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ec643 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 105ec649 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ec64b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_105ec651:;
  /* 105ec651 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 105ec657 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ec65a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec660 jne 0x105ec674 */
  if (!C.zf) goto L_105ec674;
  /* 105ec662 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ec665 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 105ec66b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec672 je 0x105ec67e */
  if (C.zf) goto L_105ec67e;
L_105ec674:;
  /* 105ec674 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 105ec679 jmp 0x105ec749 */
  goto L_105ec749;
L_105ec67e:;
  /* 105ec67e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 105ec684 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105ec687 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec68d je 0x105ec699 */
  if (C.zf) goto L_105ec699;
  /* 105ec68f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 105ec694 jmp 0x105ec749 */
  goto L_105ec749;
L_105ec699:;
  /* 105ec699 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 105ec69f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec6a2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 105ec6a8 jmp 0x105ec46d */
  goto L_105ec46d;
L_105ec6ad:;
  /* 105ec6ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ec6b0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 105ec6b6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 105ec6bc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec6c0 jne 0x105ec6da */
  if (!C.zf) goto L_105ec6da;
  /* 105ec6c2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ec6c5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 105ec6cb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 105ec6d1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec6d8 je 0x105ec6e1 */
  if (C.zf) goto L_105ec6e1;
L_105ec6da:;
  /* 105ec6da mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 105ec6df jmp 0x105ec749 */
  goto L_105ec749;
L_105ec6e1:;
  /* 105ec6e1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 105ec6e7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec6ed mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 105ec6f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ec6f6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec6fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105ec6fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ec701 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 105ec703 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105ec706 jmp 0x105ec20a */
  goto L_105ec20a;
L_105ec70b:;
  /* 105ec70b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105ec711 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 105ec717 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec719 jne 0x105ec72c */
  if (!C.zf) goto L_105ec72c;
  /* 105ec71b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105ec721 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 105ec727 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec72a je 0x105ec733 */
  if (C.zf) goto L_105ec733;
L_105ec72c:;
  /* 105ec72c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 105ec731 jmp 0x105ec749 */
  goto L_105ec749;
L_105ec733:;
  /* 105ec733 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105ec739 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec73c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 105ec742 jmp 0x105ec173 */
  goto L_105ec173;
L_105ec747:;
  /* 105ec747 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105ec749:;
  /* 105ec749 mov esp, ebp */
  ESP = (EBP);
  /* 105ec74b pop ebp */
  EBP = (pop32());
  /* 105ec74c ret  */
  ESPCHK(0x105ec130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x105ec750 (183 bytes, 58 insns) */
void f_105ec750(void) {
  FTRACE(0x105ec750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ec750 push ebp */
  push32((uint32_t)(EBP));
  /* 105ec751 mov ebp, esp */
  EBP = (ESP);
  /* 105ec753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ec756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ec759 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec75c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec761 ja 0x105ec77a */
  if ((!C.cf&&!C.zf)) goto L_105ec77a;
  /* 105ec763 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ec766 mov edx, dword ptr [0x1060ede8] */
  EDX = (r32((uint32_t)(0x1060ede8)));
  /* 105ec76c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ec76e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 105ec772 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 105ec775 jmp 0x105ec803 */
  goto L_105ec803;
L_105ec77a:;
  /* 105ec77a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ec77d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 105ec780 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105ec786 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105ec78c mov edx, dword ptr [0x1060ede8] */
  EDX = (r32((uint32_t)(0x1060ede8)));
  /* 105ec792 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ec794 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 105ec798 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 105ec79d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ec79f je 0x105ec7c3 */
  if (C.zf) goto L_105ec7c3;
  /* 105ec7a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ec7a4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 105ec7a7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105ec7ad mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 105ec7b0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 105ec7b3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 105ec7b6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 105ec7ba mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 105ec7c1 jmp 0x105ec7d4 */
  goto L_105ec7d4;
L_105ec7c3:;
  /* 105ec7c3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 105ec7c6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 105ec7c9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 105ec7cd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_105ec7d4:;
  /* 105ec7d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ec7d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ec7d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ec7da lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 105ec7dd push ecx */
  push32((uint32_t)(ECX));
  /* 105ec7de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ec7e1 push edx */
  push32((uint32_t)(EDX));
  /* 105ec7e2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 105ec7e5 push eax */
  push32((uint32_t)(EAX));
  /* 105ec7e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ec7e8 call 0x105eeb20 */
  push32(0x105ec7edu); f_105eeb20();
  /* 105ec7ed add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec7f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ec7f2 jne 0x105ec7f8 */
  if (!C.zf) goto L_105ec7f8;
  /* 105ec7f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ec7f6 jmp 0x105ec803 */
  goto L_105ec803;
L_105ec7f8:;
  /* 105ec7f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ec7fb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ec800 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_105ec803:;
  /* 105ec803 mov esp, ebp */
  ESP = (EBP);
  /* 105ec805 pop ebp */
  EBP = (pop32());
  /* 105ec806 ret  */
  ESPCHK(0x105ec750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c810 @ 0x105ec810 (836 bytes, 238 insns) */
void f_105ec810(void) {
  FTRACE(0x105ec810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ec810 push ebp */
  push32((uint32_t)(EBP));
  /* 105ec811 mov ebp, esp */
  EBP = (ESP);
  /* 105ec813 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ec816 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105ec818 call 0x105ea240 */
  push32(0x105ec81du); f_105ea240();
  /* 105ec81d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec820 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ec823 push eax */
  push32((uint32_t)(EAX));
  /* 105ec824 call 0x105ecb60 */
  push32(0x105ec829u); f_105ecb60();
  /* 105ec829 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec82c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105ec82f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ec832 cmp ecx, dword ptr [0x10610b48] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10610b48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec838 jne 0x105ec84b */
  if (!C.zf) goto L_105ec84b;
  /* 105ec83a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105ec83c call 0x105ea2e0 */
  push32(0x105ec841u); f_105ea2e0();
  /* 105ec841 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec844 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ec846 jmp 0x105ecb50 */
  goto L_105ecb50;
L_105ec84b:;
  /* 105ec84b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec84f jne 0x105ec86c */
  if (!C.zf) goto L_105ec86c;
  /* 105ec851 call 0x105ecc40 */
  push32(0x105ec856u); f_105ecc40();
  /* 105ec856 call 0x105eccc0 */
  push32(0x105ec85bu); f_105eccc0();
  /* 105ec85b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105ec85d call 0x105ea2e0 */
  push32(0x105ec862u); f_105ea2e0();
  /* 105ec862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec865 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ec867 jmp 0x105ecb50 */
  goto L_105ecb50;
L_105ec86c:;
  /* 105ec86c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ec873 jmp 0x105ec87e */
  goto L_105ec87e;
L_105ec875:;
  /* 105ec875 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ec878 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec87b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105ec87e:;
  /* 105ec87e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec882 jae 0x105ec9cf */
  if (!C.cf) goto L_105ec9cf;
  /* 105ec888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ec88b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ec88e mov ecx, dword ptr [eax + 0x1060f170] */
  ECX = (r32((uint32_t)(EAX + 0x1060f170)));
  /* 105ec894 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec897 jne 0x105ec9ca */
  if (!C.zf) goto L_105ec9ca;
  /* 105ec89d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105ec8a4 jmp 0x105ec8af */
  goto L_105ec8af;
L_105ec8a6:;
  /* 105ec8a6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ec8a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec8ac mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_105ec8af:;
  /* 105ec8af cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec8b6 jae 0x105ec8c4 */
  if (!C.cf) goto L_105ec8c4;
  /* 105ec8b8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ec8bb mov byte ptr [eax + 0x10610ce0], 0 */
  w8((uint32_t)(EAX + 0x10610ce0), (0x0u));
  /* 105ec8c2 jmp 0x105ec8a6 */
  goto L_105ec8a6;
L_105ec8c4:;
  /* 105ec8c4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105ec8cb jmp 0x105ec8d6 */
  goto L_105ec8d6;
L_105ec8cd:;
  /* 105ec8cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ec8d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec8d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_105ec8d6:;
  /* 105ec8d6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec8da jae 0x105ec957 */
  if (!C.cf) goto L_105ec957;
  /* 105ec8dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ec8df imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ec8e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ec8e5 lea ecx, [edx + eax*8 + 0x1060f180] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1060f180));
  /* 105ec8ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105ec8ef jmp 0x105ec8fa */
  goto L_105ec8fa;
L_105ec8f1:;
  /* 105ec8f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ec8f4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec8f7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105ec8fa:;
  /* 105ec8fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ec8fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105ec8ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105ec901 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ec903 je 0x105ec952 */
  if (C.zf) goto L_105ec952;
  /* 105ec905 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ec908 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ec90a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 105ec90d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ec90f je 0x105ec952 */
  if (C.zf) goto L_105ec952;
  /* 105ec911 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ec914 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ec916 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105ec918 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 105ec91b jmp 0x105ec926 */
  goto L_105ec926;
L_105ec91d:;
  /* 105ec91d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ec920 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec923 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_105ec926:;
  /* 105ec926 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ec929 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ec92b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 105ec92e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec931 ja 0x105ec950 */
  if ((!C.cf&&!C.zf)) goto L_105ec950;
  /* 105ec933 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ec936 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ec939 mov dl, byte ptr [eax + 0x10610ce1] */
  DL = (r8((uint32_t)(EAX + 0x10610ce1)));
  /* 105ec93f or dl, byte ptr [ecx + 0x1060f168] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1060f168))); DL = (_r); fl_logic(_r,8); }
  /* 105ec945 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ec948 mov byte ptr [eax + 0x10610ce1], dl */
  w8((uint32_t)(EAX + 0x10610ce1), (DL));
  /* 105ec94e jmp 0x105ec91d */
  goto L_105ec91d;
L_105ec950:;
  /* 105ec950 jmp 0x105ec8f1 */
  goto L_105ec8f1;
L_105ec952:;
  /* 105ec952 jmp 0x105ec8cd */
  goto L_105ec8cd;
L_105ec957:;
  /* 105ec957 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ec95a mov dword ptr [0x10610b48], ecx */
  w32((uint32_t)(0x10610b48), (ECX));
  /* 105ec960 mov dword ptr [0x10610bcc], 1 */
  w32((uint32_t)(0x10610bcc), (0x1u));
  /* 105ec96a mov edx, dword ptr [0x10610b48] */
  EDX = (r32((uint32_t)(0x10610b48)));
  /* 105ec970 push edx */
  push32((uint32_t)(EDX));
  /* 105ec971 call 0x105ecbc0 */
  push32(0x105ec976u); f_105ecbc0();
  /* 105ec976 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec979 mov dword ptr [0x10610de4], eax */
  w32((uint32_t)(0x10610de4), (EAX));
  /* 105ec97e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105ec985 jmp 0x105ec990 */
  goto L_105ec990;
L_105ec987:;
  /* 105ec987 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ec98a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec98d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105ec990:;
  /* 105ec990 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec994 jae 0x105ec9b4 */
  if (!C.cf) goto L_105ec9b4;
  /* 105ec996 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ec999 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ec99c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ec99f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ec9a2 mov cx, word ptr [ecx + eax*2 + 0x1060f174] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1060f174)));
  /* 105ec9aa mov word ptr [edx*2 + 0x10610bc0], cx */
  w16((uint32_t)(EDX*2 + 0x10610bc0), (CX));
  /* 105ec9b2 jmp 0x105ec987 */
  goto L_105ec987;
L_105ec9b4:;
  /* 105ec9b4 call 0x105eccc0 */
  push32(0x105ec9b9u); f_105eccc0();
  /* 105ec9b9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105ec9bb call 0x105ea2e0 */
  push32(0x105ec9c0u); f_105ea2e0();
  /* 105ec9c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec9c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ec9c5 jmp 0x105ecb50 */
  goto L_105ecb50;
L_105ec9ca:;
  /* 105ec9ca jmp 0x105ec875 */
  goto L_105ec875;
L_105ec9cf:;
  /* 105ec9cf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 105ec9d2 push edx */
  push32((uint32_t)(EDX));
  /* 105ec9d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ec9d6 push eax */
  push32((uint32_t)(EAX));
  /* 105ec9d7 call dword ptr [0x106132c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132c0))), 0x105ec9ddu);
  /* 105ec9dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec9e0 jne 0x105ecb22 */
  if (!C.zf) goto L_105ecb22;
  /* 105ec9e6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105ec9ed jmp 0x105ec9f8 */
  goto L_105ec9f8;
L_105ec9ef:;
  /* 105ec9ef mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ec9f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ec9f5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_105ec9f8:;
  /* 105ec9f8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ec9ff jae 0x105eca0d */
  if (!C.cf) goto L_105eca0d;
  /* 105eca01 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eca04 mov byte ptr [edx + 0x10610ce0], 0 */
  w8((uint32_t)(EDX + 0x10610ce0), (0x0u));
  /* 105eca0b jmp 0x105ec9ef */
  goto L_105ec9ef;
L_105eca0d:;
  /* 105eca0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eca10 mov dword ptr [0x10610b48], eax */
  w32((uint32_t)(0x10610b48), (EAX));
  /* 105eca15 mov dword ptr [0x10610de4], 0 */
  w32((uint32_t)(0x10610de4), (0x0u));
  /* 105eca1f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eca23 jbe 0x105ecade */
  if ((C.cf||C.zf)) goto L_105ecade;
  /* 105eca29 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 105eca2c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 105eca2f jmp 0x105eca3a */
  goto L_105eca3a;
L_105eca31:;
  /* 105eca31 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eca34 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eca37 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_105eca3a:;
  /* 105eca3a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eca3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105eca3f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105eca41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eca43 je 0x105eca8c */
  if (C.zf) goto L_105eca8c;
  /* 105eca45 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eca48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eca4a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 105eca4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eca4f je 0x105eca8c */
  if (C.zf) goto L_105eca8c;
  /* 105eca51 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eca54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105eca56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105eca58 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 105eca5b jmp 0x105eca66 */
  goto L_105eca66;
L_105eca5d:;
  /* 105eca5d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eca60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eca63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_105eca66:;
  /* 105eca66 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eca69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105eca6b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 105eca6e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eca71 ja 0x105eca8a */
  if ((!C.cf&&!C.zf)) goto L_105eca8a;
  /* 105eca73 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eca76 mov cl, byte ptr [eax + 0x10610ce1] */
  CL = (r8((uint32_t)(EAX + 0x10610ce1)));
  /* 105eca7c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 105eca7f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eca82 mov byte ptr [edx + 0x10610ce1], cl */
  w8((uint32_t)(EDX + 0x10610ce1), (CL));
  /* 105eca88 jmp 0x105eca5d */
  goto L_105eca5d;
L_105eca8a:;
  /* 105eca8a jmp 0x105eca31 */
  goto L_105eca31;
L_105eca8c:;
  /* 105eca8c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 105eca93 jmp 0x105eca9e */
  goto L_105eca9e;
L_105eca95:;
  /* 105eca95 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eca98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eca9b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_105eca9e:;
  /* 105eca9e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecaa5 jae 0x105ecabe */
  if (!C.cf) goto L_105ecabe;
  /* 105ecaa7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ecaaa mov dl, byte ptr [ecx + 0x10610ce1] */
  DL = (r8((uint32_t)(ECX + 0x10610ce1)));
  /* 105ecab0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 105ecab3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ecab6 mov byte ptr [eax + 0x10610ce1], dl */
  w8((uint32_t)(EAX + 0x10610ce1), (DL));
  /* 105ecabc jmp 0x105eca95 */
  goto L_105eca95;
L_105ecabe:;
  /* 105ecabe mov ecx, dword ptr [0x10610b48] */
  ECX = (r32((uint32_t)(0x10610b48)));
  /* 105ecac4 push ecx */
  push32((uint32_t)(ECX));
  /* 105ecac5 call 0x105ecbc0 */
  push32(0x105ecacau); f_105ecbc0();
  /* 105ecaca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ecacd mov dword ptr [0x10610de4], eax */
  w32((uint32_t)(0x10610de4), (EAX));
  /* 105ecad2 mov dword ptr [0x10610bcc], 1 */
  w32((uint32_t)(0x10610bcc), (0x1u));
  /* 105ecadc jmp 0x105ecae8 */
  goto L_105ecae8;
L_105ecade:;
  /* 105ecade mov dword ptr [0x10610bcc], 0 */
  w32((uint32_t)(0x10610bcc), (0x0u));
L_105ecae8:;
  /* 105ecae8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105ecaef jmp 0x105ecafa */
  goto L_105ecafa;
L_105ecaf1:;
  /* 105ecaf1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ecaf4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ecaf7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105ecafa:;
  /* 105ecafa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecafe jae 0x105ecb0f */
  if (!C.cf) goto L_105ecb0f;
  /* 105ecb00 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ecb03 mov word ptr [eax*2 + 0x10610bc0], 0 */
  w16((uint32_t)(EAX*2 + 0x10610bc0), (0x0u));
  /* 105ecb0d jmp 0x105ecaf1 */
  goto L_105ecaf1;
L_105ecb0f:;
  /* 105ecb0f call 0x105eccc0 */
  push32(0x105ecb14u); f_105eccc0();
  /* 105ecb14 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105ecb16 call 0x105ea2e0 */
  push32(0x105ecb1bu); f_105ea2e0();
  /* 105ecb1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ecb1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ecb20 jmp 0x105ecb50 */
  goto L_105ecb50;
L_105ecb22:;
  /* 105ecb22 cmp dword ptr [0x106109a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106109a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecb29 je 0x105ecb43 */
  if (C.zf) goto L_105ecb43;
  /* 105ecb2b call 0x105ecc40 */
  push32(0x105ecb30u); f_105ecc40();
  /* 105ecb30 call 0x105eccc0 */
  push32(0x105ecb35u); f_105eccc0();
  /* 105ecb35 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105ecb37 call 0x105ea2e0 */
  push32(0x105ecb3cu); f_105ea2e0();
  /* 105ecb3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ecb3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ecb41 jmp 0x105ecb50 */
  goto L_105ecb50;
L_105ecb43:;
  /* 105ecb43 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105ecb45 call 0x105ea2e0 */
  push32(0x105ecb4au); f_105ea2e0();
  /* 105ecb4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ecb4d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105ecb50:;
  /* 105ecb50 mov esp, ebp */
  ESP = (EBP);
  /* 105ecb52 pop ebp */
  EBP = (pop32());
  /* 105ecb53 ret  */
  ESPCHK(0x105ec810u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x105ecb60 (89 bytes, 21 insns) */
void f_105ecb60(void) {
  FTRACE(0x105ecb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ecb60 push ebp */
  push32((uint32_t)(EBP));
  /* 105ecb61 mov ebp, esp */
  EBP = (ESP);
  /* 105ecb63 mov dword ptr [0x106109a8], 0 */
  w32((uint32_t)(0x106109a8), (0x0u));
  /* 105ecb6d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecb71 jne 0x105ecb85 */
  if (!C.zf) goto L_105ecb85;
  /* 105ecb73 mov dword ptr [0x106109a8], 1 */
  w32((uint32_t)(0x106109a8), (0x1u));
  /* 105ecb7d call dword ptr [0x106132c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132c8))), 0x105ecb83u);
  /* 105ecb83 jmp 0x105ecbb7 */
  goto L_105ecbb7;
L_105ecb85:;
  /* 105ecb85 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecb89 jne 0x105ecb9d */
  if (!C.zf) goto L_105ecb9d;
  /* 105ecb8b mov dword ptr [0x106109a8], 1 */
  w32((uint32_t)(0x106109a8), (0x1u));
  /* 105ecb95 call dword ptr [0x106132c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132c4))), 0x105ecb9bu);
  /* 105ecb9b jmp 0x105ecbb7 */
  goto L_105ecbb7;
L_105ecb9d:;
  /* 105ecb9d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecba1 jne 0x105ecbb4 */
  if (!C.zf) goto L_105ecbb4;
  /* 105ecba3 mov dword ptr [0x106109a8], 1 */
  w32((uint32_t)(0x106109a8), (0x1u));
  /* 105ecbad mov eax, dword ptr [0x106109d0] */
  EAX = (r32((uint32_t)(0x106109d0)));
  /* 105ecbb2 jmp 0x105ecbb7 */
  goto L_105ecbb7;
L_105ecbb4:;
  /* 105ecbb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_105ecbb7:;
  /* 105ecbb7 pop ebp */
  EBP = (pop32());
  /* 105ecbb8 ret  */
  ESPCHK(0x105ecb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbc0 @ 0x105ecbc0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_105ecbc0(void) {
  FTRACE(0x105ecbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ecbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ecbc1 mov ebp, esp */
  EBP = (ESP);
  /* 105ecbc3 push ecx */
  push32((uint32_t)(ECX));
  /* 105ecbc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ecbc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ecbca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ecbcd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ecbd3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105ecbd6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecbda ja 0x105ecc0a */
  if ((!C.cf&&!C.zf)) goto L_105ecc0a;
  /* 105ecbdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ecbdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ecbe1 mov dl, byte ptr [eax + 0x105ecc24] */
  DL = (r8((uint32_t)(EAX + 0x105ecc24)));
  /* 105ecbe7 jmp dword ptr [edx*4 + 0x105ecc10] */
  switch (EDX) {
    case 0: goto L_105ecbee;
    case 1: goto L_105ecbf5;
    case 2: goto L_105ecbfc;
    case 3: goto L_105ecc03;
    case 4: goto L_105ecc0a;
    default: x86_unimpl("switch@0x105ecbe7 out of table"); return;
  }
L_105ecbee:;
  /* 105ecbee mov eax, 0x411 */
  EAX = (0x411u);
  /* 105ecbf3 jmp 0x105ecc0c */
  goto L_105ecc0c;
L_105ecbf5:;
  /* 105ecbf5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 105ecbfa jmp 0x105ecc0c */
  goto L_105ecc0c;
L_105ecbfc:;
  /* 105ecbfc mov eax, 0x412 */
  EAX = (0x412u);
  /* 105ecc01 jmp 0x105ecc0c */
  goto L_105ecc0c;
L_105ecc03:;
  /* 105ecc03 mov eax, 0x404 */
  EAX = (0x404u);
  /* 105ecc08 jmp 0x105ecc0c */
  goto L_105ecc0c;
L_105ecc0a:;
  /* 105ecc0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105ecc0c:;
  /* 105ecc0c mov esp, ebp */
  ESP = (EBP);
  /* 105ecc0e pop ebp */
  EBP = (pop32());
  /* 105ecc0f ret  */
  ESPCHK(0x105ecbc0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x105ecc40 (116 bytes, 29 insns) */
void f_105ecc40(void) {
  FTRACE(0x105ecc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ecc40 push ebp */
  push32((uint32_t)(EBP));
  /* 105ecc41 mov ebp, esp */
  EBP = (ESP);
  /* 105ecc43 push ecx */
  push32((uint32_t)(ECX));
  /* 105ecc44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ecc4b jmp 0x105ecc56 */
  goto L_105ecc56;
L_105ecc4d:;
  /* 105ecc4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ecc50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ecc53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105ecc56:;
  /* 105ecc56 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecc5d jge 0x105ecc6b */
  if ((C.sf==C.of)) goto L_105ecc6b;
  /* 105ecc5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ecc62 mov byte ptr [ecx + 0x10610ce0], 0 */
  w8((uint32_t)(ECX + 0x10610ce0), (0x0u));
  /* 105ecc69 jmp 0x105ecc4d */
  goto L_105ecc4d;
L_105ecc6b:;
  /* 105ecc6b mov dword ptr [0x10610b48], 0 */
  w32((uint32_t)(0x10610b48), (0x0u));
  /* 105ecc75 mov dword ptr [0x10610bcc], 0 */
  w32((uint32_t)(0x10610bcc), (0x0u));
  /* 105ecc7f mov dword ptr [0x10610de4], 0 */
  w32((uint32_t)(0x10610de4), (0x0u));
  /* 105ecc89 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ecc90 jmp 0x105ecc9b */
  goto L_105ecc9b;
L_105ecc92:;
  /* 105ecc92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ecc95 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ecc98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105ecc9b:;
  /* 105ecc9b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecc9f jge 0x105eccb0 */
  if ((C.sf==C.of)) goto L_105eccb0;
  /* 105ecca1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ecca4 mov word ptr [eax*2 + 0x10610bc0], 0 */
  w16((uint32_t)(EAX*2 + 0x10610bc0), (0x0u));
  /* 105eccae jmp 0x105ecc92 */
  goto L_105ecc92;
L_105eccb0:;
  /* 105eccb0 mov esp, ebp */
  ESP = (EBP);
  /* 105eccb2 pop ebp */
  EBP = (pop32());
  /* 105eccb3 ret  */
  ESPCHK(0x105ecc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccc0 @ 0x105eccc0 (770 bytes, 175 insns) */
void f_105eccc0(void) {
  FTRACE(0x105eccc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eccc0 push ebp */
  push32((uint32_t)(EBP));
  /* 105eccc1 mov ebp, esp */
  EBP = (ESP);
  /* 105eccc3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eccc9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 105ecccf push eax */
  push32((uint32_t)(EAX));
  /* 105eccd0 mov ecx, dword ptr [0x10610b48] */
  ECX = (r32((uint32_t)(0x10610b48)));
  /* 105eccd6 push ecx */
  push32((uint32_t)(ECX));
  /* 105eccd7 call dword ptr [0x106132c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132c0))), 0x105eccddu);
  /* 105eccdd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecce0 jne 0x105ecef9 */
  if (!C.zf) goto L_105ecef9;
  /* 105ecce6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 105eccf0 jmp 0x105ecd01 */
  goto L_105ecd01;
L_105eccf2:;
  /* 105eccf2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105eccf8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eccfb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_105ecd01:;
  /* 105ecd01 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecd0b jae 0x105ecd22 */
  if (!C.cf) goto L_105ecd22;
  /* 105ecd0d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecd13 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 105ecd19 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 105ecd20 jmp 0x105eccf2 */
  goto L_105eccf2;
L_105ecd22:;
  /* 105ecd22 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 105ecd29 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 105ecd2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105ecd32 jmp 0x105ecd3d */
  goto L_105ecd3d;
L_105ecd34:;
  /* 105ecd34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ecd37 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ecd3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105ecd3d:;
  /* 105ecd3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ecd40 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ecd42 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105ecd44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ecd46 je 0x105ecd88 */
  if (C.zf) goto L_105ecd88;
  /* 105ecd48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ecd4b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105ecd4d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105ecd4f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 105ecd55 jmp 0x105ecd66 */
  goto L_105ecd66;
L_105ecd57:;
  /* 105ecd57 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecd5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ecd60 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_105ecd66:;
  /* 105ecd66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ecd69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105ecd6b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 105ecd6e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecd74 ja 0x105ecd86 */
  if ((!C.cf&&!C.zf)) goto L_105ecd86;
  /* 105ecd76 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecd7c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 105ecd84 jmp 0x105ecd57 */
  goto L_105ecd57;
L_105ecd86:;
  /* 105ecd86 jmp 0x105ecd34 */
  goto L_105ecd34;
L_105ecd88:;
  /* 105ecd88 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ecd8a mov eax, dword ptr [0x10610de4] */
  EAX = (r32((uint32_t)(0x10610de4)));
  /* 105ecd8f push eax */
  push32((uint32_t)(EAX));
  /* 105ecd90 mov ecx, dword ptr [0x10610b48] */
  ECX = (r32((uint32_t)(0x10610b48)));
  /* 105ecd96 push ecx */
  push32((uint32_t)(ECX));
  /* 105ecd97 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 105ecd9d push edx */
  push32((uint32_t)(EDX));
  /* 105ecd9e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105ecda3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 105ecda9 push eax */
  push32((uint32_t)(EAX));
  /* 105ecdaa push 1 */
  push32((uint32_t)(0x1u));
  /* 105ecdac call 0x105eeb20 */
  push32(0x105ecdb1u); f_105eeb20();
  /* 105ecdb1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ecdb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ecdb6 mov ecx, dword ptr [0x10610b48] */
  ECX = (r32((uint32_t)(0x10610b48)));
  /* 105ecdbc push ecx */
  push32((uint32_t)(ECX));
  /* 105ecdbd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105ecdc2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 105ecdc8 push edx */
  push32((uint32_t)(EDX));
  /* 105ecdc9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105ecdce lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 105ecdd4 push eax */
  push32((uint32_t)(EAX));
  /* 105ecdd5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105ecdda mov ecx, dword ptr [0x10610de4] */
  ECX = (r32((uint32_t)(0x10610de4)));
  /* 105ecde0 push ecx */
  push32((uint32_t)(ECX));
  /* 105ecde1 call 0x105eece0 */
  push32(0x105ecde6u); f_105eece0();
  /* 105ecde6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ecde9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ecdeb mov edx, dword ptr [0x10610b48] */
  EDX = (r32((uint32_t)(0x10610b48)));
  /* 105ecdf1 push edx */
  push32((uint32_t)(EDX));
  /* 105ecdf2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105ecdf7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 105ecdfd push eax */
  push32((uint32_t)(EAX));
  /* 105ecdfe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105ece03 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 105ece09 push ecx */
  push32((uint32_t)(ECX));
  /* 105ece0a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 105ece0f mov edx, dword ptr [0x10610de4] */
  EDX = (r32((uint32_t)(0x10610de4)));
  /* 105ece15 push edx */
  push32((uint32_t)(EDX));
  /* 105ece16 call 0x105eece0 */
  push32(0x105ece1bu); f_105eece0();
  /* 105ece1b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ece1e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 105ece28 jmp 0x105ece39 */
  goto L_105ece39;
L_105ece2a:;
  /* 105ece2a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ece30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ece33 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_105ece39:;
  /* 105ece39 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ece43 jae 0x105ecef4 */
  if (!C.cf) goto L_105ecef4;
  /* 105ece49 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ece4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ece51 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 105ece59 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105ece5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ece5e je 0x105ece96 */
  if (C.zf) goto L_105ece96;
  /* 105ece60 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ece66 mov cl, byte ptr [eax + 0x10610ce1] */
  CL = (r8((uint32_t)(EAX + 0x10610ce1)));
  /* 105ece6c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 105ece6f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ece75 mov byte ptr [edx + 0x10610ce1], cl */
  w8((uint32_t)(EDX + 0x10610ce1), (CL));
  /* 105ece7b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ece81 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ece87 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 105ece8e mov byte ptr [eax + 0x10610be0], dl */
  w8((uint32_t)(EAX + 0x10610be0), (DL));
  /* 105ece94 jmp 0x105eceef */
  goto L_105eceef;
L_105ece96:;
  /* 105ece96 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ece9c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105ece9e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 105ecea6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 105ecea9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eceab je 0x105ecee2 */
  if (C.zf) goto L_105ecee2;
  /* 105ecead mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105eceb3 mov al, byte ptr [edx + 0x10610ce1] */
  AL = (r8((uint32_t)(EDX + 0x10610ce1)));
  /* 105eceb9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 105ecebb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecec1 mov byte ptr [ecx + 0x10610ce1], al */
  w8((uint32_t)(ECX + 0x10610ce1), (AL));
  /* 105ecec7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ececd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105eced3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 105eceda mov byte ptr [edx + 0x10610be0], cl */
  w8((uint32_t)(EDX + 0x10610be0), (CL));
  /* 105ecee0 jmp 0x105eceef */
  goto L_105eceef;
L_105ecee2:;
  /* 105ecee2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecee8 mov byte ptr [edx + 0x10610be0], 0 */
  w8((uint32_t)(EDX + 0x10610be0), (0x0u));
L_105eceef:;
  /* 105eceef jmp 0x105ece2a */
  goto L_105ece2a;
L_105ecef4:;
  /* 105ecef4 jmp 0x105ecfbe */
  goto L_105ecfbe;
L_105ecef9:;
  /* 105ecef9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 105ecf03 jmp 0x105ecf14 */
  goto L_105ecf14;
L_105ecf05:;
  /* 105ecf05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecf0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ecf0e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_105ecf14:;
  /* 105ecf14 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecf1e jae 0x105ecfbe */
  if (!C.cf) goto L_105ecfbe;
  /* 105ecf24 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecf2b jb 0x105ecf68 */
  if (C.cf) goto L_105ecf68;
  /* 105ecf2d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecf34 ja 0x105ecf68 */
  if ((!C.cf&&!C.zf)) goto L_105ecf68;
  /* 105ecf36 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecf3c mov dl, byte ptr [ecx + 0x10610ce1] */
  DL = (r8((uint32_t)(ECX + 0x10610ce1)));
  /* 105ecf42 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 105ecf45 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecf4b mov byte ptr [eax + 0x10610ce1], dl */
  w8((uint32_t)(EAX + 0x10610ce1), (DL));
  /* 105ecf51 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecf57 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ecf5a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecf60 mov byte ptr [edx + 0x10610be0], cl */
  w8((uint32_t)(EDX + 0x10610be0), (CL));
  /* 105ecf66 jmp 0x105ecfb9 */
  goto L_105ecfb9;
L_105ecf68:;
  /* 105ecf68 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecf6f jb 0x105ecfac */
  if (C.cf) goto L_105ecfac;
  /* 105ecf71 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecf78 ja 0x105ecfac */
  if ((!C.cf&&!C.zf)) goto L_105ecfac;
  /* 105ecf7a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecf80 mov cl, byte ptr [eax + 0x10610ce1] */
  CL = (r8((uint32_t)(EAX + 0x10610ce1)));
  /* 105ecf86 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 105ecf89 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecf8f mov byte ptr [edx + 0x10610ce1], cl */
  w8((uint32_t)(EDX + 0x10610ce1), (CL));
  /* 105ecf95 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecf9b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ecf9e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecfa4 mov byte ptr [ecx + 0x10610be0], al */
  w8((uint32_t)(ECX + 0x10610be0), (AL));
  /* 105ecfaa jmp 0x105ecfb9 */
  goto L_105ecfb9;
L_105ecfac:;
  /* 105ecfac mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ecfb2 mov byte ptr [edx + 0x10610be0], 0 */
  w8((uint32_t)(EDX + 0x10610be0), (0x0u));
L_105ecfb9:;
  /* 105ecfb9 jmp 0x105ecf05 */
  goto L_105ecf05;
L_105ecfbe:;
  /* 105ecfbe mov esp, ebp */
  ESP = (EBP);
  /* 105ecfc0 pop ebp */
  EBP = (pop32());
  /* 105ecfc1 ret  */
  ESPCHK(0x105eccc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfd0 @ 0x105ecfd0 (23 bytes, 9 insns) */
void f_105ecfd0(void) {
  FTRACE(0x105ecfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ecfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ecfd1 mov ebp, esp */
  EBP = (ESP);
  /* 105ecfd3 cmp dword ptr [0x10610bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecfda je 0x105ecfe3 */
  if (C.zf) goto L_105ecfe3;
  /* 105ecfdc mov eax, dword ptr [0x10610b48] */
  EAX = (r32((uint32_t)(0x10610b48)));
  /* 105ecfe1 jmp 0x105ecfe5 */
  goto L_105ecfe5;
L_105ecfe3:;
  /* 105ecfe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105ecfe5:;
  /* 105ecfe5 pop ebp */
  EBP = (pop32());
  /* 105ecfe6 ret  */
  ESPCHK(0x105ecfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cff0 @ 0x105ecff0 (34 bytes, 10 insns) */
void f_105ecff0(void) {
  FTRACE(0x105ecff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ecff0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ecff1 mov ebp, esp */
  EBP = (ESP);
  /* 105ecff3 cmp dword ptr [0x106122d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106122d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ecffa jne 0x105ed010 */
  if (!C.zf) goto L_105ed010;
  /* 105ecffc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 105ecffe call 0x105ec810 */
  push32(0x105ed003u); f_105ec810();
  /* 105ed003 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed006 mov dword ptr [0x106122d0], 1 */
  w32((uint32_t)(0x106122d0), (0x1u));
L_105ed010:;
  /* 105ed010 pop ebp */
  EBP = (pop32());
  /* 105ed011 ret  */
  ESPCHK(0x105ecff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d020 @ 0x105ed020 (664 bytes, 263 insns) [15 switch table(s)] */
void f_105ed020(void) {
  FTRACE(0x105ed020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ed020 push ebp */
  push32((uint32_t)(EBP));
  /* 105ed021 mov ebp, esp */
  EBP = (ESP);
  /* 105ed023 push edi */
  push32((uint32_t)(EDI));
  /* 105ed024 push esi */
  push32((uint32_t)(ESI));
  /* 105ed025 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105ed028 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105ed02b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed02e mov eax, ecx */
  EAX = (ECX);
  /* 105ed030 mov edx, ecx */
  EDX = (ECX);
  /* 105ed032 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed034 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed036 jbe 0x105ed040 */
  if ((C.cf||C.zf)) goto L_105ed040;
  /* 105ed038 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed03a jb 0x105ed1b8 */
  if (C.cf) goto L_105ed1b8;
L_105ed040:;
  /* 105ed040 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 105ed046 jne 0x105ed05c */
  if (!C.zf) goto L_105ed05c;
  /* 105ed048 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ed04b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105ed04e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed051 jb 0x105ed07c */
  if (C.cf) goto L_105ed07c;
  /* 105ed053 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105ed055 jmp dword ptr [edx*4 + 0x105ed168] */
  switch (EDX) {
    case 0: goto L_105ed178;
    case 1: goto L_105ed180;
    case 2: goto L_105ed18c;
    case 3: goto L_105ed1a0;
    default: x86_unimpl("switch@0x105ed055 out of table"); return;
  }
L_105ed05c:;
  /* 105ed05c mov eax, edi */
  EAX = (EDI);
  /* 105ed05e mov edx, 3 */
  EDX = (0x3u);
  /* 105ed063 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ed066 jb 0x105ed074 */
  if (C.cf) goto L_105ed074;
  /* 105ed068 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 105ed06b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed06d jmp dword ptr [eax*4 + 0x105ed080] */
  switch (EAX) {
    case 1: goto L_105ed090;
    case 2: goto L_105ed0bc;
    case 3: goto L_105ed0e0;
    default: x86_unimpl("switch@0x105ed06d out of table"); return;
  }
L_105ed074:;
  /* 105ed074 jmp dword ptr [ecx*4 + 0x105ed178] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x105ed178)))); return;
  /* 105ed07b nop  */
  /* nop */
L_105ed07c:;
  /* 105ed07c jmp dword ptr [ecx*4 + 0x105ed0fc] */
  switch (ECX) {
    case 0: goto L_105ed15f;
    case 1: goto L_105ed14c;
    case 2: goto L_105ed144;
    case 3: goto L_105ed13c;
    case 4: goto L_105ed134;
    case 5: goto L_105ed12c;
    case 6: goto L_105ed124;
    case 7: goto L_105ed11c;
    default: x86_unimpl("switch@0x105ed07c out of table"); return;
  }
  /* 105ed083 nop  */
  /* nop */
L_105ed090:;
  /* 105ed090 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105ed092 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105ed094 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ed096 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105ed099 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105ed09c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105ed09f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ed0a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105ed0a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed0a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed0ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed0ae jb 0x105ed07c */
  if (C.cf) goto L_105ed07c;
  /* 105ed0b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105ed0b2 jmp dword ptr [edx*4 + 0x105ed168] */
  switch (EDX) {
    case 0: goto L_105ed178;
    case 1: goto L_105ed180;
    case 2: goto L_105ed18c;
    case 3: goto L_105ed1a0;
    default: x86_unimpl("switch@0x105ed0b2 out of table"); return;
  }
  /* 105ed0b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105ed0bc:;
  /* 105ed0bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105ed0be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105ed0c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ed0c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105ed0c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ed0c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105ed0cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed0ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed0d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed0d4 jb 0x105ed07c */
  if (C.cf) goto L_105ed07c;
  /* 105ed0d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105ed0d8 jmp dword ptr [edx*4 + 0x105ed168] */
  switch (EDX) {
    case 0: goto L_105ed178;
    case 1: goto L_105ed180;
    case 2: goto L_105ed18c;
    case 3: goto L_105ed1a0;
    default: x86_unimpl("switch@0x105ed0d8 out of table"); return;
  }
  /* 105ed0df nop  */
  /* nop */
L_105ed0e0:;
  /* 105ed0e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105ed0e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105ed0e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ed0e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105ed0e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ed0ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105ed0eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed0ee jb 0x105ed07c */
  if (C.cf) goto L_105ed07c;
  /* 105ed0f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105ed0f2 jmp dword ptr [edx*4 + 0x105ed168] */
  switch (EDX) {
    case 0: goto L_105ed178;
    case 1: goto L_105ed180;
    case 2: goto L_105ed18c;
    case 3: goto L_105ed1a0;
    default: x86_unimpl("switch@0x105ed0f2 out of table"); return;
  }
  /* 105ed0f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105ed11c:;
  /* 105ed11c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 105ed120 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_105ed124:;
  /* 105ed124 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 105ed128 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_105ed12c:;
  /* 105ed12c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 105ed130 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_105ed134:;
  /* 105ed134 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 105ed138 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_105ed13c:;
  /* 105ed13c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 105ed140 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_105ed144:;
  /* 105ed144 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 105ed148 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_105ed14c:;
  /* 105ed14c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 105ed150 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 105ed154 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 105ed15b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed15d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_105ed15f:;
  /* 105ed15f jmp dword ptr [edx*4 + 0x105ed168] */
  switch (EDX) {
    case 0: goto L_105ed178;
    case 1: goto L_105ed180;
    case 2: goto L_105ed18c;
    case 3: goto L_105ed1a0;
    default: x86_unimpl("switch@0x105ed15f out of table"); return;
  }
  /* 105ed166 mov edi, edi */
  EDI = (EDI);
L_105ed178:;
  /* 105ed178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed17b pop esi */
  ESI = (pop32());
  /* 105ed17c pop edi */
  EDI = (pop32());
  /* 105ed17d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105ed17e ret  */
  ESPCHK(0x105ed020u, _esp0);
  ESP += 4; return;
  /* 105ed17f nop  */
  /* nop */
L_105ed180:;
  /* 105ed180 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105ed182 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ed184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed187 pop esi */
  ESI = (pop32());
  /* 105ed188 pop edi */
  EDI = (pop32());
  /* 105ed189 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105ed18a ret  */
  ESPCHK(0x105ed020u, _esp0);
  ESP += 4; return;
  /* 105ed18b nop  */
  /* nop */
L_105ed18c:;
  /* 105ed18c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105ed18e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ed190 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105ed193 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105ed196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed199 pop esi */
  ESI = (pop32());
  /* 105ed19a pop edi */
  EDI = (pop32());
  /* 105ed19b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105ed19c ret  */
  ESPCHK(0x105ed020u, _esp0);
  ESP += 4; return;
  /* 105ed19d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105ed1a0:;
  /* 105ed1a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105ed1a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ed1a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105ed1a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105ed1aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105ed1ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105ed1b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed1b3 pop esi */
  ESI = (pop32());
  /* 105ed1b4 pop edi */
  EDI = (pop32());
  /* 105ed1b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105ed1b6 ret  */
  ESPCHK(0x105ed020u, _esp0);
  ESP += 4; return;
  /* 105ed1b7 nop  */
  /* nop */
L_105ed1b8:;
  /* 105ed1b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 105ed1bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 105ed1c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 105ed1c6 jne 0x105ed1ec */
  if (!C.zf) goto L_105ed1ec;
  /* 105ed1c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ed1cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105ed1ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed1d1 jb 0x105ed1e0 */
  if (C.cf) goto L_105ed1e0;
  /* 105ed1d3 std  */
  C.df=1;
  /* 105ed1d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105ed1d6 cld  */
  C.df=0;
  /* 105ed1d7 jmp dword ptr [edx*4 + 0x105ed300] */
  switch (EDX) {
    case 0: goto L_105ed310;
    case 1: goto L_105ed318;
    case 2: goto L_105ed328;
    case 3: goto L_105ed33c;
    default: x86_unimpl("switch@0x105ed1d7 out of table"); return;
  }
  /* 105ed1de mov edi, edi */
  EDI = (EDI);
L_105ed1e0:;
  /* 105ed1e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105ed1e2 jmp dword ptr [ecx*4 + 0x105ed2b0] */
  switch (ECX) {
    case 0: goto L_105ed2f7;
    default: x86_unimpl("switch@0x105ed1e2 out of table"); return;
  }
  /* 105ed1e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105ed1ec:;
  /* 105ed1ec mov eax, edi */
  EAX = (EDI);
  /* 105ed1ee mov edx, 3 */
  EDX = (0x3u);
  /* 105ed1f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed1f6 jb 0x105ed204 */
  if (C.cf) goto L_105ed204;
  /* 105ed1f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 105ed1fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ed1fd jmp dword ptr [eax*4 + 0x105ed208] */
  switch (EAX) {
    case 1: goto L_105ed218;
    case 2: goto L_105ed238;
    case 3: goto L_105ed260;
    default: x86_unimpl("switch@0x105ed1fd out of table"); return;
  }
L_105ed204:;
  /* 105ed204 jmp dword ptr [ecx*4 + 0x105ed300] */
  switch (ECX) {
    case 0: goto L_105ed310;
    case 1: goto L_105ed318;
    case 2: goto L_105ed328;
    case 3: goto L_105ed33c;
    default: x86_unimpl("switch@0x105ed204 out of table"); return;
  }
  /* 105ed20b nop  */
  /* nop */
L_105ed218:;
  /* 105ed218 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105ed21b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105ed21d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105ed220 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 105ed221 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ed224 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 105ed225 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed228 jb 0x105ed1e0 */
  if (C.cf) goto L_105ed1e0;
  /* 105ed22a std  */
  C.df=1;
  /* 105ed22b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105ed22d cld  */
  C.df=0;
  /* 105ed22e jmp dword ptr [edx*4 + 0x105ed300] */
  switch (EDX) {
    case 0: goto L_105ed310;
    case 1: goto L_105ed318;
    case 2: goto L_105ed328;
    case 3: goto L_105ed33c;
    default: x86_unimpl("switch@0x105ed22e out of table"); return;
  }
  /* 105ed235 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105ed238:;
  /* 105ed238 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105ed23b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105ed23d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105ed240 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105ed243 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ed246 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105ed249 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ed24c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ed24f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed252 jb 0x105ed1e0 */
  if (C.cf) goto L_105ed1e0;
  /* 105ed254 std  */
  C.df=1;
  /* 105ed255 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105ed257 cld  */
  C.df=0;
  /* 105ed258 jmp dword ptr [edx*4 + 0x105ed300] */
  switch (EDX) {
    case 0: goto L_105ed310;
    case 1: goto L_105ed318;
    case 2: goto L_105ed328;
    case 3: goto L_105ed33c;
    default: x86_unimpl("switch@0x105ed258 out of table"); return;
  }
  /* 105ed25f nop  */
  /* nop */
L_105ed260:;
  /* 105ed260 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105ed263 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105ed265 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105ed268 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105ed26b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105ed26e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105ed271 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ed274 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105ed277 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ed27a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ed27d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed280 jb 0x105ed1e0 */
  if (C.cf) goto L_105ed1e0;
  /* 105ed286 std  */
  C.df=1;
  /* 105ed287 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105ed289 cld  */
  C.df=0;
  /* 105ed28a jmp dword ptr [edx*4 + 0x105ed300] */
  switch (EDX) {
    case 0: goto L_105ed310;
    case 1: goto L_105ed318;
    case 2: goto L_105ed328;
    case 3: goto L_105ed33c;
    default: x86_unimpl("switch@0x105ed28a out of table"); return;
  }
  /* 105ed291 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 105ed294 mov ah, 0xd2 */
  AH = (0xd2u);
  /* 105ed296 pop esi */
  ESI = (pop32());
  /* 105ed297 adc byte ptr [edx + edx*8 - 0x2d3befa2], bh */
  { uint32_t _a=(r8((uint32_t)(EDX + EDX*8 + -0x2d3befa2))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EDX*8 + -0x2d3befa2), (_r)); fl_add(_a,_b,_r,8); }
  /* 105ed29e pop esi */
  ESI = (pop32());
  /* 105ed29f adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 105ed2a1 rcr byte ptr [esi + 0x10], cl */
  { uint32_t _v=(r8((uint32_t)(ESI + 0x10)))&0xffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<7); _cf=_b; } w8((uint32_t)(ESI + 0x10), (_v)); C.cf=_cf; }
  /* 105ed2a4 aam 0xd2 */
  x86_unimpl("aam @ 0x105ed2a4");
  /* 105ed2a6 pop esi */
  ESI = (pop32());
  /* 105ed2a7 adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 105ed2a9 rcr byte ptr [esi + 0x10], cl */
  { uint32_t _v=(r8((uint32_t)(ESI + 0x10)))&0xffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<7); _cf=_b; } w8((uint32_t)(ESI + 0x10), (_v)); C.cf=_cf; }
  /* 105ed2ac in al, 0xd2 */
  x86_unimpl("in @ 0x105ed2ac");
  /* 105ed2ae pop esi */
  ESI = (pop32());
  /* 105ed2b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 105ed2b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 105ed2bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 105ed2c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 105ed2c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 105ed2c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 105ed2cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 105ed2d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 105ed2d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 105ed2d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 105ed2dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 105ed2e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 105ed2e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 105ed2e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 105ed2ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 105ed2f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed2f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_105ed2f7:;
  /* 105ed2f7 jmp dword ptr [edx*4 + 0x105ed300] */
  switch (EDX) {
    case 0: goto L_105ed310;
    case 1: goto L_105ed318;
    case 2: goto L_105ed328;
    case 3: goto L_105ed33c;
    default: x86_unimpl("switch@0x105ed2f7 out of table"); return;
  }
  /* 105ed2fe mov edi, edi */
  EDI = (EDI);
L_105ed310:;
  /* 105ed310 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed313 pop esi */
  ESI = (pop32());
  /* 105ed314 pop edi */
  EDI = (pop32());
  /* 105ed315 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105ed316 ret  */
  ESPCHK(0x105ed020u, _esp0);
  ESP += 4; return;
  /* 105ed317 nop  */
  /* nop */
L_105ed318:;
  /* 105ed318 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105ed31b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105ed31e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed321 pop esi */
  ESI = (pop32());
  /* 105ed322 pop edi */
  EDI = (pop32());
  /* 105ed323 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105ed324 ret  */
  ESPCHK(0x105ed020u, _esp0);
  ESP += 4; return;
  /* 105ed325 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105ed328:;
  /* 105ed328 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105ed32b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105ed32e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105ed331 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105ed334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed337 pop esi */
  ESI = (pop32());
  /* 105ed338 pop edi */
  EDI = (pop32());
  /* 105ed339 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105ed33a ret  */
  ESPCHK(0x105ed020u, _esp0);
  ESP += 4; return;
  /* 105ed33b nop  */
  /* nop */
L_105ed33c:;
  /* 105ed33c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105ed33f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105ed342 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105ed345 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105ed348 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105ed34b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105ed34e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed351 pop esi */
  ESI = (pop32());
  /* 105ed352 pop edi */
  EDI = (pop32());
  /* 105ed353 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105ed354 ret  */
  ESPCHK(0x105ed020u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x105ed360 (145 bytes, 42 insns) */
void f_105ed360(void) {
  FTRACE(0x105ed360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ed360 push ebp */
  push32((uint32_t)(EBP));
  /* 105ed361 mov ebp, esp */
  EBP = (ESP);
  /* 105ed363 push ecx */
  push32((uint32_t)(ECX));
  /* 105ed364 call 0x105ed410 */
  push32(0x105ed369u); f_105ed410();
  /* 105ed369 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed36c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105ed36e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ed375 jmp 0x105ed380 */
  goto L_105ed380;
L_105ed377:;
  /* 105ed377 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed37a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed37d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105ed380:;
  /* 105ed380 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed384 jae 0x105ed3aa */
  if (!C.cf) goto L_105ed3aa;
  /* 105ed386 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed389 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed38c cmp ecx, dword ptr [eax*8 + 0x1060f260] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1060f260))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed393 jne 0x105ed3a8 */
  if (!C.zf) goto L_105ed3a8;
  /* 105ed395 call 0x105ed400 */
  push32(0x105ed39au); f_105ed400();
  /* 105ed39a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed39d mov ecx, dword ptr [edx*8 + 0x1060f264] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1060f264)));
  /* 105ed3a4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105ed3a6 jmp 0x105ed3ed */
  goto L_105ed3ed;
L_105ed3a8:;
  /* 105ed3a8 jmp 0x105ed377 */
  goto L_105ed377;
L_105ed3aa:;
  /* 105ed3aa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed3ae jb 0x105ed3c3 */
  if (C.cf) goto L_105ed3c3;
  /* 105ed3b0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed3b4 ja 0x105ed3c3 */
  if ((!C.cf&&!C.zf)) goto L_105ed3c3;
  /* 105ed3b6 call 0x105ed400 */
  push32(0x105ed3bbu); f_105ed400();
  /* 105ed3bb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 105ed3c1 jmp 0x105ed3ed */
  goto L_105ed3ed;
L_105ed3c3:;
  /* 105ed3c3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed3ca jb 0x105ed3e2 */
  if (C.cf) goto L_105ed3e2;
  /* 105ed3cc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed3d3 ja 0x105ed3e2 */
  if ((!C.cf&&!C.zf)) goto L_105ed3e2;
  /* 105ed3d5 call 0x105ed400 */
  push32(0x105ed3dau); f_105ed400();
  /* 105ed3da mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 105ed3e0 jmp 0x105ed3ed */
  goto L_105ed3ed;
L_105ed3e2:;
  /* 105ed3e2 call 0x105ed400 */
  push32(0x105ed3e7u); f_105ed400();
  /* 105ed3e7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_105ed3ed:;
  /* 105ed3ed mov esp, ebp */
  ESP = (EBP);
  /* 105ed3ef pop ebp */
  EBP = (pop32());
  /* 105ed3f0 ret  */
  ESPCHK(0x105ed360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d400 @ 0x105ed400 (13 bytes, 6 insns) */
void f_105ed400(void) {
  FTRACE(0x105ed400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ed400 push ebp */
  push32((uint32_t)(EBP));
  /* 105ed401 mov ebp, esp */
  EBP = (ESP);
  /* 105ed403 call 0x105e58d0 */
  push32(0x105ed408u); f_105e58d0();
  /* 105ed408 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed40b pop ebp */
  EBP = (pop32());
  /* 105ed40c ret  */
  ESPCHK(0x105ed400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d410 @ 0x105ed410 (13 bytes, 6 insns) */
void f_105ed410(void) {
  FTRACE(0x105ed410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ed410 push ebp */
  push32((uint32_t)(EBP));
  /* 105ed411 mov ebp, esp */
  EBP = (ESP);
  /* 105ed413 call 0x105e58d0 */
  push32(0x105ed418u); f_105e58d0();
  /* 105ed418 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed41b pop ebp */
  EBP = (pop32());
  /* 105ed41c ret  */
  ESPCHK(0x105ed410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d420 @ 0x105ed420 (482 bytes, 138 insns) */
void f_105ed420(void) {
  FTRACE(0x105ed420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ed420 push ebp */
  push32((uint32_t)(EBP));
  /* 105ed421 mov ebp, esp */
  EBP = (ESP);
  /* 105ed423 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ed426 push esi */
  push32((uint32_t)(ESI));
  /* 105ed427 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 105ed42e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 105ed430 call 0x105ea240 */
  push32(0x105ed435u); f_105ea240();
  /* 105ed435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed438 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105ed43f jmp 0x105ed44a */
  goto L_105ed44a;
L_105ed441:;
  /* 105ed441 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ed444 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed447 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105ed44a:;
  /* 105ed44a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed44e jge 0x105ed5f0 */
  if ((C.sf==C.of)) goto L_105ed5f0;
  /* 105ed454 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ed457 cmp dword ptr [ecx*4 + 0x10612180], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10612180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed45f je 0x105ed556 */
  if (C.zf) goto L_105ed556;
  /* 105ed465 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ed468 mov eax, dword ptr [edx*4 + 0x10612180] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10612180)));
  /* 105ed46f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ed472 jmp 0x105ed47d */
  goto L_105ed47d;
L_105ed474:;
  /* 105ed474 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed477 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed47a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105ed47d:;
  /* 105ed47d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ed480 mov eax, dword ptr [edx*4 + 0x10612180] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10612180)));
  /* 105ed487 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed48c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed48f jae 0x105ed546 */
  if (!C.cf) goto L_105ed546;
  /* 105ed495 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed498 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105ed49c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105ed49f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ed4a1 jne 0x105ed541 */
  if (!C.zf) goto L_105ed541;
  /* 105ed4a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed4aa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed4ae jne 0x105ed4e9 */
  if (!C.zf) goto L_105ed4e9;
  /* 105ed4b0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105ed4b2 call 0x105ea240 */
  push32(0x105ed4b7u); f_105ea240();
  /* 105ed4b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed4ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed4bd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed4c1 jne 0x105ed4df */
  if (!C.zf) goto L_105ed4df;
  /* 105ed4c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed4c6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed4c9 push edx */
  push32((uint32_t)(EDX));
  /* 105ed4ca call dword ptr [0x106132a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a8))), 0x105ed4d0u);
  /* 105ed4d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed4d3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105ed4d6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed4d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed4dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_105ed4df:;
  /* 105ed4df push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105ed4e1 call 0x105ea2e0 */
  push32(0x105ed4e6u); f_105ea2e0();
  /* 105ed4e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ed4e9:;
  /* 105ed4e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed4ec add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed4ef push eax */
  push32((uint32_t)(EAX));
  /* 105ed4f0 call dword ptr [0x106132a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a0))), 0x105ed4f6u);
  /* 105ed4f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed4f9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105ed4fd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105ed500 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ed502 je 0x105ed516 */
  if (C.zf) goto L_105ed516;
  /* 105ed504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed507 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed50a push eax */
  push32((uint32_t)(EAX));
  /* 105ed50b call dword ptr [0x106132a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a4))), 0x105ed511u);
  /* 105ed511 jmp 0x105ed474 */
  goto L_105ed474;
L_105ed516:;
  /* 105ed516 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed519 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 105ed51f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ed522 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105ed525 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ed528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed52b sub eax, dword ptr [edx*4 + 0x10612180] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10612180))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ed532 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105ed533 mov esi, 0x24 */
  ESI = (0x24u);
  /* 105ed538 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105ed53a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed53c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105ed53f jmp 0x105ed546 */
  goto L_105ed546;
L_105ed541:;
  /* 105ed541 jmp 0x105ed474 */
  goto L_105ed474;
L_105ed546:;
  /* 105ed546 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed54a je 0x105ed551 */
  if (C.zf) goto L_105ed551;
  /* 105ed54c jmp 0x105ed5f0 */
  goto L_105ed5f0;
L_105ed551:;
  /* 105ed551 jmp 0x105ed5eb */
  goto L_105ed5eb;
L_105ed556:;
  /* 105ed556 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 105ed558 push 0x1060c764 */
  push32((uint32_t)(0x1060c764u));
  /* 105ed55d push 2 */
  push32((uint32_t)(0x2u));
  /* 105ed55f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 105ed564 call 0x105e5e90 */
  push32(0x105ed569u); f_105e5e90();
  /* 105ed569 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed56c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ed56f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed573 je 0x105ed5e9 */
  if (C.zf) goto L_105ed5e9;
  /* 105ed575 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ed578 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed57b mov dword ptr [eax*4 + 0x10612180], ecx */
  w32((uint32_t)(EAX*4 + 0x10612180), (ECX));
  /* 105ed582 mov edx, dword ptr [0x106122bc] */
  EDX = (r32((uint32_t)(0x106122bc)));
  /* 105ed588 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed58b mov dword ptr [0x106122bc], edx */
  w32((uint32_t)(0x106122bc), (EDX));
  /* 105ed591 jmp 0x105ed59c */
  goto L_105ed59c;
L_105ed593:;
  /* 105ed593 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed596 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed599 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105ed59c:;
  /* 105ed59c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ed59f mov edx, dword ptr [ecx*4 + 0x10612180] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10612180)));
  /* 105ed5a6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed5ac cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed5af jae 0x105ed5d4 */
  if (!C.cf) goto L_105ed5d4;
  /* 105ed5b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed5b4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 105ed5b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed5bb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 105ed5c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed5c4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 105ed5c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed5cb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 105ed5d2 jmp 0x105ed593 */
  goto L_105ed593;
L_105ed5d4:;
  /* 105ed5d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ed5d7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105ed5da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105ed5dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ed5e0 push edx */
  push32((uint32_t)(EDX));
  /* 105ed5e1 call 0x105ed930 */
  push32(0x105ed5e6u); f_105ed930();
  /* 105ed5e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ed5e9:;
  /* 105ed5e9 jmp 0x105ed5f0 */
  goto L_105ed5f0;
L_105ed5eb:;
  /* 105ed5eb jmp 0x105ed441 */
  goto L_105ed441;
L_105ed5f0:;
  /* 105ed5f0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 105ed5f2 call 0x105ea2e0 */
  push32(0x105ed5f7u); f_105ea2e0();
  /* 105ed5f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed5fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ed5fd pop esi */
  ESI = (pop32());
  /* 105ed5fe mov esp, ebp */
  ESP = (EBP);
  /* 105ed600 pop ebp */
  EBP = (pop32());
  /* 105ed601 ret  */
  ESPCHK(0x105ed420u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x105ed610 (183 bytes, 57 insns) */
void f_105ed610(void) {
  FTRACE(0x105ed610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ed610 push ebp */
  push32((uint32_t)(EBP));
  /* 105ed611 mov ebp, esp */
  EBP = (ESP);
  /* 105ed613 push ecx */
  push32((uint32_t)(ECX));
  /* 105ed614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed617 cmp eax, dword ptr [0x106122bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106122bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed61d jae 0x105ed6aa */
  if (!C.cf) goto L_105ed6aa;
  /* 105ed623 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed626 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105ed629 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed62c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105ed62f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ed632 mov eax, dword ptr [ecx*4 + 0x10612180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10612180)));
  /* 105ed639 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed63d jne 0x105ed6aa */
  if (!C.zf) goto L_105ed6aa;
  /* 105ed63f cmp dword ptr [0x106107a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106107a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed646 jne 0x105ed68a */
  if (!C.zf) goto L_105ed68a;
  /* 105ed648 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed64b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105ed64e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed652 je 0x105ed662 */
  if (C.zf) goto L_105ed662;
  /* 105ed654 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed658 je 0x105ed670 */
  if (C.zf) goto L_105ed670;
  /* 105ed65a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed65e je 0x105ed67e */
  if (C.zf) goto L_105ed67e;
  /* 105ed660 jmp 0x105ed68a */
  goto L_105ed68a;
L_105ed662:;
  /* 105ed662 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ed665 push edx */
  push32((uint32_t)(EDX));
  /* 105ed666 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 105ed668 call dword ptr [0x106132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132cc))), 0x105ed66eu);
  /* 105ed66e jmp 0x105ed68a */
  goto L_105ed68a;
L_105ed670:;
  /* 105ed670 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ed673 push eax */
  push32((uint32_t)(EAX));
  /* 105ed674 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 105ed676 call dword ptr [0x106132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132cc))), 0x105ed67cu);
  /* 105ed67c jmp 0x105ed68a */
  goto L_105ed68a;
L_105ed67e:;
  /* 105ed67e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ed681 push ecx */
  push32((uint32_t)(ECX));
  /* 105ed682 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 105ed684 call dword ptr [0x106132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132cc))), 0x105ed68au);
L_105ed68a:;
  /* 105ed68a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed68d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 105ed690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed693 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 105ed696 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ed699 mov ecx, dword ptr [edx*4 + 0x10612180] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10612180)));
  /* 105ed6a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ed6a3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 105ed6a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ed6a8 jmp 0x105ed6c3 */
  goto L_105ed6c3;
L_105ed6aa:;
  /* 105ed6aa call 0x105ed400 */
  push32(0x105ed6afu); f_105ed400();
  /* 105ed6af mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105ed6b5 call 0x105ed410 */
  push32(0x105ed6bau); f_105ed410();
  /* 105ed6ba mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105ed6c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105ed6c3:;
  /* 105ed6c3 mov esp, ebp */
  ESP = (EBP);
  /* 105ed6c5 pop ebp */
  EBP = (pop32());
  /* 105ed6c6 ret  */
  ESPCHK(0x105ed610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6d0 @ 0x105ed6d0 (216 bytes, 63 insns) */
void f_105ed6d0(void) {
  FTRACE(0x105ed6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ed6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ed6d1 mov ebp, esp */
  EBP = (ESP);
  /* 105ed6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 105ed6d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed6d7 cmp eax, dword ptr [0x106122bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106122bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed6dd jae 0x105ed78b */
  if (!C.cf) goto L_105ed78b;
  /* 105ed6e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed6e6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105ed6e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed6ec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105ed6ef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ed6f2 mov eax, dword ptr [ecx*4 + 0x10612180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10612180)));
  /* 105ed6f9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105ed6fe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105ed701 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ed703 je 0x105ed78b */
  if (C.zf) goto L_105ed78b;
  /* 105ed709 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed70c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 105ed70f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed712 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 105ed715 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ed718 mov ecx, dword ptr [edx*4 + 0x10612180] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10612180)));
  /* 105ed71f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed723 je 0x105ed78b */
  if (C.zf) goto L_105ed78b;
  /* 105ed725 cmp dword ptr [0x106107a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106107a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed72c jne 0x105ed76a */
  if (!C.zf) goto L_105ed76a;
  /* 105ed72e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed731 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105ed734 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed738 je 0x105ed748 */
  if (C.zf) goto L_105ed748;
  /* 105ed73a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed73e je 0x105ed754 */
  if (C.zf) goto L_105ed754;
  /* 105ed740 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed744 je 0x105ed760 */
  if (C.zf) goto L_105ed760;
  /* 105ed746 jmp 0x105ed76a */
  goto L_105ed76a;
L_105ed748:;
  /* 105ed748 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ed74a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 105ed74c call dword ptr [0x106132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132cc))), 0x105ed752u);
  /* 105ed752 jmp 0x105ed76a */
  goto L_105ed76a;
L_105ed754:;
  /* 105ed754 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ed756 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 105ed758 call dword ptr [0x106132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132cc))), 0x105ed75eu);
  /* 105ed75e jmp 0x105ed76a */
  goto L_105ed76a;
L_105ed760:;
  /* 105ed760 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ed762 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 105ed764 call dword ptr [0x106132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132cc))), 0x105ed76au);
L_105ed76a:;
  /* 105ed76a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed76d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105ed770 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed773 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105ed776 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ed779 mov edx, dword ptr [eax*4 + 0x10612180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10612180)));
  /* 105ed780 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 105ed787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ed789 jmp 0x105ed7a4 */
  goto L_105ed7a4;
L_105ed78b:;
  /* 105ed78b call 0x105ed400 */
  push32(0x105ed790u); f_105ed400();
  /* 105ed790 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105ed796 call 0x105ed410 */
  push32(0x105ed79bu); f_105ed410();
  /* 105ed79b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105ed7a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105ed7a4:;
  /* 105ed7a4 mov esp, ebp */
  ESP = (EBP);
  /* 105ed7a6 pop ebp */
  EBP = (pop32());
  /* 105ed7a7 ret  */
  ESPCHK(0x105ed6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7b0 @ 0x105ed7b0 (102 bytes, 30 insns) */
void f_105ed7b0(void) {
  FTRACE(0x105ed7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ed7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ed7b1 mov ebp, esp */
  EBP = (ESP);
  /* 105ed7b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed7b6 cmp eax, dword ptr [0x106122bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106122bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed7bc jae 0x105ed7fb */
  if (!C.cf) goto L_105ed7fb;
  /* 105ed7be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed7c1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105ed7c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed7c7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105ed7ca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ed7cd mov eax, dword ptr [ecx*4 + 0x10612180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10612180)));
  /* 105ed7d4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105ed7d9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105ed7dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ed7de je 0x105ed7fb */
  if (C.zf) goto L_105ed7fb;
  /* 105ed7e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed7e3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 105ed7e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed7e9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 105ed7ec imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ed7ef mov ecx, dword ptr [edx*4 + 0x10612180] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10612180)));
  /* 105ed7f6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 105ed7f9 jmp 0x105ed814 */
  goto L_105ed814;
L_105ed7fb:;
  /* 105ed7fb call 0x105ed400 */
  push32(0x105ed800u); f_105ed400();
  /* 105ed800 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105ed806 call 0x105ed410 */
  push32(0x105ed80bu); f_105ed410();
  /* 105ed80b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105ed811 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105ed814:;
  /* 105ed814 pop ebp */
  EBP = (pop32());
  /* 105ed815 ret  */
  ESPCHK(0x105ed7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x105ed820 (260 bytes, 83 insns) */
void f_105ed820(void) {
  FTRACE(0x105ed820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ed820 push ebp */
  push32((uint32_t)(EBP));
  /* 105ed821 mov ebp, esp */
  EBP = (ESP);
  /* 105ed823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ed826 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 105ed82a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ed82d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 105ed830 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ed832 je 0x105ed83d */
  if (C.zf) goto L_105ed83d;
  /* 105ed834 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 105ed837 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 105ed83a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_105ed83d:;
  /* 105ed83d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ed840 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 105ed846 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ed848 je 0x105ed852 */
  if (C.zf) goto L_105ed852;
  /* 105ed84a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 105ed84d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 105ed84f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_105ed852:;
  /* 105ed852 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ed855 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 105ed85b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ed85d je 0x105ed868 */
  if (C.zf) goto L_105ed868;
  /* 105ed85f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 105ed862 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 105ed865 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_105ed868:;
  /* 105ed868 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed86b push eax */
  push32((uint32_t)(EAX));
  /* 105ed86c call dword ptr [0x1061325c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061325c))), 0x105ed872u);
  /* 105ed872 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ed875 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed879 jne 0x105ed892 */
  if (!C.zf) goto L_105ed892;
  /* 105ed87b call dword ptr [0x10613250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613250))), 0x105ed881u);
  /* 105ed881 push eax */
  push32((uint32_t)(EAX));
  /* 105ed882 call 0x105ed360 */
  push32(0x105ed887u); f_105ed360();
  /* 105ed887 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed88a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ed88d jmp 0x105ed920 */
  goto L_105ed920;
L_105ed892:;
  /* 105ed892 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed896 jne 0x105ed8a3 */
  if (!C.zf) goto L_105ed8a3;
  /* 105ed898 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 105ed89b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 105ed89e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 105ed8a1 jmp 0x105ed8b2 */
  goto L_105ed8b2;
L_105ed8a3:;
  /* 105ed8a3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed8a7 jne 0x105ed8b2 */
  if (!C.zf) goto L_105ed8b2;
  /* 105ed8a9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 105ed8ac or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 105ed8af mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_105ed8b2:;
  /* 105ed8b2 call 0x105ed420 */
  push32(0x105ed8b7u); f_105ed420();
  /* 105ed8b7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ed8ba cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed8be jne 0x105ed8db */
  if (!C.zf) goto L_105ed8db;
  /* 105ed8c0 call 0x105ed400 */
  push32(0x105ed8c5u); f_105ed400();
  /* 105ed8c5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 105ed8cb call 0x105ed410 */
  push32(0x105ed8d0u); f_105ed410();
  /* 105ed8d0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105ed8d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ed8d9 jmp 0x105ed920 */
  goto L_105ed920;
L_105ed8db:;
  /* 105ed8db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed8de push eax */
  push32((uint32_t)(EAX));
  /* 105ed8df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ed8e2 push ecx */
  push32((uint32_t)(ECX));
  /* 105ed8e3 call 0x105ed610 */
  push32(0x105ed8e8u); f_105ed610();
  /* 105ed8e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed8eb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 105ed8ee or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 105ed8f1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 105ed8f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ed8f7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105ed8fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ed8fd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105ed900 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ed903 mov edx, dword ptr [eax*4 + 0x10612180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10612180)));
  /* 105ed90a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 105ed90d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 105ed911 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ed914 push ecx */
  push32((uint32_t)(ECX));
  /* 105ed915 call 0x105ed9c0 */
  push32(0x105ed91au); f_105ed9c0();
  /* 105ed91a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed91d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105ed920:;
  /* 105ed920 mov esp, ebp */
  ESP = (EBP);
  /* 105ed922 pop ebp */
  EBP = (pop32());
  /* 105ed923 ret  */
  ESPCHK(0x105ed820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d930 @ 0x105ed930 (134 bytes, 44 insns) */
void f_105ed930(void) {
  FTRACE(0x105ed930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ed930 push ebp */
  push32((uint32_t)(EBP));
  /* 105ed931 mov ebp, esp */
  EBP = (ESP);
  /* 105ed933 push ecx */
  push32((uint32_t)(ECX));
  /* 105ed934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed937 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105ed93a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed93d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105ed940 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ed943 mov edx, dword ptr [eax*4 + 0x10612180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10612180)));
  /* 105ed94a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed94c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105ed94f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed952 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed956 jne 0x105ed991 */
  if (!C.zf) goto L_105ed991;
  /* 105ed958 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105ed95a call 0x105ea240 */
  push32(0x105ed95fu); f_105ea240();
  /* 105ed95f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed962 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed965 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ed969 jne 0x105ed987 */
  if (!C.zf) goto L_105ed987;
  /* 105ed96b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed96e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed971 push edx */
  push32((uint32_t)(EDX));
  /* 105ed972 call dword ptr [0x106132a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a8))), 0x105ed978u);
  /* 105ed978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed97b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105ed97e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ed981 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ed984 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_105ed987:;
  /* 105ed987 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105ed989 call 0x105ea2e0 */
  push32(0x105ed98eu); f_105ea2e0();
  /* 105ed98e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ed991:;
  /* 105ed991 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed994 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105ed997 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed99a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105ed99d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ed9a0 mov edx, dword ptr [eax*4 + 0x10612180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10612180)));
  /* 105ed9a7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 105ed9ab push eax */
  push32((uint32_t)(EAX));
  /* 105ed9ac call dword ptr [0x106132a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a0))), 0x105ed9b2u);
  /* 105ed9b2 mov esp, ebp */
  ESP = (EBP);
  /* 105ed9b4 pop ebp */
  EBP = (pop32());
  /* 105ed9b5 ret  */
  ESPCHK(0x105ed930u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x105ed9c0 (38 bytes, 13 insns) */
void f_105ed9c0(void) {
  FTRACE(0x105ed9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ed9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ed9c1 mov ebp, esp */
  EBP = (ESP);
  /* 105ed9c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed9c6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105ed9c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ed9cc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105ed9cf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ed9d2 mov edx, dword ptr [eax*4 + 0x10612180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10612180)));
  /* 105ed9d9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 105ed9dd push eax */
  push32((uint32_t)(EAX));
  /* 105ed9de call dword ptr [0x106132a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132a4))), 0x105ed9e4u);
  /* 105ed9e4 pop ebp */
  EBP = (pop32());
  /* 105ed9e5 ret  */
  ESPCHK(0x105ed9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9f0 @ 0x105ed9f0 (218 bytes, 63 insns) */
void f_105ed9f0(void) {
  FTRACE(0x105ed9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ed9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ed9f1 mov ebp, esp */
  EBP = (ESP);
  /* 105ed9f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ed9f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ed9fd push 2 */
  push32((uint32_t)(0x2u));
  /* 105ed9ff call 0x105ea240 */
  push32(0x105eda04u); f_105ea240();
  /* 105eda04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eda07 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 105eda0e jmp 0x105eda19 */
  goto L_105eda19;
L_105eda10:;
  /* 105eda10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eda13 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eda16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105eda19:;
  /* 105eda19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eda1c cmp ecx, dword ptr [0x10612160] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10612160))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eda22 jge 0x105edab9 */
  if ((C.sf==C.of)) goto L_105edab9;
  /* 105eda28 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eda2b mov eax, dword ptr [0x10610e0c] */
  EAX = (r32((uint32_t)(0x10610e0c)));
  /* 105eda30 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eda34 je 0x105edab4 */
  if (C.zf) goto L_105edab4;
  /* 105eda36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eda39 mov edx, dword ptr [0x10610e0c] */
  EDX = (r32((uint32_t)(0x10610e0c)));
  /* 105eda3f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 105eda42 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105eda45 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 105eda4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105eda4d je 0x105eda71 */
  if (C.zf) goto L_105eda71;
  /* 105eda4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eda52 mov eax, dword ptr [0x10610e0c] */
  EAX = (r32((uint32_t)(0x10610e0c)));
  /* 105eda57 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 105eda5a push ecx */
  push32((uint32_t)(ECX));
  /* 105eda5b call 0x105ef040 */
  push32(0x105eda60u); f_105ef040();
  /* 105eda60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eda63 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eda66 je 0x105eda71 */
  if (C.zf) goto L_105eda71;
  /* 105eda68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eda6b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eda6e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105eda71:;
  /* 105eda71 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eda75 jl 0x105edab4 */
  if ((C.sf!=C.of)) goto L_105edab4;
  /* 105eda77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eda7a mov ecx, dword ptr [0x10610e0c] */
  ECX = (r32((uint32_t)(0x10610e0c)));
  /* 105eda80 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 105eda83 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eda86 push edx */
  push32((uint32_t)(EDX));
  /* 105eda87 call dword ptr [0x10613264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613264))), 0x105eda8du);
  /* 105eda8d push 2 */
  push32((uint32_t)(0x2u));
  /* 105eda8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105eda92 mov ecx, dword ptr [0x10610e0c] */
  ECX = (r32((uint32_t)(0x10610e0c)));
  /* 105eda98 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 105eda9b push edx */
  push32((uint32_t)(EDX));
  /* 105eda9c call 0x105e6920 */
  push32(0x105edaa1u); f_105e6920();
  /* 105edaa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edaa4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edaa7 mov ecx, dword ptr [0x10610e0c] */
  ECX = (r32((uint32_t)(0x10610e0c)));
  /* 105edaad mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_105edab4:;
  /* 105edab4 jmp 0x105eda10 */
  goto L_105eda10;
L_105edab9:;
  /* 105edab9 push 2 */
  push32((uint32_t)(0x2u));
  /* 105edabb call 0x105ea2e0 */
  push32(0x105edac0u); f_105ea2e0();
  /* 105edac0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edac3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105edac6 mov esp, ebp */
  ESP = (EBP);
  /* 105edac8 pop ebp */
  EBP = (pop32());
  /* 105edac9 ret  */
  ESPCHK(0x105ed9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dad0 @ 0x105edad0 (68 bytes, 26 insns) */
void f_105edad0(void) {
  FTRACE(0x105edad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105edad0 push ebp */
  push32((uint32_t)(EBP));
  /* 105edad1 mov ebp, esp */
  EBP = (ESP);
  /* 105edad3 push ecx */
  push32((uint32_t)(ECX));
  /* 105edad4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edad8 jne 0x105edae6 */
  if (!C.zf) goto L_105edae6;
  /* 105edada push 0 */
  push32((uint32_t)(0x0u));
  /* 105edadc call 0x105edc40 */
  push32(0x105edae1u); f_105edc40();
  /* 105edae1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edae4 jmp 0x105edb10 */
  goto L_105edb10;
L_105edae6:;
  /* 105edae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105edae9 push eax */
  push32((uint32_t)(EAX));
  /* 105edaea call 0x105e9e70 */
  push32(0x105edaefu); f_105e9e70();
  /* 105edaef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edaf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105edaf5 push ecx */
  push32((uint32_t)(ECX));
  /* 105edaf6 call 0x105edb20 */
  push32(0x105edafbu); f_105edb20();
  /* 105edafb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edafe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105edb01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105edb04 push edx */
  push32((uint32_t)(EDX));
  /* 105edb05 call 0x105e9ee0 */
  push32(0x105edb0au); f_105e9ee0();
  /* 105edb0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edb0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105edb10:;
  /* 105edb10 mov esp, ebp */
  ESP = (EBP);
  /* 105edb12 pop ebp */
  EBP = (pop32());
  /* 105edb13 ret  */
  ESPCHK(0x105edad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db20 @ 0x105edb20 (65 bytes, 26 insns) */
void f_105edb20(void) {
  FTRACE(0x105edb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105edb20 push ebp */
  push32((uint32_t)(EBP));
  /* 105edb21 mov ebp, esp */
  EBP = (ESP);
  /* 105edb23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105edb26 push eax */
  push32((uint32_t)(EAX));
  /* 105edb27 call 0x105edb70 */
  push32(0x105edb2cu); f_105edb70();
  /* 105edb2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edb2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105edb31 je 0x105edb38 */
  if (C.zf) goto L_105edb38;
  /* 105edb33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105edb36 jmp 0x105edb5f */
  goto L_105edb5f;
L_105edb38:;
  /* 105edb38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105edb3b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105edb3e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 105edb44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105edb46 je 0x105edb5d */
  if (C.zf) goto L_105edb5d;
  /* 105edb48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105edb4b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105edb4e push ecx */
  push32((uint32_t)(ECX));
  /* 105edb4f call 0x105ef190 */
  push32(0x105edb54u); f_105ef190();
  /* 105edb54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edb57 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105edb59 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105edb5b jmp 0x105edb5f */
  goto L_105edb5f;
L_105edb5d:;
  /* 105edb5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105edb5f:;
  /* 105edb5f pop ebp */
  EBP = (pop32());
  /* 105edb60 ret  */
  ESPCHK(0x105edb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db70 @ 0x105edb70 (183 bytes, 62 insns) */
void f_105edb70(void) {
  FTRACE(0x105edb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105edb70 push ebp */
  push32((uint32_t)(EBP));
  /* 105edb71 mov ebp, esp */
  EBP = (ESP);
  /* 105edb73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105edb76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105edb7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105edb80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105edb83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edb86 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105edb89 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105edb8c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edb8f jne 0x105edc0b */
  if (!C.zf) goto L_105edc0b;
  /* 105edb91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edb94 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105edb97 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 105edb9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105edb9f je 0x105edc0b */
  if (C.zf) goto L_105edc0b;
  /* 105edba1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edba4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edba7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 105edba9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105edbac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105edbaf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edbb3 jle 0x105edc0b */
  if ((C.zf||C.sf!=C.of)) goto L_105edc0b;
  /* 105edbb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105edbb8 push edx */
  push32((uint32_t)(EDX));
  /* 105edbb9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edbbc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105edbbf push ecx */
  push32((uint32_t)(ECX));
  /* 105edbc0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edbc3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105edbc6 push eax */
  push32((uint32_t)(EAX));
  /* 105edbc7 call 0x105e9900 */
  push32(0x105edbccu); f_105e9900();
  /* 105edbcc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edbcf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edbd2 jne 0x105edbf5 */
  if (!C.zf) goto L_105edbf5;
  /* 105edbd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edbd7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105edbda and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 105edbe0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105edbe2 je 0x105edbf3 */
  if (C.zf) goto L_105edbf3;
  /* 105edbe4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edbe7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105edbea and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 105edbed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edbf0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_105edbf3:;
  /* 105edbf3 jmp 0x105edc0b */
  goto L_105edc0b;
L_105edbf5:;
  /* 105edbf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edbf8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105edbfb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 105edbfe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edc01 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 105edc04 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105edc0b:;
  /* 105edc0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edc0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edc11 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105edc14 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105edc16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105edc19 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 105edc20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105edc23 mov esp, ebp */
  ESP = (EBP);
  /* 105edc25 pop ebp */
  EBP = (pop32());
  /* 105edc26 ret  */
  ESPCHK(0x105edb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc30 @ 0x105edc30 (15 bytes, 7 insns) */
void f_105edc30(void) {
  FTRACE(0x105edc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105edc30 push ebp */
  push32((uint32_t)(EBP));
  /* 105edc31 mov ebp, esp */
  EBP = (ESP);
  /* 105edc33 push 1 */
  push32((uint32_t)(0x1u));
  /* 105edc35 call 0x105edc40 */
  push32(0x105edc3au); f_105edc40();
  /* 105edc3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edc3d pop ebp */
  EBP = (pop32());
  /* 105edc3e ret  */
  ESPCHK(0x105edc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc40 @ 0x105edc40 (319 bytes, 94 insns) */
void f_105edc40(void) {
  FTRACE(0x105edc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105edc40 push ebp */
  push32((uint32_t)(EBP));
  /* 105edc41 mov ebp, esp */
  EBP = (ESP);
  /* 105edc43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105edc46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105edc4d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105edc54 push 2 */
  push32((uint32_t)(0x2u));
  /* 105edc56 call 0x105ea240 */
  push32(0x105edc5bu); f_105ea240();
  /* 105edc5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edc5e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105edc65 jmp 0x105edc70 */
  goto L_105edc70;
L_105edc67:;
  /* 105edc67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105edc6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105edc6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105edc70:;
  /* 105edc70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105edc73 cmp ecx, dword ptr [0x10612160] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10612160))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edc79 jge 0x105edd63 */
  if ((C.sf==C.of)) goto L_105edd63;
  /* 105edc7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105edc82 mov eax, dword ptr [0x10610e0c] */
  EAX = (r32((uint32_t)(0x10610e0c)));
  /* 105edc87 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edc8b je 0x105edd5e */
  if (C.zf) goto L_105edd5e;
  /* 105edc91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105edc94 mov edx, dword ptr [0x10610e0c] */
  EDX = (r32((uint32_t)(0x10610e0c)));
  /* 105edc9a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 105edc9d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105edca0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 105edca6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105edca8 je 0x105edd5e */
  if (C.zf) goto L_105edd5e;
  /* 105edcae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105edcb1 mov eax, dword ptr [0x10610e0c] */
  EAX = (r32((uint32_t)(0x10610e0c)));
  /* 105edcb6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 105edcb9 push ecx */
  push32((uint32_t)(ECX));
  /* 105edcba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105edcbd push edx */
  push32((uint32_t)(EDX));
  /* 105edcbe call 0x105e9eb0 */
  push32(0x105edcc3u); f_105e9eb0();
  /* 105edcc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edcc6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105edcc9 mov ecx, dword ptr [0x10610e0c] */
  ECX = (r32((uint32_t)(0x10610e0c)));
  /* 105edccf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 105edcd2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 105edcd5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 105edcda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105edcdc je 0x105edd45 */
  if (C.zf) goto L_105edd45;
  /* 105edcde cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edce2 jne 0x105edd09 */
  if (!C.zf) goto L_105edd09;
  /* 105edce4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105edce7 mov edx, dword ptr [0x10610e0c] */
  EDX = (r32((uint32_t)(0x10610e0c)));
  /* 105edced mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 105edcf0 push eax */
  push32((uint32_t)(EAX));
  /* 105edcf1 call 0x105edb20 */
  push32(0x105edcf6u); f_105edb20();
  /* 105edcf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edcf9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edcfc je 0x105edd07 */
  if (C.zf) goto L_105edd07;
  /* 105edcfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105edd01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105edd04 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105edd07:;
  /* 105edd07 jmp 0x105edd45 */
  goto L_105edd45;
L_105edd09:;
  /* 105edd09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edd0d jne 0x105edd45 */
  if (!C.zf) goto L_105edd45;
  /* 105edd0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105edd12 mov eax, dword ptr [0x10610e0c] */
  EAX = (r32((uint32_t)(0x10610e0c)));
  /* 105edd17 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 105edd1a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105edd1d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 105edd20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105edd22 je 0x105edd45 */
  if (C.zf) goto L_105edd45;
  /* 105edd24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105edd27 mov ecx, dword ptr [0x10610e0c] */
  ECX = (r32((uint32_t)(0x10610e0c)));
  /* 105edd2d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 105edd30 push edx */
  push32((uint32_t)(EDX));
  /* 105edd31 call 0x105edb20 */
  push32(0x105edd36u); f_105edb20();
  /* 105edd36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edd39 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edd3c jne 0x105edd45 */
  if (!C.zf) goto L_105edd45;
  /* 105edd3e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_105edd45:;
  /* 105edd45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105edd48 mov ecx, dword ptr [0x10610e0c] */
  ECX = (r32((uint32_t)(0x10610e0c)));
  /* 105edd4e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 105edd51 push edx */
  push32((uint32_t)(EDX));
  /* 105edd52 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105edd55 push eax */
  push32((uint32_t)(EAX));
  /* 105edd56 call 0x105e9f20 */
  push32(0x105edd5bu); f_105e9f20();
  /* 105edd5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105edd5e:;
  /* 105edd5e jmp 0x105edc67 */
  goto L_105edc67;
L_105edd63:;
  /* 105edd63 push 2 */
  push32((uint32_t)(0x2u));
  /* 105edd65 call 0x105ea2e0 */
  push32(0x105edd6au); f_105ea2e0();
  /* 105edd6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edd6d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edd71 jne 0x105edd78 */
  if (!C.zf) goto L_105edd78;
  /* 105edd73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105edd76 jmp 0x105edd7b */
  goto L_105edd7b;
L_105edd78:;
  /* 105edd78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105edd7b:;
  /* 105edd7b mov esp, ebp */
  ESP = (EBP);
  /* 105edd7d pop ebp */
  EBP = (pop32());
  /* 105edd7e ret  */
  ESPCHK(0x105edc40u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x105edd80 (15 bytes, 7 insns) */
void f_105edd80(void) {
  FTRACE(0x105edd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105edd80 push ebp */
  push32((uint32_t)(EBP));
  /* 105edd81 mov ebp, esp */
  EBP = (ESP);
  /* 105edd83 push 2 */
  push32((uint32_t)(0x2u));
  /* 105edd85 call 0x105e3ce0 */
  push32(0x105edd8au); f_105e3ce0();
  /* 105edd8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edd8d pop ebp */
  EBP = (pop32());
  /* 105edd8e ret  */
  ESPCHK(0x105edd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd90 @ 0x105edd90 (1007 bytes, 269 insns) */
void f_105edd90(void) {
  FTRACE(0x105edd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105edd90 push ebp */
  push32((uint32_t)(EBP));
  /* 105edd91 mov ebp, esp */
  EBP = (ESP);
  /* 105edd93 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105edd99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edd9d jl 0x105edda5 */
  if ((C.sf!=C.of)) goto L_105edda5;
  /* 105edd9f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edda3 jle 0x105eddac */
  if ((C.zf||C.sf!=C.of)) goto L_105eddac;
L_105edda5:;
  /* 105edda5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105edda7 jmp 0x105ee17b */
  goto L_105ee17b;
L_105eddac:;
  /* 105eddac push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105eddae call 0x105ea240 */
  push32(0x105eddb3u); f_105ea240();
  /* 105eddb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eddb6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105eddbd mov eax, dword ptr [0x10610b34] */
  EAX = (r32((uint32_t)(0x10610b34)));
  /* 105eddc2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eddc5 mov dword ptr [0x10610b34], eax */
  w32((uint32_t)(0x10610b34), (EAX));
L_105eddca:;
  /* 105eddca cmp dword ptr [0x10610b44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eddd1 je 0x105edddd */
  if (C.zf) goto L_105edddd;
  /* 105eddd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105eddd5 call dword ptr [0x106132d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132d0))), 0x105edddbu);
  /* 105edddb jmp 0x105eddca */
  goto L_105eddca;
L_105edddd:;
  /* 105edddd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edde1 je 0x105ede21 */
  if (C.zf) goto L_105ede21;
  /* 105edde3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edde7 je 0x105ede01 */
  if (C.zf) goto L_105ede01;
  /* 105edde9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eddec push ecx */
  push32((uint32_t)(ECX));
  /* 105edded mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eddf0 push edx */
  push32((uint32_t)(EDX));
  /* 105eddf1 call 0x105ee180 */
  push32(0x105eddf6u); f_105ee180();
  /* 105eddf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eddf9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 105eddff jmp 0x105ede13 */
  goto L_105ede13;
L_105ede01:;
  /* 105ede01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ede04 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ede07 mov ecx, dword ptr [eax + 0x1060f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1060f4dc)));
  /* 105ede0d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_105ede13:;
  /* 105ede13 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 105ede19 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105ede1c jmp 0x105ee15b */
  goto L_105ee15b;
L_105ede21:;
  /* 105ede21 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 105ede28 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105ede2f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ede33 je 0x105ee153 */
  if (C.zf) goto L_105ee153;
  /* 105ede39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ede3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105ede3f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ede42 jne 0x105ee064 */
  if (!C.zf) goto L_105ee064;
  /* 105ede48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ede4b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 105ede4f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ede52 jne 0x105ee064 */
  if (!C.zf) goto L_105ee064;
  /* 105ede58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ede5b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 105ede5f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ede62 jne 0x105ee064 */
  if (!C.zf) goto L_105ee064;
  /* 105ede68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ede6b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_105ede71:;
  /* 105ede71 push 0x1060c7b4 */
  push32((uint32_t)(0x1060c7b4u));
  /* 105ede76 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105ede7c push ecx */
  push32((uint32_t)(ECX));
  /* 105ede7d call 0x105f0840 */
  push32(0x105ede82u); f_105f0840();
  /* 105ede82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ede85 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 105ede8b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ede92 je 0x105edebd */
  if (C.zf) goto L_105edebd;
  /* 105ede94 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105ede9a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105edea0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 105edea6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edead je 0x105edebd */
  if (C.zf) goto L_105edebd;
  /* 105edeaf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105edeb5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105edeb8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edebb jne 0x105edee3 */
  if (!C.zf) goto L_105edee3;
L_105edebd:;
  /* 105edebd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edec1 je 0x105ededc */
  if (C.zf) goto L_105ededc;
  /* 105edec3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105edec5 call 0x105ea2e0 */
  push32(0x105edecau); f_105ea2e0();
  /* 105edeca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edecd mov edx, dword ptr [0x10610b34] */
  EDX = (r32((uint32_t)(0x10610b34)));
  /* 105eded3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eded6 mov dword ptr [0x10610b34], edx */
  w32((uint32_t)(0x10610b34), (EDX));
L_105ededc:;
  /* 105ededc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105edede jmp 0x105ee17b */
  goto L_105ee17b;
L_105edee3:;
  /* 105edee3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 105edeea jmp 0x105edef5 */
  goto L_105edef5;
L_105edeec:;
  /* 105edeec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105edeef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105edef2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_105edef5:;
  /* 105edef5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edef9 jg 0x105edf43 */
  if ((!C.zf&&C.sf==C.of)) goto L_105edf43;
  /* 105edefb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 105edf01 push ecx */
  push32((uint32_t)(ECX));
  /* 105edf02 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105edf08 push edx */
  push32((uint32_t)(EDX));
  /* 105edf09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105edf0c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105edf0f mov ecx, dword ptr [eax + 0x1060f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1060f4d8)));
  /* 105edf15 push ecx */
  push32((uint32_t)(ECX));
  /* 105edf16 call 0x105f0800 */
  push32(0x105edf1bu); f_105f0800();
  /* 105edf1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edf1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105edf20 jne 0x105edf41 */
  if (!C.zf) goto L_105edf41;
  /* 105edf22 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105edf25 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105edf28 mov eax, dword ptr [edx + 0x1060f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1060f4d8)));
  /* 105edf2e push eax */
  push32((uint32_t)(EAX));
  /* 105edf2f call 0x105e8cc0 */
  push32(0x105edf34u); f_105e8cc0();
  /* 105edf34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edf37 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edf3d jne 0x105edf41 */
  if (!C.zf) goto L_105edf41;
  /* 105edf3f jmp 0x105edf43 */
  goto L_105edf43;
L_105edf41:;
  /* 105edf41 jmp 0x105edeec */
  goto L_105edeec;
L_105edf43:;
  /* 105edf43 push 0x1060c7b0 */
  push32((uint32_t)(0x1060c7b0u));
  /* 105edf48 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105edf4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105edf51 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 105edf57 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105edf5d push edx */
  push32((uint32_t)(EDX));
  /* 105edf5e call 0x105f07c0 */
  push32(0x105edf63u); f_105f07c0();
  /* 105edf63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edf66 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 105edf6c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edf73 jne 0x105edfa9 */
  if (!C.zf) goto L_105edfa9;
  /* 105edf75 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105edf7b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105edf7e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edf81 je 0x105edfa9 */
  if (C.zf) goto L_105edfa9;
  /* 105edf83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edf87 je 0x105edfa2 */
  if (C.zf) goto L_105edfa2;
  /* 105edf89 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105edf8b call 0x105ea2e0 */
  push32(0x105edf90u); f_105ea2e0();
  /* 105edf90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edf93 mov edx, dword ptr [0x10610b34] */
  EDX = (r32((uint32_t)(0x10610b34)));
  /* 105edf99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105edf9c mov dword ptr [0x10610b34], edx */
  w32((uint32_t)(0x10610b34), (EDX));
L_105edfa2:;
  /* 105edfa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105edfa4 jmp 0x105ee17b */
  goto L_105ee17b;
L_105edfa9:;
  /* 105edfa9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105edfad jg 0x105edffa */
  if ((!C.zf&&C.sf==C.of)) goto L_105edffa;
  /* 105edfaf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 105edfb5 push eax */
  push32((uint32_t)(EAX));
  /* 105edfb6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105edfbc push ecx */
  push32((uint32_t)(ECX));
  /* 105edfbd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 105edfc3 push edx */
  push32((uint32_t)(EDX));
  /* 105edfc4 call 0x105e96b0 */
  push32(0x105edfc9u); f_105e96b0();
  /* 105edfc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edfcc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 105edfd2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 105edfda lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 105edfe0 push ecx */
  push32((uint32_t)(ECX));
  /* 105edfe1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105edfe4 push edx */
  push32((uint32_t)(EDX));
  /* 105edfe5 call 0x105ee180 */
  push32(0x105edfeau); f_105ee180();
  /* 105edfea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105edfed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105edfef je 0x105edffa */
  if (C.zf) goto L_105edffa;
  /* 105edff1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105edff4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105edff7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105edffa:;
  /* 105edffa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105ee000 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee006 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 105ee00c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105ee012 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105ee015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee017 je 0x105ee028 */
  if (C.zf) goto L_105ee028;
  /* 105ee019 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105ee01f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee022 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_105ee028:;
  /* 105ee028 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105ee02e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105ee031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee033 jne 0x105ede71 */
  if (!C.zf) goto L_105ede71;
  /* 105ee039 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee03d je 0x105ee04c */
  if (C.zf) goto L_105ee04c;
  /* 105ee03f call 0x105ee320 */
  push32(0x105ee044u); f_105ee320();
  /* 105ee044 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 105ee04a jmp 0x105ee056 */
  goto L_105ee056;
L_105ee04c:;
  /* 105ee04c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_105ee056:;
  /* 105ee056 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 105ee05c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105ee05f jmp 0x105ee151 */
  goto L_105ee151;
L_105ee064:;
  /* 105ee064 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee067 push edx */
  push32((uint32_t)(EDX));
  /* 105ee068 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ee06a push 0 */
  push32((uint32_t)(0x0u));
  /* 105ee06c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 105ee072 push eax */
  push32((uint32_t)(EAX));
  /* 105ee073 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee076 push ecx */
  push32((uint32_t)(ECX));
  /* 105ee077 call 0x105ee420 */
  push32(0x105ee07cu); f_105ee420();
  /* 105ee07c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee07f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ee082 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee086 je 0x105ee151 */
  if (C.zf) goto L_105ee151;
  /* 105ee08c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105ee093 jmp 0x105ee09e */
  goto L_105ee09e;
L_105ee095:;
  /* 105ee095 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ee098 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee09b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105ee09e:;
  /* 105ee09e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee0a2 jg 0x105ee100 */
  if ((!C.zf&&C.sf==C.of)) goto L_105ee100;
  /* 105ee0a4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee0a8 je 0x105ee0fe */
  if (C.zf) goto L_105ee0fe;
  /* 105ee0aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ee0ad imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ee0b0 mov ecx, dword ptr [eax + 0x1060f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1060f4dc)));
  /* 105ee0b6 push ecx */
  push32((uint32_t)(ECX));
  /* 105ee0b7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 105ee0bd push edx */
  push32((uint32_t)(EDX));
  /* 105ee0be call 0x105f0730 */
  push32(0x105ee0c3u); f_105f0730();
  /* 105ee0c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee0c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee0c8 je 0x105ee0f5 */
  if (C.zf) goto L_105ee0f5;
  /* 105ee0ca lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 105ee0d0 push eax */
  push32((uint32_t)(EAX));
  /* 105ee0d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ee0d4 push ecx */
  push32((uint32_t)(ECX));
  /* 105ee0d5 call 0x105ee180 */
  push32(0x105ee0dau); f_105ee180();
  /* 105ee0da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee0dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee0df je 0x105ee0ec */
  if (C.zf) goto L_105ee0ec;
  /* 105ee0e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ee0e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee0e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105ee0ea jmp 0x105ee0f3 */
  goto L_105ee0f3;
L_105ee0ec:;
  /* 105ee0ec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_105ee0f3:;
  /* 105ee0f3 jmp 0x105ee0fe */
  goto L_105ee0fe;
L_105ee0f5:;
  /* 105ee0f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ee0f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee0fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105ee0fe:;
  /* 105ee0fe jmp 0x105ee095 */
  goto L_105ee095;
L_105ee100:;
  /* 105ee100 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee104 je 0x105ee12b */
  if (C.zf) goto L_105ee12b;
  /* 105ee106 call 0x105ee320 */
  push32(0x105ee10bu); f_105ee320();
  /* 105ee10b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ee10e push 2 */
  push32((uint32_t)(0x2u));
  /* 105ee110 mov ecx, dword ptr [0x1060f4dc] */
  ECX = (r32((uint32_t)(0x1060f4dc)));
  /* 105ee116 push ecx */
  push32((uint32_t)(ECX));
  /* 105ee117 call 0x105e6920 */
  push32(0x105ee11cu); f_105e6920();
  /* 105ee11c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee11f mov dword ptr [0x1060f4dc], 0 */
  w32((uint32_t)(0x1060f4dc), (0x0u));
  /* 105ee129 jmp 0x105ee151 */
  goto L_105ee151;
L_105ee12b:;
  /* 105ee12b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee12f je 0x105ee13e */
  if (C.zf) goto L_105ee13e;
  /* 105ee131 call 0x105ee320 */
  push32(0x105ee136u); f_105ee320();
  /* 105ee136 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 105ee13c jmp 0x105ee148 */
  goto L_105ee148;
L_105ee13e:;
  /* 105ee13e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_105ee148:;
  /* 105ee148 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 105ee14e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105ee151:;
  /* 105ee151 jmp 0x105ee15b */
  goto L_105ee15b;
L_105ee153:;
  /* 105ee153 call 0x105ee320 */
  push32(0x105ee158u); f_105ee320();
  /* 105ee158 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105ee15b:;
  /* 105ee15b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee15f je 0x105ee178 */
  if (C.zf) goto L_105ee178;
  /* 105ee161 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105ee163 call 0x105ea2e0 */
  push32(0x105ee168u); f_105ea2e0();
  /* 105ee168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee16b mov eax, dword ptr [0x10610b34] */
  EAX = (r32((uint32_t)(0x10610b34)));
  /* 105ee170 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ee173 mov dword ptr [0x10610b34], eax */
  w32((uint32_t)(0x10610b34), (EAX));
L_105ee178:;
  /* 105ee178 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105ee17b:;
  /* 105ee17b mov esp, ebp */
  ESP = (EBP);
  /* 105ee17d pop ebp */
  EBP = (pop32());
  /* 105ee17e ret  */
  ESPCHK(0x105edd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e180 @ 0x105ee180 (403 bytes, 117 insns) */
void f_105ee180(void) {
  FTRACE(0x105ee180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ee180 push ebp */
  push32((uint32_t)(EBP));
  /* 105ee181 mov ebp, esp */
  EBP = (ESP);
  /* 105ee183 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ee189 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee18c push eax */
  push32((uint32_t)(EAX));
  /* 105ee18d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 105ee193 push ecx */
  push32((uint32_t)(ECX));
  /* 105ee194 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 105ee19a push edx */
  push32((uint32_t)(EDX));
  /* 105ee19b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 105ee1a1 push eax */
  push32((uint32_t)(EAX));
  /* 105ee1a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee1a5 push ecx */
  push32((uint32_t)(ECX));
  /* 105ee1a6 call 0x105ee420 */
  push32(0x105ee1abu); f_105ee420();
  /* 105ee1ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee1ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee1b0 jne 0x105ee1b9 */
  if (!C.zf) goto L_105ee1b9;
  /* 105ee1b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ee1b4 jmp 0x105ee30f */
  goto L_105ee30f;
L_105ee1b9:;
  /* 105ee1b9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 105ee1be push 0x1060c7b8 */
  push32((uint32_t)(0x1060c7b8u));
  /* 105ee1c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ee1c5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 105ee1cb push edx */
  push32((uint32_t)(EDX));
  /* 105ee1cc call 0x105e8cc0 */
  push32(0x105ee1d1u); f_105e8cc0();
  /* 105ee1d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee1d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee1d7 push eax */
  push32((uint32_t)(EAX));
  /* 105ee1d8 call 0x105e5e90 */
  push32(0x105ee1ddu); f_105e5e90();
  /* 105ee1dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee1e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ee1e3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee1e7 jne 0x105ee1f0 */
  if (!C.zf) goto L_105ee1f0;
  /* 105ee1e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ee1eb jmp 0x105ee30f */
  goto L_105ee30f;
L_105ee1f0:;
  /* 105ee1f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee1f3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ee1f6 mov ecx, dword ptr [eax + 0x1060f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1060f4dc)));
  /* 105ee1fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ee1ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee202 mov eax, dword ptr [edx*4 + 0x106109b8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x106109b8)));
  /* 105ee209 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ee20c push 6 */
  push32((uint32_t)(0x6u));
  /* 105ee20e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee211 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ee214 add ecx, 0x106109fc */
  { uint32_t _a=(ECX),_b=(0x106109fcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee21a push ecx */
  push32((uint32_t)(ECX));
  /* 105ee21b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 105ee21e push edx */
  push32((uint32_t)(EDX));
  /* 105ee21f call 0x105ed020 */
  push32(0x105ee224u); f_105ed020();
  /* 105ee224 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee227 mov eax, dword ptr [0x106109d0] */
  EAX = (r32((uint32_t)(0x106109d0)));
  /* 105ee22c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105ee22f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 105ee235 push ecx */
  push32((uint32_t)(ECX));
  /* 105ee236 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ee239 push edx */
  push32((uint32_t)(EDX));
  /* 105ee23a call 0x105e8e40 */
  push32(0x105ee23fu); f_105e8e40();
  /* 105ee23f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee242 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee245 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ee248 mov dword ptr [ecx + 0x1060f4dc], eax */
  w32((uint32_t)(ECX + 0x1060f4dc), (EAX));
  /* 105ee24e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 105ee254 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105ee25a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee25d mov dword ptr [eax*4 + 0x106109b8], edx */
  w32((uint32_t)(EAX*4 + 0x106109b8), (EDX));
  /* 105ee264 push 6 */
  push32((uint32_t)(0x6u));
  /* 105ee266 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 105ee26c push ecx */
  push32((uint32_t)(ECX));
  /* 105ee26d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee270 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ee273 add edx, 0x106109fc */
  { uint32_t _a=(EDX),_b=(0x106109fcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee279 push edx */
  push32((uint32_t)(EDX));
  /* 105ee27a call 0x105ed020 */
  push32(0x105ee27fu); f_105ed020();
  /* 105ee27f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee282 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee286 jne 0x105ee293 */
  if (!C.zf) goto L_105ee293;
  /* 105ee288 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105ee28e mov dword ptr [0x106109d0], eax */
  w32((uint32_t)(0x106109d0), (EAX));
L_105ee293:;
  /* 105ee293 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee297 jne 0x105ee2a5 */
  if (!C.zf) goto L_105ee2a5;
  /* 105ee299 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105ee29f mov dword ptr [0x106109d4], ecx */
  w32((uint32_t)(0x106109d4), (ECX));
L_105ee2a5:;
  /* 105ee2a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee2a8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ee2ab call dword ptr [edx + 0x1060f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1060f4e0))), 0x105ee2b1u);
  /* 105ee2b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee2b3 je 0x105ee2ec */
  if (C.zf) goto L_105ee2ec;
  /* 105ee2b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee2b8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ee2bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ee2be mov dword ptr [eax + 0x1060f4dc], ecx */
  w32((uint32_t)(EAX + 0x1060f4dc), (ECX));
  /* 105ee2c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ee2c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ee2c9 push edx */
  push32((uint32_t)(EDX));
  /* 105ee2ca call 0x105e6920 */
  push32(0x105ee2cfu); f_105e6920();
  /* 105ee2cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee2d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee2d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ee2d8 mov dword ptr [eax*4 + 0x106109b8], ecx */
  w32((uint32_t)(EAX*4 + 0x106109b8), (ECX));
  /* 105ee2df mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ee2e2 mov dword ptr [0x106109d0], edx */
  w32((uint32_t)(0x106109d0), (EDX));
  /* 105ee2e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ee2ea jmp 0x105ee30f */
  goto L_105ee30f;
L_105ee2ec:;
  /* 105ee2ec cmp dword ptr [ebp - 0xc], 0x1060f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1060f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee2f3 je 0x105ee303 */
  if (C.zf) goto L_105ee303;
  /* 105ee2f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ee2f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ee2fa push eax */
  push32((uint32_t)(EAX));
  /* 105ee2fb call 0x105e6920 */
  push32(0x105ee300u); f_105e6920();
  /* 105ee300 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ee303:;
  /* 105ee303 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee306 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ee309 mov eax, dword ptr [ecx + 0x1060f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1060f4dc)));
L_105ee30f:;
  /* 105ee30f mov esp, ebp */
  ESP = (EBP);
  /* 105ee311 pop ebp */
  EBP = (pop32());
  /* 105ee312 ret  */
  ESPCHK(0x105ee180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e320 @ 0x105ee320 (256 bytes, 72 insns) */
void f_105ee320(void) {
  FTRACE(0x105ee320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ee320 push ebp */
  push32((uint32_t)(EBP));
  /* 105ee321 mov ebp, esp */
  EBP = (ESP);
  /* 105ee323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ee326 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 105ee32d cmp dword ptr [0x1060f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1060f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee334 jne 0x105ee354 */
  if (!C.zf) goto L_105ee354;
  /* 105ee336 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 105ee33b push 0x1060c7b8 */
  push32((uint32_t)(0x1060c7b8u));
  /* 105ee340 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ee342 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 105ee347 call 0x105e5e90 */
  push32(0x105ee34cu); f_105e5e90();
  /* 105ee34c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee34f mov dword ptr [0x1060f4dc], eax */
  w32((uint32_t)(0x1060f4dc), (EAX));
L_105ee354:;
  /* 105ee354 mov eax, dword ptr [0x1060f4dc] */
  EAX = (r32((uint32_t)(0x1060f4dc)));
  /* 105ee359 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 105ee35c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105ee363 jmp 0x105ee36e */
  goto L_105ee36e;
L_105ee365:;
  /* 105ee365 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ee368 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee36b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105ee36e:;
  /* 105ee36e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ee371 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ee374 mov eax, dword ptr [edx + 0x1060f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1060f4dc)));
  /* 105ee37a push eax */
  push32((uint32_t)(EAX));
  /* 105ee37b push 0x1060c7c4 */
  push32((uint32_t)(0x1060c7c4u));
  /* 105ee380 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ee383 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ee386 mov edx, dword ptr [ecx + 0x1060f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1060f4d8)));
  /* 105ee38c push edx */
  push32((uint32_t)(EDX));
  /* 105ee38d push 3 */
  push32((uint32_t)(0x3u));
  /* 105ee38f mov eax, dword ptr [0x1060f4dc] */
  EAX = (r32((uint32_t)(0x1060f4dc)));
  /* 105ee394 push eax */
  push32((uint32_t)(EAX));
  /* 105ee395 call 0x105ee5c0 */
  push32(0x105ee39au); f_105ee5c0();
  /* 105ee39a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee39d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee3a1 jge 0x105ee3e9 */
  if ((C.sf==C.of)) goto L_105ee3e9;
  /* 105ee3a3 push 0x1060c7b0 */
  push32((uint32_t)(0x1060c7b0u));
  /* 105ee3a8 mov ecx, dword ptr [0x1060f4dc] */
  ECX = (r32((uint32_t)(0x1060f4dc)));
  /* 105ee3ae push ecx */
  push32((uint32_t)(ECX));
  /* 105ee3af call 0x105e8e50 */
  push32(0x105ee3b4u); f_105e8e50();
  /* 105ee3b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee3b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ee3ba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee3bd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ee3c0 mov eax, dword ptr [edx + 0x1060f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1060f4dc)));
  /* 105ee3c6 push eax */
  push32((uint32_t)(EAX));
  /* 105ee3c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ee3ca imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ee3cd mov edx, dword ptr [ecx + 0x1060f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1060f4dc)));
  /* 105ee3d3 push edx */
  push32((uint32_t)(EDX));
  /* 105ee3d4 call 0x105f0730 */
  push32(0x105ee3d9u); f_105f0730();
  /* 105ee3d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee3dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee3de je 0x105ee3e7 */
  if (C.zf) goto L_105ee3e7;
  /* 105ee3e0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_105ee3e7:;
  /* 105ee3e7 jmp 0x105ee417 */
  goto L_105ee417;
L_105ee3e9:;
  /* 105ee3e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee3ed jne 0x105ee3f6 */
  if (!C.zf) goto L_105ee3f6;
  /* 105ee3ef mov eax, dword ptr [0x1060f4dc] */
  EAX = (r32((uint32_t)(0x1060f4dc)));
  /* 105ee3f4 jmp 0x105ee41c */
  goto L_105ee41c;
L_105ee3f6:;
  /* 105ee3f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ee3f8 mov eax, dword ptr [0x1060f4dc] */
  EAX = (r32((uint32_t)(0x1060f4dc)));
  /* 105ee3fd push eax */
  push32((uint32_t)(EAX));
  /* 105ee3fe call 0x105e6920 */
  push32(0x105ee403u); f_105e6920();
  /* 105ee403 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee406 mov dword ptr [0x1060f4dc], 0 */
  w32((uint32_t)(0x1060f4dc), (0x0u));
  /* 105ee410 mov eax, dword ptr [0x1060f4f4] */
  EAX = (r32((uint32_t)(0x1060f4f4)));
  /* 105ee415 jmp 0x105ee41c */
  goto L_105ee41c;
L_105ee417:;
  /* 105ee417 jmp 0x105ee365 */
  goto L_105ee365;
L_105ee41c:;
  /* 105ee41c mov esp, ebp */
  ESP = (EBP);
  /* 105ee41e pop ebp */
  EBP = (pop32());
  /* 105ee41f ret  */
  ESPCHK(0x105ee320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e420 @ 0x105ee420 (388 bytes, 115 insns) */
void f_105ee420(void) {
  FTRACE(0x105ee420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ee420 push ebp */
  push32((uint32_t)(EBP));
  /* 105ee421 mov ebp, esp */
  EBP = (ESP);
  /* 105ee423 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ee429 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee42d jne 0x105ee436 */
  if (!C.zf) goto L_105ee436;
  /* 105ee42f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ee431 jmp 0x105ee5a0 */
  goto L_105ee5a0;
L_105ee436:;
  /* 105ee436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee439 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105ee43c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee43f jne 0x105ee490 */
  if (!C.zf) goto L_105ee490;
  /* 105ee441 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee444 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 105ee448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee44a jne 0x105ee490 */
  if (!C.zf) goto L_105ee490;
  /* 105ee44c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee44f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 105ee452 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee455 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 105ee459 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee45d je 0x105ee479 */
  if (C.zf) goto L_105ee479;
  /* 105ee45f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105ee462 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 105ee467 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105ee46a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 105ee470 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105ee473 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_105ee479:;
  /* 105ee479 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee47d je 0x105ee488 */
  if (C.zf) goto L_105ee488;
  /* 105ee47f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105ee482 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_105ee488:;
  /* 105ee488 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee48b jmp 0x105ee5a0 */
  goto L_105ee5a0;
L_105ee490:;
  /* 105ee490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee493 push ecx */
  push32((uint32_t)(ECX));
  /* 105ee494 push 0x1060f450 */
  push32((uint32_t)(0x1060f450u));
  /* 105ee499 call 0x105f0730 */
  push32(0x105ee49eu); f_105f0730();
  /* 105ee49e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee4a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee4a3 je 0x105ee558 */
  if (C.zf) goto L_105ee558;
  /* 105ee4a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee4ac push edx */
  push32((uint32_t)(EDX));
  /* 105ee4ad push 0x1060f3cc */
  push32((uint32_t)(0x1060f3ccu));
  /* 105ee4b2 call 0x105f0730 */
  push32(0x105ee4b7u); f_105f0730();
  /* 105ee4b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee4ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee4bc je 0x105ee558 */
  if (C.zf) goto L_105ee558;
  /* 105ee4c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee4c5 push eax */
  push32((uint32_t)(EAX));
  /* 105ee4c6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 105ee4cc push ecx */
  push32((uint32_t)(ECX));
  /* 105ee4cd call 0x105ee610 */
  push32(0x105ee4d2u); f_105ee610();
  /* 105ee4d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee4d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee4d7 je 0x105ee4e0 */
  if (C.zf) goto L_105ee4e0;
  /* 105ee4d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ee4db jmp 0x105ee5a0 */
  goto L_105ee5a0;
L_105ee4e0:;
  /* 105ee4e0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 105ee4e6 push edx */
  push32((uint32_t)(EDX));
  /* 105ee4e7 push 0x106109ac */
  push32((uint32_t)(0x106109acu));
  /* 105ee4ec lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 105ee4f2 push eax */
  push32((uint32_t)(EAX));
  /* 105ee4f3 call 0x105f0880 */
  push32(0x105ee4f8u); f_105f0880();
  /* 105ee4f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee4fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee4fd jne 0x105ee506 */
  if (!C.zf) goto L_105ee506;
  /* 105ee4ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ee501 jmp 0x105ee5a0 */
  goto L_105ee5a0;
L_105ee506:;
  /* 105ee506 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105ee508 mov cx, word ptr [0x106109b0] */
  CX = (r16((uint32_t)(0x106109b0)));
  /* 105ee50f mov dword ptr [0x106109b4], ecx */
  w32((uint32_t)(0x106109b4), (ECX));
  /* 105ee515 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 105ee51b push edx */
  push32((uint32_t)(EDX));
  /* 105ee51c push 0x1060f450 */
  push32((uint32_t)(0x1060f450u));
  /* 105ee521 call 0x105ee770 */
  push32(0x105ee526u); f_105ee770();
  /* 105ee526 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee529 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee52c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105ee52f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ee531 je 0x105ee546 */
  if (C.zf) goto L_105ee546;
  /* 105ee533 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee536 push edx */
  push32((uint32_t)(EDX));
  /* 105ee537 push 0x1060f3cc */
  push32((uint32_t)(0x1060f3ccu));
  /* 105ee53c call 0x105e8e40 */
  push32(0x105ee541u); f_105e8e40();
  /* 105ee541 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee544 jmp 0x105ee558 */
  goto L_105ee558;
L_105ee546:;
  /* 105ee546 push 0x1060f450 */
  push32((uint32_t)(0x1060f450u));
  /* 105ee54b push 0x1060f3cc */
  push32((uint32_t)(0x1060f3ccu));
  /* 105ee550 call 0x105e8e40 */
  push32(0x105ee555u); f_105e8e40();
  /* 105ee555 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ee558:;
  /* 105ee558 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee55c je 0x105ee571 */
  if (C.zf) goto L_105ee571;
  /* 105ee55e push 6 */
  push32((uint32_t)(0x6u));
  /* 105ee560 push 0x106109ac */
  push32((uint32_t)(0x106109acu));
  /* 105ee565 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105ee568 push eax */
  push32((uint32_t)(EAX));
  /* 105ee569 call 0x105ed020 */
  push32(0x105ee56eu); f_105ed020();
  /* 105ee56e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ee571:;
  /* 105ee571 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee575 je 0x105ee58a */
  if (C.zf) goto L_105ee58a;
  /* 105ee577 push 4 */
  push32((uint32_t)(0x4u));
  /* 105ee579 push 0x106109b4 */
  push32((uint32_t)(0x106109b4u));
  /* 105ee57e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105ee581 push ecx */
  push32((uint32_t)(ECX));
  /* 105ee582 call 0x105ed020 */
  push32(0x105ee587u); f_105ed020();
  /* 105ee587 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ee58a:;
  /* 105ee58a push 0x1060f450 */
  push32((uint32_t)(0x1060f450u));
  /* 105ee58f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee592 push edx */
  push32((uint32_t)(EDX));
  /* 105ee593 call 0x105e8e40 */
  push32(0x105ee598u); f_105e8e40();
  /* 105ee598 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee59b mov eax, 0x1060f450 */
  EAX = (0x1060f450u);
L_105ee5a0:;
  /* 105ee5a0 mov esp, ebp */
  ESP = (EBP);
  /* 105ee5a2 pop ebp */
  EBP = (pop32());
  /* 105ee5a3 ret  */
  ESPCHK(0x105ee420u, _esp0);
  ESP += 4; return;
}

