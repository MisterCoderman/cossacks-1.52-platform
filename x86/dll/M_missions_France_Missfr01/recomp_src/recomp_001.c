#include "recomp.h"

/* FUN_10007430 @ 0x105a7430 (152 bytes, 48 insns) */
void f_105a7430(void) {
  FTRACE(0x105a7430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a7430 push ebp */
  push32((uint32_t)(EBP));
  /* 105a7431 mov ebp, esp */
  EBP = (ESP);
  /* 105a7433 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a7436 call dword ptr [0x105d5250] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5250))), 0x105a743cu);
  /* 105a743c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105a743f mov eax, dword ptr [0x105d0a64] */
  EAX = (r32((uint32_t)(0x105d0a64)));
  /* 105a7444 push eax */
  push32((uint32_t)(EAX));
  /* 105a7445 call dword ptr [0x105d524c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d524c))), 0x105a744bu);
  /* 105a744b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a744e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7452 jne 0x105a74b7 */
  if (!C.zf) goto L_105a74b7;
  /* 105a7454 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 105a7459 push 0x105ce090 */
  push32((uint32_t)(0x105ce090u));
  /* 105a745e push 2 */
  push32((uint32_t)(0x2u));
  /* 105a7460 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 105a7462 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a7464 call 0x105a7e00 */
  push32(0x105a7469u); f_105a7e00();
  /* 105a7469 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a746c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a746f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7473 je 0x105a74ad */
  if (C.zf) goto L_105a74ad;
  /* 105a7475 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7478 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7479 mov edx, dword ptr [0x105d0a64] */
  EDX = (r32((uint32_t)(0x105d0a64)));
  /* 105a747f push edx */
  push32((uint32_t)(EDX));
  /* 105a7480 call dword ptr [0x105d523c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d523c))), 0x105a7486u);
  /* 105a7486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a7488 je 0x105a74ad */
  if (C.zf) goto L_105a74ad;
  /* 105a748a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a748d push eax */
  push32((uint32_t)(EAX));
  /* 105a748e call 0x105a7410 */
  push32(0x105a7493u); f_105a7410();
  /* 105a7493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7496 call dword ptr [0x105d5238] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5238))), 0x105a749cu);
  /* 105a749c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a749f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105a74a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a74a4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 105a74ab jmp 0x105a74b7 */
  goto L_105a74b7;
L_105a74ad:;
  /* 105a74ad push 0x10 */
  push32((uint32_t)(0x10u));
  /* 105a74af call 0x105a5840 */
  push32(0x105a74b4u); f_105a5840();
  /* 105a74b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a74b7:;
  /* 105a74b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a74ba push eax */
  push32((uint32_t)(EAX));
  /* 105a74bb call dword ptr [0x105d5248] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5248))), 0x105a74c1u);
  /* 105a74c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a74c4 mov esp, ebp */
  ESP = (EBP);
  /* 105a74c6 pop ebp */
  EBP = (pop32());
  /* 105a74c7 ret  */
  ESPCHK(0x105a7430u, _esp0);
  ESP += 4; return;
}

/* FUN_100074d0 @ 0x105a74d0 (263 bytes, 86 insns) */
void f_105a74d0(void) {
  FTRACE(0x105a74d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a74d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a74d1 mov ebp, esp */
  EBP = (ESP);
  /* 105a74d3 cmp dword ptr [0x105d0a64], -1 */
  { uint32_t _a=(r32((uint32_t)(0x105d0a64))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a74da je 0x105a75d5 */
  if (C.zf) goto L_105a75d5;
  /* 105a74e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a74e4 jne 0x105a74f5 */
  if (!C.zf) goto L_105a74f5;
  /* 105a74e6 mov eax, dword ptr [0x105d0a64] */
  EAX = (r32((uint32_t)(0x105d0a64)));
  /* 105a74eb push eax */
  push32((uint32_t)(EAX));
  /* 105a74ec call dword ptr [0x105d524c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d524c))), 0x105a74f2u);
  /* 105a74f2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105a74f5:;
  /* 105a74f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a74f9 je 0x105a75c6 */
  if (C.zf) goto L_105a75c6;
  /* 105a74ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7502 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7506 je 0x105a7519 */
  if (C.zf) goto L_105a7519;
  /* 105a7508 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a750a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a750d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 105a7510 push eax */
  push32((uint32_t)(EAX));
  /* 105a7511 call 0x105a8480 */
  push32(0x105a7516u); f_105a8480();
  /* 105a7516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a7519:;
  /* 105a7519 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a751c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7520 je 0x105a7533 */
  if (C.zf) goto L_105a7533;
  /* 105a7522 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a7524 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7527 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 105a752a push eax */
  push32((uint32_t)(EAX));
  /* 105a752b call 0x105a8480 */
  push32(0x105a7530u); f_105a8480();
  /* 105a7530 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a7533:;
  /* 105a7533 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7536 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a753a je 0x105a754d */
  if (C.zf) goto L_105a754d;
  /* 105a753c push 2 */
  push32((uint32_t)(0x2u));
  /* 105a753e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7541 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 105a7544 push eax */
  push32((uint32_t)(EAX));
  /* 105a7545 call 0x105a8480 */
  push32(0x105a754au); f_105a8480();
  /* 105a754a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a754d:;
  /* 105a754d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7550 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7554 je 0x105a7567 */
  if (C.zf) goto L_105a7567;
  /* 105a7556 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a7558 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a755b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 105a755e push eax */
  push32((uint32_t)(EAX));
  /* 105a755f call 0x105a8480 */
  push32(0x105a7564u); f_105a8480();
  /* 105a7564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a7567:;
  /* 105a7567 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a756a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a756e je 0x105a7581 */
  if (C.zf) goto L_105a7581;
  /* 105a7570 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a7572 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7575 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 105a7578 push eax */
  push32((uint32_t)(EAX));
  /* 105a7579 call 0x105a8480 */
  push32(0x105a757eu); f_105a8480();
  /* 105a757e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a7581:;
  /* 105a7581 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7584 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7588 je 0x105a759b */
  if (C.zf) goto L_105a759b;
  /* 105a758a push 2 */
  push32((uint32_t)(0x2u));
  /* 105a758c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a758f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 105a7592 push eax */
  push32((uint32_t)(EAX));
  /* 105a7593 call 0x105a8480 */
  push32(0x105a7598u); f_105a8480();
  /* 105a7598 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a759b:;
  /* 105a759b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a759e cmp dword ptr [ecx + 0x50], 0x105d10c0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x105d10c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a75a5 je 0x105a75b8 */
  if (C.zf) goto L_105a75b8;
  /* 105a75a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a75a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a75ac mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 105a75af push eax */
  push32((uint32_t)(EAX));
  /* 105a75b0 call 0x105a8480 */
  push32(0x105a75b5u); f_105a8480();
  /* 105a75b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a75b8:;
  /* 105a75b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a75ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a75bd push ecx */
  push32((uint32_t)(ECX));
  /* 105a75be call 0x105a8480 */
  push32(0x105a75c3u); f_105a8480();
  /* 105a75c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a75c6:;
  /* 105a75c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a75c8 mov edx, dword ptr [0x105d0a64] */
  EDX = (r32((uint32_t)(0x105d0a64)));
  /* 105a75ce push edx */
  push32((uint32_t)(EDX));
  /* 105a75cf call dword ptr [0x105d523c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d523c))), 0x105a75d5u);
L_105a75d5:;
  /* 105a75d5 pop ebp */
  EBP = (pop32());
  /* 105a75d6 ret  */
  ESPCHK(0x105a74d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100075e0 @ 0x105a75e0 (11 bytes, 5 insns) */
void f_105a75e0(void) {
  FTRACE(0x105a75e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a75e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a75e1 mov ebp, esp */
  EBP = (ESP);
  /* 105a75e3 call dword ptr [0x105d5238] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5238))), 0x105a75e9u);
  /* 105a75e9 pop ebp */
  EBP = (pop32());
  /* 105a75ea ret  */
  ESPCHK(0x105a75e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100075f0 @ 0x105a75f0 (11 bytes, 5 insns) */
void f_105a75f0(void) {
  FTRACE(0x105a75f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a75f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a75f1 mov ebp, esp */
  EBP = (ESP);
  /* 105a75f3 call dword ptr [0x105d5254] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5254))), 0x105a75f9u);
  /* 105a75f9 pop ebp */
  EBP = (pop32());
  /* 105a75fa ret  */
  ESPCHK(0x105a75f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007600 @ 0x105a7600 (804 bytes, 236 insns) */
void f_105a7600(void) {
  FTRACE(0x105a7600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a7600 push ebp */
  push32((uint32_t)(EBP));
  /* 105a7601 mov ebp, esp */
  EBP = (ESP);
  /* 105a7603 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a7606 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 105a760b push 0x105ce09c */
  push32((uint32_t)(0x105ce09cu));
  /* 105a7610 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a7612 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 105a7617 call 0x105a79f0 */
  push32(0x105a761cu); f_105a79f0();
  /* 105a761c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a761f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 105a7622 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7626 jne 0x105a7632 */
  if (!C.zf) goto L_105a7632;
  /* 105a7628 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 105a762a call 0x105a5840 */
  push32(0x105a762fu); f_105a5840();
  /* 105a762f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a7632:;
  /* 105a7632 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a7635 mov dword ptr [0x105d4360], eax */
  w32((uint32_t)(0x105d4360), (EAX));
  /* 105a763a mov dword ptr [0x105d449c], 0x20 */
  w32((uint32_t)(0x105d449c), (0x20u));
  /* 105a7644 jmp 0x105a764f */
  goto L_105a764f;
L_105a7646:;
  /* 105a7646 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a7649 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a764c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_105a764f:;
  /* 105a764f mov edx, dword ptr [0x105d4360] */
  EDX = (r32((uint32_t)(0x105d4360)));
  /* 105a7655 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a765b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a765e jae 0x105a7683 */
  if (!C.cf) goto L_105a7683;
  /* 105a7660 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a7663 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 105a7667 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a766a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 105a7670 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a7673 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 105a7677 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a767a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 105a7681 jmp 0x105a7646 */
  goto L_105a7646;
L_105a7683:;
  /* 105a7683 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 105a7686 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7687 call dword ptr [0x105d5260] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5260))), 0x105a768du);
  /* 105a768d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 105a7690 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105a7696 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a7698 je 0x105a7825 */
  if (C.zf) goto L_105a7825;
  /* 105a769e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a76a2 je 0x105a7825 */
  if (C.zf) goto L_105a7825;
  /* 105a76a8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105a76ab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105a76ad mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 105a76b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105a76b3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a76b6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105a76b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a76bc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a76bf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 105a76c2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a76c9 jge 0x105a76d3 */
  if ((C.sf==C.of)) goto L_105a76d3;
  /* 105a76cb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 105a76ce mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 105a76d1 jmp 0x105a76da */
  goto L_105a76da;
L_105a76d3:;
  /* 105a76d3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_105a76da:;
  /* 105a76da mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 105a76dd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 105a76e0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 105a76e7 jmp 0x105a76f2 */
  goto L_105a76f2;
L_105a76e9:;
  /* 105a76e9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 105a76ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a76ef mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_105a76f2:;
  /* 105a76f2 mov ecx, dword ptr [0x105d449c] */
  ECX = (r32((uint32_t)(0x105d449c)));
  /* 105a76f8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a76fb jge 0x105a7792 */
  if ((C.sf==C.of)) goto L_105a7792;
  /* 105a7701 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 105a7706 push 0x105ce09c */
  push32((uint32_t)(0x105ce09cu));
  /* 105a770b push 2 */
  push32((uint32_t)(0x2u));
  /* 105a770d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 105a7712 call 0x105a79f0 */
  push32(0x105a7717u); f_105a79f0();
  /* 105a7717 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a771a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 105a771d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7721 jne 0x105a772e */
  if (!C.zf) goto L_105a772e;
  /* 105a7723 mov edx, dword ptr [0x105d449c] */
  EDX = (r32((uint32_t)(0x105d449c)));
  /* 105a7729 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 105a772c jmp 0x105a7792 */
  goto L_105a7792;
L_105a772e:;
  /* 105a772e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 105a7731 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a7734 mov dword ptr [eax*4 + 0x105d4360], ecx */
  w32((uint32_t)(EAX*4 + 0x105d4360), (ECX));
  /* 105a773b mov edx, dword ptr [0x105d449c] */
  EDX = (r32((uint32_t)(0x105d449c)));
  /* 105a7741 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7744 mov dword ptr [0x105d449c], edx */
  w32((uint32_t)(0x105d449c), (EDX));
  /* 105a774a jmp 0x105a7755 */
  goto L_105a7755;
L_105a774c:;
  /* 105a774c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a774f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7752 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_105a7755:;
  /* 105a7755 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 105a7758 mov edx, dword ptr [ecx*4 + 0x105d4360] */
  EDX = (r32((uint32_t)(ECX*4 + 0x105d4360)));
  /* 105a775f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7765 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7768 jae 0x105a778d */
  if (!C.cf) goto L_105a778d;
  /* 105a776a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a776d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 105a7771 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a7774 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 105a777a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a777d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 105a7781 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a7784 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 105a778b jmp 0x105a774c */
  goto L_105a774c;
L_105a778d:;
  /* 105a778d jmp 0x105a76e9 */
  goto L_105a76e9;
L_105a7792:;
  /* 105a7792 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 105a7799 jmp 0x105a77b6 */
  goto L_105a77b6;
L_105a779b:;
  /* 105a779b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 105a779e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a77a1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 105a77a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a77a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a77aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105a77ad mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 105a77b0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a77b3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_105a77b6:;
  /* 105a77b6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 105a77b9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a77bc jge 0x105a7825 */
  if ((C.sf==C.of)) goto L_105a7825;
  /* 105a77be mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 105a77c1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a77c4 je 0x105a7820 */
  if (C.zf) goto L_105a7820;
  /* 105a77c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a77c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105a77cc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105a77cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a77d1 je 0x105a7820 */
  if (C.zf) goto L_105a7820;
  /* 105a77d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a77d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105a77d9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 105a77dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a77de jne 0x105a77f0 */
  if (!C.zf) goto L_105a77f0;
  /* 105a77e0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 105a77e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105a77e5 push edx */
  push32((uint32_t)(EDX));
  /* 105a77e6 call dword ptr [0x105d525c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d525c))), 0x105a77ecu);
  /* 105a77ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a77ee je 0x105a7820 */
  if (C.zf) goto L_105a7820;
L_105a77f0:;
  /* 105a77f0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 105a77f3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105a77f6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 105a77f9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105a77fc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105a77ff mov edx, dword ptr [eax*4 + 0x105d4360] */
  EDX = (r32((uint32_t)(EAX*4 + 0x105d4360)));
  /* 105a7806 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7808 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 105a780b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a780e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 105a7811 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105a7813 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105a7815 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a7818 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a781b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105a781d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_105a7820:;
  /* 105a7820 jmp 0x105a779b */
  goto L_105a779b;
L_105a7825:;
  /* 105a7825 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 105a782c jmp 0x105a7837 */
  goto L_105a7837;
L_105a782e:;
  /* 105a782e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 105a7831 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7834 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_105a7837:;
  /* 105a7837 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a783b jge 0x105a7914 */
  if ((C.sf==C.of)) goto L_105a7914;
  /* 105a7841 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 105a7844 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105a7847 mov edx, dword ptr [0x105d4360] */
  EDX = (r32((uint32_t)(0x105d4360)));
  /* 105a784d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a784f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 105a7852 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a7855 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7858 jne 0x105a7900 */
  if (!C.zf) goto L_105a7900;
  /* 105a785e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a7861 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 105a7865 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7869 jne 0x105a7874 */
  if (!C.zf) goto L_105a7874;
  /* 105a786b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 105a7872 jmp 0x105a7884 */
  goto L_105a7884;
L_105a7874:;
  /* 105a7874 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 105a7877 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a787a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105a787c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a787e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7881 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_105a7884:;
  /* 105a7884 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 105a7887 push eax */
  push32((uint32_t)(EAX));
  /* 105a7888 call dword ptr [0x105d5210] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5210))), 0x105a788eu);
  /* 105a788e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 105a7891 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7895 je 0x105a78ef */
  if (C.zf) goto L_105a78ef;
  /* 105a7897 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105a789a push ecx */
  push32((uint32_t)(ECX));
  /* 105a789b call dword ptr [0x105d525c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d525c))), 0x105a78a1u);
  /* 105a78a1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 105a78a4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a78a8 je 0x105a78ef */
  if (C.zf) goto L_105a78ef;
  /* 105a78aa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a78ad mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105a78b0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105a78b2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 105a78b5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a78bb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a78be jne 0x105a78d0 */
  if (!C.zf) goto L_105a78d0;
  /* 105a78c0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a78c3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 105a78c6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 105a78c8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a78cb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 105a78ce jmp 0x105a78ed */
  goto L_105a78ed;
L_105a78d0:;
  /* 105a78d0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 105a78d3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105a78d9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a78dc jne 0x105a78ed */
  if (!C.zf) goto L_105a78ed;
  /* 105a78de mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a78e1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105a78e4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 105a78e7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a78ea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_105a78ed:;
  /* 105a78ed jmp 0x105a78fe */
  goto L_105a78fe;
L_105a78ef:;
  /* 105a78ef mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a78f2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105a78f5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 105a78f8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a78fb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_105a78fe:;
  /* 105a78fe jmp 0x105a790f */
  goto L_105a790f;
L_105a7900:;
  /* 105a7900 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a7903 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105a7906 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 105a7909 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a790c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_105a790f:;
  /* 105a790f jmp 0x105a782e */
  goto L_105a782e;
L_105a7914:;
  /* 105a7914 mov eax, dword ptr [0x105d449c] */
  EAX = (r32((uint32_t)(0x105d449c)));
  /* 105a7919 push eax */
  push32((uint32_t)(EAX));
  /* 105a791a call dword ptr [0x105d5258] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5258))), 0x105a7920u);
  /* 105a7920 mov esp, ebp */
  ESP = (EBP);
  /* 105a7922 pop ebp */
  EBP = (pop32());
  /* 105a7923 ret  */
  ESPCHK(0x105a7600u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x105a7930 (155 bytes, 45 insns) */
void f_105a7930(void) {
  FTRACE(0x105a7930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a7930 push ebp */
  push32((uint32_t)(EBP));
  /* 105a7931 mov ebp, esp */
  EBP = (ESP);
  /* 105a7933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a7936 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105a793d jmp 0x105a7948 */
  goto L_105a7948;
L_105a793f:;
  /* 105a793f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a7942 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7945 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105a7948:;
  /* 105a7948 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a794c jge 0x105a79c7 */
  if ((C.sf==C.of)) goto L_105a79c7;
  /* 105a794e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a7951 cmp dword ptr [ecx*4 + 0x105d4360], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x105d4360))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7959 je 0x105a79c2 */
  if (C.zf) goto L_105a79c2;
  /* 105a795b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a795e mov eax, dword ptr [edx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(EDX*4 + 0x105d4360)));
  /* 105a7965 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a7968 jmp 0x105a7973 */
  goto L_105a7973;
L_105a796a:;
  /* 105a796a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a796d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7970 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105a7973:;
  /* 105a7973 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a7976 mov eax, dword ptr [edx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(EDX*4 + 0x105d4360)));
  /* 105a797d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7982 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7985 jae 0x105a799f */
  if (!C.cf) goto L_105a799f;
  /* 105a7987 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a798a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a798e je 0x105a799d */
  if (C.zf) goto L_105a799d;
  /* 105a7990 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7993 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7996 push edx */
  push32((uint32_t)(EDX));
  /* 105a7997 call dword ptr [0x105d5264] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5264))), 0x105a799du);
L_105a799d:;
  /* 105a799d jmp 0x105a796a */
  goto L_105a796a;
L_105a799f:;
  /* 105a799f push 2 */
  push32((uint32_t)(0x2u));
  /* 105a79a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a79a4 mov ecx, dword ptr [eax*4 + 0x105d4360] */
  ECX = (r32((uint32_t)(EAX*4 + 0x105d4360)));
  /* 105a79ab push ecx */
  push32((uint32_t)(ECX));
  /* 105a79ac call 0x105a8480 */
  push32(0x105a79b1u); f_105a8480();
  /* 105a79b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a79b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a79b7 mov dword ptr [edx*4 + 0x105d4360], 0 */
  w32((uint32_t)(EDX*4 + 0x105d4360), (0x0u));
L_105a79c2:;
  /* 105a79c2 jmp 0x105a793f */
  goto L_105a793f;
L_105a79c7:;
  /* 105a79c7 mov esp, ebp */
  ESP = (EBP);
  /* 105a79c9 pop ebp */
  EBP = (pop32());
  /* 105a79ca ret  */
  ESPCHK(0x105a7930u, _esp0);
  ESP += 4; return;
}

/* FUN_100079d0 @ 0x105a79d0 (29 bytes, 13 insns) */
void f_105a79d0(void) {
  FTRACE(0x105a79d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a79d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a79d1 mov ebp, esp */
  EBP = (ESP);
  /* 105a79d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a79d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a79d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a79d9 mov eax, dword ptr [0x105d2b88] */
  EAX = (r32((uint32_t)(0x105d2b88)));
  /* 105a79de push eax */
  push32((uint32_t)(EAX));
  /* 105a79df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a79e2 push ecx */
  push32((uint32_t)(ECX));
  /* 105a79e3 call 0x105a7a40 */
  push32(0x105a79e8u); f_105a7a40();
  /* 105a79e8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a79eb pop ebp */
  EBP = (pop32());
  /* 105a79ec ret  */
  ESPCHK(0x105a79d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f0 @ 0x105a79f0 (35 bytes, 16 insns) */
void f_105a79f0(void) {
  FTRACE(0x105a79f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a79f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a79f1 mov ebp, esp */
  EBP = (ESP);
  /* 105a79f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a79f6 push eax */
  push32((uint32_t)(EAX));
  /* 105a79f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a79fa push ecx */
  push32((uint32_t)(ECX));
  /* 105a79fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a79fe push edx */
  push32((uint32_t)(EDX));
  /* 105a79ff mov eax, dword ptr [0x105d2b88] */
  EAX = (r32((uint32_t)(0x105d2b88)));
  /* 105a7a04 push eax */
  push32((uint32_t)(EAX));
  /* 105a7a05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7a08 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7a09 call 0x105a7a40 */
  push32(0x105a7a0eu); f_105a7a40();
  /* 105a7a0e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7a11 pop ebp */
  EBP = (pop32());
  /* 105a7a12 ret  */
  ESPCHK(0x105a79f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a20 @ 0x105a7a20 (27 bytes, 13 insns) */
void f_105a7a20(void) {
  FTRACE(0x105a7a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a7a20 push ebp */
  push32((uint32_t)(EBP));
  /* 105a7a21 mov ebp, esp */
  EBP = (ESP);
  /* 105a7a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a7a29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a7a2c push eax */
  push32((uint32_t)(EAX));
  /* 105a7a2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7a30 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7a31 call 0x105a7a40 */
  push32(0x105a7a36u); f_105a7a40();
  /* 105a7a36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7a39 pop ebp */
  EBP = (pop32());
  /* 105a7a3a ret  */
  ESPCHK(0x105a7a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a40 @ 0x105a7a40 (94 bytes, 38 insns) */
void f_105a7a40(void) {
  FTRACE(0x105a7a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a7a40 push ebp */
  push32((uint32_t)(EBP));
  /* 105a7a41 mov ebp, esp */
  EBP = (ESP);
  /* 105a7a43 push ecx */
  push32((uint32_t)(ECX));
L_105a7a44:;
  /* 105a7a44 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a7a46 call 0x105abda0 */
  push32(0x105a7a4bu); f_105abda0();
  /* 105a7a4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7a4e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a7a51 push eax */
  push32((uint32_t)(EAX));
  /* 105a7a52 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a7a55 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7a56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a7a59 push edx */
  push32((uint32_t)(EDX));
  /* 105a7a5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7a5d push eax */
  push32((uint32_t)(EAX));
  /* 105a7a5e call 0x105a7ac0 */
  push32(0x105a7a63u); f_105a7ac0();
  /* 105a7a63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7a66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a7a69 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a7a6b call 0x105abe40 */
  push32(0x105a7a70u); f_105abe40();
  /* 105a7a70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7a73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7a77 jne 0x105a7a7f */
  if (!C.zf) goto L_105a7a7f;
  /* 105a7a79 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7a7d jne 0x105a7a84 */
  if (!C.zf) goto L_105a7a84;
L_105a7a7f:;
  /* 105a7a7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7a82 jmp 0x105a7a9a */
  goto L_105a7a9a;
L_105a7a84:;
  /* 105a7a84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7a87 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7a88 call 0x105ac0e0 */
  push32(0x105a7a8du); f_105ac0e0();
  /* 105a7a8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7a90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a7a92 jne 0x105a7a98 */
  if (!C.zf) goto L_105a7a98;
  /* 105a7a94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a7a96 jmp 0x105a7a9a */
  goto L_105a7a9a;
L_105a7a98:;
  /* 105a7a98 jmp 0x105a7a44 */
  goto L_105a7a44;
L_105a7a9a:;
  /* 105a7a9a mov esp, ebp */
  ESP = (EBP);
  /* 105a7a9c pop ebp */
  EBP = (pop32());
  /* 105a7a9d ret  */
  ESPCHK(0x105a7a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007aa0 @ 0x105a7aa0 (23 bytes, 11 insns) */
void f_105a7aa0(void) {
  FTRACE(0x105a7aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a7aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a7aa1 mov ebp, esp */
  EBP = (ESP);
  /* 105a7aa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7aa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a7aa9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7aac push eax */
  push32((uint32_t)(EAX));
  /* 105a7aad call 0x105a7ac0 */
  push32(0x105a7ab2u); f_105a7ac0();
  /* 105a7ab2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7ab5 pop ebp */
  EBP = (pop32());
  /* 105a7ab6 ret  */
  ESPCHK(0x105a7aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ac0 @ 0x105a7ac0 (787 bytes, 254 insns) */
void f_105a7ac0(void) {
  FTRACE(0x105a7ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a7ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a7ac1 mov ebp, esp */
  EBP = (ESP);
  /* 105a7ac3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a7ac6 push ebx */
  push32((uint32_t)(EBX));
  /* 105a7ac7 push esi */
  push32((uint32_t)(ESI));
  /* 105a7ac8 push edi */
  push32((uint32_t)(EDI));
  /* 105a7ac9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105a7ad0 mov eax, dword ptr [0x105d0a8c] */
  EAX = (r32((uint32_t)(0x105d0a8c)));
  /* 105a7ad5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105a7ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a7ada je 0x105a7b0c */
  if (C.zf) goto L_105a7b0c;
L_105a7adc:;
  /* 105a7adc call 0x105a8b90 */
  push32(0x105a7ae1u); f_105a8b90();
  /* 105a7ae1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a7ae3 jne 0x105a7b06 */
  if (!C.zf) goto L_105a7b06;
  /* 105a7ae5 push 0x105ce190 */
  push32((uint32_t)(0x105ce190u));
  /* 105a7aea push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7aec push 0x141 */
  push32((uint32_t)(0x141u));
  /* 105a7af1 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a7af6 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a7af8 call 0x105a5990 */
  push32(0x105a7afdu); f_105a5990();
  /* 105a7afd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7b00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7b03 jne 0x105a7b06 */
  if (!C.zf) goto L_105a7b06;
  /* 105a7b05 int3  */
  x86_unimpl("int3 @ 0x105a7b05");
L_105a7b06:;
  /* 105a7b06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a7b08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a7b0a jne 0x105a7adc */
  if (!C.zf) goto L_105a7adc;
L_105a7b0c:;
  /* 105a7b0c mov edx, dword ptr [0x105d0a90] */
  EDX = (r32((uint32_t)(0x105d0a90)));
  /* 105a7b12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105a7b15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a7b18 cmp eax, dword ptr [0x105d0a94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d0a94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7b1e jne 0x105a7b21 */
  if (!C.zf) goto L_105a7b21;
  /* 105a7b20 int3  */
  x86_unimpl("int3 @ 0x105a7b20");
L_105a7b21:;
  /* 105a7b21 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a7b24 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7b25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a7b28 push edx */
  push32((uint32_t)(EDX));
  /* 105a7b29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a7b2c push eax */
  push32((uint32_t)(EAX));
  /* 105a7b2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a7b30 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7b31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7b34 push edx */
  push32((uint32_t)(EDX));
  /* 105a7b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7b37 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a7b39 call dword ptr [0x105d1150] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d1150))), 0x105a7b3fu);
  /* 105a7b3f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7b42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a7b44 jne 0x105a7ba4 */
  if (!C.zf) goto L_105a7ba4;
  /* 105a7b46 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7b4a je 0x105a7b77 */
  if (C.zf) goto L_105a7b77;
L_105a7b4c:;
  /* 105a7b4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a7b4f push eax */
  push32((uint32_t)(EAX));
  /* 105a7b50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a7b53 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7b54 push 0x105ce14c */
  push32((uint32_t)(0x105ce14cu));
  /* 105a7b59 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7b5b push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7b61 call 0x105a5990 */
  push32(0x105a7b66u); f_105a5990();
  /* 105a7b66 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7b69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7b6c jne 0x105a7b6f */
  if (!C.zf) goto L_105a7b6f;
  /* 105a7b6e int3  */
  x86_unimpl("int3 @ 0x105a7b6e");
L_105a7b6f:;
  /* 105a7b6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a7b71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a7b73 jne 0x105a7b4c */
  if (!C.zf) goto L_105a7b4c;
  /* 105a7b75 jmp 0x105a7b9d */
  goto L_105a7b9d;
L_105a7b77:;
  /* 105a7b77 push 0x105ce128 */
  push32((uint32_t)(0x105ce128u));
  /* 105a7b7c push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a7b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7b89 call 0x105a5990 */
  push32(0x105a7b8eu); f_105a5990();
  /* 105a7b8e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7b91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7b94 jne 0x105a7b97 */
  if (!C.zf) goto L_105a7b97;
  /* 105a7b96 int3  */
  x86_unimpl("int3 @ 0x105a7b96");
L_105a7b97:;
  /* 105a7b97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a7b99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a7b9b jne 0x105a7b77 */
  if (!C.zf) goto L_105a7b77;
L_105a7b9d:;
  /* 105a7b9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a7b9f jmp 0x105a7dcc */
  goto L_105a7dcc;
L_105a7ba4:;
  /* 105a7ba4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a7ba7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a7bad cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7bb0 je 0x105a7bc6 */
  if (C.zf) goto L_105a7bc6;
  /* 105a7bb2 mov edx, dword ptr [0x105d0a8c] */
  EDX = (r32((uint32_t)(0x105d0a8c)));
  /* 105a7bb8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105a7bbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a7bbd jne 0x105a7bc6 */
  if (!C.zf) goto L_105a7bc6;
  /* 105a7bbf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_105a7bc6:;
  /* 105a7bc6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7bca ja 0x105a7bd7 */
  if ((!C.cf&&!C.zf)) goto L_105a7bd7;
  /* 105a7bcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7bcf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7bd2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7bd5 jbe 0x105a7c03 */
  if ((C.cf||C.zf)) goto L_105a7c03;
L_105a7bd7:;
  /* 105a7bd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7bda push ecx */
  push32((uint32_t)(ECX));
  /* 105a7bdb push 0x105ce100 */
  push32((uint32_t)(0x105ce100u));
  /* 105a7be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7be2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7be4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7be6 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a7be8 call 0x105a5990 */
  push32(0x105a7bedu); f_105a5990();
  /* 105a7bed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7bf0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7bf3 jne 0x105a7bf6 */
  if (!C.zf) goto L_105a7bf6;
  /* 105a7bf5 int3  */
  x86_unimpl("int3 @ 0x105a7bf5");
L_105a7bf6:;
  /* 105a7bf6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a7bf8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a7bfa jne 0x105a7bd7 */
  if (!C.zf) goto L_105a7bd7;
  /* 105a7bfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a7bfe jmp 0x105a7dcc */
  goto L_105a7dcc;
L_105a7c03:;
  /* 105a7c03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a7c06 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a7c0b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7c0e je 0x105a7c50 */
  if (C.zf) goto L_105a7c50;
  /* 105a7c10 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7c14 je 0x105a7c50 */
  if (C.zf) goto L_105a7c50;
  /* 105a7c16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a7c19 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a7c1f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7c22 je 0x105a7c50 */
  if (C.zf) goto L_105a7c50;
  /* 105a7c24 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7c28 je 0x105a7c50 */
  if (C.zf) goto L_105a7c50;
L_105a7c2a:;
  /* 105a7c2a push 0x105ce0cc */
  push32((uint32_t)(0x105ce0ccu));
  /* 105a7c2f push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a7c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7c36 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7c38 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7c3a push 1 */
  push32((uint32_t)(0x1u));
  /* 105a7c3c call 0x105a5990 */
  push32(0x105a7c41u); f_105a5990();
  /* 105a7c41 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7c44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7c47 jne 0x105a7c4a */
  if (!C.zf) goto L_105a7c4a;
  /* 105a7c49 int3  */
  x86_unimpl("int3 @ 0x105a7c49");
L_105a7c4a:;
  /* 105a7c4a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a7c4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a7c4e jne 0x105a7c2a */
  if (!C.zf) goto L_105a7c2a;
L_105a7c50:;
  /* 105a7c50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7c53 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7c56 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105a7c59 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105a7c5c push ecx */
  push32((uint32_t)(ECX));
  /* 105a7c5d call 0x105ac1f0 */
  push32(0x105a7c62u); f_105ac1f0();
  /* 105a7c62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7c65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a7c68 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7c6c jne 0x105a7c75 */
  if (!C.zf) goto L_105a7c75;
  /* 105a7c6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a7c70 jmp 0x105a7dcc */
  goto L_105a7dcc;
L_105a7c75:;
  /* 105a7c75 mov edx, dword ptr [0x105d0a90] */
  EDX = (r32((uint32_t)(0x105d0a90)));
  /* 105a7c7b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7c7e mov dword ptr [0x105d0a90], edx */
  w32((uint32_t)(0x105d0a90), (EDX));
  /* 105a7c84 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7c88 je 0x105a7cd3 */
  if (C.zf) goto L_105a7cd3;
  /* 105a7c8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7c8d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105a7c93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7c96 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 105a7c9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7ca0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 105a7ca7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7caa mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 105a7cb1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7cb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7cb7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 105a7cba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7cbd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 105a7cc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7cc7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 105a7cce jmp 0x105a7d73 */
  goto L_105a7d73;
L_105a7cd3:;
  /* 105a7cd3 mov edx, dword ptr [0x105d29e8] */
  EDX = (r32((uint32_t)(0x105d29e8)));
  /* 105a7cd9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7cdc mov dword ptr [0x105d29e8], edx */
  w32((uint32_t)(0x105d29e8), (EDX));
  /* 105a7ce2 mov eax, dword ptr [0x105d29f0] */
  EAX = (r32((uint32_t)(0x105d29f0)));
  /* 105a7ce7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7cea mov dword ptr [0x105d29f0], eax */
  w32((uint32_t)(0x105d29f0), (EAX));
  /* 105a7cef mov ecx, dword ptr [0x105d29f0] */
  ECX = (r32((uint32_t)(0x105d29f0)));
  /* 105a7cf5 cmp ecx, dword ptr [0x105d29f4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d29f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7cfb jbe 0x105a7d09 */
  if ((C.cf||C.zf)) goto L_105a7d09;
  /* 105a7cfd mov edx, dword ptr [0x105d29f0] */
  EDX = (r32((uint32_t)(0x105d29f0)));
  /* 105a7d03 mov dword ptr [0x105d29f4], edx */
  w32((uint32_t)(0x105d29f4), (EDX));
L_105a7d09:;
  /* 105a7d09 cmp dword ptr [0x105d29ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d29ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7d10 je 0x105a7d1f */
  if (C.zf) goto L_105a7d1f;
  /* 105a7d12 mov eax, dword ptr [0x105d29ec] */
  EAX = (r32((uint32_t)(0x105d29ec)));
  /* 105a7d17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7d1a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 105a7d1d jmp 0x105a7d28 */
  goto L_105a7d28;
L_105a7d1f:;
  /* 105a7d1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7d22 mov dword ptr [0x105d29e4], edx */
  w32((uint32_t)(0x105d29e4), (EDX));
L_105a7d28:;
  /* 105a7d28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7d2b mov ecx, dword ptr [0x105d29ec] */
  ECX = (r32((uint32_t)(0x105d29ec)));
  /* 105a7d31 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105a7d33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7d36 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 105a7d3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7d40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a7d43 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 105a7d46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7d49 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a7d4c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 105a7d4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7d52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7d55 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 105a7d58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7d5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a7d5e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 105a7d61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7d64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a7d67 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 105a7d6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7d6d mov dword ptr [0x105d29ec], ecx */
  w32((uint32_t)(0x105d29ec), (ECX));
L_105a7d73:;
  /* 105a7d73 push 4 */
  push32((uint32_t)(0x4u));
  /* 105a7d75 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a7d77 mov dl, byte ptr [0x105d0a98] */
  DL = (r8((uint32_t)(0x105d0a98)));
  /* 105a7d7d push edx */
  push32((uint32_t)(EDX));
  /* 105a7d7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7d81 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7d84 push eax */
  push32((uint32_t)(EAX));
  /* 105a7d85 call 0x105ac110 */
  push32(0x105a7d8au); f_105ac110();
  /* 105a7d8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7d8d push 4 */
  push32((uint32_t)(0x4u));
  /* 105a7d8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a7d91 mov cl, byte ptr [0x105d0a98] */
  CL = (r8((uint32_t)(0x105d0a98)));
  /* 105a7d97 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7d98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7d9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7d9e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 105a7da2 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7da3 call 0x105ac110 */
  push32(0x105a7da8u); f_105ac110();
  /* 105a7da8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7dab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7dae push edx */
  push32((uint32_t)(EDX));
  /* 105a7daf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a7db1 mov al, byte ptr [0x105d0a9a] */
  AL = (r8((uint32_t)(0x105d0a9a)));
  /* 105a7db6 push eax */
  push32((uint32_t)(EAX));
  /* 105a7db7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7dba add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7dbd push ecx */
  push32((uint32_t)(ECX));
  /* 105a7dbe call 0x105ac110 */
  push32(0x105a7dc3u); f_105ac110();
  /* 105a7dc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7dc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7dc9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_105a7dcc:;
  /* 105a7dcc pop edi */
  EDI = (pop32());
  /* 105a7dcd pop esi */
  ESI = (pop32());
  /* 105a7dce pop ebx */
  EBX = (pop32());
  /* 105a7dcf mov esp, ebp */
  ESP = (EBP);
  /* 105a7dd1 pop ebp */
  EBP = (pop32());
  /* 105a7dd2 ret  */
  ESPCHK(0x105a7ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007de0 @ 0x105a7de0 (27 bytes, 13 insns) */
void f_105a7de0(void) {
  FTRACE(0x105a7de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a7de0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a7de1 mov ebp, esp */
  EBP = (ESP);
  /* 105a7de3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7de7 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a7de9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a7dec push eax */
  push32((uint32_t)(EAX));
  /* 105a7ded mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7df0 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7df1 call 0x105a7e00 */
  push32(0x105a7df6u); f_105a7e00();
  /* 105a7df6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7df9 pop ebp */
  EBP = (pop32());
  /* 105a7dfa ret  */
  ESPCHK(0x105a7de0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x105a7e00 (96 bytes, 37 insns) */
void f_105a7e00(void) {
  FTRACE(0x105a7e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a7e00 push ebp */
  push32((uint32_t)(EBP));
  /* 105a7e01 mov ebp, esp */
  EBP = (ESP);
  /* 105a7e03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a7e06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a7e09 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105a7e0d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 105a7e10 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a7e13 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7e14 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a7e17 push edx */
  push32((uint32_t)(EDX));
  /* 105a7e18 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a7e1b push eax */
  push32((uint32_t)(EAX));
  /* 105a7e1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a7e1f push ecx */
  push32((uint32_t)(ECX));
  /* 105a7e20 call 0x105a79f0 */
  push32(0x105a7e25u); f_105a79f0();
  /* 105a7e25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7e28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105a7e2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7e2f je 0x105a7e59 */
  if (C.zf) goto L_105a7e59;
  /* 105a7e31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a7e34 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105a7e37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a7e3a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7e3d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105a7e40:;
  /* 105a7e40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a7e43 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7e46 jae 0x105a7e59 */
  if (!C.cf) goto L_105a7e59;
  /* 105a7e48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a7e4b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 105a7e4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a7e51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7e54 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105a7e57 jmp 0x105a7e40 */
  goto L_105a7e40;
L_105a7e59:;
  /* 105a7e59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a7e5c mov esp, ebp */
  ESP = (EBP);
  /* 105a7e5e pop ebp */
  EBP = (pop32());
  /* 105a7e5f ret  */
  ESPCHK(0x105a7e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e60 @ 0x105a7e60 (27 bytes, 13 insns) */
void f_105a7e60(void) {
  FTRACE(0x105a7e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a7e60 push ebp */
  push32((uint32_t)(EBP));
  /* 105a7e61 mov ebp, esp */
  EBP = (ESP);
  /* 105a7e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7e67 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a7e69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a7e6c push eax */
  push32((uint32_t)(EAX));
  /* 105a7e6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7e70 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7e71 call 0x105a7e80 */
  push32(0x105a7e76u); f_105a7e80();
  /* 105a7e76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7e79 pop ebp */
  EBP = (pop32());
  /* 105a7e7a ret  */
  ESPCHK(0x105a7e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x105a7e80 (64 bytes, 27 insns) */
void f_105a7e80(void) {
  FTRACE(0x105a7e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a7e80 push ebp */
  push32((uint32_t)(EBP));
  /* 105a7e81 mov ebp, esp */
  EBP = (ESP);
  /* 105a7e83 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7e84 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a7e86 call 0x105abda0 */
  push32(0x105a7e8bu); f_105abda0();
  /* 105a7e8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7e8e push 1 */
  push32((uint32_t)(0x1u));
  /* 105a7e90 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a7e93 push eax */
  push32((uint32_t)(EAX));
  /* 105a7e94 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a7e97 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7e98 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a7e9b push edx */
  push32((uint32_t)(EDX));
  /* 105a7e9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a7e9f push eax */
  push32((uint32_t)(EAX));
  /* 105a7ea0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7ea4 call 0x105a7ec0 */
  push32(0x105a7ea9u); f_105a7ec0();
  /* 105a7ea9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7eac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a7eaf push 9 */
  push32((uint32_t)(0x9u));
  /* 105a7eb1 call 0x105abe40 */
  push32(0x105a7eb6u); f_105abe40();
  /* 105a7eb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7eb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a7ebc mov esp, ebp */
  ESP = (EBP);
  /* 105a7ebe pop ebp */
  EBP = (pop32());
  /* 105a7ebf ret  */
  ESPCHK(0x105a7e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ec0 @ 0x105a7ec0 (1297 bytes, 431 insns) */
void f_105a7ec0(void) {
  FTRACE(0x105a7ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a7ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a7ec1 mov ebp, esp */
  EBP = (ESP);
  /* 105a7ec3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a7ec6 push ebx */
  push32((uint32_t)(EBX));
  /* 105a7ec7 push esi */
  push32((uint32_t)(ESI));
  /* 105a7ec8 push edi */
  push32((uint32_t)(EDI));
  /* 105a7ec9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 105a7ed0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7ed4 jne 0x105a7ef3 */
  if (!C.zf) goto L_105a7ef3;
  /* 105a7ed6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a7ed9 push eax */
  push32((uint32_t)(EAX));
  /* 105a7eda mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a7edd push ecx */
  push32((uint32_t)(ECX));
  /* 105a7ede mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a7ee1 push edx */
  push32((uint32_t)(EDX));
  /* 105a7ee2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a7ee5 push eax */
  push32((uint32_t)(EAX));
  /* 105a7ee6 call 0x105a79f0 */
  push32(0x105a7eebu); f_105a79f0();
  /* 105a7eeb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7eee jmp 0x105a83ca */
  goto L_105a83ca;
L_105a7ef3:;
  /* 105a7ef3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7ef7 je 0x105a7f16 */
  if (C.zf) goto L_105a7f16;
  /* 105a7ef9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7efd jne 0x105a7f16 */
  if (!C.zf) goto L_105a7f16;
  /* 105a7eff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a7f02 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7f03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7f06 push edx */
  push32((uint32_t)(EDX));
  /* 105a7f07 call 0x105a8480 */
  push32(0x105a7f0cu); f_105a8480();
  /* 105a7f0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7f0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a7f11 jmp 0x105a83ca */
  goto L_105a83ca;
L_105a7f16:;
  /* 105a7f16 mov eax, dword ptr [0x105d0a8c] */
  EAX = (r32((uint32_t)(0x105d0a8c)));
  /* 105a7f1b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105a7f1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a7f20 je 0x105a7f52 */
  if (C.zf) goto L_105a7f52;
L_105a7f22:;
  /* 105a7f22 call 0x105a8b90 */
  push32(0x105a7f27u); f_105a8b90();
  /* 105a7f27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a7f29 jne 0x105a7f4c */
  if (!C.zf) goto L_105a7f4c;
  /* 105a7f2b push 0x105ce190 */
  push32((uint32_t)(0x105ce190u));
  /* 105a7f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7f32 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 105a7f37 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a7f3c push 2 */
  push32((uint32_t)(0x2u));
  /* 105a7f3e call 0x105a5990 */
  push32(0x105a7f43u); f_105a5990();
  /* 105a7f43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7f46 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7f49 jne 0x105a7f4c */
  if (!C.zf) goto L_105a7f4c;
  /* 105a7f4b int3  */
  x86_unimpl("int3 @ 0x105a7f4b");
L_105a7f4c:;
  /* 105a7f4c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a7f4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a7f50 jne 0x105a7f22 */
  if (!C.zf) goto L_105a7f22;
L_105a7f52:;
  /* 105a7f52 mov edx, dword ptr [0x105d0a90] */
  EDX = (r32((uint32_t)(0x105d0a90)));
  /* 105a7f58 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105a7f5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105a7f5e cmp eax, dword ptr [0x105d0a94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d0a94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7f64 jne 0x105a7f67 */
  if (!C.zf) goto L_105a7f67;
  /* 105a7f66 int3  */
  x86_unimpl("int3 @ 0x105a7f66");
L_105a7f67:;
  /* 105a7f67 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a7f6a push ecx */
  push32((uint32_t)(ECX));
  /* 105a7f6b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a7f6e push edx */
  push32((uint32_t)(EDX));
  /* 105a7f6f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105a7f72 push eax */
  push32((uint32_t)(EAX));
  /* 105a7f73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a7f76 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7f77 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a7f7a push edx */
  push32((uint32_t)(EDX));
  /* 105a7f7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a7f7e push eax */
  push32((uint32_t)(EAX));
  /* 105a7f7f push 2 */
  push32((uint32_t)(0x2u));
  /* 105a7f81 call dword ptr [0x105d1150] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d1150))), 0x105a7f87u);
  /* 105a7f87 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7f8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a7f8c jne 0x105a7fec */
  if (!C.zf) goto L_105a7fec;
  /* 105a7f8e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7f92 je 0x105a7fbf */
  if (C.zf) goto L_105a7fbf;
L_105a7f94:;
  /* 105a7f94 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a7f97 push ecx */
  push32((uint32_t)(ECX));
  /* 105a7f98 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a7f9b push edx */
  push32((uint32_t)(EDX));
  /* 105a7f9c push 0x105ce30c */
  push32((uint32_t)(0x105ce30cu));
  /* 105a7fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7fa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7fa9 call 0x105a5990 */
  push32(0x105a7faeu); f_105a5990();
  /* 105a7fae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7fb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7fb4 jne 0x105a7fb7 */
  if (!C.zf) goto L_105a7fb7;
  /* 105a7fb6 int3  */
  x86_unimpl("int3 @ 0x105a7fb6");
L_105a7fb7:;
  /* 105a7fb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a7fb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a7fbb jne 0x105a7f94 */
  if (!C.zf) goto L_105a7f94;
  /* 105a7fbd jmp 0x105a7fe5 */
  goto L_105a7fe5;
L_105a7fbf:;
  /* 105a7fbf push 0x105ce2e8 */
  push32((uint32_t)(0x105ce2e8u));
  /* 105a7fc4 push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a7fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7fcd push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7fd1 call 0x105a5990 */
  push32(0x105a7fd6u); f_105a5990();
  /* 105a7fd6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a7fd9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7fdc jne 0x105a7fdf */
  if (!C.zf) goto L_105a7fdf;
  /* 105a7fde int3  */
  x86_unimpl("int3 @ 0x105a7fde");
L_105a7fdf:;
  /* 105a7fdf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a7fe1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a7fe3 jne 0x105a7fbf */
  if (!C.zf) goto L_105a7fbf;
L_105a7fe5:;
  /* 105a7fe5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a7fe7 jmp 0x105a83ca */
  goto L_105a83ca;
L_105a7fec:;
  /* 105a7fec cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a7ff0 jbe 0x105a801e */
  if ((C.cf||C.zf)) goto L_105a801e;
L_105a7ff2:;
  /* 105a7ff2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a7ff5 push edx */
  push32((uint32_t)(EDX));
  /* 105a7ff6 push 0x105ce2b8 */
  push32((uint32_t)(0x105ce2b8u));
  /* 105a7ffb push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7ffd push 0 */
  push32((uint32_t)(0x0u));
  /* 105a7fff push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8001 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a8003 call 0x105a5990 */
  push32(0x105a8008u); f_105a5990();
  /* 105a8008 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a800b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a800e jne 0x105a8011 */
  if (!C.zf) goto L_105a8011;
  /* 105a8010 int3  */
  x86_unimpl("int3 @ 0x105a8010");
L_105a8011:;
  /* 105a8011 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a8013 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8015 jne 0x105a7ff2 */
  if (!C.zf) goto L_105a7ff2;
  /* 105a8017 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a8019 jmp 0x105a83ca */
  goto L_105a83ca;
L_105a801e:;
  /* 105a801e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8022 je 0x105a8066 */
  if (C.zf) goto L_105a8066;
  /* 105a8024 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a8027 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a802d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8030 je 0x105a8066 */
  if (C.zf) goto L_105a8066;
  /* 105a8032 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a8035 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105a803b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a803e je 0x105a8066 */
  if (C.zf) goto L_105a8066;
L_105a8040:;
  /* 105a8040 push 0x105ce0cc */
  push32((uint32_t)(0x105ce0ccu));
  /* 105a8045 push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a804a push 0 */
  push32((uint32_t)(0x0u));
  /* 105a804c push 0 */
  push32((uint32_t)(0x0u));
  /* 105a804e push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8050 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a8052 call 0x105a5990 */
  push32(0x105a8057u); f_105a5990();
  /* 105a8057 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a805a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a805d jne 0x105a8060 */
  if (!C.zf) goto L_105a8060;
  /* 105a805f int3  */
  x86_unimpl("int3 @ 0x105a805f");
L_105a8060:;
  /* 105a8060 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a8062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8064 jne 0x105a8040 */
  if (!C.zf) goto L_105a8040;
L_105a8066:;
  /* 105a8066 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8069 push ecx */
  push32((uint32_t)(ECX));
  /* 105a806a call 0x105a8ff0 */
  push32(0x105a806fu); f_105a8ff0();
  /* 105a806f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8074 jne 0x105a8097 */
  if (!C.zf) goto L_105a8097;
  /* 105a8076 push 0x105ce294 */
  push32((uint32_t)(0x105ce294u));
  /* 105a807b push 0 */
  push32((uint32_t)(0x0u));
  /* 105a807d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 105a8082 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a8087 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a8089 call 0x105a5990 */
  push32(0x105a808eu); f_105a5990();
  /* 105a808e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8091 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8094 jne 0x105a8097 */
  if (!C.zf) goto L_105a8097;
  /* 105a8096 int3  */
  x86_unimpl("int3 @ 0x105a8096");
L_105a8097:;
  /* 105a8097 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a8099 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a809b jne 0x105a8066 */
  if (!C.zf) goto L_105a8066;
  /* 105a809d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a80a0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a80a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105a80a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a80a9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a80ad jne 0x105a80b6 */
  if (!C.zf) goto L_105a80b6;
  /* 105a80af mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_105a80b6:;
  /* 105a80b6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a80ba je 0x105a80fa */
  if (C.zf) goto L_105a80fa;
L_105a80bc:;
  /* 105a80bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a80bf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a80c6 jne 0x105a80d1 */
  if (!C.zf) goto L_105a80d1;
  /* 105a80c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a80cb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a80cf je 0x105a80f2 */
  if (C.zf) goto L_105a80f2;
L_105a80d1:;
  /* 105a80d1 push 0x105ce24c */
  push32((uint32_t)(0x105ce24cu));
  /* 105a80d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a80d8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 105a80dd push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a80e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a80e4 call 0x105a5990 */
  push32(0x105a80e9u); f_105a5990();
  /* 105a80e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a80ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a80ef jne 0x105a80f2 */
  if (!C.zf) goto L_105a80f2;
  /* 105a80f1 int3  */
  x86_unimpl("int3 @ 0x105a80f1");
L_105a80f2:;
  /* 105a80f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a80f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a80f6 jne 0x105a80bc */
  if (!C.zf) goto L_105a80bc;
  /* 105a80f8 jmp 0x105a815e */
  goto L_105a815e;
L_105a80fa:;
  /* 105a80fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a80fd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a8100 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a8105 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8108 jne 0x105a811f */
  if (!C.zf) goto L_105a811f;
  /* 105a810a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a810d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a8113 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8116 jne 0x105a811f */
  if (!C.zf) goto L_105a811f;
  /* 105a8118 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_105a811f:;
  /* 105a811f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8122 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a8125 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a812a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a812d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a8133 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8135 je 0x105a8158 */
  if (C.zf) goto L_105a8158;
  /* 105a8137 push 0x105ce210 */
  push32((uint32_t)(0x105ce210u));
  /* 105a813c push 0 */
  push32((uint32_t)(0x0u));
  /* 105a813e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 105a8143 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a8148 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a814a call 0x105a5990 */
  push32(0x105a814fu); f_105a5990();
  /* 105a814f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8152 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8155 jne 0x105a8158 */
  if (!C.zf) goto L_105a8158;
  /* 105a8157 int3  */
  x86_unimpl("int3 @ 0x105a8157");
L_105a8158:;
  /* 105a8158 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a815a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a815c jne 0x105a811f */
  if (!C.zf) goto L_105a811f;
L_105a815e:;
  /* 105a815e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8162 je 0x105a8189 */
  if (C.zf) goto L_105a8189;
  /* 105a8164 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a8167 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a816a push eax */
  push32((uint32_t)(EAX));
  /* 105a816b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a816e push ecx */
  push32((uint32_t)(ECX));
  /* 105a816f call 0x105ac320 */
  push32(0x105a8174u); f_105ac320();
  /* 105a8174 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8177 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105a817a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a817e jne 0x105a8187 */
  if (!C.zf) goto L_105a8187;
  /* 105a8180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a8182 jmp 0x105a83ca */
  goto L_105a83ca;
L_105a8187:;
  /* 105a8187 jmp 0x105a81ac */
  goto L_105a81ac;
L_105a8189:;
  /* 105a8189 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a818c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a818f push edx */
  push32((uint32_t)(EDX));
  /* 105a8190 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8193 push eax */
  push32((uint32_t)(EAX));
  /* 105a8194 call 0x105ac270 */
  push32(0x105a8199u); f_105ac270();
  /* 105a8199 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a819c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105a819f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a81a3 jne 0x105a81ac */
  if (!C.zf) goto L_105a81ac;
  /* 105a81a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a81a7 jmp 0x105a83ca */
  goto L_105a83ca;
L_105a81ac:;
  /* 105a81ac mov ecx, dword ptr [0x105d0a90] */
  ECX = (r32((uint32_t)(0x105d0a90)));
  /* 105a81b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a81b5 mov dword ptr [0x105d0a90], ecx */
  w32((uint32_t)(0x105d0a90), (ECX));
  /* 105a81bb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a81bf jne 0x105a8217 */
  if (!C.zf) goto L_105a8217;
  /* 105a81c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a81c4 mov eax, dword ptr [0x105d29e8] */
  EAX = (r32((uint32_t)(0x105d29e8)));
  /* 105a81c9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a81cc mov dword ptr [0x105d29e8], eax */
  w32((uint32_t)(0x105d29e8), (EAX));
  /* 105a81d1 mov ecx, dword ptr [0x105d29e8] */
  ECX = (r32((uint32_t)(0x105d29e8)));
  /* 105a81d7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a81da mov dword ptr [0x105d29e8], ecx */
  w32((uint32_t)(0x105d29e8), (ECX));
  /* 105a81e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a81e3 mov eax, dword ptr [0x105d29f0] */
  EAX = (r32((uint32_t)(0x105d29f0)));
  /* 105a81e8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a81eb mov dword ptr [0x105d29f0], eax */
  w32((uint32_t)(0x105d29f0), (EAX));
  /* 105a81f0 mov ecx, dword ptr [0x105d29f0] */
  ECX = (r32((uint32_t)(0x105d29f0)));
  /* 105a81f6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a81f9 mov dword ptr [0x105d29f0], ecx */
  w32((uint32_t)(0x105d29f0), (ECX));
  /* 105a81ff mov edx, dword ptr [0x105d29f0] */
  EDX = (r32((uint32_t)(0x105d29f0)));
  /* 105a8205 cmp edx, dword ptr [0x105d29f4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x105d29f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a820b jbe 0x105a8217 */
  if ((C.cf||C.zf)) goto L_105a8217;
  /* 105a820d mov eax, dword ptr [0x105d29f0] */
  EAX = (r32((uint32_t)(0x105d29f0)));
  /* 105a8212 mov dword ptr [0x105d29f4], eax */
  w32((uint32_t)(0x105d29f4), (EAX));
L_105a8217:;
  /* 105a8217 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a821a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a821d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105a8220 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a8223 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a8226 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8229 jbe 0x105a824f */
  if ((C.cf||C.zf)) goto L_105a824f;
  /* 105a822b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a822e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a8231 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a8234 push edx */
  push32((uint32_t)(EDX));
  /* 105a8235 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a8237 mov al, byte ptr [0x105d0a9a] */
  AL = (r8((uint32_t)(0x105d0a9a)));
  /* 105a823c push eax */
  push32((uint32_t)(EAX));
  /* 105a823d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a8240 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8243 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8246 push edx */
  push32((uint32_t)(EDX));
  /* 105a8247 call 0x105ac110 */
  push32(0x105a824cu); f_105ac110();
  /* 105a824c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a824f:;
  /* 105a824f push 4 */
  push32((uint32_t)(0x4u));
  /* 105a8251 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a8253 mov al, byte ptr [0x105d0a98] */
  AL = (r8((uint32_t)(0x105d0a98)));
  /* 105a8258 push eax */
  push32((uint32_t)(EAX));
  /* 105a8259 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a825c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a825f push ecx */
  push32((uint32_t)(ECX));
  /* 105a8260 call 0x105ac110 */
  push32(0x105a8265u); f_105ac110();
  /* 105a8265 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8268 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a826c jne 0x105a8289 */
  if (!C.zf) goto L_105a8289;
  /* 105a826e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a8271 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a8274 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105a8277 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a827a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a827d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 105a8280 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a8283 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105a8286 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_105a8289:;
  /* 105a8289 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a828c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a828f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_105a8292:;
  /* 105a8292 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8296 jne 0x105a82c7 */
  if (!C.zf) goto L_105a82c7;
  /* 105a8298 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a829c jne 0x105a82a6 */
  if (!C.zf) goto L_105a82a6;
  /* 105a829e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a82a1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a82a4 je 0x105a82c7 */
  if (C.zf) goto L_105a82c7;
L_105a82a6:;
  /* 105a82a6 push 0x105ce1dc */
  push32((uint32_t)(0x105ce1dcu));
  /* 105a82ab push 0 */
  push32((uint32_t)(0x0u));
  /* 105a82ad push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 105a82b2 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a82b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a82b9 call 0x105a5990 */
  push32(0x105a82beu); f_105a5990();
  /* 105a82be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a82c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a82c4 jne 0x105a82c7 */
  if (!C.zf) goto L_105a82c7;
  /* 105a82c6 int3  */
  x86_unimpl("int3 @ 0x105a82c6");
L_105a82c7:;
  /* 105a82c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a82c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a82cb jne 0x105a8292 */
  if (!C.zf) goto L_105a8292;
  /* 105a82cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a82d0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a82d3 je 0x105a82db */
  if (C.zf) goto L_105a82db;
  /* 105a82d5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a82d9 je 0x105a82e3 */
  if (C.zf) goto L_105a82e3;
L_105a82db:;
  /* 105a82db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a82de jmp 0x105a83ca */
  goto L_105a83ca;
L_105a82e3:;
  /* 105a82e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a82e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a82e9 je 0x105a82fb */
  if (C.zf) goto L_105a82fb;
  /* 105a82eb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a82ee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105a82f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a82f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105a82f6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 105a82f9 jmp 0x105a8337 */
  goto L_105a8337;
L_105a82fb:;
  /* 105a82fb mov eax, dword ptr [0x105d29e4] */
  EAX = (r32((uint32_t)(0x105d29e4)));
  /* 105a8300 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8303 je 0x105a8326 */
  if (C.zf) goto L_105a8326;
  /* 105a8305 push 0x105ce1c0 */
  push32((uint32_t)(0x105ce1c0u));
  /* 105a830a push 0 */
  push32((uint32_t)(0x0u));
  /* 105a830c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 105a8311 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a8316 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a8318 call 0x105a5990 */
  push32(0x105a831du); f_105a5990();
  /* 105a831d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8320 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8323 jne 0x105a8326 */
  if (!C.zf) goto L_105a8326;
  /* 105a8325 int3  */
  x86_unimpl("int3 @ 0x105a8325");
L_105a8326:;
  /* 105a8326 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a8328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a832a jne 0x105a82fb */
  if (!C.zf) goto L_105a82fb;
  /* 105a832c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a832f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105a8332 mov dword ptr [0x105d29e4], eax */
  w32((uint32_t)(0x105d29e4), (EAX));
L_105a8337:;
  /* 105a8337 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a833a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a833e je 0x105a834f */
  if (C.zf) goto L_105a834f;
  /* 105a8340 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a8343 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105a8346 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a8349 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105a834b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105a834d jmp 0x105a838a */
  goto L_105a838a;
L_105a834f:;
  /* 105a834f mov eax, dword ptr [0x105d29ec] */
  EAX = (r32((uint32_t)(0x105d29ec)));
  /* 105a8354 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8357 je 0x105a837a */
  if (C.zf) goto L_105a837a;
  /* 105a8359 push 0x105ce1a4 */
  push32((uint32_t)(0x105ce1a4u));
  /* 105a835e push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8360 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 105a8365 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a836a push 2 */
  push32((uint32_t)(0x2u));
  /* 105a836c call 0x105a5990 */
  push32(0x105a8371u); f_105a5990();
  /* 105a8371 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8374 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8377 jne 0x105a837a */
  if (!C.zf) goto L_105a837a;
  /* 105a8379 int3  */
  x86_unimpl("int3 @ 0x105a8379");
L_105a837a:;
  /* 105a837a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a837c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a837e jne 0x105a834f */
  if (!C.zf) goto L_105a834f;
  /* 105a8380 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a8383 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105a8385 mov dword ptr [0x105d29ec], eax */
  w32((uint32_t)(0x105d29ec), (EAX));
L_105a838a:;
  /* 105a838a cmp dword ptr [0x105d29ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d29ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8391 je 0x105a83a1 */
  if (C.zf) goto L_105a83a1;
  /* 105a8393 mov ecx, dword ptr [0x105d29ec] */
  ECX = (r32((uint32_t)(0x105d29ec)));
  /* 105a8399 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a839c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 105a839f jmp 0x105a83a9 */
  goto L_105a83a9;
L_105a83a1:;
  /* 105a83a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a83a4 mov dword ptr [0x105d29e4], eax */
  w32((uint32_t)(0x105d29e4), (EAX));
L_105a83a9:;
  /* 105a83a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a83ac mov edx, dword ptr [0x105d29ec] */
  EDX = (r32((uint32_t)(0x105d29ec)));
  /* 105a83b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105a83b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a83b7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 105a83be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a83c1 mov dword ptr [0x105d29ec], ecx */
  w32((uint32_t)(0x105d29ec), (ECX));
  /* 105a83c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105a83ca:;
  /* 105a83ca pop edi */
  EDI = (pop32());
  /* 105a83cb pop esi */
  ESI = (pop32());
  /* 105a83cc pop ebx */
  EBX = (pop32());
  /* 105a83cd mov esp, ebp */
  ESP = (EBP);
  /* 105a83cf pop ebp */
  EBP = (pop32());
  /* 105a83d0 ret  */
  ESPCHK(0x105a7ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_100083e0 @ 0x105a83e0 (27 bytes, 13 insns) */
void f_105a83e0(void) {
  FTRACE(0x105a83e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a83e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a83e1 mov ebp, esp */
  EBP = (ESP);
  /* 105a83e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a83e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a83e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a83e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a83ec push eax */
  push32((uint32_t)(EAX));
  /* 105a83ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a83f0 push ecx */
  push32((uint32_t)(ECX));
  /* 105a83f1 call 0x105a8400 */
  push32(0x105a83f6u); f_105a8400();
  /* 105a83f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a83f9 pop ebp */
  EBP = (pop32());
  /* 105a83fa ret  */
  ESPCHK(0x105a83e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008400 @ 0x105a8400 (64 bytes, 27 insns) */
void f_105a8400(void) {
  FTRACE(0x105a8400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a8400 push ebp */
  push32((uint32_t)(EBP));
  /* 105a8401 mov ebp, esp */
  EBP = (ESP);
  /* 105a8403 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8404 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a8406 call 0x105abda0 */
  push32(0x105a840bu); f_105abda0();
  /* 105a840b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a840e push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8410 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a8413 push eax */
  push32((uint32_t)(EAX));
  /* 105a8414 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a8417 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8418 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a841b push edx */
  push32((uint32_t)(EDX));
  /* 105a841c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a841f push eax */
  push32((uint32_t)(EAX));
  /* 105a8420 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8423 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8424 call 0x105a7ec0 */
  push32(0x105a8429u); f_105a7ec0();
  /* 105a8429 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a842c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a842f push 9 */
  push32((uint32_t)(0x9u));
  /* 105a8431 call 0x105abe40 */
  push32(0x105a8436u); f_105abe40();
  /* 105a8436 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8439 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a843c mov esp, ebp */
  ESP = (EBP);
  /* 105a843e pop ebp */
  EBP = (pop32());
  /* 105a843f ret  */
  ESPCHK(0x105a8400u, _esp0);
  ESP += 4; return;
}

/* FUN_10008440 @ 0x105a8440 (19 bytes, 9 insns) */
void f_105a8440(void) {
  FTRACE(0x105a8440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a8440 push ebp */
  push32((uint32_t)(EBP));
  /* 105a8441 mov ebp, esp */
  EBP = (ESP);
  /* 105a8443 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a8445 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8448 push eax */
  push32((uint32_t)(EAX));
  /* 105a8449 call 0x105a8480 */
  push32(0x105a844eu); f_105a8480();
  /* 105a844e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8451 pop ebp */
  EBP = (pop32());
  /* 105a8452 ret  */
  ESPCHK(0x105a8440u, _esp0);
  ESP += 4; return;
}

/* FUN_10008460 @ 0x105a8460 (19 bytes, 9 insns) */
void f_105a8460(void) {
  FTRACE(0x105a8460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a8460 push ebp */
  push32((uint32_t)(EBP));
  /* 105a8461 mov ebp, esp */
  EBP = (ESP);
  /* 105a8463 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a8465 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8468 push eax */
  push32((uint32_t)(EAX));
  /* 105a8469 call 0x105a84b0 */
  push32(0x105a846eu); f_105a84b0();
  /* 105a846e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8471 pop ebp */
  EBP = (pop32());
  /* 105a8472 ret  */
  ESPCHK(0x105a8460u, _esp0);
  ESP += 4; return;
}

/* FUN_10008480 @ 0x105a8480 (41 bytes, 16 insns) */
void f_105a8480(void) {
  FTRACE(0x105a8480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a8480 push ebp */
  push32((uint32_t)(EBP));
  /* 105a8481 mov ebp, esp */
  EBP = (ESP);
  /* 105a8483 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a8485 call 0x105abda0 */
  push32(0x105a848au); f_105abda0();
  /* 105a848a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a848d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a8490 push eax */
  push32((uint32_t)(EAX));
  /* 105a8491 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8494 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8495 call 0x105a84b0 */
  push32(0x105a849au); f_105a84b0();
  /* 105a849a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a849d push 9 */
  push32((uint32_t)(0x9u));
  /* 105a849f call 0x105abe40 */
  push32(0x105a84a4u); f_105abe40();
  /* 105a84a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a84a7 pop ebp */
  EBP = (pop32());
  /* 105a84a8 ret  */
  ESPCHK(0x105a8480u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b0 @ 0x105a84b0 (1004 bytes, 342 insns) */
void f_105a84b0(void) {
  FTRACE(0x105a84b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a84b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a84b1 mov ebp, esp */
  EBP = (ESP);
  /* 105a84b3 push ecx */
  push32((uint32_t)(ECX));
  /* 105a84b4 push ebx */
  push32((uint32_t)(EBX));
  /* 105a84b5 push esi */
  push32((uint32_t)(ESI));
  /* 105a84b6 push edi */
  push32((uint32_t)(EDI));
  /* 105a84b7 mov eax, dword ptr [0x105d0a8c] */
  EAX = (r32((uint32_t)(0x105d0a8c)));
  /* 105a84bc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105a84bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a84c1 je 0x105a84f3 */
  if (C.zf) goto L_105a84f3;
L_105a84c3:;
  /* 105a84c3 call 0x105a8b90 */
  push32(0x105a84c8u); f_105a8b90();
  /* 105a84c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a84ca jne 0x105a84ed */
  if (!C.zf) goto L_105a84ed;
  /* 105a84cc push 0x105ce190 */
  push32((uint32_t)(0x105ce190u));
  /* 105a84d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a84d3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 105a84d8 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a84dd push 2 */
  push32((uint32_t)(0x2u));
  /* 105a84df call 0x105a5990 */
  push32(0x105a84e4u); f_105a5990();
  /* 105a84e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a84e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a84ea jne 0x105a84ed */
  if (!C.zf) goto L_105a84ed;
  /* 105a84ec int3  */
  x86_unimpl("int3 @ 0x105a84ec");
L_105a84ed:;
  /* 105a84ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a84ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a84f1 jne 0x105a84c3 */
  if (!C.zf) goto L_105a84c3;
L_105a84f3:;
  /* 105a84f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a84f7 jne 0x105a84fe */
  if (!C.zf) goto L_105a84fe;
  /* 105a84f9 jmp 0x105a8895 */
  goto L_105a8895;
L_105a84fe:;
  /* 105a84fe push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8500 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8502 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8504 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a8507 push edx */
  push32((uint32_t)(EDX));
  /* 105a8508 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a850a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a850d push eax */
  push32((uint32_t)(EAX));
  /* 105a850e push 3 */
  push32((uint32_t)(0x3u));
  /* 105a8510 call dword ptr [0x105d1150] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d1150))), 0x105a8516u);
  /* 105a8516 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a851b jne 0x105a8548 */
  if (!C.zf) goto L_105a8548;
L_105a851d:;
  /* 105a851d push 0x105ce454 */
  push32((uint32_t)(0x105ce454u));
  /* 105a8522 push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a8527 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8529 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a852b push 0 */
  push32((uint32_t)(0x0u));
  /* 105a852d push 0 */
  push32((uint32_t)(0x0u));
  /* 105a852f call 0x105a5990 */
  push32(0x105a8534u); f_105a5990();
  /* 105a8534 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8537 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a853a jne 0x105a853d */
  if (!C.zf) goto L_105a853d;
  /* 105a853c int3  */
  x86_unimpl("int3 @ 0x105a853c");
L_105a853d:;
  /* 105a853d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a853f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a8541 jne 0x105a851d */
  if (!C.zf) goto L_105a851d;
  /* 105a8543 jmp 0x105a8895 */
  goto L_105a8895;
L_105a8548:;
  /* 105a8548 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a854b push edx */
  push32((uint32_t)(EDX));
  /* 105a854c call 0x105a8ff0 */
  push32(0x105a8551u); f_105a8ff0();
  /* 105a8551 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8556 jne 0x105a8579 */
  if (!C.zf) goto L_105a8579;
  /* 105a8558 push 0x105ce294 */
  push32((uint32_t)(0x105ce294u));
  /* 105a855d push 0 */
  push32((uint32_t)(0x0u));
  /* 105a855f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 105a8564 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a8569 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a856b call 0x105a5990 */
  push32(0x105a8570u); f_105a5990();
  /* 105a8570 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8573 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8576 jne 0x105a8579 */
  if (!C.zf) goto L_105a8579;
  /* 105a8578 int3  */
  x86_unimpl("int3 @ 0x105a8578");
L_105a8579:;
  /* 105a8579 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a857b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a857d jne 0x105a8548 */
  if (!C.zf) goto L_105a8548;
  /* 105a857f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8582 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a8585 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105a8588:;
  /* 105a8588 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a858b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a858e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a8593 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8596 je 0x105a85db */
  if (C.zf) goto L_105a85db;
  /* 105a8598 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a859b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a859f je 0x105a85db */
  if (C.zf) goto L_105a85db;
  /* 105a85a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a85a4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a85a7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a85ac cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a85af je 0x105a85db */
  if (C.zf) goto L_105a85db;
  /* 105a85b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a85b4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a85b8 je 0x105a85db */
  if (C.zf) goto L_105a85db;
  /* 105a85ba push 0x105ce42c */
  push32((uint32_t)(0x105ce42cu));
  /* 105a85bf push 0 */
  push32((uint32_t)(0x0u));
  /* 105a85c1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 105a85c6 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a85cb push 2 */
  push32((uint32_t)(0x2u));
  /* 105a85cd call 0x105a5990 */
  push32(0x105a85d2u); f_105a5990();
  /* 105a85d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a85d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a85d8 jne 0x105a85db */
  if (!C.zf) goto L_105a85db;
  /* 105a85da int3  */
  x86_unimpl("int3 @ 0x105a85da");
L_105a85db:;
  /* 105a85db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a85dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a85df jne 0x105a8588 */
  if (!C.zf) goto L_105a8588;
  /* 105a85e1 mov eax, dword ptr [0x105d0a8c] */
  EAX = (r32((uint32_t)(0x105d0a8c)));
  /* 105a85e6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105a85e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a85eb jne 0x105a86b6 */
  if (!C.zf) goto L_105a86b6;
  /* 105a85f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 105a85f3 mov cl, byte ptr [0x105d0a98] */
  CL = (r8((uint32_t)(0x105d0a98)));
  /* 105a85f9 push ecx */
  push32((uint32_t)(ECX));
  /* 105a85fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a85fd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8600 push edx */
  push32((uint32_t)(EDX));
  /* 105a8601 call 0x105a8b00 */
  push32(0x105a8606u); f_105a8b00();
  /* 105a8606 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8609 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a860b jne 0x105a8650 */
  if (!C.zf) goto L_105a8650;
L_105a860d:;
  /* 105a860d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8610 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8613 push eax */
  push32((uint32_t)(EAX));
  /* 105a8614 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8617 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 105a861a push edx */
  push32((uint32_t)(EDX));
  /* 105a861b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a861e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105a8621 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a8627 mov edx, dword ptr [ecx*4 + 0x105d0a9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x105d0a9c)));
  /* 105a862e push edx */
  push32((uint32_t)(EDX));
  /* 105a862f push 0x105ce400 */
  push32((uint32_t)(0x105ce400u));
  /* 105a8634 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8636 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8638 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a863a push 1 */
  push32((uint32_t)(0x1u));
  /* 105a863c call 0x105a5990 */
  push32(0x105a8641u); f_105a5990();
  /* 105a8641 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8644 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8647 jne 0x105a864a */
  if (!C.zf) goto L_105a864a;
  /* 105a8649 int3  */
  x86_unimpl("int3 @ 0x105a8649");
L_105a864a:;
  /* 105a864a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a864c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a864e jne 0x105a860d */
  if (!C.zf) goto L_105a860d;
L_105a8650:;
  /* 105a8650 push 4 */
  push32((uint32_t)(0x4u));
  /* 105a8652 mov cl, byte ptr [0x105d0a98] */
  CL = (r8((uint32_t)(0x105d0a98)));
  /* 105a8658 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8659 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a865c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105a865f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8662 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 105a8666 push edx */
  push32((uint32_t)(EDX));
  /* 105a8667 call 0x105a8b00 */
  push32(0x105a866cu); f_105a8b00();
  /* 105a866c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a866f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8671 jne 0x105a86b6 */
  if (!C.zf) goto L_105a86b6;
L_105a8673:;
  /* 105a8673 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8676 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8679 push eax */
  push32((uint32_t)(EAX));
  /* 105a867a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a867d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 105a8680 push edx */
  push32((uint32_t)(EDX));
  /* 105a8681 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8684 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105a8687 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a868d mov edx, dword ptr [ecx*4 + 0x105d0a9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x105d0a9c)));
  /* 105a8694 push edx */
  push32((uint32_t)(EDX));
  /* 105a8695 push 0x105ce3d4 */
  push32((uint32_t)(0x105ce3d4u));
  /* 105a869a push 0 */
  push32((uint32_t)(0x0u));
  /* 105a869c push 0 */
  push32((uint32_t)(0x0u));
  /* 105a869e push 0 */
  push32((uint32_t)(0x0u));
  /* 105a86a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a86a2 call 0x105a5990 */
  push32(0x105a86a7u); f_105a5990();
  /* 105a86a7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a86aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a86ad jne 0x105a86b0 */
  if (!C.zf) goto L_105a86b0;
  /* 105a86af int3  */
  x86_unimpl("int3 @ 0x105a86af");
L_105a86b0:;
  /* 105a86b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a86b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a86b4 jne 0x105a8673 */
  if (!C.zf) goto L_105a8673;
L_105a86b6:;
  /* 105a86b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a86b9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a86bd jne 0x105a872b */
  if (!C.zf) goto L_105a872b;
L_105a86bf:;
  /* 105a86bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a86c2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a86c9 jne 0x105a86d4 */
  if (!C.zf) goto L_105a86d4;
  /* 105a86cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a86ce cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a86d2 je 0x105a86f5 */
  if (C.zf) goto L_105a86f5;
L_105a86d4:;
  /* 105a86d4 push 0x105ce394 */
  push32((uint32_t)(0x105ce394u));
  /* 105a86d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a86db push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 105a86e0 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a86e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a86e7 call 0x105a5990 */
  push32(0x105a86ecu); f_105a5990();
  /* 105a86ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a86ef cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a86f2 jne 0x105a86f5 */
  if (!C.zf) goto L_105a86f5;
  /* 105a86f4 int3  */
  x86_unimpl("int3 @ 0x105a86f4");
L_105a86f5:;
  /* 105a86f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a86f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a86f9 jne 0x105a86bf */
  if (!C.zf) goto L_105a86bf;
  /* 105a86fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a86fe mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105a8701 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8704 push eax */
  push32((uint32_t)(EAX));
  /* 105a8705 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a8707 mov cl, byte ptr [0x105d0a99] */
  CL = (r8((uint32_t)(0x105d0a99)));
  /* 105a870d push ecx */
  push32((uint32_t)(ECX));
  /* 105a870e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8711 push edx */
  push32((uint32_t)(EDX));
  /* 105a8712 call 0x105ac110 */
  push32(0x105a8717u); f_105ac110();
  /* 105a8717 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a871a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a871d push eax */
  push32((uint32_t)(EAX));
  /* 105a871e call 0x105ac510 */
  push32(0x105a8723u); f_105ac510();
  /* 105a8723 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8726 jmp 0x105a8895 */
  goto L_105a8895;
L_105a872b:;
  /* 105a872b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a872e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8732 jne 0x105a8741 */
  if (!C.zf) goto L_105a8741;
  /* 105a8734 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8738 jne 0x105a8741 */
  if (!C.zf) goto L_105a8741;
  /* 105a873a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_105a8741:;
  /* 105a8741 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8744 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a8747 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a874a je 0x105a876d */
  if (C.zf) goto L_105a876d;
  /* 105a874c push 0x105ce374 */
  push32((uint32_t)(0x105ce374u));
  /* 105a8751 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8753 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 105a8758 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a875d push 2 */
  push32((uint32_t)(0x2u));
  /* 105a875f call 0x105a5990 */
  push32(0x105a8764u); f_105a5990();
  /* 105a8764 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8767 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a876a jne 0x105a876d */
  if (!C.zf) goto L_105a876d;
  /* 105a876c int3  */
  x86_unimpl("int3 @ 0x105a876c");
L_105a876d:;
  /* 105a876d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a876f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a8771 jne 0x105a8741 */
  if (!C.zf) goto L_105a8741;
  /* 105a8773 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8776 mov eax, dword ptr [0x105d29f0] */
  EAX = (r32((uint32_t)(0x105d29f0)));
  /* 105a877b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a877e mov dword ptr [0x105d29f0], eax */
  w32((uint32_t)(0x105d29f0), (EAX));
  /* 105a8783 mov ecx, dword ptr [0x105d0a8c] */
  ECX = (r32((uint32_t)(0x105d0a8c)));
  /* 105a8789 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 105a878c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a878e jne 0x105a886c */
  if (!C.zf) goto L_105a886c;
  /* 105a8794 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8797 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a879a je 0x105a87ac */
  if (C.zf) goto L_105a87ac;
  /* 105a879c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a879f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105a87a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a87a4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105a87a7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 105a87aa jmp 0x105a87ea */
  goto L_105a87ea;
L_105a87ac:;
  /* 105a87ac mov ecx, dword ptr [0x105d29e4] */
  ECX = (r32((uint32_t)(0x105d29e4)));
  /* 105a87b2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a87b5 je 0x105a87d8 */
  if (C.zf) goto L_105a87d8;
  /* 105a87b7 push 0x105ce35c */
  push32((uint32_t)(0x105ce35cu));
  /* 105a87bc push 0 */
  push32((uint32_t)(0x0u));
  /* 105a87be push 0x42a */
  push32((uint32_t)(0x42au));
  /* 105a87c3 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a87c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a87ca call 0x105a5990 */
  push32(0x105a87cfu); f_105a5990();
  /* 105a87cf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a87d2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a87d5 jne 0x105a87d8 */
  if (!C.zf) goto L_105a87d8;
  /* 105a87d7 int3  */
  x86_unimpl("int3 @ 0x105a87d7");
L_105a87d8:;
  /* 105a87d8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a87da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a87dc jne 0x105a87ac */
  if (!C.zf) goto L_105a87ac;
  /* 105a87de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a87e1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105a87e4 mov dword ptr [0x105d29e4], ecx */
  w32((uint32_t)(0x105d29e4), (ECX));
L_105a87ea:;
  /* 105a87ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a87ed cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a87f1 je 0x105a8802 */
  if (C.zf) goto L_105a8802;
  /* 105a87f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a87f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105a87f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a87fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105a87fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105a8800 jmp 0x105a883f */
  goto L_105a883f;
L_105a8802:;
  /* 105a8802 mov ecx, dword ptr [0x105d29ec] */
  ECX = (r32((uint32_t)(0x105d29ec)));
  /* 105a8808 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a880b je 0x105a882e */
  if (C.zf) goto L_105a882e;
  /* 105a880d push 0x105ce344 */
  push32((uint32_t)(0x105ce344u));
  /* 105a8812 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8814 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 105a8819 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a881e push 2 */
  push32((uint32_t)(0x2u));
  /* 105a8820 call 0x105a5990 */
  push32(0x105a8825u); f_105a5990();
  /* 105a8825 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8828 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a882b jne 0x105a882e */
  if (!C.zf) goto L_105a882e;
  /* 105a882d int3  */
  x86_unimpl("int3 @ 0x105a882d");
L_105a882e:;
  /* 105a882e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a8830 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a8832 jne 0x105a8802 */
  if (!C.zf) goto L_105a8802;
  /* 105a8834 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8837 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105a8839 mov dword ptr [0x105d29ec], ecx */
  w32((uint32_t)(0x105d29ec), (ECX));
L_105a883f:;
  /* 105a883f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8842 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105a8845 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8848 push eax */
  push32((uint32_t)(EAX));
  /* 105a8849 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a884b mov cl, byte ptr [0x105d0a99] */
  CL = (r8((uint32_t)(0x105d0a99)));
  /* 105a8851 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8852 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8855 push edx */
  push32((uint32_t)(EDX));
  /* 105a8856 call 0x105ac110 */
  push32(0x105a885bu); f_105ac110();
  /* 105a885b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a885e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8861 push eax */
  push32((uint32_t)(EAX));
  /* 105a8862 call 0x105ac510 */
  push32(0x105a8867u); f_105ac510();
  /* 105a8867 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a886a jmp 0x105a8895 */
  goto L_105a8895;
L_105a886c:;
  /* 105a886c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a886f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 105a8876 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8879 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105a887c push eax */
  push32((uint32_t)(EAX));
  /* 105a887d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a887f mov cl, byte ptr [0x105d0a99] */
  CL = (r8((uint32_t)(0x105d0a99)));
  /* 105a8885 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8886 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8889 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a888c push edx */
  push32((uint32_t)(EDX));
  /* 105a888d call 0x105ac110 */
  push32(0x105a8892u); f_105ac110();
  /* 105a8892 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a8895:;
  /* 105a8895 pop edi */
  EDI = (pop32());
  /* 105a8896 pop esi */
  ESI = (pop32());
  /* 105a8897 pop ebx */
  EBX = (pop32());
  /* 105a8898 mov esp, ebp */
  ESP = (EBP);
  /* 105a889a pop ebp */
  EBP = (pop32());
  /* 105a889b ret  */
  ESPCHK(0x105a84b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088a0 @ 0x105a88a0 (19 bytes, 9 insns) */
void f_105a88a0(void) {
  FTRACE(0x105a88a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a88a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a88a1 mov ebp, esp */
  EBP = (ESP);
  /* 105a88a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a88a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a88a8 push eax */
  push32((uint32_t)(EAX));
  /* 105a88a9 call 0x105a88c0 */
  push32(0x105a88aeu); f_105a88c0();
  /* 105a88ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a88b1 pop ebp */
  EBP = (pop32());
  /* 105a88b2 ret  */
  ESPCHK(0x105a88a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088c0 @ 0x105a88c0 (342 bytes, 119 insns) */
void f_105a88c0(void) {
  FTRACE(0x105a88c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a88c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a88c1 mov ebp, esp */
  EBP = (ESP);
  /* 105a88c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a88c6 push ebx */
  push32((uint32_t)(EBX));
  /* 105a88c7 push esi */
  push32((uint32_t)(ESI));
  /* 105a88c8 push edi */
  push32((uint32_t)(EDI));
  /* 105a88c9 mov eax, dword ptr [0x105d0a8c] */
  EAX = (r32((uint32_t)(0x105d0a8c)));
  /* 105a88ce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105a88d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a88d3 je 0x105a8905 */
  if (C.zf) goto L_105a8905;
L_105a88d5:;
  /* 105a88d5 call 0x105a8b90 */
  push32(0x105a88dau); f_105a8b90();
  /* 105a88da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a88dc jne 0x105a88ff */
  if (!C.zf) goto L_105a88ff;
  /* 105a88de push 0x105ce190 */
  push32((uint32_t)(0x105ce190u));
  /* 105a88e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a88e5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 105a88ea push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a88ef push 2 */
  push32((uint32_t)(0x2u));
  /* 105a88f1 call 0x105a5990 */
  push32(0x105a88f6u); f_105a5990();
  /* 105a88f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a88f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a88fc jne 0x105a88ff */
  if (!C.zf) goto L_105a88ff;
  /* 105a88fe int3  */
  x86_unimpl("int3 @ 0x105a88fe");
L_105a88ff:;
  /* 105a88ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a8901 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a8903 jne 0x105a88d5 */
  if (!C.zf) goto L_105a88d5;
L_105a8905:;
  /* 105a8905 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a8907 call 0x105abda0 */
  push32(0x105a890cu); f_105abda0();
  /* 105a890c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a890f:;
  /* 105a890f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8912 push edx */
  push32((uint32_t)(EDX));
  /* 105a8913 call 0x105a8ff0 */
  push32(0x105a8918u); f_105a8ff0();
  /* 105a8918 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a891b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a891d jne 0x105a8940 */
  if (!C.zf) goto L_105a8940;
  /* 105a891f push 0x105ce294 */
  push32((uint32_t)(0x105ce294u));
  /* 105a8924 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8926 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 105a892b push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a8930 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a8932 call 0x105a5990 */
  push32(0x105a8937u); f_105a5990();
  /* 105a8937 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a893a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a893d jne 0x105a8940 */
  if (!C.zf) goto L_105a8940;
  /* 105a893f int3  */
  x86_unimpl("int3 @ 0x105a893f");
L_105a8940:;
  /* 105a8940 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a8942 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8944 jne 0x105a890f */
  if (!C.zf) goto L_105a890f;
  /* 105a8946 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8949 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a894c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105a894f:;
  /* 105a894f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8952 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a8955 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a895a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a895d je 0x105a89a2 */
  if (C.zf) goto L_105a89a2;
  /* 105a895f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8962 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8966 je 0x105a89a2 */
  if (C.zf) goto L_105a89a2;
  /* 105a8968 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a896b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a896e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a8973 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8976 je 0x105a89a2 */
  if (C.zf) goto L_105a89a2;
  /* 105a8978 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a897b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a897f je 0x105a89a2 */
  if (C.zf) goto L_105a89a2;
  /* 105a8981 push 0x105ce42c */
  push32((uint32_t)(0x105ce42cu));
  /* 105a8986 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8988 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 105a898d push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a8992 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a8994 call 0x105a5990 */
  push32(0x105a8999u); f_105a5990();
  /* 105a8999 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a899c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a899f jne 0x105a89a2 */
  if (!C.zf) goto L_105a89a2;
  /* 105a89a1 int3  */
  x86_unimpl("int3 @ 0x105a89a1");
L_105a89a2:;
  /* 105a89a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a89a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a89a6 jne 0x105a894f */
  if (!C.zf) goto L_105a894f;
  /* 105a89a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a89ab cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a89af jne 0x105a89be */
  if (!C.zf) goto L_105a89be;
  /* 105a89b1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a89b5 jne 0x105a89be */
  if (!C.zf) goto L_105a89be;
  /* 105a89b7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_105a89be:;
  /* 105a89be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a89c1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a89c5 je 0x105a89f9 */
  if (C.zf) goto L_105a89f9;
L_105a89c7:;
  /* 105a89c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a89ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a89cd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a89d0 je 0x105a89f3 */
  if (C.zf) goto L_105a89f3;
  /* 105a89d2 push 0x105ce374 */
  push32((uint32_t)(0x105ce374u));
  /* 105a89d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a89d9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 105a89de push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a89e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a89e5 call 0x105a5990 */
  push32(0x105a89eau); f_105a5990();
  /* 105a89ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a89ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a89f0 jne 0x105a89f3 */
  if (!C.zf) goto L_105a89f3;
  /* 105a89f2 int3  */
  x86_unimpl("int3 @ 0x105a89f2");
L_105a89f3:;
  /* 105a89f3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a89f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a89f7 jne 0x105a89c7 */
  if (!C.zf) goto L_105a89c7;
L_105a89f9:;
  /* 105a89f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a89fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105a89ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a8a02 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a8a04 call 0x105abe40 */
  push32(0x105a8a09u); f_105abe40();
  /* 105a8a09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8a0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8a0f pop edi */
  EDI = (pop32());
  /* 105a8a10 pop esi */
  ESI = (pop32());
  /* 105a8a11 pop ebx */
  EBX = (pop32());
  /* 105a8a12 mov esp, ebp */
  ESP = (EBP);
  /* 105a8a14 pop ebp */
  EBP = (pop32());
  /* 105a8a15 ret  */
  ESPCHK(0x105a88c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a20 @ 0x105a8a20 (28 bytes, 11 insns) */
void f_105a8a20(void) {
  FTRACE(0x105a8a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a8a20 push ebp */
  push32((uint32_t)(EBP));
  /* 105a8a21 mov ebp, esp */
  EBP = (ESP);
  /* 105a8a23 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8a24 mov eax, dword ptr [0x105d0a94] */
  EAX = (r32((uint32_t)(0x105d0a94)));
  /* 105a8a29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a8a2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8a2f mov dword ptr [0x105d0a94], ecx */
  w32((uint32_t)(0x105d0a94), (ECX));
  /* 105a8a35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8a38 mov esp, ebp */
  ESP = (EBP);
  /* 105a8a3a pop ebp */
  EBP = (pop32());
  /* 105a8a3b ret  */
  ESPCHK(0x105a8a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a40 @ 0x105a8a40 (157 bytes, 59 insns) */
void f_105a8a40(void) {
  FTRACE(0x105a8a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a8a40 push ebp */
  push32((uint32_t)(EBP));
  /* 105a8a41 mov ebp, esp */
  EBP = (ESP);
  /* 105a8a43 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8a44 push ebx */
  push32((uint32_t)(EBX));
  /* 105a8a45 push esi */
  push32((uint32_t)(ESI));
  /* 105a8a46 push edi */
  push32((uint32_t)(EDI));
  /* 105a8a47 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a8a49 call 0x105abda0 */
  push32(0x105a8a4eu); f_105abda0();
  /* 105a8a4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8a51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8a54 push eax */
  push32((uint32_t)(EAX));
  /* 105a8a55 call 0x105a8ff0 */
  push32(0x105a8a5au); f_105a8ff0();
  /* 105a8a5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8a5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8a5f je 0x105a8acc */
  if (C.zf) goto L_105a8acc;
  /* 105a8a61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8a64 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a8a67 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105a8a6a:;
  /* 105a8a6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8a6d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a8a70 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a8a75 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8a78 je 0x105a8abd */
  if (C.zf) goto L_105a8abd;
  /* 105a8a7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8a7d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8a81 je 0x105a8abd */
  if (C.zf) goto L_105a8abd;
  /* 105a8a83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8a86 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a8a89 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a8a8e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8a91 je 0x105a8abd */
  if (C.zf) goto L_105a8abd;
  /* 105a8a93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8a96 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8a9a je 0x105a8abd */
  if (C.zf) goto L_105a8abd;
  /* 105a8a9c push 0x105ce42c */
  push32((uint32_t)(0x105ce42cu));
  /* 105a8aa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8aa3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 105a8aa8 push 0x105ce184 */
  push32((uint32_t)(0x105ce184u));
  /* 105a8aad push 2 */
  push32((uint32_t)(0x2u));
  /* 105a8aaf call 0x105a5990 */
  push32(0x105a8ab4u); f_105a5990();
  /* 105a8ab4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8ab7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8aba jne 0x105a8abd */
  if (!C.zf) goto L_105a8abd;
  /* 105a8abc int3  */
  x86_unimpl("int3 @ 0x105a8abc");
L_105a8abd:;
  /* 105a8abd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a8abf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a8ac1 jne 0x105a8a6a */
  if (!C.zf) goto L_105a8a6a;
  /* 105a8ac3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8ac6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a8ac9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_105a8acc:;
  /* 105a8acc push 9 */
  push32((uint32_t)(0x9u));
  /* 105a8ace call 0x105abe40 */
  push32(0x105a8ad3u); f_105abe40();
  /* 105a8ad3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8ad6 pop edi */
  EDI = (pop32());
  /* 105a8ad7 pop esi */
  ESI = (pop32());
  /* 105a8ad8 pop ebx */
  EBX = (pop32());
  /* 105a8ad9 mov esp, ebp */
  ESP = (EBP);
  /* 105a8adb pop ebp */
  EBP = (pop32());
  /* 105a8adc ret  */
  ESPCHK(0x105a8a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ae0 @ 0x105a8ae0 (28 bytes, 11 insns) */
void f_105a8ae0(void) {
  FTRACE(0x105a8ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a8ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a8ae1 mov ebp, esp */
  EBP = (ESP);
  /* 105a8ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8ae4 mov eax, dword ptr [0x105d1150] */
  EAX = (r32((uint32_t)(0x105d1150)));
  /* 105a8ae9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a8aec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8aef mov dword ptr [0x105d1150], ecx */
  w32((uint32_t)(0x105d1150), (ECX));
  /* 105a8af5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8af8 mov esp, ebp */
  ESP = (EBP);
  /* 105a8afa pop ebp */
  EBP = (pop32());
  /* 105a8afb ret  */
  ESPCHK(0x105a8ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b00 @ 0x105a8b00 (136 bytes, 55 insns) */
void f_105a8b00(void) {
  FTRACE(0x105a8b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a8b00 push ebp */
  push32((uint32_t)(EBP));
  /* 105a8b01 mov ebp, esp */
  EBP = (ESP);
  /* 105a8b03 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8b04 push ebx */
  push32((uint32_t)(EBX));
  /* 105a8b05 push esi */
  push32((uint32_t)(ESI));
  /* 105a8b06 push edi */
  push32((uint32_t)(EDI));
  /* 105a8b07 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_105a8b0e:;
  /* 105a8b0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a8b11 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a8b14 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a8b17 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 105a8b1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8b1c je 0x105a8b7e */
  if (C.zf) goto L_105a8b7e;
  /* 105a8b1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8b21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a8b23 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105a8b25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a8b28 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a8b2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8b31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8b34 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105a8b37 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8b39 je 0x105a8b7c */
  if (C.zf) goto L_105a8b7c;
L_105a8b3b:;
  /* 105a8b3b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a8b3e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a8b43 push eax */
  push32((uint32_t)(EAX));
  /* 105a8b44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8b47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a8b49 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 105a8b4c push edx */
  push32((uint32_t)(EDX));
  /* 105a8b4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8b50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a8b53 push eax */
  push32((uint32_t)(EAX));
  /* 105a8b54 push 0x105ce470 */
  push32((uint32_t)(0x105ce470u));
  /* 105a8b59 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8b5b push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8b61 call 0x105a5990 */
  push32(0x105a8b66u); f_105a5990();
  /* 105a8b66 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8b69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8b6c jne 0x105a8b6f */
  if (!C.zf) goto L_105a8b6f;
  /* 105a8b6e int3  */
  x86_unimpl("int3 @ 0x105a8b6e");
L_105a8b6f:;
  /* 105a8b6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a8b71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a8b73 jne 0x105a8b3b */
  if (!C.zf) goto L_105a8b3b;
  /* 105a8b75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105a8b7c:;
  /* 105a8b7c jmp 0x105a8b0e */
  goto L_105a8b0e;
L_105a8b7e:;
  /* 105a8b7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8b81 pop edi */
  EDI = (pop32());
  /* 105a8b82 pop esi */
  ESI = (pop32());
  /* 105a8b83 pop ebx */
  EBX = (pop32());
  /* 105a8b84 mov esp, ebp */
  ESP = (EBP);
  /* 105a8b86 pop ebp */
  EBP = (pop32());
  /* 105a8b87 ret  */
  ESPCHK(0x105a8b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b90 @ 0x105a8b90 (863 bytes, 299 insns) [1 switch table(s)] */
void f_105a8b90(void) {
  FTRACE(0x105a8b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a8b90 push ebp */
  push32((uint32_t)(EBP));
  /* 105a8b91 mov ebp, esp */
  EBP = (ESP);
  /* 105a8b93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a8b96 push ebx */
  push32((uint32_t)(EBX));
  /* 105a8b97 push esi */
  push32((uint32_t)(ESI));
  /* 105a8b98 push edi */
  push32((uint32_t)(EDI));
  /* 105a8b99 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105a8ba0 mov eax, dword ptr [0x105d0a8c] */
  EAX = (r32((uint32_t)(0x105d0a8c)));
  /* 105a8ba5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 105a8ba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8baa jne 0x105a8bb6 */
  if (!C.zf) goto L_105a8bb6;
  /* 105a8bac mov eax, 1 */
  EAX = (0x1u);
  /* 105a8bb1 jmp 0x105a8ee8 */
  goto L_105a8ee8;
L_105a8bb6:;
  /* 105a8bb6 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a8bb8 call 0x105abda0 */
  push32(0x105a8bbdu); f_105abda0();
  /* 105a8bbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8bc0 call 0x105ac580 */
  push32(0x105a8bc5u); f_105ac580();
  /* 105a8bc5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105a8bc8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8bcc je 0x105a8cd9 */
  if (C.zf) goto L_105a8cd9;
  /* 105a8bd2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8bd6 je 0x105a8cd9 */
  if (C.zf) goto L_105a8cd9;
  /* 105a8bdc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a8bdf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105a8be2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105a8be5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8be8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 105a8beb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8bef ja 0x105a8ca2 */
  if ((!C.cf&&!C.zf)) goto L_105a8ca2;
  /* 105a8bf5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105a8bf8 jmp dword ptr [eax*4 + 0x105a8eef] */
  switch (EAX) {
    case 0: goto L_105a8c7a;
    case 1: goto L_105a8c52;
    case 2: goto L_105a8c2a;
    case 3: goto L_105a8bff;
    default: x86_unimpl("switch@0x105a8bf8 out of table"); return;
  }
L_105a8bff:;
  /* 105a8bff push 0x105ce5c4 */
  push32((uint32_t)(0x105ce5c4u));
  /* 105a8c04 push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a8c09 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c0b push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c11 call 0x105a5990 */
  push32(0x105a8c16u); f_105a5990();
  /* 105a8c16 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8c19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8c1c jne 0x105a8c1f */
  if (!C.zf) goto L_105a8c1f;
  /* 105a8c1e int3  */
  x86_unimpl("int3 @ 0x105a8c1e");
L_105a8c1f:;
  /* 105a8c1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a8c21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a8c23 jne 0x105a8bff */
  if (!C.zf) goto L_105a8bff;
  /* 105a8c25 jmp 0x105a8cc8 */
  goto L_105a8cc8;
L_105a8c2a:;
  /* 105a8c2a push 0x105ce5a0 */
  push32((uint32_t)(0x105ce5a0u));
  /* 105a8c2f push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a8c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c36 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c38 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c3c call 0x105a5990 */
  push32(0x105a8c41u); f_105a5990();
  /* 105a8c41 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8c44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8c47 jne 0x105a8c4a */
  if (!C.zf) goto L_105a8c4a;
  /* 105a8c49 int3  */
  x86_unimpl("int3 @ 0x105a8c49");
L_105a8c4a:;
  /* 105a8c4a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a8c4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a8c4e jne 0x105a8c2a */
  if (!C.zf) goto L_105a8c2a;
  /* 105a8c50 jmp 0x105a8cc8 */
  goto L_105a8cc8;
L_105a8c52:;
  /* 105a8c52 push 0x105ce57c */
  push32((uint32_t)(0x105ce57cu));
  /* 105a8c57 push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a8c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c5e push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c60 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c64 call 0x105a5990 */
  push32(0x105a8c69u); f_105a5990();
  /* 105a8c69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8c6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8c6f jne 0x105a8c72 */
  if (!C.zf) goto L_105a8c72;
  /* 105a8c71 int3  */
  x86_unimpl("int3 @ 0x105a8c71");
L_105a8c72:;
  /* 105a8c72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a8c74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8c76 jne 0x105a8c52 */
  if (!C.zf) goto L_105a8c52;
  /* 105a8c78 jmp 0x105a8cc8 */
  goto L_105a8cc8;
L_105a8c7a:;
  /* 105a8c7a push 0x105ce558 */
  push32((uint32_t)(0x105ce558u));
  /* 105a8c7f push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a8c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8c8c call 0x105a5990 */
  push32(0x105a8c91u); f_105a5990();
  /* 105a8c91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8c94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8c97 jne 0x105a8c9a */
  if (!C.zf) goto L_105a8c9a;
  /* 105a8c99 int3  */
  x86_unimpl("int3 @ 0x105a8c99");
L_105a8c9a:;
  /* 105a8c9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a8c9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a8c9e jne 0x105a8c7a */
  if (!C.zf) goto L_105a8c7a;
  /* 105a8ca0 jmp 0x105a8cc8 */
  goto L_105a8cc8;
L_105a8ca2:;
  /* 105a8ca2 push 0x105ce52c */
  push32((uint32_t)(0x105ce52cu));
  /* 105a8ca7 push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a8cac push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8cae push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8cb4 call 0x105a5990 */
  push32(0x105a8cb9u); f_105a5990();
  /* 105a8cb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8cbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8cbf jne 0x105a8cc2 */
  if (!C.zf) goto L_105a8cc2;
  /* 105a8cc1 int3  */
  x86_unimpl("int3 @ 0x105a8cc1");
L_105a8cc2:;
  /* 105a8cc2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a8cc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a8cc6 jne 0x105a8ca2 */
  if (!C.zf) goto L_105a8ca2;
L_105a8cc8:;
  /* 105a8cc8 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a8cca call 0x105abe40 */
  push32(0x105a8ccfu); f_105abe40();
  /* 105a8ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8cd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a8cd4 jmp 0x105a8ee8 */
  goto L_105a8ee8;
L_105a8cd9:;
  /* 105a8cd9 mov eax, dword ptr [0x105d29ec] */
  EAX = (r32((uint32_t)(0x105d29ec)));
  /* 105a8cde mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105a8ce1 jmp 0x105a8ceb */
  goto L_105a8ceb;
L_105a8ce3:;
  /* 105a8ce3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8ce6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105a8ce8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105a8ceb:;
  /* 105a8ceb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8cef je 0x105a8edb */
  if (C.zf) goto L_105a8edb;
  /* 105a8cf5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 105a8cfc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8cff mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105a8d02 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a8d08 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8d0b je 0x105a8d30 */
  if (C.zf) goto L_105a8d30;
  /* 105a8d0d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8d10 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8d14 je 0x105a8d30 */
  if (C.zf) goto L_105a8d30;
  /* 105a8d16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8d19 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105a8d1c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a8d22 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8d25 je 0x105a8d30 */
  if (C.zf) goto L_105a8d30;
  /* 105a8d27 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8d2a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8d2e jne 0x105a8d48 */
  if (!C.zf) goto L_105a8d48;
L_105a8d30:;
  /* 105a8d30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8d33 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105a8d36 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a8d3c mov edx, dword ptr [ecx*4 + 0x105d0a9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x105d0a9c)));
  /* 105a8d43 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105a8d46 jmp 0x105a8d4f */
  goto L_105a8d4f;
L_105a8d48:;
  /* 105a8d48 mov dword ptr [ebp - 0x14], 0x105ce524 */
  w32((uint32_t)(EBP + -0x14), (0x105ce524u));
L_105a8d4f:;
  /* 105a8d4f push 4 */
  push32((uint32_t)(0x4u));
  /* 105a8d51 mov al, byte ptr [0x105d0a98] */
  AL = (r8((uint32_t)(0x105d0a98)));
  /* 105a8d56 push eax */
  push32((uint32_t)(EAX));
  /* 105a8d57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8d5a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8d5d push ecx */
  push32((uint32_t)(ECX));
  /* 105a8d5e call 0x105a8b00 */
  push32(0x105a8d63u); f_105a8b00();
  /* 105a8d63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8d66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8d68 jne 0x105a8da4 */
  if (!C.zf) goto L_105a8da4;
L_105a8d6a:;
  /* 105a8d6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8d6d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8d70 push edx */
  push32((uint32_t)(EDX));
  /* 105a8d71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8d74 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 105a8d77 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8d78 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105a8d7b push edx */
  push32((uint32_t)(EDX));
  /* 105a8d7c push 0x105ce400 */
  push32((uint32_t)(0x105ce400u));
  /* 105a8d81 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8d89 call 0x105a5990 */
  push32(0x105a8d8eu); f_105a5990();
  /* 105a8d8e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8d91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8d94 jne 0x105a8d97 */
  if (!C.zf) goto L_105a8d97;
  /* 105a8d96 int3  */
  x86_unimpl("int3 @ 0x105a8d96");
L_105a8d97:;
  /* 105a8d97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a8d99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8d9b jne 0x105a8d6a */
  if (!C.zf) goto L_105a8d6a;
  /* 105a8d9d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_105a8da4:;
  /* 105a8da4 push 4 */
  push32((uint32_t)(0x4u));
  /* 105a8da6 mov cl, byte ptr [0x105d0a98] */
  CL = (r8((uint32_t)(0x105d0a98)));
  /* 105a8dac push ecx */
  push32((uint32_t)(ECX));
  /* 105a8dad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8db0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105a8db3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8db6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 105a8dba push edx */
  push32((uint32_t)(EDX));
  /* 105a8dbb call 0x105a8b00 */
  push32(0x105a8dc0u); f_105a8b00();
  /* 105a8dc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8dc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8dc5 jne 0x105a8e01 */
  if (!C.zf) goto L_105a8e01;
L_105a8dc7:;
  /* 105a8dc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8dca add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8dcd push eax */
  push32((uint32_t)(EAX));
  /* 105a8dce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8dd1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 105a8dd4 push edx */
  push32((uint32_t)(EDX));
  /* 105a8dd5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105a8dd8 push eax */
  push32((uint32_t)(EAX));
  /* 105a8dd9 push 0x105ce3d4 */
  push32((uint32_t)(0x105ce3d4u));
  /* 105a8dde push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8de6 call 0x105a5990 */
  push32(0x105a8debu); f_105a5990();
  /* 105a8deb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8dee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8df1 jne 0x105a8df4 */
  if (!C.zf) goto L_105a8df4;
  /* 105a8df3 int3  */
  x86_unimpl("int3 @ 0x105a8df3");
L_105a8df4:;
  /* 105a8df4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a8df6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a8df8 jne 0x105a8dc7 */
  if (!C.zf) goto L_105a8dc7;
  /* 105a8dfa mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_105a8e01:;
  /* 105a8e01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8e04 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8e08 jne 0x105a8e5a */
  if (!C.zf) goto L_105a8e5a;
  /* 105a8e0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8e0d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105a8e10 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8e11 mov dl, byte ptr [0x105d0a99] */
  DL = (r8((uint32_t)(0x105d0a99)));
  /* 105a8e17 push edx */
  push32((uint32_t)(EDX));
  /* 105a8e18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8e1b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8e1e push eax */
  push32((uint32_t)(EAX));
  /* 105a8e1f call 0x105a8b00 */
  push32(0x105a8e24u); f_105a8b00();
  /* 105a8e24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8e27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8e29 jne 0x105a8e5a */
  if (!C.zf) goto L_105a8e5a;
L_105a8e2b:;
  /* 105a8e2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8e2e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8e31 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8e32 push 0x105ce4f8 */
  push32((uint32_t)(0x105ce4f8u));
  /* 105a8e37 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8e39 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8e3b push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8e3f call 0x105a5990 */
  push32(0x105a8e44u); f_105a5990();
  /* 105a8e44 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8e47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8e4a jne 0x105a8e4d */
  if (!C.zf) goto L_105a8e4d;
  /* 105a8e4c int3  */
  x86_unimpl("int3 @ 0x105a8e4c");
L_105a8e4d:;
  /* 105a8e4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a8e4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a8e51 jne 0x105a8e2b */
  if (!C.zf) goto L_105a8e2b;
  /* 105a8e53 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_105a8e5a:;
  /* 105a8e5a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8e5e jne 0x105a8ed6 */
  if (!C.zf) goto L_105a8ed6;
  /* 105a8e60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8e63 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8e67 je 0x105a8e9c */
  if (C.zf) goto L_105a8e9c;
L_105a8e69:;
  /* 105a8e69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8e6c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105a8e6f push edx */
  push32((uint32_t)(EDX));
  /* 105a8e70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8e73 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105a8e76 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8e77 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105a8e7a push edx */
  push32((uint32_t)(EDX));
  /* 105a8e7b push 0x105ce4d8 */
  push32((uint32_t)(0x105ce4d8u));
  /* 105a8e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8e88 call 0x105a5990 */
  push32(0x105a8e8du); f_105a5990();
  /* 105a8e8d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8e90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8e93 jne 0x105a8e96 */
  if (!C.zf) goto L_105a8e96;
  /* 105a8e95 int3  */
  x86_unimpl("int3 @ 0x105a8e95");
L_105a8e96:;
  /* 105a8e96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a8e98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8e9a jne 0x105a8e69 */
  if (!C.zf) goto L_105a8e69;
L_105a8e9c:;
  /* 105a8e9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8e9f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105a8ea2 push edx */
  push32((uint32_t)(EDX));
  /* 105a8ea3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a8ea6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8ea9 push eax */
  push32((uint32_t)(EAX));
  /* 105a8eaa mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105a8ead push ecx */
  push32((uint32_t)(ECX));
  /* 105a8eae push 0x105ce4ac */
  push32((uint32_t)(0x105ce4acu));
  /* 105a8eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8eb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a8ebb call 0x105a5990 */
  push32(0x105a8ec0u); f_105a5990();
  /* 105a8ec0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8ec3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8ec6 jne 0x105a8ec9 */
  if (!C.zf) goto L_105a8ec9;
  /* 105a8ec8 int3  */
  x86_unimpl("int3 @ 0x105a8ec8");
L_105a8ec9:;
  /* 105a8ec9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a8ecb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a8ecd jne 0x105a8e9c */
  if (!C.zf) goto L_105a8e9c;
  /* 105a8ecf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105a8ed6:;
  /* 105a8ed6 jmp 0x105a8ce3 */
  goto L_105a8ce3;
L_105a8edb:;
  /* 105a8edb push 9 */
  push32((uint32_t)(0x9u));
  /* 105a8edd call 0x105abe40 */
  push32(0x105a8ee2u); f_105abe40();
  /* 105a8ee2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8ee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105a8ee8:;
  /* 105a8ee8 pop edi */
  EDI = (pop32());
  /* 105a8ee9 pop esi */
  ESI = (pop32());
  /* 105a8eea pop ebx */
  EBX = (pop32());
  /* 105a8eeb mov esp, ebp */
  ESP = (EBP);
  /* 105a8eed pop ebp */
  EBP = (pop32());
  /* 105a8eee ret  */
  ESPCHK(0x105a8b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f00 @ 0x105a8f00 (34 bytes, 13 insns) */
void f_105a8f00(void) {
  FTRACE(0x105a8f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a8f00 push ebp */
  push32((uint32_t)(EBP));
  /* 105a8f01 mov ebp, esp */
  EBP = (ESP);
  /* 105a8f03 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8f04 mov eax, dword ptr [0x105d0a8c] */
  EAX = (r32((uint32_t)(0x105d0a8c)));
  /* 105a8f09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a8f0c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8f10 je 0x105a8f1b */
  if (C.zf) goto L_105a8f1b;
  /* 105a8f12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8f15 mov dword ptr [0x105d0a8c], ecx */
  w32((uint32_t)(0x105d0a8c), (ECX));
L_105a8f1b:;
  /* 105a8f1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8f1e mov esp, ebp */
  ESP = (EBP);
  /* 105a8f20 pop ebp */
  EBP = (pop32());
  /* 105a8f21 ret  */
  ESPCHK(0x105a8f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f30 @ 0x105a8f30 (103 bytes, 38 insns) */
void f_105a8f30(void) {
  FTRACE(0x105a8f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a8f30 push ebp */
  push32((uint32_t)(EBP));
  /* 105a8f31 mov ebp, esp */
  EBP = (ESP);
  /* 105a8f33 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8f34 mov eax, dword ptr [0x105d0a8c] */
  EAX = (r32((uint32_t)(0x105d0a8c)));
  /* 105a8f39 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 105a8f3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8f3e jne 0x105a8f42 */
  if (!C.zf) goto L_105a8f42;
  /* 105a8f40 jmp 0x105a8f93 */
  goto L_105a8f93;
L_105a8f42:;
  /* 105a8f42 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a8f44 call 0x105abda0 */
  push32(0x105a8f49u); f_105abda0();
  /* 105a8f49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8f4c mov ecx, dword ptr [0x105d29ec] */
  ECX = (r32((uint32_t)(0x105d29ec)));
  /* 105a8f52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105a8f55 jmp 0x105a8f5f */
  goto L_105a8f5f;
L_105a8f57:;
  /* 105a8f57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8f5a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105a8f5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105a8f5f:;
  /* 105a8f5f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8f63 je 0x105a8f89 */
  if (C.zf) goto L_105a8f89;
  /* 105a8f65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8f68 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105a8f6b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105a8f71 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8f74 jne 0x105a8f87 */
  if (!C.zf) goto L_105a8f87;
  /* 105a8f76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a8f79 push eax */
  push32((uint32_t)(EAX));
  /* 105a8f7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8f7d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a8f80 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8f81 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x105a8f84u);
  /* 105a8f84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a8f87:;
  /* 105a8f87 jmp 0x105a8f57 */
  goto L_105a8f57;
L_105a8f89:;
  /* 105a8f89 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a8f8b call 0x105abe40 */
  push32(0x105a8f90u); f_105abe40();
  /* 105a8f90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a8f93:;
  /* 105a8f93 mov esp, ebp */
  ESP = (EBP);
  /* 105a8f95 pop ebp */
  EBP = (pop32());
  /* 105a8f96 ret  */
  ESPCHK(0x105a8f30u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x105a8fa0 (75 bytes, 28 insns) */
void f_105a8fa0(void) {
  FTRACE(0x105a8fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a8fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a8fa1 mov ebp, esp */
  EBP = (ESP);
  /* 105a8fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8fa4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8fa8 je 0x105a8fdd */
  if (C.zf) goto L_105a8fdd;
  /* 105a8faa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a8fad push eax */
  push32((uint32_t)(EAX));
  /* 105a8fae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8fb1 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8fb2 call dword ptr [0x105d526c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d526c))), 0x105a8fb8u);
  /* 105a8fb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8fba jne 0x105a8fdd */
  if (!C.zf) goto L_105a8fdd;
  /* 105a8fbc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8fc0 je 0x105a8fd4 */
  if (C.zf) goto L_105a8fd4;
  /* 105a8fc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a8fc5 push edx */
  push32((uint32_t)(EDX));
  /* 105a8fc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a8fc9 push eax */
  push32((uint32_t)(EAX));
  /* 105a8fca call dword ptr [0x105d5268] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5268))), 0x105a8fd0u);
  /* 105a8fd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a8fd2 jne 0x105a8fdd */
  if (!C.zf) goto L_105a8fdd;
L_105a8fd4:;
  /* 105a8fd4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105a8fdb jmp 0x105a8fe4 */
  goto L_105a8fe4;
L_105a8fdd:;
  /* 105a8fdd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105a8fe4:;
  /* 105a8fe4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a8fe7 mov esp, ebp */
  ESP = (EBP);
  /* 105a8fe9 pop ebp */
  EBP = (pop32());
  /* 105a8fea ret  */
  ESPCHK(0x105a8fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ff0 @ 0x105a8ff0 (134 bytes, 50 insns) */
void f_105a8ff0(void) {
  FTRACE(0x105a8ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a8ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a8ff1 mov ebp, esp */
  EBP = (ESP);
  /* 105a8ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 105a8ff4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a8ff8 jne 0x105a8ffe */
  if (!C.zf) goto L_105a8ffe;
  /* 105a8ffa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a8ffc jmp 0x105a9072 */
  goto L_105a9072;
L_105a8ffe:;
  /* 105a8ffe push 1 */
  push32((uint32_t)(0x1u));
  /* 105a9000 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 105a9002 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9005 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9008 push eax */
  push32((uint32_t)(EAX));
  /* 105a9009 call 0x105a8fa0 */
  push32(0x105a900eu); f_105a8fa0();
  /* 105a900e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a9013 jne 0x105a9019 */
  if (!C.zf) goto L_105a9019;
  /* 105a9015 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a9017 jmp 0x105a9072 */
  goto L_105a9072;
L_105a9019:;
  /* 105a9019 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a901c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a901f push ecx */
  push32((uint32_t)(ECX));
  /* 105a9020 call 0x105ac6a0 */
  push32(0x105a9025u); f_105ac6a0();
  /* 105a9025 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9028 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a902b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a902f je 0x105a9046 */
  if (C.zf) goto L_105a9046;
  /* 105a9031 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9034 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9037 push edx */
  push32((uint32_t)(EDX));
  /* 105a9038 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a903b push eax */
  push32((uint32_t)(EAX));
  /* 105a903c call 0x105ac700 */
  push32(0x105a9041u); f_105ac700();
  /* 105a9041 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9044 jmp 0x105a9072 */
  goto L_105a9072;
L_105a9046:;
  /* 105a9046 mov ecx, dword ptr [0x105d29a0] */
  ECX = (r32((uint32_t)(0x105d29a0)));
  /* 105a904c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 105a9052 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a9054 je 0x105a905d */
  if (C.zf) goto L_105a905d;
  /* 105a9056 mov eax, 1 */
  EAX = (0x1u);
  /* 105a905b jmp 0x105a9072 */
  goto L_105a9072;
L_105a905d:;
  /* 105a905d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9060 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9063 push edx */
  push32((uint32_t)(EDX));
  /* 105a9064 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9066 mov eax, dword ptr [0x105d4344] */
  EAX = (r32((uint32_t)(0x105d4344)));
  /* 105a906b push eax */
  push32((uint32_t)(EAX));
  /* 105a906c call dword ptr [0x105d5270] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5270))), 0x105a9072u);
L_105a9072:;
  /* 105a9072 mov esp, ebp */
  ESP = (EBP);
  /* 105a9074 pop ebp */
  EBP = (pop32());
  /* 105a9075 ret  */
  ESPCHK(0x105a8ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009080 @ 0x105a9080 (227 bytes, 80 insns) */
void f_105a9080(void) {
  FTRACE(0x105a9080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a9080 push ebp */
  push32((uint32_t)(EBP));
  /* 105a9081 mov ebp, esp */
  EBP = (ESP);
  /* 105a9083 push ecx */
  push32((uint32_t)(ECX));
  /* 105a9084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9087 push eax */
  push32((uint32_t)(EAX));
  /* 105a9088 call 0x105a8ff0 */
  push32(0x105a908du); f_105a8ff0();
  /* 105a908d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9090 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a9092 jne 0x105a909b */
  if (!C.zf) goto L_105a909b;
  /* 105a9094 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a9096 jmp 0x105a915f */
  goto L_105a915f;
L_105a909b:;
  /* 105a909b push 9 */
  push32((uint32_t)(0x9u));
  /* 105a909d call 0x105abda0 */
  push32(0x105a90a2u); f_105abda0();
  /* 105a90a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a90a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a90a8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a90ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105a90ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a90b1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a90b4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a90b9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a90bc je 0x105a90e0 */
  if (C.zf) goto L_105a90e0;
  /* 105a90be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a90c1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a90c5 je 0x105a90e0 */
  if (C.zf) goto L_105a90e0;
  /* 105a90c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a90ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a90cd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a90d2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a90d5 je 0x105a90e0 */
  if (C.zf) goto L_105a90e0;
  /* 105a90d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a90da cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a90de jne 0x105a9153 */
  if (!C.zf) goto L_105a9153;
L_105a90e0:;
  /* 105a90e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a90e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a90e5 push edx */
  push32((uint32_t)(EDX));
  /* 105a90e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a90e9 push eax */
  push32((uint32_t)(EAX));
  /* 105a90ea call 0x105a8fa0 */
  push32(0x105a90efu); f_105a8fa0();
  /* 105a90ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a90f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a90f4 je 0x105a9153 */
  if (C.zf) goto L_105a9153;
  /* 105a90f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a90f9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105a90fc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a90ff jne 0x105a9153 */
  if (!C.zf) goto L_105a9153;
  /* 105a9101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9104 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 105a9107 cmp ecx, dword ptr [0x105d0a90] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d0a90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a910d jg 0x105a9153 */
  if ((!C.zf&&C.sf==C.of)) goto L_105a9153;
  /* 105a910f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9113 je 0x105a9120 */
  if (C.zf) goto L_105a9120;
  /* 105a9115 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a911b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 105a911e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105a9120:;
  /* 105a9120 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9124 je 0x105a9131 */
  if (C.zf) goto L_105a9131;
  /* 105a9126 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a9129 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a912c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105a912f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105a9131:;
  /* 105a9131 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9135 je 0x105a9142 */
  if (C.zf) goto L_105a9142;
  /* 105a9137 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a913a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a913d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105a9140 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105a9142:;
  /* 105a9142 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a9144 call 0x105abe40 */
  push32(0x105a9149u); f_105abe40();
  /* 105a9149 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a914c mov eax, 1 */
  EAX = (0x1u);
  /* 105a9151 jmp 0x105a915f */
  goto L_105a915f;
L_105a9153:;
  /* 105a9153 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a9155 call 0x105abe40 */
  push32(0x105a915au); f_105abe40();
  /* 105a915a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a915d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105a915f:;
  /* 105a915f mov esp, ebp */
  ESP = (EBP);
  /* 105a9161 pop ebp */
  EBP = (pop32());
  /* 105a9162 ret  */
  ESPCHK(0x105a9080u, _esp0);
  ESP += 4; return;
}

/* FUN_10009170 @ 0x105a9170 (28 bytes, 11 insns) */
void f_105a9170(void) {
  FTRACE(0x105a9170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a9170 push ebp */
  push32((uint32_t)(EBP));
  /* 105a9171 mov ebp, esp */
  EBP = (ESP);
  /* 105a9173 push ecx */
  push32((uint32_t)(ECX));
  /* 105a9174 mov eax, dword ptr [0x105d4350] */
  EAX = (r32((uint32_t)(0x105d4350)));
  /* 105a9179 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a917c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a917f mov dword ptr [0x105d4350], ecx */
  w32((uint32_t)(0x105d4350), (ECX));
  /* 105a9185 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9188 mov esp, ebp */
  ESP = (EBP);
  /* 105a918a pop ebp */
  EBP = (pop32());
  /* 105a918b ret  */
  ESPCHK(0x105a9170u, _esp0);
  ESP += 4; return;
}

/* FUN_10009190 @ 0x105a9190 (362 bytes, 116 insns) */
void f_105a9190(void) {
  FTRACE(0x105a9190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a9190 push ebp */
  push32((uint32_t)(EBP));
  /* 105a9191 mov ebp, esp */
  EBP = (ESP);
  /* 105a9193 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9196 push ebx */
  push32((uint32_t)(EBX));
  /* 105a9197 push esi */
  push32((uint32_t)(ESI));
  /* 105a9198 push edi */
  push32((uint32_t)(EDI));
  /* 105a9199 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a919d jne 0x105a91ca */
  if (!C.zf) goto L_105a91ca;
L_105a919f:;
  /* 105a919f push 0x105ce60c */
  push32((uint32_t)(0x105ce60cu));
  /* 105a91a4 push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a91a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a91ab push 0 */
  push32((uint32_t)(0x0u));
  /* 105a91ad push 0 */
  push32((uint32_t)(0x0u));
  /* 105a91af push 0 */
  push32((uint32_t)(0x0u));
  /* 105a91b1 call 0x105a5990 */
  push32(0x105a91b6u); f_105a5990();
  /* 105a91b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a91b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a91bc jne 0x105a91bf */
  if (!C.zf) goto L_105a91bf;
  /* 105a91be int3  */
  x86_unimpl("int3 @ 0x105a91be");
L_105a91bf:;
  /* 105a91bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a91c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a91c3 jne 0x105a919f */
  if (!C.zf) goto L_105a919f;
  /* 105a91c5 jmp 0x105a92f3 */
  goto L_105a92f3;
L_105a91ca:;
  /* 105a91ca push 9 */
  push32((uint32_t)(0x9u));
  /* 105a91cc call 0x105abda0 */
  push32(0x105a91d1u); f_105abda0();
  /* 105a91d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a91d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a91d7 mov edx, dword ptr [0x105d29ec] */
  EDX = (r32((uint32_t)(0x105d29ec)));
  /* 105a91dd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105a91df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105a91e6 jmp 0x105a91f1 */
  goto L_105a91f1;
L_105a91e8:;
  /* 105a91e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a91eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a91ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105a91f1:;
  /* 105a91f1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a91f5 jge 0x105a9215 */
  if ((C.sf==C.of)) goto L_105a9215;
  /* 105a91f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a91fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a91fd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 105a9205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9208 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a920b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 105a9213 jmp 0x105a91e8 */
  goto L_105a91e8;
L_105a9215:;
  /* 105a9215 mov edx, dword ptr [0x105d29ec] */
  EDX = (r32((uint32_t)(0x105d29ec)));
  /* 105a921b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105a921e jmp 0x105a9228 */
  goto L_105a9228;
L_105a9220:;
  /* 105a9220 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a9223 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105a9225 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105a9228:;
  /* 105a9228 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a922c je 0x105a92d1 */
  if (C.zf) goto L_105a92d1;
  /* 105a9232 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a9235 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a9238 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a923d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a923f jl 0x105a92a7 */
  if ((C.sf!=C.of)) goto L_105a92a7;
  /* 105a9241 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a9244 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105a9247 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105a924d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9250 jge 0x105a92a7 */
  if ((C.sf==C.of)) goto L_105a92a7;
  /* 105a9252 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a9255 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105a9258 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a925e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9261 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 105a9265 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9268 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a926b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105a926e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105a9274 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9277 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 105a927b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a927e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a9281 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a9286 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9289 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 105a928d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a9290 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9293 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a9296 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 105a9299 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a929e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a92a1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 105a92a5 jmp 0x105a92cc */
  goto L_105a92cc;
L_105a92a7:;
  /* 105a92a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a92aa push edx */
  push32((uint32_t)(EDX));
  /* 105a92ab push 0x105ce5e8 */
  push32((uint32_t)(0x105ce5e8u));
  /* 105a92b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a92b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a92b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a92b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a92b8 call 0x105a5990 */
  push32(0x105a92bdu); f_105a5990();
  /* 105a92bd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a92c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a92c3 jne 0x105a92c6 */
  if (!C.zf) goto L_105a92c6;
  /* 105a92c5 int3  */
  x86_unimpl("int3 @ 0x105a92c5");
L_105a92c6:;
  /* 105a92c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a92c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a92ca jne 0x105a92a7 */
  if (!C.zf) goto L_105a92a7;
L_105a92cc:;
  /* 105a92cc jmp 0x105a9220 */
  goto L_105a9220;
L_105a92d1:;
  /* 105a92d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a92d4 mov edx, dword ptr [0x105d29f4] */
  EDX = (r32((uint32_t)(0x105d29f4)));
  /* 105a92da mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 105a92dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a92e0 mov ecx, dword ptr [0x105d29e8] */
  ECX = (r32((uint32_t)(0x105d29e8)));
  /* 105a92e6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 105a92e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a92eb call 0x105abe40 */
  push32(0x105a92f0u); f_105abe40();
  /* 105a92f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a92f3:;
  /* 105a92f3 pop edi */
  EDI = (pop32());
  /* 105a92f4 pop esi */
  ESI = (pop32());
  /* 105a92f5 pop ebx */
  EBX = (pop32());
  /* 105a92f6 mov esp, ebp */
  ESP = (EBP);
  /* 105a92f8 pop ebp */
  EBP = (pop32());
  /* 105a92f9 ret  */
  ESPCHK(0x105a9190u, _esp0);
  ESP += 4; return;
}

/* FUN_10009300 @ 0x105a9300 (291 bytes, 95 insns) */
void f_105a9300(void) {
  FTRACE(0x105a9300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a9300 push ebp */
  push32((uint32_t)(EBP));
  /* 105a9301 mov ebp, esp */
  EBP = (ESP);
  /* 105a9303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9306 push ebx */
  push32((uint32_t)(EBX));
  /* 105a9307 push esi */
  push32((uint32_t)(ESI));
  /* 105a9308 push edi */
  push32((uint32_t)(EDI));
  /* 105a9309 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105a9310 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9314 je 0x105a9322 */
  if (C.zf) goto L_105a9322;
  /* 105a9316 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a931a je 0x105a9322 */
  if (C.zf) goto L_105a9322;
  /* 105a931c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9320 jne 0x105a9350 */
  if (!C.zf) goto L_105a9350;
L_105a9322:;
  /* 105a9322 push 0x105ce634 */
  push32((uint32_t)(0x105ce634u));
  /* 105a9327 push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a932c push 0 */
  push32((uint32_t)(0x0u));
  /* 105a932e push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9330 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9332 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9334 call 0x105a5990 */
  push32(0x105a9339u); f_105a5990();
  /* 105a9339 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a933c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a933f jne 0x105a9342 */
  if (!C.zf) goto L_105a9342;
  /* 105a9341 int3  */
  x86_unimpl("int3 @ 0x105a9341");
L_105a9342:;
  /* 105a9342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a9344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a9346 jne 0x105a9322 */
  if (!C.zf) goto L_105a9322;
  /* 105a9348 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a934b jmp 0x105a941c */
  goto L_105a941c;
L_105a9350:;
  /* 105a9350 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105a9357 jmp 0x105a9362 */
  goto L_105a9362;
L_105a9359:;
  /* 105a9359 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a935c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a935f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105a9362:;
  /* 105a9362 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9366 jge 0x105a93ec */
  if ((C.sf==C.of)) goto L_105a93ec;
  /* 105a936c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a936f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9372 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9375 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105a9378 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 105a937c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9380 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9383 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9386 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 105a938a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a938d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9390 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9393 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105a9396 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 105a939a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a939e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a93a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a93a4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 105a93a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a93ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a93ae cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a93b3 jne 0x105a93c2 */
  if (!C.zf) goto L_105a93c2;
  /* 105a93b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a93b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a93bb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a93c0 je 0x105a93e7 */
  if (C.zf) goto L_105a93e7;
L_105a93c2:;
  /* 105a93c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a93c6 je 0x105a93e7 */
  if (C.zf) goto L_105a93e7;
  /* 105a93c8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a93cc jne 0x105a93e0 */
  if (!C.zf) goto L_105a93e0;
  /* 105a93ce cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a93d2 jne 0x105a93e7 */
  if (!C.zf) goto L_105a93e7;
  /* 105a93d4 mov eax, dword ptr [0x105d0a8c] */
  EAX = (r32((uint32_t)(0x105d0a8c)));
  /* 105a93d9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 105a93dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a93de je 0x105a93e7 */
  if (C.zf) goto L_105a93e7;
L_105a93e0:;
  /* 105a93e0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_105a93e7:;
  /* 105a93e7 jmp 0x105a9359 */
  goto L_105a9359;
L_105a93ec:;
  /* 105a93ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a93ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a93f2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 105a93f5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a93f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a93fb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 105a93fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9401 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a9404 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 105a9407 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a940a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a940d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 105a9410 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9413 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105a9419 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105a941c:;
  /* 105a941c pop edi */
  EDI = (pop32());
  /* 105a941d pop esi */
  ESI = (pop32());
  /* 105a941e pop ebx */
  EBX = (pop32());
  /* 105a941f mov esp, ebp */
  ESP = (EBP);
  /* 105a9421 pop ebp */
  EBP = (pop32());
  /* 105a9422 ret  */
  ESPCHK(0x105a9300u, _esp0);
  ESP += 4; return;
}

/* FUN_10009430 @ 0x105a9430 (697 bytes, 253 insns) */
void f_105a9430(void) {
  FTRACE(0x105a9430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a9430 push ebp */
  push32((uint32_t)(EBP));
  /* 105a9431 mov ebp, esp */
  EBP = (ESP);
  /* 105a9433 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9436 push ebx */
  push32((uint32_t)(EBX));
  /* 105a9437 push esi */
  push32((uint32_t)(ESI));
  /* 105a9438 push edi */
  push32((uint32_t)(EDI));
  /* 105a9439 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105a9440 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a9442 call 0x105abda0 */
  push32(0x105a9447u); f_105abda0();
  /* 105a9447 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a944a:;
  /* 105a944a push 0x105ce72c */
  push32((uint32_t)(0x105ce72cu));
  /* 105a944f push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a9454 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9456 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9458 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a945a push 0 */
  push32((uint32_t)(0x0u));
  /* 105a945c call 0x105a5990 */
  push32(0x105a9461u); f_105a5990();
  /* 105a9461 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9464 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9467 jne 0x105a946a */
  if (!C.zf) goto L_105a946a;
  /* 105a9469 int3  */
  x86_unimpl("int3 @ 0x105a9469");
L_105a946a:;
  /* 105a946a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a946c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a946e jne 0x105a944a */
  if (!C.zf) goto L_105a944a;
  /* 105a9470 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9474 je 0x105a947e */
  if (C.zf) goto L_105a947e;
  /* 105a9476 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9479 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105a947b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105a947e:;
  /* 105a947e mov eax, dword ptr [0x105d29ec] */
  EAX = (r32((uint32_t)(0x105d29ec)));
  /* 105a9483 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a9486 jmp 0x105a9490 */
  goto L_105a9490;
L_105a9488:;
  /* 105a9488 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a948b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105a948d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105a9490:;
  /* 105a9490 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9494 je 0x105a96b2 */
  if (C.zf) goto L_105a96b2;
  /* 105a949a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a949d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a94a0 je 0x105a96b2 */
  if (C.zf) goto L_105a96b2;
  /* 105a94a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a94a9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105a94ac and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105a94b2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a94b5 je 0x105a94e4 */
  if (C.zf) goto L_105a94e4;
  /* 105a94b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a94ba mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105a94bd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a94c3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a94c5 je 0x105a94e4 */
  if (C.zf) goto L_105a94e4;
  /* 105a94c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a94ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a94cd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a94d2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a94d5 jne 0x105a94e9 */
  if (!C.zf) goto L_105a94e9;
  /* 105a94d7 mov ecx, dword ptr [0x105d0a8c] */
  ECX = (r32((uint32_t)(0x105d0a8c)));
  /* 105a94dd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 105a94e0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a94e2 jne 0x105a94e9 */
  if (!C.zf) goto L_105a94e9;
L_105a94e4:;
  /* 105a94e4 jmp 0x105a96ad */
  goto L_105a96ad;
L_105a94e9:;
  /* 105a94e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a94ec cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a94f0 je 0x105a9562 */
  if (C.zf) goto L_105a9562;
  /* 105a94f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a94f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 105a94f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a94f9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105a94fc push ecx */
  push32((uint32_t)(ECX));
  /* 105a94fd call 0x105a8fa0 */
  push32(0x105a9502u); f_105a8fa0();
  /* 105a9502 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9505 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a9507 jne 0x105a9533 */
  if (!C.zf) goto L_105a9533;
L_105a9509:;
  /* 105a9509 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a950c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 105a950f push eax */
  push32((uint32_t)(EAX));
  /* 105a9510 push 0x105ce718 */
  push32((uint32_t)(0x105ce718u));
  /* 105a9515 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9517 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9519 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a951b push 0 */
  push32((uint32_t)(0x0u));
  /* 105a951d call 0x105a5990 */
  push32(0x105a9522u); f_105a5990();
  /* 105a9522 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9525 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9528 jne 0x105a952b */
  if (!C.zf) goto L_105a952b;
  /* 105a952a int3  */
  x86_unimpl("int3 @ 0x105a952a");
L_105a952b:;
  /* 105a952b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a952d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a952f jne 0x105a9509 */
  if (!C.zf) goto L_105a9509;
  /* 105a9531 jmp 0x105a9562 */
  goto L_105a9562;
L_105a9533:;
  /* 105a9533 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9536 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 105a9539 push eax */
  push32((uint32_t)(EAX));
  /* 105a953a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a953d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105a9540 push edx */
  push32((uint32_t)(EDX));
  /* 105a9541 push 0x105ce70c */
  push32((uint32_t)(0x105ce70cu));
  /* 105a9546 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9548 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a954a push 0 */
  push32((uint32_t)(0x0u));
  /* 105a954c push 0 */
  push32((uint32_t)(0x0u));
  /* 105a954e call 0x105a5990 */
  push32(0x105a9553u); f_105a5990();
  /* 105a9553 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9556 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9559 jne 0x105a955c */
  if (!C.zf) goto L_105a955c;
  /* 105a955b int3  */
  x86_unimpl("int3 @ 0x105a955b");
L_105a955c:;
  /* 105a955c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a955e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a9560 jne 0x105a9533 */
  if (!C.zf) goto L_105a9533;
L_105a9562:;
  /* 105a9562 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9565 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 105a9568 push edx */
  push32((uint32_t)(EDX));
  /* 105a9569 push 0x105ce704 */
  push32((uint32_t)(0x105ce704u));
  /* 105a956e push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9570 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9572 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9574 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9576 call 0x105a5990 */
  push32(0x105a957bu); f_105a5990();
  /* 105a957b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a957e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9581 jne 0x105a9584 */
  if (!C.zf) goto L_105a9584;
  /* 105a9583 int3  */
  x86_unimpl("int3 @ 0x105a9583");
L_105a9584:;
  /* 105a9584 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a9586 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a9588 jne 0x105a9562 */
  if (!C.zf) goto L_105a9562;
  /* 105a958a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a958d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105a9590 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105a9596 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9599 jne 0x105a960c */
  if (!C.zf) goto L_105a960c;
L_105a959b:;
  /* 105a959b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a959e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105a95a1 push ecx */
  push32((uint32_t)(ECX));
  /* 105a95a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a95a5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a95a8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105a95ab and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a95b0 push eax */
  push32((uint32_t)(EAX));
  /* 105a95b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a95b4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a95b7 push ecx */
  push32((uint32_t)(ECX));
  /* 105a95b8 push 0x105ce6d0 */
  push32((uint32_t)(0x105ce6d0u));
  /* 105a95bd push 0 */
  push32((uint32_t)(0x0u));
  /* 105a95bf push 0 */
  push32((uint32_t)(0x0u));
  /* 105a95c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a95c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a95c5 call 0x105a5990 */
  push32(0x105a95cau); f_105a5990();
  /* 105a95ca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a95cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a95d0 jne 0x105a95d3 */
  if (!C.zf) goto L_105a95d3;
  /* 105a95d2 int3  */
  x86_unimpl("int3 @ 0x105a95d2");
L_105a95d3:;
  /* 105a95d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a95d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a95d7 jne 0x105a959b */
  if (!C.zf) goto L_105a959b;
  /* 105a95d9 cmp dword ptr [0x105d4350], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d4350))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a95e0 je 0x105a95fb */
  if (C.zf) goto L_105a95fb;
  /* 105a95e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a95e5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105a95e8 push ecx */
  push32((uint32_t)(ECX));
  /* 105a95e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a95ec add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a95ef push edx */
  push32((uint32_t)(EDX));
  /* 105a95f0 call dword ptr [0x105d4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d4350))), 0x105a95f6u);
  /* 105a95f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a95f9 jmp 0x105a9607 */
  goto L_105a9607;
L_105a95fb:;
  /* 105a95fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a95fe push eax */
  push32((uint32_t)(EAX));
  /* 105a95ff call 0x105a96f0 */
  push32(0x105a9604u); f_105a96f0();
  /* 105a9604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a9607:;
  /* 105a9607 jmp 0x105a96ad */
  goto L_105a96ad;
L_105a960c:;
  /* 105a960c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a960f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9613 jne 0x105a9652 */
  if (!C.zf) goto L_105a9652;
L_105a9615:;
  /* 105a9615 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9618 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105a961b push eax */
  push32((uint32_t)(EAX));
  /* 105a961c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a961f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9622 push ecx */
  push32((uint32_t)(ECX));
  /* 105a9623 push 0x105ce6a8 */
  push32((uint32_t)(0x105ce6a8u));
  /* 105a9628 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a962a push 0 */
  push32((uint32_t)(0x0u));
  /* 105a962c push 0 */
  push32((uint32_t)(0x0u));
  /* 105a962e push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9630 call 0x105a5990 */
  push32(0x105a9635u); f_105a5990();
  /* 105a9635 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9638 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a963b jne 0x105a963e */
  if (!C.zf) goto L_105a963e;
  /* 105a963d int3  */
  x86_unimpl("int3 @ 0x105a963d");
L_105a963e:;
  /* 105a963e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a9640 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a9642 jne 0x105a9615 */
  if (!C.zf) goto L_105a9615;
  /* 105a9644 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9647 push eax */
  push32((uint32_t)(EAX));
  /* 105a9648 call 0x105a96f0 */
  push32(0x105a964du); f_105a96f0();
  /* 105a964d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9650 jmp 0x105a96ad */
  goto L_105a96ad;
L_105a9652:;
  /* 105a9652 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9655 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105a9658 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105a965e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9661 jne 0x105a96ad */
  if (!C.zf) goto L_105a96ad;
L_105a9663:;
  /* 105a9663 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9666 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105a9669 push ecx */
  push32((uint32_t)(ECX));
  /* 105a966a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a966d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105a9670 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105a9673 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a9678 push eax */
  push32((uint32_t)(EAX));
  /* 105a9679 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a967c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a967f push ecx */
  push32((uint32_t)(ECX));
  /* 105a9680 push 0x105ce674 */
  push32((uint32_t)(0x105ce674u));
  /* 105a9685 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9687 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9689 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a968b push 0 */
  push32((uint32_t)(0x0u));
  /* 105a968d call 0x105a5990 */
  push32(0x105a9692u); f_105a5990();
  /* 105a9692 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9695 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9698 jne 0x105a969b */
  if (!C.zf) goto L_105a969b;
  /* 105a969a int3  */
  x86_unimpl("int3 @ 0x105a969a");
L_105a969b:;
  /* 105a969b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a969d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a969f jne 0x105a9663 */
  if (!C.zf) goto L_105a9663;
  /* 105a96a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a96a4 push eax */
  push32((uint32_t)(EAX));
  /* 105a96a5 call 0x105a96f0 */
  push32(0x105a96aau); f_105a96f0();
  /* 105a96aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a96ad:;
  /* 105a96ad jmp 0x105a9488 */
  goto L_105a9488;
L_105a96b2:;
  /* 105a96b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a96b4 call 0x105abe40 */
  push32(0x105a96b9u); f_105abe40();
  /* 105a96b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a96bc:;
  /* 105a96bc push 0x105ce65c */
  push32((uint32_t)(0x105ce65cu));
  /* 105a96c1 push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a96c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a96c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a96ca push 0 */
  push32((uint32_t)(0x0u));
  /* 105a96cc push 0 */
  push32((uint32_t)(0x0u));
  /* 105a96ce call 0x105a5990 */
  push32(0x105a96d3u); f_105a5990();
  /* 105a96d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a96d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a96d9 jne 0x105a96dc */
  if (!C.zf) goto L_105a96dc;
  /* 105a96db int3  */
  x86_unimpl("int3 @ 0x105a96db");
L_105a96dc:;
  /* 105a96dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a96de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a96e0 jne 0x105a96bc */
  if (!C.zf) goto L_105a96bc;
  /* 105a96e2 pop edi */
  EDI = (pop32());
  /* 105a96e3 pop esi */
  ESI = (pop32());
  /* 105a96e4 pop ebx */
  EBX = (pop32());
  /* 105a96e5 mov esp, ebp */
  ESP = (EBP);
  /* 105a96e7 pop ebp */
  EBP = (pop32());
  /* 105a96e8 ret  */
  ESPCHK(0x105a9430u, _esp0);
  ESP += 4; return;
}

/* FUN_100096f0 @ 0x105a96f0 (276 bytes, 89 insns) */
void f_105a96f0(void) {
  FTRACE(0x105a96f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a96f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a96f1 mov ebp, esp */
  EBP = (ESP);
  /* 105a96f3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a96f6 push ebx */
  push32((uint32_t)(EBX));
  /* 105a96f7 push esi */
  push32((uint32_t)(ESI));
  /* 105a96f8 push edi */
  push32((uint32_t)(EDI));
  /* 105a96f9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 105a9700 jmp 0x105a970b */
  goto L_105a970b;
L_105a9702:;
  /* 105a9702 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105a9705 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9708 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_105a970b:;
  /* 105a970b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a970e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9712 jge 0x105a971f */
  if ((C.sf==C.of)) goto L_105a971f;
  /* 105a9714 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9717 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105a971a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 105a971d jmp 0x105a9726 */
  goto L_105a9726;
L_105a971f:;
  /* 105a971f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_105a9726:;
  /* 105a9726 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105a9729 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a972c jge 0x105a97cc */
  if ((C.sf==C.of)) goto L_105a97cc;
  /* 105a9732 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9735 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9738 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 105a973b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 105a973e cmp dword ptr [0x105d1158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d1158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9745 jle 0x105a9763 */
  if ((C.zf||C.sf!=C.of)) goto L_105a9763;
  /* 105a9747 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 105a974c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a974f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a9755 push ecx */
  push32((uint32_t)(ECX));
  /* 105a9756 call 0x105ae2b0 */
  push32(0x105a975bu); f_105ae2b0();
  /* 105a975b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a975e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 105a9761 jmp 0x105a9780 */
  goto L_105a9780;
L_105a9763:;
  /* 105a9763 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a9766 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105a976c mov eax, dword ptr [0x105d0de8] */
  EAX = (r32((uint32_t)(0x105d0de8)));
  /* 105a9771 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a9773 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 105a9777 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 105a977d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_105a9780:;
  /* 105a9780 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9784 je 0x105a9794 */
  if (C.zf) goto L_105a9794;
  /* 105a9786 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a9789 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105a978f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 105a9792 jmp 0x105a979b */
  goto L_105a979b;
L_105a9794:;
  /* 105a9794 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_105a979b:;
  /* 105a979b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105a979e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 105a97a1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 105a97a5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 105a97a8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105a97ae push edx */
  push32((uint32_t)(EDX));
  /* 105a97af push 0x105ce750 */
  push32((uint32_t)(0x105ce750u));
  /* 105a97b4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105a97b7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105a97ba lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 105a97be push ecx */
  push32((uint32_t)(ECX));
  /* 105a97bf call 0x105a5500 */
  push32(0x105a97c4u); f_105a5500();
  /* 105a97c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a97c7 jmp 0x105a9702 */
  goto L_105a9702;
L_105a97cc:;
  /* 105a97cc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 105a97cf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_105a97d4:;
  /* 105a97d4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 105a97d7 push eax */
  push32((uint32_t)(EAX));
  /* 105a97d8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 105a97db push ecx */
  push32((uint32_t)(ECX));
  /* 105a97dc push 0x105ce740 */
  push32((uint32_t)(0x105ce740u));
  /* 105a97e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a97e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a97e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a97e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a97e9 call 0x105a5990 */
  push32(0x105a97eeu); f_105a5990();
  /* 105a97ee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a97f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a97f4 jne 0x105a97f7 */
  if (!C.zf) goto L_105a97f7;
  /* 105a97f6 int3  */
  x86_unimpl("int3 @ 0x105a97f6");
L_105a97f7:;
  /* 105a97f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a97f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a97fb jne 0x105a97d4 */
  if (!C.zf) goto L_105a97d4;
  /* 105a97fd pop edi */
  EDI = (pop32());
  /* 105a97fe pop esi */
  ESI = (pop32());
  /* 105a97ff pop ebx */
  EBX = (pop32());
  /* 105a9800 mov esp, ebp */
  ESP = (EBP);
  /* 105a9802 pop ebp */
  EBP = (pop32());
  /* 105a9803 ret  */
  ESPCHK(0x105a96f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009810 @ 0x105a9810 (116 bytes, 46 insns) */
void f_105a9810(void) {
  FTRACE(0x105a9810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a9810 push ebp */
  push32((uint32_t)(EBP));
  /* 105a9811 mov ebp, esp */
  EBP = (ESP);
  /* 105a9813 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9816 push ebx */
  push32((uint32_t)(EBX));
  /* 105a9817 push esi */
  push32((uint32_t)(ESI));
  /* 105a9818 push edi */
  push32((uint32_t)(EDI));
  /* 105a9819 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 105a981c push eax */
  push32((uint32_t)(EAX));
  /* 105a981d call 0x105a9190 */
  push32(0x105a9822u); f_105a9190();
  /* 105a9822 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9825 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9829 jne 0x105a9844 */
  if (!C.zf) goto L_105a9844;
  /* 105a982b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a982f jne 0x105a9844 */
  if (!C.zf) goto L_105a9844;
  /* 105a9831 mov ecx, dword ptr [0x105d0a8c] */
  ECX = (r32((uint32_t)(0x105d0a8c)));
  /* 105a9837 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 105a983a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a983c je 0x105a987b */
  if (C.zf) goto L_105a987b;
  /* 105a983e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9842 je 0x105a987b */
  if (C.zf) goto L_105a987b;
L_105a9844:;
  /* 105a9844 push 0x105ce758 */
  push32((uint32_t)(0x105ce758u));
  /* 105a9849 push 0x105ce124 */
  push32((uint32_t)(0x105ce124u));
  /* 105a984e push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9850 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9852 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9854 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9856 call 0x105a5990 */
  push32(0x105a985bu); f_105a5990();
  /* 105a985b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a985e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9861 jne 0x105a9864 */
  if (!C.zf) goto L_105a9864;
  /* 105a9863 int3  */
  x86_unimpl("int3 @ 0x105a9863");
L_105a9864:;
  /* 105a9864 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a9866 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a9868 jne 0x105a9844 */
  if (!C.zf) goto L_105a9844;
  /* 105a986a push 0 */
  push32((uint32_t)(0x0u));
  /* 105a986c call 0x105a9430 */
  push32(0x105a9871u); f_105a9430();
  /* 105a9871 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9874 mov eax, 1 */
  EAX = (0x1u);
  /* 105a9879 jmp 0x105a987d */
  goto L_105a987d;
L_105a987b:;
  /* 105a987b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105a987d:;
  /* 105a987d pop edi */
  EDI = (pop32());
  /* 105a987e pop esi */
  ESI = (pop32());
  /* 105a987f pop ebx */
  EBX = (pop32());
  /* 105a9880 mov esp, ebp */
  ESP = (EBP);
  /* 105a9882 pop ebp */
  EBP = (pop32());
  /* 105a9883 ret  */
  ESPCHK(0x105a9810u, _esp0);
  ESP += 4; return;
}

/* FUN_10009890 @ 0x105a9890 (197 bytes, 79 insns) */
void f_105a9890(void) {
  FTRACE(0x105a9890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a9890 push ebp */
  push32((uint32_t)(EBP));
  /* 105a9891 mov ebp, esp */
  EBP = (ESP);
  /* 105a9893 push ecx */
  push32((uint32_t)(ECX));
  /* 105a9894 push ebx */
  push32((uint32_t)(EBX));
  /* 105a9895 push esi */
  push32((uint32_t)(ESI));
  /* 105a9896 push edi */
  push32((uint32_t)(EDI));
  /* 105a9897 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a989b jne 0x105a98a2 */
  if (!C.zf) goto L_105a98a2;
  /* 105a989d jmp 0x105a994e */
  goto L_105a994e;
L_105a98a2:;
  /* 105a98a2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105a98a9 jmp 0x105a98b4 */
  goto L_105a98b4;
L_105a98ab:;
  /* 105a98ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a98ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a98b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105a98b4:;
  /* 105a98b4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a98b8 jge 0x105a98fe */
  if ((C.sf==C.of)) goto L_105a98fe;
L_105a98ba:;
  /* 105a98ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a98bd mov edx, dword ptr [ecx*4 + 0x105d0a9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x105d0a9c)));
  /* 105a98c4 push edx */
  push32((uint32_t)(EDX));
  /* 105a98c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a98c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a98cb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 105a98cf push edx */
  push32((uint32_t)(EDX));
  /* 105a98d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a98d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a98d6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 105a98da push edx */
  push32((uint32_t)(EDX));
  /* 105a98db push 0x105ce7b4 */
  push32((uint32_t)(0x105ce7b4u));
  /* 105a98e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a98e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a98e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a98e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a98e8 call 0x105a5990 */
  push32(0x105a98edu); f_105a5990();
  /* 105a98ed add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a98f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a98f3 jne 0x105a98f6 */
  if (!C.zf) goto L_105a98f6;
  /* 105a98f5 int3  */
  x86_unimpl("int3 @ 0x105a98f5");
L_105a98f6:;
  /* 105a98f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a98f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a98fa jne 0x105a98ba */
  if (!C.zf) goto L_105a98ba;
  /* 105a98fc jmp 0x105a98ab */
  goto L_105a98ab;
L_105a98fe:;
  /* 105a98fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9901 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 105a9904 push edx */
  push32((uint32_t)(EDX));
  /* 105a9905 push 0x105ce790 */
  push32((uint32_t)(0x105ce790u));
  /* 105a990a push 0 */
  push32((uint32_t)(0x0u));
  /* 105a990c push 0 */
  push32((uint32_t)(0x0u));
  /* 105a990e push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9910 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9912 call 0x105a5990 */
  push32(0x105a9917u); f_105a5990();
  /* 105a9917 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a991a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a991d jne 0x105a9920 */
  if (!C.zf) goto L_105a9920;
  /* 105a991f int3  */
  x86_unimpl("int3 @ 0x105a991f");
L_105a9920:;
  /* 105a9920 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a9922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a9924 jne 0x105a98fe */
  if (!C.zf) goto L_105a98fe;
L_105a9926:;
  /* 105a9926 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9929 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 105a992c push edx */
  push32((uint32_t)(EDX));
  /* 105a992d push 0x105ce770 */
  push32((uint32_t)(0x105ce770u));
  /* 105a9932 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9934 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9936 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9938 push 0 */
  push32((uint32_t)(0x0u));
  /* 105a993a call 0x105a5990 */
  push32(0x105a993fu); f_105a5990();
  /* 105a993f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9942 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9945 jne 0x105a9948 */
  if (!C.zf) goto L_105a9948;
  /* 105a9947 int3  */
  x86_unimpl("int3 @ 0x105a9947");
L_105a9948:;
  /* 105a9948 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a994a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a994c jne 0x105a9926 */
  if (!C.zf) goto L_105a9926;
L_105a994e:;
  /* 105a994e pop edi */
  EDI = (pop32());
  /* 105a994f pop esi */
  ESI = (pop32());
  /* 105a9950 pop ebx */
  EBX = (pop32());
  /* 105a9951 mov esp, ebp */
  ESP = (EBP);
  /* 105a9953 pop ebp */
  EBP = (pop32());
  /* 105a9954 ret  */
  ESPCHK(0x105a9890u, _esp0);
  ESP += 4; return;
}

/* FUN_10009960 @ 0x105a9960 (329 bytes, 102 insns) */
void f_105a9960(void) {
  FTRACE(0x105a9960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a9960 push ebp */
  push32((uint32_t)(EBP));
  /* 105a9961 mov ebp, esp */
  EBP = (ESP);
  /* 105a9963 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9966 cmp dword ptr [0x105d44b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d44b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a996d jne 0x105a9974 */
  if (!C.zf) goto L_105a9974;
  /* 105a996f call 0x105aeb50 */
  push32(0x105a9974u); f_105aeb50();
L_105a9974:;
  /* 105a9974 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105a997b mov eax, dword ptr [0x105d2988] */
  EAX = (r32((uint32_t)(0x105d2988)));
  /* 105a9980 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105a9983:;
  /* 105a9983 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9986 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105a9989 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a998b je 0x105a99b9 */
  if (C.zf) goto L_105a99b9;
  /* 105a998d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9990 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105a9993 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9996 je 0x105a99a1 */
  if (C.zf) goto L_105a99a1;
  /* 105a9998 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a999b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a999e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105a99a1:;
  /* 105a99a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a99a4 push eax */
  push32((uint32_t)(EAX));
  /* 105a99a5 call 0x105aa820 */
  push32(0x105a99aau); f_105aa820();
  /* 105a99aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a99ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a99b0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 105a99b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105a99b7 jmp 0x105a9983 */
  goto L_105a9983;
L_105a99b9:;
  /* 105a99b9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 105a99bb push 0x105ce7d4 */
  push32((uint32_t)(0x105ce7d4u));
  /* 105a99c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a99c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a99c5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 105a99cc push ecx */
  push32((uint32_t)(ECX));
  /* 105a99cd call 0x105a79f0 */
  push32(0x105a99d2u); f_105a79f0();
  /* 105a99d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a99d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105a99d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a99db mov dword ptr [0x105d29bc], edx */
  w32((uint32_t)(0x105d29bc), (EDX));
  /* 105a99e1 cmp dword ptr [0x105d29bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d29bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a99e8 jne 0x105a99f4 */
  if (!C.zf) goto L_105a99f4;
  /* 105a99ea push 9 */
  push32((uint32_t)(0x9u));
  /* 105a99ec call 0x105a5840 */
  push32(0x105a99f1u); f_105a5840();
  /* 105a99f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a99f4:;
  /* 105a99f4 mov eax, dword ptr [0x105d2988] */
  EAX = (r32((uint32_t)(0x105d2988)));
  /* 105a99f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a99fc jmp 0x105a9a07 */
  goto L_105a9a07;
L_105a99fe:;
  /* 105a99fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9a01 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9a04 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105a9a07:;
  /* 105a9a07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9a0a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105a9a0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a9a0f je 0x105a9a77 */
  if (C.zf) goto L_105a9a77;
  /* 105a9a11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9a14 push ecx */
  push32((uint32_t)(ECX));
  /* 105a9a15 call 0x105aa820 */
  push32(0x105a9a1au); f_105aa820();
  /* 105a9a1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9a1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9a20 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105a9a23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9a26 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105a9a29 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9a2c je 0x105a9a75 */
  if (C.zf) goto L_105a9a75;
  /* 105a9a2e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 105a9a30 push 0x105ce7d4 */
  push32((uint32_t)(0x105ce7d4u));
  /* 105a9a35 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a9a37 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105a9a3a push ecx */
  push32((uint32_t)(ECX));
  /* 105a9a3b call 0x105a79f0 */
  push32(0x105a9a40u); f_105a79f0();
  /* 105a9a40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9a43 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a9a46 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105a9a48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a9a4b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9a4e jne 0x105a9a5a */
  if (!C.zf) goto L_105a9a5a;
  /* 105a9a50 push 9 */
  push32((uint32_t)(0x9u));
  /* 105a9a52 call 0x105a5840 */
  push32(0x105a9a57u); f_105a5840();
  /* 105a9a57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a9a5a:;
  /* 105a9a5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9a5d push ecx */
  push32((uint32_t)(ECX));
  /* 105a9a5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a9a61 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105a9a63 push eax */
  push32((uint32_t)(EAX));
  /* 105a9a64 call 0x105aa9a0 */
  push32(0x105a9a69u); f_105aa9a0();
  /* 105a9a69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9a6c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a9a6f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9a72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_105a9a75:;
  /* 105a9a75 jmp 0x105a99fe */
  goto L_105a99fe;
L_105a9a77:;
  /* 105a9a77 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a9a79 mov edx, dword ptr [0x105d2988] */
  EDX = (r32((uint32_t)(0x105d2988)));
  /* 105a9a7f push edx */
  push32((uint32_t)(EDX));
  /* 105a9a80 call 0x105a8480 */
  push32(0x105a9a85u); f_105a8480();
  /* 105a9a85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9a88 mov dword ptr [0x105d2988], 0 */
  w32((uint32_t)(0x105d2988), (0x0u));
  /* 105a9a92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a9a95 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105a9a9b mov dword ptr [0x105d44a0], 1 */
  w32((uint32_t)(0x105d44a0), (0x1u));
  /* 105a9aa5 mov esp, ebp */
  ESP = (EBP);
  /* 105a9aa7 pop ebp */
  EBP = (pop32());
  /* 105a9aa8 ret  */
  ESPCHK(0x105a9960u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ab0 @ 0x105a9ab0 (216 bytes, 69 insns) */
void f_105a9ab0(void) {
  FTRACE(0x105a9ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a9ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a9ab1 mov ebp, esp */
  EBP = (ESP);
  /* 105a9ab3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9ab6 cmp dword ptr [0x105d44b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d44b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9abd jne 0x105a9ac4 */
  if (!C.zf) goto L_105a9ac4;
  /* 105a9abf call 0x105aeb50 */
  push32(0x105a9ac4u); f_105aeb50();
L_105a9ac4:;
  /* 105a9ac4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 105a9ac9 push 0x105d29f8 */
  push32((uint32_t)(0x105d29f8u));
  /* 105a9ace push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9ad0 call dword ptr [0x105d5228] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5228))), 0x105a9ad6u);
  /* 105a9ad6 mov dword ptr [0x105d29cc], 0x105d29f8 */
  w32((uint32_t)(0x105d29cc), (0x105d29f8u));
  /* 105a9ae0 mov eax, dword ptr [0x105d44cc] */
  EAX = (r32((uint32_t)(0x105d44cc)));
  /* 105a9ae5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105a9ae8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a9aea jne 0x105a9af7 */
  if (!C.zf) goto L_105a9af7;
  /* 105a9aec mov edx, dword ptr [0x105d29cc] */
  EDX = (r32((uint32_t)(0x105d29cc)));
  /* 105a9af2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105a9af5 jmp 0x105a9aff */
  goto L_105a9aff;
L_105a9af7:;
  /* 105a9af7 mov eax, dword ptr [0x105d44cc] */
  EAX = (r32((uint32_t)(0x105d44cc)));
  /* 105a9afc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_105a9aff:;
  /* 105a9aff mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105a9b02 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105a9b05 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 105a9b08 push edx */
  push32((uint32_t)(EDX));
  /* 105a9b09 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 105a9b0c push eax */
  push32((uint32_t)(EAX));
  /* 105a9b0d push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9b0f push 0 */
  push32((uint32_t)(0x0u));
  /* 105a9b11 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105a9b14 push ecx */
  push32((uint32_t)(ECX));
  /* 105a9b15 call 0x105a9b90 */
  push32(0x105a9b1au); f_105a9b90();
  /* 105a9b1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9b1d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 105a9b22 push 0x105ce7e0 */
  push32((uint32_t)(0x105ce7e0u));
  /* 105a9b27 push 2 */
  push32((uint32_t)(0x2u));
  /* 105a9b29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a9b2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9b2f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 105a9b32 push ecx */
  push32((uint32_t)(ECX));
  /* 105a9b33 call 0x105a79f0 */
  push32(0x105a9b38u); f_105a79f0();
  /* 105a9b38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9b3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105a9b3e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9b42 jne 0x105a9b4e */
  if (!C.zf) goto L_105a9b4e;
  /* 105a9b44 push 8 */
  push32((uint32_t)(0x8u));
  /* 105a9b46 call 0x105a5840 */
  push32(0x105a9b4bu); f_105a5840();
  /* 105a9b4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105a9b4e:;
  /* 105a9b4e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 105a9b51 push edx */
  push32((uint32_t)(EDX));
  /* 105a9b52 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 105a9b55 push eax */
  push32((uint32_t)(EAX));
  /* 105a9b56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a9b59 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a9b5c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 105a9b5f push eax */
  push32((uint32_t)(EAX));
  /* 105a9b60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a9b63 push ecx */
  push32((uint32_t)(ECX));
  /* 105a9b64 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105a9b67 push edx */
  push32((uint32_t)(EDX));
  /* 105a9b68 call 0x105a9b90 */
  push32(0x105a9b6du); f_105a9b90();
  /* 105a9b6d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9b70 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a9b73 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9b76 mov dword ptr [0x105d29b0], eax */
  w32((uint32_t)(0x105d29b0), (EAX));
  /* 105a9b7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105a9b7e mov dword ptr [0x105d29b4], ecx */
  w32((uint32_t)(0x105d29b4), (ECX));
  /* 105a9b84 mov esp, ebp */
  ESP = (EBP);
  /* 105a9b86 pop ebp */
  EBP = (pop32());
  /* 105a9b87 ret  */
  ESPCHK(0x105a9ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b90 @ 0x105a9b90 (1060 bytes, 360 insns) */
void f_105a9b90(void) {
  FTRACE(0x105a9b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a9b90 push ebp */
  push32((uint32_t)(EBP));
  /* 105a9b91 mov ebp, esp */
  EBP = (ESP);
  /* 105a9b93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9b96 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9b99 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105a9b9f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a9ba2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 105a9ba8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105a9bab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105a9bae cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9bb2 je 0x105a9bc5 */
  if (C.zf) goto L_105a9bc5;
  /* 105a9bb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a9bb7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9bba mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105a9bbc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a9bbf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9bc2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_105a9bc5:;
  /* 105a9bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9bc8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105a9bcb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9bce jne 0x105a9c9d */
  if (!C.zf) goto L_105a9c9d;
L_105a9bd4:;
  /* 105a9bd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9bd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9bda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105a9bdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9be0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105a9be3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9be6 je 0x105a9c62 */
  if (C.zf) goto L_105a9c62;
  /* 105a9be8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9beb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105a9bee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a9bf0 je 0x105a9c62 */
  if (C.zf) goto L_105a9c62;
  /* 105a9bf2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9bf5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a9bf7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105a9bf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a9bfb mov al, byte ptr [edx + 0x105d2ec1] */
  AL = (r8((uint32_t)(EDX + 0x105d2ec1)));
  /* 105a9c01 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105a9c04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a9c06 je 0x105a9c37 */
  if (C.zf) goto L_105a9c37;
  /* 105a9c08 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9c0b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105a9c0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9c10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9c13 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105a9c15 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9c19 je 0x105a9c37 */
  if (C.zf) goto L_105a9c37;
  /* 105a9c1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9c1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9c21 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105a9c23 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105a9c25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9c28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9c2b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 105a9c2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9c31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9c34 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105a9c37:;
  /* 105a9c37 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9c3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105a9c3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9c3f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9c42 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105a9c44 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9c48 je 0x105a9c5d */
  if (C.zf) goto L_105a9c5d;
  /* 105a9c4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9c4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9c50 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105a9c52 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105a9c54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9c57 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9c5a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_105a9c5d:;
  /* 105a9c5d jmp 0x105a9bd4 */
  goto L_105a9bd4;
L_105a9c62:;
  /* 105a9c62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9c65 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105a9c67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9c6a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9c6d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105a9c6f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9c73 je 0x105a9c84 */
  if (C.zf) goto L_105a9c84;
  /* 105a9c75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9c78 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 105a9c7b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9c7e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9c81 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_105a9c84:;
  /* 105a9c84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9c87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105a9c8a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9c8d jne 0x105a9c98 */
  if (!C.zf) goto L_105a9c98;
  /* 105a9c8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9c92 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9c95 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105a9c98:;
  /* 105a9c98 jmp 0x105a9d6c */
  goto L_105a9d6c;
L_105a9c9d:;
  /* 105a9c9d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9ca0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105a9ca2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9ca5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9ca8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105a9caa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9cae je 0x105a9cc3 */
  if (C.zf) goto L_105a9cc3;
  /* 105a9cb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9cb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9cb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105a9cb8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105a9cba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9cbd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9cc0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_105a9cc3:;
  /* 105a9cc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9cc6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105a9cc8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 105a9ccb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9cce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9cd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a9cd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a9cd7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a9cdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a9cdf mov dl, byte ptr [ecx + 0x105d2ec1] */
  DL = (r8((uint32_t)(ECX + 0x105d2ec1)));
  /* 105a9ce5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 105a9ce8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a9cea je 0x105a9d1b */
  if (C.zf) goto L_105a9d1b;
  /* 105a9cec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9cef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105a9cf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9cf4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9cf7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105a9cf9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9cfd je 0x105a9d12 */
  if (C.zf) goto L_105a9d12;
  /* 105a9cff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9d02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9d05 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105a9d07 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105a9d09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9d0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9d0f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_105a9d12:;
  /* 105a9d12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9d15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9d18 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105a9d1b:;
  /* 105a9d1b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a9d1e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105a9d24 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9d27 je 0x105a9d47 */
  if (C.zf) goto L_105a9d47;
  /* 105a9d29 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a9d2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105a9d31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a9d33 je 0x105a9d47 */
  if (C.zf) goto L_105a9d47;
  /* 105a9d35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a9d38 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105a9d3e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9d41 jne 0x105a9c9d */
  if (!C.zf) goto L_105a9c9d;
L_105a9d47:;
  /* 105a9d47 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105a9d4a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105a9d50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a9d52 jne 0x105a9d5f */
  if (!C.zf) goto L_105a9d5f;
  /* 105a9d54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9d57 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9d5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a9d5d jmp 0x105a9d6c */
  goto L_105a9d6c;
L_105a9d5f:;
  /* 105a9d5f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9d63 je 0x105a9d6c */
  if (C.zf) goto L_105a9d6c;
  /* 105a9d65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9d68 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_105a9d6c:;
  /* 105a9d6c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_105a9d73:;
  /* 105a9d73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9d76 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105a9d79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a9d7b je 0x105a9d9e */
  if (C.zf) goto L_105a9d9e;
L_105a9d7d:;
  /* 105a9d7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9d80 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105a9d83 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9d86 je 0x105a9d93 */
  if (C.zf) goto L_105a9d93;
  /* 105a9d88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9d8b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105a9d8e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9d91 jne 0x105a9d9e */
  if (!C.zf) goto L_105a9d9e;
L_105a9d93:;
  /* 105a9d93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9d96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9d99 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105a9d9c jmp 0x105a9d7d */
  goto L_105a9d7d;
L_105a9d9e:;
  /* 105a9d9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9da1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105a9da4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a9da6 jne 0x105a9dad */
  if (!C.zf) goto L_105a9dad;
  /* 105a9da8 jmp 0x105a9f8b */
  goto L_105a9f8b;
L_105a9dad:;
  /* 105a9dad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9db1 je 0x105a9dc4 */
  if (C.zf) goto L_105a9dc4;
  /* 105a9db3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a9db6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9db9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105a9dbb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a9dbe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9dc1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_105a9dc4:;
  /* 105a9dc4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a9dc7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105a9dc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9dcc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a9dcf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_105a9dd1:;
  /* 105a9dd1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 105a9dd8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_105a9ddf:;
  /* 105a9ddf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9de2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105a9de5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9de8 jne 0x105a9dfe */
  if (!C.zf) goto L_105a9dfe;
  /* 105a9dea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9ded add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9df0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105a9df3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105a9df6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9df9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105a9dfc jmp 0x105a9ddf */
  goto L_105a9ddf;
L_105a9dfe:;
  /* 105a9dfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9e01 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105a9e04 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9e07 jne 0x105a9e5a */
  if (!C.zf) goto L_105a9e5a;
  /* 105a9e09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105a9e0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a9e0e mov ecx, 2 */
  ECX = (0x2u);
  /* 105a9e13 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105a9e15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105a9e17 jne 0x105a9e52 */
  if (!C.zf) goto L_105a9e52;
  /* 105a9e19 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9e1d je 0x105a9e3f */
  if (C.zf) goto L_105a9e3f;
  /* 105a9e1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9e22 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 105a9e26 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9e29 jne 0x105a9e36 */
  if (!C.zf) goto L_105a9e36;
  /* 105a9e2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9e2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9e31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105a9e34 jmp 0x105a9e3d */
  goto L_105a9e3d;
L_105a9e36:;
  /* 105a9e36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_105a9e3d:;
  /* 105a9e3d jmp 0x105a9e46 */
  goto L_105a9e46;
L_105a9e3f:;
  /* 105a9e3f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_105a9e46:;
  /* 105a9e46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105a9e48 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9e4c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 105a9e4f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_105a9e52:;
  /* 105a9e52 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105a9e55 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105a9e57 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_105a9e5a:;
  /* 105a9e5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105a9e5d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105a9e60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9e63 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105a9e66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a9e68 je 0x105a9e8e */
  if (C.zf) goto L_105a9e8e;
  /* 105a9e6a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9e6e je 0x105a9e7f */
  if (C.zf) goto L_105a9e7f;
  /* 105a9e70 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9e73 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 105a9e76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9e79 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9e7c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_105a9e7f:;
  /* 105a9e7f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9e82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105a9e84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9e87 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9e8a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105a9e8c jmp 0x105a9e5a */
  goto L_105a9e5a;
L_105a9e8e:;
  /* 105a9e8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9e91 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105a9e94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105a9e96 je 0x105a9eb4 */
  if (C.zf) goto L_105a9eb4;
  /* 105a9e98 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9e9c jne 0x105a9eb9 */
  if (!C.zf) goto L_105a9eb9;
  /* 105a9e9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9ea1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105a9ea4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9ea7 je 0x105a9eb4 */
  if (C.zf) goto L_105a9eb4;
  /* 105a9ea9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9eac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105a9eaf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9eb2 jne 0x105a9eb9 */
  if (!C.zf) goto L_105a9eb9;
L_105a9eb4:;
  /* 105a9eb4 jmp 0x105a9f64 */
  goto L_105a9f64;
L_105a9eb9:;
  /* 105a9eb9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9ebd je 0x105a9f56 */
  if (C.zf) goto L_105a9f56;
  /* 105a9ec3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9ec7 je 0x105a9f1d */
  if (C.zf) goto L_105a9f1d;
  /* 105a9ec9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9ecc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a9ece mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105a9ed0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a9ed2 mov cl, byte ptr [eax + 0x105d2ec1] */
  CL = (r8((uint32_t)(EAX + 0x105d2ec1)));
  /* 105a9ed8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105a9edb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a9edd je 0x105a9f08 */
  if (C.zf) goto L_105a9f08;
  /* 105a9edf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9ee2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9ee5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105a9ee7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 105a9ee9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9eec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9eef mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 105a9ef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9ef5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9ef8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a9efb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9efe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105a9f00 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9f03 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9f06 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105a9f08:;
  /* 105a9f08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9f0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9f0e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105a9f10 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105a9f12 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9f15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9f18 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 105a9f1b jmp 0x105a9f49 */
  goto L_105a9f49;
L_105a9f1d:;
  /* 105a9f1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9f20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105a9f22 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105a9f24 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105a9f26 mov cl, byte ptr [eax + 0x105d2ec1] */
  CL = (r8((uint32_t)(EAX + 0x105d2ec1)));
  /* 105a9f2c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105a9f2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105a9f31 je 0x105a9f49 */
  if (C.zf) goto L_105a9f49;
  /* 105a9f33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9f36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9f39 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105a9f3c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9f3f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105a9f41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9f44 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9f47 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105a9f49:;
  /* 105a9f49 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9f4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105a9f4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9f51 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9f54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105a9f56:;
  /* 105a9f56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105a9f59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9f5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105a9f5f jmp 0x105a9dd1 */
  goto L_105a9dd1;
L_105a9f64:;
  /* 105a9f64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9f68 je 0x105a9f79 */
  if (C.zf) goto L_105a9f79;
  /* 105a9f6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9f6d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 105a9f70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105a9f73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9f76 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_105a9f79:;
  /* 105a9f79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9f7c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105a9f7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9f81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105a9f84 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105a9f86 jmp 0x105a9d73 */
  goto L_105a9d73;
L_105a9f8b:;
  /* 105a9f8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9f8f je 0x105a9fa3 */
  if (C.zf) goto L_105a9fa3;
  /* 105a9f91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a9f94 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105a9f9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105a9f9d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9fa0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_105a9fa3:;
  /* 105a9fa3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a9fa6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105a9fa8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105a9fab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105a9fae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105a9fb0 mov esp, ebp */
  ESP = (EBP);
  /* 105a9fb2 pop ebp */
  EBP = (pop32());
  /* 105a9fb3 ret  */
  ESPCHK(0x105a9b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fc0 @ 0x105a9fc0 (537 bytes, 173 insns) */
void f_105a9fc0(void) {
  FTRACE(0x105a9fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105a9fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 105a9fc1 mov ebp, esp */
  EBP = (ESP);
  /* 105a9fc3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105a9fc6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 105a9fcd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 105a9fd4 cmp dword ptr [0x105d2afc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2afc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9fdb jne 0x105aa01a */
  if (!C.zf) goto L_105aa01a;
  /* 105a9fdd call dword ptr [0x105d5284] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5284))), 0x105a9fe3u);
  /* 105a9fe3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105a9fe6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105a9fea je 0x105a9ff8 */
  if (C.zf) goto L_105a9ff8;
  /* 105a9fec mov dword ptr [0x105d2afc], 1 */
  w32((uint32_t)(0x105d2afc), (0x1u));
  /* 105a9ff6 jmp 0x105aa01a */
  goto L_105aa01a;
L_105a9ff8:;
  /* 105a9ff8 call dword ptr [0x105d5280] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5280))), 0x105a9ffeu);
  /* 105a9ffe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105aa001 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa005 je 0x105aa013 */
  if (C.zf) goto L_105aa013;
  /* 105aa007 mov dword ptr [0x105d2afc], 2 */
  w32((uint32_t)(0x105d2afc), (0x2u));
  /* 105aa011 jmp 0x105aa01a */
  goto L_105aa01a;
L_105aa013:;
  /* 105aa013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105aa015 jmp 0x105aa1d5 */
  goto L_105aa1d5;
L_105aa01a:;
  /* 105aa01a cmp dword ptr [0x105d2afc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d2afc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa021 jne 0x105aa11e */
  if (!C.zf) goto L_105aa11e;
  /* 105aa027 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa02b jne 0x105aa043 */
  if (!C.zf) goto L_105aa043;
  /* 105aa02d call dword ptr [0x105d5284] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5284))), 0x105aa033u);
  /* 105aa033 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105aa036 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa03a jne 0x105aa043 */
  if (!C.zf) goto L_105aa043;
  /* 105aa03c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105aa03e jmp 0x105aa1d5 */
  goto L_105aa1d5;
L_105aa043:;
  /* 105aa043 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105aa046 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105aa049:;
  /* 105aa049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa04c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105aa04e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 105aa051 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105aa053 je 0x105aa075 */
  if (C.zf) goto L_105aa075;
  /* 105aa055 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa058 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa05b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105aa05e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa061 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105aa063 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 105aa066 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105aa068 jne 0x105aa073 */
  if (!C.zf) goto L_105aa073;
  /* 105aa06a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa06d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa070 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105aa073:;
  /* 105aa073 jmp 0x105aa049 */
  goto L_105aa049;
L_105aa075:;
  /* 105aa075 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa078 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa07b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 105aa07d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa080 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105aa083 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa085 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa087 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa089 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa08b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa08e push edx */
  push32((uint32_t)(EDX));
  /* 105aa08f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105aa092 push eax */
  push32((uint32_t)(EAX));
  /* 105aa093 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa095 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa097 call dword ptr [0x105d527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d527c))), 0x105aa09du);
  /* 105aa09d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105aa0a0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa0a4 je 0x105aa0c4 */
  if (C.zf) goto L_105aa0c4;
  /* 105aa0a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 105aa0a8 push 0x105ce7ec */
  push32((uint32_t)(0x105ce7ecu));
  /* 105aa0ad push 2 */
  push32((uint32_t)(0x2u));
  /* 105aa0af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105aa0b2 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa0b3 call 0x105a79f0 */
  push32(0x105aa0b8u); f_105a79f0();
  /* 105aa0b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa0bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105aa0be cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa0c2 jne 0x105aa0d5 */
  if (!C.zf) goto L_105aa0d5;
L_105aa0c4:;
  /* 105aa0c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105aa0c7 push edx */
  push32((uint32_t)(EDX));
  /* 105aa0c8 call dword ptr [0x105d5278] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5278))), 0x105aa0ceu);
  /* 105aa0ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105aa0d0 jmp 0x105aa1d5 */
  goto L_105aa1d5;
L_105aa0d5:;
  /* 105aa0d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa0d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa0d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105aa0dc push eax */
  push32((uint32_t)(EAX));
  /* 105aa0dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105aa0e0 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa0e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa0e4 push edx */
  push32((uint32_t)(EDX));
  /* 105aa0e5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105aa0e8 push eax */
  push32((uint32_t)(EAX));
  /* 105aa0e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa0eb push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa0ed call dword ptr [0x105d527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d527c))), 0x105aa0f3u);
  /* 105aa0f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105aa0f5 jne 0x105aa10c */
  if (!C.zf) goto L_105aa10c;
  /* 105aa0f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 105aa0f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105aa0fc push ecx */
  push32((uint32_t)(ECX));
  /* 105aa0fd call 0x105a8480 */
  push32(0x105aa102u); f_105a8480();
  /* 105aa102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa105 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_105aa10c:;
  /* 105aa10c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105aa10f push edx */
  push32((uint32_t)(EDX));
  /* 105aa110 call dword ptr [0x105d5278] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5278))), 0x105aa116u);
  /* 105aa116 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105aa119 jmp 0x105aa1d5 */
  goto L_105aa1d5;
L_105aa11e:;
  /* 105aa11e cmp dword ptr [0x105d2afc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x105d2afc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa125 jne 0x105aa1d3 */
  if (!C.zf) goto L_105aa1d3;
  /* 105aa12b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa12f jne 0x105aa147 */
  if (!C.zf) goto L_105aa147;
  /* 105aa131 call dword ptr [0x105d5280] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5280))), 0x105aa137u);
  /* 105aa137 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105aa13a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa13e jne 0x105aa147 */
  if (!C.zf) goto L_105aa147;
  /* 105aa140 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105aa142 jmp 0x105aa1d5 */
  goto L_105aa1d5;
L_105aa147:;
  /* 105aa147 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105aa14a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105aa14d:;
  /* 105aa14d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa150 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105aa153 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105aa155 je 0x105aa175 */
  if (C.zf) goto L_105aa175;
  /* 105aa157 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa15a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa15d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105aa160 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa163 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105aa166 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105aa168 jne 0x105aa173 */
  if (!C.zf) goto L_105aa173;
  /* 105aa16a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa16d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa170 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105aa173:;
  /* 105aa173 jmp 0x105aa14d */
  goto L_105aa14d;
L_105aa175:;
  /* 105aa175 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa178 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa17b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa17e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105aa181 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 105aa186 push 0x105ce7ec */
  push32((uint32_t)(0x105ce7ecu));
  /* 105aa18b push 2 */
  push32((uint32_t)(0x2u));
  /* 105aa18d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105aa190 push edx */
  push32((uint32_t)(EDX));
  /* 105aa191 call 0x105a79f0 */
  push32(0x105aa196u); f_105a79f0();
  /* 105aa196 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa199 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105aa19c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa1a0 jne 0x105aa1b0 */
  if (!C.zf) goto L_105aa1b0;
  /* 105aa1a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105aa1a5 push eax */
  push32((uint32_t)(EAX));
  /* 105aa1a6 call dword ptr [0x105d5274] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5274))), 0x105aa1acu);
  /* 105aa1ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105aa1ae jmp 0x105aa1d5 */
  goto L_105aa1d5;
L_105aa1b0:;
  /* 105aa1b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105aa1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa1b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105aa1b7 push edx */
  push32((uint32_t)(EDX));
  /* 105aa1b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa1bb push eax */
  push32((uint32_t)(EAX));
  /* 105aa1bc call 0x105aeb80 */
  push32(0x105aa1c1u); f_105aeb80();
  /* 105aa1c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa1c4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105aa1c7 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa1c8 call dword ptr [0x105d5274] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5274))), 0x105aa1ceu);
  /* 105aa1ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa1d1 jmp 0x105aa1d5 */
  goto L_105aa1d5;
L_105aa1d3:;
  /* 105aa1d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105aa1d5:;
  /* 105aa1d5 mov esp, ebp */
  ESP = (EBP);
  /* 105aa1d7 pop ebp */
  EBP = (pop32());
  /* 105aa1d8 ret  */
  ESPCHK(0x105a9fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1e0 @ 0x105aa1e0 (77 bytes, 25 insns) */
void f_105aa1e0(void) {
  FTRACE(0x105aa1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105aa1e1 mov ebp, esp */
  EBP = (ESP);
  /* 105aa1e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa1e5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 105aa1ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105aa1ec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa1f0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 105aa1f3 push eax */
  push32((uint32_t)(EAX));
  /* 105aa1f4 call dword ptr [0x105d51fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d51fc))), 0x105aa1fau);
  /* 105aa1fa mov dword ptr [0x105d4344], eax */
  w32((uint32_t)(0x105d4344), (EAX));
  /* 105aa1ff cmp dword ptr [0x105d4344], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d4344))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa206 jne 0x105aa20c */
  if (!C.zf) goto L_105aa20c;
  /* 105aa208 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105aa20a jmp 0x105aa22b */
  goto L_105aa22b;
L_105aa20c:;
  /* 105aa20c call 0x105ac640 */
  push32(0x105aa211u); f_105ac640();
  /* 105aa211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105aa213 jne 0x105aa226 */
  if (!C.zf) goto L_105aa226;
  /* 105aa215 mov ecx, dword ptr [0x105d4344] */
  ECX = (r32((uint32_t)(0x105d4344)));
  /* 105aa21b push ecx */
  push32((uint32_t)(ECX));
  /* 105aa21c call dword ptr [0x105d51f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d51f4))), 0x105aa222u);
  /* 105aa222 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105aa224 jmp 0x105aa22b */
  goto L_105aa22b;
L_105aa226:;
  /* 105aa226 mov eax, 1 */
  EAX = (0x1u);
L_105aa22b:;
  /* 105aa22b pop ebp */
  EBP = (pop32());
  /* 105aa22c ret  */
  ESPCHK(0x105aa1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a230 @ 0x105aa230 (156 bytes, 48 insns) */
void f_105aa230(void) {
  FTRACE(0x105aa230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa230 push ebp */
  push32((uint32_t)(EBP));
  /* 105aa231 mov ebp, esp */
  EBP = (ESP);
  /* 105aa233 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa236 mov eax, dword ptr [0x105d2fe8] */
  EAX = (r32((uint32_t)(0x105d2fe8)));
  /* 105aa23b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105aa23e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105aa245 jmp 0x105aa250 */
  goto L_105aa250;
L_105aa247:;
  /* 105aa247 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa24a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa24d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105aa250:;
  /* 105aa250 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa253 cmp edx, dword ptr [0x105d2fe4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x105d2fe4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa259 jge 0x105aa2a6 */
  if ((C.sf==C.of)) goto L_105aa2a6;
  /* 105aa25b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 105aa260 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 105aa265 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa268 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105aa26b push ecx */
  push32((uint32_t)(ECX));
  /* 105aa26c call dword ptr [0x105d5294] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5294))), 0x105aa272u);
  /* 105aa272 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105aa277 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa279 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa27c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 105aa27f push eax */
  push32((uint32_t)(EAX));
  /* 105aa280 call dword ptr [0x105d5294] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5294))), 0x105aa286u);
  /* 105aa286 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa289 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105aa28c push edx */
  push32((uint32_t)(EDX));
  /* 105aa28d push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa28f mov eax, dword ptr [0x105d4344] */
  EAX = (r32((uint32_t)(0x105d4344)));
  /* 105aa294 push eax */
  push32((uint32_t)(EAX));
  /* 105aa295 call dword ptr [0x105d5200] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5200))), 0x105aa29bu);
  /* 105aa29b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa29e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa2a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105aa2a4 jmp 0x105aa247 */
  goto L_105aa247;
L_105aa2a6:;
  /* 105aa2a6 mov edx, dword ptr [0x105d2fe8] */
  EDX = (r32((uint32_t)(0x105d2fe8)));
  /* 105aa2ac push edx */
  push32((uint32_t)(EDX));
  /* 105aa2ad push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa2af mov eax, dword ptr [0x105d4344] */
  EAX = (r32((uint32_t)(0x105d4344)));
  /* 105aa2b4 push eax */
  push32((uint32_t)(EAX));
  /* 105aa2b5 call dword ptr [0x105d5200] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5200))), 0x105aa2bbu);
  /* 105aa2bb mov ecx, dword ptr [0x105d4344] */
  ECX = (r32((uint32_t)(0x105d4344)));
  /* 105aa2c1 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa2c2 call dword ptr [0x105d51f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d51f4))), 0x105aa2c8u);
  /* 105aa2c8 mov esp, ebp */
  ESP = (EBP);
  /* 105aa2ca pop ebp */
  EBP = (pop32());
  /* 105aa2cb ret  */
  ESPCHK(0x105aa230u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x105aa2d0 (73 bytes, 19 insns) */
void f_105aa2d0(void) {
  FTRACE(0x105aa2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105aa2d1 mov ebp, esp */
  EBP = (ESP);
  /* 105aa2d3 cmp dword ptr [0x105d2990], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d2990))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa2da je 0x105aa2ee */
  if (C.zf) goto L_105aa2ee;
  /* 105aa2dc cmp dword ptr [0x105d2990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa2e3 jne 0x105aa317 */
  if (!C.zf) goto L_105aa317;
  /* 105aa2e5 cmp dword ptr [0x105d2994], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d2994))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa2ec jne 0x105aa317 */
  if (!C.zf) goto L_105aa317;
L_105aa2ee:;
  /* 105aa2ee push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 105aa2f3 call 0x105aa320 */
  push32(0x105aa2f8u); f_105aa320();
  /* 105aa2f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa2fb cmp dword ptr [0x105d2b00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2b00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa302 je 0x105aa30a */
  if (C.zf) goto L_105aa30a;
  /* 105aa304 call dword ptr [0x105d2b00] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d2b00))), 0x105aa30au);
L_105aa30a:;
  /* 105aa30a push 0xff */
  push32((uint32_t)(0xffu));
  /* 105aa30f call 0x105aa320 */
  push32(0x105aa314u); f_105aa320();
  /* 105aa314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105aa317:;
  /* 105aa317 pop ebp */
  EBP = (pop32());
  /* 105aa318 ret  */
  ESPCHK(0x105aa2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a320 @ 0x105aa320 (447 bytes, 131 insns) */
void f_105aa320(void) {
  FTRACE(0x105aa320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa320 push ebp */
  push32((uint32_t)(EBP));
  /* 105aa321 mov ebp, esp */
  EBP = (ESP);
  /* 105aa323 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa329 push ebx */
  push32((uint32_t)(EBX));
  /* 105aa32a push esi */
  push32((uint32_t)(ESI));
  /* 105aa32b push edi */
  push32((uint32_t)(EDI));
  /* 105aa32c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105aa333 jmp 0x105aa33e */
  goto L_105aa33e;
L_105aa335:;
  /* 105aa335 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa338 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa33b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105aa33e:;
  /* 105aa33e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa342 jae 0x105aa357 */
  if (!C.cf) goto L_105aa357;
  /* 105aa344 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa347 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa34a cmp edx, dword ptr [ecx*8 + 0x105d0ab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x105d0ab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa351 jne 0x105aa355 */
  if (!C.zf) goto L_105aa355;
  /* 105aa353 jmp 0x105aa357 */
  goto L_105aa357;
L_105aa355:;
  /* 105aa355 jmp 0x105aa335 */
  goto L_105aa335;
L_105aa357:;
  /* 105aa357 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa35a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa35d cmp ecx, dword ptr [eax*8 + 0x105d0ab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x105d0ab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa364 jne 0x105aa4d8 */
  if (!C.zf) goto L_105aa4d8;
  /* 105aa36a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa371 je 0x105aa394 */
  if (C.zf) goto L_105aa394;
  /* 105aa373 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa376 mov eax, dword ptr [edx*8 + 0x105d0abc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x105d0abc)));
  /* 105aa37d push eax */
  push32((uint32_t)(EAX));
  /* 105aa37e push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa380 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa382 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa384 push 1 */
  push32((uint32_t)(0x1u));
  /* 105aa386 call 0x105a5990 */
  push32(0x105aa38bu); f_105a5990();
  /* 105aa38b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa38e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa391 jne 0x105aa394 */
  if (!C.zf) goto L_105aa394;
  /* 105aa393 int3  */
  x86_unimpl("int3 @ 0x105aa393");
L_105aa394:;
  /* 105aa394 cmp dword ptr [0x105d2990], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d2990))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa39b je 0x105aa3af */
  if (C.zf) goto L_105aa3af;
  /* 105aa39d cmp dword ptr [0x105d2990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa3a4 jne 0x105aa3e8 */
  if (!C.zf) goto L_105aa3e8;
  /* 105aa3a6 cmp dword ptr [0x105d2994], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d2994))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa3ad jne 0x105aa3e8 */
  if (!C.zf) goto L_105aa3e8;
L_105aa3af:;
  /* 105aa3af push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa3b1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 105aa3b4 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa3b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa3b8 mov eax, dword ptr [edx*8 + 0x105d0abc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x105d0abc)));
  /* 105aa3bf push eax */
  push32((uint32_t)(EAX));
  /* 105aa3c0 call 0x105aa820 */
  push32(0x105aa3c5u); f_105aa820();
  /* 105aa3c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa3c8 push eax */
  push32((uint32_t)(EAX));
  /* 105aa3c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa3cc mov edx, dword ptr [ecx*8 + 0x105d0abc] */
  EDX = (r32((uint32_t)(ECX*8 + 0x105d0abc)));
  /* 105aa3d3 push edx */
  push32((uint32_t)(EDX));
  /* 105aa3d4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 105aa3d6 call dword ptr [0x105d5210] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5210))), 0x105aa3dcu);
  /* 105aa3dc push eax */
  push32((uint32_t)(EAX));
  /* 105aa3dd call dword ptr [0x105d5214] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5214))), 0x105aa3e3u);
  /* 105aa3e3 jmp 0x105aa4d8 */
  goto L_105aa4d8;
L_105aa3e8:;
  /* 105aa3e8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa3ef je 0x105aa4d8 */
  if (C.zf) goto L_105aa4d8;
  /* 105aa3f5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 105aa3fa lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 105aa400 push eax */
  push32((uint32_t)(EAX));
  /* 105aa401 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa403 call dword ptr [0x105d5228] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5228))), 0x105aa409u);
  /* 105aa409 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105aa40b jne 0x105aa421 */
  if (!C.zf) goto L_105aa421;
  /* 105aa40d push 0x105cdf6c */
  push32((uint32_t)(0x105cdf6cu));
  /* 105aa412 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 105aa418 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa419 call 0x105aa9a0 */
  push32(0x105aa41eu); f_105aa9a0();
  /* 105aa41e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105aa421:;
  /* 105aa421 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 105aa427 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105aa42a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa42d push eax */
  push32((uint32_t)(EAX));
  /* 105aa42e call 0x105aa820 */
  push32(0x105aa433u); f_105aa820();
  /* 105aa433 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa436 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa439 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa43c jbe 0x105aa46a */
  if ((C.cf||C.zf)) goto L_105aa46a;
  /* 105aa43e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 105aa444 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa445 call 0x105aa820 */
  push32(0x105aa44au); f_105aa820();
  /* 105aa44a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa44d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa450 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 105aa454 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105aa457 push 3 */
  push32((uint32_t)(0x3u));
  /* 105aa459 push 0x105cdf68 */
  push32((uint32_t)(0x105cdf68u));
  /* 105aa45e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa461 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa462 call 0x105ab210 */
  push32(0x105aa467u); f_105ab210();
  /* 105aa467 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105aa46a:;
  /* 105aa46a push 0x105ceaa8 */
  push32((uint32_t)(0x105ceaa8u));
  /* 105aa46f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 105aa475 push edx */
  push32((uint32_t)(EDX));
  /* 105aa476 call 0x105aa9a0 */
  push32(0x105aa47bu); f_105aa9a0();
  /* 105aa47b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa47e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa481 push eax */
  push32((uint32_t)(EAX));
  /* 105aa482 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 105aa488 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa489 call 0x105aa9b0 */
  push32(0x105aa48eu); f_105aa9b0();
  /* 105aa48e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa491 push 0x105cdee0 */
  push32((uint32_t)(0x105cdee0u));
  /* 105aa496 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 105aa49c push edx */
  push32((uint32_t)(EDX));
  /* 105aa49d call 0x105aa9b0 */
  push32(0x105aa4a2u); f_105aa9b0();
  /* 105aa4a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa4a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa4a8 mov ecx, dword ptr [eax*8 + 0x105d0abc] */
  ECX = (r32((uint32_t)(EAX*8 + 0x105d0abc)));
  /* 105aa4af push ecx */
  push32((uint32_t)(ECX));
  /* 105aa4b0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 105aa4b6 push edx */
  push32((uint32_t)(EDX));
  /* 105aa4b7 call 0x105aa9b0 */
  push32(0x105aa4bcu); f_105aa9b0();
  /* 105aa4bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa4bf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 105aa4c4 push 0x105cea80 */
  push32((uint32_t)(0x105cea80u));
  /* 105aa4c9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 105aa4cf push eax */
  push32((uint32_t)(EAX));
  /* 105aa4d0 call 0x105ab150 */
  push32(0x105aa4d5u); f_105ab150();
  /* 105aa4d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105aa4d8:;
  /* 105aa4d8 pop edi */
  EDI = (pop32());
  /* 105aa4d9 pop esi */
  ESI = (pop32());
  /* 105aa4da pop ebx */
  EBX = (pop32());
  /* 105aa4db mov esp, ebp */
  ESP = (EBP);
  /* 105aa4dd pop ebp */
  EBP = (pop32());
  /* 105aa4de ret  */
  ESPCHK(0x105aa320u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x105aa4e0 (80 bytes, 27 insns) */
void f_105aa4e0(void) {
  FTRACE(0x105aa4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105aa4e1 mov ebp, esp */
  EBP = (ESP);
  /* 105aa4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa4e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105aa4eb jmp 0x105aa4f6 */
  goto L_105aa4f6;
L_105aa4ed:;
  /* 105aa4ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa4f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa4f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105aa4f6:;
  /* 105aa4f6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa4fa jae 0x105aa50f */
  if (!C.cf) goto L_105aa50f;
  /* 105aa4fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa4ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa502 cmp edx, dword ptr [ecx*8 + 0x105d0ab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x105d0ab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa509 jne 0x105aa50d */
  if (!C.zf) goto L_105aa50d;
  /* 105aa50b jmp 0x105aa50f */
  goto L_105aa50f;
L_105aa50d:;
  /* 105aa50d jmp 0x105aa4ed */
  goto L_105aa4ed;
L_105aa50f:;
  /* 105aa50f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa512 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa515 cmp ecx, dword ptr [eax*8 + 0x105d0ab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x105d0ab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa51c jne 0x105aa52a */
  if (!C.zf) goto L_105aa52a;
  /* 105aa51e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa521 mov eax, dword ptr [edx*8 + 0x105d0abc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x105d0abc)));
  /* 105aa528 jmp 0x105aa52c */
  goto L_105aa52c;
L_105aa52a:;
  /* 105aa52a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105aa52c:;
  /* 105aa52c mov esp, ebp */
  ESP = (EBP);
  /* 105aa52e pop ebp */
  EBP = (pop32());
  /* 105aa52f ret  */
  ESPCHK(0x105aa4e0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x105aa530 (66 bytes, 28 insns) */
void f_105aa530(void) {
  FTRACE(0x105aa530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa530 push ebp */
  push32((uint32_t)(EBP));
  /* 105aa531 mov ebp, esp */
  EBP = (ESP);
  /* 105aa533 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa537 jne 0x105aa557 */
  if (!C.zf) goto L_105aa557;
  /* 105aa539 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa53d jge 0x105aa557 */
  if ((C.sf==C.of)) goto L_105aa557;
  /* 105aa53f push 1 */
  push32((uint32_t)(0x1u));
  /* 105aa541 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105aa544 push eax */
  push32((uint32_t)(EAX));
  /* 105aa545 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aa548 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa549 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa54c push edx */
  push32((uint32_t)(EDX));
  /* 105aa54d call 0x105aa580 */
  push32(0x105aa552u); f_105aa580();
  /* 105aa552 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa555 jmp 0x105aa56d */
  goto L_105aa56d;
L_105aa557:;
  /* 105aa557 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa559 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105aa55c push eax */
  push32((uint32_t)(EAX));
  /* 105aa55d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aa560 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa561 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa564 push edx */
  push32((uint32_t)(EDX));
  /* 105aa565 call 0x105aa580 */
  push32(0x105aa56au); f_105aa580();
  /* 105aa56a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105aa56d:;
  /* 105aa56d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aa570 pop ebp */
  EBP = (pop32());
  /* 105aa571 ret  */
  ESPCHK(0x105aa530u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x105aa580 (194 bytes, 71 insns) */
void f_105aa580(void) {
  FTRACE(0x105aa580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa580 push ebp */
  push32((uint32_t)(EBP));
  /* 105aa581 mov ebp, esp */
  EBP = (ESP);
  /* 105aa583 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa586 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aa589 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105aa58c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa590 je 0x105aa5a9 */
  if (C.zf) goto L_105aa5a9;
  /* 105aa592 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa595 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 105aa598 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa59b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa59e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105aa5a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa5a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105aa5a6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105aa5a9:;
  /* 105aa5a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa5ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105aa5af:;
  /* 105aa5af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa5b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105aa5b4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105aa5b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105aa5ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa5bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105aa5bf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105aa5c2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105aa5c5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa5c9 jbe 0x105aa5e1 */
  if ((C.cf||C.zf)) goto L_105aa5e1;
  /* 105aa5cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa5ce add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa5d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa5d4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105aa5d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa5d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa5dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105aa5df jmp 0x105aa5f5 */
  goto L_105aa5f5;
L_105aa5e1:;
  /* 105aa5e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa5e4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa5e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa5ea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105aa5ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa5ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa5f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105aa5f5:;
  /* 105aa5f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa5f9 ja 0x105aa5af */
  if ((!C.cf&&!C.zf)) goto L_105aa5af;
  /* 105aa5fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa5fe mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 105aa601 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa604 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa607 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105aa60a:;
  /* 105aa60a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa60d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105aa60f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 105aa612 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa615 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa618 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105aa61a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105aa61c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa61f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 105aa622 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 105aa624 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa627 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa62a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105aa62d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa630 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa633 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105aa636 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa639 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa63c jb 0x105aa60a */
  if (C.cf) goto L_105aa60a;
  /* 105aa63e mov esp, ebp */
  ESP = (EBP);
  /* 105aa640 pop ebp */
  EBP = (pop32());
  /* 105aa641 ret  */
  ESPCHK(0x105aa580u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x105aa650 (63 bytes, 24 insns) */
void f_105aa650(void) {
  FTRACE(0x105aa650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa650 push ebp */
  push32((uint32_t)(EBP));
  /* 105aa651 mov ebp, esp */
  EBP = (ESP);
  /* 105aa653 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa654 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa658 jne 0x105aa669 */
  if (!C.zf) goto L_105aa669;
  /* 105aa65a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa65e jge 0x105aa669 */
  if ((C.sf==C.of)) goto L_105aa669;
  /* 105aa660 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105aa667 jmp 0x105aa670 */
  goto L_105aa670;
L_105aa669:;
  /* 105aa669 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105aa670:;
  /* 105aa670 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa673 push eax */
  push32((uint32_t)(EAX));
  /* 105aa674 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105aa677 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa678 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aa67b push edx */
  push32((uint32_t)(EDX));
  /* 105aa67c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa67f push eax */
  push32((uint32_t)(EAX));
  /* 105aa680 call 0x105aa580 */
  push32(0x105aa685u); f_105aa580();
  /* 105aa685 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa688 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aa68b mov esp, ebp */
  ESP = (EBP);
  /* 105aa68d pop ebp */
  EBP = (pop32());
  /* 105aa68e ret  */
  ESPCHK(0x105aa650u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x105aa690 (30 bytes, 14 insns) */
void f_105aa690(void) {
  FTRACE(0x105aa690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa690 push ebp */
  push32((uint32_t)(EBP));
  /* 105aa691 mov ebp, esp */
  EBP = (ESP);
  /* 105aa693 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa695 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105aa698 push eax */
  push32((uint32_t)(EAX));
  /* 105aa699 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aa69c push ecx */
  push32((uint32_t)(ECX));
  /* 105aa69d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa6a0 push edx */
  push32((uint32_t)(EDX));
  /* 105aa6a1 call 0x105aa580 */
  push32(0x105aa6a6u); f_105aa580();
  /* 105aa6a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa6a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aa6ac pop ebp */
  EBP = (pop32());
  /* 105aa6ad ret  */
  ESPCHK(0x105aa690u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x105aa6b0 (72 bytes, 28 insns) */
void f_105aa6b0(void) {
  FTRACE(0x105aa6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105aa6b1 mov ebp, esp */
  EBP = (ESP);
  /* 105aa6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa6b4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa6b8 jne 0x105aa6d1 */
  if (!C.zf) goto L_105aa6d1;
  /* 105aa6ba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa6be jg 0x105aa6d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_105aa6d1;
  /* 105aa6c0 jl 0x105aa6c8 */
  if ((C.sf!=C.of)) goto L_105aa6c8;
  /* 105aa6c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa6c6 jae 0x105aa6d1 */
  if (!C.cf) goto L_105aa6d1;
L_105aa6c8:;
  /* 105aa6c8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105aa6cf jmp 0x105aa6d8 */
  goto L_105aa6d8;
L_105aa6d1:;
  /* 105aa6d1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105aa6d8:;
  /* 105aa6d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa6db push eax */
  push32((uint32_t)(EAX));
  /* 105aa6dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105aa6df push ecx */
  push32((uint32_t)(ECX));
  /* 105aa6e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105aa6e3 push edx */
  push32((uint32_t)(EDX));
  /* 105aa6e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aa6e7 push eax */
  push32((uint32_t)(EAX));
  /* 105aa6e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa6eb push ecx */
  push32((uint32_t)(ECX));
  /* 105aa6ec call 0x105aa700 */
  push32(0x105aa6f1u); f_105aa700();
  /* 105aa6f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105aa6f4 mov esp, ebp */
  ESP = (EBP);
  /* 105aa6f6 pop ebp */
  EBP = (pop32());
  /* 105aa6f7 ret  */
  ESPCHK(0x105aa6b0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x105aa700 (242 bytes, 91 insns) */
void f_105aa700(void) {
  FTRACE(0x105aa700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa700 push ebp */
  push32((uint32_t)(EBP));
  /* 105aa701 mov ebp, esp */
  EBP = (ESP);
  /* 105aa703 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa706 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105aa709 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105aa70c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa710 je 0x105aa734 */
  if (C.zf) goto L_105aa734;
  /* 105aa712 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa715 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 105aa718 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa71b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa71e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105aa721 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa724 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105aa726 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aa729 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa72c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105aa72e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105aa731 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_105aa734:;
  /* 105aa734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa737 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105aa73a:;
  /* 105aa73a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105aa73d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105aa73f push ecx */
  push32((uint32_t)(ECX));
  /* 105aa740 push eax */
  push32((uint32_t)(EAX));
  /* 105aa741 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aa744 push edx */
  push32((uint32_t)(EDX));
  /* 105aa745 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa748 push eax */
  push32((uint32_t)(EAX));
  /* 105aa749 call 0x105abc40 */
  push32(0x105aa74eu); f_105abc40();
  /* 105aa74e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105aa751 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105aa754 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105aa756 push edx */
  push32((uint32_t)(EDX));
  /* 105aa757 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa758 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aa75b push eax */
  push32((uint32_t)(EAX));
  /* 105aa75c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa75f push ecx */
  push32((uint32_t)(ECX));
  /* 105aa760 call 0x105abbd0 */
  push32(0x105aa765u); f_105abbd0();
  /* 105aa765 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105aa768 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 105aa76b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa76f jbe 0x105aa787 */
  if ((C.cf||C.zf)) goto L_105aa787;
  /* 105aa771 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa774 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa777 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa77a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105aa77c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa77f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa782 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105aa785 jmp 0x105aa79b */
  goto L_105aa79b;
L_105aa787:;
  /* 105aa787 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aa78a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa78d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa790 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105aa792 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa795 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa798 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105aa79b:;
  /* 105aa79b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa79f ja 0x105aa73a */
  if ((!C.cf&&!C.zf)) goto L_105aa73a;
  /* 105aa7a1 jb 0x105aa7a9 */
  if (C.cf) goto L_105aa7a9;
  /* 105aa7a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa7a7 ja 0x105aa73a */
  if ((!C.cf&&!C.zf)) goto L_105aa73a;
L_105aa7a9:;
  /* 105aa7a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa7ac mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 105aa7af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa7b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa7b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105aa7b8:;
  /* 105aa7b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa7bb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105aa7bd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 105aa7c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa7c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa7c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105aa7c8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105aa7ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa7cd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 105aa7d0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 105aa7d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aa7d5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa7d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105aa7db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa7de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa7e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105aa7e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aa7e7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa7ea jb 0x105aa7b8 */
  if (C.cf) goto L_105aa7b8;
  /* 105aa7ec mov esp, ebp */
  ESP = (EBP);
  /* 105aa7ee pop ebp */
  EBP = (pop32());
  /* 105aa7ef ret 0x14 */
  ESPCHK(0x105aa700u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x105aa800 (31 bytes, 15 insns) */
void f_105aa800(void) {
  FTRACE(0x105aa800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa800 push ebp */
  push32((uint32_t)(EBP));
  /* 105aa801 mov ebp, esp */
  EBP = (ESP);
  /* 105aa803 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa805 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105aa808 push eax */
  push32((uint32_t)(EAX));
  /* 105aa809 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105aa80c push ecx */
  push32((uint32_t)(ECX));
  /* 105aa80d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aa810 push edx */
  push32((uint32_t)(EDX));
  /* 105aa811 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa814 push eax */
  push32((uint32_t)(EAX));
  /* 105aa815 call 0x105aa700 */
  push32(0x105aa81au); f_105aa700();
  /* 105aa81a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105aa81d pop ebp */
  EBP = (pop32());
  /* 105aa81e ret  */
  ESPCHK(0x105aa800u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x105aa820 (123 bytes, 44 insns) */
void f_105aa820(void) {
  FTRACE(0x105aa820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa820 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105aa824 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 105aa82a je 0x105aa840 */
  if (C.zf) goto L_105aa840;
L_105aa82c:;
  /* 105aa82c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 105aa82e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 105aa82f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105aa831 je 0x105aa873 */
  if (C.zf) goto L_105aa873;
  /* 105aa833 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 105aa839 jne 0x105aa82c */
  if (!C.zf) goto L_105aa82c;
  /* 105aa83b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_105aa840:;
  /* 105aa840 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 105aa842 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 105aa847 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa849 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105aa84c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105aa84e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa851 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 105aa856 je 0x105aa840 */
  if (C.zf) goto L_105aa840;
  /* 105aa858 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 105aa85b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105aa85d je 0x105aa891 */
  if (C.zf) goto L_105aa891;
  /* 105aa85f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 105aa861 je 0x105aa887 */
  if (C.zf) goto L_105aa887;
  /* 105aa863 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 105aa868 je 0x105aa87d */
  if (C.zf) goto L_105aa87d;
  /* 105aa86a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 105aa86f je 0x105aa873 */
  if (C.zf) goto L_105aa873;
  /* 105aa871 jmp 0x105aa840 */
  goto L_105aa840;
L_105aa873:;
  /* 105aa873 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 105aa876 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105aa87a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa87c ret  */
  ESPCHK(0x105aa820u, _esp0);
  ESP += 4; return;
L_105aa87d:;
  /* 105aa87d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 105aa880 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105aa884 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa886 ret  */
  ESPCHK(0x105aa820u, _esp0);
  ESP += 4; return;
L_105aa887:;
  /* 105aa887 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 105aa88a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105aa88e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa890 ret  */
  ESPCHK(0x105aa820u, _esp0);
  ESP += 4; return;
L_105aa891:;
  /* 105aa891 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 105aa894 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105aa898 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa89a ret  */
  ESPCHK(0x105aa820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8a0 @ 0x105aa8a0 (249 bytes, 93 insns) */
void f_105aa8a0(void) {
  FTRACE(0x105aa8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105aa8a1 mov ebp, esp */
  EBP = (ESP);
  /* 105aa8a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa8a6 push ebx */
  push32((uint32_t)(EBX));
  /* 105aa8a7 push esi */
  push32((uint32_t)(ESI));
  /* 105aa8a8 push edi */
  push32((uint32_t)(EDI));
  /* 105aa8a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 105aa8ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105aa8af lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 105aa8b2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_105aa8b5:;
  /* 105aa8b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa8b9 jne 0x105aa8d9 */
  if (!C.zf) goto L_105aa8d9;
  /* 105aa8bb push 0x105cdd64 */
  push32((uint32_t)(0x105cdd64u));
  /* 105aa8c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa8c2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 105aa8c4 push 0x105cdd58 */
  push32((uint32_t)(0x105cdd58u));
  /* 105aa8c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 105aa8cb call 0x105a5990 */
  push32(0x105aa8d0u); f_105a5990();
  /* 105aa8d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa8d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa8d6 jne 0x105aa8d9 */
  if (!C.zf) goto L_105aa8d9;
  /* 105aa8d8 int3  */
  x86_unimpl("int3 @ 0x105aa8d8");
L_105aa8d9:;
  /* 105aa8d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105aa8db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105aa8dd jne 0x105aa8b5 */
  if (!C.zf) goto L_105aa8b5;
L_105aa8df:;
  /* 105aa8df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa8e3 jne 0x105aa903 */
  if (!C.zf) goto L_105aa903;
  /* 105aa8e5 push 0x105cdd48 */
  push32((uint32_t)(0x105cdd48u));
  /* 105aa8ea push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa8ec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 105aa8ee push 0x105cdd58 */
  push32((uint32_t)(0x105cdd58u));
  /* 105aa8f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 105aa8f5 call 0x105a5990 */
  push32(0x105aa8fau); f_105a5990();
  /* 105aa8fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa8fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa900 jne 0x105aa903 */
  if (!C.zf) goto L_105aa903;
  /* 105aa902 int3  */
  x86_unimpl("int3 @ 0x105aa902");
L_105aa903:;
  /* 105aa903 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105aa905 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105aa907 jne 0x105aa8df */
  if (!C.zf) goto L_105aa8df;
  /* 105aa909 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aa90c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 105aa913 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aa916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa919 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105aa91c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aa91f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aa922 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105aa924 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aa927 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aa92a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 105aa92d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105aa930 push edx */
  push32((uint32_t)(EDX));
  /* 105aa931 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105aa934 push eax */
  push32((uint32_t)(EAX));
  /* 105aa935 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aa938 push ecx */
  push32((uint32_t)(ECX));
  /* 105aa939 call 0x105a62b0 */
  push32(0x105aa93eu); f_105a62b0();
  /* 105aa93e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa941 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105aa944 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aa947 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105aa94a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aa94d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aa950 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 105aa953 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aa956 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aa95a jl 0x105aa97e */
  if ((C.sf!=C.of)) goto L_105aa97e;
  /* 105aa95c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aa95f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105aa961 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 105aa964 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105aa966 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105aa96c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 105aa96f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aa972 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105aa974 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa977 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aa97a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105aa97c jmp 0x105aa98f */
  goto L_105aa98f;
L_105aa97e:;
  /* 105aa97e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aa981 push eax */
  push32((uint32_t)(EAX));
  /* 105aa982 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aa984 call 0x105a6030 */
  push32(0x105aa989u); f_105a6030();
  /* 105aa989 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa98c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_105aa98f:;
  /* 105aa98f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105aa992 pop edi */
  EDI = (pop32());
  /* 105aa993 pop esi */
  ESI = (pop32());
  /* 105aa994 pop ebx */
  EBX = (pop32());
  /* 105aa995 mov esp, ebp */
  ESP = (EBP);
  /* 105aa997 pop ebp */
  EBP = (pop32());
  /* 105aa998 ret  */
  ESPCHK(0x105aa8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9a0 @ 0x105aa9a0 (7 bytes, 3 insns) */
void f_105aa9a0(void) {
  FTRACE(0x105aa9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa9a0 push edi */
  push32((uint32_t)(EDI));
  /* 105aa9a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 105aa9a5 jmp 0x105aaa11 */
  jmp_ind(0x105aaa11u); return;
}

/* FUN_1000a9b0 @ 0x105aa9b0 (224 bytes, 84 insns) */
void f_105aa9b0(void) {
  FTRACE(0x105aa9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aa9b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105aa9b4 push edi */
  push32((uint32_t)(EDI));
  /* 105aa9b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 105aa9bb je 0x105aa9cc */
  if (C.zf) goto L_105aa9cc;
L_105aa9bd:;
  /* 105aa9bd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 105aa9bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 105aa9c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105aa9c2 je 0x105aa9ff */
  if (C.zf) goto L_105aa9ff;
  /* 105aa9c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 105aa9ca jne 0x105aa9bd */
  if (!C.zf) goto L_105aa9bd;
L_105aa9cc:;
  /* 105aa9cc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 105aa9ce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 105aa9d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa9d5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105aa9d8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105aa9da add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aa9dd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 105aa9e2 je 0x105aa9cc */
  if (C.zf) goto L_105aa9cc;
  /* 105aa9e4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 105aa9e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105aa9e9 je 0x105aaa0e */
  if (C.zf) goto L_105aaa0e;
  /* 105aa9eb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 105aa9ed je 0x105aaa09 */
  if (C.zf) goto L_105aaa09;
  /* 105aa9ef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 105aa9f4 je 0x105aaa04 */
  if (C.zf) goto L_105aaa04;
  /* 105aa9f6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 105aa9fb je 0x105aa9ff */
  if (C.zf) goto L_105aa9ff;
  /* 105aa9fd jmp 0x105aa9cc */
  goto L_105aa9cc;
L_105aa9ff:;
  /* 105aa9ff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 105aaa02 jmp 0x105aaa11 */
  goto L_105aaa11;
L_105aaa04:;
  /* 105aaa04 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 105aaa07 jmp 0x105aaa11 */
  goto L_105aaa11;
L_105aaa09:;
  /* 105aaa09 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 105aaa0c jmp 0x105aaa11 */
  goto L_105aaa11;
L_105aaa0e:;
  /* 105aaa0e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_105aaa11:;
  /* 105aaa11 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 105aaa15 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 105aaa1b je 0x105aaa36 */
  if (C.zf) goto L_105aaa36;
L_105aaa1d:;
  /* 105aaa1d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105aaa1f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 105aaa20 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 105aaa22 je 0x105aaa88 */
  if (C.zf) goto L_105aaa88;
  /* 105aaa24 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 105aaa26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105aaa27 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 105aaa2d jne 0x105aaa1d */
  if (!C.zf) goto L_105aaa1d;
  /* 105aaa2f jmp 0x105aaa36 */
  goto L_105aaa36;
L_105aaa31:;
  /* 105aaa31 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105aaa33 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_105aaa36:;
  /* 105aaa36 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 105aaa3b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 105aaa3d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aaa3f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105aaa42 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105aaa44 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105aaa46 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aaa49 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 105aaa4e je 0x105aaa31 */
  if (C.zf) goto L_105aaa31;
  /* 105aaa50 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 105aaa52 je 0x105aaa88 */
  if (C.zf) goto L_105aaa88;
  /* 105aaa54 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 105aaa56 je 0x105aaa7f */
  if (C.zf) goto L_105aaa7f;
  /* 105aaa58 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 105aaa5e je 0x105aaa72 */
  if (C.zf) goto L_105aaa72;
  /* 105aaa60 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 105aaa66 je 0x105aaa6a */
  if (C.zf) goto L_105aaa6a;
  /* 105aaa68 jmp 0x105aaa31 */
  goto L_105aaa31;
L_105aaa6a:;
  /* 105aaa6a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105aaa6c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105aaa70 pop edi */
  EDI = (pop32());
  /* 105aaa71 ret  */
  ESPCHK(0x105aa9b0u, _esp0);
  ESP += 4; return;
L_105aaa72:;
  /* 105aaa72 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 105aaa75 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105aaa79 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 105aaa7d pop edi */
  EDI = (pop32());
  /* 105aaa7e ret  */
  ESPCHK(0x105aa9b0u, _esp0);
  ESP += 4; return;
L_105aaa7f:;
  /* 105aaa7f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 105aaa82 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105aaa86 pop edi */
  EDI = (pop32());
  /* 105aaa87 ret  */
  ESPCHK(0x105aa9b0u, _esp0);
  ESP += 4; return;
L_105aaa88:;
  /* 105aaa88 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 105aaa8a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105aaa8e pop edi */
  EDI = (pop32());
  /* 105aaa8f ret  */
  ESPCHK(0x105aa9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa90 @ 0x105aaa90 (243 bytes, 91 insns) */
void f_105aaa90(void) {
  FTRACE(0x105aaa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aaa90 push ebp */
  push32((uint32_t)(EBP));
  /* 105aaa91 mov ebp, esp */
  EBP = (ESP);
  /* 105aaa93 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aaa96 push ebx */
  push32((uint32_t)(EBX));
  /* 105aaa97 push esi */
  push32((uint32_t)(ESI));
  /* 105aaa98 push edi */
  push32((uint32_t)(EDI));
  /* 105aaa99 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 105aaa9c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_105aaa9f:;
  /* 105aaa9f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aaaa3 jne 0x105aaac3 */
  if (!C.zf) goto L_105aaac3;
  /* 105aaaa5 push 0x105cdd64 */
  push32((uint32_t)(0x105cdd64u));
  /* 105aaaaa push 0 */
  push32((uint32_t)(0x0u));
  /* 105aaaac push 0x5a */
  push32((uint32_t)(0x5au));
  /* 105aaaae push 0x105ceac4 */
  push32((uint32_t)(0x105ceac4u));
  /* 105aaab3 push 2 */
  push32((uint32_t)(0x2u));
  /* 105aaab5 call 0x105a5990 */
  push32(0x105aaabau); f_105a5990();
  /* 105aaaba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aaabd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aaac0 jne 0x105aaac3 */
  if (!C.zf) goto L_105aaac3;
  /* 105aaac2 int3  */
  x86_unimpl("int3 @ 0x105aaac2");
L_105aaac3:;
  /* 105aaac3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105aaac5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105aaac7 jne 0x105aaa9f */
  if (!C.zf) goto L_105aaa9f;
L_105aaac9:;
  /* 105aaac9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aaacd jne 0x105aaaed */
  if (!C.zf) goto L_105aaaed;
  /* 105aaacf push 0x105cdd48 */
  push32((uint32_t)(0x105cdd48u));
  /* 105aaad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105aaad6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 105aaad8 push 0x105ceac4 */
  push32((uint32_t)(0x105ceac4u));
  /* 105aaadd push 2 */
  push32((uint32_t)(0x2u));
  /* 105aaadf call 0x105a5990 */
  push32(0x105aaae4u); f_105a5990();
  /* 105aaae4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aaae7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aaaea jne 0x105aaaed */
  if (!C.zf) goto L_105aaaed;
  /* 105aaaec int3  */
  x86_unimpl("int3 @ 0x105aaaec");
L_105aaaed:;
  /* 105aaaed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105aaaef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105aaaf1 jne 0x105aaac9 */
  if (!C.zf) goto L_105aaac9;
  /* 105aaaf3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aaaf6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 105aaafd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aab00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aab03 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 105aab06 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aab09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aab0c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105aab0e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aab11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aab14 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 105aab17 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105aab1a push ecx */
  push32((uint32_t)(ECX));
  /* 105aab1b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105aab1e push edx */
  push32((uint32_t)(EDX));
  /* 105aab1f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aab22 push eax */
  push32((uint32_t)(EAX));
  /* 105aab23 call 0x105a62b0 */
  push32(0x105aab28u); f_105a62b0();
  /* 105aab28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aab2b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105aab2e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aab31 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105aab34 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aab37 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aab3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 105aab3d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aab40 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aab44 jl 0x105aab68 */
  if ((C.sf!=C.of)) goto L_105aab68;
  /* 105aab46 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aab49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105aab4b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 105aab4e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105aab50 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105aab56 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 105aab59 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aab5c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105aab5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aab61 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aab64 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105aab66 jmp 0x105aab79 */
  goto L_105aab79;
L_105aab68:;
  /* 105aab68 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aab6b push edx */
  push32((uint32_t)(EDX));
  /* 105aab6c push 0 */
  push32((uint32_t)(0x0u));
  /* 105aab6e call 0x105a6030 */
  push32(0x105aab73u); f_105a6030();
  /* 105aab73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aab76 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_105aab79:;
  /* 105aab79 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105aab7c pop edi */
  EDI = (pop32());
  /* 105aab7d pop esi */
  ESI = (pop32());
  /* 105aab7e pop ebx */
  EBX = (pop32());
  /* 105aab7f mov esp, ebp */
  ESP = (EBP);
  /* 105aab81 pop ebp */
  EBP = (pop32());
  /* 105aab82 ret  */
  ESPCHK(0x105aaa90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab90 @ 0x105aab90 (47 bytes, 17 insns) */
void f_105aab90(void) {
  FTRACE(0x105aab90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aab90 push ecx */
  push32((uint32_t)(ECX));
  /* 105aab91 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aab96 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 105aab9a jb 0x105aabb0 */
  if (C.cf) goto L_105aabb0;
L_105aab9c:;
  /* 105aab9c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aaba2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aaba7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 105aaba9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aabae jae 0x105aab9c */
  if (!C.cf) goto L_105aab9c;
L_105aabb0:;
  /* 105aabb0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aabb2 mov eax, esp */
  EAX = (ESP);
  /* 105aabb4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 105aabb6 mov esp, ecx */
  ESP = (ECX);
  /* 105aabb8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105aabba mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 105aabbd push eax */
  push32((uint32_t)(EAX));
  /* 105aabbe ret  */
  ESPCHK(0x105aab90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abc0 @ 0x105aabc0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_105aabc0(void) {
  FTRACE(0x105aabc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aabc0 push ebp */
  push32((uint32_t)(EBP));
  /* 105aabc1 mov ebp, esp */
  EBP = (ESP);
  /* 105aabc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aabc6 push esi */
  push32((uint32_t)(ESI));
  /* 105aabc7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aabcb je 0x105aabd3 */
  if (C.zf) goto L_105aabd3;
  /* 105aabcd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aabd1 jne 0x105aabd8 */
  if (!C.zf) goto L_105aabd8;
L_105aabd3:;
  /* 105aabd3 jmp 0x105aada8 */
  goto L_105aada8;
L_105aabd8:;
  /* 105aabd8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aabdc je 0x105aabf4 */
  if (C.zf) goto L_105aabf4;
  /* 105aabde cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aabe2 je 0x105aabf4 */
  if (C.zf) goto L_105aabf4;
  /* 105aabe4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aabe8 je 0x105aabf4 */
  if (C.zf) goto L_105aabf4;
  /* 105aabea cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aabee jne 0x105aacd1 */
  if (!C.zf) goto L_105aacd1;
L_105aabf4:;
  /* 105aabf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 105aabf6 call 0x105abda0 */
  push32(0x105aabfbu); f_105abda0();
  /* 105aabfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aabfe cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aac02 je 0x105aac0a */
  if (C.zf) goto L_105aac0a;
  /* 105aac04 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aac08 jne 0x105aac4f */
  if (!C.zf) goto L_105aac4f;
L_105aac0a:;
  /* 105aac0a cmp dword ptr [0x105d2b14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2b14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aac11 jne 0x105aac4f */
  if (!C.zf) goto L_105aac4f;
  /* 105aac13 push 1 */
  push32((uint32_t)(0x1u));
  /* 105aac15 push 0x105aadf0 */
  push32((uint32_t)(0x105aadf0u));
  /* 105aac1a call dword ptr [0x105d5298] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5298))), 0x105aac20u);
  /* 105aac20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aac23 jne 0x105aac31 */
  if (!C.zf) goto L_105aac31;
  /* 105aac25 mov dword ptr [0x105d2b14], 1 */
  w32((uint32_t)(0x105d2b14), (0x1u));
  /* 105aac2f jmp 0x105aac4f */
  goto L_105aac4f;
L_105aac31:;
  /* 105aac31 call dword ptr [0x105d5250] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5250))), 0x105aac37u);
  /* 105aac37 mov esi, eax */
  ESI = (EAX);
  /* 105aac39 call 0x105aef70 */
  push32(0x105aac3eu); f_105aef70();
  /* 105aac3e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 105aac40 push 1 */
  push32((uint32_t)(0x1u));
  /* 105aac42 call 0x105abe40 */
  push32(0x105aac47u); f_105abe40();
  /* 105aac47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aac4a jmp 0x105aada8 */
  goto L_105aada8;
L_105aac4f:;
  /* 105aac4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aac52 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105aac55 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105aac58 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aac5b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105aac5e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aac62 ja 0x105aacc2 */
  if ((!C.cf&&!C.zf)) goto L_105aacc2;
  /* 105aac64 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105aac67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105aac69 mov dl, byte ptr [eax + 0x105aadcf] */
  DL = (r8((uint32_t)(EAX + 0x105aadcf)));
  /* 105aac6f jmp dword ptr [edx*4 + 0x105aadbb] */
  switch (EDX) {
    case 0: goto L_105aac76;
    case 1: goto L_105aacb0;
    case 2: goto L_105aac8a;
    case 3: goto L_105aac9d;
    case 4: goto L_105aacc2;
    default: x86_unimpl("switch@0x105aac6f out of table"); return;
  }
L_105aac76:;
  /* 105aac76 mov ecx, dword ptr [0x105d2b04] */
  ECX = (r32((uint32_t)(0x105d2b04)));
  /* 105aac7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105aac7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aac82 mov dword ptr [0x105d2b04], edx */
  w32((uint32_t)(0x105d2b04), (EDX));
  /* 105aac88 jmp 0x105aacc2 */
  goto L_105aacc2;
L_105aac8a:;
  /* 105aac8a mov eax, dword ptr [0x105d2b08] */
  EAX = (r32((uint32_t)(0x105d2b08)));
  /* 105aac8f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105aac92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aac95 mov dword ptr [0x105d2b08], ecx */
  w32((uint32_t)(0x105d2b08), (ECX));
  /* 105aac9b jmp 0x105aacc2 */
  goto L_105aacc2;
L_105aac9d:;
  /* 105aac9d mov edx, dword ptr [0x105d2b0c] */
  EDX = (r32((uint32_t)(0x105d2b0c)));
  /* 105aaca3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105aaca6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aaca9 mov dword ptr [0x105d2b0c], eax */
  w32((uint32_t)(0x105d2b0c), (EAX));
  /* 105aacae jmp 0x105aacc2 */
  goto L_105aacc2;
L_105aacb0:;
  /* 105aacb0 mov ecx, dword ptr [0x105d2b10] */
  ECX = (r32((uint32_t)(0x105d2b10)));
  /* 105aacb6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105aacb9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aacbc mov dword ptr [0x105d2b10], edx */
  w32((uint32_t)(0x105d2b10), (EDX));
L_105aacc2:;
  /* 105aacc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 105aacc4 call 0x105abe40 */
  push32(0x105aacc9u); f_105abe40();
  /* 105aacc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aaccc jmp 0x105aada3 */
  goto L_105aada3;
L_105aacd1:;
  /* 105aacd1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aacd5 je 0x105aace8 */
  if (C.zf) goto L_105aace8;
  /* 105aacd7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aacdb je 0x105aace8 */
  if (C.zf) goto L_105aace8;
  /* 105aacdd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aace1 je 0x105aace8 */
  if (C.zf) goto L_105aace8;
  /* 105aace3 jmp 0x105aada8 */
  goto L_105aada8;
L_105aace8:;
  /* 105aace8 call 0x105a7430 */
  push32(0x105aacedu); f_105a7430();
  /* 105aaced mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105aacf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aacf3 cmp dword ptr [eax + 0x50], 0x105d10c0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x105d10c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aacfa jne 0x105aad45 */
  if (!C.zf) goto L_105aad45;
  /* 105aacfc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 105aad01 push 0x105cead0 */
  push32((uint32_t)(0x105cead0u));
  /* 105aad06 push 2 */
  push32((uint32_t)(0x2u));
  /* 105aad08 mov ecx, dword ptr [0x105d1140] */
  ECX = (r32((uint32_t)(0x105d1140)));
  /* 105aad0e push ecx */
  push32((uint32_t)(ECX));
  /* 105aad0f call 0x105a79f0 */
  push32(0x105aad14u); f_105a79f0();
  /* 105aad14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aad17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aad1a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 105aad1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aad20 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aad24 je 0x105aad43 */
  if (C.zf) goto L_105aad43;
  /* 105aad26 mov ecx, dword ptr [0x105d1140] */
  ECX = (r32((uint32_t)(0x105d1140)));
  /* 105aad2c push ecx */
  push32((uint32_t)(ECX));
  /* 105aad2d push 0x105d10c0 */
  push32((uint32_t)(0x105d10c0u));
  /* 105aad32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aad35 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 105aad38 push eax */
  push32((uint32_t)(EAX));
  /* 105aad39 call 0x105aeb80 */
  push32(0x105aad3eu); f_105aeb80();
  /* 105aad3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aad41 jmp 0x105aad45 */
  goto L_105aad45;
L_105aad43:;
  /* 105aad43 jmp 0x105aada8 */
  goto L_105aada8;
L_105aad45:;
  /* 105aad45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aad48 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 105aad4b push edx */
  push32((uint32_t)(EDX));
  /* 105aad4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aad4f push eax */
  push32((uint32_t)(EAX));
  /* 105aad50 call 0x105ab0d0 */
  push32(0x105aad55u); f_105ab0d0();
  /* 105aad55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aad58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105aad5b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aad5f jne 0x105aad63 */
  if (!C.zf) goto L_105aad63;
  /* 105aad61 jmp 0x105aada8 */
  goto L_105aada8;
L_105aad63:;
  /* 105aad63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aad66 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105aad69 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105aad6c:;
  /* 105aad6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aad6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105aad72 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aad75 jne 0x105aada3 */
  if (!C.zf) goto L_105aada3;
  /* 105aad77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aad7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aad7d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105aad80 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aad83 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aad86 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105aad89 mov edx, dword ptr [0x105d1144] */
  EDX = (r32((uint32_t)(0x105d1144)));
  /* 105aad8f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105aad92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aad95 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 105aad98 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aad9a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aad9d jb 0x105aada1 */
  if (C.cf) goto L_105aada1;
  /* 105aad9f jmp 0x105aada3 */
  goto L_105aada3;
L_105aada1:;
  /* 105aada1 jmp 0x105aad6c */
  goto L_105aad6c;
L_105aada3:;
  /* 105aada3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aada6 jmp 0x105aadb6 */
  goto L_105aadb6;
L_105aada8:;
  /* 105aada8 call 0x105aef60 */
  push32(0x105aadadu); f_105aef60();
  /* 105aadad mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 105aadb3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105aadb6:;
  /* 105aadb6 pop esi */
  ESI = (pop32());
  /* 105aadb7 mov esp, ebp */
  ESP = (EBP);
  /* 105aadb9 pop ebp */
  EBP = (pop32());
  /* 105aadba ret  */
  ESPCHK(0x105aabc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000adf0 @ 0x105aadf0 (146 bytes, 45 insns) */
void f_105aadf0(void) {
  FTRACE(0x105aadf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aadf0 push ebp */
  push32((uint32_t)(EBP));
  /* 105aadf1 mov ebp, esp */
  EBP = (ESP);
  /* 105aadf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aadf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 105aadf8 call 0x105abda0 */
  push32(0x105aadfdu); f_105abda0();
  /* 105aadfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aae00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aae04 jne 0x105aae1e */
  if (!C.zf) goto L_105aae1e;
  /* 105aae06 mov dword ptr [ebp - 8], 0x105d2b04 */
  w32((uint32_t)(EBP + -0x8), (0x105d2b04u));
  /* 105aae0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aae10 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105aae12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105aae15 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 105aae1c jmp 0x105aae34 */
  goto L_105aae34;
L_105aae1e:;
  /* 105aae1e mov dword ptr [ebp - 8], 0x105d2b08 */
  w32((uint32_t)(EBP + -0x8), (0x105d2b08u));
  /* 105aae25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aae28 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105aae2a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105aae2d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_105aae34:;
  /* 105aae34 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aae38 jne 0x105aae48 */
  if (!C.zf) goto L_105aae48;
  /* 105aae3a push 1 */
  push32((uint32_t)(0x1u));
  /* 105aae3c call 0x105abe40 */
  push32(0x105aae41u); f_105abe40();
  /* 105aae41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aae44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105aae46 jmp 0x105aae7c */
  goto L_105aae7c;
L_105aae48:;
  /* 105aae48 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aae4c je 0x105aae6d */
  if (C.zf) goto L_105aae6d;
  /* 105aae4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aae51 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 105aae57 push 1 */
  push32((uint32_t)(0x1u));
  /* 105aae59 call 0x105abe40 */
  push32(0x105aae5eu); f_105abe40();
  /* 105aae5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aae61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aae64 push edx */
  push32((uint32_t)(EDX));
  /* 105aae65 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x105aae68u);
  /* 105aae68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aae6b jmp 0x105aae77 */
  goto L_105aae77;
L_105aae6d:;
  /* 105aae6d push 1 */
  push32((uint32_t)(0x1u));
  /* 105aae6f call 0x105abe40 */
  push32(0x105aae74u); f_105abe40();
  /* 105aae74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105aae77:;
  /* 105aae77 mov eax, 1 */
  EAX = (0x1u);
L_105aae7c:;
  /* 105aae7c mov esp, ebp */
  ESP = (EBP);
  /* 105aae7e pop ebp */
  EBP = (pop32());
  /* 105aae7f ret 4 */
  ESPCHK(0x105aadf0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ae90 @ 0x105aae90 (522 bytes, 162 insns) [1 switch table(s)] */
void f_105aae90(void) {
  FTRACE(0x105aae90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aae90 push ebp */
  push32((uint32_t)(EBP));
  /* 105aae91 mov ebp, esp */
  EBP = (ESP);
  /* 105aae93 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aae96 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105aae9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aaea0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105aaea3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105aaea6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aaea9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105aaeac cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aaeb0 ja 0x105aaf5e */
  if ((!C.cf&&!C.zf)) goto L_105aaf5e;
  /* 105aaeb6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105aaeb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105aaebb mov dl, byte ptr [eax + 0x105ab0b2] */
  DL = (r8((uint32_t)(EAX + 0x105ab0b2)));
  /* 105aaec1 jmp dword ptr [edx*4 + 0x105ab09a] */
  switch (EDX) {
    case 0: goto L_105aaec8;
    case 1: goto L_105aaf33;
    case 2: goto L_105aaf19;
    case 3: goto L_105aaee5;
    case 4: goto L_105aaeff;
    case 5: goto L_105aaf5e;
    default: x86_unimpl("switch@0x105aaec1 out of table"); return;
  }
L_105aaec8:;
  /* 105aaec8 mov dword ptr [ebp - 0x18], 0x105d2b04 */
  w32((uint32_t)(EBP + -0x18), (0x105d2b04u));
  /* 105aaecf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105aaed2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105aaed4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105aaed7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aaeda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aaedd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105aaee0 jmp 0x105aaf66 */
  goto L_105aaf66;
L_105aaee5:;
  /* 105aaee5 mov dword ptr [ebp - 0x18], 0x105d2b08 */
  w32((uint32_t)(EBP + -0x18), (0x105d2b08u));
  /* 105aaeec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105aaeef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105aaef1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105aaef4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aaef7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aaefa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105aaefd jmp 0x105aaf66 */
  goto L_105aaf66;
L_105aaeff:;
  /* 105aaeff mov dword ptr [ebp - 0x18], 0x105d2b0c */
  w32((uint32_t)(EBP + -0x18), (0x105d2b0cu));
  /* 105aaf06 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105aaf09 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105aaf0b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105aaf0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aaf11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aaf14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105aaf17 jmp 0x105aaf66 */
  goto L_105aaf66;
L_105aaf19:;
  /* 105aaf19 mov dword ptr [ebp - 0x18], 0x105d2b10 */
  w32((uint32_t)(EBP + -0x18), (0x105d2b10u));
  /* 105aaf20 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105aaf23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105aaf25 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105aaf28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aaf2b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aaf2e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105aaf31 jmp 0x105aaf66 */
  goto L_105aaf66;
L_105aaf33:;
  /* 105aaf33 call 0x105a7430 */
  push32(0x105aaf38u); f_105a7430();
  /* 105aaf38 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105aaf3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aaf3e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 105aaf41 push edx */
  push32((uint32_t)(EDX));
  /* 105aaf42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aaf45 push eax */
  push32((uint32_t)(EAX));
  /* 105aaf46 call 0x105ab0d0 */
  push32(0x105aaf4bu); f_105ab0d0();
  /* 105aaf4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aaf4e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aaf51 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105aaf54 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105aaf57 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105aaf59 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105aaf5c jmp 0x105aaf66 */
  goto L_105aaf66;
L_105aaf5e:;
  /* 105aaf5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105aaf61 jmp 0x105ab096 */
  goto L_105ab096;
L_105aaf66:;
  /* 105aaf66 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aaf6a je 0x105aaf76 */
  if (C.zf) goto L_105aaf76;
  /* 105aaf6c push 1 */
  push32((uint32_t)(0x1u));
  /* 105aaf6e call 0x105abda0 */
  push32(0x105aaf73u); f_105abda0();
  /* 105aaf73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105aaf76:;
  /* 105aaf76 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aaf7a jne 0x105aaf93 */
  if (!C.zf) goto L_105aaf93;
  /* 105aaf7c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aaf80 je 0x105aaf8c */
  if (C.zf) goto L_105aaf8c;
  /* 105aaf82 push 1 */
  push32((uint32_t)(0x1u));
  /* 105aaf84 call 0x105abe40 */
  push32(0x105aaf89u); f_105abe40();
  /* 105aaf89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105aaf8c:;
  /* 105aaf8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105aaf8e jmp 0x105ab096 */
  goto L_105ab096;
L_105aaf93:;
  /* 105aaf93 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aaf97 jne 0x105aafb0 */
  if (!C.zf) goto L_105aafb0;
  /* 105aaf99 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aaf9d je 0x105aafa9 */
  if (C.zf) goto L_105aafa9;
  /* 105aaf9f push 1 */
  push32((uint32_t)(0x1u));
  /* 105aafa1 call 0x105abe40 */
  push32(0x105aafa6u); f_105abe40();
  /* 105aafa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105aafa9:;
  /* 105aafa9 push 3 */
  push32((uint32_t)(0x3u));
  /* 105aafab call 0x105a71b0 */
  push32(0x105aafb0u); f_105a71b0();
L_105aafb0:;
  /* 105aafb0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aafb4 je 0x105aafc2 */
  if (C.zf) goto L_105aafc2;
  /* 105aafb6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aafba je 0x105aafc2 */
  if (C.zf) goto L_105aafc2;
  /* 105aafbc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aafc0 jne 0x105aafee */
  if (!C.zf) goto L_105aafee;
L_105aafc2:;
  /* 105aafc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aafc5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 105aafc8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105aafcb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aafce mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 105aafd5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aafd9 jne 0x105aafee */
  if (!C.zf) goto L_105aafee;
  /* 105aafdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aafde mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 105aafe1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105aafe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aafe7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_105aafee:;
  /* 105aafee cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aaff2 jne 0x105ab030 */
  if (!C.zf) goto L_105ab030;
  /* 105aaff4 mov eax, dword ptr [0x105d1138] */
  EAX = (r32((uint32_t)(0x105d1138)));
  /* 105aaff9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105aaffc jmp 0x105ab007 */
  goto L_105ab007;
L_105aaffe:;
  /* 105aaffe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ab001 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab004 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105ab007:;
  /* 105ab007 mov edx, dword ptr [0x105d1138] */
  EDX = (r32((uint32_t)(0x105d1138)));
  /* 105ab00d add edx, dword ptr [0x105d113c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x105d113c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab013 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab016 jge 0x105ab02e */
  if ((C.sf==C.of)) goto L_105ab02e;
  /* 105ab018 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ab01b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab01e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab021 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 105ab024 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 105ab02c jmp 0x105aaffe */
  goto L_105aaffe;
L_105ab02e:;
  /* 105ab02e jmp 0x105ab039 */
  goto L_105ab039;
L_105ab030:;
  /* 105ab030 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ab033 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_105ab039:;
  /* 105ab039 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab03d je 0x105ab049 */
  if (C.zf) goto L_105ab049;
  /* 105ab03f push 1 */
  push32((uint32_t)(0x1u));
  /* 105ab041 call 0x105abe40 */
  push32(0x105ab046u); f_105abe40();
  /* 105ab046 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ab049:;
  /* 105ab049 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab04d jne 0x105ab060 */
  if (!C.zf) goto L_105ab060;
  /* 105ab04f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab052 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 105ab055 push edx */
  push32((uint32_t)(EDX));
  /* 105ab056 push 8 */
  push32((uint32_t)(0x8u));
  /* 105ab058 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x105ab05bu);
  /* 105ab05b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab05e jmp 0x105ab06a */
  goto L_105ab06a;
L_105ab060:;
  /* 105ab060 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab063 push eax */
  push32((uint32_t)(EAX));
  /* 105ab064 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x105ab067u);
  /* 105ab067 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ab06a:;
  /* 105ab06a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab06e je 0x105ab07c */
  if (C.zf) goto L_105ab07c;
  /* 105ab070 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab074 je 0x105ab07c */
  if (C.zf) goto L_105ab07c;
  /* 105ab076 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab07a jne 0x105ab094 */
  if (!C.zf) goto L_105ab094;
L_105ab07c:;
  /* 105ab07c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab07f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ab082 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 105ab085 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab089 jne 0x105ab094 */
  if (!C.zf) goto L_105ab094;
  /* 105ab08b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab08e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ab091 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_105ab094:;
  /* 105ab094 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105ab096:;
  /* 105ab096 mov esp, ebp */
  ESP = (EBP);
  /* 105ab098 pop ebp */
  EBP = (pop32());
  /* 105ab099 ret  */
  ESPCHK(0x105aae90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0d0 @ 0x105ab0d0 (91 bytes, 35 insns) */
void f_105ab0d0(void) {
  FTRACE(0x105ab0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ab0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ab0d1 mov ebp, esp */
  EBP = (ESP);
  /* 105ab0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 105ab0d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ab0d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105ab0da:;
  /* 105ab0da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab0dd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ab0e0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab0e3 je 0x105ab103 */
  if (C.zf) goto L_105ab103;
  /* 105ab0e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab0e8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab0eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ab0ee mov ecx, dword ptr [0x105d1144] */
  ECX = (r32((uint32_t)(0x105d1144)));
  /* 105ab0f4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab0f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ab0fa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab0fc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab0ff jae 0x105ab103 */
  if (!C.cf) goto L_105ab103;
  /* 105ab101 jmp 0x105ab0da */
  goto L_105ab0da;
L_105ab103:;
  /* 105ab103 mov eax, dword ptr [0x105d1144] */
  EAX = (r32((uint32_t)(0x105d1144)));
  /* 105ab108 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab10b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ab10e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab110 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab113 jae 0x105ab125 */
  if (!C.cf) goto L_105ab125;
  /* 105ab115 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab118 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105ab11b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab11e jne 0x105ab125 */
  if (!C.zf) goto L_105ab125;
  /* 105ab120 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab123 jmp 0x105ab127 */
  goto L_105ab127;
L_105ab125:;
  /* 105ab125 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105ab127:;
  /* 105ab127 mov esp, ebp */
  ESP = (EBP);
  /* 105ab129 pop ebp */
  EBP = (pop32());
  /* 105ab12a ret  */
  ESPCHK(0x105ab0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b130 @ 0x105ab130 (13 bytes, 6 insns) */
void f_105ab130(void) {
  FTRACE(0x105ab130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ab130 push ebp */
  push32((uint32_t)(EBP));
  /* 105ab131 mov ebp, esp */
  EBP = (ESP);
  /* 105ab133 call 0x105a7430 */
  push32(0x105ab138u); f_105a7430();
  /* 105ab138 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab13b pop ebp */
  EBP = (pop32());
  /* 105ab13c ret  */
  ESPCHK(0x105ab130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b140 @ 0x105ab140 (13 bytes, 6 insns) */
void f_105ab140(void) {
  FTRACE(0x105ab140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ab140 push ebp */
  push32((uint32_t)(EBP));
  /* 105ab141 mov ebp, esp */
  EBP = (ESP);
  /* 105ab143 call 0x105a7430 */
  push32(0x105ab148u); f_105a7430();
  /* 105ab148 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab14b pop ebp */
  EBP = (pop32());
  /* 105ab14c ret  */
  ESPCHK(0x105ab140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b150 @ 0x105ab150 (187 bytes, 54 insns) */
void f_105ab150(void) {
  FTRACE(0x105ab150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ab150 push ebp */
  push32((uint32_t)(EBP));
  /* 105ab151 mov ebp, esp */
  EBP = (ESP);
  /* 105ab153 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ab156 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ab15d cmp dword ptr [0x105d2b18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2b18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab164 jne 0x105ab1c3 */
  if (!C.zf) goto L_105ab1c3;
  /* 105ab166 push 0x105cde40 */
  push32((uint32_t)(0x105cde40u));
  /* 105ab16b call dword ptr [0x105d5220] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5220))), 0x105ab171u);
  /* 105ab171 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ab174 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab178 je 0x105ab197 */
  if (C.zf) goto L_105ab197;
  /* 105ab17a push 0x105ceb00 */
  push32((uint32_t)(0x105ceb00u));
  /* 105ab17f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ab182 push eax */
  push32((uint32_t)(EAX));
  /* 105ab183 call dword ptr [0x105d5288] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5288))), 0x105ab189u);
  /* 105ab189 mov dword ptr [0x105d2b18], eax */
  w32((uint32_t)(0x105d2b18), (EAX));
  /* 105ab18e cmp dword ptr [0x105d2b18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2b18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab195 jne 0x105ab19b */
  if (!C.zf) goto L_105ab19b;
L_105ab197:;
  /* 105ab197 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ab199 jmp 0x105ab207 */
  goto L_105ab207;
L_105ab19b:;
  /* 105ab19b push 0x105ceaf0 */
  push32((uint32_t)(0x105ceaf0u));
  /* 105ab1a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ab1a3 push ecx */
  push32((uint32_t)(ECX));
  /* 105ab1a4 call dword ptr [0x105d5288] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5288))), 0x105ab1aau);
  /* 105ab1aa mov dword ptr [0x105d2b1c], eax */
  w32((uint32_t)(0x105d2b1c), (EAX));
  /* 105ab1af push 0x105ceadc */
  push32((uint32_t)(0x105ceadcu));
  /* 105ab1b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ab1b7 push edx */
  push32((uint32_t)(EDX));
  /* 105ab1b8 call dword ptr [0x105d5288] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5288))), 0x105ab1beu);
  /* 105ab1be mov dword ptr [0x105d2b20], eax */
  w32((uint32_t)(0x105d2b20), (EAX));
L_105ab1c3:;
  /* 105ab1c3 cmp dword ptr [0x105d2b1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2b1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab1ca je 0x105ab1d5 */
  if (C.zf) goto L_105ab1d5;
  /* 105ab1cc call dword ptr [0x105d2b1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d2b1c))), 0x105ab1d2u);
  /* 105ab1d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105ab1d5:;
  /* 105ab1d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab1d9 je 0x105ab1f1 */
  if (C.zf) goto L_105ab1f1;
  /* 105ab1db cmp dword ptr [0x105d2b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab1e2 je 0x105ab1f1 */
  if (C.zf) goto L_105ab1f1;
  /* 105ab1e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab1e7 push eax */
  push32((uint32_t)(EAX));
  /* 105ab1e8 call dword ptr [0x105d2b20] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d2b20))), 0x105ab1eeu);
  /* 105ab1ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105ab1f1:;
  /* 105ab1f1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105ab1f4 push ecx */
  push32((uint32_t)(ECX));
  /* 105ab1f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ab1f8 push edx */
  push32((uint32_t)(EDX));
  /* 105ab1f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab1fc push eax */
  push32((uint32_t)(EAX));
  /* 105ab1fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab200 push ecx */
  push32((uint32_t)(ECX));
  /* 105ab201 call dword ptr [0x105d2b18] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d2b18))), 0x105ab207u);
L_105ab207:;
  /* 105ab207 mov esp, ebp */
  ESP = (EBP);
  /* 105ab209 pop ebp */
  EBP = (pop32());
  /* 105ab20a ret  */
  ESPCHK(0x105ab150u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x105ab210 (254 bytes, 109 insns) */
void f_105ab210(void) {
  FTRACE(0x105ab210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ab210 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 105ab214 push edi */
  push32((uint32_t)(EDI));
  /* 105ab215 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ab217 je 0x105ab293 */
  if (C.zf) goto L_105ab293;
  /* 105ab219 push esi */
  push32((uint32_t)(ESI));
  /* 105ab21a push ebx */
  push32((uint32_t)(EBX));
  /* 105ab21b mov ebx, ecx */
  EBX = (ECX);
  /* 105ab21d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 105ab221 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 105ab227 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 105ab22b jne 0x105ab234 */
  if (!C.zf) goto L_105ab234;
  /* 105ab22d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ab230 jne 0x105ab2a1 */
  if (!C.zf) goto L_105ab2a1;
  /* 105ab232 jmp 0x105ab255 */
  goto L_105ab255;
L_105ab234:;
  /* 105ab234 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105ab236 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105ab237 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ab239 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105ab23a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105ab23b je 0x105ab262 */
  if (C.zf) goto L_105ab262;
  /* 105ab23d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105ab23f je 0x105ab26a */
  if (C.zf) goto L_105ab26a;
  /* 105ab241 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 105ab247 jne 0x105ab234 */
  if (!C.zf) goto L_105ab234;
  /* 105ab249 mov ebx, ecx */
  EBX = (ECX);
  /* 105ab24b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ab24e jne 0x105ab2a1 */
  if (!C.zf) goto L_105ab2a1;
L_105ab250:;
  /* 105ab250 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 105ab253 je 0x105ab262 */
  if (C.zf) goto L_105ab262;
L_105ab255:;
  /* 105ab255 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105ab257 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105ab258 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ab25a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105ab25b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105ab25d je 0x105ab28e */
  if (C.zf) goto L_105ab28e;
  /* 105ab25f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 105ab260 jne 0x105ab255 */
  if (!C.zf) goto L_105ab255;
L_105ab262:;
  /* 105ab262 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 105ab266 pop ebx */
  EBX = (pop32());
  /* 105ab267 pop esi */
  ESI = (pop32());
  /* 105ab268 pop edi */
  EDI = (pop32());
  /* 105ab269 ret  */
  ESPCHK(0x105ab210u, _esp0);
  ESP += 4; return;
L_105ab26a:;
  /* 105ab26a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 105ab270 je 0x105ab284 */
  if (C.zf) goto L_105ab284;
L_105ab272:;
  /* 105ab272 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ab274 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105ab275 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105ab276 je 0x105ab306 */
  if (C.zf) goto L_105ab306;
  /* 105ab27c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 105ab282 jne 0x105ab272 */
  if (!C.zf) goto L_105ab272;
L_105ab284:;
  /* 105ab284 mov ebx, ecx */
  EBX = (ECX);
  /* 105ab286 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ab289 jne 0x105ab2f7 */
  if (!C.zf) goto L_105ab2f7;
L_105ab28b:;
  /* 105ab28b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ab28d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_105ab28e:;
  /* 105ab28e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 105ab28f jne 0x105ab28b */
  if (!C.zf) goto L_105ab28b;
  /* 105ab291 pop ebx */
  EBX = (pop32());
  /* 105ab292 pop esi */
  ESI = (pop32());
L_105ab293:;
  /* 105ab293 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105ab297 pop edi */
  EDI = (pop32());
  /* 105ab298 ret  */
  ESPCHK(0x105ab210u, _esp0);
  ESP += 4; return;
L_105ab299:;
  /* 105ab299 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105ab29b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab29e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105ab29f je 0x105ab250 */
  if (C.zf) goto L_105ab250;
L_105ab2a1:;
  /* 105ab2a1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 105ab2a6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 105ab2a8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab2aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ab2ad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ab2af mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 105ab2b1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab2b4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 105ab2b9 je 0x105ab299 */
  if (C.zf) goto L_105ab299;
  /* 105ab2bb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 105ab2bd je 0x105ab2eb */
  if (C.zf) goto L_105ab2eb;
  /* 105ab2bf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 105ab2c1 je 0x105ab2e1 */
  if (C.zf) goto L_105ab2e1;
  /* 105ab2c3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 105ab2c9 je 0x105ab2d7 */
  if (C.zf) goto L_105ab2d7;
  /* 105ab2cb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 105ab2d1 jne 0x105ab299 */
  if (!C.zf) goto L_105ab299;
  /* 105ab2d3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105ab2d5 jmp 0x105ab2ef */
  goto L_105ab2ef;
L_105ab2d7:;
  /* 105ab2d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105ab2dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105ab2df jmp 0x105ab2ef */
  goto L_105ab2ef;
L_105ab2e1:;
  /* 105ab2e1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105ab2e7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 105ab2e9 jmp 0x105ab2ef */
  goto L_105ab2ef;
L_105ab2eb:;
  /* 105ab2eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ab2ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_105ab2ef:;
  /* 105ab2ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab2f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ab2f4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105ab2f5 je 0x105ab301 */
  if (C.zf) goto L_105ab301;
L_105ab2f7:;
  /* 105ab2f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105ab2f9:;
  /* 105ab2f9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 105ab2fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab2fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105ab2ff jne 0x105ab2f9 */
  if (!C.zf) goto L_105ab2f9;
L_105ab301:;
  /* 105ab301 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 105ab304 jne 0x105ab28b */
  if (!C.zf) goto L_105ab28b;
L_105ab306:;
  /* 105ab306 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 105ab30a pop ebx */
  EBX = (pop32());
  /* 105ab30b pop esi */
  ESI = (pop32());
  /* 105ab30c pop edi */
  EDI = (pop32());
  /* 105ab30d ret  */
  ESPCHK(0x105ab210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b310 @ 0x105ab310 (130 bytes, 43 insns) */
void f_105ab310(void) {
  FTRACE(0x105ab310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ab310 push ebp */
  push32((uint32_t)(EBP));
  /* 105ab311 mov ebp, esp */
  EBP = (ESP);
  /* 105ab313 push ecx */
  push32((uint32_t)(ECX));
  /* 105ab314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab317 cmp eax, dword ptr [0x105d449c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d449c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab31d jae 0x105ab341 */
  if (!C.cf) goto L_105ab341;
  /* 105ab31f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab322 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105ab325 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab328 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105ab32b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab32e mov eax, dword ptr [ecx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(ECX*4 + 0x105d4360)));
  /* 105ab335 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105ab33a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105ab33d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ab33f jne 0x105ab35c */
  if (!C.zf) goto L_105ab35c;
L_105ab341:;
  /* 105ab341 call 0x105aef60 */
  push32(0x105ab346u); f_105aef60();
  /* 105ab346 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105ab34c call 0x105aef70 */
  push32(0x105ab351u); f_105aef70();
  /* 105ab351 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105ab357 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ab35a jmp 0x105ab38e */
  goto L_105ab38e;
L_105ab35c:;
  /* 105ab35c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab35f push edx */
  push32((uint32_t)(EDX));
  /* 105ab360 call 0x105af490 */
  push32(0x105ab365u); f_105af490();
  /* 105ab365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab368 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105ab36b push eax */
  push32((uint32_t)(EAX));
  /* 105ab36c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ab36f push ecx */
  push32((uint32_t)(ECX));
  /* 105ab370 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab373 push edx */
  push32((uint32_t)(EDX));
  /* 105ab374 call 0x105ab3a0 */
  push32(0x105ab379u); f_105ab3a0();
  /* 105ab379 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab37c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ab37f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab382 push eax */
  push32((uint32_t)(EAX));
  /* 105ab383 call 0x105af520 */
  push32(0x105ab388u); f_105af520();
  /* 105ab388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab38b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105ab38e:;
  /* 105ab38e mov esp, ebp */
  ESP = (EBP);
  /* 105ab390 pop ebp */
  EBP = (pop32());
  /* 105ab391 ret  */
  ESPCHK(0x105ab310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3a0 @ 0x105ab3a0 (178 bytes, 56 insns) */
void f_105ab3a0(void) {
  FTRACE(0x105ab3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ab3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ab3a1 mov ebp, esp */
  EBP = (ESP);
  /* 105ab3a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ab3a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab3a9 push eax */
  push32((uint32_t)(EAX));
  /* 105ab3aa call 0x105af310 */
  push32(0x105ab3afu); f_105af310();
  /* 105ab3af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab3b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105ab3b5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab3b9 jne 0x105ab3ce */
  if (!C.zf) goto L_105ab3ce;
  /* 105ab3bb call 0x105aef60 */
  push32(0x105ab3c0u); f_105aef60();
  /* 105ab3c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105ab3c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ab3c9 jmp 0x105ab44e */
  goto L_105ab44e;
L_105ab3ce:;
  /* 105ab3ce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105ab3d1 push ecx */
  push32((uint32_t)(ECX));
  /* 105ab3d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ab3d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ab3d7 push edx */
  push32((uint32_t)(EDX));
  /* 105ab3d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ab3db push eax */
  push32((uint32_t)(EAX));
  /* 105ab3dc call dword ptr [0x105d529c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d529c))), 0x105ab3e2u);
  /* 105ab3e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ab3e5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab3e9 jne 0x105ab3f6 */
  if (!C.zf) goto L_105ab3f6;
  /* 105ab3eb call dword ptr [0x105d5250] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5250))), 0x105ab3f1u);
  /* 105ab3f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ab3f4 jmp 0x105ab3fd */
  goto L_105ab3fd;
L_105ab3f6:;
  /* 105ab3f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105ab3fd:;
  /* 105ab3fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab401 je 0x105ab414 */
  if (C.zf) goto L_105ab414;
  /* 105ab403 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab406 push ecx */
  push32((uint32_t)(ECX));
  /* 105ab407 call 0x105aeec0 */
  push32(0x105ab40cu); f_105aeec0();
  /* 105ab40c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab40f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ab412 jmp 0x105ab44e */
  goto L_105ab44e;
L_105ab414:;
  /* 105ab414 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab417 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 105ab41a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab41d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 105ab420 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab423 mov ecx, dword ptr [edx*4 + 0x105d4360] */
  ECX = (r32((uint32_t)(EDX*4 + 0x105d4360)));
  /* 105ab42a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 105ab42e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 105ab431 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab434 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105ab437 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab43a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105ab43d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab440 mov eax, dword ptr [eax*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(EAX*4 + 0x105d4360)));
  /* 105ab447 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 105ab44b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105ab44e:;
  /* 105ab44e mov esp, ebp */
  ESP = (EBP);
  /* 105ab450 pop ebp */
  EBP = (pop32());
  /* 105ab451 ret  */
  ESPCHK(0x105ab3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b460 @ 0x105ab460 (130 bytes, 43 insns) */
void f_105ab460(void) {
  FTRACE(0x105ab460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ab460 push ebp */
  push32((uint32_t)(EBP));
  /* 105ab461 mov ebp, esp */
  EBP = (ESP);
  /* 105ab463 push ecx */
  push32((uint32_t)(ECX));
  /* 105ab464 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab467 cmp eax, dword ptr [0x105d449c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d449c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab46d jae 0x105ab491 */
  if (!C.cf) goto L_105ab491;
  /* 105ab46f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab472 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105ab475 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab478 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105ab47b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab47e mov eax, dword ptr [ecx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(ECX*4 + 0x105d4360)));
  /* 105ab485 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105ab48a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105ab48d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ab48f jne 0x105ab4ac */
  if (!C.zf) goto L_105ab4ac;
L_105ab491:;
  /* 105ab491 call 0x105aef60 */
  push32(0x105ab496u); f_105aef60();
  /* 105ab496 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105ab49c call 0x105aef70 */
  push32(0x105ab4a1u); f_105aef70();
  /* 105ab4a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105ab4a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ab4aa jmp 0x105ab4de */
  goto L_105ab4de;
L_105ab4ac:;
  /* 105ab4ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab4af push edx */
  push32((uint32_t)(EDX));
  /* 105ab4b0 call 0x105af490 */
  push32(0x105ab4b5u); f_105af490();
  /* 105ab4b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab4b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105ab4bb push eax */
  push32((uint32_t)(EAX));
  /* 105ab4bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ab4bf push ecx */
  push32((uint32_t)(ECX));
  /* 105ab4c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab4c3 push edx */
  push32((uint32_t)(EDX));
  /* 105ab4c4 call 0x105ab4f0 */
  push32(0x105ab4c9u); f_105ab4f0();
  /* 105ab4c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab4cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ab4cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab4d2 push eax */
  push32((uint32_t)(EAX));
  /* 105ab4d3 call 0x105af520 */
  push32(0x105ab4d8u); f_105af520();
  /* 105ab4d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab4db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105ab4de:;
  /* 105ab4de mov esp, ebp */
  ESP = (EBP);
  /* 105ab4e0 pop ebp */
  EBP = (pop32());
  /* 105ab4e1 ret  */
  ESPCHK(0x105ab460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4f0 @ 0x105ab4f0 (627 bytes, 182 insns) */
void f_105ab4f0(void) {
  FTRACE(0x105ab4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ab4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ab4f1 mov ebp, esp */
  EBP = (ESP);
  /* 105ab4f3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ab4f9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105ab500 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ab503 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 105ab509 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab50d jne 0x105ab516 */
  if (!C.zf) goto L_105ab516;
  /* 105ab50f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ab511 jmp 0x105ab75f */
  goto L_105ab75f;
L_105ab516:;
  /* 105ab516 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab519 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105ab51c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab51f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105ab522 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab525 mov eax, dword ptr [ecx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(ECX*4 + 0x105d4360)));
  /* 105ab52c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105ab531 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 105ab534 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ab536 je 0x105ab548 */
  if (C.zf) goto L_105ab548;
  /* 105ab538 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ab53a push 0 */
  push32((uint32_t)(0x0u));
  /* 105ab53c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab53f push edx */
  push32((uint32_t)(EDX));
  /* 105ab540 call 0x105ab3a0 */
  push32(0x105ab545u); f_105ab3a0();
  /* 105ab545 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ab548:;
  /* 105ab548 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab54b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105ab54e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab551 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105ab554 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab557 mov edx, dword ptr [eax*4 + 0x105d4360] */
  EDX = (r32((uint32_t)(EAX*4 + 0x105d4360)));
  /* 105ab55e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 105ab563 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 105ab568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ab56a je 0x105ab67c */
  if (C.zf) goto L_105ab67c;
  /* 105ab570 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ab573 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105ab576 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_105ab57d:;
  /* 105ab57d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab580 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ab583 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab586 jae 0x105ab67a */
  if (!C.cf) goto L_105ab67a;
  /* 105ab58c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 105ab592 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105ab595:;
  /* 105ab595 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ab598 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 105ab59e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ab5a0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab5a6 jge 0x105ab607 */
  if ((C.sf==C.of)) goto L_105ab607;
  /* 105ab5a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab5ab sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ab5ae cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab5b1 jae 0x105ab607 */
  if (!C.cf) goto L_105ab607;
  /* 105ab5b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab5b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105ab5b8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 105ab5be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab5c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab5c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ab5c7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 105ab5ce cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab5d1 jne 0x105ab5f1 */
  if (!C.zf) goto L_105ab5f1;
  /* 105ab5d3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 105ab5d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab5dc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 105ab5e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ab5e5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 105ab5e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ab5eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab5ee mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105ab5f1:;
  /* 105ab5f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ab5f4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 105ab5fa mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 105ab5fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ab5ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab602 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105ab605 jmp 0x105ab595 */
  goto L_105ab595;
L_105ab607:;
  /* 105ab607 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ab609 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 105ab60f push edx */
  push32((uint32_t)(EDX));
  /* 105ab610 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ab613 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 105ab619 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ab61b push eax */
  push32((uint32_t)(EAX));
  /* 105ab61c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 105ab622 push edx */
  push32((uint32_t)(EDX));
  /* 105ab623 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab626 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105ab629 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab62c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105ab62f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab632 mov edx, dword ptr [eax*4 + 0x105d4360] */
  EDX = (r32((uint32_t)(EAX*4 + 0x105d4360)));
  /* 105ab639 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 105ab63c push eax */
  push32((uint32_t)(EAX));
  /* 105ab63d call dword ptr [0x105d5214] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5214))), 0x105ab643u);
  /* 105ab643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ab645 je 0x105ab66a */
  if (C.zf) goto L_105ab66a;
  /* 105ab647 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ab64a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab650 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105ab653 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ab656 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 105ab65c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ab65e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab664 jge 0x105ab668 */
  if ((C.sf==C.of)) goto L_105ab668;
  /* 105ab666 jmp 0x105ab67a */
  goto L_105ab67a;
L_105ab668:;
  /* 105ab668 jmp 0x105ab675 */
  goto L_105ab675;
L_105ab66a:;
  /* 105ab66a call dword ptr [0x105d5250] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5250))), 0x105ab670u);
  /* 105ab670 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105ab673 jmp 0x105ab67a */
  goto L_105ab67a;
L_105ab675:;
  /* 105ab675 jmp 0x105ab57d */
  goto L_105ab57d;
L_105ab67a:;
  /* 105ab67a jmp 0x105ab6cc */
  goto L_105ab6cc;
L_105ab67c:;
  /* 105ab67c push 0 */
  push32((uint32_t)(0x0u));
  /* 105ab67e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 105ab684 push ecx */
  push32((uint32_t)(ECX));
  /* 105ab685 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105ab688 push edx */
  push32((uint32_t)(EDX));
  /* 105ab689 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ab68c push eax */
  push32((uint32_t)(EAX));
  /* 105ab68d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab690 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105ab693 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab696 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105ab699 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab69c mov eax, dword ptr [ecx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(ECX*4 + 0x105d4360)));
  /* 105ab6a3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 105ab6a6 push ecx */
  push32((uint32_t)(ECX));
  /* 105ab6a7 call dword ptr [0x105d5214] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5214))), 0x105ab6adu);
  /* 105ab6ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ab6af je 0x105ab6c3 */
  if (C.zf) goto L_105ab6c3;
  /* 105ab6b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105ab6b8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 105ab6be mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105ab6c1 jmp 0x105ab6cc */
  goto L_105ab6cc;
L_105ab6c3:;
  /* 105ab6c3 call dword ptr [0x105d5250] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5250))), 0x105ab6c9u);
  /* 105ab6c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105ab6cc:;
  /* 105ab6cc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab6d0 jne 0x105ab756 */
  if (!C.zf) goto L_105ab756;
  /* 105ab6d6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab6da je 0x105ab70a */
  if (C.zf) goto L_105ab70a;
  /* 105ab6dc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab6e0 jne 0x105ab6f9 */
  if (!C.zf) goto L_105ab6f9;
  /* 105ab6e2 call 0x105aef60 */
  push32(0x105ab6e7u); f_105aef60();
  /* 105ab6e7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105ab6ed call 0x105aef70 */
  push32(0x105ab6f2u); f_105aef70();
  /* 105ab6f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ab6f5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105ab6f7 jmp 0x105ab705 */
  goto L_105ab705;
L_105ab6f9:;
  /* 105ab6f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ab6fc push edx */
  push32((uint32_t)(EDX));
  /* 105ab6fd call 0x105aeec0 */
  push32(0x105ab702u); f_105aeec0();
  /* 105ab702 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ab705:;
  /* 105ab705 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ab708 jmp 0x105ab75f */
  goto L_105ab75f;
L_105ab70a:;
  /* 105ab70a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab70d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105ab710 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab713 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105ab716 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab719 mov edx, dword ptr [eax*4 + 0x105d4360] */
  EDX = (r32((uint32_t)(EAX*4 + 0x105d4360)));
  /* 105ab720 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 105ab725 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 105ab728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ab72a je 0x105ab73b */
  if (C.zf) goto L_105ab73b;
  /* 105ab72c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ab72f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105ab732 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab735 jne 0x105ab73b */
  if (!C.zf) goto L_105ab73b;
  /* 105ab737 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ab739 jmp 0x105ab75f */
  goto L_105ab75f;
L_105ab73b:;
  /* 105ab73b call 0x105aef60 */
  push32(0x105ab740u); f_105aef60();
  /* 105ab740 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 105ab746 call 0x105aef70 */
  push32(0x105ab74bu); f_105aef70();
  /* 105ab74b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105ab751 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ab754 jmp 0x105ab75f */
  goto L_105ab75f;
L_105ab756:;
  /* 105ab756 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ab759 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_105ab75f:;
  /* 105ab75f mov esp, ebp */
  ESP = (EBP);
  /* 105ab761 pop ebp */
  EBP = (pop32());
  /* 105ab762 ret  */
  ESPCHK(0x105ab4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b770 @ 0x105ab770 (199 bytes, 68 insns) */
void f_105ab770(void) {
  FTRACE(0x105ab770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ab770 push ebp */
  push32((uint32_t)(EBP));
  /* 105ab771 mov ebp, esp */
  EBP = (ESP);
  /* 105ab773 push ecx */
  push32((uint32_t)(ECX));
  /* 105ab774 push ebx */
  push32((uint32_t)(EBX));
  /* 105ab775 push esi */
  push32((uint32_t)(ESI));
  /* 105ab776 push edi */
  push32((uint32_t)(EDI));
L_105ab777:;
  /* 105ab777 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab77b jne 0x105ab79b */
  if (!C.zf) goto L_105ab79b;
  /* 105ab77d push 0x105cdff4 */
  push32((uint32_t)(0x105cdff4u));
  /* 105ab782 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ab784 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 105ab786 push 0x105ceb0c */
  push32((uint32_t)(0x105ceb0cu));
  /* 105ab78b push 2 */
  push32((uint32_t)(0x2u));
  /* 105ab78d call 0x105a5990 */
  push32(0x105ab792u); f_105a5990();
  /* 105ab792 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab795 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab798 jne 0x105ab79b */
  if (!C.zf) goto L_105ab79b;
  /* 105ab79a int3  */
  x86_unimpl("int3 @ 0x105ab79a");
L_105ab79b:;
  /* 105ab79b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ab79d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ab79f jne 0x105ab777 */
  if (!C.zf) goto L_105ab777;
  /* 105ab7a1 mov ecx, dword ptr [0x105d2b24] */
  ECX = (r32((uint32_t)(0x105d2b24)));
  /* 105ab7a7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab7aa mov dword ptr [0x105d2b24], ecx */
  w32((uint32_t)(0x105d2b24), (ECX));
  /* 105ab7b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab7b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105ab7b6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 105ab7b8 push 0x105ceb0c */
  push32((uint32_t)(0x105ceb0cu));
  /* 105ab7bd push 2 */
  push32((uint32_t)(0x2u));
  /* 105ab7bf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 105ab7c4 call 0x105a79f0 */
  push32(0x105ab7c9u); f_105a79f0();
  /* 105ab7c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab7cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab7cf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 105ab7d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab7d5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab7d9 je 0x105ab7f6 */
  if (C.zf) goto L_105ab7f6;
  /* 105ab7db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab7de mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105ab7e1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 105ab7e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab7e7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 105ab7ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab7ed mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 105ab7f4 jmp 0x105ab81b */
  goto L_105ab81b;
L_105ab7f6:;
  /* 105ab7f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab7f9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105ab7fc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 105ab7ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab802 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 105ab805 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab808 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab80b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab80e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 105ab811 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab814 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_105ab81b:;
  /* 105ab81b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab81e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab821 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105ab824 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105ab826 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab829 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 105ab830 pop edi */
  EDI = (pop32());
  /* 105ab831 pop esi */
  ESI = (pop32());
  /* 105ab832 pop ebx */
  EBX = (pop32());
  /* 105ab833 mov esp, ebp */
  ESP = (EBP);
  /* 105ab835 pop ebp */
  EBP = (pop32());
  /* 105ab836 ret  */
  ESPCHK(0x105ab770u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x105ab840 (50 bytes, 17 insns) */
void f_105ab840(void) {
  FTRACE(0x105ab840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ab840 push ebp */
  push32((uint32_t)(EBP));
  /* 105ab841 mov ebp, esp */
  EBP = (ESP);
  /* 105ab843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab846 cmp eax, dword ptr [0x105d449c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d449c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab84c jb 0x105ab852 */
  if (C.cf) goto L_105ab852;
  /* 105ab84e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ab850 jmp 0x105ab870 */
  goto L_105ab870;
L_105ab852:;
  /* 105ab852 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab855 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105ab858 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab85b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105ab85e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab861 mov eax, dword ptr [ecx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(ECX*4 + 0x105d4360)));
  /* 105ab868 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105ab86d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_105ab870:;
  /* 105ab870 pop ebp */
  EBP = (pop32());
  /* 105ab871 ret  */
  ESPCHK(0x105ab840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b880 @ 0x105ab880 (300 bytes, 80 insns) */
void f_105ab880(void) {
  FTRACE(0x105ab880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ab880 push ebp */
  push32((uint32_t)(EBP));
  /* 105ab881 mov ebp, esp */
  EBP = (ESP);
  /* 105ab883 push ecx */
  push32((uint32_t)(ECX));
  /* 105ab884 cmp dword ptr [0x105d4340], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d4340))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab88b jne 0x105ab899 */
  if (!C.zf) goto L_105ab899;
  /* 105ab88d mov dword ptr [0x105d4340], 0x200 */
  w32((uint32_t)(0x105d4340), (0x200u));
  /* 105ab897 jmp 0x105ab8ac */
  goto L_105ab8ac;
L_105ab899:;
  /* 105ab899 cmp dword ptr [0x105d4340], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x105d4340))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab8a0 jge 0x105ab8ac */
  if ((C.sf==C.of)) goto L_105ab8ac;
  /* 105ab8a2 mov dword ptr [0x105d4340], 0x14 */
  w32((uint32_t)(0x105d4340), (0x14u));
L_105ab8ac:;
  /* 105ab8ac push 0x83 */
  push32((uint32_t)(0x83u));
  /* 105ab8b1 push 0x105ceb18 */
  push32((uint32_t)(0x105ceb18u));
  /* 105ab8b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ab8b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 105ab8ba mov eax, dword ptr [0x105d4340] */
  EAX = (r32((uint32_t)(0x105d4340)));
  /* 105ab8bf push eax */
  push32((uint32_t)(EAX));
  /* 105ab8c0 call 0x105a7e00 */
  push32(0x105ab8c5u); f_105a7e00();
  /* 105ab8c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab8c8 mov dword ptr [0x105d2fec], eax */
  w32((uint32_t)(0x105d2fec), (EAX));
  /* 105ab8cd cmp dword ptr [0x105d2fec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2fec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab8d4 jne 0x105ab915 */
  if (!C.zf) goto L_105ab915;
  /* 105ab8d6 mov dword ptr [0x105d4340], 0x14 */
  w32((uint32_t)(0x105d4340), (0x14u));
  /* 105ab8e0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 105ab8e5 push 0x105ceb18 */
  push32((uint32_t)(0x105ceb18u));
  /* 105ab8ea push 2 */
  push32((uint32_t)(0x2u));
  /* 105ab8ec push 4 */
  push32((uint32_t)(0x4u));
  /* 105ab8ee mov ecx, dword ptr [0x105d4340] */
  ECX = (r32((uint32_t)(0x105d4340)));
  /* 105ab8f4 push ecx */
  push32((uint32_t)(ECX));
  /* 105ab8f5 call 0x105a7e00 */
  push32(0x105ab8fau); f_105a7e00();
  /* 105ab8fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab8fd mov dword ptr [0x105d2fec], eax */
  w32((uint32_t)(0x105d2fec), (EAX));
  /* 105ab902 cmp dword ptr [0x105d2fec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2fec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab909 jne 0x105ab915 */
  if (!C.zf) goto L_105ab915;
  /* 105ab90b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 105ab90d call 0x105a5840 */
  push32(0x105ab912u); f_105a5840();
  /* 105ab912 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ab915:;
  /* 105ab915 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ab91c jmp 0x105ab927 */
  goto L_105ab927;
L_105ab91e:;
  /* 105ab91e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab921 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab924 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105ab927:;
  /* 105ab927 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab92b jge 0x105ab946 */
  if ((C.sf==C.of)) goto L_105ab946;
  /* 105ab92d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab930 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105ab933 add eax, 0x105d0b50 */
  { uint32_t _a=(EAX),_b=(0x105d0b50u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab938 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab93b mov edx, dword ptr [0x105d2fec] */
  EDX = (r32((uint32_t)(0x105d2fec)));
  /* 105ab941 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 105ab944 jmp 0x105ab91e */
  goto L_105ab91e;
L_105ab946:;
  /* 105ab946 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ab94d jmp 0x105ab958 */
  goto L_105ab958;
L_105ab94f:;
  /* 105ab94f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab952 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab955 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105ab958:;
  /* 105ab958 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab95c jge 0x105ab9a8 */
  if ((C.sf==C.of)) goto L_105ab9a8;
  /* 105ab95e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab961 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105ab964 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab967 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105ab96a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab96d mov eax, dword ptr [ecx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(ECX*4 + 0x105d4360)));
  /* 105ab974 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab978 je 0x105ab996 */
  if (C.zf) goto L_105ab996;
  /* 105ab97a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab97d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105ab980 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab983 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105ab986 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ab989 mov eax, dword ptr [ecx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(ECX*4 + 0x105d4360)));
  /* 105ab990 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab994 jne 0x105ab9a6 */
  if (!C.zf) goto L_105ab9a6;
L_105ab996:;
  /* 105ab996 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ab999 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105ab99c mov dword ptr [ecx + 0x105d0b60], 0xffffffff */
  w32((uint32_t)(ECX + 0x105d0b60), (0xffffffffu));
L_105ab9a6:;
  /* 105ab9a6 jmp 0x105ab94f */
  goto L_105ab94f;
L_105ab9a8:;
  /* 105ab9a8 mov esp, ebp */
  ESP = (EBP);
  /* 105ab9aa pop ebp */
  EBP = (pop32());
  /* 105ab9ab ret  */
  ESPCHK(0x105ab880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9b0 @ 0x105ab9b0 (26 bytes, 9 insns) */
void f_105ab9b0(void) {
  FTRACE(0x105ab9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ab9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ab9b1 mov ebp, esp */
  EBP = (ESP);
  /* 105ab9b3 call 0x105af790 */
  push32(0x105ab9b8u); f_105af790();
  /* 105ab9b8 movsx eax, byte ptr [0x105d29d4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x105d29d4))));
  /* 105ab9bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ab9c1 je 0x105ab9c8 */
  if (C.zf) goto L_105ab9c8;
  /* 105ab9c3 call 0x105af550 */
  push32(0x105ab9c8u); f_105af550();
L_105ab9c8:;
  /* 105ab9c8 pop ebp */
  EBP = (pop32());
  /* 105ab9c9 ret  */
  ESPCHK(0x105ab9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d0 @ 0x105ab9d0 (61 bytes, 20 insns) */
void f_105ab9d0(void) {
  FTRACE(0x105ab9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ab9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ab9d1 mov ebp, esp */
  EBP = (ESP);
  /* 105ab9d3 cmp dword ptr [ebp + 8], 0x105d0b50 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x105d0b50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab9da jb 0x105ab9fe */
  if (C.cf) goto L_105ab9fe;
  /* 105ab9dc cmp dword ptr [ebp + 8], 0x105d0db0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x105d0db0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ab9e3 ja 0x105ab9fe */
  if ((!C.cf&&!C.zf)) goto L_105ab9fe;
  /* 105ab9e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ab9e8 sub eax, 0x105d0b50 */
  { uint32_t _a=(EAX),_b=(0x105d0b50u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ab9ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105ab9f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab9f3 push eax */
  push32((uint32_t)(EAX));
  /* 105ab9f4 call 0x105abda0 */
  push32(0x105ab9f9u); f_105abda0();
  /* 105ab9f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ab9fc jmp 0x105aba0b */
  goto L_105aba0b;
L_105ab9fe:;
  /* 105ab9fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aba01 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aba04 push ecx */
  push32((uint32_t)(ECX));
  /* 105aba05 call dword ptr [0x105d52a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a0))), 0x105aba0bu);
L_105aba0b:;
  /* 105aba0b pop ebp */
  EBP = (pop32());
  /* 105aba0c ret  */
  ESPCHK(0x105ab9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba10 @ 0x105aba10 (41 bytes, 16 insns) */
void f_105aba10(void) {
  FTRACE(0x105aba10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aba10 push ebp */
  push32((uint32_t)(EBP));
  /* 105aba11 mov ebp, esp */
  EBP = (ESP);
  /* 105aba13 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aba17 jge 0x105aba2a */
  if ((C.sf==C.of)) goto L_105aba2a;
  /* 105aba19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aba1c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aba1f push eax */
  push32((uint32_t)(EAX));
  /* 105aba20 call 0x105abda0 */
  push32(0x105aba25u); f_105abda0();
  /* 105aba25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aba28 jmp 0x105aba37 */
  goto L_105aba37;
L_105aba2a:;
  /* 105aba2a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aba2d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aba30 push ecx */
  push32((uint32_t)(ECX));
  /* 105aba31 call dword ptr [0x105d52a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a0))), 0x105aba37u);
L_105aba37:;
  /* 105aba37 pop ebp */
  EBP = (pop32());
  /* 105aba38 ret  */
  ESPCHK(0x105aba10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba40 @ 0x105aba40 (61 bytes, 20 insns) */
void f_105aba40(void) {
  FTRACE(0x105aba40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aba40 push ebp */
  push32((uint32_t)(EBP));
  /* 105aba41 mov ebp, esp */
  EBP = (ESP);
  /* 105aba43 cmp dword ptr [ebp + 8], 0x105d0b50 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x105d0b50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aba4a jb 0x105aba6e */
  if (C.cf) goto L_105aba6e;
  /* 105aba4c cmp dword ptr [ebp + 8], 0x105d0db0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x105d0db0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aba53 ja 0x105aba6e */
  if ((!C.cf&&!C.zf)) goto L_105aba6e;
  /* 105aba55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aba58 sub eax, 0x105d0b50 */
  { uint32_t _a=(EAX),_b=(0x105d0b50u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aba5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105aba60 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aba63 push eax */
  push32((uint32_t)(EAX));
  /* 105aba64 call 0x105abe40 */
  push32(0x105aba69u); f_105abe40();
  /* 105aba69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aba6c jmp 0x105aba7b */
  goto L_105aba7b;
L_105aba6e:;
  /* 105aba6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aba71 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aba74 push ecx */
  push32((uint32_t)(ECX));
  /* 105aba75 call dword ptr [0x105d52a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a4))), 0x105aba7bu);
L_105aba7b:;
  /* 105aba7b pop ebp */
  EBP = (pop32());
  /* 105aba7c ret  */
  ESPCHK(0x105aba40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba80 @ 0x105aba80 (41 bytes, 16 insns) */
void f_105aba80(void) {
  FTRACE(0x105aba80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aba80 push ebp */
  push32((uint32_t)(EBP));
  /* 105aba81 mov ebp, esp */
  EBP = (ESP);
  /* 105aba83 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aba87 jge 0x105aba9a */
  if ((C.sf==C.of)) goto L_105aba9a;
  /* 105aba89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aba8c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aba8f push eax */
  push32((uint32_t)(EAX));
  /* 105aba90 call 0x105abe40 */
  push32(0x105aba95u); f_105abe40();
  /* 105aba95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aba98 jmp 0x105abaa7 */
  goto L_105abaa7;
L_105aba9a:;
  /* 105aba9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105aba9d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105abaa0 push ecx */
  push32((uint32_t)(ECX));
  /* 105abaa1 call dword ptr [0x105d52a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a4))), 0x105abaa7u);
L_105abaa7:;
  /* 105abaa7 pop ebp */
  EBP = (pop32());
  /* 105abaa8 ret  */
  ESPCHK(0x105aba80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bab0 @ 0x105abab0 (119 bytes, 34 insns) */
void f_105abab0(void) {
  FTRACE(0x105abab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105abab0 push ebp */
  push32((uint32_t)(EBP));
  /* 105abab1 mov ebp, esp */
  EBP = (ESP);
  /* 105abab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105abab6 push 0x105d2d2c */
  push32((uint32_t)(0x105d2d2cu));
  /* 105ababb call dword ptr [0x105d5224] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5224))), 0x105abac1u);
  /* 105abac1 cmp dword ptr [0x105d2d1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abac8 je 0x105abae8 */
  if (C.zf) goto L_105abae8;
  /* 105abaca push 0x105d2d2c */
  push32((uint32_t)(0x105d2d2cu));
  /* 105abacf call dword ptr [0x105d5218] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5218))), 0x105abad5u);
  /* 105abad5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105abad7 call 0x105abda0 */
  push32(0x105abadcu); f_105abda0();
  /* 105abadc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105abadf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105abae6 jmp 0x105abaef */
  goto L_105abaef;
L_105abae8:;
  /* 105abae8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105abaef:;
  /* 105abaef mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 105abaf3 push eax */
  push32((uint32_t)(EAX));
  /* 105abaf4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105abaf7 push ecx */
  push32((uint32_t)(ECX));
  /* 105abaf8 call 0x105abb30 */
  push32(0x105abafdu); f_105abb30();
  /* 105abafd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105abb00 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105abb03 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abb07 je 0x105abb15 */
  if (C.zf) goto L_105abb15;
  /* 105abb09 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105abb0b call 0x105abe40 */
  push32(0x105abb10u); f_105abe40();
  /* 105abb10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105abb13 jmp 0x105abb20 */
  goto L_105abb20;
L_105abb15:;
  /* 105abb15 push 0x105d2d2c */
  push32((uint32_t)(0x105d2d2cu));
  /* 105abb1a call dword ptr [0x105d5218] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5218))), 0x105abb20u);
L_105abb20:;
  /* 105abb20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105abb23 mov esp, ebp */
  ESP = (EBP);
  /* 105abb25 pop ebp */
  EBP = (pop32());
  /* 105abb26 ret  */
  ESPCHK(0x105abab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb30 @ 0x105abb30 (160 bytes, 50 insns) */
void f_105abb30(void) {
  FTRACE(0x105abb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105abb30 push ebp */
  push32((uint32_t)(EBP));
  /* 105abb31 mov ebp, esp */
  EBP = (ESP);
  /* 105abb33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105abb36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abb3a jne 0x105abb43 */
  if (!C.zf) goto L_105abb43;
  /* 105abb3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105abb3e jmp 0x105abbcc */
  goto L_105abbcc;
L_105abb43:;
  /* 105abb43 cmp dword ptr [0x105d2ba8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2ba8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abb4a jne 0x105abb7a */
  if (!C.zf) goto L_105abb7a;
  /* 105abb4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105abb4f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105abb54 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abb59 jle 0x105abb6b */
  if ((C.zf||C.sf!=C.of)) goto L_105abb6b;
  /* 105abb5b call 0x105aef60 */
  push32(0x105abb60u); f_105aef60();
  /* 105abb60 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 105abb66 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105abb69 jmp 0x105abbcc */
  goto L_105abbcc;
L_105abb6b:;
  /* 105abb6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105abb6e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 105abb71 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 105abb73 mov eax, 1 */
  EAX = (0x1u);
  /* 105abb78 jmp 0x105abbcc */
  goto L_105abbcc;
L_105abb7a:;
  /* 105abb7a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105abb81 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 105abb84 push eax */
  push32((uint32_t)(EAX));
  /* 105abb85 push 0 */
  push32((uint32_t)(0x0u));
  /* 105abb87 mov ecx, dword ptr [0x105d1158] */
  ECX = (r32((uint32_t)(0x105d1158)));
  /* 105abb8d push ecx */
  push32((uint32_t)(ECX));
  /* 105abb8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105abb91 push edx */
  push32((uint32_t)(EDX));
  /* 105abb92 push 1 */
  push32((uint32_t)(0x1u));
  /* 105abb94 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 105abb97 push eax */
  push32((uint32_t)(EAX));
  /* 105abb98 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105abb9d mov ecx, dword ptr [0x105d2bb8] */
  ECX = (r32((uint32_t)(0x105d2bb8)));
  /* 105abba3 push ecx */
  push32((uint32_t)(ECX));
  /* 105abba4 call dword ptr [0x105d527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d527c))), 0x105abbaau);
  /* 105abbaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105abbad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abbb1 je 0x105abbb9 */
  if (C.zf) goto L_105abbb9;
  /* 105abbb3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abbb7 je 0x105abbc9 */
  if (C.zf) goto L_105abbc9;
L_105abbb9:;
  /* 105abbb9 call 0x105aef60 */
  push32(0x105abbbeu); f_105aef60();
  /* 105abbbe mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 105abbc4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105abbc7 jmp 0x105abbcc */
  goto L_105abbcc;
L_105abbc9:;
  /* 105abbc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105abbcc:;
  /* 105abbcc mov esp, ebp */
  ESP = (EBP);
  /* 105abbce pop ebp */
  EBP = (pop32());
  /* 105abbcf ret  */
  ESPCHK(0x105abb30u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x105abbd0 (104 bytes, 43 insns) */
void f_105abbd0(void) {
  FTRACE(0x105abbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105abbd0 push ebx */
  push32((uint32_t)(EBX));
  /* 105abbd1 push esi */
  push32((uint32_t)(ESI));
  /* 105abbd2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 105abbd6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105abbd8 jne 0x105abbf2 */
  if (!C.zf) goto L_105abbf2;
  /* 105abbda mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 105abbde mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 105abbe2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105abbe4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105abbe6 mov ebx, eax */
  EBX = (EAX);
  /* 105abbe8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 105abbec div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105abbee mov edx, ebx */
  EDX = (EBX);
  /* 105abbf0 jmp 0x105abc33 */
  goto L_105abc33;
L_105abbf2:;
  /* 105abbf2 mov ecx, eax */
  ECX = (EAX);
  /* 105abbf4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 105abbf8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 105abbfc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_105abc00:;
  /* 105abc00 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 105abc02 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 105abc04 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 105abc06 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 105abc08 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105abc0a jne 0x105abc00 */
  if (!C.zf) goto L_105abc00;
  /* 105abc0c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105abc0e mov esi, eax */
  ESI = (EAX);
  /* 105abc10 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105abc14 mov ecx, eax */
  ECX = (EAX);
  /* 105abc16 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 105abc1a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105abc1c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105abc1e jb 0x105abc2e */
  if (C.cf) goto L_105abc2e;
  /* 105abc20 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abc24 ja 0x105abc2e */
  if ((!C.cf&&!C.zf)) goto L_105abc2e;
  /* 105abc26 jb 0x105abc2f */
  if (C.cf) goto L_105abc2f;
  /* 105abc28 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abc2c jbe 0x105abc2f */
  if ((C.cf||C.zf)) goto L_105abc2f;
L_105abc2e:;
  /* 105abc2e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_105abc2f:;
  /* 105abc2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105abc31 mov eax, esi */
  EAX = (ESI);
L_105abc33:;
  /* 105abc33 pop esi */
  ESI = (pop32());
  /* 105abc34 pop ebx */
  EBX = (pop32());
  /* 105abc35 ret 0x10 */
  ESPCHK(0x105abbd0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x105abc40 (117 bytes, 44 insns) */
void f_105abc40(void) {
  FTRACE(0x105abc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105abc40 push ebx */
  push32((uint32_t)(EBX));
  /* 105abc41 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 105abc45 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105abc47 jne 0x105abc61 */
  if (!C.zf) goto L_105abc61;
  /* 105abc49 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 105abc4d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 105abc51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105abc53 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105abc55 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105abc59 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105abc5b mov eax, edx */
  EAX = (EDX);
  /* 105abc5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105abc5f jmp 0x105abcb1 */
  goto L_105abcb1;
L_105abc61:;
  /* 105abc61 mov ecx, eax */
  ECX = (EAX);
  /* 105abc63 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 105abc67 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 105abc6b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_105abc6f:;
  /* 105abc6f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 105abc71 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 105abc73 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 105abc75 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 105abc77 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105abc79 jne 0x105abc6f */
  if (!C.zf) goto L_105abc6f;
  /* 105abc7b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105abc7d mov ecx, eax */
  ECX = (EAX);
  /* 105abc7f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105abc83 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 105abc84 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105abc88 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105abc8a jb 0x105abc9a */
  if (C.cf) goto L_105abc9a;
  /* 105abc8c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abc90 ja 0x105abc9a */
  if ((!C.cf&&!C.zf)) goto L_105abc9a;
  /* 105abc92 jb 0x105abca2 */
  if (C.cf) goto L_105abca2;
  /* 105abc94 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abc98 jbe 0x105abca2 */
  if ((C.cf||C.zf)) goto L_105abca2;
L_105abc9a:;
  /* 105abc9a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105abc9e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_105abca2:;
  /* 105abca2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105abca6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105abcaa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105abcac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105abcae sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_105abcb1:;
  /* 105abcb1 pop ebx */
  EBX = (pop32());
  /* 105abcb2 ret 0x10 */
  ESPCHK(0x105abc40u, _esp0);
  ESP += 20; return;
}

/* FUN_1000bcc0 @ 0x105abcc0 (55 bytes, 16 insns) */
void f_105abcc0(void) {
  FTRACE(0x105abcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105abcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 105abcc1 mov ebp, esp */
  EBP = (ESP);
  /* 105abcc3 mov eax, dword ptr [0x105d1044] */
  EAX = (r32((uint32_t)(0x105d1044)));
  /* 105abcc8 push eax */
  push32((uint32_t)(EAX));
  /* 105abcc9 call dword ptr [0x105d52a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a8))), 0x105abccfu);
  /* 105abccf mov ecx, dword ptr [0x105d1034] */
  ECX = (r32((uint32_t)(0x105d1034)));
  /* 105abcd5 push ecx */
  push32((uint32_t)(ECX));
  /* 105abcd6 call dword ptr [0x105d52a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a8))), 0x105abcdcu);
  /* 105abcdc mov edx, dword ptr [0x105d1024] */
  EDX = (r32((uint32_t)(0x105d1024)));
  /* 105abce2 push edx */
  push32((uint32_t)(EDX));
  /* 105abce3 call dword ptr [0x105d52a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a8))), 0x105abce9u);
  /* 105abce9 mov eax, dword ptr [0x105d1004] */
  EAX = (r32((uint32_t)(0x105d1004)));
  /* 105abcee push eax */
  push32((uint32_t)(EAX));
  /* 105abcef call dword ptr [0x105d52a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a8))), 0x105abcf5u);
  /* 105abcf5 pop ebp */
  EBP = (pop32());
  /* 105abcf6 ret  */
  ESPCHK(0x105abcc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd00 @ 0x105abd00 (159 bytes, 47 insns) */
void f_105abd00(void) {
  FTRACE(0x105abd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105abd00 push ebp */
  push32((uint32_t)(EBP));
  /* 105abd01 mov ebp, esp */
  EBP = (ESP);
  /* 105abd03 push ecx */
  push32((uint32_t)(ECX));
  /* 105abd04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105abd0b jmp 0x105abd16 */
  goto L_105abd16;
L_105abd0d:;
  /* 105abd0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105abd10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105abd13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105abd16:;
  /* 105abd16 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abd1a jge 0x105abd69 */
  if ((C.sf==C.of)) goto L_105abd69;
  /* 105abd1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105abd1f cmp dword ptr [ecx*4 + 0x105d1000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x105d1000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abd27 je 0x105abd67 */
  if (C.zf) goto L_105abd67;
  /* 105abd29 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abd2d je 0x105abd67 */
  if (C.zf) goto L_105abd67;
  /* 105abd2f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abd33 je 0x105abd67 */
  if (C.zf) goto L_105abd67;
  /* 105abd35 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abd39 je 0x105abd67 */
  if (C.zf) goto L_105abd67;
  /* 105abd3b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abd3f je 0x105abd67 */
  if (C.zf) goto L_105abd67;
  /* 105abd41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105abd44 mov eax, dword ptr [edx*4 + 0x105d1000] */
  EAX = (r32((uint32_t)(EDX*4 + 0x105d1000)));
  /* 105abd4b push eax */
  push32((uint32_t)(EAX));
  /* 105abd4c call dword ptr [0x105d5264] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5264))), 0x105abd52u);
  /* 105abd52 push 2 */
  push32((uint32_t)(0x2u));
  /* 105abd54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105abd57 mov edx, dword ptr [ecx*4 + 0x105d1000] */
  EDX = (r32((uint32_t)(ECX*4 + 0x105d1000)));
  /* 105abd5e push edx */
  push32((uint32_t)(EDX));
  /* 105abd5f call 0x105a8480 */
  push32(0x105abd64u); f_105a8480();
  /* 105abd64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105abd67:;
  /* 105abd67 jmp 0x105abd0d */
  goto L_105abd0d;
L_105abd69:;
  /* 105abd69 mov eax, dword ptr [0x105d1024] */
  EAX = (r32((uint32_t)(0x105d1024)));
  /* 105abd6e push eax */
  push32((uint32_t)(EAX));
  /* 105abd6f call dword ptr [0x105d5264] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5264))), 0x105abd75u);
  /* 105abd75 mov ecx, dword ptr [0x105d1034] */
  ECX = (r32((uint32_t)(0x105d1034)));
  /* 105abd7b push ecx */
  push32((uint32_t)(ECX));
  /* 105abd7c call dword ptr [0x105d5264] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5264))), 0x105abd82u);
  /* 105abd82 mov edx, dword ptr [0x105d1044] */
  EDX = (r32((uint32_t)(0x105d1044)));
  /* 105abd88 push edx */
  push32((uint32_t)(EDX));
  /* 105abd89 call dword ptr [0x105d5264] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5264))), 0x105abd8fu);
  /* 105abd8f mov eax, dword ptr [0x105d1004] */
  EAX = (r32((uint32_t)(0x105d1004)));
  /* 105abd94 push eax */
  push32((uint32_t)(EAX));
  /* 105abd95 call dword ptr [0x105d5264] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5264))), 0x105abd9bu);
  /* 105abd9b mov esp, ebp */
  ESP = (EBP);
  /* 105abd9d pop ebp */
  EBP = (pop32());
  /* 105abd9e ret  */
  ESPCHK(0x105abd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bda0 @ 0x105abda0 (151 bytes, 46 insns) */
void f_105abda0(void) {
  FTRACE(0x105abda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105abda0 push ebp */
  push32((uint32_t)(EBP));
  /* 105abda1 mov ebp, esp */
  EBP = (ESP);
  /* 105abda3 push ecx */
  push32((uint32_t)(ECX));
  /* 105abda4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105abda7 cmp dword ptr [eax*4 + 0x105d1000], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x105d1000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abdaf jne 0x105abe22 */
  if (!C.zf) goto L_105abe22;
  /* 105abdb1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 105abdb6 push 0x105ceb20 */
  push32((uint32_t)(0x105ceb20u));
  /* 105abdbb push 2 */
  push32((uint32_t)(0x2u));
  /* 105abdbd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 105abdbf call 0x105a79f0 */
  push32(0x105abdc4u); f_105a79f0();
  /* 105abdc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105abdc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105abdca cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abdce jne 0x105abdda */
  if (!C.zf) goto L_105abdda;
  /* 105abdd0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105abdd2 call 0x105a5840 */
  push32(0x105abdd7u); f_105a5840();
  /* 105abdd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105abdda:;
  /* 105abdda push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105abddc call 0x105abda0 */
  push32(0x105abde1u); f_105abda0();
  /* 105abde1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105abde4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105abde7 cmp dword ptr [ecx*4 + 0x105d1000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x105d1000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abdef jne 0x105abe0a */
  if (!C.zf) goto L_105abe0a;
  /* 105abdf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105abdf4 push edx */
  push32((uint32_t)(EDX));
  /* 105abdf5 call dword ptr [0x105d52a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a8))), 0x105abdfbu);
  /* 105abdfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105abdfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105abe01 mov dword ptr [eax*4 + 0x105d1000], ecx */
  w32((uint32_t)(EAX*4 + 0x105d1000), (ECX));
  /* 105abe08 jmp 0x105abe18 */
  goto L_105abe18;
L_105abe0a:;
  /* 105abe0a push 2 */
  push32((uint32_t)(0x2u));
  /* 105abe0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105abe0f push edx */
  push32((uint32_t)(EDX));
  /* 105abe10 call 0x105a8480 */
  push32(0x105abe15u); f_105a8480();
  /* 105abe15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105abe18:;
  /* 105abe18 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105abe1a call 0x105abe40 */
  push32(0x105abe1fu); f_105abe40();
  /* 105abe1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105abe22:;
  /* 105abe22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105abe25 mov ecx, dword ptr [eax*4 + 0x105d1000] */
  ECX = (r32((uint32_t)(EAX*4 + 0x105d1000)));
  /* 105abe2c push ecx */
  push32((uint32_t)(ECX));
  /* 105abe2d call dword ptr [0x105d52a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a0))), 0x105abe33u);
  /* 105abe33 mov esp, ebp */
  ESP = (EBP);
  /* 105abe35 pop ebp */
  EBP = (pop32());
  /* 105abe36 ret  */
  ESPCHK(0x105abda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be40 @ 0x105abe40 (22 bytes, 8 insns) */
void f_105abe40(void) {
  FTRACE(0x105abe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105abe40 push ebp */
  push32((uint32_t)(EBP));
  /* 105abe41 mov ebp, esp */
  EBP = (ESP);
  /* 105abe43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105abe46 mov ecx, dword ptr [eax*4 + 0x105d1000] */
  ECX = (r32((uint32_t)(EAX*4 + 0x105d1000)));
  /* 105abe4d push ecx */
  push32((uint32_t)(ECX));
  /* 105abe4e call dword ptr [0x105d52a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a4))), 0x105abe54u);
  /* 105abe54 pop ebp */
  EBP = (pop32());
  /* 105abe55 ret  */
  ESPCHK(0x105abe40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be60 @ 0x105abe60 (26 bytes, 10 insns) */
void f_105abe60(void) {
  FTRACE(0x105abe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105abe60 push ebp */
  push32((uint32_t)(EBP));
  /* 105abe61 mov ebp, esp */
  EBP = (ESP);
  /* 105abe63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105abe66 push eax */
  push32((uint32_t)(EAX));
  /* 105abe67 push 0 */
  push32((uint32_t)(0x0u));
  /* 105abe69 call dword ptr [0x105d52ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52ac))), 0x105abe6fu);
  /* 105abe6f push 0xff */
  push32((uint32_t)(0xffu));
  /* 105abe74 call dword ptr [0x105d522c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d522c))), 0x105abe7au);
  /* 105abe7a pop ebp */
  EBP = (pop32());
  /* 105abe7b ret  */
  ESPCHK(0x105abe60u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x105abe80 (446 bytes, 130 insns) */
void f_105abe80(void) {
  FTRACE(0x105abe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105abe80 push ebp */
  push32((uint32_t)(EBP));
  /* 105abe81 mov ebp, esp */
  EBP = (ESP);
  /* 105abe83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105abe86 call 0x105a7430 */
  push32(0x105abe8bu); f_105a7430();
  /* 105abe8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105abe8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105abe91 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 105abe94 push ecx */
  push32((uint32_t)(ECX));
  /* 105abe95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105abe98 push edx */
  push32((uint32_t)(EDX));
  /* 105abe99 call 0x105ac040 */
  push32(0x105abe9eu); f_105ac040();
  /* 105abe9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105abea1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105abea4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abea8 je 0x105abeb3 */
  if (C.zf) goto L_105abeb3;
  /* 105abeaa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105abead cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abeb1 jne 0x105abec2 */
  if (!C.zf) goto L_105abec2;
L_105abeb3:;
  /* 105abeb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105abeb6 push ecx */
  push32((uint32_t)(ECX));
  /* 105abeb7 call dword ptr [0x105d52b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52b0))), 0x105abebdu);
  /* 105abebd jmp 0x105ac03a */
  goto L_105ac03a;
L_105abec2:;
  /* 105abec2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105abec5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abec9 jne 0x105abedf */
  if (!C.zf) goto L_105abedf;
  /* 105abecb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105abece mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 105abed5 mov eax, 1 */
  EAX = (0x1u);
  /* 105abeda jmp 0x105ac03a */
  goto L_105ac03a;
L_105abedf:;
  /* 105abedf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105abee2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abee6 jne 0x105abef0 */
  if (!C.zf) goto L_105abef0;
  /* 105abee8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105abeeb jmp 0x105ac03a */
  goto L_105ac03a;
L_105abef0:;
  /* 105abef0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105abef3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105abef6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105abef9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105abefc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 105abeff mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 105abf02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105abf05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105abf08 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 105abf0b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105abf0e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abf12 jne 0x105ac017 */
  if (!C.zf) goto L_105ac017;
  /* 105abf18 mov eax, dword ptr [0x105d1138] */
  EAX = (r32((uint32_t)(0x105d1138)));
  /* 105abf1d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105abf20 jmp 0x105abf2b */
  goto L_105abf2b;
L_105abf22:;
  /* 105abf22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105abf25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105abf28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_105abf2b:;
  /* 105abf2b mov edx, dword ptr [0x105d1138] */
  EDX = (r32((uint32_t)(0x105d1138)));
  /* 105abf31 add edx, dword ptr [0x105d113c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x105d113c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105abf37 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abf3a jge 0x105abf52 */
  if ((C.sf==C.of)) goto L_105abf52;
  /* 105abf3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105abf3f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105abf42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105abf45 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 105abf48 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 105abf50 jmp 0x105abf22 */
  goto L_105abf22;
L_105abf52:;
  /* 105abf52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105abf55 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 105abf58 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105abf5b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105abf5e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abf64 jne 0x105abf75 */
  if (!C.zf) goto L_105abf75;
  /* 105abf66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105abf69 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 105abf70 jmp 0x105abffd */
  goto L_105abffd;
L_105abf75:;
  /* 105abf75 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105abf78 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abf7e jne 0x105abf8c */
  if (!C.zf) goto L_105abf8c;
  /* 105abf80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105abf83 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 105abf8a jmp 0x105abffd */
  goto L_105abffd;
L_105abf8c:;
  /* 105abf8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105abf8f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abf95 jne 0x105abfa3 */
  if (!C.zf) goto L_105abfa3;
  /* 105abf97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105abf9a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 105abfa1 jmp 0x105abffd */
  goto L_105abffd;
L_105abfa3:;
  /* 105abfa3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105abfa6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abfac jne 0x105abfba */
  if (!C.zf) goto L_105abfba;
  /* 105abfae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105abfb1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 105abfb8 jmp 0x105abffd */
  goto L_105abffd;
L_105abfba:;
  /* 105abfba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105abfbd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abfc3 jne 0x105abfd1 */
  if (!C.zf) goto L_105abfd1;
  /* 105abfc5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105abfc8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 105abfcf jmp 0x105abffd */
  goto L_105abffd;
L_105abfd1:;
  /* 105abfd1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105abfd4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abfda jne 0x105abfe8 */
  if (!C.zf) goto L_105abfe8;
  /* 105abfdc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105abfdf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 105abfe6 jmp 0x105abffd */
  goto L_105abffd;
L_105abfe8:;
  /* 105abfe8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105abfeb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105abff1 jne 0x105abffd */
  if (!C.zf) goto L_105abffd;
  /* 105abff3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105abff6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_105abffd:;
  /* 105abffd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ac000 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 105ac003 push edx */
  push32((uint32_t)(EDX));
  /* 105ac004 push 8 */
  push32((uint32_t)(0x8u));
  /* 105ac006 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x105ac009u);
  /* 105ac009 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac00c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ac00f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ac012 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 105ac015 jmp 0x105ac02e */
  goto L_105ac02e;
L_105ac017:;
  /* 105ac017 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ac01a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 105ac021 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ac024 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ac027 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac028 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x105ac02bu);
  /* 105ac02b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ac02e:;
  /* 105ac02e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ac031 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ac034 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 105ac037 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105ac03a:;
  /* 105ac03a mov esp, ebp */
  ESP = (EBP);
  /* 105ac03c pop ebp */
  EBP = (pop32());
  /* 105ac03d ret  */
  ESPCHK(0x105abe80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c040 @ 0x105ac040 (89 bytes, 35 insns) */
void f_105ac040(void) {
  FTRACE(0x105ac040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac040 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac041 mov ebp, esp */
  EBP = (ESP);
  /* 105ac043 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac044 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac047 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105ac04a:;
  /* 105ac04a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac04d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105ac04f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac052 je 0x105ac072 */
  if (C.zf) goto L_105ac072;
  /* 105ac054 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac057 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac05a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ac05d mov ecx, dword ptr [0x105d1144] */
  ECX = (r32((uint32_t)(0x105d1144)));
  /* 105ac063 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ac066 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac069 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac06b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac06e jae 0x105ac072 */
  if (!C.cf) goto L_105ac072;
  /* 105ac070 jmp 0x105ac04a */
  goto L_105ac04a;
L_105ac072:;
  /* 105ac072 mov eax, dword ptr [0x105d1144] */
  EAX = (r32((uint32_t)(0x105d1144)));
  /* 105ac077 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ac07a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac07d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac07f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac082 jae 0x105ac08e */
  if (!C.cf) goto L_105ac08e;
  /* 105ac084 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac087 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105ac089 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac08c je 0x105ac092 */
  if (C.zf) goto L_105ac092;
L_105ac08e:;
  /* 105ac08e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ac090 jmp 0x105ac095 */
  goto L_105ac095;
L_105ac092:;
  /* 105ac092 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105ac095:;
  /* 105ac095 mov esp, ebp */
  ESP = (EBP);
  /* 105ac097 pop ebp */
  EBP = (pop32());
  /* 105ac098 ret  */
  ESPCHK(0x105ac040u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x105ac0a0 (48 bytes, 17 insns) */
void f_105ac0a0(void) {
  FTRACE(0x105ac0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac0a1 mov ebp, esp */
  EBP = (ESP);
  /* 105ac0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac0a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac0a6 call 0x105abda0 */
  push32(0x105ac0abu); f_105abda0();
  /* 105ac0ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac0ae mov eax, dword ptr [0x105d2b8c] */
  EAX = (r32((uint32_t)(0x105d2b8c)));
  /* 105ac0b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ac0b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac0b9 mov dword ptr [0x105d2b8c], ecx */
  w32((uint32_t)(0x105d2b8c), (ECX));
  /* 105ac0bf push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac0c1 call 0x105abe40 */
  push32(0x105ac0c6u); f_105abe40();
  /* 105ac0c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac0c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac0cc mov esp, ebp */
  ESP = (EBP);
  /* 105ac0ce pop ebp */
  EBP = (pop32());
  /* 105ac0cf ret  */
  ESPCHK(0x105ac0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0d0 @ 0x105ac0d0 (10 bytes, 5 insns) */
void f_105ac0d0(void) {
  FTRACE(0x105ac0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac0d1 mov ebp, esp */
  EBP = (ESP);
  /* 105ac0d3 mov eax, dword ptr [0x105d2b8c] */
  EAX = (r32((uint32_t)(0x105d2b8c)));
  /* 105ac0d8 pop ebp */
  EBP = (pop32());
  /* 105ac0d9 ret  */
  ESPCHK(0x105ac0d0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x105ac0e0 (45 bytes, 19 insns) */
void f_105ac0e0(void) {
  FTRACE(0x105ac0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac0e1 mov ebp, esp */
  EBP = (ESP);
  /* 105ac0e3 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac0e4 mov eax, dword ptr [0x105d2b8c] */
  EAX = (r32((uint32_t)(0x105d2b8c)));
  /* 105ac0e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ac0ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac0f0 je 0x105ac100 */
  if (C.zf) goto L_105ac100;
  /* 105ac0f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac0f5 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac0f6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x105ac0f9u);
  /* 105ac0f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac0fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ac0fe jne 0x105ac104 */
  if (!C.zf) goto L_105ac104;
L_105ac100:;
  /* 105ac100 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ac102 jmp 0x105ac109 */
  goto L_105ac109;
L_105ac104:;
  /* 105ac104 mov eax, 1 */
  EAX = (0x1u);
L_105ac109:;
  /* 105ac109 mov esp, ebp */
  ESP = (EBP);
  /* 105ac10b pop ebp */
  EBP = (pop32());
  /* 105ac10c ret  */
  ESPCHK(0x105ac0e0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x105ac110 (88 bytes, 40 insns) */
void f_105ac110(void) {
  FTRACE(0x105ac110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac110 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 105ac114 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 105ac118 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ac11a je 0x105ac163 */
  if (C.zf) goto L_105ac163;
  /* 105ac11c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ac11e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 105ac122 push edi */
  push32((uint32_t)(EDI));
  /* 105ac123 mov edi, ecx */
  EDI = (ECX);
  /* 105ac125 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac128 jb 0x105ac157 */
  if (C.cf) goto L_105ac157;
  /* 105ac12a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105ac12c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 105ac12f je 0x105ac139 */
  if (C.zf) goto L_105ac139;
  /* 105ac131 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_105ac133:;
  /* 105ac133 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ac135 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105ac136 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105ac137 jne 0x105ac133 */
  if (!C.zf) goto L_105ac133;
L_105ac139:;
  /* 105ac139 mov ecx, eax */
  ECX = (EAX);
  /* 105ac13b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 105ac13e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac140 mov ecx, eax */
  ECX = (EAX);
  /* 105ac142 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105ac145 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac147 mov ecx, edx */
  ECX = (EDX);
  /* 105ac149 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105ac14c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ac14f je 0x105ac157 */
  if (C.zf) goto L_105ac157;
  /* 105ac151 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 105ac153 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ac155 je 0x105ac15d */
  if (C.zf) goto L_105ac15d;
L_105ac157:;
  /* 105ac157 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ac159 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105ac15a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 105ac15b jne 0x105ac157 */
  if (!C.zf) goto L_105ac157;
L_105ac15d:;
  /* 105ac15d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105ac161 pop edi */
  EDI = (pop32());
  /* 105ac162 ret  */
  ESPCHK(0x105ac110u, _esp0);
  ESP += 4; return;
L_105ac163:;
  /* 105ac163 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 105ac167 ret  */
  ESPCHK(0x105ac110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c170 @ 0x105ac170 (23 bytes, 10 insns) */
void f_105ac170(void) {
  FTRACE(0x105ac170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac170 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac171 mov ebp, esp */
  EBP = (ESP);
  /* 105ac173 mov eax, dword ptr [0x105d2b88] */
  EAX = (r32((uint32_t)(0x105d2b88)));
  /* 105ac178 push eax */
  push32((uint32_t)(EAX));
  /* 105ac179 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac17c push ecx */
  push32((uint32_t)(ECX));
  /* 105ac17d call 0x105ac190 */
  push32(0x105ac182u); f_105ac190();
  /* 105ac182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac185 pop ebp */
  EBP = (pop32());
  /* 105ac186 ret  */
  ESPCHK(0x105ac170u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x105ac190 (87 bytes, 34 insns) */
void f_105ac190(void) {
  FTRACE(0x105ac190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac190 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac191 mov ebp, esp */
  EBP = (ESP);
  /* 105ac193 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac194 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac198 jbe 0x105ac19e */
  if ((C.cf||C.zf)) goto L_105ac19e;
  /* 105ac19a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ac19c jmp 0x105ac1e3 */
  goto L_105ac1e3;
L_105ac19e:;
  /* 105ac19e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac1a2 ja 0x105ac1b5 */
  if ((!C.cf&&!C.zf)) goto L_105ac1b5;
  /* 105ac1a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac1a7 push eax */
  push32((uint32_t)(EAX));
  /* 105ac1a8 call 0x105ac1f0 */
  push32(0x105ac1adu); f_105ac1f0();
  /* 105ac1ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac1b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ac1b3 jmp 0x105ac1bc */
  goto L_105ac1bc;
L_105ac1b5:;
  /* 105ac1b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105ac1bc:;
  /* 105ac1bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac1c0 jne 0x105ac1c8 */
  if (!C.zf) goto L_105ac1c8;
  /* 105ac1c2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac1c6 jne 0x105ac1cd */
  if (!C.zf) goto L_105ac1cd;
L_105ac1c8:;
  /* 105ac1c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac1cb jmp 0x105ac1e3 */
  goto L_105ac1e3;
L_105ac1cd:;
  /* 105ac1cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac1d0 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac1d1 call 0x105ac0e0 */
  push32(0x105ac1d6u); f_105ac0e0();
  /* 105ac1d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac1d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ac1db jne 0x105ac1e1 */
  if (!C.zf) goto L_105ac1e1;
  /* 105ac1dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ac1df jmp 0x105ac1e3 */
  goto L_105ac1e3;
L_105ac1e1:;
  /* 105ac1e1 jmp 0x105ac19e */
  goto L_105ac19e;
L_105ac1e3:;
  /* 105ac1e3 mov esp, ebp */
  ESP = (EBP);
  /* 105ac1e5 pop ebp */
  EBP = (pop32());
  /* 105ac1e6 ret  */
  ESPCHK(0x105ac190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1f0 @ 0x105ac1f0 (109 bytes, 37 insns) */
void f_105ac1f0(void) {
  FTRACE(0x105ac1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac1f1 mov ebp, esp */
  EBP = (ESP);
  /* 105ac1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac1f7 cmp eax, dword ptr [0x105d1154] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d1154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac1fd ja 0x105ac22d */
  if ((!C.cf&&!C.zf)) goto L_105ac22d;
  /* 105ac1ff push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac201 call 0x105abda0 */
  push32(0x105ac206u); f_105abda0();
  /* 105ac206 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac209 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac20c push ecx */
  push32((uint32_t)(ECX));
  /* 105ac20d call 0x105acd30 */
  push32(0x105ac212u); f_105acd30();
  /* 105ac212 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac215 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ac218 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac21a call 0x105abe40 */
  push32(0x105ac21fu); f_105abe40();
  /* 105ac21f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac222 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac226 je 0x105ac22d */
  if (C.zf) goto L_105ac22d;
  /* 105ac228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac22b jmp 0x105ac259 */
  goto L_105ac259;
L_105ac22d:;
  /* 105ac22d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac231 jne 0x105ac23a */
  if (!C.zf) goto L_105ac23a;
  /* 105ac233 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_105ac23a:;
  /* 105ac23a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac23d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac240 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 105ac243 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105ac246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac249 push eax */
  push32((uint32_t)(EAX));
  /* 105ac24a push 0 */
  push32((uint32_t)(0x0u));
  /* 105ac24c mov ecx, dword ptr [0x105d4344] */
  ECX = (r32((uint32_t)(0x105d4344)));
  /* 105ac252 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac253 call dword ptr [0x105d52b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52b4))), 0x105ac259u);
L_105ac259:;
  /* 105ac259 mov esp, ebp */
  ESP = (EBP);
  /* 105ac25b pop ebp */
  EBP = (pop32());
  /* 105ac25c ret  */
  ESPCHK(0x105ac1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c260 @ 0x105ac260 (10 bytes, 5 insns) */
void f_105ac260(void) {
  FTRACE(0x105ac260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac260 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac261 mov ebp, esp */
  EBP = (ESP);
  /* 105ac263 mov eax, 1 */
  EAX = (0x1u);
  /* 105ac268 pop ebp */
  EBP = (pop32());
  /* 105ac269 ret  */
  ESPCHK(0x105ac260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c270 @ 0x105ac270 (173 bytes, 59 insns) */
void f_105ac270(void) {
  FTRACE(0x105ac270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac270 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac271 mov ebp, esp */
  EBP = (ESP);
  /* 105ac273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac276 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac27a jbe 0x105ac283 */
  if ((C.cf||C.zf)) goto L_105ac283;
  /* 105ac27c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ac27e jmp 0x105ac319 */
  goto L_105ac319;
L_105ac283:;
  /* 105ac283 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac285 call 0x105abda0 */
  push32(0x105ac28au); f_105abda0();
  /* 105ac28a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac28d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac290 push eax */
  push32((uint32_t)(EAX));
  /* 105ac291 call 0x105ac6a0 */
  push32(0x105ac296u); f_105ac6a0();
  /* 105ac296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac299 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ac29c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac2a0 je 0x105ac2e1 */
  if (C.zf) goto L_105ac2e1;
  /* 105ac2a2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ac2a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac2ac cmp ecx, dword ptr [0x105d1154] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d1154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac2b2 ja 0x105ac2d2 */
  if ((!C.cf&&!C.zf)) goto L_105ac2d2;
  /* 105ac2b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac2b7 push edx */
  push32((uint32_t)(EDX));
  /* 105ac2b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac2bb push eax */
  push32((uint32_t)(EAX));
  /* 105ac2bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ac2bf push ecx */
  push32((uint32_t)(ECX));
  /* 105ac2c0 call 0x105ad570 */
  push32(0x105ac2c5u); f_105ad570();
  /* 105ac2c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac2c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ac2ca je 0x105ac2d2 */
  if (C.zf) goto L_105ac2d2;
  /* 105ac2cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac2cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105ac2d2:;
  /* 105ac2d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac2d4 call 0x105abe40 */
  push32(0x105ac2d9u); f_105abe40();
  /* 105ac2d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac2dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac2df jmp 0x105ac319 */
  goto L_105ac319;
L_105ac2e1:;
  /* 105ac2e1 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac2e3 call 0x105abe40 */
  push32(0x105ac2e8u); f_105abe40();
  /* 105ac2e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac2eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac2ef jne 0x105ac2f8 */
  if (!C.zf) goto L_105ac2f8;
  /* 105ac2f1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_105ac2f8:;
  /* 105ac2f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac2fb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac2fe and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 105ac300 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 105ac303 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac306 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac307 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac30a push edx */
  push32((uint32_t)(EDX));
  /* 105ac30b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 105ac30d mov eax, dword ptr [0x105d4344] */
  EAX = (r32((uint32_t)(0x105d4344)));
  /* 105ac312 push eax */
  push32((uint32_t)(EAX));
  /* 105ac313 call dword ptr [0x105d52b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52b8))), 0x105ac319u);
L_105ac319:;
  /* 105ac319 mov esp, ebp */
  ESP = (EBP);
  /* 105ac31b pop ebp */
  EBP = (pop32());
  /* 105ac31c ret  */
  ESPCHK(0x105ac270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c320 @ 0x105ac320 (490 bytes, 165 insns) */
void f_105ac320(void) {
  FTRACE(0x105ac320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac320 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac321 mov ebp, esp */
  EBP = (ESP);
  /* 105ac323 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac326 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac32a jne 0x105ac33d */
  if (!C.zf) goto L_105ac33d;
  /* 105ac32c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac32f push eax */
  push32((uint32_t)(EAX));
  /* 105ac330 call 0x105ac170 */
  push32(0x105ac335u); f_105ac170();
  /* 105ac335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac338 jmp 0x105ac506 */
  goto L_105ac506;
L_105ac33d:;
  /* 105ac33d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac341 jne 0x105ac356 */
  if (!C.zf) goto L_105ac356;
  /* 105ac343 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac346 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac347 call 0x105ac510 */
  push32(0x105ac34cu); f_105ac510();
  /* 105ac34c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac34f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ac351 jmp 0x105ac506 */
  goto L_105ac506;
L_105ac356:;
  /* 105ac356 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105ac35d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac361 ja 0x105ac4d9 */
  if ((!C.cf&&!C.zf)) goto L_105ac4d9;
  /* 105ac367 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac369 call 0x105abda0 */
  push32(0x105ac36eu); f_105abda0();
  /* 105ac36e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac371 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac374 push edx */
  push32((uint32_t)(EDX));
  /* 105ac375 call 0x105ac6a0 */
  push32(0x105ac37au); f_105ac6a0();
  /* 105ac37a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac37d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105ac380 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac384 je 0x105ac49c */
  if (C.zf) goto L_105ac49c;
  /* 105ac38a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac38d cmp eax, dword ptr [0x105d1154] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d1154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac393 ja 0x105ac410 */
  if ((!C.cf&&!C.zf)) goto L_105ac410;
  /* 105ac395 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac398 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac39c push edx */
  push32((uint32_t)(EDX));
  /* 105ac39d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ac3a0 push eax */
  push32((uint32_t)(EAX));
  /* 105ac3a1 call 0x105ad570 */
  push32(0x105ac3a6u); f_105ad570();
  /* 105ac3a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac3a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ac3ab je 0x105ac3b5 */
  if (C.zf) goto L_105ac3b5;
  /* 105ac3ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac3b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105ac3b3 jmp 0x105ac410 */
  goto L_105ac410;
L_105ac3b5:;
  /* 105ac3b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac3b8 push edx */
  push32((uint32_t)(EDX));
  /* 105ac3b9 call 0x105acd30 */
  push32(0x105ac3beu); f_105acd30();
  /* 105ac3be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac3c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ac3c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac3c8 je 0x105ac410 */
  if (C.zf) goto L_105ac410;
  /* 105ac3ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac3cd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 105ac3d0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac3d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105ac3d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac3d9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac3dc jae 0x105ac3e6 */
  if (!C.cf) goto L_105ac3e6;
  /* 105ac3de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac3e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105ac3e4 jmp 0x105ac3ec */
  goto L_105ac3ec;
L_105ac3e6:;
  /* 105ac3e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac3e9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105ac3ec:;
  /* 105ac3ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ac3ef push edx */
  push32((uint32_t)(EDX));
  /* 105ac3f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac3f3 push eax */
  push32((uint32_t)(EAX));
  /* 105ac3f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ac3f7 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac3f8 call 0x105aeb80 */
  push32(0x105ac3fdu); f_105aeb80();
  /* 105ac3fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac400 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac403 push edx */
  push32((uint32_t)(EDX));
  /* 105ac404 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ac407 push eax */
  push32((uint32_t)(EAX));
  /* 105ac408 call 0x105ac760 */
  push32(0x105ac40du); f_105ac760();
  /* 105ac40d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ac410:;
  /* 105ac410 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac414 jne 0x105ac490 */
  if (!C.zf) goto L_105ac490;
  /* 105ac416 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac41a jne 0x105ac423 */
  if (!C.zf) goto L_105ac423;
  /* 105ac41c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_105ac423:;
  /* 105ac423 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac426 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac429 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 105ac42c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 105ac42f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac432 push edx */
  push32((uint32_t)(EDX));
  /* 105ac433 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ac435 mov eax, dword ptr [0x105d4344] */
  EAX = (r32((uint32_t)(0x105d4344)));
  /* 105ac43a push eax */
  push32((uint32_t)(EAX));
  /* 105ac43b call dword ptr [0x105d52b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52b4))), 0x105ac441u);
  /* 105ac441 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ac444 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac448 je 0x105ac490 */
  if (C.zf) goto L_105ac490;
  /* 105ac44a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac44d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 105ac450 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac453 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105ac456 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac459 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac45c jae 0x105ac466 */
  if (!C.cf) goto L_105ac466;
  /* 105ac45e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac461 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105ac464 jmp 0x105ac46c */
  goto L_105ac46c;
L_105ac466:;
  /* 105ac466 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac469 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_105ac46c:;
  /* 105ac46c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ac46f push eax */
  push32((uint32_t)(EAX));
  /* 105ac470 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac473 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac474 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ac477 push edx */
  push32((uint32_t)(EDX));
  /* 105ac478 call 0x105aeb80 */
  push32(0x105ac47du); f_105aeb80();
  /* 105ac47d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac483 push eax */
  push32((uint32_t)(EAX));
  /* 105ac484 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ac487 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac488 call 0x105ac760 */
  push32(0x105ac48du); f_105ac760();
  /* 105ac48d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ac490:;
  /* 105ac490 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac492 call 0x105abe40 */
  push32(0x105ac497u); f_105abe40();
  /* 105ac497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac49a jmp 0x105ac4d9 */
  goto L_105ac4d9;
L_105ac49c:;
  /* 105ac49c push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac49e call 0x105abe40 */
  push32(0x105ac4a3u); f_105abe40();
  /* 105ac4a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac4a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac4aa jne 0x105ac4b3 */
  if (!C.zf) goto L_105ac4b3;
  /* 105ac4ac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_105ac4b3:;
  /* 105ac4b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac4b6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac4b9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 105ac4bc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 105ac4bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac4c2 push eax */
  push32((uint32_t)(EAX));
  /* 105ac4c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac4c6 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac4c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ac4c9 mov edx, dword ptr [0x105d4344] */
  EDX = (r32((uint32_t)(0x105d4344)));
  /* 105ac4cf push edx */
  push32((uint32_t)(EDX));
  /* 105ac4d0 call dword ptr [0x105d52b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52b8))), 0x105ac4d6u);
  /* 105ac4d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105ac4d9:;
  /* 105ac4d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac4dd jne 0x105ac4e8 */
  if (!C.zf) goto L_105ac4e8;
  /* 105ac4df cmp dword ptr [0x105d2b88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2b88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac4e6 jne 0x105ac4ed */
  if (!C.zf) goto L_105ac4ed;
L_105ac4e8:;
  /* 105ac4e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ac4eb jmp 0x105ac506 */
  goto L_105ac506;
L_105ac4ed:;
  /* 105ac4ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac4f0 push eax */
  push32((uint32_t)(EAX));
  /* 105ac4f1 call 0x105ac0e0 */
  push32(0x105ac4f6u); f_105ac0e0();
  /* 105ac4f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac4f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ac4fb jne 0x105ac501 */
  if (!C.zf) goto L_105ac501;
  /* 105ac4fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ac4ff jmp 0x105ac506 */
  goto L_105ac506;
L_105ac501:;
  /* 105ac501 jmp 0x105ac356 */
  goto L_105ac356;
L_105ac506:;
  /* 105ac506 mov esp, ebp */
  ESP = (EBP);
  /* 105ac508 pop ebp */
  EBP = (pop32());
  /* 105ac509 ret  */
  ESPCHK(0x105ac320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c510 @ 0x105ac510 (104 bytes, 38 insns) */
void f_105ac510(void) {
  FTRACE(0x105ac510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac510 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac511 mov ebp, esp */
  EBP = (ESP);
  /* 105ac513 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac514 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac518 jne 0x105ac51c */
  if (!C.zf) goto L_105ac51c;
  /* 105ac51a jmp 0x105ac574 */
  goto L_105ac574;
L_105ac51c:;
  /* 105ac51c push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac51e call 0x105abda0 */
  push32(0x105ac523u); f_105abda0();
  /* 105ac523 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac529 push eax */
  push32((uint32_t)(EAX));
  /* 105ac52a call 0x105ac6a0 */
  push32(0x105ac52fu); f_105ac6a0();
  /* 105ac52f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac532 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ac535 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac539 je 0x105ac557 */
  if (C.zf) goto L_105ac557;
  /* 105ac53b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac53e push ecx */
  push32((uint32_t)(ECX));
  /* 105ac53f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac542 push edx */
  push32((uint32_t)(EDX));
  /* 105ac543 call 0x105ac760 */
  push32(0x105ac548u); f_105ac760();
  /* 105ac548 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac54b push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac54d call 0x105abe40 */
  push32(0x105ac552u); f_105abe40();
  /* 105ac552 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac555 jmp 0x105ac574 */
  goto L_105ac574;
L_105ac557:;
  /* 105ac557 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac559 call 0x105abe40 */
  push32(0x105ac55eu); f_105abe40();
  /* 105ac55e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac561 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac564 push eax */
  push32((uint32_t)(EAX));
  /* 105ac565 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ac567 mov ecx, dword ptr [0x105d4344] */
  ECX = (r32((uint32_t)(0x105d4344)));
  /* 105ac56d push ecx */
  push32((uint32_t)(ECX));
  /* 105ac56e call dword ptr [0x105d5200] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5200))), 0x105ac574u);
L_105ac574:;
  /* 105ac574 mov esp, ebp */
  ESP = (EBP);
  /* 105ac576 pop ebp */
  EBP = (pop32());
  /* 105ac577 ret  */
  ESPCHK(0x105ac510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c580 @ 0x105ac580 (116 bytes, 34 insns) */
void f_105ac580(void) {
  FTRACE(0x105ac580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac580 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac581 mov ebp, esp */
  EBP = (ESP);
  /* 105ac583 push ecx */
  push32((uint32_t)(ECX));
  /* 105ac584 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 105ac58b push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac58d call 0x105abda0 */
  push32(0x105ac592u); f_105abda0();
  /* 105ac592 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac595 call 0x105adc90 */
  push32(0x105ac59au); f_105adc90();
  /* 105ac59a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ac59c jge 0x105ac5a5 */
  if ((C.sf==C.of)) goto L_105ac5a5;
  /* 105ac59e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_105ac5a5:;
  /* 105ac5a5 push 9 */
  push32((uint32_t)(0x9u));
  /* 105ac5a7 call 0x105abe40 */
  push32(0x105ac5acu); f_105abe40();
  /* 105ac5ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac5af push 0 */
  push32((uint32_t)(0x0u));
  /* 105ac5b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ac5b3 mov eax, dword ptr [0x105d4344] */
  EAX = (r32((uint32_t)(0x105d4344)));
  /* 105ac5b8 push eax */
  push32((uint32_t)(EAX));
  /* 105ac5b9 call dword ptr [0x105d5270] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5270))), 0x105ac5bfu);
  /* 105ac5bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ac5c1 jne 0x105ac5ed */
  if (!C.zf) goto L_105ac5ed;
  /* 105ac5c3 call dword ptr [0x105d5250] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5250))), 0x105ac5c9u);
  /* 105ac5c9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac5cc jne 0x105ac5e6 */
  if (!C.zf) goto L_105ac5e6;
  /* 105ac5ce call 0x105aef70 */
  push32(0x105ac5d3u); f_105aef70();
  /* 105ac5d3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 105ac5d9 call 0x105aef60 */
  push32(0x105ac5deu); f_105aef60();
  /* 105ac5de mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 105ac5e4 jmp 0x105ac5ed */
  goto L_105ac5ed;
L_105ac5e6:;
  /* 105ac5e6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_105ac5ed:;
  /* 105ac5ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac5f0 mov esp, ebp */
  ESP = (EBP);
  /* 105ac5f2 pop ebp */
  EBP = (pop32());
  /* 105ac5f3 ret  */
  ESPCHK(0x105ac580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c600 @ 0x105ac600 (10 bytes, 5 insns) */
void f_105ac600(void) {
  FTRACE(0x105ac600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac600 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac601 mov ebp, esp */
  EBP = (ESP);
  /* 105ac603 call 0x105ac580 */
  push32(0x105ac608u); f_105ac580();
  /* 105ac608 pop ebp */
  EBP = (pop32());
  /* 105ac609 ret  */
  ESPCHK(0x105ac600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c610 @ 0x105ac610 (10 bytes, 5 insns) */
void f_105ac610(void) {
  FTRACE(0x105ac610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac610 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac611 mov ebp, esp */
  EBP = (ESP);
  /* 105ac613 mov eax, dword ptr [0x105d1154] */
  EAX = (r32((uint32_t)(0x105d1154)));
  /* 105ac618 pop ebp */
  EBP = (pop32());
  /* 105ac619 ret  */
  ESPCHK(0x105ac610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c620 @ 0x105ac620 (31 bytes, 11 insns) */
void f_105ac620(void) {
  FTRACE(0x105ac620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac620 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac621 mov ebp, esp */
  EBP = (ESP);
  /* 105ac623 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac62a jbe 0x105ac630 */
  if ((C.cf||C.zf)) goto L_105ac630;
  /* 105ac62c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ac62e jmp 0x105ac63d */
  goto L_105ac63d;
L_105ac630:;
  /* 105ac630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac633 mov dword ptr [0x105d1154], eax */
  w32((uint32_t)(0x105d1154), (EAX));
  /* 105ac638 mov eax, 1 */
  EAX = (0x1u);
L_105ac63d:;
  /* 105ac63d pop ebp */
  EBP = (pop32());
  /* 105ac63e ret  */
  ESPCHK(0x105ac620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c640 @ 0x105ac640 (89 bytes, 20 insns) */
void f_105ac640(void) {
  FTRACE(0x105ac640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac640 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac641 mov ebp, esp */
  EBP = (ESP);
  /* 105ac643 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 105ac648 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ac64a mov eax, dword ptr [0x105d4344] */
  EAX = (r32((uint32_t)(0x105d4344)));
  /* 105ac64f push eax */
  push32((uint32_t)(EAX));
  /* 105ac650 call dword ptr [0x105d52b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52b4))), 0x105ac656u);
  /* 105ac656 mov dword ptr [0x105d2fe8], eax */
  w32((uint32_t)(0x105d2fe8), (EAX));
  /* 105ac65b cmp dword ptr [0x105d2fe8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2fe8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac662 jne 0x105ac668 */
  if (!C.zf) goto L_105ac668;
  /* 105ac664 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ac666 jmp 0x105ac697 */
  goto L_105ac697;
L_105ac668:;
  /* 105ac668 mov ecx, dword ptr [0x105d2fe8] */
  ECX = (r32((uint32_t)(0x105d2fe8)));
  /* 105ac66e mov dword ptr [0x105d2fdc], ecx */
  w32((uint32_t)(0x105d2fdc), (ECX));
  /* 105ac674 mov dword ptr [0x105d2fe0], 0 */
  w32((uint32_t)(0x105d2fe0), (0x0u));
  /* 105ac67e mov dword ptr [0x105d2fe4], 0 */
  w32((uint32_t)(0x105d2fe4), (0x0u));
  /* 105ac688 mov dword ptr [0x105d2fc8], 0x10 */
  w32((uint32_t)(0x105d2fc8), (0x10u));
  /* 105ac692 mov eax, 1 */
  EAX = (0x1u);
L_105ac697:;
  /* 105ac697 pop ebp */
  EBP = (pop32());
  /* 105ac698 ret  */
  ESPCHK(0x105ac640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6a0 @ 0x105ac6a0 (85 bytes, 29 insns) */
void f_105ac6a0(void) {
  FTRACE(0x105ac6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac6a1 mov ebp, esp */
  EBP = (ESP);
  /* 105ac6a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac6a6 mov eax, dword ptr [0x105d2fe4] */
  EAX = (r32((uint32_t)(0x105d2fe4)));
  /* 105ac6ab imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ac6ae mov ecx, dword ptr [0x105d2fe8] */
  ECX = (r32((uint32_t)(0x105d2fe8)));
  /* 105ac6b4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac6b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ac6b9 mov edx, dword ptr [0x105d2fe8] */
  EDX = (r32((uint32_t)(0x105d2fe8)));
  /* 105ac6bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105ac6c2:;
  /* 105ac6c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ac6c5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac6c8 jae 0x105ac6ef */
  if (!C.cf) goto L_105ac6ef;
  /* 105ac6ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ac6cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac6d0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac6d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105ac6d6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac6dd jae 0x105ac6e4 */
  if (!C.cf) goto L_105ac6e4;
  /* 105ac6df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ac6e2 jmp 0x105ac6f1 */
  goto L_105ac6f1;
L_105ac6e4:;
  /* 105ac6e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ac6e7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac6ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ac6ed jmp 0x105ac6c2 */
  goto L_105ac6c2;
L_105ac6ef:;
  /* 105ac6ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105ac6f1:;
  /* 105ac6f1 mov esp, ebp */
  ESP = (EBP);
  /* 105ac6f3 pop ebp */
  EBP = (pop32());
  /* 105ac6f4 ret  */
  ESPCHK(0x105ac6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c700 @ 0x105ac700 (95 bytes, 33 insns) */
void f_105ac700(void) {
  FTRACE(0x105ac700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac700 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac701 mov ebp, esp */
  EBP = (ESP);
  /* 105ac703 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac709 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac70c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac70f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105ac712 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ac715 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 105ac718 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105ac71b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ac720 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac723 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ac725 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac728 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105ac72b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105ac72d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ac72f jne 0x105ac751 */
  if (!C.zf) goto L_105ac751;
  /* 105ac731 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ac734 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 105ac737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ac739 jne 0x105ac751 */
  if (!C.zf) goto L_105ac751;
  /* 105ac73b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ac73e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 105ac744 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ac746 je 0x105ac751 */
  if (C.zf) goto L_105ac751;
  /* 105ac748 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 105ac74f jmp 0x105ac758 */
  goto L_105ac758;
L_105ac751:;
  /* 105ac751 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_105ac758:;
  /* 105ac758 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ac75b mov esp, ebp */
  ESP = (EBP);
  /* 105ac75d pop ebp */
  EBP = (pop32());
  /* 105ac75e ret  */
  ESPCHK(0x105ac700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c760 @ 0x105ac760 (1485 bytes, 453 insns) */
void f_105ac760(void) {
  FTRACE(0x105ac760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ac760 push ebp */
  push32((uint32_t)(EBP));
  /* 105ac761 mov ebp, esp */
  EBP = (ESP);
  /* 105ac763 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac769 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105ac76c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 105ac76f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac772 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac775 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac778 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105ac77b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ac77e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 105ac781 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105ac784 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac787 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ac78d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac790 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 105ac797 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105ac79a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ac79d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac7a0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105ac7a3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ac7a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105ac7a8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac7ab mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 105ac7ae mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ac7b1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac7b4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 105ac7b7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ac7ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105ac7bc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105ac7bf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ac7c2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 105ac7c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105ac7c8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ac7cb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105ac7ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ac7d0 jne 0x105ac8f8 */
  if (!C.zf) goto L_105ac8f8;
  /* 105ac7d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ac7d9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 105ac7dc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac7df mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 105ac7e2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac7e6 jbe 0x105ac7ef */
  if ((C.cf||C.zf)) goto L_105ac7ef;
  /* 105ac7e8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_105ac7ef:;
  /* 105ac7ef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ac7f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ac7f5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ac7f8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac7fb jne 0x105ac8d1 */
  if (!C.zf) goto L_105ac8d1;
  /* 105ac801 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac805 jae 0x105ac866 */
  if (!C.cf) goto L_105ac866;
  /* 105ac807 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ac80c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ac80f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ac811 not eax */
  EAX = (~(EAX));
  /* 105ac813 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac816 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac819 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 105ac81d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ac81f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac822 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac825 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 105ac829 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac82c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac82f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 105ac832 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ac835 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac838 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac83b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 105ac83e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac841 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac844 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105ac848 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ac84a jne 0x105ac864 */
  if (!C.zf) goto L_105ac864;
  /* 105ac84c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ac851 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ac854 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ac856 not eax */
  EAX = (~(EAX));
  /* 105ac858 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac85b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105ac85d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105ac85f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac862 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105ac864:;
  /* 105ac864 jmp 0x105ac8d1 */
  goto L_105ac8d1;
L_105ac866:;
  /* 105ac866 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ac869 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac86c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ac871 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ac873 not edx */
  EDX = (~(EDX));
  /* 105ac875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac878 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac87b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 105ac882 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ac884 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac887 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac88a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 105ac891 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac894 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac897 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105ac89a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ac89d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac8a0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac8a3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 105ac8a6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac8a9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac8ac movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105ac8b0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ac8b2 jne 0x105ac8d1 */
  if (!C.zf) goto L_105ac8d1;
  /* 105ac8b4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ac8b7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac8ba mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ac8bf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ac8c1 not edx */
  EDX = (~(EDX));
  /* 105ac8c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac8c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ac8c9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105ac8cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac8ce mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_105ac8d1:;
  /* 105ac8d1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ac8d4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105ac8d7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ac8da mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105ac8dd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 105ac8e0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ac8e3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ac8e6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ac8e9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105ac8ec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 105ac8ef mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ac8f2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac8f5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_105ac8f8:;
  /* 105ac8f8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ac8fb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 105ac8fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac901 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105ac904 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac908 jbe 0x105ac911 */
  if ((C.cf||C.zf)) goto L_105ac911;
  /* 105ac90a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_105ac911:;
  /* 105ac911 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ac914 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105ac917 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ac919 jne 0x105aca75 */
  if (!C.zf) goto L_105aca75;
  /* 105ac91f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ac922 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac925 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 105ac928 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ac92b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 105ac92e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac931 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 105ac934 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac938 jbe 0x105ac941 */
  if ((C.cf||C.zf)) goto L_105ac941;
  /* 105ac93a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_105ac941:;
  /* 105ac941 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ac944 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac947 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 105ac94a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ac94d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 105ac950 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac953 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 105ac956 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac95a jbe 0x105ac963 */
  if ((C.cf||C.zf)) goto L_105ac963;
  /* 105ac95c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_105ac963:;
  /* 105ac963 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ac966 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac969 je 0x105aca6f */
  if (C.zf) goto L_105aca6f;
  /* 105ac96f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105ac972 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105ac975 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ac978 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac97b jne 0x105aca51 */
  if (!C.zf) goto L_105aca51;
  /* 105ac981 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ac985 jae 0x105ac9e6 */
  if (!C.cf) goto L_105ac9e6;
  /* 105ac987 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ac98c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ac98f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ac991 not edx */
  EDX = (~(EDX));
  /* 105ac993 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac996 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac999 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 105ac99d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ac99f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac9a2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac9a5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 105ac9a9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac9ac add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac9af mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105ac9b2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ac9b5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac9b8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac9bb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 105ac9be mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac9c1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ac9c4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105ac9c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ac9ca jne 0x105ac9e4 */
  if (!C.zf) goto L_105ac9e4;
  /* 105ac9cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ac9d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ac9d4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ac9d6 not edx */
  EDX = (~(EDX));
  /* 105ac9d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac9db mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105ac9dd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105ac9df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ac9e2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105ac9e4:;
  /* 105ac9e4 jmp 0x105aca51 */
  goto L_105aca51;
L_105ac9e6:;
  /* 105ac9e6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ac9e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ac9ec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ac9f1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ac9f3 not eax */
  EAX = (~(EAX));
  /* 105ac9f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ac9f8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105ac9fb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 105aca02 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105aca04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aca07 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105aca0a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 105aca11 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105aca14 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aca17 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 105aca1a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105aca1d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105aca20 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aca23 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 105aca26 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105aca29 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aca2c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105aca30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105aca32 jne 0x105aca51 */
  if (!C.zf) goto L_105aca51;
  /* 105aca34 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105aca37 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aca3a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105aca3f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105aca41 not eax */
  EAX = (~(EAX));
  /* 105aca43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aca46 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105aca49 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105aca4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aca4e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_105aca51:;
  /* 105aca51 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105aca54 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105aca57 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 105aca5a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105aca5d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 105aca60 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105aca63 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105aca66 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105aca69 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105aca6c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_105aca6f:;
  /* 105aca6f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 105aca72 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_105aca75:;
  /* 105aca75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aca78 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105aca7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105aca7d jne 0x105aca8b */
  if (!C.zf) goto L_105aca8b;
  /* 105aca7f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105aca82 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aca85 je 0x105acb9b */
  if (C.zf) goto L_105acb9b;
L_105aca8b:;
  /* 105aca8b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105aca8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105aca91 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 105aca94 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 105aca97 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105aca9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105aca9d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105acaa0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 105acaa3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105acaa6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105acaa9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 105acaac mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 105acaaf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105acab2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 105acab5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105acab8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105acabb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105acabe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105acac1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105acac4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105acac7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 105acaca cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acacd jne 0x105acb9b */
  if (!C.zf) goto L_105acb9b;
  /* 105acad3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acad7 jae 0x105acb34 */
  if (!C.cf) goto L_105acb34;
  /* 105acad9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105acadc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105acadf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105acae3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105acae6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105acae9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105acaec add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 105acaef mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105acaf2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105acaf5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 105acaf8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105acafa jne 0x105acb12 */
  if (!C.zf) goto L_105acb12;
  /* 105acafc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105acb01 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105acb04 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105acb06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105acb09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105acb0b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105acb0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105acb10 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105acb12:;
  /* 105acb12 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105acb17 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105acb1a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105acb1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105acb1f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105acb22 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 105acb26 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105acb28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105acb2b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105acb2e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 105acb32 jmp 0x105acb9b */
  goto L_105acb9b;
L_105acb34:;
  /* 105acb34 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105acb37 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105acb3a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105acb3e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105acb41 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105acb44 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105acb47 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 105acb4a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105acb4d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105acb50 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 105acb53 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105acb55 jne 0x105acb72 */
  if (!C.zf) goto L_105acb72;
  /* 105acb57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105acb5a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105acb5d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105acb62 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105acb64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105acb67 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105acb6a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105acb6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105acb6f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_105acb72:;
  /* 105acb72 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105acb75 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105acb78 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105acb7d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105acb7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105acb82 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105acb85 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 105acb8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105acb8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105acb91 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105acb94 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_105acb9b:;
  /* 105acb9b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105acb9e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105acba1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105acba3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105acba6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105acba9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105acbac mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 105acbaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105acbb2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105acbb4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105acbb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105acbba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105acbbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105acbbf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acbc2 jne 0x105acd29 */
  if (!C.zf) goto L_105acd29;
  /* 105acbc8 cmp dword ptr [0x105d2fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acbcf je 0x105acd18 */
  if (C.zf) goto L_105acd18;
  /* 105acbd5 mov eax, dword ptr [0x105d2fd8] */
  EAX = (r32((uint32_t)(0x105d2fd8)));
  /* 105acbda shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 105acbdd mov ecx, dword ptr [0x105d2fe0] */
  ECX = (r32((uint32_t)(0x105d2fe0)));
  /* 105acbe3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105acbe6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105acbe8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 105acbeb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 105acbf0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105acbf5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105acbf8 push eax */
  push32((uint32_t)(EAX));
  /* 105acbf9 call dword ptr [0x105d5294] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5294))), 0x105acbffu);
  /* 105acbff mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105acc04 mov ecx, dword ptr [0x105d2fd8] */
  ECX = (r32((uint32_t)(0x105d2fd8)));
  /* 105acc0a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105acc0c mov eax, dword ptr [0x105d2fe0] */
  EAX = (r32((uint32_t)(0x105d2fe0)));
  /* 105acc11 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105acc14 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105acc16 mov edx, dword ptr [0x105d2fe0] */
  EDX = (r32((uint32_t)(0x105d2fe0)));
  /* 105acc1c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 105acc1f mov eax, dword ptr [0x105d2fe0] */
  EAX = (r32((uint32_t)(0x105d2fe0)));
  /* 105acc24 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105acc27 mov edx, dword ptr [0x105d2fd8] */
  EDX = (r32((uint32_t)(0x105d2fd8)));
  /* 105acc2d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 105acc38 mov eax, dword ptr [0x105d2fe0] */
  EAX = (r32((uint32_t)(0x105d2fe0)));
  /* 105acc3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105acc40 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 105acc43 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105acc46 mov eax, dword ptr [0x105d2fe0] */
  EAX = (r32((uint32_t)(0x105d2fe0)));
  /* 105acc4b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105acc4e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 105acc51 mov edx, dword ptr [0x105d2fe0] */
  EDX = (r32((uint32_t)(0x105d2fe0)));
  /* 105acc57 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105acc5a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 105acc5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105acc60 jne 0x105acc76 */
  if (!C.zf) goto L_105acc76;
  /* 105acc62 mov edx, dword ptr [0x105d2fe0] */
  EDX = (r32((uint32_t)(0x105d2fe0)));
  /* 105acc68 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105acc6b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 105acc6d mov ecx, dword ptr [0x105d2fe0] */
  ECX = (r32((uint32_t)(0x105d2fe0)));
  /* 105acc73 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_105acc76:;
  /* 105acc76 mov edx, dword ptr [0x105d2fe0] */
  EDX = (r32((uint32_t)(0x105d2fe0)));
  /* 105acc7c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acc80 jne 0x105acd18 */
  if (!C.zf) goto L_105acd18;
  /* 105acc86 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105acc8b push 0 */
  push32((uint32_t)(0x0u));
  /* 105acc8d mov eax, dword ptr [0x105d2fe0] */
  EAX = (r32((uint32_t)(0x105d2fe0)));
  /* 105acc92 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105acc95 push ecx */
  push32((uint32_t)(ECX));
  /* 105acc96 call dword ptr [0x105d5294] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5294))), 0x105acc9cu);
  /* 105acc9c mov edx, dword ptr [0x105d2fe0] */
  EDX = (r32((uint32_t)(0x105d2fe0)));
  /* 105acca2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105acca5 push eax */
  push32((uint32_t)(EAX));
  /* 105acca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105acca8 mov ecx, dword ptr [0x105d4344] */
  ECX = (r32((uint32_t)(0x105d4344)));
  /* 105accae push ecx */
  push32((uint32_t)(ECX));
  /* 105accaf call dword ptr [0x105d5200] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5200))), 0x105accb5u);
  /* 105accb5 mov edx, dword ptr [0x105d2fe4] */
  EDX = (r32((uint32_t)(0x105d2fe4)));
  /* 105accbb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105accbe mov eax, dword ptr [0x105d2fe8] */
  EAX = (r32((uint32_t)(0x105d2fe8)));
  /* 105accc3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105accc5 mov ecx, dword ptr [0x105d2fe0] */
  ECX = (r32((uint32_t)(0x105d2fe0)));
  /* 105acccb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105accce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105accd0 push eax */
  push32((uint32_t)(EAX));
  /* 105accd1 mov edx, dword ptr [0x105d2fe0] */
  EDX = (r32((uint32_t)(0x105d2fe0)));
  /* 105accd7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105accda push edx */
  push32((uint32_t)(EDX));
  /* 105accdb mov eax, dword ptr [0x105d2fe0] */
  EAX = (r32((uint32_t)(0x105d2fe0)));
  /* 105acce0 push eax */
  push32((uint32_t)(EAX));
  /* 105acce1 call 0x105b0340 */
  push32(0x105acce6u); f_105b0340();
  /* 105acce6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105acce9 mov ecx, dword ptr [0x105d2fe4] */
  ECX = (r32((uint32_t)(0x105d2fe4)));
  /* 105accef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105accf2 mov dword ptr [0x105d2fe4], ecx */
  w32((uint32_t)(0x105d2fe4), (ECX));
  /* 105accf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105accfb cmp edx, dword ptr [0x105d2fe0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x105d2fe0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acd01 jbe 0x105acd0c */
  if ((C.cf||C.zf)) goto L_105acd0c;
  /* 105acd03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105acd06 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105acd09 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105acd0c:;
  /* 105acd0c mov ecx, dword ptr [0x105d2fe8] */
  ECX = (r32((uint32_t)(0x105d2fe8)));
  /* 105acd12 mov dword ptr [0x105d2fdc], ecx */
  w32((uint32_t)(0x105d2fdc), (ECX));
L_105acd18:;
  /* 105acd18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105acd1b mov dword ptr [0x105d2fe0], edx */
  w32((uint32_t)(0x105d2fe0), (EDX));
  /* 105acd21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105acd24 mov dword ptr [0x105d2fd8], eax */
  w32((uint32_t)(0x105d2fd8), (EAX));
L_105acd29:;
  /* 105acd29 mov esp, ebp */
  ESP = (EBP);
  /* 105acd2b pop ebp */
  EBP = (pop32());
  /* 105acd2c ret  */
  ESPCHK(0x105ac760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd30 @ 0x105acd30 (1334 bytes, 427 insns) */
void f_105acd30(void) {
  FTRACE(0x105acd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105acd30 push ebp */
  push32((uint32_t)(EBP));
  /* 105acd31 mov ebp, esp */
  EBP = (ESP);
  /* 105acd33 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105acd36 push esi */
  push32((uint32_t)(ESI));
  /* 105acd37 mov eax, dword ptr [0x105d2fe4] */
  EAX = (r32((uint32_t)(0x105d2fe4)));
  /* 105acd3c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105acd3f mov ecx, dword ptr [0x105d2fe8] */
  ECX = (r32((uint32_t)(0x105d2fe8)));
  /* 105acd45 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105acd47 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 105acd4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105acd4d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105acd50 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 105acd53 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 105acd56 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105acd59 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 105acd5c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105acd5f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105acd62 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acd66 jge 0x105acd7c */
  if ((C.sf==C.of)) goto L_105acd7c;
  /* 105acd68 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105acd6b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105acd6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105acd70 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 105acd73 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 105acd7a jmp 0x105acd91 */
  goto L_105acd91;
L_105acd7c:;
  /* 105acd7c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105acd83 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105acd86 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105acd89 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105acd8c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105acd8e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_105acd91:;
  /* 105acd91 mov ecx, dword ptr [0x105d2fdc] */
  ECX = (r32((uint32_t)(0x105d2fdc)));
  /* 105acd97 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_105acd9a:;
  /* 105acd9a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105acd9d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acda0 jae 0x105acdc6 */
  if (!C.cf) goto L_105acdc6;
  /* 105acda2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105acda5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105acda8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 105acdaa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105acdad mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 105acdb0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 105acdb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105acdb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105acdb7 je 0x105acdbb */
  if (C.zf) goto L_105acdbb;
  /* 105acdb9 jmp 0x105acdc6 */
  goto L_105acdc6;
L_105acdbb:;
  /* 105acdbb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105acdbe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105acdc1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105acdc4 jmp 0x105acd9a */
  goto L_105acd9a;
L_105acdc6:;
  /* 105acdc6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105acdc9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acdcc jne 0x105acead */
  if (!C.zf) goto L_105acead;
  /* 105acdd2 mov eax, dword ptr [0x105d2fe8] */
  EAX = (r32((uint32_t)(0x105d2fe8)));
  /* 105acdd7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_105acdda:;
  /* 105acdda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105acddd cmp ecx, dword ptr [0x105d2fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d2fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acde3 jae 0x105ace09 */
  if (!C.cf) goto L_105ace09;
  /* 105acde5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105acde8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105acdeb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 105acded mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105acdf0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105acdf3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 105acdf6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105acdf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105acdfa je 0x105acdfe */
  if (C.zf) goto L_105acdfe;
  /* 105acdfc jmp 0x105ace09 */
  goto L_105ace09;
L_105acdfe:;
  /* 105acdfe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ace01 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ace04 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105ace07 jmp 0x105acdda */
  goto L_105acdda;
L_105ace09:;
  /* 105ace09 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ace0c cmp ecx, dword ptr [0x105d2fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d2fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ace12 jne 0x105acead */
  if (!C.zf) goto L_105acead;
L_105ace18:;
  /* 105ace18 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ace1b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ace1e jae 0x105ace36 */
  if (!C.cf) goto L_105ace36;
  /* 105ace20 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ace23 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ace27 je 0x105ace2b */
  if (C.zf) goto L_105ace2b;
  /* 105ace29 jmp 0x105ace36 */
  goto L_105ace36;
L_105ace2b:;
  /* 105ace2b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ace2e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ace31 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105ace34 jmp 0x105ace18 */
  goto L_105ace18;
L_105ace36:;
  /* 105ace36 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ace39 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ace3c jne 0x105ace87 */
  if (!C.zf) goto L_105ace87;
  /* 105ace3e mov eax, dword ptr [0x105d2fe8] */
  EAX = (r32((uint32_t)(0x105d2fe8)));
  /* 105ace43 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_105ace46:;
  /* 105ace46 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ace49 cmp ecx, dword ptr [0x105d2fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d2fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ace4f jae 0x105ace67 */
  if (!C.cf) goto L_105ace67;
  /* 105ace51 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ace54 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ace58 je 0x105ace5c */
  if (C.zf) goto L_105ace5c;
  /* 105ace5a jmp 0x105ace67 */
  goto L_105ace67;
L_105ace5c:;
  /* 105ace5c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ace5f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ace62 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105ace65 jmp 0x105ace46 */
  goto L_105ace46;
L_105ace67:;
  /* 105ace67 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ace6a cmp ecx, dword ptr [0x105d2fdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d2fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ace70 jne 0x105ace87 */
  if (!C.zf) goto L_105ace87;
  /* 105ace72 call 0x105ad270 */
  push32(0x105ace77u); f_105ad270();
  /* 105ace77 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105ace7a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ace7e jne 0x105ace87 */
  if (!C.zf) goto L_105ace87;
  /* 105ace80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ace82 jmp 0x105ad261 */
  goto L_105ad261;
L_105ace87:;
  /* 105ace87 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ace8a push edx */
  push32((uint32_t)(EDX));
  /* 105ace8b call 0x105ad380 */
  push32(0x105ace90u); f_105ad380();
  /* 105ace90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ace93 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ace96 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105ace99 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105ace9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ace9e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105acea1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acea4 jne 0x105acead */
  if (!C.zf) goto L_105acead;
  /* 105acea6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105acea8 jmp 0x105ad261 */
  goto L_105ad261;
L_105acead:;
  /* 105acead mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105aceb0 mov dword ptr [0x105d2fdc], edx */
  w32((uint32_t)(0x105d2fdc), (EDX));
  /* 105aceb6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105aceb9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105acebc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 105acebf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105acec2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105acec4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 105acec7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acecb je 0x105acef0 */
  if (C.zf) goto L_105acef0;
  /* 105acecd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105aced0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105aced3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105aced6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 105aceda mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105acedd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105acee0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 105acee3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 105aceea or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 105aceec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105aceee jne 0x105acf25 */
  if (!C.zf) goto L_105acf25;
L_105acef0:;
  /* 105acef0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_105acef7:;
  /* 105acef7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105acefa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105acefd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105acf00 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 105acf04 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105acf07 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105acf0a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 105acf0d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 105acf14 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 105acf16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105acf18 jne 0x105acf25 */
  if (!C.zf) goto L_105acf25;
  /* 105acf1a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105acf1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105acf20 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 105acf23 jmp 0x105acef7 */
  goto L_105acef7;
L_105acf25:;
  /* 105acf25 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105acf28 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105acf2e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105acf31 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 105acf38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105acf3b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105acf42 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105acf45 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105acf48 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105acf4b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 105acf4f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105acf52 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acf56 jne 0x105acf72 */
  if (!C.zf) goto L_105acf72;
  /* 105acf58 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 105acf5f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105acf62 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105acf65 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105acf68 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 105acf6f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_105acf72:;
  /* 105acf72 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acf76 jl 0x105acf8b */
  if ((C.sf!=C.of)) goto L_105acf8b;
  /* 105acf78 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105acf7b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105acf7d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105acf80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105acf83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105acf86 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105acf89 jmp 0x105acf72 */
  goto L_105acf72;
L_105acf8b:;
  /* 105acf8b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 105acf8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105acf91 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 105acf95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105acf98 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105acf9b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105acf9d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105acfa0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105acfa3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105acfa6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 105acfa9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105acfac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105acfaf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acfb3 jle 0x105acfbc */
  if ((C.zf||C.sf!=C.of)) goto L_105acfbc;
  /* 105acfb5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_105acfbc:;
  /* 105acfbc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105acfbf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acfc2 je 0x105ad1e0 */
  if (C.zf) goto L_105ad1e0;
  /* 105acfc8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105acfcb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105acfce mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 105acfd1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acfd4 jne 0x105ad0aa */
  if (!C.zf) goto L_105ad0aa;
  /* 105acfda cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105acfde jge 0x105ad03f */
  if ((C.sf==C.of)) goto L_105ad03f;
  /* 105acfe0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105acfe5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105acfe8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105acfea not eax */
  EAX = (~(EAX));
  /* 105acfec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105acfef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105acff2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 105acff6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105acff8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105acffb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105acffe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 105ad002 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad005 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad008 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 105ad00b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ad00e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad011 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad014 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 105ad017 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad01a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad01d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105ad021 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ad023 jne 0x105ad03d */
  if (!C.zf) goto L_105ad03d;
  /* 105ad025 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ad02a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad02d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ad02f not eax */
  EAX = (~(EAX));
  /* 105ad031 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad034 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105ad036 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105ad038 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad03b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105ad03d:;
  /* 105ad03d jmp 0x105ad0aa */
  goto L_105ad0aa;
L_105ad03f:;
  /* 105ad03f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad042 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad045 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ad04a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ad04c not edx */
  EDX = (~(EDX));
  /* 105ad04e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad051 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad054 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 105ad05b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ad05d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad060 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad063 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 105ad06a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad06d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad070 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105ad073 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ad076 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad079 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad07c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 105ad07f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad082 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad085 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105ad089 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ad08b jne 0x105ad0aa */
  if (!C.zf) goto L_105ad0aa;
  /* 105ad08d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad090 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad093 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ad098 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ad09a not edx */
  EDX = (~(EDX));
  /* 105ad09c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad09f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ad0a2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105ad0a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad0a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_105ad0aa:;
  /* 105ad0aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad0ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105ad0b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad0b3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105ad0b6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 105ad0b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad0bc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ad0bf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad0c2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105ad0c5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 105ad0c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad0cc je 0x105ad1e0 */
  if (C.zf) goto L_105ad1e0;
  /* 105ad0d2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad0d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad0d8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 105ad0db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ad0de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad0e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ad0e4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ad0e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 105ad0ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad0ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ad0f0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105ad0f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ad0f6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad0f9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 105ad0fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad0ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ad102 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad105 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 105ad108 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad10b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad10e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ad111 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad114 jne 0x105ad1e0 */
  if (!C.zf) goto L_105ad1e0;
  /* 105ad11a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad11e jge 0x105ad17a */
  if ((C.sf==C.of)) goto L_105ad17a;
  /* 105ad120 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad123 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad126 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105ad12a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad12d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad130 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 105ad133 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105ad135 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad138 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad13b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 105ad13e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ad140 jne 0x105ad158 */
  if (!C.zf) goto L_105ad158;
  /* 105ad142 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ad147 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad14a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ad14c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad14f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105ad151 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105ad153 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad156 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105ad158:;
  /* 105ad158 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ad15d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad160 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ad162 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad165 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad168 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 105ad16c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ad16e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad171 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad174 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 105ad178 jmp 0x105ad1e0 */
  goto L_105ad1e0;
L_105ad17a:;
  /* 105ad17a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad17d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad180 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105ad184 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad187 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad18a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 105ad18d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105ad18f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad192 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad195 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 105ad198 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ad19a jne 0x105ad1b7 */
  if (!C.zf) goto L_105ad1b7;
  /* 105ad19c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad19f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad1a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ad1a7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ad1a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad1ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ad1af or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105ad1b1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad1b4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_105ad1b7:;
  /* 105ad1b7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad1ba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad1bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ad1c2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ad1c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad1c7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad1ca mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 105ad1d1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ad1d3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad1d6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad1d9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_105ad1e0:;
  /* 105ad1e0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad1e4 je 0x105ad1fa */
  if (C.zf) goto L_105ad1fa;
  /* 105ad1e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad1e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ad1ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105ad1ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad1f1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad1f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ad1f7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_105ad1fa:;
  /* 105ad1fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad1fd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad200 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105ad203 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ad206 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad209 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad20c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105ad20e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ad211 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad214 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad217 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad21a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 105ad21d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad220 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105ad222 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad225 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105ad227 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad22a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad22d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105ad22f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ad231 jne 0x105ad253 */
  if (!C.zf) goto L_105ad253;
  /* 105ad233 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad236 cmp eax, dword ptr [0x105d2fe0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d2fe0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad23c jne 0x105ad253 */
  if (!C.zf) goto L_105ad253;
  /* 105ad23e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad241 cmp ecx, dword ptr [0x105d2fd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d2fd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad247 jne 0x105ad253 */
  if (!C.zf) goto L_105ad253;
  /* 105ad249 mov dword ptr [0x105d2fe0], 0 */
  w32((uint32_t)(0x105d2fe0), (0x0u));
L_105ad253:;
  /* 105ad253 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105ad256 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad259 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105ad25b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad25e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_105ad261:;
  /* 105ad261 pop esi */
  ESI = (pop32());
  /* 105ad262 mov esp, ebp */
  ESP = (EBP);
  /* 105ad264 pop ebp */
  EBP = (pop32());
  /* 105ad265 ret  */
  ESPCHK(0x105acd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d270 @ 0x105ad270 (271 bytes, 78 insns) */
void f_105ad270(void) {
  FTRACE(0x105ad270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ad270 push ebp */
  push32((uint32_t)(EBP));
  /* 105ad271 mov ebp, esp */
  EBP = (ESP);
  /* 105ad273 push ecx */
  push32((uint32_t)(ECX));
  /* 105ad274 mov eax, dword ptr [0x105d2fe4] */
  EAX = (r32((uint32_t)(0x105d2fe4)));
  /* 105ad279 cmp eax, dword ptr [0x105d2fc8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d2fc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad27f jne 0x105ad2cb */
  if (!C.zf) goto L_105ad2cb;
  /* 105ad281 mov ecx, dword ptr [0x105d2fc8] */
  ECX = (r32((uint32_t)(0x105d2fc8)));
  /* 105ad287 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad28a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ad28d push ecx */
  push32((uint32_t)(ECX));
  /* 105ad28e mov edx, dword ptr [0x105d2fe8] */
  EDX = (r32((uint32_t)(0x105d2fe8)));
  /* 105ad294 push edx */
  push32((uint32_t)(EDX));
  /* 105ad295 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ad297 mov eax, dword ptr [0x105d4344] */
  EAX = (r32((uint32_t)(0x105d4344)));
  /* 105ad29c push eax */
  push32((uint32_t)(EAX));
  /* 105ad29d call dword ptr [0x105d52b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52b8))), 0x105ad2a3u);
  /* 105ad2a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ad2a6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad2aa jne 0x105ad2b3 */
  if (!C.zf) goto L_105ad2b3;
  /* 105ad2ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ad2ae jmp 0x105ad37b */
  goto L_105ad37b;
L_105ad2b3:;
  /* 105ad2b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad2b6 mov dword ptr [0x105d2fe8], ecx */
  w32((uint32_t)(0x105d2fe8), (ECX));
  /* 105ad2bc mov edx, dword ptr [0x105d2fc8] */
  EDX = (r32((uint32_t)(0x105d2fc8)));
  /* 105ad2c2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad2c5 mov dword ptr [0x105d2fc8], edx */
  w32((uint32_t)(0x105d2fc8), (EDX));
L_105ad2cb:;
  /* 105ad2cb mov eax, dword ptr [0x105d2fe4] */
  EAX = (r32((uint32_t)(0x105d2fe4)));
  /* 105ad2d0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ad2d3 mov ecx, dword ptr [0x105d2fe8] */
  ECX = (r32((uint32_t)(0x105d2fe8)));
  /* 105ad2d9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad2db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105ad2de push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 105ad2e3 push 8 */
  push32((uint32_t)(0x8u));
  /* 105ad2e5 mov edx, dword ptr [0x105d4344] */
  EDX = (r32((uint32_t)(0x105d4344)));
  /* 105ad2eb push edx */
  push32((uint32_t)(EDX));
  /* 105ad2ec call dword ptr [0x105d52b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52b4))), 0x105ad2f2u);
  /* 105ad2f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad2f5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 105ad2f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad2fb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad2ff jne 0x105ad305 */
  if (!C.zf) goto L_105ad305;
  /* 105ad301 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ad303 jmp 0x105ad37b */
  goto L_105ad37b;
L_105ad305:;
  /* 105ad305 push 4 */
  push32((uint32_t)(0x4u));
  /* 105ad307 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 105ad30c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 105ad311 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ad313 call dword ptr [0x105d52bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52bc))), 0x105ad319u);
  /* 105ad319 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad31c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 105ad31f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad322 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad326 jne 0x105ad342 */
  if (!C.zf) goto L_105ad342;
  /* 105ad328 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad32b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105ad32e push ecx */
  push32((uint32_t)(ECX));
  /* 105ad32f push 0 */
  push32((uint32_t)(0x0u));
  /* 105ad331 mov edx, dword ptr [0x105d4344] */
  EDX = (r32((uint32_t)(0x105d4344)));
  /* 105ad337 push edx */
  push32((uint32_t)(EDX));
  /* 105ad338 call dword ptr [0x105d5200] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5200))), 0x105ad33eu);
  /* 105ad33e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ad340 jmp 0x105ad37b */
  goto L_105ad37b;
L_105ad342:;
  /* 105ad342 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad345 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105ad34b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad34e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 105ad355 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad358 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 105ad35f mov eax, dword ptr [0x105d2fe4] */
  EAX = (r32((uint32_t)(0x105d2fe4)));
  /* 105ad364 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad367 mov dword ptr [0x105d2fe4], eax */
  w32((uint32_t)(0x105d2fe4), (EAX));
  /* 105ad36c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad36f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105ad372 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 105ad378 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105ad37b:;
  /* 105ad37b mov esp, ebp */
  ESP = (EBP);
  /* 105ad37d pop ebp */
  EBP = (pop32());
  /* 105ad37e ret  */
  ESPCHK(0x105ad270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d380 @ 0x105ad380 (494 bytes, 149 insns) */
void f_105ad380(void) {
  FTRACE(0x105ad380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ad380 push ebp */
  push32((uint32_t)(EBP));
  /* 105ad381 mov ebp, esp */
  EBP = (ESP);
  /* 105ad383 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad389 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105ad38c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 105ad38f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad392 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105ad395 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ad398 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_105ad39f:;
  /* 105ad39f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad3a3 jl 0x105ad3b8 */
  if ((C.sf!=C.of)) goto L_105ad3b8;
  /* 105ad3a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ad3a8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 105ad3aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105ad3ad mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ad3b0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad3b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 105ad3b6 jmp 0x105ad39f */
  goto L_105ad39f;
L_105ad3b8:;
  /* 105ad3b8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ad3bb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ad3c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad3c4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 105ad3cb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105ad3ce mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105ad3d5 jmp 0x105ad3e0 */
  goto L_105ad3e0;
L_105ad3d7:;
  /* 105ad3d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad3da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad3dd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_105ad3e0:;
  /* 105ad3e0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad3e4 jge 0x105ad406 */
  if ((C.sf==C.of)) goto L_105ad406;
  /* 105ad3e6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad3e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ad3ec lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 105ad3ef mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105ad3f2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad3f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad3f8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 105ad3fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad3fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad401 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 105ad404 jmp 0x105ad3d7 */
  goto L_105ad3d7;
L_105ad406:;
  /* 105ad406 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ad409 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 105ad40c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad40f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105ad412 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad414 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105ad417 push 4 */
  push32((uint32_t)(0x4u));
  /* 105ad419 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 105ad41e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105ad423 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad426 push edx */
  push32((uint32_t)(EDX));
  /* 105ad427 call dword ptr [0x105d52bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52bc))), 0x105ad42du);
  /* 105ad42d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ad42f jne 0x105ad439 */
  if (!C.zf) goto L_105ad439;
  /* 105ad431 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ad434 jmp 0x105ad56a */
  goto L_105ad56a;
L_105ad439:;
  /* 105ad439 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad43c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad441 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105ad444 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad447 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105ad44a jmp 0x105ad458 */
  goto L_105ad458;
L_105ad44c:;
  /* 105ad44c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad44f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad455 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105ad458:;
  /* 105ad458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad45b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad45e ja 0x105ad4bd */
  if ((!C.cf&&!C.zf)) goto L_105ad4bd;
  /* 105ad460 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad463 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 105ad46a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad46d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 105ad477 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad47a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad47d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105ad480 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad483 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 105ad489 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad48c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad492 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad495 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 105ad498 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad49b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad4a1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad4a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 105ad4a7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad4aa add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad4af mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105ad4b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ad4b5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 105ad4bb jmp 0x105ad44c */
  goto L_105ad44c;
L_105ad4bd:;
  /* 105ad4bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ad4c0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad4c6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105ad4c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad4cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad4cf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad4d2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 105ad4d5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad4d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105ad4db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105ad4de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad4e1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad4e4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 105ad4e7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ad4ea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad4ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad4f0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 105ad4f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad4f6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105ad4f9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105ad4fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad4ff mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad502 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 105ad505 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ad508 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad50b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 105ad513 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ad516 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad519 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 105ad524 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad527 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 105ad52b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad52e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 105ad531 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 105ad534 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad537 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 105ad53a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ad53c jne 0x105ad54d */
  if (!C.zf) goto L_105ad54d;
  /* 105ad53e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad541 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ad544 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105ad547 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad54a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_105ad54d:;
  /* 105ad54d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ad552 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ad555 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ad557 not edx */
  EDX = (~(EDX));
  /* 105ad559 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad55c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105ad55f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105ad561 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad564 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 105ad567 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_105ad56a:;
  /* 105ad56a mov esp, ebp */
  ESP = (EBP);
  /* 105ad56c pop ebp */
  EBP = (pop32());
  /* 105ad56d ret  */
  ESPCHK(0x105ad380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d570 @ 0x105ad570 (1515 bytes, 489 insns) */
void f_105ad570(void) {
  FTRACE(0x105ad570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ad570 push ebp */
  push32((uint32_t)(EBP));
  /* 105ad571 mov ebp, esp */
  EBP = (ESP);
  /* 105ad573 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad576 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105ad579 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad57c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 105ad57e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105ad581 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad584 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105ad587 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 105ad58a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad58d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ad590 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad593 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ad596 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ad599 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 105ad59c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105ad59f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad5a2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ad5a8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad5ab lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 105ad5b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105ad5b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ad5b8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad5bb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105ad5be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad5c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105ad5c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad5c6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 105ad5c9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad5cc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad5cf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 105ad5d2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad5d5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105ad5d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105ad5da mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ad5dd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad5e0 jle 0x105ad896 */
  if ((C.zf||C.sf!=C.of)) goto L_105ad896;
  /* 105ad5e6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad5e9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105ad5ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ad5ee jne 0x105ad5fb */
  if (!C.zf) goto L_105ad5fb;
  /* 105ad5f0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ad5f3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad5f6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad5f9 jle 0x105ad602 */
  if ((C.zf||C.sf!=C.of)) goto L_105ad602;
L_105ad5fb:;
  /* 105ad5fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ad5fd jmp 0x105adb57 */
  goto L_105adb57;
L_105ad602:;
  /* 105ad602 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad605 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 105ad608 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad60b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105ad60e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad612 jbe 0x105ad61b */
  if ((C.cf||C.zf)) goto L_105ad61b;
  /* 105ad614 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_105ad61b:;
  /* 105ad61b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad61e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad621 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ad624 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad627 jne 0x105ad6fd */
  if (!C.zf) goto L_105ad6fd;
  /* 105ad62d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad631 jae 0x105ad692 */
  if (!C.cf) goto L_105ad692;
  /* 105ad633 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ad638 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad63b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ad63d not edx */
  EDX = (~(EDX));
  /* 105ad63f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad642 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad645 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 105ad649 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ad64b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad64e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad651 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 105ad655 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad658 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad65b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105ad65e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ad661 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad664 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad667 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 105ad66a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad66d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad670 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105ad674 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ad676 jne 0x105ad690 */
  if (!C.zf) goto L_105ad690;
  /* 105ad678 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ad67d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad680 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ad682 not edx */
  EDX = (~(EDX));
  /* 105ad684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad687 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105ad689 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105ad68b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad68e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105ad690:;
  /* 105ad690 jmp 0x105ad6fd */
  goto L_105ad6fd;
L_105ad692:;
  /* 105ad692 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad695 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad698 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ad69d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ad69f not eax */
  EAX = (~(EAX));
  /* 105ad6a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad6a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad6a7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 105ad6ae and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ad6b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad6b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad6b6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 105ad6bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad6c0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad6c3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 105ad6c6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ad6c9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad6cc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad6cf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 105ad6d2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad6d5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad6d8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105ad6dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ad6de jne 0x105ad6fd */
  if (!C.zf) goto L_105ad6fd;
  /* 105ad6e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad6e3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad6e6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ad6eb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ad6ed not eax */
  EAX = (~(EAX));
  /* 105ad6ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad6f2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ad6f5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105ad6f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad6fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_105ad6fd:;
  /* 105ad6fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad700 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105ad703 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad706 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ad709 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 105ad70c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad70f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105ad712 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad715 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105ad718 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 105ad71b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ad71e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad721 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad724 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105ad727 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad72b jle 0x105ad877 */
  if ((C.zf||C.sf!=C.of)) goto L_105ad877;
  /* 105ad731 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad734 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad737 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 105ad73a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad73d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 105ad740 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad743 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 105ad746 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad74a jbe 0x105ad753 */
  if ((C.cf||C.zf)) goto L_105ad753;
  /* 105ad74c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_105ad753:;
  /* 105ad753 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad756 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ad759 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 105ad75c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 105ad75f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad762 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad765 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ad768 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 105ad76b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad76e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad771 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 105ad774 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ad777 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad77a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 105ad77d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad780 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ad783 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad786 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105ad789 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad78c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad78f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ad792 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad795 jne 0x105ad863 */
  if (!C.zf) goto L_105ad863;
  /* 105ad79b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad79f jae 0x105ad7fc */
  if (!C.cf) goto L_105ad7fc;
  /* 105ad7a1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad7a4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad7a7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105ad7ab mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad7ae add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad7b1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105ad7b4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 105ad7b7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad7ba add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad7bd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 105ad7c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ad7c2 jne 0x105ad7da */
  if (!C.zf) goto L_105ad7da;
  /* 105ad7c4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ad7c9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad7cc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ad7ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad7d1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105ad7d3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105ad7d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad7d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105ad7da:;
  /* 105ad7da mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ad7df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad7e2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ad7e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad7e7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad7ea mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 105ad7ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ad7f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad7f3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad7f6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 105ad7fa jmp 0x105ad863 */
  goto L_105ad863;
L_105ad7fc:;
  /* 105ad7fc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad7ff add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad802 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105ad806 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad809 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad80c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105ad80f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 105ad812 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad815 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad818 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 105ad81b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ad81d jne 0x105ad83a */
  if (!C.zf) goto L_105ad83a;
  /* 105ad81f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad822 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad825 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ad82a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ad82c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad82f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ad832 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105ad834 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad837 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_105ad83a:;
  /* 105ad83a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad83d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad840 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ad845 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ad847 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad84a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad84d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 105ad854 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ad856 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad859 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad85c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_105ad863:;
  /* 105ad863 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad866 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad869 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105ad86b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad86e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad871 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad874 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_105ad877:;
  /* 105ad877 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ad87a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad87d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad880 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105ad882 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ad885 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad888 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad88b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad88e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 105ad891 jmp 0x105adb52 */
  goto L_105adb52;
L_105ad896:;
  /* 105ad896 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ad899 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad89c jge 0x105adb52 */
  if ((C.sf==C.of)) goto L_105adb52;
  /* 105ad8a2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ad8a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad8a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad8ab mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105ad8ad mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105ad8b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad8b3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad8b6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad8b9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 105ad8bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ad8bf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad8c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105ad8c5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ad8c8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad8cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105ad8ce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ad8d1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 105ad8d4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad8d7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105ad8da cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad8de jbe 0x105ad8e7 */
  if ((C.cf||C.zf)) goto L_105ad8e7;
  /* 105ad8e0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_105ad8e7:;
  /* 105ad8e7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad8ea and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105ad8ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ad8ef jne 0x105ada30 */
  if (!C.zf) goto L_105ada30;
  /* 105ad8f5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ad8f8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 105ad8fb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad8fe mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105ad901 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad905 jbe 0x105ad90e */
  if ((C.cf||C.zf)) goto L_105ad90e;
  /* 105ad907 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_105ad90e:;
  /* 105ad90e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad911 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad914 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ad917 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad91a jne 0x105ad9f0 */
  if (!C.zf) goto L_105ad9f0;
  /* 105ad920 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ad924 jae 0x105ad985 */
  if (!C.cf) goto L_105ad985;
  /* 105ad926 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ad92b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad92e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ad930 not edx */
  EDX = (~(EDX));
  /* 105ad932 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad935 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad938 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 105ad93c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ad93e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad941 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad944 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 105ad948 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad94b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad94e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105ad951 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ad954 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad957 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad95a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 105ad95d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad960 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad963 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105ad967 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ad969 jne 0x105ad983 */
  if (!C.zf) goto L_105ad983;
  /* 105ad96b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ad970 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad973 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ad975 not edx */
  EDX = (~(EDX));
  /* 105ad977 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad97a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105ad97c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105ad97e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad981 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105ad983:;
  /* 105ad983 jmp 0x105ad9f0 */
  goto L_105ad9f0;
L_105ad985:;
  /* 105ad985 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad988 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad98b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ad990 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ad992 not eax */
  EAX = (~(EAX));
  /* 105ad994 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad997 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad99a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 105ad9a1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ad9a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ad9a6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad9a9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 105ad9b0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad9b3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad9b6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 105ad9b9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105ad9bc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad9bf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad9c2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 105ad9c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ad9c8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ad9cb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105ad9cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ad9d1 jne 0x105ad9f0 */
  if (!C.zf) goto L_105ad9f0;
  /* 105ad9d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105ad9d6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ad9d9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105ad9de shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105ad9e0 not eax */
  EAX = (~(EAX));
  /* 105ad9e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad9e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ad9e8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105ad9ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ad9ed mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_105ad9f0:;
  /* 105ad9f0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad9f3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105ad9f6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ad9f9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ad9fc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 105ad9ff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ada02 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105ada05 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105ada08 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105ada0b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 105ada0e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ada11 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ada14 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105ada17 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ada1a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 105ada1d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ada20 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105ada23 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ada27 jbe 0x105ada30 */
  if ((C.cf||C.zf)) goto L_105ada30;
  /* 105ada29 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_105ada30:;
  /* 105ada30 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ada33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ada36 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 105ada39 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105ada3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ada3f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ada42 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ada45 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 105ada48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ada4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ada4e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105ada51 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ada54 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ada57 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 105ada5a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ada5d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ada60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ada63 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 105ada66 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ada69 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ada6c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ada6f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ada72 jne 0x105adb3e */
  if (!C.zf) goto L_105adb3e;
  /* 105ada78 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ada7c jae 0x105adad8 */
  if (!C.cf) goto L_105adad8;
  /* 105ada7e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ada81 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ada84 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105ada88 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ada8b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ada8e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 105ada91 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105ada93 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105ada96 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ada99 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 105ada9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ada9e jne 0x105adab6 */
  if (!C.zf) goto L_105adab6;
  /* 105adaa0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105adaa5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105adaa8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105adaaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105adaad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105adaaf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105adab1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105adab4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105adab6:;
  /* 105adab6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105adabb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105adabe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105adac0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105adac3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105adac6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 105adaca or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105adacc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105adacf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105adad2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 105adad6 jmp 0x105adb3e */
  goto L_105adb3e;
L_105adad8:;
  /* 105adad8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105adadb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adade movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105adae2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105adae5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adae8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 105adaeb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105adaed mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105adaf0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adaf3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 105adaf6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105adaf8 jne 0x105adb15 */
  if (!C.zf) goto L_105adb15;
  /* 105adafa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105adafd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105adb00 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105adb05 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105adb07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105adb0a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105adb0d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105adb0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105adb12 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_105adb15:;
  /* 105adb15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105adb18 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105adb1b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105adb20 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105adb22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105adb25 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105adb28 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 105adb2f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105adb31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105adb34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105adb37 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_105adb3e:;
  /* 105adb3e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105adb41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105adb44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105adb46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105adb49 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adb4c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105adb4f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_105adb52:;
  /* 105adb52 mov eax, 1 */
  EAX = (0x1u);
L_105adb57:;
  /* 105adb57 mov esp, ebp */
  ESP = (EBP);
  /* 105adb59 pop ebp */
  EBP = (pop32());
  /* 105adb5a ret  */
  ESPCHK(0x105ad570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db60 @ 0x105adb60 (304 bytes, 79 insns) */
void f_105adb60(void) {
  FTRACE(0x105adb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105adb60 push ebp */
  push32((uint32_t)(EBP));
  /* 105adb61 mov ebp, esp */
  EBP = (ESP);
  /* 105adb63 push ecx */
  push32((uint32_t)(ECX));
  /* 105adb64 cmp dword ptr [0x105d2fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105adb6b je 0x105adc8c */
  if (C.zf) goto L_105adc8c;
  /* 105adb71 mov eax, dword ptr [0x105d2fd8] */
  EAX = (r32((uint32_t)(0x105d2fd8)));
  /* 105adb76 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 105adb79 mov ecx, dword ptr [0x105d2fe0] */
  ECX = (r32((uint32_t)(0x105d2fe0)));
  /* 105adb7f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105adb82 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adb84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105adb87 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 105adb8c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105adb91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105adb94 push eax */
  push32((uint32_t)(EAX));
  /* 105adb95 call dword ptr [0x105d5294] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5294))), 0x105adb9bu);
  /* 105adb9b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105adba0 mov ecx, dword ptr [0x105d2fd8] */
  ECX = (r32((uint32_t)(0x105d2fd8)));
  /* 105adba6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105adba8 mov eax, dword ptr [0x105d2fe0] */
  EAX = (r32((uint32_t)(0x105d2fe0)));
  /* 105adbad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105adbb0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105adbb2 mov edx, dword ptr [0x105d2fe0] */
  EDX = (r32((uint32_t)(0x105d2fe0)));
  /* 105adbb8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 105adbbb mov eax, dword ptr [0x105d2fe0] */
  EAX = (r32((uint32_t)(0x105d2fe0)));
  /* 105adbc0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105adbc3 mov edx, dword ptr [0x105d2fd8] */
  EDX = (r32((uint32_t)(0x105d2fd8)));
  /* 105adbc9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 105adbd4 mov eax, dword ptr [0x105d2fe0] */
  EAX = (r32((uint32_t)(0x105d2fe0)));
  /* 105adbd9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105adbdc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 105adbdf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105adbe2 mov eax, dword ptr [0x105d2fe0] */
  EAX = (r32((uint32_t)(0x105d2fe0)));
  /* 105adbe7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105adbea mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 105adbed mov edx, dword ptr [0x105d2fe0] */
  EDX = (r32((uint32_t)(0x105d2fe0)));
  /* 105adbf3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105adbf6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 105adbfa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105adbfc jne 0x105adc12 */
  if (!C.zf) goto L_105adc12;
  /* 105adbfe mov edx, dword ptr [0x105d2fe0] */
  EDX = (r32((uint32_t)(0x105d2fe0)));
  /* 105adc04 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105adc07 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 105adc09 mov ecx, dword ptr [0x105d2fe0] */
  ECX = (r32((uint32_t)(0x105d2fe0)));
  /* 105adc0f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_105adc12:;
  /* 105adc12 mov edx, dword ptr [0x105d2fe0] */
  EDX = (r32((uint32_t)(0x105d2fe0)));
  /* 105adc18 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105adc1c jne 0x105adc82 */
  if (!C.zf) goto L_105adc82;
  /* 105adc1e cmp dword ptr [0x105d2fe4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d2fe4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105adc25 jle 0x105adc82 */
  if ((C.zf||C.sf!=C.of)) goto L_105adc82;
  /* 105adc27 mov eax, dword ptr [0x105d2fe0] */
  EAX = (r32((uint32_t)(0x105d2fe0)));
  /* 105adc2c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105adc2f push ecx */
  push32((uint32_t)(ECX));
  /* 105adc30 push 0 */
  push32((uint32_t)(0x0u));
  /* 105adc32 mov edx, dword ptr [0x105d4344] */
  EDX = (r32((uint32_t)(0x105d4344)));
  /* 105adc38 push edx */
  push32((uint32_t)(EDX));
  /* 105adc39 call dword ptr [0x105d5200] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5200))), 0x105adc3fu);
  /* 105adc3f mov eax, dword ptr [0x105d2fe4] */
  EAX = (r32((uint32_t)(0x105d2fe4)));
  /* 105adc44 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105adc47 mov ecx, dword ptr [0x105d2fe8] */
  ECX = (r32((uint32_t)(0x105d2fe8)));
  /* 105adc4d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adc4f mov edx, dword ptr [0x105d2fe0] */
  EDX = (r32((uint32_t)(0x105d2fe0)));
  /* 105adc55 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adc58 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105adc5a push ecx */
  push32((uint32_t)(ECX));
  /* 105adc5b mov eax, dword ptr [0x105d2fe0] */
  EAX = (r32((uint32_t)(0x105d2fe0)));
  /* 105adc60 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adc63 push eax */
  push32((uint32_t)(EAX));
  /* 105adc64 mov ecx, dword ptr [0x105d2fe0] */
  ECX = (r32((uint32_t)(0x105d2fe0)));
  /* 105adc6a push ecx */
  push32((uint32_t)(ECX));
  /* 105adc6b call 0x105b0340 */
  push32(0x105adc70u); f_105b0340();
  /* 105adc70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105adc73 mov edx, dword ptr [0x105d2fe4] */
  EDX = (r32((uint32_t)(0x105d2fe4)));
  /* 105adc79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105adc7c mov dword ptr [0x105d2fe4], edx */
  w32((uint32_t)(0x105d2fe4), (EDX));
L_105adc82:;
  /* 105adc82 mov dword ptr [0x105d2fe0], 0 */
  w32((uint32_t)(0x105d2fe0), (0x0u));
L_105adc8c:;
  /* 105adc8c mov esp, ebp */
  ESP = (EBP);
  /* 105adc8e pop ebp */
  EBP = (pop32());
  /* 105adc8f ret  */
  ESPCHK(0x105adb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc90 @ 0x105adc90 (1565 bytes, 343 insns) */
void f_105adc90(void) {
  FTRACE(0x105adc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105adc90 push ebp */
  push32((uint32_t)(EBP));
  /* 105adc91 mov ebp, esp */
  EBP = (ESP);
  /* 105adc93 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105adc99 mov eax, dword ptr [0x105d2fe4] */
  EAX = (r32((uint32_t)(0x105d2fe4)));
  /* 105adc9e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105adca1 push eax */
  push32((uint32_t)(EAX));
  /* 105adca2 mov ecx, dword ptr [0x105d2fe8] */
  ECX = (r32((uint32_t)(0x105d2fe8)));
  /* 105adca8 push ecx */
  push32((uint32_t)(ECX));
  /* 105adca9 call dword ptr [0x105d5268] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5268))), 0x105adcafu);
  /* 105adcaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105adcb1 je 0x105adcbb */
  if (C.zf) goto L_105adcbb;
  /* 105adcb3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105adcb6 jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105adcbb:;
  /* 105adcbb mov edx, dword ptr [0x105d2fe8] */
  EDX = (r32((uint32_t)(0x105d2fe8)));
  /* 105adcc1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 105adcc7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 105adcd1 jmp 0x105adce2 */
  goto L_105adce2;
L_105adcd3:;
  /* 105adcd3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 105adcd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adcdc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_105adce2:;
  /* 105adce2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 105adce8 cmp ecx, dword ptr [0x105d2fe4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d2fe4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105adcee jge 0x105ae2a7 */
  if ((C.sf==C.of)) goto L_105ae2a7;
  /* 105adcf4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105adcfa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105adcfd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 105add03 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 105add08 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 105add0e push ecx */
  push32((uint32_t)(ECX));
  /* 105add0f call dword ptr [0x105d5268] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5268))), 0x105add15u);
  /* 105add15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105add17 je 0x105add23 */
  if (C.zf) goto L_105add23;
  /* 105add19 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 105add1e jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105add23:;
  /* 105add23 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105add29 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 105add2c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 105add32 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 105add38 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105add3e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105add41 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105add47 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105add4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105add4d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 105add57 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 105add61 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105add68 jmp 0x105add73 */
  goto L_105add73;
L_105add6a:;
  /* 105add6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105add6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105add70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_105add73:;
  /* 105add73 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105add77 jge 0x105ae26b */
  if ((C.sf==C.of)) goto L_105ae26b;
  /* 105add7d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 105add87 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 105add91 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 105add9b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 105adda5 jmp 0x105addb6 */
  goto L_105addb6;
L_105adda7:;
  /* 105adda7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 105addad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105addb0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_105addb6:;
  /* 105addb6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105addbd jge 0x105addd2 */
  if ((C.sf==C.of)) goto L_105addd2;
  /* 105addbf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 105addc5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 105addd0 jmp 0x105adda7 */
  goto L_105adda7;
L_105addd2:;
  /* 105addd2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105addd6 jl 0x105ae20d */
  if ((C.sf!=C.of)) goto L_105ae20d;
  /* 105adddc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105adde1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 105adde7 push ecx */
  push32((uint32_t)(ECX));
  /* 105adde8 call dword ptr [0x105d5268] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5268))), 0x105addeeu);
  /* 105addee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105addf0 je 0x105addfc */
  if (C.zf) goto L_105addfc;
  /* 105addf2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 105addf7 jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105addfc:;
  /* 105addfc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 105ade02 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105ade05 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 105ade0f jmp 0x105ade20 */
  goto L_105ade20;
L_105ade11:;
  /* 105ade11 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 105ade17 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ade1a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_105ade20:;
  /* 105ade20 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ade27 jge 0x105adfa4 */
  if ((C.sf==C.of)) goto L_105adfa4;
  /* 105ade2d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ade30 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ade33 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 105ade39 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 105ade3f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ade45 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 105ade4b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 105ade51 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ade55 jne 0x105ade62 */
  if (!C.zf) goto L_105ade62;
  /* 105ade57 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 105ade5d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ade60 je 0x105ade6c */
  if (C.zf) goto L_105ade6c;
L_105ade62:;
  /* 105ade62 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 105ade67 jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105ade6c:;
  /* 105ade6c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 105ade72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105ade74 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 105ade7a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 105ade80 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 105ade86 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 105ade8c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105ade8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ade91 je 0x105adec9 */
  if (C.zf) goto L_105adec9;
  /* 105ade93 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 105ade99 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ade9c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 105adea2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105adeac jle 0x105adeb8 */
  if ((C.zf||C.sf!=C.of)) goto L_105adeb8;
  /* 105adeae mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 105adeb3 jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105adeb8:;
  /* 105adeb8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 105adebe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adec1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 105adec7 jmp 0x105adf0b */
  goto L_105adf0b;
L_105adec9:;
  /* 105adec9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 105adecf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 105aded2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aded5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 105adedb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105adee2 jle 0x105adeee */
  if ((C.zf||C.sf!=C.of)) goto L_105adeee;
  /* 105adee4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_105adeee:;
  /* 105adeee mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 105adef4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 105adefb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adefe mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 105adf04 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_105adf0b:;
  /* 105adf0b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105adf12 jl 0x105adf2d */
  if ((C.sf!=C.of)) goto L_105adf2d;
  /* 105adf14 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 105adf1a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 105adf1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105adf1f jne 0x105adf2d */
  if (!C.zf) goto L_105adf2d;
  /* 105adf21 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105adf2b jle 0x105adf37 */
  if ((C.zf||C.sf!=C.of)) goto L_105adf37;
L_105adf2d:;
  /* 105adf2d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 105adf32 jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105adf37:;
  /* 105adf37 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 105adf3d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adf43 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 105adf46 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105adf4c je 0x105adf58 */
  if (C.zf) goto L_105adf58;
  /* 105adf4e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 105adf53 jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105adf58:;
  /* 105adf58 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 105adf5e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adf64 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 105adf6a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 105adf70 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105adf76 jb 0x105ade6c */
  if (C.cf) goto L_105ade6c;
  /* 105adf7c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 105adf82 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105adf88 je 0x105adf94 */
  if (C.zf) goto L_105adf94;
  /* 105adf8a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 105adf8f jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105adf94:;
  /* 105adf94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105adf97 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adf9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105adf9f jmp 0x105ade11 */
  goto L_105ade11;
L_105adfa4:;
  /* 105adfa4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105adfa7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105adfa9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105adfaf je 0x105adfbb */
  if (C.zf) goto L_105adfbb;
  /* 105adfb1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 105adfb6 jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105adfbb:;
  /* 105adfbb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105adfbe mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 105adfc4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 105adfcb jmp 0x105adfd6 */
  goto L_105adfd6;
L_105adfcd:;
  /* 105adfcd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105adfd0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105adfd3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_105adfd6:;
  /* 105adfd6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105adfda jge 0x105ae20d */
  if ((C.sf==C.of)) goto L_105ae20d;
  /* 105adfe0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 105adfea mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 105adff0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_105adff6:;
  /* 105adff6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 105adffc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105adfff mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 105ae005 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105ae00b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae011 je 0x105ae13a */
  if (C.zf) goto L_105ae13a;
  /* 105ae017 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ae01a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 105ae020 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae027 je 0x105ae13a */
  if (C.zf) goto L_105ae13a;
  /* 105ae02d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105ae033 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae039 jb 0x105ae04e */
  if (C.cf) goto L_105ae04e;
  /* 105ae03b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 105ae041 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae046 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae04c jb 0x105ae058 */
  if (C.cf) goto L_105ae058;
L_105ae04e:;
  /* 105ae04e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 105ae053 jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105ae058:;
  /* 105ae058 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105ae05e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 105ae064 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 105ae06a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 105ae070 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae073 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105ae076 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ae079 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae07e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_105ae084:;
  /* 105ae084 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ae087 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae08d je 0x105ae0ae */
  if (C.zf) goto L_105ae0ae;
  /* 105ae08f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ae092 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae098 jne 0x105ae09c */
  if (!C.zf) goto L_105ae09c;
  /* 105ae09a jmp 0x105ae0ae */
  goto L_105ae0ae;
L_105ae09c:;
  /* 105ae09c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ae09f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105ae0a1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 105ae0a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ae0a7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae0a9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105ae0ac jmp 0x105ae084 */
  goto L_105ae084;
L_105ae0ae:;
  /* 105ae0ae mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105ae0b1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae0b7 jne 0x105ae0c3 */
  if (!C.zf) goto L_105ae0c3;
  /* 105ae0b9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 105ae0be jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105ae0c3:;
  /* 105ae0c3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105ae0c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105ae0cb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 105ae0ce sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ae0d1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 105ae0d7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae0de jle 0x105ae0ea */
  if ((C.zf||C.sf!=C.of)) goto L_105ae0ea;
  /* 105ae0e0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_105ae0ea:;
  /* 105ae0ea mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 105ae0f0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae0f3 je 0x105ae0ff */
  if (C.zf) goto L_105ae0ff;
  /* 105ae0f5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 105ae0fa jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105ae0ff:;
  /* 105ae0ff mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105ae105 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105ae108 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae10e je 0x105ae11a */
  if (C.zf) goto L_105ae11a;
  /* 105ae110 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 105ae115 jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105ae11a:;
  /* 105ae11a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105ae120 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 105ae126 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 105ae12c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae12f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 105ae135 jmp 0x105adff6 */
  goto L_105adff6;
L_105ae13a:;
  /* 105ae13a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae141 je 0x105ae1b1 */
  if (C.zf) goto L_105ae1b1;
  /* 105ae143 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae147 jge 0x105ae17b */
  if ((C.sf==C.of)) goto L_105ae17b;
  /* 105ae149 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ae14e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ae151 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ae153 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 105ae159 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ae15b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 105ae161 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ae166 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ae169 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ae16b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 105ae171 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ae173 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 105ae179 jmp 0x105ae1b1 */
  goto L_105ae1b1;
L_105ae17b:;
  /* 105ae17b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ae17e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ae181 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ae186 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ae188 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 105ae18e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ae190 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 105ae196 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ae199 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ae19c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105ae1a1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105ae1a3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 105ae1a9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105ae1ab mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_105ae1b1:;
  /* 105ae1b1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 105ae1b7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105ae1ba cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae1c0 jne 0x105ae1d4 */
  if (!C.zf) goto L_105ae1d4;
  /* 105ae1c2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105ae1c5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 105ae1cb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae1d2 je 0x105ae1de */
  if (C.zf) goto L_105ae1de;
L_105ae1d4:;
  /* 105ae1d4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 105ae1d9 jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105ae1de:;
  /* 105ae1de mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 105ae1e4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105ae1e7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae1ed je 0x105ae1f9 */
  if (C.zf) goto L_105ae1f9;
  /* 105ae1ef mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 105ae1f4 jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105ae1f9:;
  /* 105ae1f9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 105ae1ff add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae202 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 105ae208 jmp 0x105adfcd */
  goto L_105adfcd;
L_105ae20d:;
  /* 105ae20d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ae210 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 105ae216 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 105ae21c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae220 jne 0x105ae23a */
  if (!C.zf) goto L_105ae23a;
  /* 105ae222 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ae225 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 105ae22b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 105ae231 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae238 je 0x105ae241 */
  if (C.zf) goto L_105ae241;
L_105ae23a:;
  /* 105ae23a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 105ae23f jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105ae241:;
  /* 105ae241 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 105ae247 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae24d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 105ae253 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105ae256 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae25b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105ae25e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae261 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 105ae263 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105ae266 jmp 0x105add6a */
  goto L_105add6a;
L_105ae26b:;
  /* 105ae26b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105ae271 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 105ae277 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae279 jne 0x105ae28c */
  if (!C.zf) goto L_105ae28c;
  /* 105ae27b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105ae281 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 105ae287 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae28a je 0x105ae293 */
  if (C.zf) goto L_105ae293;
L_105ae28c:;
  /* 105ae28c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 105ae291 jmp 0x105ae2a9 */
  goto L_105ae2a9;
L_105ae293:;
  /* 105ae293 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105ae299 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae29c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 105ae2a2 jmp 0x105adcd3 */
  goto L_105adcd3;
L_105ae2a7:;
  /* 105ae2a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105ae2a9:;
  /* 105ae2a9 mov esp, ebp */
  ESP = (EBP);
  /* 105ae2ab pop ebp */
  EBP = (pop32());
  /* 105ae2ac ret  */
  ESPCHK(0x105adc90u, _esp0);
  ESP += 4; return;
}

