#include "recomp.h"

/* FUN_1000b470 @ 0x1189b470 (10 bytes, 5 insns) */
void f_1189b470(void) {
  FTRACE(0x1189b470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189b470 push ebp */
  push32((uint32_t)(EBP));
  /* 1189b471 mov ebp, esp */
  EBP = (ESP);
  /* 1189b473 mov eax, dword ptr [0x118c1c94] */
  EAX = (r32((uint32_t)(0x118c1c94)));
  /* 1189b478 pop ebp */
  EBP = (pop32());
  /* 1189b479 ret  */
  ESPCHK(0x1189b470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b480 @ 0x1189b480 (31 bytes, 11 insns) */
void f_1189b480(void) {
  FTRACE(0x1189b480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189b480 push ebp */
  push32((uint32_t)(EBP));
  /* 1189b481 mov ebp, esp */
  EBP = (ESP);
  /* 1189b483 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b48a jbe 0x1189b490 */
  if ((C.cf||C.zf)) goto L_1189b490;
  /* 1189b48c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189b48e jmp 0x1189b49d */
  goto L_1189b49d;
L_1189b490:;
  /* 1189b490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b493 mov dword ptr [0x118c1c94], eax */
  w32((uint32_t)(0x118c1c94), (EAX));
  /* 1189b498 mov eax, 1 */
  EAX = (0x1u);
L_1189b49d:;
  /* 1189b49d pop ebp */
  EBP = (pop32());
  /* 1189b49e ret  */
  ESPCHK(0x1189b480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4a0 @ 0x1189b4a0 (89 bytes, 20 insns) */
void f_1189b4a0(void) {
  FTRACE(0x1189b4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189b4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189b4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1189b4a3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1189b4a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189b4aa mov eax, dword ptr [0x118c516c] */
  EAX = (r32((uint32_t)(0x118c516c)));
  /* 1189b4af push eax */
  push32((uint32_t)(EAX));
  /* 1189b4b0 call dword ptr [0x118c633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c633c))), 0x1189b4b6u);
  /* 1189b4b6 mov dword ptr [0x118c5168], eax */
  w32((uint32_t)(0x118c5168), (EAX));
  /* 1189b4bb cmp dword ptr [0x118c5168], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c5168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b4c2 jne 0x1189b4c8 */
  if (!C.zf) goto L_1189b4c8;
  /* 1189b4c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189b4c6 jmp 0x1189b4f7 */
  goto L_1189b4f7;
L_1189b4c8:;
  /* 1189b4c8 mov ecx, dword ptr [0x118c5168] */
  ECX = (r32((uint32_t)(0x118c5168)));
  /* 1189b4ce mov dword ptr [0x118c515c], ecx */
  w32((uint32_t)(0x118c515c), (ECX));
  /* 1189b4d4 mov dword ptr [0x118c5160], 0 */
  w32((uint32_t)(0x118c5160), (0x0u));
  /* 1189b4de mov dword ptr [0x118c5164], 0 */
  w32((uint32_t)(0x118c5164), (0x0u));
  /* 1189b4e8 mov dword ptr [0x118c5148], 0x10 */
  w32((uint32_t)(0x118c5148), (0x10u));
  /* 1189b4f2 mov eax, 1 */
  EAX = (0x1u);
L_1189b4f7:;
  /* 1189b4f7 pop ebp */
  EBP = (pop32());
  /* 1189b4f8 ret  */
  ESPCHK(0x1189b4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b500 @ 0x1189b500 (85 bytes, 29 insns) */
void f_1189b500(void) {
  FTRACE(0x1189b500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189b500 push ebp */
  push32((uint32_t)(EBP));
  /* 1189b501 mov ebp, esp */
  EBP = (ESP);
  /* 1189b503 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b506 mov eax, dword ptr [0x118c5164] */
  EAX = (r32((uint32_t)(0x118c5164)));
  /* 1189b50b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189b50e mov ecx, dword ptr [0x118c5168] */
  ECX = (r32((uint32_t)(0x118c5168)));
  /* 1189b514 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b516 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1189b519 mov edx, dword ptr [0x118c5168] */
  EDX = (r32((uint32_t)(0x118c5168)));
  /* 1189b51f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1189b522:;
  /* 1189b522 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189b525 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b528 jae 0x1189b54f */
  if (!C.cf) goto L_1189b54f;
  /* 1189b52a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189b52d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b530 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b533 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189b536 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b53d jae 0x1189b544 */
  if (!C.cf) goto L_1189b544;
  /* 1189b53f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189b542 jmp 0x1189b551 */
  goto L_1189b551;
L_1189b544:;
  /* 1189b544 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189b547 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b54a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189b54d jmp 0x1189b522 */
  goto L_1189b522;
L_1189b54f:;
  /* 1189b54f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1189b551:;
  /* 1189b551 mov esp, ebp */
  ESP = (EBP);
  /* 1189b553 pop ebp */
  EBP = (pop32());
  /* 1189b554 ret  */
  ESPCHK(0x1189b500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b560 @ 0x1189b560 (95 bytes, 33 insns) */
void f_1189b560(void) {
  FTRACE(0x1189b560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189b560 push ebp */
  push32((uint32_t)(EBP));
  /* 1189b561 mov ebp, esp */
  EBP = (ESP);
  /* 1189b563 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b569 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b56c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b56f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1189b572 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189b575 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1189b578 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189b57b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189b580 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b583 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189b585 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b588 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1189b58b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1189b58d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189b58f jne 0x1189b5b1 */
  if (!C.zf) goto L_1189b5b1;
  /* 1189b591 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189b594 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1189b597 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189b599 jne 0x1189b5b1 */
  if (!C.zf) goto L_1189b5b1;
  /* 1189b59b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189b59e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1189b5a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189b5a6 je 0x1189b5b1 */
  if (C.zf) goto L_1189b5b1;
  /* 1189b5a8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1189b5af jmp 0x1189b5b8 */
  goto L_1189b5b8;
L_1189b5b1:;
  /* 1189b5b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1189b5b8:;
  /* 1189b5b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189b5bb mov esp, ebp */
  ESP = (EBP);
  /* 1189b5bd pop ebp */
  EBP = (pop32());
  /* 1189b5be ret  */
  ESPCHK(0x1189b560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5c0 @ 0x1189b5c0 (1485 bytes, 453 insns) */
void f_1189b5c0(void) {
  FTRACE(0x1189b5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189b5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189b5c1 mov ebp, esp */
  EBP = (ESP);
  /* 1189b5c3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b5c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b5c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1189b5cc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1189b5cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b5d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b5d5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b5d8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1189b5db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189b5de shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1189b5e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1189b5e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b5e7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189b5ed mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b5f0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1189b5f7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1189b5fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b5fd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b600 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1189b603 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189b606 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189b608 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b60b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1189b60e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189b611 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b614 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1189b617 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189b61a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189b61c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1189b61f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189b622 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1189b625 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1189b628 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189b62b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1189b62e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189b630 jne 0x1189b758 */
  if (!C.zf) goto L_1189b758;
  /* 1189b636 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189b639 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1189b63c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b63f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1189b642 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b646 jbe 0x1189b64f */
  if ((C.cf||C.zf)) goto L_1189b64f;
  /* 1189b648 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1189b64f:;
  /* 1189b64f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189b652 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189b655 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189b658 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b65b jne 0x1189b731 */
  if (!C.zf) goto L_1189b731;
  /* 1189b661 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b665 jae 0x1189b6c6 */
  if (!C.cf) goto L_1189b6c6;
  /* 1189b667 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189b66c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189b66f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189b671 not eax */
  EAX = (~(EAX));
  /* 1189b673 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b676 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b679 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1189b67d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1189b67f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b682 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b685 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1189b689 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b68c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b68f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1189b692 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1189b695 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b698 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b69b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1189b69e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b6a1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b6a4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1189b6a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189b6aa jne 0x1189b6c4 */
  if (!C.zf) goto L_1189b6c4;
  /* 1189b6ac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189b6b1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189b6b4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189b6b6 not eax */
  EAX = (~(EAX));
  /* 1189b6b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b6bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189b6bd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1189b6bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b6c2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1189b6c4:;
  /* 1189b6c4 jmp 0x1189b731 */
  goto L_1189b731;
L_1189b6c6:;
  /* 1189b6c6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189b6c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b6cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189b6d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189b6d3 not edx */
  EDX = (~(EDX));
  /* 1189b6d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b6d8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b6db mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1189b6e2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189b6e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b6e7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b6ea mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1189b6f1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b6f4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b6f7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1189b6fa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1189b6fd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b700 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b703 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1189b706 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b709 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b70c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1189b710 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189b712 jne 0x1189b731 */
  if (!C.zf) goto L_1189b731;
  /* 1189b714 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189b717 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b71a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189b71f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189b721 not edx */
  EDX = (~(EDX));
  /* 1189b723 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b726 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189b729 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1189b72b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b72e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1189b731:;
  /* 1189b731 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189b734 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1189b737 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189b73a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1189b73d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1189b740 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189b743 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189b746 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189b749 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1189b74c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1189b74f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189b752 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b755 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1189b758:;
  /* 1189b758 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189b75b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1189b75e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b761 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1189b764 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b768 jbe 0x1189b771 */
  if ((C.cf||C.zf)) goto L_1189b771;
  /* 1189b76a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1189b771:;
  /* 1189b771 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189b774 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1189b777 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189b779 jne 0x1189b8d5 */
  if (!C.zf) goto L_1189b8d5;
  /* 1189b77f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189b782 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b785 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1189b788 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189b78b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1189b78e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b791 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1189b794 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b798 jbe 0x1189b7a1 */
  if ((C.cf||C.zf)) goto L_1189b7a1;
  /* 1189b79a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1189b7a1:;
  /* 1189b7a1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189b7a4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b7a7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1189b7aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189b7ad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1189b7b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b7b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1189b7b6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b7ba jbe 0x1189b7c3 */
  if ((C.cf||C.zf)) goto L_1189b7c3;
  /* 1189b7bc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1189b7c3:;
  /* 1189b7c3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189b7c6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b7c9 je 0x1189b8cf */
  if (C.zf) goto L_1189b8cf;
  /* 1189b7cf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1189b7d2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1189b7d5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189b7d8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b7db jne 0x1189b8b1 */
  if (!C.zf) goto L_1189b8b1;
  /* 1189b7e1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b7e5 jae 0x1189b846 */
  if (!C.cf) goto L_1189b846;
  /* 1189b7e7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189b7ec mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189b7ef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189b7f1 not edx */
  EDX = (~(EDX));
  /* 1189b7f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b7f6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b7f9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1189b7fd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189b7ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b802 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b805 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1189b809 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b80c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b80f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1189b812 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1189b815 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b818 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b81b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1189b81e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b821 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b824 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1189b828 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189b82a jne 0x1189b844 */
  if (!C.zf) goto L_1189b844;
  /* 1189b82c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189b831 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189b834 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189b836 not edx */
  EDX = (~(EDX));
  /* 1189b838 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b83b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189b83d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1189b83f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b842 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1189b844:;
  /* 1189b844 jmp 0x1189b8b1 */
  goto L_1189b8b1;
L_1189b846:;
  /* 1189b846 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189b849 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b84c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189b851 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189b853 not eax */
  EAX = (~(EAX));
  /* 1189b855 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b858 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b85b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1189b862 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1189b864 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b867 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b86a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1189b871 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b874 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b877 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1189b87a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1189b87d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b880 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b883 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1189b886 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b889 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b88c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1189b890 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189b892 jne 0x1189b8b1 */
  if (!C.zf) goto L_1189b8b1;
  /* 1189b894 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189b897 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b89a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189b89f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189b8a1 not eax */
  EAX = (~(EAX));
  /* 1189b8a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b8a6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189b8a9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1189b8ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b8ae mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1189b8b1:;
  /* 1189b8b1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1189b8b4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1189b8b7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1189b8ba mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189b8bd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1189b8c0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1189b8c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1189b8c6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1189b8c9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1189b8cc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1189b8cf:;
  /* 1189b8cf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1189b8d2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1189b8d5:;
  /* 1189b8d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189b8d8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1189b8db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189b8dd jne 0x1189b8eb */
  if (!C.zf) goto L_1189b8eb;
  /* 1189b8df mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189b8e2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b8e5 je 0x1189b9fb */
  if (C.zf) goto L_1189b9fb;
L_1189b8eb:;
  /* 1189b8eb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189b8ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189b8f1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1189b8f4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1189b8f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189b8fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189b8fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189b900 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1189b903 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189b906 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189b909 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1189b90c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189b90f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189b912 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1189b915 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189b918 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189b91b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189b91e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1189b921 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189b924 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189b927 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189b92a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b92d jne 0x1189b9fb */
  if (!C.zf) goto L_1189b9fb;
  /* 1189b933 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b937 jae 0x1189b994 */
  if (!C.cf) goto L_1189b994;
  /* 1189b939 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b93c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b93f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1189b943 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b946 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b949 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1189b94c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1189b94f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b952 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b955 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1189b958 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189b95a jne 0x1189b972 */
  if (!C.zf) goto L_1189b972;
  /* 1189b95c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189b961 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189b964 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189b966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b969 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189b96b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1189b96d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b970 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1189b972:;
  /* 1189b972 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189b977 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189b97a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189b97c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b97f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b982 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1189b986 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1189b988 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b98b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b98e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1189b992 jmp 0x1189b9fb */
  goto L_1189b9fb;
L_1189b994:;
  /* 1189b994 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b997 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b99a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1189b99e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b9a1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b9a4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1189b9a7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1189b9aa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b9ad add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b9b0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1189b9b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189b9b5 jne 0x1189b9d2 */
  if (!C.zf) goto L_1189b9d2;
  /* 1189b9b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189b9ba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b9bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189b9c2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189b9c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b9c7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189b9ca or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1189b9cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b9cf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1189b9d2:;
  /* 1189b9d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189b9d5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b9d8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189b9dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189b9df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b9e2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b9e5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1189b9ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1189b9ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b9f1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1189b9f4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1189b9fb:;
  /* 1189b9fb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189b9fe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189ba01 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189ba03 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189ba06 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ba09 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189ba0c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1189ba0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189ba12 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189ba14 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189ba17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189ba1a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1189ba1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189ba1f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ba22 jne 0x1189bb89 */
  if (!C.zf) goto L_1189bb89;
  /* 1189ba28 cmp dword ptr [0x118c5160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c5160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ba2f je 0x1189bb78 */
  if (C.zf) goto L_1189bb78;
  /* 1189ba35 mov eax, dword ptr [0x118c5158] */
  EAX = (r32((uint32_t)(0x118c5158)));
  /* 1189ba3a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1189ba3d mov ecx, dword ptr [0x118c5160] */
  ECX = (r32((uint32_t)(0x118c5160)));
  /* 1189ba43 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1189ba46 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ba48 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1189ba4b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1189ba50 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1189ba55 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189ba58 push eax */
  push32((uint32_t)(EAX));
  /* 1189ba59 call dword ptr [0x118c6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6358))), 0x1189ba5fu);
  /* 1189ba5f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189ba64 mov ecx, dword ptr [0x118c5158] */
  ECX = (r32((uint32_t)(0x118c5158)));
  /* 1189ba6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189ba6c mov eax, dword ptr [0x118c5160] */
  EAX = (r32((uint32_t)(0x118c5160)));
  /* 1189ba71 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1189ba74 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1189ba76 mov edx, dword ptr [0x118c5160] */
  EDX = (r32((uint32_t)(0x118c5160)));
  /* 1189ba7c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1189ba7f mov eax, dword ptr [0x118c5160] */
  EAX = (r32((uint32_t)(0x118c5160)));
  /* 1189ba84 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1189ba87 mov edx, dword ptr [0x118c5158] */
  EDX = (r32((uint32_t)(0x118c5158)));
  /* 1189ba8d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1189ba98 mov eax, dword ptr [0x118c5160] */
  EAX = (r32((uint32_t)(0x118c5160)));
  /* 1189ba9d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1189baa0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1189baa3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1189baa6 mov eax, dword ptr [0x118c5160] */
  EAX = (r32((uint32_t)(0x118c5160)));
  /* 1189baab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1189baae mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1189bab1 mov edx, dword ptr [0x118c5160] */
  EDX = (r32((uint32_t)(0x118c5160)));
  /* 1189bab7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1189baba movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1189babe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189bac0 jne 0x1189bad6 */
  if (!C.zf) goto L_1189bad6;
  /* 1189bac2 mov edx, dword ptr [0x118c5160] */
  EDX = (r32((uint32_t)(0x118c5160)));
  /* 1189bac8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1189bacb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1189bacd mov ecx, dword ptr [0x118c5160] */
  ECX = (r32((uint32_t)(0x118c5160)));
  /* 1189bad3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1189bad6:;
  /* 1189bad6 mov edx, dword ptr [0x118c5160] */
  EDX = (r32((uint32_t)(0x118c5160)));
  /* 1189badc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bae0 jne 0x1189bb78 */
  if (!C.zf) goto L_1189bb78;
  /* 1189bae6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1189baeb push 0 */
  push32((uint32_t)(0x0u));
  /* 1189baed mov eax, dword ptr [0x118c5160] */
  EAX = (r32((uint32_t)(0x118c5160)));
  /* 1189baf2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1189baf5 push ecx */
  push32((uint32_t)(ECX));
  /* 1189baf6 call dword ptr [0x118c6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6358))), 0x1189bafcu);
  /* 1189bafc mov edx, dword ptr [0x118c5160] */
  EDX = (r32((uint32_t)(0x118c5160)));
  /* 1189bb02 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1189bb05 push eax */
  push32((uint32_t)(EAX));
  /* 1189bb06 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189bb08 mov ecx, dword ptr [0x118c516c] */
  ECX = (r32((uint32_t)(0x118c516c)));
  /* 1189bb0e push ecx */
  push32((uint32_t)(ECX));
  /* 1189bb0f call dword ptr [0x118c6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6368))), 0x1189bb15u);
  /* 1189bb15 mov edx, dword ptr [0x118c5164] */
  EDX = (r32((uint32_t)(0x118c5164)));
  /* 1189bb1b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189bb1e mov eax, dword ptr [0x118c5168] */
  EAX = (r32((uint32_t)(0x118c5168)));
  /* 1189bb23 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bb25 mov ecx, dword ptr [0x118c5160] */
  ECX = (r32((uint32_t)(0x118c5160)));
  /* 1189bb2b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bb2e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189bb30 push eax */
  push32((uint32_t)(EAX));
  /* 1189bb31 mov edx, dword ptr [0x118c5160] */
  EDX = (r32((uint32_t)(0x118c5160)));
  /* 1189bb37 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bb3a push edx */
  push32((uint32_t)(EDX));
  /* 1189bb3b mov eax, dword ptr [0x118c5160] */
  EAX = (r32((uint32_t)(0x118c5160)));
  /* 1189bb40 push eax */
  push32((uint32_t)(EAX));
  /* 1189bb41 call 0x1189f0f0 */
  push32(0x1189bb46u); f_1189f0f0();
  /* 1189bb46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bb49 mov ecx, dword ptr [0x118c5164] */
  ECX = (r32((uint32_t)(0x118c5164)));
  /* 1189bb4f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189bb52 mov dword ptr [0x118c5164], ecx */
  w32((uint32_t)(0x118c5164), (ECX));
  /* 1189bb58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189bb5b cmp edx, dword ptr [0x118c5160] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x118c5160))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bb61 jbe 0x1189bb6c */
  if ((C.cf||C.zf)) goto L_1189bb6c;
  /* 1189bb63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189bb66 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189bb69 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1189bb6c:;
  /* 1189bb6c mov ecx, dword ptr [0x118c5168] */
  ECX = (r32((uint32_t)(0x118c5168)));
  /* 1189bb72 mov dword ptr [0x118c515c], ecx */
  w32((uint32_t)(0x118c515c), (ECX));
L_1189bb78:;
  /* 1189bb78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189bb7b mov dword ptr [0x118c5160], edx */
  w32((uint32_t)(0x118c5160), (EDX));
  /* 1189bb81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189bb84 mov dword ptr [0x118c5158], eax */
  w32((uint32_t)(0x118c5158), (EAX));
L_1189bb89:;
  /* 1189bb89 mov esp, ebp */
  ESP = (EBP);
  /* 1189bb8b pop ebp */
  EBP = (pop32());
  /* 1189bb8c ret  */
  ESPCHK(0x1189b5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb90 @ 0x1189bb90 (1334 bytes, 427 insns) */
void f_1189bb90(void) {
  FTRACE(0x1189bb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189bb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1189bb91 mov ebp, esp */
  EBP = (ESP);
  /* 1189bb93 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189bb96 push esi */
  push32((uint32_t)(ESI));
  /* 1189bb97 mov eax, dword ptr [0x118c5164] */
  EAX = (r32((uint32_t)(0x118c5164)));
  /* 1189bb9c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189bb9f mov ecx, dword ptr [0x118c5168] */
  ECX = (r32((uint32_t)(0x118c5168)));
  /* 1189bba5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bba7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1189bbaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189bbad add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bbb0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1189bbb3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1189bbb6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189bbb9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1189bbbc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189bbbf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1189bbc2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bbc6 jge 0x1189bbdc */
  if ((C.sf==C.of)) goto L_1189bbdc;
  /* 1189bbc8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1189bbcb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189bbce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189bbd0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1189bbd3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1189bbda jmp 0x1189bbf1 */
  goto L_1189bbf1;
L_1189bbdc:;
  /* 1189bbdc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1189bbe3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189bbe6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189bbe9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189bbec shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189bbee mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1189bbf1:;
  /* 1189bbf1 mov ecx, dword ptr [0x118c515c] */
  ECX = (r32((uint32_t)(0x118c515c)));
  /* 1189bbf7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1189bbfa:;
  /* 1189bbfa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bbfd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bc00 jae 0x1189bc26 */
  if (!C.cf) goto L_1189bc26;
  /* 1189bc02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bc05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189bc08 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1189bc0a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bc0d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1189bc10 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1189bc13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1189bc15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189bc17 je 0x1189bc1b */
  if (C.zf) goto L_1189bc1b;
  /* 1189bc19 jmp 0x1189bc26 */
  goto L_1189bc26;
L_1189bc1b:;
  /* 1189bc1b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bc1e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bc21 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1189bc24 jmp 0x1189bbfa */
  goto L_1189bbfa;
L_1189bc26:;
  /* 1189bc26 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bc29 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bc2c jne 0x1189bd0d */
  if (!C.zf) goto L_1189bd0d;
  /* 1189bc32 mov eax, dword ptr [0x118c5168] */
  EAX = (r32((uint32_t)(0x118c5168)));
  /* 1189bc37 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1189bc3a:;
  /* 1189bc3a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bc3d cmp ecx, dword ptr [0x118c515c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c515c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bc43 jae 0x1189bc69 */
  if (!C.cf) goto L_1189bc69;
  /* 1189bc45 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bc48 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189bc4b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1189bc4d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bc50 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1189bc53 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1189bc56 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189bc58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189bc5a je 0x1189bc5e */
  if (C.zf) goto L_1189bc5e;
  /* 1189bc5c jmp 0x1189bc69 */
  goto L_1189bc69;
L_1189bc5e:;
  /* 1189bc5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bc61 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bc64 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1189bc67 jmp 0x1189bc3a */
  goto L_1189bc3a;
L_1189bc69:;
  /* 1189bc69 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bc6c cmp ecx, dword ptr [0x118c515c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c515c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bc72 jne 0x1189bd0d */
  if (!C.zf) goto L_1189bd0d;
L_1189bc78:;
  /* 1189bc78 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bc7b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bc7e jae 0x1189bc96 */
  if (!C.cf) goto L_1189bc96;
  /* 1189bc80 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bc83 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bc87 je 0x1189bc8b */
  if (C.zf) goto L_1189bc8b;
  /* 1189bc89 jmp 0x1189bc96 */
  goto L_1189bc96;
L_1189bc8b:;
  /* 1189bc8b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bc8e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bc91 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1189bc94 jmp 0x1189bc78 */
  goto L_1189bc78;
L_1189bc96:;
  /* 1189bc96 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bc99 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bc9c jne 0x1189bce7 */
  if (!C.zf) goto L_1189bce7;
  /* 1189bc9e mov eax, dword ptr [0x118c5168] */
  EAX = (r32((uint32_t)(0x118c5168)));
  /* 1189bca3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1189bca6:;
  /* 1189bca6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bca9 cmp ecx, dword ptr [0x118c515c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c515c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bcaf jae 0x1189bcc7 */
  if (!C.cf) goto L_1189bcc7;
  /* 1189bcb1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bcb4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bcb8 je 0x1189bcbc */
  if (C.zf) goto L_1189bcbc;
  /* 1189bcba jmp 0x1189bcc7 */
  goto L_1189bcc7;
L_1189bcbc:;
  /* 1189bcbc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bcbf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bcc2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1189bcc5 jmp 0x1189bca6 */
  goto L_1189bca6;
L_1189bcc7:;
  /* 1189bcc7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bcca cmp ecx, dword ptr [0x118c515c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c515c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bcd0 jne 0x1189bce7 */
  if (!C.zf) goto L_1189bce7;
  /* 1189bcd2 call 0x1189c0d0 */
  push32(0x1189bcd7u); f_1189c0d0();
  /* 1189bcd7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1189bcda cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bcde jne 0x1189bce7 */
  if (!C.zf) goto L_1189bce7;
  /* 1189bce0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189bce2 jmp 0x1189c0c1 */
  goto L_1189c0c1;
L_1189bce7:;
  /* 1189bce7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bcea push edx */
  push32((uint32_t)(EDX));
  /* 1189bceb call 0x1189c1e0 */
  push32(0x1189bcf0u); f_1189c1e0();
  /* 1189bcf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bcf3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bcf6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1189bcf9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1189bcfb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bcfe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1189bd01 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bd04 jne 0x1189bd0d */
  if (!C.zf) goto L_1189bd0d;
  /* 1189bd06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189bd08 jmp 0x1189c0c1 */
  goto L_1189c0c1;
L_1189bd0d:;
  /* 1189bd0d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bd10 mov dword ptr [0x118c515c], edx */
  w32((uint32_t)(0x118c515c), (EDX));
  /* 1189bd16 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bd19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1189bd1c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1189bd1f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bd22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189bd24 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1189bd27 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bd2b je 0x1189bd50 */
  if (C.zf) goto L_1189bd50;
  /* 1189bd2d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189bd30 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bd33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189bd36 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1189bd3a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189bd3d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bd40 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1189bd43 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1189bd4a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1189bd4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189bd4e jne 0x1189bd85 */
  if (!C.zf) goto L_1189bd85;
L_1189bd50:;
  /* 1189bd50 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1189bd57:;
  /* 1189bd57 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189bd5a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bd5d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189bd60 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1189bd64 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189bd67 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bd6a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1189bd6d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1189bd74 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1189bd76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189bd78 jne 0x1189bd85 */
  if (!C.zf) goto L_1189bd85;
  /* 1189bd7a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189bd7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bd80 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1189bd83 jmp 0x1189bd57 */
  goto L_1189bd57;
L_1189bd85:;
  /* 1189bd85 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189bd88 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189bd8e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bd91 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1189bd98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189bd9b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1189bda2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189bda5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bda8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189bdab and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1189bdaf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1189bdb2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bdb6 jne 0x1189bdd2 */
  if (!C.zf) goto L_1189bdd2;
  /* 1189bdb8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1189bdbf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189bdc2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bdc5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1189bdc8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1189bdcf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1189bdd2:;
  /* 1189bdd2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bdd6 jl 0x1189bdeb */
  if ((C.sf!=C.of)) goto L_1189bdeb;
  /* 1189bdd8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189bddb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1189bddd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1189bde0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189bde3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bde6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1189bde9 jmp 0x1189bdd2 */
  goto L_1189bdd2;
L_1189bdeb:;
  /* 1189bdeb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189bdee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189bdf1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1189bdf5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1189bdf8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189bdfb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189bdfd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189be00 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189be03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189be06 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1189be09 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189be0c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1189be0f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189be13 jle 0x1189be1c */
  if ((C.zf||C.sf!=C.of)) goto L_1189be1c;
  /* 1189be15 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1189be1c:;
  /* 1189be1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189be1f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189be22 je 0x1189c040 */
  if (C.zf) goto L_1189c040;
  /* 1189be28 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189be2b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189be2e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189be31 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189be34 jne 0x1189bf0a */
  if (!C.zf) goto L_1189bf0a;
  /* 1189be3a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189be3e jge 0x1189be9f */
  if ((C.sf==C.of)) goto L_1189be9f;
  /* 1189be40 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189be45 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189be48 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189be4a not eax */
  EAX = (~(EAX));
  /* 1189be4c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189be4f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189be52 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1189be56 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1189be58 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189be5b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189be5e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1189be62 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189be65 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189be68 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1189be6b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1189be6e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189be71 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189be74 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1189be77 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189be7a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189be7d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1189be81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189be83 jne 0x1189be9d */
  if (!C.zf) goto L_1189be9d;
  /* 1189be85 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189be8a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189be8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189be8f not eax */
  EAX = (~(EAX));
  /* 1189be91 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189be94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189be96 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1189be98 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189be9b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1189be9d:;
  /* 1189be9d jmp 0x1189bf0a */
  goto L_1189bf0a;
L_1189be9f:;
  /* 1189be9f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189bea2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189bea5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189beaa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189beac not edx */
  EDX = (~(EDX));
  /* 1189beae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189beb1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189beb4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1189bebb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189bebd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189bec0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bec3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1189beca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189becd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bed0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1189bed3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1189bed6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bed9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bedc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1189bedf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bee2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bee5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1189bee9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189beeb jne 0x1189bf0a */
  if (!C.zf) goto L_1189bf0a;
  /* 1189beed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189bef0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189bef3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189bef8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189befa not edx */
  EDX = (~(EDX));
  /* 1189befc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189beff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189bf02 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1189bf04 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bf07 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1189bf0a:;
  /* 1189bf0a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189bf0d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1189bf10 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189bf13 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1189bf16 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1189bf19 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189bf1c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189bf1f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189bf22 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1189bf25 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1189bf28 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bf2c je 0x1189c040 */
  if (C.zf) goto L_1189c040;
  /* 1189bf32 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189bf35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189bf38 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1189bf3b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1189bf3e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189bf41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189bf44 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189bf47 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1189bf4a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189bf4d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189bf50 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1189bf53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189bf56 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189bf59 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1189bf5c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189bf5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189bf62 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189bf65 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1189bf68 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189bf6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189bf6e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189bf71 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bf74 jne 0x1189c040 */
  if (!C.zf) goto L_1189c040;
  /* 1189bf7a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189bf7e jge 0x1189bfda */
  if ((C.sf==C.of)) goto L_1189bfda;
  /* 1189bf80 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bf83 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bf86 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1189bf8a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bf8d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bf90 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1189bf93 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1189bf95 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bf98 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bf9b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1189bf9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189bfa0 jne 0x1189bfb8 */
  if (!C.zf) goto L_1189bfb8;
  /* 1189bfa2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189bfa7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189bfaa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189bfac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bfaf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189bfb1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1189bfb3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189bfb6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1189bfb8:;
  /* 1189bfb8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189bfbd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189bfc0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189bfc2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189bfc5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bfc8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1189bfcc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189bfce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189bfd1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bfd4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1189bfd8 jmp 0x1189c040 */
  goto L_1189c040;
L_1189bfda:;
  /* 1189bfda mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bfdd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bfe0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1189bfe4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bfe7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bfea mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1189bfed add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1189bfef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189bff2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189bff5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1189bff8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189bffa jne 0x1189c017 */
  if (!C.zf) goto L_1189c017;
  /* 1189bffc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189bfff sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c002 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189c007 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189c009 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c00c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189c00f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1189c011 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c014 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1189c017:;
  /* 1189c017 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c01a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c01d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189c022 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189c024 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c027 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189c02a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1189c031 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189c033 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c036 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189c039 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1189c040:;
  /* 1189c040 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c044 je 0x1189c05a */
  if (C.zf) goto L_1189c05a;
  /* 1189c046 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189c04c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1189c04e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c051 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c054 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189c057 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1189c05a:;
  /* 1189c05a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c05d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c060 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1189c063 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c066 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c069 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c06c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1189c06e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c071 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c074 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c077 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c07a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1189c07d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c080 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189c082 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c085 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189c087 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c08a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c08d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1189c08f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189c091 jne 0x1189c0b3 */
  if (!C.zf) goto L_1189c0b3;
  /* 1189c093 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c096 cmp eax, dword ptr [0x118c5160] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c5160))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c09c jne 0x1189c0b3 */
  if (!C.zf) goto L_1189c0b3;
  /* 1189c09e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c0a1 cmp ecx, dword ptr [0x118c5158] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c5158))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c0a7 jne 0x1189c0b3 */
  if (!C.zf) goto L_1189c0b3;
  /* 1189c0a9 mov dword ptr [0x118c5160], 0 */
  w32((uint32_t)(0x118c5160), (0x0u));
L_1189c0b3:;
  /* 1189c0b3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1189c0b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c0b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1189c0bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c0be add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1189c0c1:;
  /* 1189c0c1 pop esi */
  ESI = (pop32());
  /* 1189c0c2 mov esp, ebp */
  ESP = (EBP);
  /* 1189c0c4 pop ebp */
  EBP = (pop32());
  /* 1189c0c5 ret  */
  ESPCHK(0x1189bb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0d0 @ 0x1189c0d0 (271 bytes, 78 insns) */
void f_1189c0d0(void) {
  FTRACE(0x1189c0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189c0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189c0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1189c0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1189c0d4 mov eax, dword ptr [0x118c5164] */
  EAX = (r32((uint32_t)(0x118c5164)));
  /* 1189c0d9 cmp eax, dword ptr [0x118c5148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c5148))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c0df jne 0x1189c12b */
  if (!C.zf) goto L_1189c12b;
  /* 1189c0e1 mov ecx, dword ptr [0x118c5148] */
  ECX = (r32((uint32_t)(0x118c5148)));
  /* 1189c0e7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c0ea imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189c0ed push ecx */
  push32((uint32_t)(ECX));
  /* 1189c0ee mov edx, dword ptr [0x118c5168] */
  EDX = (r32((uint32_t)(0x118c5168)));
  /* 1189c0f4 push edx */
  push32((uint32_t)(EDX));
  /* 1189c0f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189c0f7 mov eax, dword ptr [0x118c516c] */
  EAX = (r32((uint32_t)(0x118c516c)));
  /* 1189c0fc push eax */
  push32((uint32_t)(EAX));
  /* 1189c0fd call dword ptr [0x118c6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6344))), 0x1189c103u);
  /* 1189c103 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189c106 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c10a jne 0x1189c113 */
  if (!C.zf) goto L_1189c113;
  /* 1189c10c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189c10e jmp 0x1189c1db */
  goto L_1189c1db;
L_1189c113:;
  /* 1189c113 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c116 mov dword ptr [0x118c5168], ecx */
  w32((uint32_t)(0x118c5168), (ECX));
  /* 1189c11c mov edx, dword ptr [0x118c5148] */
  EDX = (r32((uint32_t)(0x118c5148)));
  /* 1189c122 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c125 mov dword ptr [0x118c5148], edx */
  w32((uint32_t)(0x118c5148), (EDX));
L_1189c12b:;
  /* 1189c12b mov eax, dword ptr [0x118c5164] */
  EAX = (r32((uint32_t)(0x118c5164)));
  /* 1189c130 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189c133 mov ecx, dword ptr [0x118c5168] */
  ECX = (r32((uint32_t)(0x118c5168)));
  /* 1189c139 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c13b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1189c13e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1189c143 push 8 */
  push32((uint32_t)(0x8u));
  /* 1189c145 mov edx, dword ptr [0x118c516c] */
  EDX = (r32((uint32_t)(0x118c516c)));
  /* 1189c14b push edx */
  push32((uint32_t)(EDX));
  /* 1189c14c call dword ptr [0x118c633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c633c))), 0x1189c152u);
  /* 1189c152 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c155 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1189c158 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c15b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c15f jne 0x1189c165 */
  if (!C.zf) goto L_1189c165;
  /* 1189c161 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189c163 jmp 0x1189c1db */
  goto L_1189c1db;
L_1189c165:;
  /* 1189c165 push 4 */
  push32((uint32_t)(0x4u));
  /* 1189c167 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1189c16c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1189c171 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189c173 call dword ptr [0x118c6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6334))), 0x1189c179u);
  /* 1189c179 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c17c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1189c17f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c182 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c186 jne 0x1189c1a2 */
  if (!C.zf) goto L_1189c1a2;
  /* 1189c188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c18b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1189c18e push ecx */
  push32((uint32_t)(ECX));
  /* 1189c18f push 0 */
  push32((uint32_t)(0x0u));
  /* 1189c191 mov edx, dword ptr [0x118c516c] */
  EDX = (r32((uint32_t)(0x118c516c)));
  /* 1189c197 push edx */
  push32((uint32_t)(EDX));
  /* 1189c198 call dword ptr [0x118c6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6368))), 0x1189c19eu);
  /* 1189c19e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189c1a0 jmp 0x1189c1db */
  goto L_1189c1db;
L_1189c1a2:;
  /* 1189c1a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c1a5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1189c1ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c1ae mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1189c1b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c1b8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1189c1bf mov eax, dword ptr [0x118c5164] */
  EAX = (r32((uint32_t)(0x118c5164)));
  /* 1189c1c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c1c7 mov dword ptr [0x118c5164], eax */
  w32((uint32_t)(0x118c5164), (EAX));
  /* 1189c1cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c1cf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1189c1d2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1189c1d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1189c1db:;
  /* 1189c1db mov esp, ebp */
  ESP = (EBP);
  /* 1189c1dd pop ebp */
  EBP = (pop32());
  /* 1189c1de ret  */
  ESPCHK(0x1189c0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1e0 @ 0x1189c1e0 (494 bytes, 149 insns) */
void f_1189c1e0(void) {
  FTRACE(0x1189c1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189c1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189c1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1189c1e3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c1e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c1e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1189c1ec mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1189c1ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c1f2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1189c1f5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189c1f8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1189c1ff:;
  /* 1189c1ff cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c203 jl 0x1189c218 */
  if ((C.sf!=C.of)) goto L_1189c218;
  /* 1189c205 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189c208 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1189c20a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1189c20d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c210 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c213 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1189c216 jmp 0x1189c1ff */
  goto L_1189c1ff;
L_1189c218:;
  /* 1189c218 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c21b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189c221 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c224 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1189c22b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1189c22e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1189c235 jmp 0x1189c240 */
  goto L_1189c240;
L_1189c237:;
  /* 1189c237 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c23a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c23d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1189c240:;
  /* 1189c240 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c244 jge 0x1189c266 */
  if ((C.sf==C.of)) goto L_1189c266;
  /* 1189c246 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c249 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189c24c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1189c24f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1189c252 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c255 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c258 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1189c25b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c25e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c261 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1189c264 jmp 0x1189c237 */
  goto L_1189c237;
L_1189c266:;
  /* 1189c266 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c269 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1189c26c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c26f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1189c272 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c274 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1189c277 push 4 */
  push32((uint32_t)(0x4u));
  /* 1189c279 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1189c27e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1189c283 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c286 push edx */
  push32((uint32_t)(EDX));
  /* 1189c287 call dword ptr [0x118c6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6334))), 0x1189c28du);
  /* 1189c28d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189c28f jne 0x1189c299 */
  if (!C.zf) goto L_1189c299;
  /* 1189c291 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189c294 jmp 0x1189c3ca */
  goto L_1189c3ca;
L_1189c299:;
  /* 1189c299 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c29c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c2a1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1189c2a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c2a7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1189c2aa jmp 0x1189c2b8 */
  goto L_1189c2b8;
L_1189c2ac:;
  /* 1189c2ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c2af add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c2b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1189c2b8:;
  /* 1189c2b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c2bb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c2be ja 0x1189c31d */
  if ((!C.cf&&!C.zf)) goto L_1189c31d;
  /* 1189c2c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c2c3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1189c2ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c2cd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1189c2d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c2da add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c2dd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1189c2e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c2e3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1189c2e9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c2ec add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c2f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c2f5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1189c2f8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c2fb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c301 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c304 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1189c307 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c30a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c30f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1189c312 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189c315 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1189c31b jmp 0x1189c2ac */
  goto L_1189c2ac;
L_1189c31d:;
  /* 1189c31d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189c320 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c326 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1189c329 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c32c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c32f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c332 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1189c335 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c338 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1189c33b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1189c33e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c341 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c344 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1189c347 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189c34a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c34d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c350 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1189c353 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c356 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1189c359 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1189c35c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c35f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c362 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1189c365 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c368 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c36b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1189c373 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c376 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c379 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1189c384 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c387 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1189c38b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c38e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1189c391 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1189c394 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c397 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1189c39a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189c39c jne 0x1189c3ad */
  if (!C.zf) goto L_1189c3ad;
  /* 1189c39e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c3a1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189c3a4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1189c3a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c3aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1189c3ad:;
  /* 1189c3ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189c3b2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c3b5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189c3b7 not edx */
  EDX = (~(EDX));
  /* 1189c3b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c3bc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1189c3bf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1189c3c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c3c4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1189c3c7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1189c3ca:;
  /* 1189c3ca mov esp, ebp */
  ESP = (EBP);
  /* 1189c3cc pop ebp */
  EBP = (pop32());
  /* 1189c3cd ret  */
  ESPCHK(0x1189c1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3d0 @ 0x1189c3d0 (1515 bytes, 489 insns) */
void f_1189c3d0(void) {
  FTRACE(0x1189c3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189c3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189c3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1189c3d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c3d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189c3d9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c3dc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1189c3de mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1189c3e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c3e4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1189c3e7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1189c3ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c3ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189c3f0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c3f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1189c3f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189c3f9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1189c3fc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189c3ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c402 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189c408 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c40b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1189c412 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1189c415 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189c418 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c41b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1189c41e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c421 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189c423 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c426 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1189c429 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c42c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c42f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1189c432 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c435 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189c437 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1189c43a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189c43d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c440 jle 0x1189c6f6 */
  if ((C.zf||C.sf!=C.of)) goto L_1189c6f6;
  /* 1189c446 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c449 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1189c44c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189c44e jne 0x1189c45b */
  if (!C.zf) goto L_1189c45b;
  /* 1189c450 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c453 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c456 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c459 jle 0x1189c462 */
  if ((C.zf||C.sf!=C.of)) goto L_1189c462;
L_1189c45b:;
  /* 1189c45b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189c45d jmp 0x1189c9b7 */
  goto L_1189c9b7;
L_1189c462:;
  /* 1189c462 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c465 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1189c468 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c46b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1189c46e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c472 jbe 0x1189c47b */
  if ((C.cf||C.zf)) goto L_1189c47b;
  /* 1189c474 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1189c47b:;
  /* 1189c47b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c47e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c481 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189c484 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c487 jne 0x1189c55d */
  if (!C.zf) goto L_1189c55d;
  /* 1189c48d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c491 jae 0x1189c4f2 */
  if (!C.cf) goto L_1189c4f2;
  /* 1189c493 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189c498 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c49b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189c49d not edx */
  EDX = (~(EDX));
  /* 1189c49f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c4a2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c4a5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1189c4a9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189c4ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c4ae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c4b1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1189c4b5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c4b8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c4bb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1189c4be sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1189c4c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c4c4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c4c7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1189c4ca mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c4cd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c4d0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1189c4d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189c4d6 jne 0x1189c4f0 */
  if (!C.zf) goto L_1189c4f0;
  /* 1189c4d8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189c4dd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c4e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189c4e2 not edx */
  EDX = (~(EDX));
  /* 1189c4e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c4e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189c4e9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1189c4eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c4ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1189c4f0:;
  /* 1189c4f0 jmp 0x1189c55d */
  goto L_1189c55d;
L_1189c4f2:;
  /* 1189c4f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c4f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c4f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189c4fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189c4ff not eax */
  EAX = (~(EAX));
  /* 1189c501 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c504 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c507 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1189c50e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1189c510 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c513 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c516 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1189c51d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c520 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c523 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1189c526 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1189c529 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c52c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c52f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1189c532 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c535 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c538 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1189c53c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189c53e jne 0x1189c55d */
  if (!C.zf) goto L_1189c55d;
  /* 1189c540 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c543 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c546 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189c54b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189c54d not eax */
  EAX = (~(EAX));
  /* 1189c54f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c552 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189c555 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1189c557 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c55a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1189c55d:;
  /* 1189c55d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c560 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1189c563 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c566 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189c569 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1189c56c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c56f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1189c572 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c575 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1189c578 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1189c57b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c57e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c581 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c584 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1189c587 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c58b jle 0x1189c6d7 */
  if ((C.zf||C.sf!=C.of)) goto L_1189c6d7;
  /* 1189c591 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c594 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c597 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1189c59a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c59d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1189c5a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c5a3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1189c5a6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c5aa jbe 0x1189c5b3 */
  if ((C.cf||C.zf)) goto L_1189c5b3;
  /* 1189c5ac mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1189c5b3:;
  /* 1189c5b3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c5b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189c5b9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1189c5bc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1189c5bf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c5c2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c5c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189c5c8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1189c5cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c5ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c5d1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1189c5d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c5d7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c5da mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1189c5dd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c5e0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189c5e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c5e6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1189c5e9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c5ec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c5ef mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189c5f2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c5f5 jne 0x1189c6c3 */
  if (!C.zf) goto L_1189c6c3;
  /* 1189c5fb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c5ff jae 0x1189c65c */
  if (!C.cf) goto L_1189c65c;
  /* 1189c601 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c604 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c607 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1189c60b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c60e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c611 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1189c614 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1189c617 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c61a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c61d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1189c620 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189c622 jne 0x1189c63a */
  if (!C.zf) goto L_1189c63a;
  /* 1189c624 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189c629 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c62c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189c62e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c631 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189c633 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1189c635 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c638 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1189c63a:;
  /* 1189c63a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189c63f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c642 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189c644 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c647 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c64a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1189c64e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1189c650 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c653 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c656 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1189c65a jmp 0x1189c6c3 */
  goto L_1189c6c3;
L_1189c65c:;
  /* 1189c65c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c65f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c662 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1189c666 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c669 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c66c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1189c66f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1189c672 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c675 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c678 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1189c67b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189c67d jne 0x1189c69a */
  if (!C.zf) goto L_1189c69a;
  /* 1189c67f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c682 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c685 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189c68a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189c68c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c68f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189c692 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1189c694 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c697 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1189c69a:;
  /* 1189c69a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c69d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c6a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189c6a5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189c6a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c6aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c6ad mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1189c6b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1189c6b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c6b9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c6bc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1189c6c3:;
  /* 1189c6c3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c6c6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c6c9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189c6cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c6ce add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c6d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c6d4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1189c6d7:;
  /* 1189c6d7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189c6da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c6dd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c6e0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1189c6e2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189c6e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c6e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c6eb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c6ee mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1189c6f1 jmp 0x1189c9b2 */
  goto L_1189c9b2;
L_1189c6f6:;
  /* 1189c6f6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189c6f9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c6fc jge 0x1189c9b2 */
  if ((C.sf==C.of)) goto L_1189c9b2;
  /* 1189c702 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189c705 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c708 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c70b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1189c70d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189c710 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c713 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c716 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c719 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1189c71c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c71f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c722 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1189c725 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c728 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c72b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1189c72e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c731 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1189c734 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c737 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1189c73a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c73e jbe 0x1189c747 */
  if ((C.cf||C.zf)) goto L_1189c747;
  /* 1189c740 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1189c747:;
  /* 1189c747 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c74a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1189c74d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189c74f jne 0x1189c890 */
  if (!C.zf) goto L_1189c890;
  /* 1189c755 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189c758 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1189c75b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c75e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1189c761 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c765 jbe 0x1189c76e */
  if ((C.cf||C.zf)) goto L_1189c76e;
  /* 1189c767 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1189c76e:;
  /* 1189c76e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c771 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c774 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189c777 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c77a jne 0x1189c850 */
  if (!C.zf) goto L_1189c850;
  /* 1189c780 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c784 jae 0x1189c7e5 */
  if (!C.cf) goto L_1189c7e5;
  /* 1189c786 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189c78b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c78e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189c790 not edx */
  EDX = (~(EDX));
  /* 1189c792 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c795 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c798 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1189c79c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189c79e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c7a1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c7a4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1189c7a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c7ab add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c7ae mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1189c7b1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1189c7b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c7b7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c7ba mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1189c7bd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c7c0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c7c3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1189c7c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189c7c9 jne 0x1189c7e3 */
  if (!C.zf) goto L_1189c7e3;
  /* 1189c7cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189c7d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c7d3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189c7d5 not edx */
  EDX = (~(EDX));
  /* 1189c7d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c7da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189c7dc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1189c7de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c7e1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1189c7e3:;
  /* 1189c7e3 jmp 0x1189c850 */
  goto L_1189c850;
L_1189c7e5:;
  /* 1189c7e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c7e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c7eb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189c7f0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189c7f2 not eax */
  EAX = (~(EAX));
  /* 1189c7f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c7f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c7fa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1189c801 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1189c803 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c806 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c809 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1189c810 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c813 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c816 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1189c819 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1189c81c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c81f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c822 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1189c825 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c828 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c82b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1189c82f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189c831 jne 0x1189c850 */
  if (!C.zf) goto L_1189c850;
  /* 1189c833 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189c836 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c839 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189c83e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189c840 not eax */
  EAX = (~(EAX));
  /* 1189c842 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c845 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189c848 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1189c84a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c84d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1189c850:;
  /* 1189c850 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c853 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1189c856 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c859 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189c85c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1189c85f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c862 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1189c865 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189c868 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1189c86b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1189c86e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c871 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c874 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1189c877 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c87a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1189c87d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c880 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1189c883 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c887 jbe 0x1189c890 */
  if ((C.cf||C.zf)) goto L_1189c890;
  /* 1189c889 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1189c890:;
  /* 1189c890 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189c893 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189c896 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1189c899 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1189c89c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c89f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c8a2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189c8a5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1189c8a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c8ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c8ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1189c8b1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189c8b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c8b7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1189c8ba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c8bd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189c8c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c8c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1189c8c6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c8c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c8cc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189c8cf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c8d2 jne 0x1189c99e */
  if (!C.zf) goto L_1189c99e;
  /* 1189c8d8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c8dc jae 0x1189c938 */
  if (!C.cf) goto L_1189c938;
  /* 1189c8de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c8e1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c8e4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1189c8e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c8eb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c8ee mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1189c8f1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1189c8f3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c8f6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c8f9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1189c8fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189c8fe jne 0x1189c916 */
  if (!C.zf) goto L_1189c916;
  /* 1189c900 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189c905 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189c908 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189c90a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c90d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189c90f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1189c911 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c914 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1189c916:;
  /* 1189c916 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189c91b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189c91e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189c920 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c923 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c926 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1189c92a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189c92c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c92f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c932 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1189c936 jmp 0x1189c99e */
  goto L_1189c99e;
L_1189c938:;
  /* 1189c938 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c93b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c93e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1189c942 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c945 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c948 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1189c94b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1189c94d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c950 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c953 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1189c956 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189c958 jne 0x1189c975 */
  if (!C.zf) goto L_1189c975;
  /* 1189c95a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189c95d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c960 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1189c965 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1189c967 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c96a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189c96d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1189c96f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189c972 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1189c975:;
  /* 1189c975 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189c978 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189c97b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189c980 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189c982 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c985 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c988 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1189c98f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189c991 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c994 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189c997 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1189c99e:;
  /* 1189c99e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c9a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c9a4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1189c9a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189c9a9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c9ac mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189c9af mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1189c9b2:;
  /* 1189c9b2 mov eax, 1 */
  EAX = (0x1u);
L_1189c9b7:;
  /* 1189c9b7 mov esp, ebp */
  ESP = (EBP);
  /* 1189c9b9 pop ebp */
  EBP = (pop32());
  /* 1189c9ba ret  */
  ESPCHK(0x1189c3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9c0 @ 0x1189c9c0 (304 bytes, 79 insns) */
void f_1189c9c0(void) {
  FTRACE(0x1189c9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189c9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189c9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1189c9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1189c9c4 cmp dword ptr [0x118c5160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c5160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189c9cb je 0x1189caec */
  if (C.zf) goto L_1189caec;
  /* 1189c9d1 mov eax, dword ptr [0x118c5158] */
  EAX = (r32((uint32_t)(0x118c5158)));
  /* 1189c9d6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1189c9d9 mov ecx, dword ptr [0x118c5160] */
  ECX = (r32((uint32_t)(0x118c5160)));
  /* 1189c9df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1189c9e2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189c9e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189c9e7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1189c9ec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1189c9f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189c9f4 push eax */
  push32((uint32_t)(EAX));
  /* 1189c9f5 call dword ptr [0x118c6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6358))), 0x1189c9fbu);
  /* 1189c9fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189ca00 mov ecx, dword ptr [0x118c5158] */
  ECX = (r32((uint32_t)(0x118c5158)));
  /* 1189ca06 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189ca08 mov eax, dword ptr [0x118c5160] */
  EAX = (r32((uint32_t)(0x118c5160)));
  /* 1189ca0d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1189ca10 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1189ca12 mov edx, dword ptr [0x118c5160] */
  EDX = (r32((uint32_t)(0x118c5160)));
  /* 1189ca18 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1189ca1b mov eax, dword ptr [0x118c5160] */
  EAX = (r32((uint32_t)(0x118c5160)));
  /* 1189ca20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1189ca23 mov edx, dword ptr [0x118c5158] */
  EDX = (r32((uint32_t)(0x118c5158)));
  /* 1189ca29 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1189ca34 mov eax, dword ptr [0x118c5160] */
  EAX = (r32((uint32_t)(0x118c5160)));
  /* 1189ca39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1189ca3c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1189ca3f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1189ca42 mov eax, dword ptr [0x118c5160] */
  EAX = (r32((uint32_t)(0x118c5160)));
  /* 1189ca47 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1189ca4a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1189ca4d mov edx, dword ptr [0x118c5160] */
  EDX = (r32((uint32_t)(0x118c5160)));
  /* 1189ca53 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1189ca56 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1189ca5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189ca5c jne 0x1189ca72 */
  if (!C.zf) goto L_1189ca72;
  /* 1189ca5e mov edx, dword ptr [0x118c5160] */
  EDX = (r32((uint32_t)(0x118c5160)));
  /* 1189ca64 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1189ca67 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1189ca69 mov ecx, dword ptr [0x118c5160] */
  ECX = (r32((uint32_t)(0x118c5160)));
  /* 1189ca6f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1189ca72:;
  /* 1189ca72 mov edx, dword ptr [0x118c5160] */
  EDX = (r32((uint32_t)(0x118c5160)));
  /* 1189ca78 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ca7c jne 0x1189cae2 */
  if (!C.zf) goto L_1189cae2;
  /* 1189ca7e cmp dword ptr [0x118c5164], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c5164))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ca85 jle 0x1189cae2 */
  if ((C.zf||C.sf!=C.of)) goto L_1189cae2;
  /* 1189ca87 mov eax, dword ptr [0x118c5160] */
  EAX = (r32((uint32_t)(0x118c5160)));
  /* 1189ca8c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1189ca8f push ecx */
  push32((uint32_t)(ECX));
  /* 1189ca90 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189ca92 mov edx, dword ptr [0x118c516c] */
  EDX = (r32((uint32_t)(0x118c516c)));
  /* 1189ca98 push edx */
  push32((uint32_t)(EDX));
  /* 1189ca99 call dword ptr [0x118c6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6368))), 0x1189ca9fu);
  /* 1189ca9f mov eax, dword ptr [0x118c5164] */
  EAX = (r32((uint32_t)(0x118c5164)));
  /* 1189caa4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189caa7 mov ecx, dword ptr [0x118c5168] */
  ECX = (r32((uint32_t)(0x118c5168)));
  /* 1189caad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189caaf mov edx, dword ptr [0x118c5160] */
  EDX = (r32((uint32_t)(0x118c5160)));
  /* 1189cab5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cab8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189caba push ecx */
  push32((uint32_t)(ECX));
  /* 1189cabb mov eax, dword ptr [0x118c5160] */
  EAX = (r32((uint32_t)(0x118c5160)));
  /* 1189cac0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cac3 push eax */
  push32((uint32_t)(EAX));
  /* 1189cac4 mov ecx, dword ptr [0x118c5160] */
  ECX = (r32((uint32_t)(0x118c5160)));
  /* 1189caca push ecx */
  push32((uint32_t)(ECX));
  /* 1189cacb call 0x1189f0f0 */
  push32(0x1189cad0u); f_1189f0f0();
  /* 1189cad0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cad3 mov edx, dword ptr [0x118c5164] */
  EDX = (r32((uint32_t)(0x118c5164)));
  /* 1189cad9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189cadc mov dword ptr [0x118c5164], edx */
  w32((uint32_t)(0x118c5164), (EDX));
L_1189cae2:;
  /* 1189cae2 mov dword ptr [0x118c5160], 0 */
  w32((uint32_t)(0x118c5160), (0x0u));
L_1189caec:;
  /* 1189caec mov esp, ebp */
  ESP = (EBP);
  /* 1189caee pop ebp */
  EBP = (pop32());
  /* 1189caef ret  */
  ESPCHK(0x1189c9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caf0 @ 0x1189caf0 (1565 bytes, 343 insns) */
void f_1189caf0(void) {
  FTRACE(0x1189caf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189caf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189caf1 mov ebp, esp */
  EBP = (ESP);
  /* 1189caf3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189caf9 mov eax, dword ptr [0x118c5164] */
  EAX = (r32((uint32_t)(0x118c5164)));
  /* 1189cafe imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189cb01 push eax */
  push32((uint32_t)(EAX));
  /* 1189cb02 mov ecx, dword ptr [0x118c5168] */
  ECX = (r32((uint32_t)(0x118c5168)));
  /* 1189cb08 push ecx */
  push32((uint32_t)(ECX));
  /* 1189cb09 call dword ptr [0x118c6384] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6384))), 0x1189cb0fu);
  /* 1189cb0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189cb11 je 0x1189cb1b */
  if (C.zf) goto L_1189cb1b;
  /* 1189cb13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189cb16 jmp 0x1189d109 */
  goto L_1189d109;
L_1189cb1b:;
  /* 1189cb1b mov edx, dword ptr [0x118c5168] */
  EDX = (r32((uint32_t)(0x118c5168)));
  /* 1189cb21 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1189cb27 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1189cb31 jmp 0x1189cb42 */
  goto L_1189cb42;
L_1189cb33:;
  /* 1189cb33 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1189cb39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cb3c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1189cb42:;
  /* 1189cb42 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1189cb48 cmp ecx, dword ptr [0x118c5164] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c5164))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cb4e jge 0x1189d107 */
  if ((C.sf==C.of)) goto L_1189d107;
  /* 1189cb54 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1189cb5a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1189cb5d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1189cb63 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1189cb68 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1189cb6e push ecx */
  push32((uint32_t)(ECX));
  /* 1189cb6f call dword ptr [0x118c6384] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6384))), 0x1189cb75u);
  /* 1189cb75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189cb77 je 0x1189cb83 */
  if (C.zf) goto L_1189cb83;
  /* 1189cb79 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1189cb7e jmp 0x1189d109 */
  goto L_1189d109;
L_1189cb83:;
  /* 1189cb83 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1189cb89 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1189cb8c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1189cb92 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1189cb98 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cb9e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1189cba1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1189cba7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1189cbaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189cbad mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1189cbb7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1189cbc1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1189cbc8 jmp 0x1189cbd3 */
  goto L_1189cbd3;
L_1189cbca:;
  /* 1189cbca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189cbcd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cbd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1189cbd3:;
  /* 1189cbd3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cbd7 jge 0x1189d0cb */
  if ((C.sf==C.of)) goto L_1189d0cb;
  /* 1189cbdd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1189cbe7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1189cbf1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1189cbfb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1189cc05 jmp 0x1189cc16 */
  goto L_1189cc16;
L_1189cc07:;
  /* 1189cc07 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1189cc0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cc10 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1189cc16:;
  /* 1189cc16 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cc1d jge 0x1189cc32 */
  if ((C.sf==C.of)) goto L_1189cc32;
  /* 1189cc1f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1189cc25 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1189cc30 jmp 0x1189cc07 */
  goto L_1189cc07;
L_1189cc32:;
  /* 1189cc32 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cc36 jl 0x1189d06d */
  if ((C.sf!=C.of)) goto L_1189d06d;
  /* 1189cc3c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1189cc41 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1189cc47 push ecx */
  push32((uint32_t)(ECX));
  /* 1189cc48 call dword ptr [0x118c6384] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6384))), 0x1189cc4eu);
  /* 1189cc4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189cc50 je 0x1189cc5c */
  if (C.zf) goto L_1189cc5c;
  /* 1189cc52 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1189cc57 jmp 0x1189d109 */
  goto L_1189d109;
L_1189cc5c:;
  /* 1189cc5c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1189cc62 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1189cc65 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1189cc6f jmp 0x1189cc80 */
  goto L_1189cc80;
L_1189cc71:;
  /* 1189cc71 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1189cc77 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cc7a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1189cc80:;
  /* 1189cc80 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cc87 jge 0x1189ce04 */
  if ((C.sf==C.of)) goto L_1189ce04;
  /* 1189cc8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189cc90 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cc93 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1189cc99 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1189cc9f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cca5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1189ccab mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1189ccb1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ccb5 jne 0x1189ccc2 */
  if (!C.zf) goto L_1189ccc2;
  /* 1189ccb7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1189ccbd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ccc0 je 0x1189cccc */
  if (C.zf) goto L_1189cccc;
L_1189ccc2:;
  /* 1189ccc2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1189ccc7 jmp 0x1189d109 */
  goto L_1189d109;
L_1189cccc:;
  /* 1189cccc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1189ccd2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189ccd4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1189ccda mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1189cce0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1189cce6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1189ccec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1189ccef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189ccf1 je 0x1189cd29 */
  if (C.zf) goto L_1189cd29;
  /* 1189ccf3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1189ccf9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189ccfc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1189cd02 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cd0c jle 0x1189cd18 */
  if ((C.zf||C.sf!=C.of)) goto L_1189cd18;
  /* 1189cd0e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1189cd13 jmp 0x1189d109 */
  goto L_1189d109;
L_1189cd18:;
  /* 1189cd18 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1189cd1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cd21 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1189cd27 jmp 0x1189cd6b */
  goto L_1189cd6b;
L_1189cd29:;
  /* 1189cd29 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1189cd2f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1189cd32 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189cd35 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1189cd3b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cd42 jle 0x1189cd4e */
  if ((C.zf||C.sf!=C.of)) goto L_1189cd4e;
  /* 1189cd44 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1189cd4e:;
  /* 1189cd4e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1189cd54 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1189cd5b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cd5e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1189cd64 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1189cd6b:;
  /* 1189cd6b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cd72 jl 0x1189cd8d */
  if ((C.sf!=C.of)) goto L_1189cd8d;
  /* 1189cd74 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1189cd7a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1189cd7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189cd7f jne 0x1189cd8d */
  if (!C.zf) goto L_1189cd8d;
  /* 1189cd81 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cd8b jle 0x1189cd97 */
  if ((C.zf||C.sf!=C.of)) goto L_1189cd97;
L_1189cd8d:;
  /* 1189cd8d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1189cd92 jmp 0x1189d109 */
  goto L_1189d109;
L_1189cd97:;
  /* 1189cd97 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1189cd9d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cda3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1189cda6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cdac je 0x1189cdb8 */
  if (C.zf) goto L_1189cdb8;
  /* 1189cdae mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1189cdb3 jmp 0x1189d109 */
  goto L_1189d109;
L_1189cdb8:;
  /* 1189cdb8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1189cdbe add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cdc4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1189cdca mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1189cdd0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cdd6 jb 0x1189cccc */
  if (C.cf) goto L_1189cccc;
  /* 1189cddc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1189cde2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cde8 je 0x1189cdf4 */
  if (C.zf) goto L_1189cdf4;
  /* 1189cdea mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1189cdef jmp 0x1189d109 */
  goto L_1189d109;
L_1189cdf4:;
  /* 1189cdf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189cdf7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cdfc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189cdff jmp 0x1189cc71 */
  goto L_1189cc71;
L_1189ce04:;
  /* 1189ce04 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189ce07 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189ce09 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ce0f je 0x1189ce1b */
  if (C.zf) goto L_1189ce1b;
  /* 1189ce11 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1189ce16 jmp 0x1189d109 */
  goto L_1189d109;
L_1189ce1b:;
  /* 1189ce1b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189ce1e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1189ce24 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1189ce2b jmp 0x1189ce36 */
  goto L_1189ce36;
L_1189ce2d:;
  /* 1189ce2d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189ce30 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ce33 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1189ce36:;
  /* 1189ce36 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ce3a jge 0x1189d06d */
  if ((C.sf==C.of)) goto L_1189d06d;
  /* 1189ce40 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1189ce4a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1189ce50 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1189ce56:;
  /* 1189ce56 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1189ce5c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189ce5f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1189ce65 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1189ce6b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ce71 je 0x1189cf9a */
  if (C.zf) goto L_1189cf9a;
  /* 1189ce77 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189ce7a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1189ce80 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ce87 je 0x1189cf9a */
  if (C.zf) goto L_1189cf9a;
  /* 1189ce8d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1189ce93 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ce99 jb 0x1189ceae */
  if (C.cf) goto L_1189ceae;
  /* 1189ce9b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1189cea1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cea6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ceac jb 0x1189ceb8 */
  if (C.cf) goto L_1189ceb8;
L_1189ceae:;
  /* 1189ceae mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1189ceb3 jmp 0x1189d109 */
  goto L_1189d109;
L_1189ceb8:;
  /* 1189ceb8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1189cebe and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1189cec4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1189ceca mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1189ced0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ced3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1189ced6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ced9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cede mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1189cee4:;
  /* 1189cee4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189cee7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ceed je 0x1189cf0e */
  if (C.zf) goto L_1189cf0e;
  /* 1189ceef mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189cef2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cef8 jne 0x1189cefc */
  if (!C.zf) goto L_1189cefc;
  /* 1189cefa jmp 0x1189cf0e */
  goto L_1189cf0e;
L_1189cefc:;
  /* 1189cefc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ceff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189cf01 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1189cf04 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189cf07 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cf09 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1189cf0c jmp 0x1189cee4 */
  goto L_1189cee4;
L_1189cf0e:;
  /* 1189cf0e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189cf11 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cf17 jne 0x1189cf23 */
  if (!C.zf) goto L_1189cf23;
  /* 1189cf19 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1189cf1e jmp 0x1189d109 */
  goto L_1189d109;
L_1189cf23:;
  /* 1189cf23 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1189cf29 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189cf2b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1189cf2e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189cf31 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1189cf37 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cf3e jle 0x1189cf4a */
  if ((C.zf||C.sf!=C.of)) goto L_1189cf4a;
  /* 1189cf40 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1189cf4a:;
  /* 1189cf4a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1189cf50 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cf53 je 0x1189cf5f */
  if (C.zf) goto L_1189cf5f;
  /* 1189cf55 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1189cf5a jmp 0x1189d109 */
  goto L_1189d109;
L_1189cf5f:;
  /* 1189cf5f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1189cf65 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1189cf68 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cf6e je 0x1189cf7a */
  if (C.zf) goto L_1189cf7a;
  /* 1189cf70 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1189cf75 jmp 0x1189d109 */
  goto L_1189d109;
L_1189cf7a:;
  /* 1189cf7a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1189cf80 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1189cf86 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1189cf8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189cf8f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1189cf95 jmp 0x1189ce56 */
  goto L_1189ce56;
L_1189cf9a:;
  /* 1189cf9a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cfa1 je 0x1189d011 */
  if (C.zf) goto L_1189d011;
  /* 1189cfa3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189cfa7 jge 0x1189cfdb */
  if ((C.sf==C.of)) goto L_1189cfdb;
  /* 1189cfa9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189cfae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189cfb1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189cfb3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1189cfb9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189cfbb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1189cfc1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189cfc6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189cfc9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189cfcb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1189cfd1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189cfd3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1189cfd9 jmp 0x1189d011 */
  goto L_1189d011;
L_1189cfdb:;
  /* 1189cfdb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189cfde sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189cfe1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189cfe6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189cfe8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1189cfee or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189cff0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1189cff6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189cff9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189cffc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1189d001 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1189d003 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1189d009 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189d00b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1189d011:;
  /* 1189d011 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1189d017 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189d01a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d020 jne 0x1189d034 */
  if (!C.zf) goto L_1189d034;
  /* 1189d022 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189d025 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1189d02b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d032 je 0x1189d03e */
  if (C.zf) goto L_1189d03e;
L_1189d034:;
  /* 1189d034 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1189d039 jmp 0x1189d109 */
  goto L_1189d109;
L_1189d03e:;
  /* 1189d03e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1189d044 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1189d047 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d04d je 0x1189d059 */
  if (C.zf) goto L_1189d059;
  /* 1189d04f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1189d054 jmp 0x1189d109 */
  goto L_1189d109;
L_1189d059:;
  /* 1189d059 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1189d05f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d062 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1189d068 jmp 0x1189ce2d */
  goto L_1189ce2d;
L_1189d06d:;
  /* 1189d06d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189d070 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1189d076 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1189d07c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d080 jne 0x1189d09a */
  if (!C.zf) goto L_1189d09a;
  /* 1189d082 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189d085 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1189d08b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1189d091 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d098 je 0x1189d0a1 */
  if (C.zf) goto L_1189d0a1;
L_1189d09a:;
  /* 1189d09a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1189d09f jmp 0x1189d109 */
  goto L_1189d109;
L_1189d0a1:;
  /* 1189d0a1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1189d0a7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d0ad mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1189d0b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189d0b6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d0bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1189d0be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d0c1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1189d0c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1189d0c6 jmp 0x1189cbca */
  goto L_1189cbca;
L_1189d0cb:;
  /* 1189d0cb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1189d0d1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1189d0d7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d0d9 jne 0x1189d0ec */
  if (!C.zf) goto L_1189d0ec;
  /* 1189d0db mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1189d0e1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1189d0e7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d0ea je 0x1189d0f3 */
  if (C.zf) goto L_1189d0f3;
L_1189d0ec:;
  /* 1189d0ec mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1189d0f1 jmp 0x1189d109 */
  goto L_1189d109;
L_1189d0f3:;
  /* 1189d0f3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1189d0f9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d0fc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1189d102 jmp 0x1189cb33 */
  goto L_1189cb33;
L_1189d107:;
  /* 1189d107 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1189d109:;
  /* 1189d109 mov esp, ebp */
  ESP = (EBP);
  /* 1189d10b pop ebp */
  EBP = (pop32());
  /* 1189d10c ret  */
  ESPCHK(0x1189caf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d110 @ 0x1189d110 (250 bytes, 92 insns) */
void f_1189d110(void) {
  FTRACE(0x1189d110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189d110 push ebp */
  push32((uint32_t)(EBP));
  /* 1189d111 mov ebp, esp */
  EBP = (ESP);
  /* 1189d113 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189d116 push ebx */
  push32((uint32_t)(EBX));
  /* 1189d117 push esi */
  push32((uint32_t)(ESI));
  /* 1189d118 push edi */
  push32((uint32_t)(EDI));
  /* 1189d119 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1189d11c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1189d11f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1189d122 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1189d125:;
  /* 1189d125 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d129 jne 0x1189d149 */
  if (!C.zf) goto L_1189d149;
  /* 1189d12b push 0x118bf9e8 */
  push32((uint32_t)(0x118bf9e8u));
  /* 1189d130 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189d132 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1189d134 push 0x118bf9dc */
  push32((uint32_t)(0x118bf9dcu));
  /* 1189d139 push 2 */
  push32((uint32_t)(0x2u));
  /* 1189d13b call 0x118962c0 */
  push32(0x1189d140u); f_118962c0();
  /* 1189d140 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d143 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d146 jne 0x1189d149 */
  if (!C.zf) goto L_1189d149;
  /* 1189d148 int3  */
  x86_unimpl("int3 @ 0x1189d148");
L_1189d149:;
  /* 1189d149 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189d14b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189d14d jne 0x1189d125 */
  if (!C.zf) goto L_1189d125;
L_1189d14f:;
  /* 1189d14f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d153 jne 0x1189d173 */
  if (!C.zf) goto L_1189d173;
  /* 1189d155 push 0x118bf9cc */
  push32((uint32_t)(0x118bf9ccu));
  /* 1189d15a push 0 */
  push32((uint32_t)(0x0u));
  /* 1189d15c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1189d15e push 0x118bf9dc */
  push32((uint32_t)(0x118bf9dcu));
  /* 1189d163 push 2 */
  push32((uint32_t)(0x2u));
  /* 1189d165 call 0x118962c0 */
  push32(0x1189d16au); f_118962c0();
  /* 1189d16a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d16d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d170 jne 0x1189d173 */
  if (!C.zf) goto L_1189d173;
  /* 1189d172 int3  */
  x86_unimpl("int3 @ 0x1189d172");
L_1189d173:;
  /* 1189d173 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189d175 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189d177 jne 0x1189d14f */
  if (!C.zf) goto L_1189d14f;
  /* 1189d179 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d17c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1189d183 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189d189 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1189d18c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d18f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189d192 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189d194 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d197 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1189d19e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189d1a1 push ecx */
  push32((uint32_t)(ECX));
  /* 1189d1a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189d1a5 push edx */
  push32((uint32_t)(EDX));
  /* 1189d1a6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d1a9 push eax */
  push32((uint32_t)(EAX));
  /* 1189d1aa call 0x1189e190 */
  push32(0x1189d1afu); f_1189e190();
  /* 1189d1af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d1b2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1189d1b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d1b8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189d1bb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189d1be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d1c1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1189d1c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d1c7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d1cb jl 0x1189d1ef */
  if ((C.sf!=C.of)) goto L_1189d1ef;
  /* 1189d1cd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d1d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189d1d2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1189d1d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189d1d7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1189d1dd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1189d1e0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d1e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189d1e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d1e8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d1eb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1189d1ed jmp 0x1189d200 */
  goto L_1189d200;
L_1189d1ef:;
  /* 1189d1ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d1f2 push edx */
  push32((uint32_t)(EDX));
  /* 1189d1f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189d1f5 call 0x1189df10 */
  push32(0x1189d1fau); f_1189df10();
  /* 1189d1fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d1fd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1189d200:;
  /* 1189d200 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189d203 pop edi */
  EDI = (pop32());
  /* 1189d204 pop esi */
  ESI = (pop32());
  /* 1189d205 pop ebx */
  EBX = (pop32());
  /* 1189d206 mov esp, ebp */
  ESP = (EBP);
  /* 1189d208 pop ebp */
  EBP = (pop32());
  /* 1189d209 ret  */
  ESPCHK(0x1189d110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d210 @ 0x1189d210 (183 bytes, 58 insns) */
void f_1189d210(void) {
  FTRACE(0x1189d210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189d210 push ebp */
  push32((uint32_t)(EBP));
  /* 1189d211 mov ebp, esp */
  EBP = (ESP);
  /* 1189d213 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189d216 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189d219 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d21c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d221 ja 0x1189d23a */
  if ((!C.cf&&!C.zf)) goto L_1189d23a;
  /* 1189d223 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189d226 mov edx, dword ptr [0x118c1c98] */
  EDX = (r32((uint32_t)(0x118c1c98)));
  /* 1189d22c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189d22e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1189d232 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1189d235 jmp 0x1189d2c3 */
  goto L_1189d2c3;
L_1189d23a:;
  /* 1189d23a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189d23d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1189d240 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1189d246 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1189d24c mov edx, dword ptr [0x118c1c98] */
  EDX = (r32((uint32_t)(0x118c1c98)));
  /* 1189d252 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189d254 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1189d258 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1189d25d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189d25f je 0x1189d283 */
  if (C.zf) goto L_1189d283;
  /* 1189d261 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189d264 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1189d267 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1189d26d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1189d270 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1189d273 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1189d276 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1189d27a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1189d281 jmp 0x1189d294 */
  goto L_1189d294;
L_1189d283:;
  /* 1189d283 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1189d286 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1189d289 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1189d28d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1189d294:;
  /* 1189d294 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189d296 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189d298 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189d29a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1189d29d push ecx */
  push32((uint32_t)(ECX));
  /* 1189d29e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189d2a1 push edx */
  push32((uint32_t)(EDX));
  /* 1189d2a2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1189d2a5 push eax */
  push32((uint32_t)(EAX));
  /* 1189d2a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189d2a8 call 0x1189f430 */
  push32(0x1189d2adu); f_1189f430();
  /* 1189d2ad add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d2b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189d2b2 jne 0x1189d2b8 */
  if (!C.zf) goto L_1189d2b8;
  /* 1189d2b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189d2b6 jmp 0x1189d2c3 */
  goto L_1189d2c3;
L_1189d2b8:;
  /* 1189d2b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d2bb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189d2c0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1189d2c3:;
  /* 1189d2c3 mov esp, ebp */
  ESP = (EBP);
  /* 1189d2c5 pop ebp */
  EBP = (pop32());
  /* 1189d2c6 ret  */
  ESPCHK(0x1189d210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2d0 @ 0x1189d2d0 (836 bytes, 238 insns) */
void f_1189d2d0(void) {
  FTRACE(0x1189d2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189d2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189d2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1189d2d3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189d2d6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1189d2d8 call 0x1189ac00 */
  push32(0x1189d2ddu); f_1189ac00();
  /* 1189d2dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d2e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189d2e3 push eax */
  push32((uint32_t)(EAX));
  /* 1189d2e4 call 0x1189d620 */
  push32(0x1189d2e9u); f_1189d620();
  /* 1189d2e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d2ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1189d2ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189d2f2 cmp ecx, dword ptr [0x118c4ea4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c4ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d2f8 jne 0x1189d30b */
  if (!C.zf) goto L_1189d30b;
  /* 1189d2fa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1189d2fc call 0x1189aca0 */
  push32(0x1189d301u); f_1189aca0();
  /* 1189d301 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d304 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189d306 jmp 0x1189d610 */
  goto L_1189d610;
L_1189d30b:;
  /* 1189d30b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d30f jne 0x1189d32c */
  if (!C.zf) goto L_1189d32c;
  /* 1189d311 call 0x1189d700 */
  push32(0x1189d316u); f_1189d700();
  /* 1189d316 call 0x1189d780 */
  push32(0x1189d31bu); f_1189d780();
  /* 1189d31b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1189d31d call 0x1189aca0 */
  push32(0x1189d322u); f_1189aca0();
  /* 1189d322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d325 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189d327 jmp 0x1189d610 */
  goto L_1189d610;
L_1189d32c:;
  /* 1189d32c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1189d333 jmp 0x1189d33e */
  goto L_1189d33e;
L_1189d335:;
  /* 1189d335 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d338 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d33b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1189d33e:;
  /* 1189d33e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d342 jae 0x1189d48f */
  if (!C.cf) goto L_1189d48f;
  /* 1189d348 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d34b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189d34e mov ecx, dword ptr [eax + 0x118c1eb8] */
  ECX = (r32((uint32_t)(EAX + 0x118c1eb8)));
  /* 1189d354 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d357 jne 0x1189d48a */
  if (!C.zf) goto L_1189d48a;
  /* 1189d35d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1189d364 jmp 0x1189d36f */
  goto L_1189d36f;
L_1189d366:;
  /* 1189d366 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d369 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d36c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1189d36f:;
  /* 1189d36f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d376 jae 0x1189d384 */
  if (!C.cf) goto L_1189d384;
  /* 1189d378 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d37b mov byte ptr [eax + 0x118c5040], 0 */
  w8((uint32_t)(EAX + 0x118c5040), (0x0u));
  /* 1189d382 jmp 0x1189d366 */
  goto L_1189d366;
L_1189d384:;
  /* 1189d384 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1189d38b jmp 0x1189d396 */
  goto L_1189d396;
L_1189d38d:;
  /* 1189d38d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189d390 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d393 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1189d396:;
  /* 1189d396 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d39a jae 0x1189d417 */
  if (!C.cf) goto L_1189d417;
  /* 1189d39c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d39f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189d3a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189d3a5 lea ecx, [edx + eax*8 + 0x118c1ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x118c1ec8));
  /* 1189d3ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1189d3af jmp 0x1189d3ba */
  goto L_1189d3ba;
L_1189d3b1:;
  /* 1189d3b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189d3b4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d3b7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1189d3ba:;
  /* 1189d3ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189d3bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189d3bf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1189d3c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189d3c3 je 0x1189d412 */
  if (C.zf) goto L_1189d412;
  /* 1189d3c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189d3c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189d3ca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1189d3cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189d3cf je 0x1189d412 */
  if (C.zf) goto L_1189d412;
  /* 1189d3d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189d3d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189d3d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1189d3d8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1189d3db jmp 0x1189d3e6 */
  goto L_1189d3e6;
L_1189d3dd:;
  /* 1189d3dd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d3e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d3e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1189d3e6:;
  /* 1189d3e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189d3e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189d3eb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1189d3ee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d3f1 ja 0x1189d410 */
  if ((!C.cf&&!C.zf)) goto L_1189d410;
  /* 1189d3f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d3f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189d3f9 mov dl, byte ptr [eax + 0x118c5041] */
  DL = (r8((uint32_t)(EAX + 0x118c5041)));
  /* 1189d3ff or dl, byte ptr [ecx + 0x118c1eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x118c1eb0))); DL = (_r); fl_logic(_r,8); }
  /* 1189d405 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d408 mov byte ptr [eax + 0x118c5041], dl */
  w8((uint32_t)(EAX + 0x118c5041), (DL));
  /* 1189d40e jmp 0x1189d3dd */
  goto L_1189d3dd;
L_1189d410:;
  /* 1189d410 jmp 0x1189d3b1 */
  goto L_1189d3b1;
L_1189d412:;
  /* 1189d412 jmp 0x1189d38d */
  goto L_1189d38d;
L_1189d417:;
  /* 1189d417 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189d41a mov dword ptr [0x118c4ea4], ecx */
  w32((uint32_t)(0x118c4ea4), (ECX));
  /* 1189d420 mov dword ptr [0x118c4f2c], 1 */
  w32((uint32_t)(0x118c4f2c), (0x1u));
  /* 1189d42a mov edx, dword ptr [0x118c4ea4] */
  EDX = (r32((uint32_t)(0x118c4ea4)));
  /* 1189d430 push edx */
  push32((uint32_t)(EDX));
  /* 1189d431 call 0x1189d680 */
  push32(0x1189d436u); f_1189d680();
  /* 1189d436 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d439 mov dword ptr [0x118c5144], eax */
  w32((uint32_t)(0x118c5144), (EAX));
  /* 1189d43e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1189d445 jmp 0x1189d450 */
  goto L_1189d450;
L_1189d447:;
  /* 1189d447 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189d44a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d44d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1189d450:;
  /* 1189d450 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d454 jae 0x1189d474 */
  if (!C.cf) goto L_1189d474;
  /* 1189d456 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d459 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189d45c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189d45f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189d462 mov cx, word ptr [ecx + eax*2 + 0x118c1ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x118c1ebc)));
  /* 1189d46a mov word ptr [edx*2 + 0x118c4f20], cx */
  w16((uint32_t)(EDX*2 + 0x118c4f20), (CX));
  /* 1189d472 jmp 0x1189d447 */
  goto L_1189d447;
L_1189d474:;
  /* 1189d474 call 0x1189d780 */
  push32(0x1189d479u); f_1189d780();
  /* 1189d479 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1189d47b call 0x1189aca0 */
  push32(0x1189d480u); f_1189aca0();
  /* 1189d480 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d483 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189d485 jmp 0x1189d610 */
  goto L_1189d610;
L_1189d48a:;
  /* 1189d48a jmp 0x1189d335 */
  goto L_1189d335;
L_1189d48f:;
  /* 1189d48f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1189d492 push edx */
  push32((uint32_t)(EDX));
  /* 1189d493 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189d496 push eax */
  push32((uint32_t)(EAX));
  /* 1189d497 call dword ptr [0x118c6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6330))), 0x1189d49du);
  /* 1189d49d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d4a0 jne 0x1189d5e2 */
  if (!C.zf) goto L_1189d5e2;
  /* 1189d4a6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1189d4ad jmp 0x1189d4b8 */
  goto L_1189d4b8;
L_1189d4af:;
  /* 1189d4af mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d4b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d4b5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1189d4b8:;
  /* 1189d4b8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d4bf jae 0x1189d4cd */
  if (!C.cf) goto L_1189d4cd;
  /* 1189d4c1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d4c4 mov byte ptr [edx + 0x118c5040], 0 */
  w8((uint32_t)(EDX + 0x118c5040), (0x0u));
  /* 1189d4cb jmp 0x1189d4af */
  goto L_1189d4af;
L_1189d4cd:;
  /* 1189d4cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189d4d0 mov dword ptr [0x118c4ea4], eax */
  w32((uint32_t)(0x118c4ea4), (EAX));
  /* 1189d4d5 mov dword ptr [0x118c5144], 0 */
  w32((uint32_t)(0x118c5144), (0x0u));
  /* 1189d4df cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d4e3 jbe 0x1189d59e */
  if ((C.cf||C.zf)) goto L_1189d59e;
  /* 1189d4e9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1189d4ec mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1189d4ef jmp 0x1189d4fa */
  goto L_1189d4fa;
L_1189d4f1:;
  /* 1189d4f1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189d4f4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d4f7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1189d4fa:;
  /* 1189d4fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189d4fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189d4ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1189d501 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189d503 je 0x1189d54c */
  if (C.zf) goto L_1189d54c;
  /* 1189d505 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189d508 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189d50a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1189d50d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189d50f je 0x1189d54c */
  if (C.zf) goto L_1189d54c;
  /* 1189d511 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189d514 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189d516 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1189d518 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1189d51b jmp 0x1189d526 */
  goto L_1189d526;
L_1189d51d:;
  /* 1189d51d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d520 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d523 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1189d526:;
  /* 1189d526 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189d529 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189d52b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1189d52e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d531 ja 0x1189d54a */
  if ((!C.cf&&!C.zf)) goto L_1189d54a;
  /* 1189d533 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d536 mov cl, byte ptr [eax + 0x118c5041] */
  CL = (r8((uint32_t)(EAX + 0x118c5041)));
  /* 1189d53c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1189d53f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d542 mov byte ptr [edx + 0x118c5041], cl */
  w8((uint32_t)(EDX + 0x118c5041), (CL));
  /* 1189d548 jmp 0x1189d51d */
  goto L_1189d51d;
L_1189d54a:;
  /* 1189d54a jmp 0x1189d4f1 */
  goto L_1189d4f1;
L_1189d54c:;
  /* 1189d54c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1189d553 jmp 0x1189d55e */
  goto L_1189d55e;
L_1189d555:;
  /* 1189d555 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d558 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d55b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1189d55e:;
  /* 1189d55e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d565 jae 0x1189d57e */
  if (!C.cf) goto L_1189d57e;
  /* 1189d567 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d56a mov dl, byte ptr [ecx + 0x118c5041] */
  DL = (r8((uint32_t)(ECX + 0x118c5041)));
  /* 1189d570 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1189d573 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189d576 mov byte ptr [eax + 0x118c5041], dl */
  w8((uint32_t)(EAX + 0x118c5041), (DL));
  /* 1189d57c jmp 0x1189d555 */
  goto L_1189d555;
L_1189d57e:;
  /* 1189d57e mov ecx, dword ptr [0x118c4ea4] */
  ECX = (r32((uint32_t)(0x118c4ea4)));
  /* 1189d584 push ecx */
  push32((uint32_t)(ECX));
  /* 1189d585 call 0x1189d680 */
  push32(0x1189d58au); f_1189d680();
  /* 1189d58a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d58d mov dword ptr [0x118c5144], eax */
  w32((uint32_t)(0x118c5144), (EAX));
  /* 1189d592 mov dword ptr [0x118c4f2c], 1 */
  w32((uint32_t)(0x118c4f2c), (0x1u));
  /* 1189d59c jmp 0x1189d5a8 */
  goto L_1189d5a8;
L_1189d59e:;
  /* 1189d59e mov dword ptr [0x118c4f2c], 0 */
  w32((uint32_t)(0x118c4f2c), (0x0u));
L_1189d5a8:;
  /* 1189d5a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1189d5af jmp 0x1189d5ba */
  goto L_1189d5ba;
L_1189d5b1:;
  /* 1189d5b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189d5b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d5b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1189d5ba:;
  /* 1189d5ba cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d5be jae 0x1189d5cf */
  if (!C.cf) goto L_1189d5cf;
  /* 1189d5c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189d5c3 mov word ptr [eax*2 + 0x118c4f20], 0 */
  w16((uint32_t)(EAX*2 + 0x118c4f20), (0x0u));
  /* 1189d5cd jmp 0x1189d5b1 */
  goto L_1189d5b1;
L_1189d5cf:;
  /* 1189d5cf call 0x1189d780 */
  push32(0x1189d5d4u); f_1189d780();
  /* 1189d5d4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1189d5d6 call 0x1189aca0 */
  push32(0x1189d5dbu); f_1189aca0();
  /* 1189d5db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d5de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189d5e0 jmp 0x1189d610 */
  goto L_1189d610;
L_1189d5e2:;
  /* 1189d5e2 cmp dword ptr [0x118c39a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c39a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d5e9 je 0x1189d603 */
  if (C.zf) goto L_1189d603;
  /* 1189d5eb call 0x1189d700 */
  push32(0x1189d5f0u); f_1189d700();
  /* 1189d5f0 call 0x1189d780 */
  push32(0x1189d5f5u); f_1189d780();
  /* 1189d5f5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1189d5f7 call 0x1189aca0 */
  push32(0x1189d5fcu); f_1189aca0();
  /* 1189d5fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d5ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189d601 jmp 0x1189d610 */
  goto L_1189d610;
L_1189d603:;
  /* 1189d603 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1189d605 call 0x1189aca0 */
  push32(0x1189d60au); f_1189aca0();
  /* 1189d60a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d60d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1189d610:;
  /* 1189d610 mov esp, ebp */
  ESP = (EBP);
  /* 1189d612 pop ebp */
  EBP = (pop32());
  /* 1189d613 ret  */
  ESPCHK(0x1189d2d0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1189d620 (89 bytes, 21 insns) */
void f_1189d620(void) {
  FTRACE(0x1189d620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189d620 push ebp */
  push32((uint32_t)(EBP));
  /* 1189d621 mov ebp, esp */
  EBP = (ESP);
  /* 1189d623 mov dword ptr [0x118c39a8], 0 */
  w32((uint32_t)(0x118c39a8), (0x0u));
  /* 1189d62d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d631 jne 0x1189d645 */
  if (!C.zf) goto L_1189d645;
  /* 1189d633 mov dword ptr [0x118c39a8], 1 */
  w32((uint32_t)(0x118c39a8), (0x1u));
  /* 1189d63d call dword ptr [0x118c6328] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6328))), 0x1189d643u);
  /* 1189d643 jmp 0x1189d677 */
  goto L_1189d677;
L_1189d645:;
  /* 1189d645 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d649 jne 0x1189d65d */
  if (!C.zf) goto L_1189d65d;
  /* 1189d64b mov dword ptr [0x118c39a8], 1 */
  w32((uint32_t)(0x118c39a8), (0x1u));
  /* 1189d655 call dword ptr [0x118c6338] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6338))), 0x1189d65bu);
  /* 1189d65b jmp 0x1189d677 */
  goto L_1189d677;
L_1189d65d:;
  /* 1189d65d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d661 jne 0x1189d674 */
  if (!C.zf) goto L_1189d674;
  /* 1189d663 mov dword ptr [0x118c39a8], 1 */
  w32((uint32_t)(0x118c39a8), (0x1u));
  /* 1189d66d mov eax, dword ptr [0x118c39c8] */
  EAX = (r32((uint32_t)(0x118c39c8)));
  /* 1189d672 jmp 0x1189d677 */
  goto L_1189d677;
L_1189d674:;
  /* 1189d674 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1189d677:;
  /* 1189d677 pop ebp */
  EBP = (pop32());
  /* 1189d678 ret  */
  ESPCHK(0x1189d620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d680 @ 0x1189d680 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1189d680(void) {
  FTRACE(0x1189d680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189d680 push ebp */
  push32((uint32_t)(EBP));
  /* 1189d681 mov ebp, esp */
  EBP = (ESP);
  /* 1189d683 push ecx */
  push32((uint32_t)(ECX));
  /* 1189d684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189d687 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189d68a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d68d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189d693 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1189d696 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d69a ja 0x1189d6ca */
  if ((!C.cf&&!C.zf)) goto L_1189d6ca;
  /* 1189d69c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d69f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189d6a1 mov dl, byte ptr [eax + 0x1189d6e4] */
  DL = (r8((uint32_t)(EAX + 0x1189d6e4)));
  /* 1189d6a7 jmp dword ptr [edx*4 + 0x1189d6d0] */
  switch (EDX) {
    case 0: goto L_1189d6ae;
    case 1: goto L_1189d6b5;
    case 2: goto L_1189d6bc;
    case 3: goto L_1189d6c3;
    case 4: goto L_1189d6ca;
    default: x86_unimpl("switch@0x1189d6a7 out of table"); return;
  }
L_1189d6ae:;
  /* 1189d6ae mov eax, 0x411 */
  EAX = (0x411u);
  /* 1189d6b3 jmp 0x1189d6cc */
  goto L_1189d6cc;
L_1189d6b5:;
  /* 1189d6b5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1189d6ba jmp 0x1189d6cc */
  goto L_1189d6cc;
L_1189d6bc:;
  /* 1189d6bc mov eax, 0x412 */
  EAX = (0x412u);
  /* 1189d6c1 jmp 0x1189d6cc */
  goto L_1189d6cc;
L_1189d6c3:;
  /* 1189d6c3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1189d6c8 jmp 0x1189d6cc */
  goto L_1189d6cc;
L_1189d6ca:;
  /* 1189d6ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1189d6cc:;
  /* 1189d6cc mov esp, ebp */
  ESP = (EBP);
  /* 1189d6ce pop ebp */
  EBP = (pop32());
  /* 1189d6cf ret  */
  ESPCHK(0x1189d680u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1189d700 (116 bytes, 29 insns) */
void f_1189d700(void) {
  FTRACE(0x1189d700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189d700 push ebp */
  push32((uint32_t)(EBP));
  /* 1189d701 mov ebp, esp */
  EBP = (ESP);
  /* 1189d703 push ecx */
  push32((uint32_t)(ECX));
  /* 1189d704 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1189d70b jmp 0x1189d716 */
  goto L_1189d716;
L_1189d70d:;
  /* 1189d70d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d710 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d713 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1189d716:;
  /* 1189d716 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d71d jge 0x1189d72b */
  if ((C.sf==C.of)) goto L_1189d72b;
  /* 1189d71f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d722 mov byte ptr [ecx + 0x118c5040], 0 */
  w8((uint32_t)(ECX + 0x118c5040), (0x0u));
  /* 1189d729 jmp 0x1189d70d */
  goto L_1189d70d;
L_1189d72b:;
  /* 1189d72b mov dword ptr [0x118c4ea4], 0 */
  w32((uint32_t)(0x118c4ea4), (0x0u));
  /* 1189d735 mov dword ptr [0x118c4f2c], 0 */
  w32((uint32_t)(0x118c4f2c), (0x0u));
  /* 1189d73f mov dword ptr [0x118c5144], 0 */
  w32((uint32_t)(0x118c5144), (0x0u));
  /* 1189d749 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1189d750 jmp 0x1189d75b */
  goto L_1189d75b;
L_1189d752:;
  /* 1189d752 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d755 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d758 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1189d75b:;
  /* 1189d75b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d75f jge 0x1189d770 */
  if ((C.sf==C.of)) goto L_1189d770;
  /* 1189d761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d764 mov word ptr [eax*2 + 0x118c4f20], 0 */
  w16((uint32_t)(EAX*2 + 0x118c4f20), (0x0u));
  /* 1189d76e jmp 0x1189d752 */
  goto L_1189d752;
L_1189d770:;
  /* 1189d770 mov esp, ebp */
  ESP = (EBP);
  /* 1189d772 pop ebp */
  EBP = (pop32());
  /* 1189d773 ret  */
  ESPCHK(0x1189d700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d780 @ 0x1189d780 (770 bytes, 175 insns) */
void f_1189d780(void) {
  FTRACE(0x1189d780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189d780 push ebp */
  push32((uint32_t)(EBP));
  /* 1189d781 mov ebp, esp */
  EBP = (ESP);
  /* 1189d783 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189d789 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1189d78f push eax */
  push32((uint32_t)(EAX));
  /* 1189d790 mov ecx, dword ptr [0x118c4ea4] */
  ECX = (r32((uint32_t)(0x118c4ea4)));
  /* 1189d796 push ecx */
  push32((uint32_t)(ECX));
  /* 1189d797 call dword ptr [0x118c6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6330))), 0x1189d79du);
  /* 1189d79d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d7a0 jne 0x1189d9b9 */
  if (!C.zf) goto L_1189d9b9;
  /* 1189d7a6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1189d7b0 jmp 0x1189d7c1 */
  goto L_1189d7c1;
L_1189d7b2:;
  /* 1189d7b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d7b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d7bb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1189d7c1:;
  /* 1189d7c1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d7cb jae 0x1189d7e2 */
  if (!C.cf) goto L_1189d7e2;
  /* 1189d7cd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d7d3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1189d7d9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1189d7e0 jmp 0x1189d7b2 */
  goto L_1189d7b2;
L_1189d7e2:;
  /* 1189d7e2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1189d7e9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1189d7ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189d7f2 jmp 0x1189d7fd */
  goto L_1189d7fd;
L_1189d7f4:;
  /* 1189d7f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d7f7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d7fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1189d7fd:;
  /* 1189d7fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d800 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189d802 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1189d804 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189d806 je 0x1189d848 */
  if (C.zf) goto L_1189d848;
  /* 1189d808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d80b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189d80d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1189d80f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1189d815 jmp 0x1189d826 */
  goto L_1189d826;
L_1189d817:;
  /* 1189d817 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d81d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d820 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1189d826:;
  /* 1189d826 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189d829 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189d82b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1189d82e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d834 ja 0x1189d846 */
  if ((!C.cf&&!C.zf)) goto L_1189d846;
  /* 1189d836 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d83c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1189d844 jmp 0x1189d817 */
  goto L_1189d817;
L_1189d846:;
  /* 1189d846 jmp 0x1189d7f4 */
  goto L_1189d7f4;
L_1189d848:;
  /* 1189d848 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189d84a mov eax, dword ptr [0x118c5144] */
  EAX = (r32((uint32_t)(0x118c5144)));
  /* 1189d84f push eax */
  push32((uint32_t)(EAX));
  /* 1189d850 mov ecx, dword ptr [0x118c4ea4] */
  ECX = (r32((uint32_t)(0x118c4ea4)));
  /* 1189d856 push ecx */
  push32((uint32_t)(ECX));
  /* 1189d857 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1189d85d push edx */
  push32((uint32_t)(EDX));
  /* 1189d85e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1189d863 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1189d869 push eax */
  push32((uint32_t)(EAX));
  /* 1189d86a push 1 */
  push32((uint32_t)(0x1u));
  /* 1189d86c call 0x1189f430 */
  push32(0x1189d871u); f_1189f430();
  /* 1189d871 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d874 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189d876 mov ecx, dword ptr [0x118c4ea4] */
  ECX = (r32((uint32_t)(0x118c4ea4)));
  /* 1189d87c push ecx */
  push32((uint32_t)(ECX));
  /* 1189d87d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1189d882 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1189d888 push edx */
  push32((uint32_t)(EDX));
  /* 1189d889 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1189d88e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1189d894 push eax */
  push32((uint32_t)(EAX));
  /* 1189d895 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1189d89a mov ecx, dword ptr [0x118c5144] */
  ECX = (r32((uint32_t)(0x118c5144)));
  /* 1189d8a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1189d8a1 call 0x1189f5f0 */
  push32(0x1189d8a6u); f_1189f5f0();
  /* 1189d8a6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d8a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189d8ab mov edx, dword ptr [0x118c4ea4] */
  EDX = (r32((uint32_t)(0x118c4ea4)));
  /* 1189d8b1 push edx */
  push32((uint32_t)(EDX));
  /* 1189d8b2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1189d8b7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1189d8bd push eax */
  push32((uint32_t)(EAX));
  /* 1189d8be push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1189d8c3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1189d8c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1189d8ca push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1189d8cf mov edx, dword ptr [0x118c5144] */
  EDX = (r32((uint32_t)(0x118c5144)));
  /* 1189d8d5 push edx */
  push32((uint32_t)(EDX));
  /* 1189d8d6 call 0x1189f5f0 */
  push32(0x1189d8dbu); f_1189f5f0();
  /* 1189d8db add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d8de mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1189d8e8 jmp 0x1189d8f9 */
  goto L_1189d8f9;
L_1189d8ea:;
  /* 1189d8ea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d8f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d8f3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1189d8f9:;
  /* 1189d8f9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d903 jae 0x1189d9b4 */
  if (!C.cf) goto L_1189d9b4;
  /* 1189d909 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d90f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189d911 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1189d919 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1189d91c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189d91e je 0x1189d956 */
  if (C.zf) goto L_1189d956;
  /* 1189d920 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d926 mov cl, byte ptr [eax + 0x118c5041] */
  CL = (r8((uint32_t)(EAX + 0x118c5041)));
  /* 1189d92c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1189d92f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d935 mov byte ptr [edx + 0x118c5041], cl */
  w8((uint32_t)(EDX + 0x118c5041), (CL));
  /* 1189d93b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d941 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d947 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1189d94e mov byte ptr [eax + 0x118c4f40], dl */
  w8((uint32_t)(EAX + 0x118c4f40), (DL));
  /* 1189d954 jmp 0x1189d9af */
  goto L_1189d9af;
L_1189d956:;
  /* 1189d956 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d95c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189d95e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1189d966 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1189d969 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189d96b je 0x1189d9a2 */
  if (C.zf) goto L_1189d9a2;
  /* 1189d96d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d973 mov al, byte ptr [edx + 0x118c5041] */
  AL = (r8((uint32_t)(EDX + 0x118c5041)));
  /* 1189d979 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1189d97b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d981 mov byte ptr [ecx + 0x118c5041], al */
  w8((uint32_t)(ECX + 0x118c5041), (AL));
  /* 1189d987 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d98d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d993 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1189d99a mov byte ptr [edx + 0x118c4f40], cl */
  w8((uint32_t)(EDX + 0x118c4f40), (CL));
  /* 1189d9a0 jmp 0x1189d9af */
  goto L_1189d9af;
L_1189d9a2:;
  /* 1189d9a2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d9a8 mov byte ptr [edx + 0x118c4f40], 0 */
  w8((uint32_t)(EDX + 0x118c4f40), (0x0u));
L_1189d9af:;
  /* 1189d9af jmp 0x1189d8ea */
  goto L_1189d8ea;
L_1189d9b4:;
  /* 1189d9b4 jmp 0x1189da7e */
  goto L_1189da7e;
L_1189d9b9:;
  /* 1189d9b9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1189d9c3 jmp 0x1189d9d4 */
  goto L_1189d9d4;
L_1189d9c5:;
  /* 1189d9c5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d9cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189d9ce mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1189d9d4:;
  /* 1189d9d4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d9de jae 0x1189da7e */
  if (!C.cf) goto L_1189da7e;
  /* 1189d9e4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d9eb jb 0x1189da28 */
  if (C.cf) goto L_1189da28;
  /* 1189d9ed cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189d9f4 ja 0x1189da28 */
  if ((!C.cf&&!C.zf)) goto L_1189da28;
  /* 1189d9f6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189d9fc mov dl, byte ptr [ecx + 0x118c5041] */
  DL = (r8((uint32_t)(ECX + 0x118c5041)));
  /* 1189da02 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1189da05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189da0b mov byte ptr [eax + 0x118c5041], dl */
  w8((uint32_t)(EAX + 0x118c5041), (DL));
  /* 1189da11 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189da17 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189da1a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189da20 mov byte ptr [edx + 0x118c4f40], cl */
  w8((uint32_t)(EDX + 0x118c4f40), (CL));
  /* 1189da26 jmp 0x1189da79 */
  goto L_1189da79;
L_1189da28:;
  /* 1189da28 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189da2f jb 0x1189da6c */
  if (C.cf) goto L_1189da6c;
  /* 1189da31 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189da38 ja 0x1189da6c */
  if ((!C.cf&&!C.zf)) goto L_1189da6c;
  /* 1189da3a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189da40 mov cl, byte ptr [eax + 0x118c5041] */
  CL = (r8((uint32_t)(EAX + 0x118c5041)));
  /* 1189da46 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1189da49 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189da4f mov byte ptr [edx + 0x118c5041], cl */
  w8((uint32_t)(EDX + 0x118c5041), (CL));
  /* 1189da55 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189da5b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189da5e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189da64 mov byte ptr [ecx + 0x118c4f40], al */
  w8((uint32_t)(ECX + 0x118c4f40), (AL));
  /* 1189da6a jmp 0x1189da79 */
  goto L_1189da79;
L_1189da6c:;
  /* 1189da6c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1189da72 mov byte ptr [edx + 0x118c4f40], 0 */
  w8((uint32_t)(EDX + 0x118c4f40), (0x0u));
L_1189da79:;
  /* 1189da79 jmp 0x1189d9c5 */
  goto L_1189d9c5;
L_1189da7e:;
  /* 1189da7e mov esp, ebp */
  ESP = (EBP);
  /* 1189da80 pop ebp */
  EBP = (pop32());
  /* 1189da81 ret  */
  ESPCHK(0x1189d780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da90 @ 0x1189da90 (23 bytes, 9 insns) */
void f_1189da90(void) {
  FTRACE(0x1189da90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189da90 push ebp */
  push32((uint32_t)(EBP));
  /* 1189da91 mov ebp, esp */
  EBP = (ESP);
  /* 1189da93 cmp dword ptr [0x118c4f2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c4f2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189da9a je 0x1189daa3 */
  if (C.zf) goto L_1189daa3;
  /* 1189da9c mov eax, dword ptr [0x118c4ea4] */
  EAX = (r32((uint32_t)(0x118c4ea4)));
  /* 1189daa1 jmp 0x1189daa5 */
  goto L_1189daa5;
L_1189daa3:;
  /* 1189daa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1189daa5:;
  /* 1189daa5 pop ebp */
  EBP = (pop32());
  /* 1189daa6 ret  */
  ESPCHK(0x1189da90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dab0 @ 0x1189dab0 (34 bytes, 10 insns) */
void f_1189dab0(void) {
  FTRACE(0x1189dab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189dab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189dab1 mov ebp, esp */
  EBP = (ESP);
  /* 1189dab3 cmp dword ptr [0x118c52f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c52f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189daba jne 0x1189dad0 */
  if (!C.zf) goto L_1189dad0;
  /* 1189dabc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1189dabe call 0x1189d2d0 */
  push32(0x1189dac3u); f_1189d2d0();
  /* 1189dac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189dac6 mov dword ptr [0x118c52f0], 1 */
  w32((uint32_t)(0x118c52f0), (0x1u));
L_1189dad0:;
  /* 1189dad0 pop ebp */
  EBP = (pop32());
  /* 1189dad1 ret  */
  ESPCHK(0x1189dab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dae0 @ 0x1189dae0 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1189dae0(void) {
  FTRACE(0x1189dae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189dae0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189dae1 mov ebp, esp */
  EBP = (ESP);
  /* 1189dae3 push edi */
  push32((uint32_t)(EDI));
  /* 1189dae4 push esi */
  push32((uint32_t)(ESI));
  /* 1189dae5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1189dae8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189daeb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1189daee mov eax, ecx */
  EAX = (ECX);
  /* 1189daf0 mov edx, ecx */
  EDX = (ECX);
  /* 1189daf2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189daf4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189daf6 jbe 0x1189db00 */
  if ((C.cf||C.zf)) goto L_1189db00;
  /* 1189daf8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189dafa jb 0x1189dc78 */
  if (C.cf) goto L_1189dc78;
L_1189db00:;
  /* 1189db00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1189db06 jne 0x1189db1c */
  if (!C.zf) goto L_1189db1c;
  /* 1189db08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189db0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1189db0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189db11 jb 0x1189db3c */
  if (C.cf) goto L_1189db3c;
  /* 1189db13 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189db15 jmp dword ptr [edx*4 + 0x1189dc28] */
  switch (EDX) {
    case 0: goto L_1189dc38;
    case 1: goto L_1189dc40;
    case 2: goto L_1189dc4c;
    case 3: goto L_1189dc60;
    default: x86_unimpl("switch@0x1189db15 out of table"); return;
  }
L_1189db1c:;
  /* 1189db1c mov eax, edi */
  EAX = (EDI);
  /* 1189db1e mov edx, 3 */
  EDX = (0x3u);
  /* 1189db23 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189db26 jb 0x1189db34 */
  if (C.cf) goto L_1189db34;
  /* 1189db28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1189db2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189db2d jmp dword ptr [eax*4 + 0x1189db40] */
  switch (EAX) {
    case 1: goto L_1189db50;
    case 2: goto L_1189db7c;
    case 3: goto L_1189dba0;
    default: x86_unimpl("switch@0x1189db2d out of table"); return;
  }
L_1189db34:;
  /* 1189db34 jmp dword ptr [ecx*4 + 0x1189dc38] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1189dc38)))); return;
  /* 1189db3b nop  */
  /* nop */
L_1189db3c:;
  /* 1189db3c jmp dword ptr [ecx*4 + 0x1189dbbc] */
  switch (ECX) {
    case 0: goto L_1189dc1f;
    case 1: goto L_1189dc0c;
    case 2: goto L_1189dc04;
    case 3: goto L_1189dbfc;
    case 4: goto L_1189dbf4;
    case 5: goto L_1189dbec;
    case 6: goto L_1189dbe4;
    case 7: goto L_1189dbdc;
    default: x86_unimpl("switch@0x1189db3c out of table"); return;
  }
  /* 1189db43 nop  */
  /* nop */
L_1189db50:;
  /* 1189db50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1189db52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1189db54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189db56 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1189db59 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1189db5c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1189db5f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189db62 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1189db65 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189db68 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189db6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189db6e jb 0x1189db3c */
  if (C.cf) goto L_1189db3c;
  /* 1189db70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189db72 jmp dword ptr [edx*4 + 0x1189dc28] */
  switch (EDX) {
    case 0: goto L_1189dc38;
    case 1: goto L_1189dc40;
    case 2: goto L_1189dc4c;
    case 3: goto L_1189dc60;
    default: x86_unimpl("switch@0x1189db72 out of table"); return;
  }
  /* 1189db79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1189db7c:;
  /* 1189db7c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1189db7e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1189db80 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189db82 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1189db85 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189db88 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1189db8b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189db8e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189db91 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189db94 jb 0x1189db3c */
  if (C.cf) goto L_1189db3c;
  /* 1189db96 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189db98 jmp dword ptr [edx*4 + 0x1189dc28] */
  switch (EDX) {
    case 0: goto L_1189dc38;
    case 1: goto L_1189dc40;
    case 2: goto L_1189dc4c;
    case 3: goto L_1189dc60;
    default: x86_unimpl("switch@0x1189db98 out of table"); return;
  }
  /* 1189db9f nop  */
  /* nop */
L_1189dba0:;
  /* 1189dba0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1189dba2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1189dba4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189dba6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1189dba7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189dbaa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1189dbab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189dbae jb 0x1189db3c */
  if (C.cf) goto L_1189db3c;
  /* 1189dbb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189dbb2 jmp dword ptr [edx*4 + 0x1189dc28] */
  switch (EDX) {
    case 0: goto L_1189dc38;
    case 1: goto L_1189dc40;
    case 2: goto L_1189dc4c;
    case 3: goto L_1189dc60;
    default: x86_unimpl("switch@0x1189dbb2 out of table"); return;
  }
  /* 1189dbb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1189dbdc:;
  /* 1189dbdc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1189dbe0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1189dbe4:;
  /* 1189dbe4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1189dbe8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1189dbec:;
  /* 1189dbec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1189dbf0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1189dbf4:;
  /* 1189dbf4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1189dbf8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1189dbfc:;
  /* 1189dbfc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1189dc00 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1189dc04:;
  /* 1189dc04 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1189dc08 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1189dc0c:;
  /* 1189dc0c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1189dc10 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1189dc14 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1189dc1b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189dc1d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1189dc1f:;
  /* 1189dc1f jmp dword ptr [edx*4 + 0x1189dc28] */
  switch (EDX) {
    case 0: goto L_1189dc38;
    case 1: goto L_1189dc40;
    case 2: goto L_1189dc4c;
    case 3: goto L_1189dc60;
    default: x86_unimpl("switch@0x1189dc1f out of table"); return;
  }
  /* 1189dc26 mov edi, edi */
  EDI = (EDI);
L_1189dc38:;
  /* 1189dc38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189dc3b pop esi */
  ESI = (pop32());
  /* 1189dc3c pop edi */
  EDI = (pop32());
  /* 1189dc3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189dc3e ret  */
  ESPCHK(0x1189dae0u, _esp0);
  ESP += 4; return;
  /* 1189dc3f nop  */
  /* nop */
L_1189dc40:;
  /* 1189dc40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1189dc42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189dc44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189dc47 pop esi */
  ESI = (pop32());
  /* 1189dc48 pop edi */
  EDI = (pop32());
  /* 1189dc49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189dc4a ret  */
  ESPCHK(0x1189dae0u, _esp0);
  ESP += 4; return;
  /* 1189dc4b nop  */
  /* nop */
L_1189dc4c:;
  /* 1189dc4c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1189dc4e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189dc50 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1189dc53 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1189dc56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189dc59 pop esi */
  ESI = (pop32());
  /* 1189dc5a pop edi */
  EDI = (pop32());
  /* 1189dc5b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189dc5c ret  */
  ESPCHK(0x1189dae0u, _esp0);
  ESP += 4; return;
  /* 1189dc5d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1189dc60:;
  /* 1189dc60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1189dc62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189dc64 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1189dc67 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1189dc6a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1189dc6d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1189dc70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189dc73 pop esi */
  ESI = (pop32());
  /* 1189dc74 pop edi */
  EDI = (pop32());
  /* 1189dc75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189dc76 ret  */
  ESPCHK(0x1189dae0u, _esp0);
  ESP += 4; return;
  /* 1189dc77 nop  */
  /* nop */
L_1189dc78:;
  /* 1189dc78 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1189dc7c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1189dc80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1189dc86 jne 0x1189dcac */
  if (!C.zf) goto L_1189dcac;
  /* 1189dc88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189dc8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1189dc8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189dc91 jb 0x1189dca0 */
  if (C.cf) goto L_1189dca0;
  /* 1189dc93 std  */
  C.df=1;
  /* 1189dc94 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189dc96 cld  */
  C.df=0;
  /* 1189dc97 jmp dword ptr [edx*4 + 0x1189ddc0] */
  switch (EDX) {
    case 0: goto L_1189ddd0;
    case 1: goto L_1189ddd8;
    case 2: goto L_1189dde8;
    case 3: goto L_1189ddfc;
    default: x86_unimpl("switch@0x1189dc97 out of table"); return;
  }
  /* 1189dc9e mov edi, edi */
  EDI = (EDI);
L_1189dca0:;
  /* 1189dca0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1189dca2 jmp dword ptr [ecx*4 + 0x1189dd70] */
  switch (ECX) {
    case 0: goto L_1189ddb7;
    default: x86_unimpl("switch@0x1189dca2 out of table"); return;
  }
  /* 1189dca9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1189dcac:;
  /* 1189dcac mov eax, edi */
  EAX = (EDI);
  /* 1189dcae mov edx, 3 */
  EDX = (0x3u);
  /* 1189dcb3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189dcb6 jb 0x1189dcc4 */
  if (C.cf) goto L_1189dcc4;
  /* 1189dcb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1189dcbb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189dcbd jmp dword ptr [eax*4 + 0x1189dcc8] */
  switch (EAX) {
    case 1: goto L_1189dcd8;
    case 2: goto L_1189dcf8;
    case 3: goto L_1189dd20;
    default: x86_unimpl("switch@0x1189dcbd out of table"); return;
  }
L_1189dcc4:;
  /* 1189dcc4 jmp dword ptr [ecx*4 + 0x1189ddc0] */
  switch (ECX) {
    case 0: goto L_1189ddd0;
    case 1: goto L_1189ddd8;
    case 2: goto L_1189dde8;
    case 3: goto L_1189ddfc;
    default: x86_unimpl("switch@0x1189dcc4 out of table"); return;
  }
  /* 1189dccb nop  */
  /* nop */
L_1189dcd8:;
  /* 1189dcd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1189dcdb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1189dcdd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1189dce0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1189dce1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189dce4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1189dce5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189dce8 jb 0x1189dca0 */
  if (C.cf) goto L_1189dca0;
  /* 1189dcea std  */
  C.df=1;
  /* 1189dceb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189dced cld  */
  C.df=0;
  /* 1189dcee jmp dword ptr [edx*4 + 0x1189ddc0] */
  switch (EDX) {
    case 0: goto L_1189ddd0;
    case 1: goto L_1189ddd8;
    case 2: goto L_1189dde8;
    case 3: goto L_1189ddfc;
    default: x86_unimpl("switch@0x1189dcee out of table"); return;
  }
  /* 1189dcf5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1189dcf8:;
  /* 1189dcf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1189dcfb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1189dcfd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1189dd00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1189dd03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189dd06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1189dd09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189dd0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189dd0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189dd12 jb 0x1189dca0 */
  if (C.cf) goto L_1189dca0;
  /* 1189dd14 std  */
  C.df=1;
  /* 1189dd15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189dd17 cld  */
  C.df=0;
  /* 1189dd18 jmp dword ptr [edx*4 + 0x1189ddc0] */
  switch (EDX) {
    case 0: goto L_1189ddd0;
    case 1: goto L_1189ddd8;
    case 2: goto L_1189dde8;
    case 3: goto L_1189ddfc;
    default: x86_unimpl("switch@0x1189dd18 out of table"); return;
  }
  /* 1189dd1f nop  */
  /* nop */
L_1189dd20:;
  /* 1189dd20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1189dd23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1189dd25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1189dd28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1189dd2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1189dd2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1189dd31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189dd34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
L_1189dd37:;
  /* 1189dd37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189dd3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189dd3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189dd40 jb 0x1189dca0 */
  if (C.cf) goto L_1189dca0;
  /* 1189dd46 std  */
  C.df=1;
  /* 1189dd47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189dd49 cld  */
  C.df=0;
  /* 1189dd4a jmp dword ptr [edx*4 + 0x1189ddc0] */
  switch (EDX) {
    case 0: goto L_1189ddd0;
    case 1: goto L_1189ddd8;
    case 2: goto L_1189dde8;
    case 3: goto L_1189ddfc;
    default: x86_unimpl("switch@0x1189dd4a out of table"); return;
  }
  /* 1189dd51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1189dd54 je 0x1189dd33 */
  if (C.zf) goto L_1189dd33;
  /* 1189dd56 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189dd58 jl 0x1189dd37 */
  if ((C.sf!=C.of)) goto L_1189dd37;
  /* 1189dd5a mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189dd5c test ch, bl */
  { uint32_t _r=(C.c.b.h)&(BL); fl_logic(_r,8); }
  /* 1189dd5e mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189dd60 mov ebp, ds */
  EBP = (C.seg_ds);
  /* 1189dd62 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189dd64 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1189dd65 fisttp qword ptr [ecx - 0x762263ef] */
  x86_unimpl("fisttp @ 0x1189dd65");
  /* 1189dd6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1189dd6e mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189dd74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1189dd78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1189dd7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1189dd80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1189dd84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1189dd88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1189dd8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1189dd90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1189dd94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1189dd98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1189dd9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1189dda0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1189dda4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1189dda8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1189ddac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1189ddb3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ddb5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1189ddb7:;
  /* 1189ddb7 jmp dword ptr [edx*4 + 0x1189ddc0] */
  switch (EDX) {
    case 0: goto L_1189ddd0;
    case 1: goto L_1189ddd8;
    case 2: goto L_1189dde8;
    case 3: goto L_1189ddfc;
    default: x86_unimpl("switch@0x1189ddb7 out of table"); return;
  }
  /* 1189ddbe mov edi, edi */
  EDI = (EDI);
L_1189ddd0:;
  /* 1189ddd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189ddd3 pop esi */
  ESI = (pop32());
  /* 1189ddd4 pop edi */
  EDI = (pop32());
  /* 1189ddd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189ddd6 ret  */
  ESPCHK(0x1189dae0u, _esp0);
  ESP += 4; return;
  /* 1189ddd7 nop  */
  /* nop */
L_1189ddd8:;
  /* 1189ddd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1189dddb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1189ddde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189dde1 pop esi */
  ESI = (pop32());
  /* 1189dde2 pop edi */
  EDI = (pop32());
  /* 1189dde3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189dde4 ret  */
  ESPCHK(0x1189dae0u, _esp0);
  ESP += 4; return;
  /* 1189dde5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1189dde8:;
  /* 1189dde8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1189ddeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1189ddee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1189ddf1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1189ddf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189ddf7 pop esi */
  ESI = (pop32());
  /* 1189ddf8 pop edi */
  EDI = (pop32());
  /* 1189ddf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189ddfa ret  */
  ESPCHK(0x1189dae0u, _esp0);
  ESP += 4; return;
  /* 1189ddfb nop  */
  /* nop */
L_1189ddfc:;
  /* 1189ddfc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1189ddff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1189de02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1189de05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1189de08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1189de0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1189de0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189de11 pop esi */
  ESI = (pop32());
  /* 1189de12 pop edi */
  EDI = (pop32());
  /* 1189de13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189de14 ret  */
  ESPCHK(0x1189dae0u, _esp0);
  ESP += 4; return;
L_1189dd33: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1189dd33 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x1189de20 (104 bytes, 43 insns) */
void f_1189de20(void) {
  FTRACE(0x1189de20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189de20 push ebx */
  push32((uint32_t)(EBX));
  /* 1189de21 push esi */
  push32((uint32_t)(ESI));
  /* 1189de22 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1189de26 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189de28 jne 0x1189de42 */
  if (!C.zf) goto L_1189de42;
  /* 1189de2a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1189de2e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1189de32 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189de34 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1189de36 mov ebx, eax */
  EBX = (EAX);
  /* 1189de38 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1189de3c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1189de3e mov edx, ebx */
  EDX = (EBX);
  /* 1189de40 jmp 0x1189de83 */
  goto L_1189de83;
L_1189de42:;
  /* 1189de42 mov ecx, eax */
  ECX = (EAX);
  /* 1189de44 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1189de48 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1189de4c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1189de50:;
  /* 1189de50 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1189de52 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1189de54 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1189de56 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1189de58 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189de5a jne 0x1189de50 */
  if (!C.zf) goto L_1189de50;
  /* 1189de5c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1189de5e mov esi, eax */
  ESI = (EAX);
  /* 1189de60 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1189de64 mov ecx, eax */
  ECX = (EAX);
  /* 1189de66 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1189de6a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1189de6c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189de6e jb 0x1189de7e */
  if (C.cf) goto L_1189de7e;
  /* 1189de70 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189de74 ja 0x1189de7e */
  if ((!C.cf&&!C.zf)) goto L_1189de7e;
  /* 1189de76 jb 0x1189de7f */
  if (C.cf) goto L_1189de7f;
  /* 1189de78 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189de7c jbe 0x1189de7f */
  if ((C.cf||C.zf)) goto L_1189de7f;
L_1189de7e:;
  /* 1189de7e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1189de7f:;
  /* 1189de7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189de81 mov eax, esi */
  EAX = (ESI);
L_1189de83:;
  /* 1189de83 pop esi */
  ESI = (pop32());
  /* 1189de84 pop ebx */
  EBX = (pop32());
  /* 1189de85 ret 0x10 */
  ESPCHK(0x1189de20u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1189de90 (117 bytes, 44 insns) */
void f_1189de90(void) {
  FTRACE(0x1189de90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189de90 push ebx */
  push32((uint32_t)(EBX));
  /* 1189de91 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1189de95 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189de97 jne 0x1189deb1 */
  if (!C.zf) goto L_1189deb1;
  /* 1189de99 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1189de9d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1189dea1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189dea3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1189dea5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1189dea9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1189deab mov eax, edx */
  EAX = (EDX);
  /* 1189dead xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189deaf jmp 0x1189df01 */
  goto L_1189df01;
L_1189deb1:;
  /* 1189deb1 mov ecx, eax */
  ECX = (EAX);
  /* 1189deb3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1189deb7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1189debb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1189debf:;
  /* 1189debf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1189dec1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1189dec3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1189dec5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1189dec7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189dec9 jne 0x1189debf */
  if (!C.zf) goto L_1189debf;
  /* 1189decb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1189decd mov ecx, eax */
  ECX = (EAX);
  /* 1189decf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1189ded3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1189ded4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1189ded8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189deda jb 0x1189deea */
  if (C.cf) goto L_1189deea;
  /* 1189dedc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189dee0 ja 0x1189deea */
  if ((!C.cf&&!C.zf)) goto L_1189deea;
  /* 1189dee2 jb 0x1189def2 */
  if (C.cf) goto L_1189def2;
  /* 1189dee4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189dee8 jbe 0x1189def2 */
  if ((C.cf||C.zf)) goto L_1189def2;
L_1189deea:;
  /* 1189deea sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189deee sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1189def2:;
  /* 1189def2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189def6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189defa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1189defc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1189defe sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1189df01:;
  /* 1189df01 pop ebx */
  EBX = (pop32());
  /* 1189df02 ret 0x10 */
  ESPCHK(0x1189de90u, _esp0);
  ESP += 20; return;
}

/* FUN_1000df10 @ 0x1189df10 (628 bytes, 214 insns) */
void f_1189df10(void) {
  FTRACE(0x1189df10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189df10 push ebp */
  push32((uint32_t)(EBP));
  /* 1189df11 mov ebp, esp */
  EBP = (ESP);
  /* 1189df13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189df16 push ebx */
  push32((uint32_t)(EBX));
  /* 1189df17 push esi */
  push32((uint32_t)(ESI));
  /* 1189df18 push edi */
  push32((uint32_t)(EDI));
L_1189df19:;
  /* 1189df19 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189df1d jne 0x1189df3d */
  if (!C.zf) goto L_1189df3d;
  /* 1189df1f push 0x118bfa94 */
  push32((uint32_t)(0x118bfa94u));
  /* 1189df24 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189df26 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1189df28 push 0x118bfa88 */
  push32((uint32_t)(0x118bfa88u));
  /* 1189df2d push 2 */
  push32((uint32_t)(0x2u));
  /* 1189df2f call 0x118962c0 */
  push32(0x1189df34u); f_118962c0();
  /* 1189df34 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189df37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189df3a jne 0x1189df3d */
  if (!C.zf) goto L_1189df3d;
  /* 1189df3c int3  */
  x86_unimpl("int3 @ 0x1189df3c");
L_1189df3d:;
  /* 1189df3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189df3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189df41 jne 0x1189df19 */
  if (!C.zf) goto L_1189df19;
  /* 1189df43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189df46 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1189df49 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189df4c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1189df4f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1189df52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189df55 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1189df58 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1189df5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189df60 je 0x1189df6f */
  if (C.zf) goto L_1189df6f;
  /* 1189df62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189df65 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1189df68 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1189df6b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189df6d je 0x1189df85 */
  if (C.zf) goto L_1189df85;
L_1189df6f:;
  /* 1189df6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189df72 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1189df75 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1189df77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189df7a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1189df7d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189df80 jmp 0x1189e17d */
  goto L_1189e17d;
L_1189df85:;
  /* 1189df85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189df88 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1189df8b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1189df8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189df90 je 0x1189dfdc */
  if (C.zf) goto L_1189dfdc;
  /* 1189df92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189df95 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1189df9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189df9f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1189dfa2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1189dfa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189dfa7 je 0x1189dfc5 */
  if (C.zf) goto L_1189dfc5;
  /* 1189dfa9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189dfac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189dfaf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1189dfb2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1189dfb4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189dfb7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1189dfba and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1189dfbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189dfc0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1189dfc3 jmp 0x1189dfdc */
  goto L_1189dfdc;
L_1189dfc5:;
  /* 1189dfc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189dfc8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1189dfcb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1189dfce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189dfd1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1189dfd4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189dfd7 jmp 0x1189e17d */
  goto L_1189e17d;
L_1189dfdc:;
  /* 1189dfdc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189dfdf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1189dfe2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1189dfe5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189dfe8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1189dfeb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189dfee mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1189dff1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1189dff4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189dff7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1189dffa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189dffd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1189e004 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1189e00b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e00e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1189e011 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e014 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1189e017 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1189e01d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189e01f jne 0x1189e04f */
  if (!C.zf) goto L_1189e04f;
  /* 1189e021 cmp dword ptr [ebp - 8], 0x118c2140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x118c2140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e028 je 0x1189e033 */
  if (C.zf) goto L_1189e033;
  /* 1189e02a cmp dword ptr [ebp - 8], 0x118c2160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x118c2160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e031 jne 0x1189e043 */
  if (!C.zf) goto L_1189e043;
L_1189e033:;
  /* 1189e033 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189e036 push edx */
  push32((uint32_t)(EDX));
  /* 1189e037 call 0x1189fe80 */
  push32(0x1189e03cu); f_1189fe80();
  /* 1189e03c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e03f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189e041 jne 0x1189e04f */
  if (!C.zf) goto L_1189e04f;
L_1189e043:;
  /* 1189e043 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e046 push eax */
  push32((uint32_t)(EAX));
  /* 1189e047 call 0x1189fdb0 */
  push32(0x1189e04cu); f_1189fdb0();
  /* 1189e04c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189e04f:;
  /* 1189e04f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e052 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1189e055 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1189e05b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189e05d je 0x1189e13b */
  if (C.zf) goto L_1189e13b;
L_1189e063:;
  /* 1189e063 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e066 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e069 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1189e06b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189e06e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189e070 jge 0x1189e093 */
  if ((C.sf==C.of)) goto L_1189e093;
  /* 1189e072 push 0x118bfa48 */
  push32((uint32_t)(0x118bfa48u));
  /* 1189e077 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189e079 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1189e07e push 0x118bfa88 */
  push32((uint32_t)(0x118bfa88u));
  /* 1189e083 push 2 */
  push32((uint32_t)(0x2u));
  /* 1189e085 call 0x118962c0 */
  push32(0x1189e08au); f_118962c0();
  /* 1189e08a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e08d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e090 jne 0x1189e093 */
  if (!C.zf) goto L_1189e093;
  /* 1189e092 int3  */
  x86_unimpl("int3 @ 0x1189e092");
L_1189e093:;
  /* 1189e093 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189e095 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189e097 jne 0x1189e063 */
  if (!C.zf) goto L_1189e063;
  /* 1189e099 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e09c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e09f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1189e0a1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189e0a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189e0a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e0aa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1189e0ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e0b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e0b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1189e0b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e0b8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1189e0bb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189e0be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e0c1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1189e0c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e0c8 jle 0x1189e0e6 */
  if ((C.zf||C.sf!=C.of)) goto L_1189e0e6;
  /* 1189e0ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e0cd push ecx */
  push32((uint32_t)(ECX));
  /* 1189e0ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e0d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1189e0d4 push eax */
  push32((uint32_t)(EAX));
  /* 1189e0d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189e0d8 push ecx */
  push32((uint32_t)(ECX));
  /* 1189e0d9 call 0x1189faa0 */
  push32(0x1189e0deu); f_1189faa0();
  /* 1189e0de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e0e1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1189e0e4 jmp 0x1189e12e */
  goto L_1189e12e;
L_1189e0e6:;
  /* 1189e0e6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e0ea je 0x1189e109 */
  if (C.zf) goto L_1189e109;
  /* 1189e0ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189e0ef sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1189e0f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189e0f5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1189e0f8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189e0fb mov ecx, dword ptr [edx*4 + 0x118c51a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x118c51a0)));
  /* 1189e102 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e104 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1189e107 jmp 0x1189e110 */
  goto L_1189e110;
L_1189e109:;
  /* 1189e109 mov dword ptr [ebp - 0x14], 0x118c1a60 */
  w32((uint32_t)(EBP + -0x14), (0x118c1a60u));
L_1189e110:;
  /* 1189e110 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189e113 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1189e117 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1189e11a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189e11c je 0x1189e12e */
  if (C.zf) goto L_1189e12e;
  /* 1189e11e push 2 */
  push32((uint32_t)(0x2u));
  /* 1189e120 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189e122 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189e125 push ecx */
  push32((uint32_t)(ECX));
  /* 1189e126 call 0x1189f950 */
  push32(0x1189e12bu); f_1189f950();
  /* 1189e12b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189e12e:;
  /* 1189e12e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e131 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1189e134 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1189e137 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1189e139 jmp 0x1189e159 */
  goto L_1189e159;
L_1189e13b:;
  /* 1189e13b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1189e142 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e145 push edx */
  push32((uint32_t)(EDX));
  /* 1189e146 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1189e149 push eax */
  push32((uint32_t)(EAX));
  /* 1189e14a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189e14d push ecx */
  push32((uint32_t)(ECX));
  /* 1189e14e call 0x1189faa0 */
  push32(0x1189e153u); f_1189faa0();
  /* 1189e153 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e156 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1189e159:;
  /* 1189e159 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189e15c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e15f je 0x1189e175 */
  if (C.zf) goto L_1189e175;
  /* 1189e161 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e164 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1189e167 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1189e16a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e16d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1189e170 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189e173 jmp 0x1189e17d */
  goto L_1189e17d;
L_1189e175:;
  /* 1189e175 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189e178 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1189e17d:;
  /* 1189e17d pop edi */
  EDI = (pop32());
  /* 1189e17e pop esi */
  ESI = (pop32());
  /* 1189e17f pop ebx */
  EBX = (pop32());
  /* 1189e180 mov esp, ebp */
  ESP = (EBP);
  /* 1189e182 pop ebp */
  EBP = (pop32());
  /* 1189e183 ret  */
  ESPCHK(0x1189df10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e190 @ 0x1189e190 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1189e190(void) {
  FTRACE(0x1189e190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189e190 push ebp */
  push32((uint32_t)(EBP));
  /* 1189e191 mov ebp, esp */
  EBP = (ESP);
  /* 1189e193 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189e199 push ebx */
  push32((uint32_t)(EBX));
  /* 1189e19a push esi */
  push32((uint32_t)(ESI));
  /* 1189e19b push edi */
  push32((uint32_t)(EDI));
  /* 1189e19c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1189e1a3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1189e1ad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1189e1b4:;
  /* 1189e1b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189e1b7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1189e1b9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1189e1bc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e1c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189e1c3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e1c6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1189e1c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189e1cb je 0x1189eda7 */
  if (C.zf) goto L_1189eda7;
  /* 1189e1d1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e1d8 jl 0x1189eda7 */
  if ((C.sf!=C.of)) goto L_1189eda7;
  /* 1189e1de movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e1e2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e1e5 jl 0x1189e206 */
  if ((C.sf!=C.of)) goto L_1189e206;
  /* 1189e1e7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e1eb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e1ee jg 0x1189e206 */
  if ((!C.zf&&C.sf==C.of)) goto L_1189e206;
  /* 1189e1f0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e1f4 movsx ecx, byte ptr [eax + 0x118bfa80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x118bfa80))));
  /* 1189e1fb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1189e1fe mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1189e204 jmp 0x1189e210 */
  goto L_1189e210;
L_1189e206:;
  /* 1189e206 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1189e210:;
  /* 1189e210 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1189e216 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1189e219 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189e21c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189e21f movsx edx, byte ptr [ecx + eax*8 + 0x118bfaa0] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x118bfaa0))));
  /* 1189e227 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1189e22a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1189e22d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189e230 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1189e236 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e23d ja 0x1189eda2 */
  if ((!C.cf&&!C.zf)) goto L_1189eda2;
  /* 1189e243 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1189e249 jmp dword ptr [ecx*4 + 0x1189edb4] */
  switch (ECX) {
    case 0: goto L_1189e250;
    case 1: goto L_1189e2ea;
    case 2: goto L_1189e32c;
    case 3: goto L_1189e39b;
    case 4: goto L_1189e3f3;
    case 5: goto L_1189e402;
    case 6: goto L_1189e44e;
    case 7: goto L_1189e4e1;
    case 8: goto L_1189e378;
    case 9: goto L_1189e383;
    case 10: goto L_1189e36e;
    case 11: goto L_1189e363;
    case 12: goto L_1189e38e;
    case 13: goto L_1189e396;
    default: x86_unimpl("switch@0x1189e249 out of table"); return;
  }
L_1189e250:;
  /* 1189e250 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1189e257 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189e25a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1189e260 mov eax, dword ptr [0x118c1c98] */
  EAX = (r32((uint32_t)(0x118c1c98)));
  /* 1189e265 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189e267 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1189e26b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1189e271 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189e273 je 0x1189e2cd */
  if (C.zf) goto L_1189e2cd;
  /* 1189e275 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1189e27b push edx */
  push32((uint32_t)(EDX));
  /* 1189e27c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189e27f push eax */
  push32((uint32_t)(EAX));
  /* 1189e280 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e284 push ecx */
  push32((uint32_t)(ECX));
  /* 1189e285 call 0x1189eec0 */
  push32(0x1189e28au); f_1189eec0();
  /* 1189e28a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e28d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189e290 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1189e292 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1189e295 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189e298 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e29b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1189e29e:;
  /* 1189e29e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e2a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189e2a4 jne 0x1189e2c7 */
  if (!C.zf) goto L_1189e2c7;
  /* 1189e2a6 push 0x118bfb20 */
  push32((uint32_t)(0x118bfb20u));
  /* 1189e2ab push 0 */
  push32((uint32_t)(0x0u));
  /* 1189e2ad push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1189e2b2 push 0x118bfb14 */
  push32((uint32_t)(0x118bfb14u));
  /* 1189e2b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1189e2b9 call 0x118962c0 */
  push32(0x1189e2beu); f_118962c0();
  /* 1189e2be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e2c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e2c4 jne 0x1189e2c7 */
  if (!C.zf) goto L_1189e2c7;
  /* 1189e2c6 int3  */
  x86_unimpl("int3 @ 0x1189e2c6");
L_1189e2c7:;
  /* 1189e2c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189e2c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189e2cb jne 0x1189e29e */
  if (!C.zf) goto L_1189e29e;
L_1189e2cd:;
  /* 1189e2cd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1189e2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1189e2d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189e2d7 push edx */
  push32((uint32_t)(EDX));
  /* 1189e2d8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e2dc push eax */
  push32((uint32_t)(EAX));
  /* 1189e2dd call 0x1189eec0 */
  push32(0x1189e2e2u); f_1189eec0();
  /* 1189e2e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e2e5 jmp 0x1189eda2 */
  goto L_1189eda2;
L_1189e2ea:;
  /* 1189e2ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1189e2f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e2f4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1189e2fa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1189e300 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1189e306 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1189e30c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1189e30f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1189e316 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1189e320 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1189e327 jmp 0x1189eda2 */
  goto L_1189eda2;
L_1189e32c:;
  /* 1189e32c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e330 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1189e336 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1189e33c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189e33f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1189e345 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e34c ja 0x1189e396 */
  if ((!C.cf&&!C.zf)) goto L_1189e396;
  /* 1189e34e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1189e354 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189e356 mov al, byte ptr [ecx + 0x1189edec] */
  AL = (r8((uint32_t)(ECX + 0x1189edec)));
  /* 1189e35c jmp dword ptr [eax*4 + 0x1189edd4] */
  switch (EAX) {
    case 0: goto L_1189e378;
    case 1: goto L_1189e383;
    case 2: goto L_1189e36e;
    case 3: goto L_1189e363;
    case 4: goto L_1189e38e;
    case 5: goto L_1189e396;
    default: x86_unimpl("switch@0x1189e35c out of table"); return;
  }
L_1189e363:;
  /* 1189e363 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e366 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1189e369 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189e36c jmp 0x1189e396 */
  goto L_1189e396;
L_1189e36e:;
  /* 1189e36e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e371 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1189e373 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189e376 jmp 0x1189e396 */
  goto L_1189e396;
L_1189e378:;
  /* 1189e378 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e37b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1189e37e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1189e381 jmp 0x1189e396 */
  goto L_1189e396;
L_1189e383:;
  /* 1189e383 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e386 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1189e389 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189e38c jmp 0x1189e396 */
  goto L_1189e396;
L_1189e38e:;
  /* 1189e38e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e391 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1189e393 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1189e396:;
  /* 1189e396 jmp 0x1189eda2 */
  goto L_1189eda2;
L_1189e39b:;
  /* 1189e39b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e39f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e3a2 jne 0x1189e3d7 */
  if (!C.zf) goto L_1189e3d7;
  /* 1189e3a4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1189e3a7 push edx */
  push32((uint32_t)(EDX));
  /* 1189e3a8 call 0x1189efd0 */
  push32(0x1189e3adu); f_1189efd0();
  /* 1189e3ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e3b0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1189e3b6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e3bd jge 0x1189e3d5 */
  if ((C.sf==C.of)) goto L_1189e3d5;
  /* 1189e3bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e3c2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1189e3c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189e3c7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1189e3cd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1189e3cf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1189e3d5:;
  /* 1189e3d5 jmp 0x1189e3ee */
  goto L_1189e3ee;
L_1189e3d7:;
  /* 1189e3d7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1189e3dd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189e3e0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e3e4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1189e3e8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1189e3ee:;
  /* 1189e3ee jmp 0x1189eda2 */
  goto L_1189eda2;
L_1189e3f3:;
  /* 1189e3f3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1189e3fd jmp 0x1189eda2 */
  goto L_1189eda2;
L_1189e402:;
  /* 1189e402 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e406 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e409 jne 0x1189e432 */
  if (!C.zf) goto L_1189e432;
  /* 1189e40b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1189e40e push eax */
  push32((uint32_t)(EAX));
  /* 1189e40f call 0x1189efd0 */
  push32(0x1189e414u); f_1189efd0();
  /* 1189e414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e417 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1189e41d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e424 jge 0x1189e430 */
  if ((C.sf==C.of)) goto L_1189e430;
  /* 1189e426 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1189e430:;
  /* 1189e430 jmp 0x1189e449 */
  goto L_1189e449;
L_1189e432:;
  /* 1189e432 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1189e438 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189e43b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e43f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1189e443 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1189e449:;
  /* 1189e449 jmp 0x1189eda2 */
  goto L_1189eda2;
L_1189e44e:;
  /* 1189e44e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e452 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1189e458 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1189e45e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189e461 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1189e467 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e46e ja 0x1189e4dc */
  if ((!C.cf&&!C.zf)) goto L_1189e4dc;
  /* 1189e470 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1189e476 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189e478 mov al, byte ptr [ecx + 0x1189ee11] */
  AL = (r8((uint32_t)(ECX + 0x1189ee11)));
  /* 1189e47e jmp dword ptr [eax*4 + 0x1189edfd] */
  switch (EAX) {
    case 0: goto L_1189e490;
    case 1: goto L_1189e4c9;
    case 2: goto L_1189e485;
    case 3: goto L_1189e4d3;
    case 4: goto L_1189e4dc;
    default: x86_unimpl("switch@0x1189e47e out of table"); return;
  }
L_1189e485:;
  /* 1189e485 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e488 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1189e48b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189e48e jmp 0x1189e4dc */
  goto L_1189e4dc;
L_1189e490:;
  /* 1189e490 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189e493 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1189e496 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e499 jne 0x1189e4bb */
  if (!C.zf) goto L_1189e4bb;
  /* 1189e49b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189e49e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1189e4a2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e4a5 jne 0x1189e4bb */
  if (!C.zf) goto L_1189e4bb;
  /* 1189e4a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189e4aa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e4ad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1189e4b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e4b3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1189e4b6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189e4b9 jmp 0x1189e4c7 */
  goto L_1189e4c7;
L_1189e4bb:;
  /* 1189e4bb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1189e4c2 jmp 0x1189e250 */
  goto L_1189e250;
L_1189e4c7:;
  /* 1189e4c7 jmp 0x1189e4dc */
  goto L_1189e4dc;
L_1189e4c9:;
  /* 1189e4c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e4cc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1189e4ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189e4d1 jmp 0x1189e4dc */
  goto L_1189e4dc;
L_1189e4d3:;
  /* 1189e4d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e4d6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1189e4d9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1189e4dc:;
  /* 1189e4dc jmp 0x1189eda2 */
  goto L_1189eda2;
L_1189e4e1:;
  /* 1189e4e1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e4e5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1189e4eb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1189e4f1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189e4f4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1189e4fa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e501 ja 0x1189ebc7 */
  if ((!C.cf&&!C.zf)) goto L_1189ebc7;
  /* 1189e507 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1189e50d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189e50f mov cl, byte ptr [edx + 0x1189ee7c] */
  CL = (r8((uint32_t)(EDX + 0x1189ee7c)));
  /* 1189e515 jmp dword ptr [ecx*4 + 0x1189ee40] */
  switch (ECX) {
    case 0: goto L_1189e51c;
    case 1: goto L_1189e7b0;
    case 2: goto L_1189e640;
    case 3: goto L_1189e8e9;
    case 4: goto L_1189e5ab;
    case 5: goto L_1189e531;
    case 6: goto L_1189e8bb;
    case 7: goto L_1189e7c0;
    case 8: goto L_1189e765;
    case 9: goto L_1189e935;
    case 10: goto L_1189e8df;
    case 11: goto L_1189e656;
    case 12: goto L_1189e8d3;
    case 13: goto L_1189e8f5;
    case 14: goto L_1189ebc7;
    default: x86_unimpl("switch@0x1189e515 out of table"); return;
  }
L_1189e51c:;
  /* 1189e51c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e51f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1189e524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189e526 jne 0x1189e531 */
  if (!C.zf) goto L_1189e531;
  /* 1189e528 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e52b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1189e52e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1189e531:;
  /* 1189e531 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e534 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1189e53a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189e53c je 0x1189e577 */
  if (C.zf) goto L_1189e577;
  /* 1189e53e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1189e541 push eax */
  push32((uint32_t)(EAX));
  /* 1189e542 call 0x1189f010 */
  push32(0x1189e547u); f_1189f010();
  /* 1189e547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e54a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1189e54e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1189e552 push ecx */
  push32((uint32_t)(ECX));
  /* 1189e553 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1189e559 push edx */
  push32((uint32_t)(EDX));
  /* 1189e55a call 0x118a00f0 */
  push32(0x1189e55fu); f_118a00f0();
  /* 1189e55f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e562 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1189e565 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e569 jge 0x1189e575 */
  if ((C.sf==C.of)) goto L_1189e575;
  /* 1189e56b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1189e575:;
  /* 1189e575 jmp 0x1189e59d */
  goto L_1189e59d;
L_1189e577:;
  /* 1189e577 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1189e57a push eax */
  push32((uint32_t)(EAX));
  /* 1189e57b call 0x1189efd0 */
  push32(0x1189e580u); f_1189efd0();
  /* 1189e580 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e583 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1189e58a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1189e590 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1189e596 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1189e59d:;
  /* 1189e59d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1189e5a3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1189e5a6 jmp 0x1189ebc7 */
  goto L_1189ebc7;
L_1189e5ab:;
  /* 1189e5ab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1189e5ae push eax */
  push32((uint32_t)(EAX));
  /* 1189e5af call 0x1189efd0 */
  push32(0x1189e5b4u); f_1189efd0();
  /* 1189e5b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e5b7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1189e5bd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e5c4 je 0x1189e5d2 */
  if (C.zf) goto L_1189e5d2;
  /* 1189e5c6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1189e5cc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e5d0 jne 0x1189e5ec */
  if (!C.zf) goto L_1189e5ec;
L_1189e5d2:;
  /* 1189e5d2 mov edx, dword ptr [0x118c1fb0] */
  EDX = (r32((uint32_t)(0x118c1fb0)));
  /* 1189e5d8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1189e5db mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189e5de push eax */
  push32((uint32_t)(EAX));
  /* 1189e5df call 0x1189a030 */
  push32(0x1189e5e4u); f_1189a030();
  /* 1189e5e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e5e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1189e5ea jmp 0x1189e63b */
  goto L_1189e63b;
L_1189e5ec:;
  /* 1189e5ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e5ef and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1189e5f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189e5f7 je 0x1189e61c */
  if (C.zf) goto L_1189e61c;
  /* 1189e5f9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1189e5ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1189e602 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1189e605 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1189e60b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1189e60e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1189e610 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1189e613 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1189e61a jmp 0x1189e63b */
  goto L_1189e63b;
L_1189e61c:;
  /* 1189e61c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1189e623 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1189e629 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189e62c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1189e62f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1189e635 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1189e638 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1189e63b:;
  /* 1189e63b jmp 0x1189ebc7 */
  goto L_1189ebc7;
L_1189e640:;
  /* 1189e640 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e643 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1189e649 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189e64b jne 0x1189e656 */
  if (!C.zf) goto L_1189e656;
  /* 1189e64d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e650 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1189e653 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1189e656:;
  /* 1189e656 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e65d jne 0x1189e66b */
  if (!C.zf) goto L_1189e66b;
  /* 1189e65f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1189e669 jmp 0x1189e677 */
  goto L_1189e677;
L_1189e66b:;
  /* 1189e66b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1189e671 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1189e677:;
  /* 1189e677 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1189e67d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1189e683 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1189e686 push edx */
  push32((uint32_t)(EDX));
  /* 1189e687 call 0x1189efd0 */
  push32(0x1189e68cu); f_1189efd0();
  /* 1189e68c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e68f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1189e692 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e695 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1189e69a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189e69c je 0x1189e706 */
  if (C.zf) goto L_1189e706;
  /* 1189e69e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e6a2 jne 0x1189e6ad */
  if (!C.zf) goto L_1189e6ad;
  /* 1189e6a4 mov ecx, dword ptr [0x118c1fb4] */
  ECX = (r32((uint32_t)(0x118c1fb4)));
  /* 1189e6aa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1189e6ad:;
  /* 1189e6ad mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1189e6b4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189e6b7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1189e6bd:;
  /* 1189e6bd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1189e6c3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1189e6c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189e6cc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1189e6d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189e6d4 je 0x1189e6f6 */
  if (C.zf) goto L_1189e6f6;
  /* 1189e6d6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1189e6dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189e6de mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1189e6e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189e6e3 je 0x1189e6f6 */
  if (C.zf) goto L_1189e6f6;
  /* 1189e6e5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1189e6eb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e6ee mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1189e6f4 jmp 0x1189e6bd */
  goto L_1189e6bd;
L_1189e6f6:;
  /* 1189e6f6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1189e6fc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189e6ff sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1189e701 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1189e704 jmp 0x1189e760 */
  goto L_1189e760;
L_1189e706:;
  /* 1189e706 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e70a jne 0x1189e714 */
  if (!C.zf) goto L_1189e714;
  /* 1189e70c mov eax, dword ptr [0x118c1fb0] */
  EAX = (r32((uint32_t)(0x118c1fb0)));
  /* 1189e711 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1189e714:;
  /* 1189e714 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189e717 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1189e71d:;
  /* 1189e71d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1189e723 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1189e729 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189e72c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1189e732 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189e734 je 0x1189e754 */
  if (C.zf) goto L_1189e754;
  /* 1189e736 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1189e73c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1189e73f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189e741 je 0x1189e754 */
  if (C.zf) goto L_1189e754;
  /* 1189e743 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1189e749 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e74c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1189e752 jmp 0x1189e71d */
  goto L_1189e71d;
L_1189e754:;
  /* 1189e754 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1189e75a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189e75d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1189e760:;
  /* 1189e760 jmp 0x1189ebc7 */
  goto L_1189ebc7;
L_1189e765:;
  /* 1189e765 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1189e768 push edx */
  push32((uint32_t)(EDX));
  /* 1189e769 call 0x1189efd0 */
  push32(0x1189e76eu); f_1189efd0();
  /* 1189e76e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e771 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1189e777 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e77a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1189e77d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189e77f je 0x1189e793 */
  if (C.zf) goto L_1189e793;
  /* 1189e781 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1189e787 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1189e78e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1189e791 jmp 0x1189e7a1 */
  goto L_1189e7a1;
L_1189e793:;
  /* 1189e793 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1189e799 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1189e79f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1189e7a1:;
  /* 1189e7a1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1189e7ab jmp 0x1189ebc7 */
  goto L_1189ebc7;
L_1189e7b0:;
  /* 1189e7b0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1189e7b7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1189e7ba add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1189e7bd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1189e7c0:;
  /* 1189e7c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e7c3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1189e7c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189e7c8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1189e7ce mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1189e7d1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e7d8 jge 0x1189e7e6 */
  if ((C.sf==C.of)) goto L_1189e7e6;
  /* 1189e7da mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1189e7e4 jmp 0x1189e802 */
  goto L_1189e802;
L_1189e7e6:;
  /* 1189e7e6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e7ed jne 0x1189e802 */
  if (!C.zf) goto L_1189e802;
  /* 1189e7ef movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e7f3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e7f6 jne 0x1189e802 */
  if (!C.zf) goto L_1189e802;
  /* 1189e7f8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1189e802:;
  /* 1189e802 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189e805 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e808 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1189e80b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189e80e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189e811 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189e813 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189e816 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1189e81c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1189e822 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189e825 push ecx */
  push32((uint32_t)(ECX));
  /* 1189e826 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1189e82c push edx */
  push32((uint32_t)(EDX));
  /* 1189e82d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e831 push eax */
  push32((uint32_t)(EAX));
  /* 1189e832 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189e835 push ecx */
  push32((uint32_t)(ECX));
  /* 1189e836 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1189e83c push edx */
  push32((uint32_t)(EDX));
  /* 1189e83d call dword ptr [0x118c23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c23a0))), 0x1189e843u);
  /* 1189e843 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e846 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e849 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1189e84e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189e850 je 0x1189e868 */
  if (C.zf) goto L_1189e868;
  /* 1189e852 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e859 jne 0x1189e868 */
  if (!C.zf) goto L_1189e868;
  /* 1189e85b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189e85e push ecx */
  push32((uint32_t)(ECX));
  /* 1189e85f call dword ptr [0x118c23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c23ac))), 0x1189e865u);
  /* 1189e865 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189e868:;
  /* 1189e868 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1189e86c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e86f jne 0x1189e88a */
  if (!C.zf) goto L_1189e88a;
  /* 1189e871 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e874 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1189e879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189e87b jne 0x1189e88a */
  if (!C.zf) goto L_1189e88a;
  /* 1189e87d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189e880 push ecx */
  push32((uint32_t)(ECX));
  /* 1189e881 call dword ptr [0x118c23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c23a4))), 0x1189e887u);
  /* 1189e887 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189e88a:;
  /* 1189e88a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189e88d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1189e890 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189e893 jne 0x1189e8a7 */
  if (!C.zf) goto L_1189e8a7;
  /* 1189e895 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e898 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1189e89b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1189e89e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189e8a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e8a4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1189e8a7:;
  /* 1189e8a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189e8aa push eax */
  push32((uint32_t)(EAX));
  /* 1189e8ab call 0x1189a030 */
  push32(0x1189e8b0u); f_1189a030();
  /* 1189e8b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e8b3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1189e8b6 jmp 0x1189ebc7 */
  goto L_1189ebc7;
L_1189e8bb:;
  /* 1189e8bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e8be or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1189e8c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1189e8c4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1189e8ce jmp 0x1189e955 */
  goto L_1189e955;
L_1189e8d3:;
  /* 1189e8d3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1189e8dd jmp 0x1189e955 */
  goto L_1189e955;
L_1189e8df:;
  /* 1189e8df mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1189e8e9:;
  /* 1189e8e9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1189e8f3 jmp 0x1189e8ff */
  goto L_1189e8ff;
L_1189e8f5:;
  /* 1189e8f5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1189e8ff:;
  /* 1189e8ff mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1189e909 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e90c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1189e912 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189e914 je 0x1189e933 */
  if (C.zf) goto L_1189e933;
  /* 1189e916 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1189e91d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1189e923 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e926 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1189e92c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1189e933:;
  /* 1189e933 jmp 0x1189e955 */
  goto L_1189e955;
L_1189e935:;
  /* 1189e935 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1189e93f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e942 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1189e948 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189e94a je 0x1189e955 */
  if (C.zf) goto L_1189e955;
  /* 1189e94c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e94f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1189e952 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1189e955:;
  /* 1189e955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e958 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1189e95d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189e95f je 0x1189e97e */
  if (C.zf) goto L_1189e97e;
  /* 1189e961 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1189e964 push ecx */
  push32((uint32_t)(ECX));
  /* 1189e965 call 0x1189eff0 */
  push32(0x1189e96au); f_1189eff0();
  /* 1189e96a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e96d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1189e973 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1189e979 jmp 0x1189ea0f */
  goto L_1189ea0f;
L_1189e97e:;
  /* 1189e97e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e981 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1189e984 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189e986 je 0x1189e9d0 */
  if (C.zf) goto L_1189e9d0;
  /* 1189e988 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e98b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1189e98e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189e990 je 0x1189e9b0 */
  if (C.zf) goto L_1189e9b0;
  /* 1189e992 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1189e995 push ecx */
  push32((uint32_t)(ECX));
  /* 1189e996 call 0x1189efd0 */
  push32(0x1189e99bu); f_1189efd0();
  /* 1189e99b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e99e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1189e9a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1189e9a2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1189e9a8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1189e9ae jmp 0x1189e9ce */
  goto L_1189e9ce;
L_1189e9b0:;
  /* 1189e9b0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1189e9b3 push edx */
  push32((uint32_t)(EDX));
  /* 1189e9b4 call 0x1189efd0 */
  push32(0x1189e9b9u); f_1189efd0();
  /* 1189e9b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e9bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189e9c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1189e9c2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1189e9c8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1189e9ce:;
  /* 1189e9ce jmp 0x1189ea0f */
  goto L_1189ea0f;
L_1189e9d0:;
  /* 1189e9d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189e9d3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1189e9d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189e9d8 je 0x1189e9f5 */
  if (C.zf) goto L_1189e9f5;
  /* 1189e9da lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1189e9dd push ecx */
  push32((uint32_t)(ECX));
  /* 1189e9de call 0x1189efd0 */
  push32(0x1189e9e3u); f_1189efd0();
  /* 1189e9e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189e9e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1189e9e7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1189e9ed mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1189e9f3 jmp 0x1189ea0f */
  goto L_1189ea0f;
L_1189e9f5:;
  /* 1189e9f5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1189e9f8 push edx */
  push32((uint32_t)(EDX));
  /* 1189e9f9 call 0x1189efd0 */
  push32(0x1189e9feu); f_1189efd0();
  /* 1189e9fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ea01 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189ea03 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1189ea09 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1189ea0f:;
  /* 1189ea0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ea12 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1189ea15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189ea17 je 0x1189ea57 */
  if (C.zf) goto L_1189ea57;
  /* 1189ea19 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ea20 jg 0x1189ea57 */
  if ((!C.zf&&C.sf==C.of)) goto L_1189ea57;
  /* 1189ea22 jl 0x1189ea2d */
  if ((C.sf!=C.of)) goto L_1189ea2d;
  /* 1189ea24 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ea2b jae 0x1189ea57 */
  if (!C.cf) goto L_1189ea57;
L_1189ea2d:;
  /* 1189ea2d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1189ea33 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1189ea35 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1189ea3b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ea3e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1189ea40 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1189ea46 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1189ea4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ea4f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1189ea52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189ea55 jmp 0x1189ea6f */
  goto L_1189ea6f;
L_1189ea57:;
  /* 1189ea57 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1189ea5d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1189ea63 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1189ea69 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1189ea6f:;
  /* 1189ea6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ea72 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1189ea78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189ea7a jne 0x1189ea97 */
  if (!C.zf) goto L_1189ea97;
  /* 1189ea7c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1189ea82 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1189ea88 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1189ea8b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1189ea91 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1189ea97:;
  /* 1189ea97 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ea9e jge 0x1189eaac */
  if ((C.sf==C.of)) goto L_1189eaac;
  /* 1189eaa0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1189eaaa jmp 0x1189eab5 */
  goto L_1189eab5;
L_1189eaac:;
  /* 1189eaac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189eaaf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1189eab2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1189eab5:;
  /* 1189eab5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1189eabb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1189eac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189eac3 jne 0x1189eacc */
  if (!C.zf) goto L_1189eacc;
  /* 1189eac5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1189eacc:;
  /* 1189eacc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1189eacf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1189ead2:;
  /* 1189ead2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1189ead8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1189eade sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189eae1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1189eae7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189eae9 jg 0x1189eaff */
  if ((!C.zf&&C.sf==C.of)) goto L_1189eaff;
  /* 1189eaeb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1189eaf1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1189eaf7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189eaf9 je 0x1189eb80 */
  if (C.zf) goto L_1189eb80;
L_1189eaff:;
  /* 1189eaff mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1189eb05 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1189eb06 push edx */
  push32((uint32_t)(EDX));
  /* 1189eb07 push eax */
  push32((uint32_t)(EAX));
  /* 1189eb08 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1189eb0e push edx */
  push32((uint32_t)(EDX));
  /* 1189eb0f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1189eb15 push eax */
  push32((uint32_t)(EAX));
  /* 1189eb16 call 0x1189de90 */
  push32(0x1189eb1bu); f_1189de90();
  /* 1189eb1b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189eb1e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1189eb24 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1189eb2a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1189eb2b push edx */
  push32((uint32_t)(EDX));
  /* 1189eb2c push eax */
  push32((uint32_t)(EAX));
  /* 1189eb2d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1189eb33 push ecx */
  push32((uint32_t)(ECX));
  /* 1189eb34 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1189eb3a push edx */
  push32((uint32_t)(EDX));
  /* 1189eb3b call 0x1189de20 */
  push32(0x1189eb40u); f_1189de20();
  /* 1189eb40 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1189eb46 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1189eb4c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189eb53 jle 0x1189eb67 */
  if ((C.zf||C.sf!=C.of)) goto L_1189eb67;
  /* 1189eb55 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1189eb5b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189eb61 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1189eb67:;
  /* 1189eb67 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189eb6a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1189eb70 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1189eb72 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189eb75 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189eb78 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1189eb7b jmp 0x1189ead2 */
  goto L_1189ead2;
L_1189eb80:;
  /* 1189eb80 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1189eb83 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189eb86 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1189eb89 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189eb8c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189eb8f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1189eb92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189eb95 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1189eb9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189eb9c je 0x1189ebc7 */
  if (C.zf) goto L_1189ebc7;
  /* 1189eb9e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189eba1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1189eba4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189eba7 jne 0x1189ebaf */
  if (!C.zf) goto L_1189ebaf;
  /* 1189eba9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ebad jne 0x1189ebc7 */
  if (!C.zf) goto L_1189ebc7;
L_1189ebaf:;
  /* 1189ebaf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189ebb2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189ebb5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1189ebb8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189ebbb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1189ebbe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189ebc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ebc4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1189ebc7:;
  /* 1189ebc7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ebce jne 0x1189eda2 */
  if (!C.zf) goto L_1189eda2;
  /* 1189ebd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ebd7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1189ebda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189ebdc je 0x1189ec2d */
  if (C.zf) goto L_1189ec2d;
  /* 1189ebde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ebe1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1189ebe7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189ebe9 je 0x1189ebfb */
  if (C.zf) goto L_1189ebfb;
  /* 1189ebeb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1189ebf2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1189ebf9 jmp 0x1189ec2d */
  goto L_1189ec2d;
L_1189ebfb:;
  /* 1189ebfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ebfe and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1189ec01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189ec03 je 0x1189ec15 */
  if (C.zf) goto L_1189ec15;
  /* 1189ec05 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1189ec0c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1189ec13 jmp 0x1189ec2d */
  goto L_1189ec2d;
L_1189ec15:;
  /* 1189ec15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ec18 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1189ec1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189ec1d je 0x1189ec2d */
  if (C.zf) goto L_1189ec2d;
  /* 1189ec1f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1189ec26 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1189ec2d:;
  /* 1189ec2d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1189ec33 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189ec36 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189ec39 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1189ec3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ec42 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1189ec45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189ec47 jne 0x1189ec65 */
  if (!C.zf) goto L_1189ec65;
  /* 1189ec49 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1189ec4f push eax */
  push32((uint32_t)(EAX));
  /* 1189ec50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189ec53 push ecx */
  push32((uint32_t)(ECX));
  /* 1189ec54 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1189ec5a push edx */
  push32((uint32_t)(EDX));
  /* 1189ec5b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1189ec5d call 0x1189ef40 */
  push32(0x1189ec62u); f_1189ef40();
  /* 1189ec62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189ec65:;
  /* 1189ec65 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1189ec6b push eax */
  push32((uint32_t)(EAX));
  /* 1189ec6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189ec6f push ecx */
  push32((uint32_t)(ECX));
  /* 1189ec70 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ec73 push edx */
  push32((uint32_t)(EDX));
  /* 1189ec74 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1189ec7a push eax */
  push32((uint32_t)(EAX));
  /* 1189ec7b call 0x1189ef80 */
  push32(0x1189ec80u); f_1189ef80();
  /* 1189ec80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ec83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ec86 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1189ec89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189ec8b je 0x1189ecb3 */
  if (C.zf) goto L_1189ecb3;
  /* 1189ec8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ec90 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1189ec93 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189ec95 jne 0x1189ecb3 */
  if (!C.zf) goto L_1189ecb3;
  /* 1189ec97 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1189ec9d push eax */
  push32((uint32_t)(EAX));
  /* 1189ec9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189eca1 push ecx */
  push32((uint32_t)(ECX));
  /* 1189eca2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1189eca8 push edx */
  push32((uint32_t)(EDX));
  /* 1189eca9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1189ecab call 0x1189ef40 */
  push32(0x1189ecb0u); f_1189ef40();
  /* 1189ecb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189ecb3:;
  /* 1189ecb3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ecb7 je 0x1189ed61 */
  if (C.zf) goto L_1189ed61;
  /* 1189ecbd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ecc1 jle 0x1189ed61 */
  if ((C.zf||C.sf!=C.of)) goto L_1189ed61;
  /* 1189ecc7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189ecca mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1189ecd0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189ecd3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1189ecd9:;
  /* 1189ecd9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1189ecdf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1189ece5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189ece8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1189ecee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189ecf0 je 0x1189ed5f */
  if (C.zf) goto L_1189ed5f;
  /* 1189ecf2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1189ecf8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1189ecfb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1189ed02 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1189ed09 push eax */
  push32((uint32_t)(EAX));
  /* 1189ed0a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1189ed10 push ecx */
  push32((uint32_t)(ECX));
  /* 1189ed11 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1189ed17 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ed1a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1189ed20 call 0x118a00f0 */
  push32(0x1189ed25u); f_118a00f0();
  /* 1189ed25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ed28 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1189ed2e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ed35 jg 0x1189ed39 */
  if ((!C.zf&&C.sf==C.of)) goto L_1189ed39;
  /* 1189ed37 jmp 0x1189ed5f */
  goto L_1189ed5f;
L_1189ed39:;
  /* 1189ed39 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1189ed3f push eax */
  push32((uint32_t)(EAX));
  /* 1189ed40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189ed43 push ecx */
  push32((uint32_t)(ECX));
  /* 1189ed44 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1189ed4a push edx */
  push32((uint32_t)(EDX));
  /* 1189ed4b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1189ed51 push eax */
  push32((uint32_t)(EAX));
  /* 1189ed52 call 0x1189ef80 */
  push32(0x1189ed57u); f_1189ef80();
  /* 1189ed57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ed5a jmp 0x1189ecd9 */
  goto L_1189ecd9;
L_1189ed5f:;
  /* 1189ed5f jmp 0x1189ed7c */
  goto L_1189ed7c;
L_1189ed61:;
  /* 1189ed61 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1189ed67 push ecx */
  push32((uint32_t)(ECX));
  /* 1189ed68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189ed6b push edx */
  push32((uint32_t)(EDX));
  /* 1189ed6c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189ed6f push eax */
  push32((uint32_t)(EAX));
  /* 1189ed70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189ed73 push ecx */
  push32((uint32_t)(ECX));
  /* 1189ed74 call 0x1189ef80 */
  push32(0x1189ed79u); f_1189ef80();
  /* 1189ed79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189ed7c:;
  /* 1189ed7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ed7f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1189ed82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189ed84 je 0x1189eda2 */
  if (C.zf) goto L_1189eda2;
  /* 1189ed86 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1189ed8c push eax */
  push32((uint32_t)(EAX));
  /* 1189ed8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189ed90 push ecx */
  push32((uint32_t)(ECX));
  /* 1189ed91 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1189ed97 push edx */
  push32((uint32_t)(EDX));
  /* 1189ed98 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1189ed9a call 0x1189ef40 */
  push32(0x1189ed9fu); f_1189ef40();
  /* 1189ed9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189eda2:;
  /* 1189eda2 jmp 0x1189e1b4 */
  goto L_1189e1b4;
L_1189eda7:;
  /* 1189eda7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1189edad pop edi */
  EDI = (pop32());
  /* 1189edae pop esi */
  ESI = (pop32());
  /* 1189edaf pop ebx */
  EBX = (pop32());
  /* 1189edb0 mov esp, ebp */
  ESP = (EBP);
  /* 1189edb2 pop ebp */
  EBP = (pop32());
  /* 1189edb3 ret  */
  ESPCHK(0x1189e190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eec0 @ 0x1189eec0 (119 bytes, 44 insns) */
void f_1189eec0(void) {
  FTRACE(0x1189eec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189eec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189eec1 mov ebp, esp */
  EBP = (ESP);
  /* 1189eec3 push ecx */
  push32((uint32_t)(ECX));
  /* 1189eec4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189eec7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189eeca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189eecd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189eed0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1189eed3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189eed6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189eeda jl 0x1189ef02 */
  if ((C.sf!=C.of)) goto L_1189ef02;
  /* 1189eedc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189eedf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189eee1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1189eee4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1189eee6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1189eeea and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1189eef0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1189eef3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189eef6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189eef8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189eefb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189eefe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1189ef00 jmp 0x1189ef15 */
  goto L_1189ef15;
L_1189ef02:;
  /* 1189ef02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189ef05 push edx */
  push32((uint32_t)(EDX));
  /* 1189ef06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189ef09 push eax */
  push32((uint32_t)(EAX));
  /* 1189ef0a call 0x1189df10 */
  push32(0x1189ef0fu); f_1189df10();
  /* 1189ef0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ef12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1189ef15:;
  /* 1189ef15 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ef19 jne 0x1189ef26 */
  if (!C.zf) goto L_1189ef26;
  /* 1189ef1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189ef1e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1189ef24 jmp 0x1189ef33 */
  goto L_1189ef33;
L_1189ef26:;
  /* 1189ef26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189ef29 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189ef2b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ef2e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189ef31 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1189ef33:;
  /* 1189ef33 mov esp, ebp */
  ESP = (EBP);
  /* 1189ef35 pop ebp */
  EBP = (pop32());
  /* 1189ef36 ret  */
  ESPCHK(0x1189eec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef40 @ 0x1189ef40 (53 bytes, 23 insns) */
void f_1189ef40(void) {
  FTRACE(0x1189ef40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189ef40 push ebp */
  push32((uint32_t)(EBP));
  /* 1189ef41 mov ebp, esp */
  EBP = (ESP);
L_1189ef43:;
  /* 1189ef43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189ef46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189ef49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189ef4c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1189ef4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189ef51 jle 0x1189ef73 */
  if ((C.zf||C.sf!=C.of)) goto L_1189ef73;
  /* 1189ef53 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189ef56 push edx */
  push32((uint32_t)(EDX));
  /* 1189ef57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189ef5a push eax */
  push32((uint32_t)(EAX));
  /* 1189ef5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189ef5e push ecx */
  push32((uint32_t)(ECX));
  /* 1189ef5f call 0x1189eec0 */
  push32(0x1189ef64u); f_1189eec0();
  /* 1189ef64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ef67 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189ef6a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ef6d jne 0x1189ef71 */
  if (!C.zf) goto L_1189ef71;
  /* 1189ef6f jmp 0x1189ef73 */
  goto L_1189ef73;
L_1189ef71:;
  /* 1189ef71 jmp 0x1189ef43 */
  goto L_1189ef43;
L_1189ef73:;
  /* 1189ef73 pop ebp */
  EBP = (pop32());
  /* 1189ef74 ret  */
  ESPCHK(0x1189ef40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef80 @ 0x1189ef80 (74 bytes, 31 insns) */
void f_1189ef80(void) {
  FTRACE(0x1189ef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189ef80 push ebp */
  push32((uint32_t)(EBP));
  /* 1189ef81 mov ebp, esp */
  EBP = (ESP);
  /* 1189ef83 push ecx */
  push32((uint32_t)(ECX));
L_1189ef84:;
  /* 1189ef84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189ef87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189ef8a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189ef8d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1189ef90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189ef92 jle 0x1189efc6 */
  if ((C.zf||C.sf!=C.of)) goto L_1189efc6;
  /* 1189ef94 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189ef97 push edx */
  push32((uint32_t)(EDX));
  /* 1189ef98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189ef9b push eax */
  push32((uint32_t)(EAX));
  /* 1189ef9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189ef9f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1189efa2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189efa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189efa8 push eax */
  push32((uint32_t)(EAX));
  /* 1189efa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189efac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189efaf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1189efb2 call 0x1189eec0 */
  push32(0x1189efb7u); f_1189eec0();
  /* 1189efb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189efba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189efbd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189efc0 jne 0x1189efc4 */
  if (!C.zf) goto L_1189efc4;
  /* 1189efc2 jmp 0x1189efc6 */
  goto L_1189efc6;
L_1189efc4:;
  /* 1189efc4 jmp 0x1189ef84 */
  goto L_1189ef84;
L_1189efc6:;
  /* 1189efc6 mov esp, ebp */
  ESP = (EBP);
  /* 1189efc8 pop ebp */
  EBP = (pop32());
  /* 1189efc9 ret  */
  ESPCHK(0x1189ef80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efd0 @ 0x1189efd0 (26 bytes, 12 insns) */
void f_1189efd0(void) {
  FTRACE(0x1189efd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189efd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189efd1 mov ebp, esp */
  EBP = (ESP);
  /* 1189efd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189efd6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189efd8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189efdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189efde mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1189efe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189efe3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189efe5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1189efe8 pop ebp */
  EBP = (pop32());
  /* 1189efe9 ret  */
  ESPCHK(0x1189efd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eff0 @ 0x1189eff0 (31 bytes, 14 insns) */
void f_1189eff0(void) {
  FTRACE(0x1189eff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189eff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189eff1 mov ebp, esp */
  EBP = (ESP);
  /* 1189eff3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189eff6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189eff8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189effb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189effe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1189f000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f003 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189f005 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189f008 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1189f00a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189f00d pop ebp */
  EBP = (pop32());
  /* 1189f00e ret  */
  ESPCHK(0x1189eff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f010 @ 0x1189f010 (27 bytes, 12 insns) */
void f_1189f010(void) {
  FTRACE(0x1189f010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189f010 push ebp */
  push32((uint32_t)(EBP));
  /* 1189f011 mov ebp, esp */
  EBP = (ESP);
  /* 1189f013 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f016 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189f018 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f01b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f01e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1189f020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f023 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189f025 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1189f029 pop ebp */
  EBP = (pop32());
  /* 1189f02a ret  */
  ESPCHK(0x1189f010u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1189f030 (145 bytes, 42 insns) */
void f_1189f030(void) {
  FTRACE(0x1189f030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189f030 push ebp */
  push32((uint32_t)(EBP));
  /* 1189f031 mov ebp, esp */
  EBP = (ESP);
  /* 1189f033 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f034 call 0x1189f0e0 */
  push32(0x1189f039u); f_1189f0e0();
  /* 1189f039 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f03c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1189f03e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1189f045 jmp 0x1189f050 */
  goto L_1189f050;
L_1189f047:;
  /* 1189f047 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189f04a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f04d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1189f050:;
  /* 1189f050 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f054 jae 0x1189f07a */
  if (!C.cf) goto L_1189f07a;
  /* 1189f056 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189f059 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f05c cmp ecx, dword ptr [eax*8 + 0x118c1fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x118c1fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f063 jne 0x1189f078 */
  if (!C.zf) goto L_1189f078;
  /* 1189f065 call 0x1189f0d0 */
  push32(0x1189f06au); f_1189f0d0();
  /* 1189f06a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189f06d mov ecx, dword ptr [edx*8 + 0x118c1fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x118c1fbc)));
  /* 1189f074 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1189f076 jmp 0x1189f0bd */
  goto L_1189f0bd;
L_1189f078:;
  /* 1189f078 jmp 0x1189f047 */
  goto L_1189f047;
L_1189f07a:;
  /* 1189f07a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f07e jb 0x1189f093 */
  if (C.cf) goto L_1189f093;
  /* 1189f080 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f084 ja 0x1189f093 */
  if ((!C.cf&&!C.zf)) goto L_1189f093;
  /* 1189f086 call 0x1189f0d0 */
  push32(0x1189f08bu); f_1189f0d0();
  /* 1189f08b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1189f091 jmp 0x1189f0bd */
  goto L_1189f0bd;
L_1189f093:;
  /* 1189f093 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f09a jb 0x1189f0b2 */
  if (C.cf) goto L_1189f0b2;
  /* 1189f09c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f0a3 ja 0x1189f0b2 */
  if ((!C.cf&&!C.zf)) goto L_1189f0b2;
  /* 1189f0a5 call 0x1189f0d0 */
  push32(0x1189f0aau); f_1189f0d0();
  /* 1189f0aa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1189f0b0 jmp 0x1189f0bd */
  goto L_1189f0bd;
L_1189f0b2:;
  /* 1189f0b2 call 0x1189f0d0 */
  push32(0x1189f0b7u); f_1189f0d0();
  /* 1189f0b7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1189f0bd:;
  /* 1189f0bd mov esp, ebp */
  ESP = (EBP);
  /* 1189f0bf pop ebp */
  EBP = (pop32());
  /* 1189f0c0 ret  */
  ESPCHK(0x1189f030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0d0 @ 0x1189f0d0 (13 bytes, 6 insns) */
void f_1189f0d0(void) {
  FTRACE(0x1189f0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189f0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189f0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1189f0d3 call 0x11896c40 */
  push32(0x1189f0d8u); f_11896c40();
  /* 1189f0d8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f0db pop ebp */
  EBP = (pop32());
  /* 1189f0dc ret  */
  ESPCHK(0x1189f0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0e0 @ 0x1189f0e0 (13 bytes, 6 insns) */
void f_1189f0e0(void) {
  FTRACE(0x1189f0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189f0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189f0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1189f0e3 call 0x11896c40 */
  push32(0x1189f0e8u); f_11896c40();
  /* 1189f0e8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f0eb pop ebp */
  EBP = (pop32());
  /* 1189f0ec ret  */
  ESPCHK(0x1189f0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0f0 @ 0x1189f0f0 (664 bytes, 264 insns) [15 switch table(s)] */
void f_1189f0f0(void) {
  FTRACE(0x1189f0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189f0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189f0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1189f0f3 push edi */
  push32((uint32_t)(EDI));
  /* 1189f0f4 push esi */
  push32((uint32_t)(ESI));
  /* 1189f0f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1189f0f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189f0fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f0fe mov eax, ecx */
  EAX = (ECX);
  /* 1189f100 mov edx, ecx */
  EDX = (ECX);
  /* 1189f102 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f104 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f106 jbe 0x1189f110 */
  if ((C.cf||C.zf)) goto L_1189f110;
  /* 1189f108 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f10a jb 0x1189f288 */
  if (C.cf) goto L_1189f288;
L_1189f110:;
  /* 1189f110 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1189f116 jne 0x1189f12c */
  if (!C.zf) goto L_1189f12c;
  /* 1189f118 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189f11b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1189f11e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f121 jb 0x1189f14c */
  if (C.cf) goto L_1189f14c;
  /* 1189f123 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189f125 jmp dword ptr [edx*4 + 0x1189f238] */
  switch (EDX) {
    case 0: goto L_1189f248;
    case 1: goto L_1189f250;
    case 2: goto L_1189f25c;
    case 3: goto L_1189f270;
    default: x86_unimpl("switch@0x1189f125 out of table"); return;
  }
L_1189f12c:;
  /* 1189f12c mov eax, edi */
  EAX = (EDI);
  /* 1189f12e mov edx, 3 */
  EDX = (0x3u);
  /* 1189f133 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189f136 jb 0x1189f144 */
  if (C.cf) goto L_1189f144;
  /* 1189f138 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1189f13b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f13d jmp dword ptr [eax*4 + 0x1189f150] */
  switch (EAX) {
    case 1: goto L_1189f160;
    case 2: goto L_1189f18c;
    case 3: goto L_1189f1b0;
    default: x86_unimpl("switch@0x1189f13d out of table"); return;
  }
L_1189f144:;
  /* 1189f144 jmp dword ptr [ecx*4 + 0x1189f248] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1189f248)))); return;
  /* 1189f14b nop  */
  /* nop */
L_1189f14c:;
  /* 1189f14c jmp dword ptr [ecx*4 + 0x1189f1cc] */
  switch (ECX) {
    case 0: goto L_1189f22f;
    case 1: goto L_1189f21c;
    case 2: goto L_1189f214;
    case 3: goto L_1189f20c;
    case 4: goto L_1189f204;
    case 5: goto L_1189f1fc;
    case 6: goto L_1189f1f4;
    case 7: goto L_1189f1ec;
    default: x86_unimpl("switch@0x1189f14c out of table"); return;
  }
  /* 1189f153 nop  */
  /* nop */
L_1189f160:;
  /* 1189f160 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1189f162 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1189f164 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189f166 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1189f169 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1189f16c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1189f16f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189f172 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1189f175 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f178 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f17b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f17e jb 0x1189f14c */
  if (C.cf) goto L_1189f14c;
  /* 1189f180 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189f182 jmp dword ptr [edx*4 + 0x1189f238] */
  switch (EDX) {
    case 0: goto L_1189f248;
    case 1: goto L_1189f250;
    case 2: goto L_1189f25c;
    case 3: goto L_1189f270;
    default: x86_unimpl("switch@0x1189f182 out of table"); return;
  }
  /* 1189f189 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1189f18c:;
  /* 1189f18c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1189f18e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1189f190 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189f192 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1189f195 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189f198 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1189f19b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f19e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f1a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f1a4 jb 0x1189f14c */
  if (C.cf) goto L_1189f14c;
  /* 1189f1a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189f1a8 jmp dword ptr [edx*4 + 0x1189f238] */
  switch (EDX) {
    case 0: goto L_1189f248;
    case 1: goto L_1189f250;
    case 2: goto L_1189f25c;
    case 3: goto L_1189f270;
    default: x86_unimpl("switch@0x1189f1a8 out of table"); return;
  }
  /* 1189f1af nop  */
  /* nop */
L_1189f1b0:;
  /* 1189f1b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1189f1b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1189f1b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189f1b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1189f1b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189f1ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1189f1bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f1be jb 0x1189f14c */
  if (C.cf) goto L_1189f14c;
  /* 1189f1c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189f1c2 jmp dword ptr [edx*4 + 0x1189f238] */
  switch (EDX) {
    case 0: goto L_1189f248;
    case 1: goto L_1189f250;
    case 2: goto L_1189f25c;
    case 3: goto L_1189f270;
    default: x86_unimpl("switch@0x1189f1c2 out of table"); return;
  }
  /* 1189f1c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1189f1ec:;
  /* 1189f1ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1189f1f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1189f1f4:;
  /* 1189f1f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1189f1f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1189f1fc:;
  /* 1189f1fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1189f200 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1189f204:;
  /* 1189f204 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1189f208 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1189f20c:;
  /* 1189f20c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1189f210 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1189f214:;
  /* 1189f214 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1189f218 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1189f21c:;
  /* 1189f21c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1189f220 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1189f224 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1189f22b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f22d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1189f22f:;
  /* 1189f22f jmp dword ptr [edx*4 + 0x1189f238] */
  switch (EDX) {
    case 0: goto L_1189f248;
    case 1: goto L_1189f250;
    case 2: goto L_1189f25c;
    case 3: goto L_1189f270;
    default: x86_unimpl("switch@0x1189f22f out of table"); return;
  }
  /* 1189f236 mov edi, edi */
  EDI = (EDI);
L_1189f248:;
  /* 1189f248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f24b pop esi */
  ESI = (pop32());
  /* 1189f24c pop edi */
  EDI = (pop32());
  /* 1189f24d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189f24e ret  */
  ESPCHK(0x1189f0f0u, _esp0);
  ESP += 4; return;
  /* 1189f24f nop  */
  /* nop */
L_1189f250:;
  /* 1189f250 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1189f252 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189f254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f257 pop esi */
  ESI = (pop32());
  /* 1189f258 pop edi */
  EDI = (pop32());
  /* 1189f259 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189f25a ret  */
  ESPCHK(0x1189f0f0u, _esp0);
  ESP += 4; return;
  /* 1189f25b nop  */
  /* nop */
L_1189f25c:;
  /* 1189f25c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1189f25e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189f260 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1189f263 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1189f266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f269 pop esi */
  ESI = (pop32());
  /* 1189f26a pop edi */
  EDI = (pop32());
  /* 1189f26b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189f26c ret  */
  ESPCHK(0x1189f0f0u, _esp0);
  ESP += 4; return;
  /* 1189f26d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1189f270:;
  /* 1189f270 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1189f272 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189f274 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1189f277 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1189f27a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1189f27d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1189f280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f283 pop esi */
  ESI = (pop32());
  /* 1189f284 pop edi */
  EDI = (pop32());
  /* 1189f285 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189f286 ret  */
  ESPCHK(0x1189f0f0u, _esp0);
  ESP += 4; return;
  /* 1189f287 nop  */
  /* nop */
L_1189f288:;
  /* 1189f288 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1189f28c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1189f290 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1189f296 jne 0x1189f2bc */
  if (!C.zf) goto L_1189f2bc;
  /* 1189f298 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189f29b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1189f29e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f2a1 jb 0x1189f2b0 */
  if (C.cf) goto L_1189f2b0;
  /* 1189f2a3 std  */
  C.df=1;
  /* 1189f2a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189f2a6 cld  */
  C.df=0;
  /* 1189f2a7 jmp dword ptr [edx*4 + 0x1189f3d0] */
  switch (EDX) {
    case 0: goto L_1189f3e0;
    case 1: goto L_1189f3e8;
    case 2: goto L_1189f3f8;
    case 3: goto L_1189f40c;
    default: x86_unimpl("switch@0x1189f2a7 out of table"); return;
  }
  /* 1189f2ae mov edi, edi */
  EDI = (EDI);
L_1189f2b0:;
  /* 1189f2b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1189f2b2 jmp dword ptr [ecx*4 + 0x1189f380] */
  switch (ECX) {
    case 0: goto L_1189f3c7;
    default: x86_unimpl("switch@0x1189f2b2 out of table"); return;
  }
  /* 1189f2b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1189f2bc:;
  /* 1189f2bc mov eax, edi */
  EAX = (EDI);
  /* 1189f2be mov edx, 3 */
  EDX = (0x3u);
  /* 1189f2c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f2c6 jb 0x1189f2d4 */
  if (C.cf) goto L_1189f2d4;
  /* 1189f2c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1189f2cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189f2cd jmp dword ptr [eax*4 + 0x1189f2d8] */
  switch (EAX) {
    case 1: goto L_1189f2e8;
    case 2: goto L_1189f308;
    case 3: goto L_1189f330;
    default: x86_unimpl("switch@0x1189f2cd out of table"); return;
  }
L_1189f2d4:;
  /* 1189f2d4 jmp dword ptr [ecx*4 + 0x1189f3d0] */
  switch (ECX) {
    case 0: goto L_1189f3e0;
    case 1: goto L_1189f3e8;
    case 2: goto L_1189f3f8;
    case 3: goto L_1189f40c;
    default: x86_unimpl("switch@0x1189f2d4 out of table"); return;
  }
  /* 1189f2db nop  */
  /* nop */
L_1189f2e8:;
  /* 1189f2e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1189f2eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1189f2ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1189f2f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1189f2f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189f2f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1189f2f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f2f8 jb 0x1189f2b0 */
  if (C.cf) goto L_1189f2b0;
  /* 1189f2fa std  */
  C.df=1;
  /* 1189f2fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189f2fd cld  */
  C.df=0;
  /* 1189f2fe jmp dword ptr [edx*4 + 0x1189f3d0] */
  switch (EDX) {
    case 0: goto L_1189f3e0;
    case 1: goto L_1189f3e8;
    case 2: goto L_1189f3f8;
    case 3: goto L_1189f40c;
    default: x86_unimpl("switch@0x1189f2fe out of table"); return;
  }
  /* 1189f305 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1189f308:;
  /* 1189f308 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1189f30b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1189f30d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1189f310 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1189f313 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189f316 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1189f319 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189f31c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189f31f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f322 jb 0x1189f2b0 */
  if (C.cf) goto L_1189f2b0;
  /* 1189f324 std  */
  C.df=1;
  /* 1189f325 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189f327 cld  */
  C.df=0;
  /* 1189f328 jmp dword ptr [edx*4 + 0x1189f3d0] */
  switch (EDX) {
    case 0: goto L_1189f3e0;
    case 1: goto L_1189f3e8;
    case 2: goto L_1189f3f8;
    case 3: goto L_1189f40c;
    default: x86_unimpl("switch@0x1189f328 out of table"); return;
  }
  /* 1189f32f nop  */
  /* nop */
L_1189f330:;
  /* 1189f330 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1189f333 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1189f335 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1189f338 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1189f33b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1189f33e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1189f341 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189f344 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1189f347 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189f34a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189f34d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f350 jb 0x1189f2b0 */
  if (C.cf) goto L_1189f2b0;
  /* 1189f356 std  */
  C.df=1;
  /* 1189f357 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1189f359 cld  */
  C.df=0;
  /* 1189f35a jmp dword ptr [edx*4 + 0x1189f3d0] */
  switch (EDX) {
    case 0: goto L_1189f3e0;
    case 1: goto L_1189f3e8;
    case 2: goto L_1189f3f8;
    case 3: goto L_1189f40c;
    default: x86_unimpl("switch@0x1189f35a out of table"); return;
  }
  /* 1189f361 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1189f364 test bl, dh */
  { uint32_t _r=(BL)&(C.d.b.h); fl_logic(_r,8); }
  /* 1189f366 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189f369 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189f36c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1189f36d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189f370 pushfd  */
  x86_unimpl("pushfd @ 0x1189f370");
  /* 1189f371 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189f374 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1189f375 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189f378 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1189f379 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189f37c mov ah, 0xf3 */
  AH = (0xf3u);
  /* 1189f37e mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189f384 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1189f388 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1189f38c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1189f390 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1189f394 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1189f398 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1189f39c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1189f3a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1189f3a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1189f3a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1189f3ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1189f3b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1189f3b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1189f3b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1189f3bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1189f3c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f3c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1189f3c7:;
  /* 1189f3c7 jmp dword ptr [edx*4 + 0x1189f3d0] */
  switch (EDX) {
    case 0: goto L_1189f3e0;
    case 1: goto L_1189f3e8;
    case 2: goto L_1189f3f8;
    case 3: goto L_1189f40c;
    default: x86_unimpl("switch@0x1189f3c7 out of table"); return;
  }
  /* 1189f3ce mov edi, edi */
  EDI = (EDI);
L_1189f3e0:;
  /* 1189f3e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f3e3 pop esi */
  ESI = (pop32());
  /* 1189f3e4 pop edi */
  EDI = (pop32());
  /* 1189f3e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189f3e6 ret  */
  ESPCHK(0x1189f0f0u, _esp0);
  ESP += 4; return;
  /* 1189f3e7 nop  */
  /* nop */
L_1189f3e8:;
  /* 1189f3e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1189f3eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1189f3ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f3f1 pop esi */
  ESI = (pop32());
  /* 1189f3f2 pop edi */
  EDI = (pop32());
  /* 1189f3f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189f3f4 ret  */
  ESPCHK(0x1189f0f0u, _esp0);
  ESP += 4; return;
  /* 1189f3f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1189f3f8:;
  /* 1189f3f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1189f3fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1189f3fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1189f401 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1189f404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f407 pop esi */
  ESI = (pop32());
  /* 1189f408 pop edi */
  EDI = (pop32());
  /* 1189f409 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189f40a ret  */
  ESPCHK(0x1189f0f0u, _esp0);
  ESP += 4; return;
  /* 1189f40b nop  */
  /* nop */
L_1189f40c:;
  /* 1189f40c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1189f40f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1189f412 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1189f415 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1189f418 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1189f41b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1189f41e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f421 pop esi */
  ESI = (pop32());
  /* 1189f422 pop edi */
  EDI = (pop32());
  /* 1189f423 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1189f424 ret  */
  ESPCHK(0x1189f0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f430 @ 0x1189f430 (421 bytes, 148 insns) */
void f_1189f430(void) {
  FTRACE(0x1189f430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189f430 push ebp */
  push32((uint32_t)(EBP));
  /* 1189f431 mov ebp, esp */
  EBP = (ESP);
  /* 1189f433 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1189f435 push 0x118bfb38 */
  push32((uint32_t)(0x118bfb38u));
  /* 1189f43a push 0x118a0308 */
  push32((uint32_t)(0x118a0308u));
  /* 1189f43f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1189f445 push eax */
  push32((uint32_t)(EAX));
  /* 1189f446 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1189f44d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f450 push ebx */
  push32((uint32_t)(EBX));
  /* 1189f451 push esi */
  push32((uint32_t)(ESI));
  /* 1189f452 push edi */
  push32((uint32_t)(EDI));
  /* 1189f453 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1189f456 cmp dword ptr [0x118c39ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c39ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f45d jne 0x1189f4ae */
  if (!C.zf) goto L_1189f4ae;
  /* 1189f45f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1189f462 push eax */
  push32((uint32_t)(EAX));
  /* 1189f463 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189f465 push 0x118bfb34 */
  push32((uint32_t)(0x118bfb34u));
  /* 1189f46a push 1 */
  push32((uint32_t)(0x1u));
  /* 1189f46c call dword ptr [0x118c631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c631c))), 0x1189f472u);
  /* 1189f472 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189f474 je 0x1189f482 */
  if (C.zf) goto L_1189f482;
  /* 1189f476 mov dword ptr [0x118c39ac], 1 */
  w32((uint32_t)(0x118c39ac), (0x1u));
  /* 1189f480 jmp 0x1189f4ae */
  goto L_1189f4ae;
L_1189f482:;
  /* 1189f482 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1189f485 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f486 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189f488 push 0x118bfb30 */
  push32((uint32_t)(0x118bfb30u));
  /* 1189f48d push 1 */
  push32((uint32_t)(0x1u));
  /* 1189f48f push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f491 call dword ptr [0x118c632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c632c))), 0x1189f497u);
  /* 1189f497 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189f499 je 0x1189f4a7 */
  if (C.zf) goto L_1189f4a7;
  /* 1189f49b mov dword ptr [0x118c39ac], 2 */
  w32((uint32_t)(0x118c39ac), (0x2u));
  /* 1189f4a5 jmp 0x1189f4ae */
  goto L_1189f4ae;
L_1189f4a7:;
  /* 1189f4a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f4a9 jmp 0x1189f5d8 */
  goto L_1189f5d8;
L_1189f4ae:;
  /* 1189f4ae cmp dword ptr [0x118c39ac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x118c39ac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f4b5 jne 0x1189f4e5 */
  if (!C.zf) goto L_1189f4e5;
  /* 1189f4b7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f4bb jne 0x1189f4c6 */
  if (!C.zf) goto L_1189f4c6;
  /* 1189f4bd mov edx, dword ptr [0x118c39b8] */
  EDX = (r32((uint32_t)(0x118c39b8)));
  /* 1189f4c3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1189f4c6:;
  /* 1189f4c6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189f4c9 push eax */
  push32((uint32_t)(EAX));
  /* 1189f4ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189f4cd push ecx */
  push32((uint32_t)(ECX));
  /* 1189f4ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189f4d1 push edx */
  push32((uint32_t)(EDX));
  /* 1189f4d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f4d5 push eax */
  push32((uint32_t)(EAX));
  /* 1189f4d6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1189f4d9 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f4da call dword ptr [0x118c632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c632c))), 0x1189f4e0u);
  /* 1189f4e0 jmp 0x1189f5d8 */
  goto L_1189f5d8;
L_1189f4e5:;
  /* 1189f4e5 cmp dword ptr [0x118c39ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c39ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f4ec jne 0x1189f5d6 */
  if (!C.zf) goto L_1189f5d6;
  /* 1189f4f2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f4f6 jne 0x1189f501 */
  if (!C.zf) goto L_1189f501;
  /* 1189f4f8 mov edx, dword ptr [0x118c39c8] */
  EDX = (r32((uint32_t)(0x118c39c8)));
  /* 1189f4fe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1189f501:;
  /* 1189f501 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f503 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f505 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189f508 push eax */
  push32((uint32_t)(EAX));
  /* 1189f509 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189f50c push ecx */
  push32((uint32_t)(ECX));
  /* 1189f50d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1189f510 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1189f512 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189f514 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1189f517 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f51a push edx */
  push32((uint32_t)(EDX));
  /* 1189f51b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189f51e push eax */
  push32((uint32_t)(EAX));
  /* 1189f51f call dword ptr [0x118c6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6324))), 0x1189f525u);
  /* 1189f525 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1189f528 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f52c jne 0x1189f535 */
  if (!C.zf) goto L_1189f535;
  /* 1189f52e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f530 jmp 0x1189f5d8 */
  goto L_1189f5d8;
L_1189f535:;
  /* 1189f535 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1189f53c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189f53f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1189f541 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f544 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1189f546 call 0x1189a3a0 */
  push32(0x1189f54bu); f_1189a3a0();
  /* 1189f54b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1189f54e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1189f551 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189f554 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1189f557 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189f55a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1189f55c push edx */
  push32((uint32_t)(EDX));
  /* 1189f55d push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f55f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189f562 push eax */
  push32((uint32_t)(EAX));
  /* 1189f563 call 0x1189af70 */
  push32(0x1189f568u); f_1189af70();
  /* 1189f568 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f56b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1189f572 jmp 0x1189f58b */
  goto L_1189f58b;
  /* 1189f574 mov eax, 1 */
  EAX = (0x1u);
  /* 1189f579 ret  */
  ESPCHK(0x1189f430u, _esp0);
  ESP += 4; return;
  /* 1189f57a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1189f57d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1189f584 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1189f58b:;
  /* 1189f58b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f58f jne 0x1189f595 */
  if (!C.zf) goto L_1189f595;
  /* 1189f591 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f593 jmp 0x1189f5d8 */
  goto L_1189f5d8;
L_1189f595:;
  /* 1189f595 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189f598 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f599 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189f59c push edx */
  push32((uint32_t)(EDX));
  /* 1189f59d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189f5a0 push eax */
  push32((uint32_t)(EAX));
  /* 1189f5a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189f5a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f5a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189f5a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189f5aa push edx */
  push32((uint32_t)(EDX));
  /* 1189f5ab call dword ptr [0x118c6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6324))), 0x1189f5b1u);
  /* 1189f5b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1189f5b4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f5b8 jne 0x1189f5be */
  if (!C.zf) goto L_1189f5be;
  /* 1189f5ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f5bc jmp 0x1189f5d8 */
  goto L_1189f5d8;
L_1189f5be:;
  /* 1189f5be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189f5c1 push eax */
  push32((uint32_t)(EAX));
  /* 1189f5c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189f5c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f5c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189f5c9 push edx */
  push32((uint32_t)(EDX));
  /* 1189f5ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f5cd push eax */
  push32((uint32_t)(EAX));
  /* 1189f5ce call dword ptr [0x118c631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c631c))), 0x1189f5d4u);
  /* 1189f5d4 jmp 0x1189f5d8 */
  goto L_1189f5d8;
L_1189f5d6:;
  /* 1189f5d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1189f5d8:;
  /* 1189f5d8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1189f5db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189f5de mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1189f5e5 pop edi */
  EDI = (pop32());
  /* 1189f5e6 pop esi */
  ESI = (pop32());
  /* 1189f5e7 pop ebx */
  EBX = (pop32());
  /* 1189f5e8 mov esp, ebp */
  ESP = (EBP);
  /* 1189f5ea pop ebp */
  EBP = (pop32());
  /* 1189f5eb ret  */
  ESPCHK(0x1189f430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5f0 @ 0x1189f5f0 (727 bytes, 263 insns) */
void f_1189f5f0(void) {
  FTRACE(0x1189f5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189f5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189f5f1 mov ebp, esp */
  EBP = (ESP);
  /* 1189f5f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1189f5f5 push 0x118bfb48 */
  push32((uint32_t)(0x118bfb48u));
  /* 1189f5fa push 0x118a0308 */
  push32((uint32_t)(0x118a0308u));
  /* 1189f5ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1189f605 push eax */
  push32((uint32_t)(EAX));
  /* 1189f606 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1189f60d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f610 push ebx */
  push32((uint32_t)(EBX));
  /* 1189f611 push esi */
  push32((uint32_t)(ESI));
  /* 1189f612 push edi */
  push32((uint32_t)(EDI));
  /* 1189f613 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1189f616 cmp dword ptr [0x118c39d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c39d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f61d jne 0x1189f676 */
  if (!C.zf) goto L_1189f676;
  /* 1189f61f push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f621 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f623 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189f625 push 0x118bfb34 */
  push32((uint32_t)(0x118bfb34u));
  /* 1189f62a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1189f62f push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f631 call dword ptr [0x118c6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6320))), 0x1189f637u);
  /* 1189f637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189f639 je 0x1189f647 */
  if (C.zf) goto L_1189f647;
  /* 1189f63b mov dword ptr [0x118c39d0], 1 */
  w32((uint32_t)(0x118c39d0), (0x1u));
  /* 1189f645 jmp 0x1189f676 */
  goto L_1189f676;
L_1189f647:;
  /* 1189f647 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f649 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f64b push 1 */
  push32((uint32_t)(0x1u));
  /* 1189f64d push 0x118bfb30 */
  push32((uint32_t)(0x118bfb30u));
  /* 1189f652 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1189f657 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f659 call dword ptr [0x118c6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6318))), 0x1189f65fu);
  /* 1189f65f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189f661 je 0x1189f66f */
  if (C.zf) goto L_1189f66f;
  /* 1189f663 mov dword ptr [0x118c39d0], 2 */
  w32((uint32_t)(0x118c39d0), (0x2u));
  /* 1189f66d jmp 0x1189f676 */
  goto L_1189f676;
L_1189f66f:;
  /* 1189f66f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f671 jmp 0x1189f8e1 */
  goto L_1189f8e1;
L_1189f676:;
  /* 1189f676 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f67a jle 0x1189f68f */
  if ((C.zf||C.sf!=C.of)) goto L_1189f68f;
  /* 1189f67c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189f67f push eax */
  push32((uint32_t)(EAX));
  /* 1189f680 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189f683 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f684 call 0x1189f900 */
  push32(0x1189f689u); f_1189f900();
  /* 1189f689 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f68c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1189f68f:;
  /* 1189f68f cmp dword ptr [0x118c39d0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x118c39d0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f696 jne 0x1189f6bb */
  if (!C.zf) goto L_1189f6bb;
  /* 1189f698 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1189f69b push edx */
  push32((uint32_t)(EDX));
  /* 1189f69c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189f69f push eax */
  push32((uint32_t)(EAX));
  /* 1189f6a0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189f6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f6a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189f6a7 push edx */
  push32((uint32_t)(EDX));
  /* 1189f6a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189f6ab push eax */
  push32((uint32_t)(EAX));
  /* 1189f6ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f6af push ecx */
  push32((uint32_t)(ECX));
  /* 1189f6b0 call dword ptr [0x118c6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6318))), 0x1189f6b6u);
  /* 1189f6b6 jmp 0x1189f8e1 */
  goto L_1189f8e1;
L_1189f6bb:;
  /* 1189f6bb cmp dword ptr [0x118c39d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c39d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f6c2 jne 0x1189f8df */
  if (!C.zf) goto L_1189f8df;
  /* 1189f6c8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f6cc jne 0x1189f6d7 */
  if (!C.zf) goto L_1189f6d7;
  /* 1189f6ce mov edx, dword ptr [0x118c39c8] */
  EDX = (r32((uint32_t)(0x118c39c8)));
  /* 1189f6d4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1189f6d7:;
  /* 1189f6d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f6d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f6db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189f6de push eax */
  push32((uint32_t)(EAX));
  /* 1189f6df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189f6e2 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f6e3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1189f6e6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1189f6e8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189f6ea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1189f6ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f6f0 push edx */
  push32((uint32_t)(EDX));
  /* 1189f6f1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1189f6f4 push eax */
  push32((uint32_t)(EAX));
  /* 1189f6f5 call dword ptr [0x118c6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6324))), 0x1189f6fbu);
  /* 1189f6fb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1189f6fe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f702 jne 0x1189f70b */
  if (!C.zf) goto L_1189f70b;
  /* 1189f704 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f706 jmp 0x1189f8e1 */
  goto L_1189f8e1;
L_1189f70b:;
  /* 1189f70b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1189f712 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189f715 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1189f717 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f71a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1189f71c call 0x1189a3a0 */
  push32(0x1189f721u); f_1189a3a0();
  /* 1189f721 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1189f724 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1189f727 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1189f72a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1189f72d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1189f734 jmp 0x1189f74d */
  goto L_1189f74d;
  /* 1189f736 mov eax, 1 */
  EAX = (0x1u);
  /* 1189f73b ret  */
  ESPCHK(0x1189f5f0u, _esp0);
  ESP += 4; return;
  /* 1189f73c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1189f73f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1189f746 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1189f74d:;
  /* 1189f74d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f751 jne 0x1189f75a */
  if (!C.zf) goto L_1189f75a;
  /* 1189f753 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f755 jmp 0x1189f8e1 */
  goto L_1189f8e1;
L_1189f75a:;
  /* 1189f75a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189f75d push edx */
  push32((uint32_t)(EDX));
  /* 1189f75e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189f761 push eax */
  push32((uint32_t)(EAX));
  /* 1189f762 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189f765 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f766 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189f769 push edx */
  push32((uint32_t)(EDX));
  /* 1189f76a push 1 */
  push32((uint32_t)(0x1u));
  /* 1189f76c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1189f76f push eax */
  push32((uint32_t)(EAX));
  /* 1189f770 call dword ptr [0x118c6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6324))), 0x1189f776u);
  /* 1189f776 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189f778 jne 0x1189f781 */
  if (!C.zf) goto L_1189f781;
  /* 1189f77a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f77c jmp 0x1189f8e1 */
  goto L_1189f8e1;
L_1189f781:;
  /* 1189f781 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f783 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f785 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189f788 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f789 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189f78c push edx */
  push32((uint32_t)(EDX));
  /* 1189f78d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189f790 push eax */
  push32((uint32_t)(EAX));
  /* 1189f791 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f794 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f795 call dword ptr [0x118c6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6320))), 0x1189f79bu);
  /* 1189f79b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1189f79e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f7a2 jne 0x1189f7ab */
  if (!C.zf) goto L_1189f7ab;
  /* 1189f7a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f7a6 jmp 0x1189f8e1 */
  goto L_1189f8e1;
L_1189f7ab:;
  /* 1189f7ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189f7ae and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1189f7b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189f7b6 je 0x1189f7fb */
  if (C.zf) goto L_1189f7fb;
  /* 1189f7b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f7bc je 0x1189f7f6 */
  if (C.zf) goto L_1189f7f6;
  /* 1189f7be mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189f7c1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f7c4 jle 0x1189f7cd */
  if ((C.zf||C.sf!=C.of)) goto L_1189f7cd;
  /* 1189f7c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f7c8 jmp 0x1189f8e1 */
  goto L_1189f8e1;
L_1189f7cd:;
  /* 1189f7cd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1189f7d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f7d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189f7d4 push edx */
  push32((uint32_t)(EDX));
  /* 1189f7d5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189f7d8 push eax */
  push32((uint32_t)(EAX));
  /* 1189f7d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189f7dc push ecx */
  push32((uint32_t)(ECX));
  /* 1189f7dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189f7e0 push edx */
  push32((uint32_t)(EDX));
  /* 1189f7e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f7e4 push eax */
  push32((uint32_t)(EAX));
  /* 1189f7e5 call dword ptr [0x118c6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6320))), 0x1189f7ebu);
  /* 1189f7eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189f7ed jne 0x1189f7f6 */
  if (!C.zf) goto L_1189f7f6;
  /* 1189f7ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f7f1 jmp 0x1189f8e1 */
  goto L_1189f8e1;
L_1189f7f6:;
  /* 1189f7f6 jmp 0x1189f8da */
  goto L_1189f8da;
L_1189f7fb:;
  /* 1189f7fb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189f7fe mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1189f801 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1189f808 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189f80b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1189f80d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f810 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1189f812 call 0x1189a3a0 */
  push32(0x1189f817u); f_1189a3a0();
  /* 1189f817 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1189f81a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1189f81d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1189f820 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1189f823 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1189f82a jmp 0x1189f843 */
  goto L_1189f843;
  /* 1189f82c mov eax, 1 */
  EAX = (0x1u);
  /* 1189f831 ret  */
  ESPCHK(0x1189f5f0u, _esp0);
  ESP += 4; return;
  /* 1189f832 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1189f835 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1189f83c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1189f843:;
  /* 1189f843 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f847 jne 0x1189f850 */
  if (!C.zf) goto L_1189f850;
  /* 1189f849 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f84b jmp 0x1189f8e1 */
  goto L_1189f8e1;
L_1189f850:;
  /* 1189f850 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189f853 push eax */
  push32((uint32_t)(EAX));
  /* 1189f854 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189f857 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f858 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1189f85b push edx */
  push32((uint32_t)(EDX));
  /* 1189f85c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189f85f push eax */
  push32((uint32_t)(EAX));
  /* 1189f860 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189f863 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f864 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f867 push edx */
  push32((uint32_t)(EDX));
  /* 1189f868 call dword ptr [0x118c6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6320))), 0x1189f86eu);
  /* 1189f86e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189f870 jne 0x1189f876 */
  if (!C.zf) goto L_1189f876;
  /* 1189f872 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f874 jmp 0x1189f8e1 */
  goto L_1189f8e1;
L_1189f876:;
  /* 1189f876 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f87a jne 0x1189f8aa */
  if (!C.zf) goto L_1189f8aa;
  /* 1189f87c push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f87e push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f880 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f882 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f884 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189f887 push eax */
  push32((uint32_t)(EAX));
  /* 1189f888 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189f88b push ecx */
  push32((uint32_t)(ECX));
  /* 1189f88c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1189f891 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1189f894 push edx */
  push32((uint32_t)(EDX));
  /* 1189f895 call dword ptr [0x118c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6370))), 0x1189f89bu);
  /* 1189f89b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1189f89e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f8a2 jne 0x1189f8a8 */
  if (!C.zf) goto L_1189f8a8;
  /* 1189f8a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f8a6 jmp 0x1189f8e1 */
  goto L_1189f8e1;
L_1189f8a8:;
  /* 1189f8a8 jmp 0x1189f8da */
  goto L_1189f8da;
L_1189f8aa:;
  /* 1189f8aa push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f8ac push 0 */
  push32((uint32_t)(0x0u));
  /* 1189f8ae mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1189f8b1 push eax */
  push32((uint32_t)(EAX));
  /* 1189f8b2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189f8b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f8b6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189f8b9 push edx */
  push32((uint32_t)(EDX));
  /* 1189f8ba mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189f8bd push eax */
  push32((uint32_t)(EAX));
  /* 1189f8be push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1189f8c3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1189f8c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f8c7 call dword ptr [0x118c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6370))), 0x1189f8cdu);
  /* 1189f8cd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1189f8d0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f8d4 jne 0x1189f8da */
  if (!C.zf) goto L_1189f8da;
  /* 1189f8d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189f8d8 jmp 0x1189f8e1 */
  goto L_1189f8e1;
L_1189f8da:;
  /* 1189f8da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189f8dd jmp 0x1189f8e1 */
  goto L_1189f8e1;
L_1189f8df:;
  /* 1189f8df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1189f8e1:;
  /* 1189f8e1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1189f8e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189f8e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1189f8ee pop edi */
  EDI = (pop32());
  /* 1189f8ef pop esi */
  ESI = (pop32());
  /* 1189f8f0 pop ebx */
  EBX = (pop32());
  /* 1189f8f1 mov esp, ebp */
  ESP = (EBP);
  /* 1189f8f3 pop ebp */
  EBP = (pop32());
  /* 1189f8f4 ret  */
  ESPCHK(0x1189f5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f900 @ 0x1189f900 (80 bytes, 32 insns) */
void f_1189f900(void) {
  FTRACE(0x1189f900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189f900 push ebp */
  push32((uint32_t)(EBP));
  /* 1189f901 mov ebp, esp */
  EBP = (ESP);
  /* 1189f903 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189f906 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189f909 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189f90c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f90f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1189f912:;
  /* 1189f912 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189f915 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189f918 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189f91b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189f91e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189f920 je 0x1189f937 */
  if (C.zf) goto L_1189f937;
  /* 1189f922 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189f925 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1189f928 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189f92a je 0x1189f937 */
  if (C.zf) goto L_1189f937;
  /* 1189f92c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189f92f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f932 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189f935 jmp 0x1189f912 */
  goto L_1189f912;
L_1189f937:;
  /* 1189f937 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189f93a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1189f93d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189f93f jne 0x1189f949 */
  if (!C.zf) goto L_1189f949;
  /* 1189f941 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189f944 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189f947 jmp 0x1189f94c */
  goto L_1189f94c;
L_1189f949:;
  /* 1189f949 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1189f94c:;
  /* 1189f94c mov esp, ebp */
  ESP = (EBP);
  /* 1189f94e pop ebp */
  EBP = (pop32());
  /* 1189f94f ret  */
  ESPCHK(0x1189f900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f950 @ 0x1189f950 (130 bytes, 43 insns) */
void f_1189f950(void) {
  FTRACE(0x1189f950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189f950 push ebp */
  push32((uint32_t)(EBP));
  /* 1189f951 mov ebp, esp */
  EBP = (ESP);
  /* 1189f953 push ecx */
  push32((uint32_t)(ECX));
  /* 1189f954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f957 cmp eax, dword ptr [0x118c52dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c52dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f95d jae 0x1189f981 */
  if (!C.cf) goto L_1189f981;
  /* 1189f95f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f962 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1189f965 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f968 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1189f96b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189f96e mov eax, dword ptr [ecx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118c51a0)));
  /* 1189f975 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1189f97a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1189f97d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189f97f jne 0x1189f99c */
  if (!C.zf) goto L_1189f99c;
L_1189f981:;
  /* 1189f981 call 0x1189f0d0 */
  push32(0x1189f986u); f_1189f0d0();
  /* 1189f986 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1189f98c call 0x1189f0e0 */
  push32(0x1189f991u); f_1189f0e0();
  /* 1189f991 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1189f997 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189f99a jmp 0x1189f9ce */
  goto L_1189f9ce;
L_1189f99c:;
  /* 1189f99c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f99f push edx */
  push32((uint32_t)(EDX));
  /* 1189f9a0 call 0x118a08f0 */
  push32(0x1189f9a5u); f_118a08f0();
  /* 1189f9a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f9a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189f9ab push eax */
  push32((uint32_t)(EAX));
  /* 1189f9ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189f9af push ecx */
  push32((uint32_t)(ECX));
  /* 1189f9b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f9b3 push edx */
  push32((uint32_t)(EDX));
  /* 1189f9b4 call 0x1189f9e0 */
  push32(0x1189f9b9u); f_1189f9e0();
  /* 1189f9b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f9bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189f9bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f9c2 push eax */
  push32((uint32_t)(EAX));
  /* 1189f9c3 call 0x118a0980 */
  push32(0x1189f9c8u); f_118a0980();
  /* 1189f9c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f9cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1189f9ce:;
  /* 1189f9ce mov esp, ebp */
  ESP = (EBP);
  /* 1189f9d0 pop ebp */
  EBP = (pop32());
  /* 1189f9d1 ret  */
  ESPCHK(0x1189f950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9e0 @ 0x1189f9e0 (178 bytes, 56 insns) */
void f_1189f9e0(void) {
  FTRACE(0x1189f9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189f9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189f9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1189f9e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189f9e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189f9e9 push eax */
  push32((uint32_t)(EAX));
  /* 1189f9ea call 0x118a0770 */
  push32(0x1189f9efu); f_118a0770();
  /* 1189f9ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189f9f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1189f9f5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189f9f9 jne 0x1189fa0e */
  if (!C.zf) goto L_1189fa0e;
  /* 1189f9fb call 0x1189f0d0 */
  push32(0x1189fa00u); f_1189f0d0();
  /* 1189fa00 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1189fa06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189fa09 jmp 0x1189fa8e */
  goto L_1189fa8e;
L_1189fa0e:;
  /* 1189fa0e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189fa11 push ecx */
  push32((uint32_t)(ECX));
  /* 1189fa12 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189fa14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189fa17 push edx */
  push32((uint32_t)(EDX));
  /* 1189fa18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189fa1b push eax */
  push32((uint32_t)(EAX));
  /* 1189fa1c call dword ptr [0x118c6310] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6310))), 0x1189fa22u);
  /* 1189fa22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189fa25 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fa29 jne 0x1189fa36 */
  if (!C.zf) goto L_1189fa36;
  /* 1189fa2b call dword ptr [0x118c63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63d8))), 0x1189fa31u);
  /* 1189fa31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189fa34 jmp 0x1189fa3d */
  goto L_1189fa3d;
L_1189fa36:;
  /* 1189fa36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1189fa3d:;
  /* 1189fa3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fa41 je 0x1189fa54 */
  if (C.zf) goto L_1189fa54;
  /* 1189fa43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fa46 push ecx */
  push32((uint32_t)(ECX));
  /* 1189fa47 call 0x1189f030 */
  push32(0x1189fa4cu); f_1189f030();
  /* 1189fa4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189fa4f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189fa52 jmp 0x1189fa8e */
  goto L_1189fa8e;
L_1189fa54:;
  /* 1189fa54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fa57 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1189fa5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fa5d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1189fa60 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189fa63 mov ecx, dword ptr [edx*4 + 0x118c51a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x118c51a0)));
  /* 1189fa6a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1189fa6e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1189fa71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fa74 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1189fa77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fa7a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1189fa7d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189fa80 mov eax, dword ptr [eax*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x118c51a0)));
  /* 1189fa87 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1189fa8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1189fa8e:;
  /* 1189fa8e mov esp, ebp */
  ESP = (EBP);
  /* 1189fa90 pop ebp */
  EBP = (pop32());
  /* 1189fa91 ret  */
  ESPCHK(0x1189f9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faa0 @ 0x1189faa0 (130 bytes, 43 insns) */
void f_1189faa0(void) {
  FTRACE(0x1189faa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189faa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189faa1 mov ebp, esp */
  EBP = (ESP);
  /* 1189faa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1189faa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189faa7 cmp eax, dword ptr [0x118c52dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c52dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189faad jae 0x1189fad1 */
  if (!C.cf) goto L_1189fad1;
  /* 1189faaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fab2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1189fab5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fab8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1189fabb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189fabe mov eax, dword ptr [ecx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118c51a0)));
  /* 1189fac5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1189faca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1189facd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189facf jne 0x1189faec */
  if (!C.zf) goto L_1189faec;
L_1189fad1:;
  /* 1189fad1 call 0x1189f0d0 */
  push32(0x1189fad6u); f_1189f0d0();
  /* 1189fad6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1189fadc call 0x1189f0e0 */
  push32(0x1189fae1u); f_1189f0e0();
  /* 1189fae1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1189fae7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189faea jmp 0x1189fb1e */
  goto L_1189fb1e;
L_1189faec:;
  /* 1189faec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189faef push edx */
  push32((uint32_t)(EDX));
  /* 1189faf0 call 0x118a08f0 */
  push32(0x1189faf5u); f_118a08f0();
  /* 1189faf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189faf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189fafb push eax */
  push32((uint32_t)(EAX));
  /* 1189fafc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189faff push ecx */
  push32((uint32_t)(ECX));
  /* 1189fb00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fb03 push edx */
  push32((uint32_t)(EDX));
  /* 1189fb04 call 0x1189fb30 */
  push32(0x1189fb09u); f_1189fb30();
  /* 1189fb09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189fb0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189fb0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fb12 push eax */
  push32((uint32_t)(EAX));
  /* 1189fb13 call 0x118a0980 */
  push32(0x1189fb18u); f_118a0980();
  /* 1189fb18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189fb1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1189fb1e:;
  /* 1189fb1e mov esp, ebp */
  ESP = (EBP);
  /* 1189fb20 pop ebp */
  EBP = (pop32());
  /* 1189fb21 ret  */
  ESPCHK(0x1189faa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb30 @ 0x1189fb30 (627 bytes, 182 insns) */
void f_1189fb30(void) {
  FTRACE(0x1189fb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189fb30 push ebp */
  push32((uint32_t)(EBP));
  /* 1189fb31 mov ebp, esp */
  EBP = (ESP);
  /* 1189fb33 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189fb39 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1189fb40 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189fb43 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1189fb49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fb4d jne 0x1189fb56 */
  if (!C.zf) goto L_1189fb56;
  /* 1189fb4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189fb51 jmp 0x1189fd9f */
  goto L_1189fd9f;
L_1189fb56:;
  /* 1189fb56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fb59 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1189fb5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fb5f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1189fb62 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189fb65 mov eax, dword ptr [ecx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118c51a0)));
  /* 1189fb6c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1189fb71 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1189fb74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189fb76 je 0x1189fb88 */
  if (C.zf) goto L_1189fb88;
  /* 1189fb78 push 2 */
  push32((uint32_t)(0x2u));
  /* 1189fb7a push 0 */
  push32((uint32_t)(0x0u));
  /* 1189fb7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fb7f push edx */
  push32((uint32_t)(EDX));
  /* 1189fb80 call 0x1189f9e0 */
  push32(0x1189fb85u); f_1189f9e0();
  /* 1189fb85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189fb88:;
  /* 1189fb88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fb8b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1189fb8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fb91 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1189fb94 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189fb97 mov edx, dword ptr [eax*4 + 0x118c51a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118c51a0)));
  /* 1189fb9e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1189fba3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1189fba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189fbaa je 0x1189fcbc */
  if (C.zf) goto L_1189fcbc;
  /* 1189fbb0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189fbb3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1189fbb6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1189fbbd:;
  /* 1189fbbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fbc0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189fbc3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fbc6 jae 0x1189fcba */
  if (!C.cf) goto L_1189fcba;
  /* 1189fbcc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1189fbd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1189fbd5:;
  /* 1189fbd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189fbd8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1189fbde sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189fbe0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fbe6 jge 0x1189fc47 */
  if ((C.sf==C.of)) goto L_1189fc47;
  /* 1189fbe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fbeb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189fbee cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fbf1 jae 0x1189fc47 */
  if (!C.cf) goto L_1189fc47;
  /* 1189fbf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fbf6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1189fbf8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1189fbfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fc01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189fc04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189fc07 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1189fc0e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fc11 jne 0x1189fc31 */
  if (!C.zf) goto L_1189fc31;
  /* 1189fc13 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1189fc19 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189fc1c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1189fc22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189fc25 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1189fc28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189fc2b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189fc2e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1189fc31:;
  /* 1189fc31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189fc34 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1189fc3a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1189fc3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189fc3f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189fc42 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1189fc45 jmp 0x1189fbd5 */
  goto L_1189fbd5;
L_1189fc47:;
  /* 1189fc47 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189fc49 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1189fc4f push edx */
  push32((uint32_t)(EDX));
  /* 1189fc50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189fc53 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1189fc59 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189fc5b push eax */
  push32((uint32_t)(EAX));
  /* 1189fc5c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1189fc62 push edx */
  push32((uint32_t)(EDX));
  /* 1189fc63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fc66 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1189fc69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fc6c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1189fc6f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189fc72 mov edx, dword ptr [eax*4 + 0x118c51a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118c51a0)));
  /* 1189fc79 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1189fc7c push eax */
  push32((uint32_t)(EAX));
  /* 1189fc7d call dword ptr [0x118c6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6398))), 0x1189fc83u);
  /* 1189fc83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189fc85 je 0x1189fcaa */
  if (C.zf) goto L_1189fcaa;
  /* 1189fc87 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189fc8a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189fc90 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1189fc93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189fc96 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1189fc9c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189fc9e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fca4 jge 0x1189fca8 */
  if ((C.sf==C.of)) goto L_1189fca8;
  /* 1189fca6 jmp 0x1189fcba */
  goto L_1189fcba;
L_1189fca8:;
  /* 1189fca8 jmp 0x1189fcb5 */
  goto L_1189fcb5;
L_1189fcaa:;
  /* 1189fcaa call dword ptr [0x118c63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63d8))), 0x1189fcb0u);
  /* 1189fcb0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1189fcb3 jmp 0x1189fcba */
  goto L_1189fcba;
L_1189fcb5:;
  /* 1189fcb5 jmp 0x1189fbbd */
  goto L_1189fbbd;
L_1189fcba:;
  /* 1189fcba jmp 0x1189fd0c */
  goto L_1189fd0c;
L_1189fcbc:;
  /* 1189fcbc push 0 */
  push32((uint32_t)(0x0u));
  /* 1189fcbe lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1189fcc4 push ecx */
  push32((uint32_t)(ECX));
  /* 1189fcc5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189fcc8 push edx */
  push32((uint32_t)(EDX));
  /* 1189fcc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189fccc push eax */
  push32((uint32_t)(EAX));
  /* 1189fccd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fcd0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1189fcd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fcd6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1189fcd9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189fcdc mov eax, dword ptr [ecx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118c51a0)));
  /* 1189fce3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1189fce6 push ecx */
  push32((uint32_t)(ECX));
  /* 1189fce7 call dword ptr [0x118c6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6398))), 0x1189fcedu);
  /* 1189fced test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189fcef je 0x1189fd03 */
  if (C.zf) goto L_1189fd03;
  /* 1189fcf1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1189fcf8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1189fcfe mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1189fd01 jmp 0x1189fd0c */
  goto L_1189fd0c;
L_1189fd03:;
  /* 1189fd03 call dword ptr [0x118c63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63d8))), 0x1189fd09u);
  /* 1189fd09 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1189fd0c:;
  /* 1189fd0c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fd10 jne 0x1189fd96 */
  if (!C.zf) goto L_1189fd96;
  /* 1189fd16 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fd1a je 0x1189fd4a */
  if (C.zf) goto L_1189fd4a;
  /* 1189fd1c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fd20 jne 0x1189fd39 */
  if (!C.zf) goto L_1189fd39;
  /* 1189fd22 call 0x1189f0d0 */
  push32(0x1189fd27u); f_1189f0d0();
  /* 1189fd27 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1189fd2d call 0x1189f0e0 */
  push32(0x1189fd32u); f_1189f0e0();
  /* 1189fd32 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189fd35 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1189fd37 jmp 0x1189fd45 */
  goto L_1189fd45;
L_1189fd39:;
  /* 1189fd39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189fd3c push edx */
  push32((uint32_t)(EDX));
  /* 1189fd3d call 0x1189f030 */
  push32(0x1189fd42u); f_1189f030();
  /* 1189fd42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189fd45:;
  /* 1189fd45 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189fd48 jmp 0x1189fd9f */
  goto L_1189fd9f;
L_1189fd4a:;
  /* 1189fd4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fd4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1189fd50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fd53 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1189fd56 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189fd59 mov edx, dword ptr [eax*4 + 0x118c51a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118c51a0)));
  /* 1189fd60 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1189fd65 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1189fd68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189fd6a je 0x1189fd7b */
  if (C.zf) goto L_1189fd7b;
  /* 1189fd6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189fd6f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1189fd72 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fd75 jne 0x1189fd7b */
  if (!C.zf) goto L_1189fd7b;
  /* 1189fd77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189fd79 jmp 0x1189fd9f */
  goto L_1189fd9f;
L_1189fd7b:;
  /* 1189fd7b call 0x1189f0d0 */
  push32(0x1189fd80u); f_1189f0d0();
  /* 1189fd80 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1189fd86 call 0x1189f0e0 */
  push32(0x1189fd8bu); f_1189f0e0();
  /* 1189fd8b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1189fd91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189fd94 jmp 0x1189fd9f */
  goto L_1189fd9f;
L_1189fd96:;
  /* 1189fd96 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189fd99 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1189fd9f:;
  /* 1189fd9f mov esp, ebp */
  ESP = (EBP);
  /* 1189fda1 pop ebp */
  EBP = (pop32());
  /* 1189fda2 ret  */
  ESPCHK(0x1189fb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdb0 @ 0x1189fdb0 (199 bytes, 68 insns) */
void f_1189fdb0(void) {
  FTRACE(0x1189fdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189fdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189fdb1 mov ebp, esp */
  EBP = (ESP);
  /* 1189fdb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1189fdb4 push ebx */
  push32((uint32_t)(EBX));
  /* 1189fdb5 push esi */
  push32((uint32_t)(ESI));
  /* 1189fdb6 push edi */
  push32((uint32_t)(EDI));
L_1189fdb7:;
  /* 1189fdb7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fdbb jne 0x1189fddb */
  if (!C.zf) goto L_1189fddb;
  /* 1189fdbd push 0x118bfa94 */
  push32((uint32_t)(0x118bfa94u));
  /* 1189fdc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189fdc4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1189fdc6 push 0x118bfb60 */
  push32((uint32_t)(0x118bfb60u));
  /* 1189fdcb push 2 */
  push32((uint32_t)(0x2u));
  /* 1189fdcd call 0x118962c0 */
  push32(0x1189fdd2u); f_118962c0();
  /* 1189fdd2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189fdd5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fdd8 jne 0x1189fddb */
  if (!C.zf) goto L_1189fddb;
  /* 1189fdda int3  */
  x86_unimpl("int3 @ 0x1189fdda");
L_1189fddb:;
  /* 1189fddb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189fddd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189fddf jne 0x1189fdb7 */
  if (!C.zf) goto L_1189fdb7;
  /* 1189fde1 mov ecx, dword ptr [0x118c39d4] */
  ECX = (r32((uint32_t)(0x118c39d4)));
  /* 1189fde7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189fdea mov dword ptr [0x118c39d4], ecx */
  w32((uint32_t)(0x118c39d4), (ECX));
  /* 1189fdf0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fdf3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189fdf6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1189fdf8 push 0x118bfb60 */
  push32((uint32_t)(0x118bfb60u));
  /* 1189fdfd push 2 */
  push32((uint32_t)(0x2u));
  /* 1189fdff push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1189fe04 call 0x11897200 */
  push32(0x1189fe09u); f_11897200();
  /* 1189fe09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189fe0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fe0f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1189fe12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fe15 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fe19 je 0x1189fe36 */
  if (C.zf) goto L_1189fe36;
  /* 1189fe1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fe1e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1189fe21 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1189fe24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fe27 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1189fe2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fe2d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1189fe34 jmp 0x1189fe5b */
  goto L_1189fe5b;
L_1189fe36:;
  /* 1189fe36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fe39 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1189fe3c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1189fe3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fe42 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1189fe45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fe48 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189fe4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fe4e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1189fe51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fe54 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1189fe5b:;
  /* 1189fe5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fe5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fe61 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1189fe64 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1189fe66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189fe69 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1189fe70 pop edi */
  EDI = (pop32());
  /* 1189fe71 pop esi */
  ESI = (pop32());
  /* 1189fe72 pop ebx */
  EBX = (pop32());
  /* 1189fe73 mov esp, ebp */
  ESP = (EBP);
  /* 1189fe75 pop ebp */
  EBP = (pop32());
  /* 1189fe76 ret  */
  ESPCHK(0x1189fdb0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1189fe80 (50 bytes, 17 insns) */
void f_1189fe80(void) {
  FTRACE(0x1189fe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189fe80 push ebp */
  push32((uint32_t)(EBP));
  /* 1189fe81 mov ebp, esp */
  EBP = (ESP);
  /* 1189fe83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fe86 cmp eax, dword ptr [0x118c52dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c52dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fe8c jb 0x1189fe92 */
  if (C.cf) goto L_1189fe92;
  /* 1189fe8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189fe90 jmp 0x1189feb0 */
  goto L_1189feb0;
L_1189fe92:;
  /* 1189fe92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fe95 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1189fe98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189fe9b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1189fe9e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189fea1 mov eax, dword ptr [ecx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118c51a0)));
  /* 1189fea8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1189fead and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1189feb0:;
  /* 1189feb0 pop ebp */
  EBP = (pop32());
  /* 1189feb1 ret  */
  ESPCHK(0x1189fe80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fec0 @ 0x1189fec0 (300 bytes, 80 insns) */
void f_1189fec0(void) {
  FTRACE(0x1189fec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189fec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189fec1 mov ebp, esp */
  EBP = (ESP);
  /* 1189fec3 push ecx */
  push32((uint32_t)(ECX));
  /* 1189fec4 cmp dword ptr [0x118c4ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c4ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fecb jne 0x1189fed9 */
  if (!C.zf) goto L_1189fed9;
  /* 1189fecd mov dword ptr [0x118c4ea0], 0x200 */
  w32((uint32_t)(0x118c4ea0), (0x200u));
  /* 1189fed7 jmp 0x1189feec */
  goto L_1189feec;
L_1189fed9:;
  /* 1189fed9 cmp dword ptr [0x118c4ea0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x118c4ea0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189fee0 jge 0x1189feec */
  if ((C.sf==C.of)) goto L_1189feec;
  /* 1189fee2 mov dword ptr [0x118c4ea0], 0x14 */
  w32((uint32_t)(0x118c4ea0), (0x14u));
L_1189feec:;
  /* 1189feec push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1189fef1 push 0x118bfb6c */
  push32((uint32_t)(0x118bfb6cu));
  /* 1189fef6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1189fef8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1189fefa mov eax, dword ptr [0x118c4ea0] */
  EAX = (r32((uint32_t)(0x118c4ea0)));
  /* 1189feff push eax */
  push32((uint32_t)(EAX));
  /* 1189ff00 call 0x11897610 */
  push32(0x1189ff05u); f_11897610();
  /* 1189ff05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ff08 mov dword ptr [0x118c3b48], eax */
  w32((uint32_t)(0x118c3b48), (EAX));
  /* 1189ff0d cmp dword ptr [0x118c3b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ff14 jne 0x1189ff55 */
  if (!C.zf) goto L_1189ff55;
  /* 1189ff16 mov dword ptr [0x118c4ea0], 0x14 */
  w32((uint32_t)(0x118c4ea0), (0x14u));
  /* 1189ff20 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1189ff25 push 0x118bfb6c */
  push32((uint32_t)(0x118bfb6cu));
  /* 1189ff2a push 2 */
  push32((uint32_t)(0x2u));
  /* 1189ff2c push 4 */
  push32((uint32_t)(0x4u));
  /* 1189ff2e mov ecx, dword ptr [0x118c4ea0] */
  ECX = (r32((uint32_t)(0x118c4ea0)));
  /* 1189ff34 push ecx */
  push32((uint32_t)(ECX));
  /* 1189ff35 call 0x11897610 */
  push32(0x1189ff3au); f_11897610();
  /* 1189ff3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ff3d mov dword ptr [0x118c3b48], eax */
  w32((uint32_t)(0x118c3b48), (EAX));
  /* 1189ff42 cmp dword ptr [0x118c3b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ff49 jne 0x1189ff55 */
  if (!C.zf) goto L_1189ff55;
  /* 1189ff4b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1189ff4d call 0x11896170 */
  push32(0x1189ff52u); f_11896170();
  /* 1189ff52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189ff55:;
  /* 1189ff55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1189ff5c jmp 0x1189ff67 */
  goto L_1189ff67;
L_1189ff5e:;
  /* 1189ff5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ff61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ff64 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1189ff67:;
  /* 1189ff67 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ff6b jge 0x1189ff86 */
  if ((C.sf==C.of)) goto L_1189ff86;
  /* 1189ff6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ff70 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1189ff73 add eax, 0x118c2120 */
  { uint32_t _a=(EAX),_b=(0x118c2120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ff78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ff7b mov edx, dword ptr [0x118c3b48] */
  EDX = (r32((uint32_t)(0x118c3b48)));
  /* 1189ff81 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1189ff84 jmp 0x1189ff5e */
  goto L_1189ff5e;
L_1189ff86:;
  /* 1189ff86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1189ff8d jmp 0x1189ff98 */
  goto L_1189ff98;
L_1189ff8f:;
  /* 1189ff8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ff92 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ff95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1189ff98:;
  /* 1189ff98 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ff9c jge 0x1189ffe8 */
  if ((C.sf==C.of)) goto L_1189ffe8;
  /* 1189ff9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ffa1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1189ffa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ffa7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1189ffaa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189ffad mov eax, dword ptr [ecx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118c51a0)));
  /* 1189ffb4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ffb8 je 0x1189ffd6 */
  if (C.zf) goto L_1189ffd6;
  /* 1189ffba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ffbd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1189ffc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ffc3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1189ffc6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189ffc9 mov eax, dword ptr [ecx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118c51a0)));
  /* 1189ffd0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ffd4 jne 0x1189ffe6 */
  if (!C.zf) goto L_1189ffe6;
L_1189ffd6:;
  /* 1189ffd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ffd9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1189ffdc mov dword ptr [ecx + 0x118c2130], 0xffffffff */
  w32((uint32_t)(ECX + 0x118c2130), (0xffffffffu));
L_1189ffe6:;
  /* 1189ffe6 jmp 0x1189ff8f */
  goto L_1189ff8f;
L_1189ffe8:;
  /* 1189ffe8 mov esp, ebp */
  ESP = (EBP);
  /* 1189ffea pop ebp */
  EBP = (pop32());
  /* 1189ffeb ret  */
  ESPCHK(0x1189fec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fff0 @ 0x1189fff0 (26 bytes, 9 insns) */
void f_1189fff0(void) {
  FTRACE(0x1189fff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189fff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189fff1 mov ebp, esp */
  EBP = (ESP);
  /* 1189fff3 call 0x118a0bf0 */
  push32(0x1189fff8u); f_118a0bf0();
  /* 1189fff8 movsx eax, byte ptr [0x118c37ec] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x118c37ec))));
  /* 1189ffff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a0001 je 0x118a0008 */
  if (C.zf) goto L_118a0008;
  /* 118a0003 call 0x118a09b0 */
  push32(0x118a0008u); f_118a09b0();
L_118a0008:;
  /* 118a0008 pop ebp */
  EBP = (pop32());
  /* 118a0009 ret  */
  ESPCHK(0x1189fff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010010 @ 0x118a0010 (61 bytes, 20 insns) */
void f_118a0010(void) {
  FTRACE(0x118a0010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0010 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0011 mov ebp, esp */
  EBP = (ESP);
  /* 118a0013 cmp dword ptr [ebp + 8], 0x118c2120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x118c2120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a001a jb 0x118a003e */
  if (C.cf) goto L_118a003e;
  /* 118a001c cmp dword ptr [ebp + 8], 0x118c2380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x118c2380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0023 ja 0x118a003e */
  if ((!C.cf&&!C.zf)) goto L_118a003e;
  /* 118a0025 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0028 sub eax, 0x118c2120 */
  { uint32_t _a=(EAX),_b=(0x118c2120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a002d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118a0030 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0033 push eax */
  push32((uint32_t)(EAX));
  /* 118a0034 call 0x1189ac00 */
  push32(0x118a0039u); f_1189ac00();
  /* 118a0039 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a003c jmp 0x118a004b */
  goto L_118a004b;
L_118a003e:;
  /* 118a003e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0041 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0044 push ecx */
  push32((uint32_t)(ECX));
  /* 118a0045 call dword ptr [0x118c634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c634c))), 0x118a004bu);
L_118a004b:;
  /* 118a004b pop ebp */
  EBP = (pop32());
  /* 118a004c ret  */
  ESPCHK(0x118a0010u, _esp0);
  ESP += 4; return;
}

/* FUN_10010050 @ 0x118a0050 (41 bytes, 16 insns) */
void f_118a0050(void) {
  FTRACE(0x118a0050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0050 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0051 mov ebp, esp */
  EBP = (ESP);
  /* 118a0053 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0057 jge 0x118a006a */
  if ((C.sf==C.of)) goto L_118a006a;
  /* 118a0059 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a005c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a005f push eax */
  push32((uint32_t)(EAX));
  /* 118a0060 call 0x1189ac00 */
  push32(0x118a0065u); f_1189ac00();
  /* 118a0065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0068 jmp 0x118a0077 */
  goto L_118a0077;
L_118a006a:;
  /* 118a006a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a006d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0070 push ecx */
  push32((uint32_t)(ECX));
  /* 118a0071 call dword ptr [0x118c634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c634c))), 0x118a0077u);
L_118a0077:;
  /* 118a0077 pop ebp */
  EBP = (pop32());
  /* 118a0078 ret  */
  ESPCHK(0x118a0050u, _esp0);
  ESP += 4; return;
}

/* FUN_10010080 @ 0x118a0080 (61 bytes, 20 insns) */
void f_118a0080(void) {
  FTRACE(0x118a0080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0080 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0081 mov ebp, esp */
  EBP = (ESP);
  /* 118a0083 cmp dword ptr [ebp + 8], 0x118c2120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x118c2120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a008a jb 0x118a00ae */
  if (C.cf) goto L_118a00ae;
  /* 118a008c cmp dword ptr [ebp + 8], 0x118c2380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x118c2380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0093 ja 0x118a00ae */
  if ((!C.cf&&!C.zf)) goto L_118a00ae;
  /* 118a0095 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0098 sub eax, 0x118c2120 */
  { uint32_t _a=(EAX),_b=(0x118c2120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a009d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118a00a0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a00a3 push eax */
  push32((uint32_t)(EAX));
  /* 118a00a4 call 0x1189aca0 */
  push32(0x118a00a9u); f_1189aca0();
  /* 118a00a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a00ac jmp 0x118a00bb */
  goto L_118a00bb;
L_118a00ae:;
  /* 118a00ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a00b1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a00b4 push ecx */
  push32((uint32_t)(ECX));
  /* 118a00b5 call dword ptr [0x118c6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6348))), 0x118a00bbu);
L_118a00bb:;
  /* 118a00bb pop ebp */
  EBP = (pop32());
  /* 118a00bc ret  */
  ESPCHK(0x118a0080u, _esp0);
  ESP += 4; return;
}

/* FUN_100100c0 @ 0x118a00c0 (41 bytes, 16 insns) */
void f_118a00c0(void) {
  FTRACE(0x118a00c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a00c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a00c1 mov ebp, esp */
  EBP = (ESP);
  /* 118a00c3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a00c7 jge 0x118a00da */
  if ((C.sf==C.of)) goto L_118a00da;
  /* 118a00c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a00cc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a00cf push eax */
  push32((uint32_t)(EAX));
  /* 118a00d0 call 0x1189aca0 */
  push32(0x118a00d5u); f_1189aca0();
  /* 118a00d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a00d8 jmp 0x118a00e7 */
  goto L_118a00e7;
L_118a00da:;
  /* 118a00da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a00dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a00e0 push ecx */
  push32((uint32_t)(ECX));
  /* 118a00e1 call dword ptr [0x118c6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6348))), 0x118a00e7u);
L_118a00e7:;
  /* 118a00e7 pop ebp */
  EBP = (pop32());
  /* 118a00e8 ret  */
  ESPCHK(0x118a00c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100100f0 @ 0x118a00f0 (119 bytes, 34 insns) */
void f_118a00f0(void) {
  FTRACE(0x118a00f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a00f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a00f1 mov ebp, esp */
  EBP = (ESP);
  /* 118a00f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a00f6 push 0x118c3b44 */
  push32((uint32_t)(0x118c3b44u));
  /* 118a00fb call dword ptr [0x118c63ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63ac))), 0x118a0101u);
  /* 118a0101 cmp dword ptr [0x118c3b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0108 je 0x118a0128 */
  if (C.zf) goto L_118a0128;
  /* 118a010a push 0x118c3b44 */
  push32((uint32_t)(0x118c3b44u));
  /* 118a010f call dword ptr [0x118c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c639c))), 0x118a0115u);
  /* 118a0115 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118a0117 call 0x1189ac00 */
  push32(0x118a011cu); f_1189ac00();
  /* 118a011c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a011f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118a0126 jmp 0x118a012f */
  goto L_118a012f;
L_118a0128:;
  /* 118a0128 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_118a012f:;
  /* 118a012f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 118a0133 push eax */
  push32((uint32_t)(EAX));
  /* 118a0134 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0137 push ecx */
  push32((uint32_t)(ECX));
  /* 118a0138 call 0x118a0170 */
  push32(0x118a013du); f_118a0170();
  /* 118a013d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0140 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a0143 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0147 je 0x118a0155 */
  if (C.zf) goto L_118a0155;
  /* 118a0149 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118a014b call 0x1189aca0 */
  push32(0x118a0150u); f_1189aca0();
  /* 118a0150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0153 jmp 0x118a0160 */
  goto L_118a0160;
L_118a0155:;
  /* 118a0155 push 0x118c3b44 */
  push32((uint32_t)(0x118c3b44u));
  /* 118a015a call dword ptr [0x118c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c639c))), 0x118a0160u);
L_118a0160:;
  /* 118a0160 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0163 mov esp, ebp */
  ESP = (EBP);
  /* 118a0165 pop ebp */
  EBP = (pop32());
  /* 118a0166 ret  */
  ESPCHK(0x118a00f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010170 @ 0x118a0170 (160 bytes, 50 insns) */
void f_118a0170(void) {
  FTRACE(0x118a0170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0170 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0171 mov ebp, esp */
  EBP = (ESP);
  /* 118a0173 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a0176 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a017a jne 0x118a0183 */
  if (!C.zf) goto L_118a0183;
  /* 118a017c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a017e jmp 0x118a020c */
  goto L_118a020c;
L_118a0183:;
  /* 118a0183 cmp dword ptr [0x118c39b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c39b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a018a jne 0x118a01ba */
  if (!C.zf) goto L_118a01ba;
  /* 118a018c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a018f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a0194 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0199 jle 0x118a01ab */
  if ((C.zf||C.sf!=C.of)) goto L_118a01ab;
  /* 118a019b call 0x1189f0d0 */
  push32(0x118a01a0u); f_1189f0d0();
  /* 118a01a0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 118a01a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a01a9 jmp 0x118a020c */
  goto L_118a020c;
L_118a01ab:;
  /* 118a01ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a01ae mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 118a01b1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 118a01b3 mov eax, 1 */
  EAX = (0x1u);
  /* 118a01b8 jmp 0x118a020c */
  goto L_118a020c;
L_118a01ba:;
  /* 118a01ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118a01c1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 118a01c4 push eax */
  push32((uint32_t)(EAX));
  /* 118a01c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a01c7 mov ecx, dword ptr [0x118c1ea4] */
  ECX = (r32((uint32_t)(0x118c1ea4)));
  /* 118a01cd push ecx */
  push32((uint32_t)(ECX));
  /* 118a01ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a01d1 push edx */
  push32((uint32_t)(EDX));
  /* 118a01d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a01d4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 118a01d7 push eax */
  push32((uint32_t)(EAX));
  /* 118a01d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 118a01dd mov ecx, dword ptr [0x118c39c8] */
  ECX = (r32((uint32_t)(0x118c39c8)));
  /* 118a01e3 push ecx */
  push32((uint32_t)(ECX));
  /* 118a01e4 call dword ptr [0x118c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6370))), 0x118a01eau);
  /* 118a01ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a01ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a01f1 je 0x118a01f9 */
  if (C.zf) goto L_118a01f9;
  /* 118a01f3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a01f7 je 0x118a0209 */
  if (C.zf) goto L_118a0209;
L_118a01f9:;
  /* 118a01f9 call 0x1189f0d0 */
  push32(0x118a01feu); f_1189f0d0();
  /* 118a01fe mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 118a0204 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a0207 jmp 0x118a020c */
  goto L_118a020c;
L_118a0209:;
  /* 118a0209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_118a020c:;
  /* 118a020c mov esp, ebp */
  ESP = (EBP);
  /* 118a020e pop ebp */
  EBP = (pop32());
  /* 118a020f ret  */
  ESPCHK(0x118a0170u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x118a0210 (32 bytes, 18 insns) */
void f_118a0210(void) {
  FTRACE(0x118a0210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0210 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0211 mov ebp, esp */
  EBP = (ESP);
  /* 118a0213 push ebx */
  push32((uint32_t)(EBX));
  /* 118a0214 push esi */
  push32((uint32_t)(ESI));
  /* 118a0215 push edi */
  push32((uint32_t)(EDI));
  /* 118a0216 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0217 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a0219 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a021b push 0x118a0228 */
  push32((uint32_t)(0x118a0228u));
  /* 118a0220 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118a0223 call 0x118a795c */
  push32(0x118a0228u); f_118a795c();
  /* 118a0228 pop ebp */
  EBP = (pop32());
  /* 118a0229 pop edi */
  EDI = (pop32());
  /* 118a022a pop esi */
  ESI = (pop32());
  /* 118a022b pop ebx */
  EBX = (pop32());
  /* 118a022c mov esp, ebp */
  ESP = (EBP);
  /* 118a022e pop ebp */
  EBP = (pop32());
  /* 118a022f ret  */
  ESPCHK(0x118a0210u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x118a0252 (104 bytes, 33 insns) */
void f_118a0252(void) {
  FTRACE(0x118a0252u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0252 push ebx */
  push32((uint32_t)(EBX));
  /* 118a0253 push esi */
  push32((uint32_t)(ESI));
  /* 118a0254 push edi */
  push32((uint32_t)(EDI));
  /* 118a0255 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118a0259 push eax */
  push32((uint32_t)(EAX));
  /* 118a025a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 118a025c push 0x118a0230 */
  push32((uint32_t)(0x118a0230u));
  /* 118a0261 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 118a0268 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_118a026f:;
  /* 118a026f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 118a0273 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 118a0276 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 118a0279 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a027c je 0x118a02ac */
  if (C.zf) goto L_118a02ac;
  /* 118a027e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0282 je 0x118a02ac */
  if (C.zf) goto L_118a02ac;
  /* 118a0284 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 118a0287 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 118a028a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 118a028e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 118a0291 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0296 jne 0x118a02aa */
  if (!C.zf) goto L_118a02aa;
  /* 118a0298 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 118a029d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 118a02a1 call 0x118a02e6 */
  push32(0x118a02a6u); f_118a02e6();
  /* 118a02a6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x118a02aau);
L_118a02aa:;
  /* 118a02aa jmp 0x118a026f */
  goto L_118a026f;
L_118a02ac:;
  /* 118a02ac pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 118a02b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a02b6 pop edi */
  EDI = (pop32());
  /* 118a02b7 pop esi */
  ESI = (pop32());
  /* 118a02b8 pop ebx */
  EBX = (pop32());
  /* 118a02b9 ret  */
  ESPCHK(0x118a0252u, _esp0);
  ESP += 4; return;
}

/* FUN_100102e6 @ 0x118a02e6 (24 bytes, 10 insns) */
void f_118a02e6(void) {
  FTRACE(0x118a02e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a02e6 push ebx */
  push32((uint32_t)(EBX));
  /* 118a02e7 push ecx */
  push32((uint32_t)(ECX));
  /* 118a02e8 mov ebx, 0x118c23b8 */
  EBX = (0x118c23b8u);
  /* 118a02ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a02f0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 118a02f3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 118a02f6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 118a02f9 pop ecx */
  ECX = (pop32());
  /* 118a02fa pop ebx */
  EBX = (pop32());
  /* 118a02fb ret 4 */
  ESPCHK(0x118a02e6u, _esp0);
  ESP += 8; return;
}

/* FUN_100103c5 @ 0x118a03c5 (27 bytes, 11 insns) */
void f_118a03c5(void) {
  FTRACE(0x118a03c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a03c5 push ebp */
  push32((uint32_t)(EBP));
  /* 118a03c6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118a03ca mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 118a03cc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 118a03cf push eax */
  push32((uint32_t)(EAX));
  /* 118a03d0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 118a03d3 push eax */
  push32((uint32_t)(EAX));
  /* 118a03d4 call 0x118a0252 */
  push32(0x118a03d9u); f_118a0252();
  /* 118a03d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a03dc pop ebp */
  EBP = (pop32());
  /* 118a03dd ret 4 */
  ESPCHK(0x118a03c5u, _esp0);
  ESP += 8; return;
}

/* FUN_100103e0 @ 0x118a03e0 (482 bytes, 138 insns) */
void f_118a03e0(void) {
  FTRACE(0x118a03e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a03e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a03e1 mov ebp, esp */
  EBP = (ESP);
  /* 118a03e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a03e6 push esi */
  push32((uint32_t)(ESI));
  /* 118a03e7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 118a03ee push 0x12 */
  push32((uint32_t)(0x12u));
  /* 118a03f0 call 0x1189ac00 */
  push32(0x118a03f5u); f_1189ac00();
  /* 118a03f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a03f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 118a03ff jmp 0x118a040a */
  goto L_118a040a;
L_118a0401:;
  /* 118a0401 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0404 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0407 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_118a040a:;
  /* 118a040a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a040e jge 0x118a05b0 */
  if ((C.sf==C.of)) goto L_118a05b0;
  /* 118a0414 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0417 cmp dword ptr [ecx*4 + 0x118c51a0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x118c51a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a041f je 0x118a0516 */
  if (C.zf) goto L_118a0516;
  /* 118a0425 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0428 mov eax, dword ptr [edx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118c51a0)));
  /* 118a042f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a0432 jmp 0x118a043d */
  goto L_118a043d;
L_118a0434:;
  /* 118a0434 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0437 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a043a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_118a043d:;
  /* 118a043d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0440 mov eax, dword ptr [edx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118c51a0)));
  /* 118a0447 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a044c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a044f jae 0x118a0506 */
  if (!C.cf) goto L_118a0506;
  /* 118a0455 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0458 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 118a045c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 118a045f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a0461 jne 0x118a0501 */
  if (!C.zf) goto L_118a0501;
  /* 118a0467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a046a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a046e jne 0x118a04a9 */
  if (!C.zf) goto L_118a04a9;
  /* 118a0470 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118a0472 call 0x1189ac00 */
  push32(0x118a0477u); f_1189ac00();
  /* 118a0477 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a047a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a047d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0481 jne 0x118a049f */
  if (!C.zf) goto L_118a049f;
  /* 118a0483 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0486 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0489 push edx */
  push32((uint32_t)(EDX));
  /* 118a048a call dword ptr [0x118c635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c635c))), 0x118a0490u);
  /* 118a0490 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0493 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 118a0496 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0499 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a049c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_118a049f:;
  /* 118a049f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118a04a1 call 0x1189aca0 */
  push32(0x118a04a6u); f_1189aca0();
  /* 118a04a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a04a9:;
  /* 118a04a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a04ac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a04af push eax */
  push32((uint32_t)(EAX));
  /* 118a04b0 call dword ptr [0x118c634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c634c))), 0x118a04b6u);
  /* 118a04b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a04b9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 118a04bd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 118a04c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a04c2 je 0x118a04d6 */
  if (C.zf) goto L_118a04d6;
  /* 118a04c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a04c7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a04ca push eax */
  push32((uint32_t)(EAX));
  /* 118a04cb call dword ptr [0x118c6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6348))), 0x118a04d1u);
  /* 118a04d1 jmp 0x118a0434 */
  goto L_118a0434;
L_118a04d6:;
  /* 118a04d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a04d9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 118a04df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a04e2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118a04e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a04e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a04eb sub eax, dword ptr [edx*4 + 0x118c51a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x118c51a0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a04f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a04f3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 118a04f8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118a04fa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a04fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a04ff jmp 0x118a0506 */
  goto L_118a0506;
L_118a0501:;
  /* 118a0501 jmp 0x118a0434 */
  goto L_118a0434;
L_118a0506:;
  /* 118a0506 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a050a je 0x118a0511 */
  if (C.zf) goto L_118a0511;
  /* 118a050c jmp 0x118a05b0 */
  goto L_118a05b0;
L_118a0511:;
  /* 118a0511 jmp 0x118a05ab */
  goto L_118a05ab;
L_118a0516:;
  /* 118a0516 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 118a0518 push 0x118bfb74 */
  push32((uint32_t)(0x118bfb74u));
  /* 118a051d push 2 */
  push32((uint32_t)(0x2u));
  /* 118a051f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 118a0524 call 0x11897200 */
  push32(0x118a0529u); f_11897200();
  /* 118a0529 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a052c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a052f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0533 je 0x118a05a9 */
  if (C.zf) goto L_118a05a9;
  /* 118a0535 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0538 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a053b mov dword ptr [eax*4 + 0x118c51a0], ecx */
  w32((uint32_t)(EAX*4 + 0x118c51a0), (ECX));
  /* 118a0542 mov edx, dword ptr [0x118c52dc] */
  EDX = (r32((uint32_t)(0x118c52dc)));
  /* 118a0548 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a054b mov dword ptr [0x118c52dc], edx */
  w32((uint32_t)(0x118c52dc), (EDX));
  /* 118a0551 jmp 0x118a055c */
  goto L_118a055c;
L_118a0553:;
  /* 118a0553 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0556 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0559 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118a055c:;
  /* 118a055c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a055f mov edx, dword ptr [ecx*4 + 0x118c51a0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118c51a0)));
  /* 118a0566 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a056c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a056f jae 0x118a0594 */
  if (!C.cf) goto L_118a0594;
  /* 118a0571 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0574 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 118a0578 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a057b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 118a0581 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0584 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 118a0588 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a058b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 118a0592 jmp 0x118a0553 */
  goto L_118a0553;
L_118a0594:;
  /* 118a0594 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0597 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118a059a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a059d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a05a0 push edx */
  push32((uint32_t)(EDX));
  /* 118a05a1 call 0x118a08f0 */
  push32(0x118a05a6u); f_118a08f0();
  /* 118a05a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a05a9:;
  /* 118a05a9 jmp 0x118a05b0 */
  goto L_118a05b0;
L_118a05ab:;
  /* 118a05ab jmp 0x118a0401 */
  goto L_118a0401;
L_118a05b0:;
  /* 118a05b0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 118a05b2 call 0x1189aca0 */
  push32(0x118a05b7u); f_1189aca0();
  /* 118a05b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a05ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a05bd pop esi */
  ESI = (pop32());
  /* 118a05be mov esp, ebp */
  ESP = (EBP);
  /* 118a05c0 pop ebp */
  EBP = (pop32());
  /* 118a05c1 ret  */
  ESPCHK(0x118a03e0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x118a05d0 (183 bytes, 57 insns) */
void f_118a05d0(void) {
  FTRACE(0x118a05d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a05d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a05d1 mov ebp, esp */
  EBP = (ESP);
  /* 118a05d3 push ecx */
  push32((uint32_t)(ECX));
  /* 118a05d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a05d7 cmp eax, dword ptr [0x118c52dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c52dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a05dd jae 0x118a066a */
  if (!C.cf) goto L_118a066a;
  /* 118a05e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a05e6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118a05e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a05ec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 118a05ef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a05f2 mov eax, dword ptr [ecx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118c51a0)));
  /* 118a05f9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a05fd jne 0x118a066a */
  if (!C.zf) goto L_118a066a;
  /* 118a05ff cmp dword ptr [0x118c37ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c37ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0606 jne 0x118a064a */
  if (!C.zf) goto L_118a064a;
  /* 118a0608 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a060b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a060e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0612 je 0x118a0622 */
  if (C.zf) goto L_118a0622;
  /* 118a0614 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0618 je 0x118a0630 */
  if (C.zf) goto L_118a0630;
  /* 118a061a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a061e je 0x118a063e */
  if (C.zf) goto L_118a063e;
  /* 118a0620 jmp 0x118a064a */
  goto L_118a064a;
L_118a0622:;
  /* 118a0622 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a0625 push edx */
  push32((uint32_t)(EDX));
  /* 118a0626 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 118a0628 call dword ptr [0x118c6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6314))), 0x118a062eu);
  /* 118a062e jmp 0x118a064a */
  goto L_118a064a;
L_118a0630:;
  /* 118a0630 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a0633 push eax */
  push32((uint32_t)(EAX));
  /* 118a0634 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 118a0636 call dword ptr [0x118c6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6314))), 0x118a063cu);
  /* 118a063c jmp 0x118a064a */
  goto L_118a064a;
L_118a063e:;
  /* 118a063e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a0641 push ecx */
  push32((uint32_t)(ECX));
  /* 118a0642 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 118a0644 call dword ptr [0x118c6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6314))), 0x118a064au);
L_118a064a:;
  /* 118a064a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a064d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 118a0650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0653 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118a0656 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a0659 mov ecx, dword ptr [edx*4 + 0x118c51a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x118c51a0)));
  /* 118a0660 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a0663 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 118a0666 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a0668 jmp 0x118a0683 */
  goto L_118a0683;
L_118a066a:;
  /* 118a066a call 0x1189f0d0 */
  push32(0x118a066fu); f_1189f0d0();
  /* 118a066f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118a0675 call 0x1189f0e0 */
  push32(0x118a067au); f_1189f0e0();
  /* 118a067a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 118a0680 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_118a0683:;
  /* 118a0683 mov esp, ebp */
  ESP = (EBP);
  /* 118a0685 pop ebp */
  EBP = (pop32());
  /* 118a0686 ret  */
  ESPCHK(0x118a05d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010690 @ 0x118a0690 (216 bytes, 63 insns) */
void f_118a0690(void) {
  FTRACE(0x118a0690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0690 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0691 mov ebp, esp */
  EBP = (ESP);
  /* 118a0693 push ecx */
  push32((uint32_t)(ECX));
  /* 118a0694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0697 cmp eax, dword ptr [0x118c52dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c52dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a069d jae 0x118a074b */
  if (!C.cf) goto L_118a074b;
  /* 118a06a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a06a6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118a06a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a06ac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 118a06af imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a06b2 mov eax, dword ptr [ecx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118c51a0)));
  /* 118a06b9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 118a06be and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 118a06c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a06c3 je 0x118a074b */
  if (C.zf) goto L_118a074b;
  /* 118a06c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a06cc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 118a06cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a06d2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118a06d5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a06d8 mov ecx, dword ptr [edx*4 + 0x118c51a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x118c51a0)));
  /* 118a06df cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a06e3 je 0x118a074b */
  if (C.zf) goto L_118a074b;
  /* 118a06e5 cmp dword ptr [0x118c37ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c37ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a06ec jne 0x118a072a */
  if (!C.zf) goto L_118a072a;
  /* 118a06ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a06f1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118a06f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a06f8 je 0x118a0708 */
  if (C.zf) goto L_118a0708;
  /* 118a06fa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a06fe je 0x118a0714 */
  if (C.zf) goto L_118a0714;
  /* 118a0700 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0704 je 0x118a0720 */
  if (C.zf) goto L_118a0720;
  /* 118a0706 jmp 0x118a072a */
  goto L_118a072a;
L_118a0708:;
  /* 118a0708 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a070a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 118a070c call dword ptr [0x118c6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6314))), 0x118a0712u);
  /* 118a0712 jmp 0x118a072a */
  goto L_118a072a;
L_118a0714:;
  /* 118a0714 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a0716 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 118a0718 call dword ptr [0x118c6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6314))), 0x118a071eu);
  /* 118a071e jmp 0x118a072a */
  goto L_118a072a;
L_118a0720:;
  /* 118a0720 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a0722 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 118a0724 call dword ptr [0x118c6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6314))), 0x118a072au);
L_118a072a:;
  /* 118a072a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a072d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118a0730 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0733 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 118a0736 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a0739 mov edx, dword ptr [eax*4 + 0x118c51a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118c51a0)));
  /* 118a0740 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 118a0747 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a0749 jmp 0x118a0764 */
  goto L_118a0764;
L_118a074b:;
  /* 118a074b call 0x1189f0d0 */
  push32(0x118a0750u); f_1189f0d0();
  /* 118a0750 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118a0756 call 0x1189f0e0 */
  push32(0x118a075bu); f_1189f0e0();
  /* 118a075b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 118a0761 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_118a0764:;
  /* 118a0764 mov esp, ebp */
  ESP = (EBP);
  /* 118a0766 pop ebp */
  EBP = (pop32());
  /* 118a0767 ret  */
  ESPCHK(0x118a0690u, _esp0);
  ESP += 4; return;
}

/* FUN_10010770 @ 0x118a0770 (102 bytes, 30 insns) */
void f_118a0770(void) {
  FTRACE(0x118a0770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0770 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0771 mov ebp, esp */
  EBP = (ESP);
  /* 118a0773 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0776 cmp eax, dword ptr [0x118c52dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c52dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a077c jae 0x118a07bb */
  if (!C.cf) goto L_118a07bb;
  /* 118a077e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0781 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118a0784 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0787 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 118a078a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a078d mov eax, dword ptr [ecx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118c51a0)));
  /* 118a0794 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 118a0799 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 118a079c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a079e je 0x118a07bb */
  if (C.zf) goto L_118a07bb;
  /* 118a07a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a07a3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 118a07a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a07a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118a07ac imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a07af mov ecx, dword ptr [edx*4 + 0x118c51a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x118c51a0)));
  /* 118a07b6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 118a07b9 jmp 0x118a07d4 */
  goto L_118a07d4;
L_118a07bb:;
  /* 118a07bb call 0x1189f0d0 */
  push32(0x118a07c0u); f_1189f0d0();
  /* 118a07c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118a07c6 call 0x1189f0e0 */
  push32(0x118a07cbu); f_1189f0e0();
  /* 118a07cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 118a07d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_118a07d4:;
  /* 118a07d4 pop ebp */
  EBP = (pop32());
  /* 118a07d5 ret  */
  ESPCHK(0x118a0770u, _esp0);
  ESP += 4; return;
}

/* FUN_100107e0 @ 0x118a07e0 (260 bytes, 83 insns) */
void f_118a07e0(void) {
  FTRACE(0x118a07e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a07e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a07e1 mov ebp, esp */
  EBP = (ESP);
  /* 118a07e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a07e6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 118a07ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a07ed and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 118a07f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a07f2 je 0x118a07fd */
  if (C.zf) goto L_118a07fd;
  /* 118a07f4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 118a07f7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 118a07fa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_118a07fd:;
  /* 118a07fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a0800 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 118a0806 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a0808 je 0x118a0812 */
  if (C.zf) goto L_118a0812;
  /* 118a080a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 118a080d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 118a080f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_118a0812:;
  /* 118a0812 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a0815 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 118a081b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a081d je 0x118a0828 */
  if (C.zf) goto L_118a0828;
  /* 118a081f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 118a0822 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 118a0825 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_118a0828:;
  /* 118a0828 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a082b push eax */
  push32((uint32_t)(EAX));
  /* 118a082c call dword ptr [0x118c63e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63e4))), 0x118a0832u);
  /* 118a0832 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a0835 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0839 jne 0x118a0852 */
  if (!C.zf) goto L_118a0852;
  /* 118a083b call dword ptr [0x118c63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63d8))), 0x118a0841u);
  /* 118a0841 push eax */
  push32((uint32_t)(EAX));
  /* 118a0842 call 0x1189f030 */
  push32(0x118a0847u); f_1189f030();
  /* 118a0847 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a084a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a084d jmp 0x118a08e0 */
  goto L_118a08e0;
L_118a0852:;
  /* 118a0852 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0856 jne 0x118a0863 */
  if (!C.zf) goto L_118a0863;
  /* 118a0858 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 118a085b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 118a085e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 118a0861 jmp 0x118a0872 */
  goto L_118a0872;
L_118a0863:;
  /* 118a0863 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0867 jne 0x118a0872 */
  if (!C.zf) goto L_118a0872;
  /* 118a0869 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 118a086c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 118a086f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_118a0872:;
  /* 118a0872 call 0x118a03e0 */
  push32(0x118a0877u); f_118a03e0();
  /* 118a0877 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a087a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a087e jne 0x118a089b */
  if (!C.zf) goto L_118a089b;
  /* 118a0880 call 0x1189f0d0 */
  push32(0x118a0885u); f_1189f0d0();
  /* 118a0885 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 118a088b call 0x1189f0e0 */
  push32(0x118a0890u); f_1189f0e0();
  /* 118a0890 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 118a0896 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a0899 jmp 0x118a08e0 */
  goto L_118a08e0;
L_118a089b:;
  /* 118a089b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a089e push eax */
  push32((uint32_t)(EAX));
  /* 118a089f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a08a2 push ecx */
  push32((uint32_t)(ECX));
  /* 118a08a3 call 0x118a05d0 */
  push32(0x118a08a8u); f_118a05d0();
  /* 118a08a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a08ab mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 118a08ae or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 118a08b1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 118a08b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a08b7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118a08ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a08bd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 118a08c0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a08c3 mov edx, dword ptr [eax*4 + 0x118c51a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118c51a0)));
  /* 118a08ca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 118a08cd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 118a08d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a08d4 push ecx */
  push32((uint32_t)(ECX));
  /* 118a08d5 call 0x118a0980 */
  push32(0x118a08dau); f_118a0980();
  /* 118a08da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a08dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_118a08e0:;
  /* 118a08e0 mov esp, ebp */
  ESP = (EBP);
  /* 118a08e2 pop ebp */
  EBP = (pop32());
  /* 118a08e3 ret  */
  ESPCHK(0x118a07e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100108f0 @ 0x118a08f0 (134 bytes, 44 insns) */
void f_118a08f0(void) {
  FTRACE(0x118a08f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a08f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a08f1 mov ebp, esp */
  EBP = (ESP);
  /* 118a08f3 push ecx */
  push32((uint32_t)(ECX));
  /* 118a08f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a08f7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118a08fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a08fd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 118a0900 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a0903 mov edx, dword ptr [eax*4 + 0x118c51a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118c51a0)));
  /* 118a090a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a090c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118a090f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0912 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0916 jne 0x118a0951 */
  if (!C.zf) goto L_118a0951;
  /* 118a0918 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118a091a call 0x1189ac00 */
  push32(0x118a091fu); f_1189ac00();
  /* 118a091f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0922 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0925 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0929 jne 0x118a0947 */
  if (!C.zf) goto L_118a0947;
  /* 118a092b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a092e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0931 push edx */
  push32((uint32_t)(EDX));
  /* 118a0932 call dword ptr [0x118c635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c635c))), 0x118a0938u);
  /* 118a0938 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a093b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 118a093e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0941 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0944 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_118a0947:;
  /* 118a0947 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118a0949 call 0x1189aca0 */
  push32(0x118a094eu); f_1189aca0();
  /* 118a094e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a0951:;
  /* 118a0951 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0954 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118a0957 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a095a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 118a095d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a0960 mov edx, dword ptr [eax*4 + 0x118c51a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118c51a0)));
  /* 118a0967 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 118a096b push eax */
  push32((uint32_t)(EAX));
  /* 118a096c call dword ptr [0x118c634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c634c))), 0x118a0972u);
  /* 118a0972 mov esp, ebp */
  ESP = (EBP);
  /* 118a0974 pop ebp */
  EBP = (pop32());
  /* 118a0975 ret  */
  ESPCHK(0x118a08f0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x118a0980 (38 bytes, 13 insns) */
void f_118a0980(void) {
  FTRACE(0x118a0980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0980 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0981 mov ebp, esp */
  EBP = (ESP);
  /* 118a0983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0986 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118a0989 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a098c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 118a098f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a0992 mov edx, dword ptr [eax*4 + 0x118c51a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118c51a0)));
  /* 118a0999 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 118a099d push eax */
  push32((uint32_t)(EAX));
  /* 118a099e call dword ptr [0x118c6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6348))), 0x118a09a4u);
  /* 118a09a4 pop ebp */
  EBP = (pop32());
  /* 118a09a5 ret  */
  ESPCHK(0x118a0980u, _esp0);
  ESP += 4; return;
}

/* FUN_100109b0 @ 0x118a09b0 (218 bytes, 63 insns) */
void f_118a09b0(void) {
  FTRACE(0x118a09b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a09b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a09b1 mov ebp, esp */
  EBP = (ESP);
  /* 118a09b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a09b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118a09bd push 2 */
  push32((uint32_t)(0x2u));
  /* 118a09bf call 0x1189ac00 */
  push32(0x118a09c4u); f_1189ac00();
  /* 118a09c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a09c7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 118a09ce jmp 0x118a09d9 */
  goto L_118a09d9;
L_118a09d0:;
  /* 118a09d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a09d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a09d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118a09d9:;
  /* 118a09d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a09dc cmp ecx, dword ptr [0x118c4ea0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c4ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a09e2 jge 0x118a0a79 */
  if ((C.sf==C.of)) goto L_118a0a79;
  /* 118a09e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a09eb mov eax, dword ptr [0x118c3b48] */
  EAX = (r32((uint32_t)(0x118c3b48)));
  /* 118a09f0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a09f4 je 0x118a0a74 */
  if (C.zf) goto L_118a0a74;
  /* 118a09f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a09f9 mov edx, dword ptr [0x118c3b48] */
  EDX = (r32((uint32_t)(0x118c3b48)));
  /* 118a09ff mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 118a0a02 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 118a0a05 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 118a0a0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a0a0d je 0x118a0a31 */
  if (C.zf) goto L_118a0a31;
  /* 118a0a0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0a12 mov eax, dword ptr [0x118c3b48] */
  EAX = (r32((uint32_t)(0x118c3b48)));
  /* 118a0a17 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 118a0a1a push ecx */
  push32((uint32_t)(ECX));
  /* 118a0a1b call 0x118a17a0 */
  push32(0x118a0a20u); f_118a17a0();
  /* 118a0a20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0a23 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0a26 je 0x118a0a31 */
  if (C.zf) goto L_118a0a31;
  /* 118a0a28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0a2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0a2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_118a0a31:;
  /* 118a0a31 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0a35 jl 0x118a0a74 */
  if ((C.sf!=C.of)) goto L_118a0a74;
  /* 118a0a37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0a3a mov ecx, dword ptr [0x118c3b48] */
  ECX = (r32((uint32_t)(0x118c3b48)));
  /* 118a0a40 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 118a0a43 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0a46 push edx */
  push32((uint32_t)(EDX));
  /* 118a0a47 call dword ptr [0x118c63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63b8))), 0x118a0a4du);
  /* 118a0a4d push 2 */
  push32((uint32_t)(0x2u));
  /* 118a0a4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0a52 mov ecx, dword ptr [0x118c3b48] */
  ECX = (r32((uint32_t)(0x118c3b48)));
  /* 118a0a58 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 118a0a5b push edx */
  push32((uint32_t)(EDX));
  /* 118a0a5c call 0x11897c90 */
  push32(0x118a0a61u); f_11897c90();
  /* 118a0a61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0a64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0a67 mov ecx, dword ptr [0x118c3b48] */
  ECX = (r32((uint32_t)(0x118c3b48)));
  /* 118a0a6d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_118a0a74:;
  /* 118a0a74 jmp 0x118a09d0 */
  goto L_118a09d0;
L_118a0a79:;
  /* 118a0a79 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a0a7b call 0x1189aca0 */
  push32(0x118a0a80u); f_1189aca0();
  /* 118a0a80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0a83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0a86 mov esp, ebp */
  ESP = (EBP);
  /* 118a0a88 pop ebp */
  EBP = (pop32());
  /* 118a0a89 ret  */
  ESPCHK(0x118a09b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a90 @ 0x118a0a90 (68 bytes, 26 insns) */
void f_118a0a90(void) {
  FTRACE(0x118a0a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0a90 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0a91 mov ebp, esp */
  EBP = (ESP);
  /* 118a0a93 push ecx */
  push32((uint32_t)(ECX));
  /* 118a0a94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0a98 jne 0x118a0aa6 */
  if (!C.zf) goto L_118a0aa6;
  /* 118a0a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 118a0a9c call 0x118a0c00 */
  push32(0x118a0aa1u); f_118a0c00();
  /* 118a0aa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0aa4 jmp 0x118a0ad0 */
  goto L_118a0ad0;
L_118a0aa6:;
  /* 118a0aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0aa9 push eax */
  push32((uint32_t)(EAX));
  /* 118a0aaa call 0x118a0010 */
  push32(0x118a0aafu); f_118a0010();
  /* 118a0aaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0ab2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 118a0ab6 call 0x118a0ae0 */
  push32(0x118a0abbu); f_118a0ae0();
  /* 118a0abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0abe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a0ac1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0ac4 push edx */
  push32((uint32_t)(EDX));
  /* 118a0ac5 call 0x118a0080 */
  push32(0x118a0acau); f_118a0080();
  /* 118a0aca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0acd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_118a0ad0:;
  /* 118a0ad0 mov esp, ebp */
  ESP = (EBP);
  /* 118a0ad2 pop ebp */
  EBP = (pop32());
  /* 118a0ad3 ret  */
  ESPCHK(0x118a0a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ae0 @ 0x118a0ae0 (65 bytes, 26 insns) */
void f_118a0ae0(void) {
  FTRACE(0x118a0ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0ae1 mov ebp, esp */
  EBP = (ESP);
  /* 118a0ae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0ae6 push eax */
  push32((uint32_t)(EAX));
  /* 118a0ae7 call 0x118a0b30 */
  push32(0x118a0aecu); f_118a0b30();
  /* 118a0aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0aef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a0af1 je 0x118a0af8 */
  if (C.zf) goto L_118a0af8;
  /* 118a0af3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a0af6 jmp 0x118a0b1f */
  goto L_118a0b1f;
L_118a0af8:;
  /* 118a0af8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0afb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118a0afe and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 118a0b04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a0b06 je 0x118a0b1d */
  if (C.zf) goto L_118a0b1d;
  /* 118a0b08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0b0b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 118a0b0e push ecx */
  push32((uint32_t)(ECX));
  /* 118a0b0f call 0x118a18f0 */
  push32(0x118a0b14u); f_118a18f0();
  /* 118a0b14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0b17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a0b19 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a0b1b jmp 0x118a0b1f */
  goto L_118a0b1f;
L_118a0b1d:;
  /* 118a0b1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a0b1f:;
  /* 118a0b1f pop ebp */
  EBP = (pop32());
  /* 118a0b20 ret  */
  ESPCHK(0x118a0ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b30 @ 0x118a0b30 (183 bytes, 62 insns) */
void f_118a0b30(void) {
  FTRACE(0x118a0b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0b30 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0b31 mov ebp, esp */
  EBP = (ESP);
  /* 118a0b33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a0b36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118a0b3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0b40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a0b43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0b46 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118a0b49 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 118a0b4c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0b4f jne 0x118a0bcb */
  if (!C.zf) goto L_118a0bcb;
  /* 118a0b51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0b54 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 118a0b57 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 118a0b5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a0b5f je 0x118a0bcb */
  if (C.zf) goto L_118a0bcb;
  /* 118a0b61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0b64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0b67 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 118a0b69 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a0b6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a0b6f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0b73 jle 0x118a0bcb */
  if ((C.zf||C.sf!=C.of)) goto L_118a0bcb;
  /* 118a0b75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0b78 push edx */
  push32((uint32_t)(EDX));
  /* 118a0b79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0b7c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 118a0b7f push ecx */
  push32((uint32_t)(ECX));
  /* 118a0b80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0b83 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 118a0b86 push eax */
  push32((uint32_t)(EAX));
  /* 118a0b87 call 0x1189faa0 */
  push32(0x118a0b8cu); f_1189faa0();
  /* 118a0b8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0b8f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0b92 jne 0x118a0bb5 */
  if (!C.zf) goto L_118a0bb5;
  /* 118a0b94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0b97 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118a0b9a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 118a0ba0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a0ba2 je 0x118a0bb3 */
  if (C.zf) goto L_118a0bb3;
  /* 118a0ba4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0ba7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 118a0baa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 118a0bad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0bb0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_118a0bb3:;
  /* 118a0bb3 jmp 0x118a0bcb */
  goto L_118a0bcb;
L_118a0bb5:;
  /* 118a0bb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0bb8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 118a0bbb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 118a0bbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0bc1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 118a0bc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_118a0bcb:;
  /* 118a0bcb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0bce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0bd1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 118a0bd4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118a0bd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a0bd9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 118a0be0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0be3 mov esp, ebp */
  ESP = (EBP);
  /* 118a0be5 pop ebp */
  EBP = (pop32());
  /* 118a0be6 ret  */
  ESPCHK(0x118a0b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bf0 @ 0x118a0bf0 (15 bytes, 7 insns) */
void f_118a0bf0(void) {
  FTRACE(0x118a0bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0bf1 mov ebp, esp */
  EBP = (ESP);
  /* 118a0bf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a0bf5 call 0x118a0c00 */
  push32(0x118a0bfau); f_118a0c00();
  /* 118a0bfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0bfd pop ebp */
  EBP = (pop32());
  /* 118a0bfe ret  */
  ESPCHK(0x118a0bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c00 @ 0x118a0c00 (319 bytes, 94 insns) */
void f_118a0c00(void) {
  FTRACE(0x118a0c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0c00 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0c01 mov ebp, esp */
  EBP = (ESP);
  /* 118a0c03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a0c06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118a0c0d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118a0c14 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a0c16 call 0x1189ac00 */
  push32(0x118a0c1bu); f_1189ac00();
  /* 118a0c1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0c1e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 118a0c25 jmp 0x118a0c30 */
  goto L_118a0c30;
L_118a0c27:;
  /* 118a0c27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0c2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0c2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_118a0c30:;
  /* 118a0c30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0c33 cmp ecx, dword ptr [0x118c4ea0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c4ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0c39 jge 0x118a0d23 */
  if ((C.sf==C.of)) goto L_118a0d23;
  /* 118a0c3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0c42 mov eax, dword ptr [0x118c3b48] */
  EAX = (r32((uint32_t)(0x118c3b48)));
  /* 118a0c47 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0c4b je 0x118a0d1e */
  if (C.zf) goto L_118a0d1e;
  /* 118a0c51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0c54 mov edx, dword ptr [0x118c3b48] */
  EDX = (r32((uint32_t)(0x118c3b48)));
  /* 118a0c5a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 118a0c5d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 118a0c60 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 118a0c66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a0c68 je 0x118a0d1e */
  if (C.zf) goto L_118a0d1e;
  /* 118a0c6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0c71 mov eax, dword ptr [0x118c3b48] */
  EAX = (r32((uint32_t)(0x118c3b48)));
  /* 118a0c76 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 118a0c79 push ecx */
  push32((uint32_t)(ECX));
  /* 118a0c7a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0c7d push edx */
  push32((uint32_t)(EDX));
  /* 118a0c7e call 0x118a0050 */
  push32(0x118a0c83u); f_118a0050();
  /* 118a0c83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0c86 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0c89 mov ecx, dword ptr [0x118c3b48] */
  ECX = (r32((uint32_t)(0x118c3b48)));
  /* 118a0c8f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 118a0c92 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 118a0c95 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 118a0c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a0c9c je 0x118a0d05 */
  if (C.zf) goto L_118a0d05;
  /* 118a0c9e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0ca2 jne 0x118a0cc9 */
  if (!C.zf) goto L_118a0cc9;
  /* 118a0ca4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0ca7 mov edx, dword ptr [0x118c3b48] */
  EDX = (r32((uint32_t)(0x118c3b48)));
  /* 118a0cad mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 118a0cb0 push eax */
  push32((uint32_t)(EAX));
  /* 118a0cb1 call 0x118a0ae0 */
  push32(0x118a0cb6u); f_118a0ae0();
  /* 118a0cb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0cb9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0cbc je 0x118a0cc7 */
  if (C.zf) goto L_118a0cc7;
  /* 118a0cbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0cc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0cc4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_118a0cc7:;
  /* 118a0cc7 jmp 0x118a0d05 */
  goto L_118a0d05;
L_118a0cc9:;
  /* 118a0cc9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0ccd jne 0x118a0d05 */
  if (!C.zf) goto L_118a0d05;
  /* 118a0ccf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0cd2 mov eax, dword ptr [0x118c3b48] */
  EAX = (r32((uint32_t)(0x118c3b48)));
  /* 118a0cd7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 118a0cda mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118a0cdd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 118a0ce0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a0ce2 je 0x118a0d05 */
  if (C.zf) goto L_118a0d05;
  /* 118a0ce4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0ce7 mov ecx, dword ptr [0x118c3b48] */
  ECX = (r32((uint32_t)(0x118c3b48)));
  /* 118a0ced mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 118a0cf0 push edx */
  push32((uint32_t)(EDX));
  /* 118a0cf1 call 0x118a0ae0 */
  push32(0x118a0cf6u); f_118a0ae0();
  /* 118a0cf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0cf9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0cfc jne 0x118a0d05 */
  if (!C.zf) goto L_118a0d05;
  /* 118a0cfe mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_118a0d05:;
  /* 118a0d05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0d08 mov ecx, dword ptr [0x118c3b48] */
  ECX = (r32((uint32_t)(0x118c3b48)));
  /* 118a0d0e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 118a0d11 push edx */
  push32((uint32_t)(EDX));
  /* 118a0d12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0d15 push eax */
  push32((uint32_t)(EAX));
  /* 118a0d16 call 0x118a00c0 */
  push32(0x118a0d1bu); f_118a00c0();
  /* 118a0d1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a0d1e:;
  /* 118a0d1e jmp 0x118a0c27 */
  goto L_118a0c27;
L_118a0d23:;
  /* 118a0d23 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a0d25 call 0x1189aca0 */
  push32(0x118a0d2au); f_1189aca0();
  /* 118a0d2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0d2d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0d31 jne 0x118a0d38 */
  if (!C.zf) goto L_118a0d38;
  /* 118a0d33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a0d36 jmp 0x118a0d3b */
  goto L_118a0d3b;
L_118a0d38:;
  /* 118a0d38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_118a0d3b:;
  /* 118a0d3b mov esp, ebp */
  ESP = (EBP);
  /* 118a0d3d pop ebp */
  EBP = (pop32());
  /* 118a0d3e ret  */
  ESPCHK(0x118a0c00u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x118a0d40 (15 bytes, 7 insns) */
void f_118a0d40(void) {
  FTRACE(0x118a0d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0d40 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0d41 mov ebp, esp */
  EBP = (ESP);
  /* 118a0d43 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a0d45 call 0x11896170 */
  push32(0x118a0d4au); f_11896170();
  /* 118a0d4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0d4d pop ebp */
  EBP = (pop32());
  /* 118a0d4e ret  */
  ESPCHK(0x118a0d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d50 @ 0x118a0d50 (1007 bytes, 269 insns) */
void f_118a0d50(void) {
  FTRACE(0x118a0d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a0d50 push ebp */
  push32((uint32_t)(EBP));
  /* 118a0d51 mov ebp, esp */
  EBP = (ESP);
  /* 118a0d53 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a0d59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0d5d jl 0x118a0d65 */
  if ((C.sf!=C.of)) goto L_118a0d65;
  /* 118a0d5f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0d63 jle 0x118a0d6c */
  if ((C.zf||C.sf!=C.of)) goto L_118a0d6c;
L_118a0d65:;
  /* 118a0d65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a0d67 jmp 0x118a113b */
  goto L_118a113b;
L_118a0d6c:;
  /* 118a0d6c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118a0d6e call 0x1189ac00 */
  push32(0x118a0d73u); f_1189ac00();
  /* 118a0d73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0d76 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118a0d7d mov eax, dword ptr [0x118c3b34] */
  EAX = (r32((uint32_t)(0x118c3b34)));
  /* 118a0d82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0d85 mov dword ptr [0x118c3b34], eax */
  w32((uint32_t)(0x118c3b34), (EAX));
L_118a0d8a:;
  /* 118a0d8a cmp dword ptr [0x118c3b44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0d91 je 0x118a0d9d */
  if (C.zf) goto L_118a0d9d;
  /* 118a0d93 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a0d95 call dword ptr [0x118c6304] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6304))), 0x118a0d9bu);
  /* 118a0d9b jmp 0x118a0d8a */
  goto L_118a0d8a;
L_118a0d9d:;
  /* 118a0d9d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0da1 je 0x118a0de1 */
  if (C.zf) goto L_118a0de1;
  /* 118a0da3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0da7 je 0x118a0dc1 */
  if (C.zf) goto L_118a0dc1;
  /* 118a0da9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a0dac push ecx */
  push32((uint32_t)(ECX));
  /* 118a0dad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0db0 push edx */
  push32((uint32_t)(EDX));
  /* 118a0db1 call 0x118a1140 */
  push32(0x118a0db6u); f_118a1140();
  /* 118a0db6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0db9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 118a0dbf jmp 0x118a0dd3 */
  goto L_118a0dd3;
L_118a0dc1:;
  /* 118a0dc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a0dc4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a0dc7 mov ecx, dword ptr [eax + 0x118c24dc] */
  ECX = (r32((uint32_t)(EAX + 0x118c24dc)));
  /* 118a0dcd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_118a0dd3:;
  /* 118a0dd3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 118a0dd9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118a0ddc jmp 0x118a111b */
  goto L_118a111b;
L_118a0de1:;
  /* 118a0de1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 118a0de8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 118a0def cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0df3 je 0x118a1113 */
  if (C.zf) goto L_118a1113;
  /* 118a0df9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a0dfc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a0dff cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0e02 jne 0x118a1024 */
  if (!C.zf) goto L_118a1024;
  /* 118a0e08 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a0e0b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 118a0e0f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0e12 jne 0x118a1024 */
  if (!C.zf) goto L_118a1024;
  /* 118a0e18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a0e1b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 118a0e1f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0e22 jne 0x118a1024 */
  if (!C.zf) goto L_118a1024;
  /* 118a0e28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a0e2b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_118a0e31:;
  /* 118a0e31 push 0x118bfbc4 */
  push32((uint32_t)(0x118bfbc4u));
  /* 118a0e36 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 118a0e3c push ecx */
  push32((uint32_t)(ECX));
  /* 118a0e3d call 0x118a2fa0 */
  push32(0x118a0e42u); f_118a2fa0();
  /* 118a0e42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0e45 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 118a0e4b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0e52 je 0x118a0e7d */
  if (C.zf) goto L_118a0e7d;
  /* 118a0e54 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118a0e5a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a0e60 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 118a0e66 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0e6d je 0x118a0e7d */
  if (C.zf) goto L_118a0e7d;
  /* 118a0e6f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118a0e75 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a0e78 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0e7b jne 0x118a0ea3 */
  if (!C.zf) goto L_118a0ea3;
L_118a0e7d:;
  /* 118a0e7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0e81 je 0x118a0e9c */
  if (C.zf) goto L_118a0e9c;
  /* 118a0e83 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118a0e85 call 0x1189aca0 */
  push32(0x118a0e8au); f_1189aca0();
  /* 118a0e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0e8d mov edx, dword ptr [0x118c3b34] */
  EDX = (r32((uint32_t)(0x118c3b34)));
  /* 118a0e93 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a0e96 mov dword ptr [0x118c3b34], edx */
  w32((uint32_t)(0x118c3b34), (EDX));
L_118a0e9c:;
  /* 118a0e9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a0e9e jmp 0x118a113b */
  goto L_118a113b;
L_118a0ea3:;
  /* 118a0ea3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 118a0eaa jmp 0x118a0eb5 */
  goto L_118a0eb5;
L_118a0eac:;
  /* 118a0eac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a0eaf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0eb2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_118a0eb5:;
  /* 118a0eb5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0eb9 jg 0x118a0f03 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a0f03;
  /* 118a0ebb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 118a0ec1 push ecx */
  push32((uint32_t)(ECX));
  /* 118a0ec2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 118a0ec8 push edx */
  push32((uint32_t)(EDX));
  /* 118a0ec9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a0ecc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a0ecf mov ecx, dword ptr [eax + 0x118c24d8] */
  ECX = (r32((uint32_t)(EAX + 0x118c24d8)));
  /* 118a0ed5 push ecx */
  push32((uint32_t)(ECX));
  /* 118a0ed6 call 0x118a2f60 */
  push32(0x118a0edbu); f_118a2f60();
  /* 118a0edb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0ede test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a0ee0 jne 0x118a0f01 */
  if (!C.zf) goto L_118a0f01;
  /* 118a0ee2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a0ee5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a0ee8 mov eax, dword ptr [edx + 0x118c24d8] */
  EAX = (r32((uint32_t)(EDX + 0x118c24d8)));
  /* 118a0eee push eax */
  push32((uint32_t)(EAX));
  /* 118a0eef call 0x1189a030 */
  push32(0x118a0ef4u); f_1189a030();
  /* 118a0ef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0ef7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0efd jne 0x118a0f01 */
  if (!C.zf) goto L_118a0f01;
  /* 118a0eff jmp 0x118a0f03 */
  goto L_118a0f03;
L_118a0f01:;
  /* 118a0f01 jmp 0x118a0eac */
  goto L_118a0eac;
L_118a0f03:;
  /* 118a0f03 push 0x118bfbc0 */
  push32((uint32_t)(0x118bfbc0u));
  /* 118a0f08 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118a0f0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0f11 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 118a0f17 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118a0f1d push edx */
  push32((uint32_t)(EDX));
  /* 118a0f1e call 0x118a2f20 */
  push32(0x118a0f23u); f_118a2f20();
  /* 118a0f23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0f26 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 118a0f2c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0f33 jne 0x118a0f69 */
  if (!C.zf) goto L_118a0f69;
  /* 118a0f35 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118a0f3b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a0f3e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0f41 je 0x118a0f69 */
  if (C.zf) goto L_118a0f69;
  /* 118a0f43 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0f47 je 0x118a0f62 */
  if (C.zf) goto L_118a0f62;
  /* 118a0f49 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118a0f4b call 0x1189aca0 */
  push32(0x118a0f50u); f_1189aca0();
  /* 118a0f50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0f53 mov edx, dword ptr [0x118c3b34] */
  EDX = (r32((uint32_t)(0x118c3b34)));
  /* 118a0f59 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a0f5c mov dword ptr [0x118c3b34], edx */
  w32((uint32_t)(0x118c3b34), (EDX));
L_118a0f62:;
  /* 118a0f62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a0f64 jmp 0x118a113b */
  goto L_118a113b;
L_118a0f69:;
  /* 118a0f69 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0f6d jg 0x118a0fba */
  if ((!C.zf&&C.sf==C.of)) goto L_118a0fba;
  /* 118a0f6f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 118a0f75 push eax */
  push32((uint32_t)(EAX));
  /* 118a0f76 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118a0f7c push ecx */
  push32((uint32_t)(ECX));
  /* 118a0f7d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 118a0f83 push edx */
  push32((uint32_t)(EDX));
  /* 118a0f84 call 0x1189aa20 */
  push32(0x118a0f89u); f_1189aa20();
  /* 118a0f89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0f8c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 118a0f92 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 118a0f9a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 118a0fa0 push ecx */
  push32((uint32_t)(ECX));
  /* 118a0fa1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a0fa4 push edx */
  push32((uint32_t)(EDX));
  /* 118a0fa5 call 0x118a1140 */
  push32(0x118a0faau); f_118a1140();
  /* 118a0faa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0fad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a0faf je 0x118a0fba */
  if (C.zf) goto L_118a0fba;
  /* 118a0fb1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a0fb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0fb7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_118a0fba:;
  /* 118a0fba mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118a0fc0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0fc6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 118a0fcc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 118a0fd2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118a0fd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a0fd7 je 0x118a0fe8 */
  if (C.zf) goto L_118a0fe8;
  /* 118a0fd9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 118a0fdf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a0fe2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_118a0fe8:;
  /* 118a0fe8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 118a0fee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118a0ff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a0ff3 jne 0x118a0e31 */
  if (!C.zf) goto L_118a0e31;
  /* 118a0ff9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a0ffd je 0x118a100c */
  if (C.zf) goto L_118a100c;
  /* 118a0fff call 0x118a12e0 */
  push32(0x118a1004u); f_118a12e0();
  /* 118a1004 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 118a100a jmp 0x118a1016 */
  goto L_118a1016;
L_118a100c:;
  /* 118a100c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_118a1016:;
  /* 118a1016 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 118a101c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a101f jmp 0x118a1111 */
  goto L_118a1111;
L_118a1024:;
  /* 118a1024 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1027 push edx */
  push32((uint32_t)(EDX));
  /* 118a1028 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a102a push 0 */
  push32((uint32_t)(0x0u));
  /* 118a102c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 118a1032 push eax */
  push32((uint32_t)(EAX));
  /* 118a1033 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a1036 push ecx */
  push32((uint32_t)(ECX));
  /* 118a1037 call 0x118a13e0 */
  push32(0x118a103cu); f_118a13e0();
  /* 118a103c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a103f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a1042 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1046 je 0x118a1111 */
  if (C.zf) goto L_118a1111;
  /* 118a104c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118a1053 jmp 0x118a105e */
  goto L_118a105e;
L_118a1055:;
  /* 118a1055 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a1058 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a105b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_118a105e:;
  /* 118a105e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1062 jg 0x118a10c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a10c0;
  /* 118a1064 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1068 je 0x118a10be */
  if (C.zf) goto L_118a10be;
  /* 118a106a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a106d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a1070 mov ecx, dword ptr [eax + 0x118c24dc] */
  ECX = (r32((uint32_t)(EAX + 0x118c24dc)));
  /* 118a1076 push ecx */
  push32((uint32_t)(ECX));
  /* 118a1077 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 118a107d push edx */
  push32((uint32_t)(EDX));
  /* 118a107e call 0x118a2e90 */
  push32(0x118a1083u); f_118a2e90();
  /* 118a1083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1086 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a1088 je 0x118a10b5 */
  if (C.zf) goto L_118a10b5;
  /* 118a108a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 118a1090 push eax */
  push32((uint32_t)(EAX));
  /* 118a1091 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a1094 push ecx */
  push32((uint32_t)(ECX));
  /* 118a1095 call 0x118a1140 */
  push32(0x118a109au); f_118a1140();
  /* 118a109a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a109d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a109f je 0x118a10ac */
  if (C.zf) goto L_118a10ac;
  /* 118a10a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a10a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a10a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 118a10aa jmp 0x118a10b3 */
  goto L_118a10b3;
L_118a10ac:;
  /* 118a10ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_118a10b3:;
  /* 118a10b3 jmp 0x118a10be */
  goto L_118a10be;
L_118a10b5:;
  /* 118a10b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a10b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a10bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_118a10be:;
  /* 118a10be jmp 0x118a1055 */
  goto L_118a1055;
L_118a10c0:;
  /* 118a10c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a10c4 je 0x118a10eb */
  if (C.zf) goto L_118a10eb;
  /* 118a10c6 call 0x118a12e0 */
  push32(0x118a10cbu); f_118a12e0();
  /* 118a10cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a10ce push 2 */
  push32((uint32_t)(0x2u));
  /* 118a10d0 mov ecx, dword ptr [0x118c24dc] */
  ECX = (r32((uint32_t)(0x118c24dc)));
  /* 118a10d6 push ecx */
  push32((uint32_t)(ECX));
  /* 118a10d7 call 0x11897c90 */
  push32(0x118a10dcu); f_11897c90();
  /* 118a10dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a10df mov dword ptr [0x118c24dc], 0 */
  w32((uint32_t)(0x118c24dc), (0x0u));
  /* 118a10e9 jmp 0x118a1111 */
  goto L_118a1111;
L_118a10eb:;
  /* 118a10eb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a10ef je 0x118a10fe */
  if (C.zf) goto L_118a10fe;
  /* 118a10f1 call 0x118a12e0 */
  push32(0x118a10f6u); f_118a12e0();
  /* 118a10f6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 118a10fc jmp 0x118a1108 */
  goto L_118a1108;
L_118a10fe:;
  /* 118a10fe mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_118a1108:;
  /* 118a1108 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 118a110e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_118a1111:;
  /* 118a1111 jmp 0x118a111b */
  goto L_118a111b;
L_118a1113:;
  /* 118a1113 call 0x118a12e0 */
  push32(0x118a1118u); f_118a12e0();
  /* 118a1118 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118a111b:;
  /* 118a111b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a111f je 0x118a1138 */
  if (C.zf) goto L_118a1138;
  /* 118a1121 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118a1123 call 0x1189aca0 */
  push32(0x118a1128u); f_1189aca0();
  /* 118a1128 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a112b mov eax, dword ptr [0x118c3b34] */
  EAX = (r32((uint32_t)(0x118c3b34)));
  /* 118a1130 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a1133 mov dword ptr [0x118c3b34], eax */
  w32((uint32_t)(0x118c3b34), (EAX));
L_118a1138:;
  /* 118a1138 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_118a113b:;
  /* 118a113b mov esp, ebp */
  ESP = (EBP);
  /* 118a113d pop ebp */
  EBP = (pop32());
  /* 118a113e ret  */
  ESPCHK(0x118a0d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011140 @ 0x118a1140 (403 bytes, 117 insns) */
void f_118a1140(void) {
  FTRACE(0x118a1140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a1140 push ebp */
  push32((uint32_t)(EBP));
  /* 118a1141 mov ebp, esp */
  EBP = (ESP);
  /* 118a1143 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a1149 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a114c push eax */
  push32((uint32_t)(EAX));
  /* 118a114d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 118a1153 push ecx */
  push32((uint32_t)(ECX));
  /* 118a1154 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 118a115a push edx */
  push32((uint32_t)(EDX));
  /* 118a115b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 118a1161 push eax */
  push32((uint32_t)(EAX));
  /* 118a1162 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a1165 push ecx */
  push32((uint32_t)(ECX));
  /* 118a1166 call 0x118a13e0 */
  push32(0x118a116bu); f_118a13e0();
  /* 118a116b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a116e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a1170 jne 0x118a1179 */
  if (!C.zf) goto L_118a1179;
  /* 118a1172 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a1174 jmp 0x118a12cf */
  goto L_118a12cf;
L_118a1179:;
  /* 118a1179 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 118a117e push 0x118bfbc8 */
  push32((uint32_t)(0x118bfbc8u));
  /* 118a1183 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a1185 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 118a118b push edx */
  push32((uint32_t)(EDX));
  /* 118a118c call 0x1189a030 */
  push32(0x118a1191u); f_1189a030();
  /* 118a1191 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1194 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1197 push eax */
  push32((uint32_t)(EAX));
  /* 118a1198 call 0x11897200 */
  push32(0x118a119du); f_11897200();
  /* 118a119d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a11a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a11a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a11a7 jne 0x118a11b0 */
  if (!C.zf) goto L_118a11b0;
  /* 118a11a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a11ab jmp 0x118a12cf */
  goto L_118a12cf;
L_118a11b0:;
  /* 118a11b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a11b3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a11b6 mov ecx, dword ptr [eax + 0x118c24dc] */
  ECX = (r32((uint32_t)(EAX + 0x118c24dc)));
  /* 118a11bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a11bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a11c2 mov eax, dword ptr [edx*4 + 0x118c39b0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118c39b0)));
  /* 118a11c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a11cc push 6 */
  push32((uint32_t)(0x6u));
  /* 118a11ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a11d1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a11d4 add ecx, 0x118c3a00 */
  { uint32_t _a=(ECX),_b=(0x118c3a00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a11da push ecx */
  push32((uint32_t)(ECX));
  /* 118a11db lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 118a11de push edx */
  push32((uint32_t)(EDX));
  /* 118a11df call 0x1189dae0 */
  push32(0x118a11e4u); f_1189dae0();
  /* 118a11e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a11e7 mov eax, dword ptr [0x118c39c8] */
  EAX = (r32((uint32_t)(0x118c39c8)));
  /* 118a11ec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 118a11ef lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 118a11f5 push ecx */
  push32((uint32_t)(ECX));
  /* 118a11f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a11f9 push edx */
  push32((uint32_t)(EDX));
  /* 118a11fa call 0x1189a1b0 */
  push32(0x118a11ffu); f_1189a1b0();
  /* 118a11ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1202 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1205 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a1208 mov dword ptr [ecx + 0x118c24dc], eax */
  w32((uint32_t)(ECX + 0x118c24dc), (EAX));
  /* 118a120e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 118a1214 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118a121a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a121d mov dword ptr [eax*4 + 0x118c39b0], edx */
  w32((uint32_t)(EAX*4 + 0x118c39b0), (EDX));
  /* 118a1224 push 6 */
  push32((uint32_t)(0x6u));
  /* 118a1226 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 118a122c push ecx */
  push32((uint32_t)(ECX));
  /* 118a122d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1230 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a1233 add edx, 0x118c3a00 */
  { uint32_t _a=(EDX),_b=(0x118c3a00u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1239 push edx */
  push32((uint32_t)(EDX));
  /* 118a123a call 0x1189dae0 */
  push32(0x118a123fu); f_1189dae0();
  /* 118a123f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1242 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1246 jne 0x118a1253 */
  if (!C.zf) goto L_118a1253;
  /* 118a1248 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118a124e mov dword ptr [0x118c39c8], eax */
  w32((uint32_t)(0x118c39c8), (EAX));
L_118a1253:;
  /* 118a1253 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1257 jne 0x118a1265 */
  if (!C.zf) goto L_118a1265;
  /* 118a1259 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118a125f mov dword ptr [0x118c39cc], ecx */
  w32((uint32_t)(0x118c39cc), (ECX));
L_118a1265:;
  /* 118a1265 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1268 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a126b call dword ptr [edx + 0x118c24e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x118c24e0))), 0x118a1271u);
  /* 118a1271 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a1273 je 0x118a12ac */
  if (C.zf) goto L_118a12ac;
  /* 118a1275 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1278 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a127b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a127e mov dword ptr [eax + 0x118c24dc], ecx */
  w32((uint32_t)(EAX + 0x118c24dc), (ECX));
  /* 118a1284 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a1286 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a1289 push edx */
  push32((uint32_t)(EDX));
  /* 118a128a call 0x11897c90 */
  push32(0x118a128fu); f_11897c90();
  /* 118a128f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1295 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1298 mov dword ptr [eax*4 + 0x118c39b0], ecx */
  w32((uint32_t)(EAX*4 + 0x118c39b0), (ECX));
  /* 118a129f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a12a2 mov dword ptr [0x118c39c8], edx */
  w32((uint32_t)(0x118c39c8), (EDX));
  /* 118a12a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a12aa jmp 0x118a12cf */
  goto L_118a12cf;
L_118a12ac:;
  /* 118a12ac cmp dword ptr [ebp - 0xc], 0x118c23c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x118c23c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a12b3 je 0x118a12c3 */
  if (C.zf) goto L_118a12c3;
  /* 118a12b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a12b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a12ba push eax */
  push32((uint32_t)(EAX));
  /* 118a12bb call 0x11897c90 */
  push32(0x118a12c0u); f_11897c90();
  /* 118a12c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a12c3:;
  /* 118a12c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a12c6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a12c9 mov eax, dword ptr [ecx + 0x118c24dc] */
  EAX = (r32((uint32_t)(ECX + 0x118c24dc)));
L_118a12cf:;
  /* 118a12cf mov esp, ebp */
  ESP = (EBP);
  /* 118a12d1 pop ebp */
  EBP = (pop32());
  /* 118a12d2 ret  */
  ESPCHK(0x118a1140u, _esp0);
  ESP += 4; return;
}

/* FUN_100112e0 @ 0x118a12e0 (256 bytes, 72 insns) */
void f_118a12e0(void) {
  FTRACE(0x118a12e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a12e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a12e1 mov ebp, esp */
  EBP = (ESP);
  /* 118a12e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a12e6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 118a12ed cmp dword ptr [0x118c24dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c24dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a12f4 jne 0x118a1314 */
  if (!C.zf) goto L_118a1314;
  /* 118a12f6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 118a12fb push 0x118bfbc8 */
  push32((uint32_t)(0x118bfbc8u));
  /* 118a1300 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a1302 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 118a1307 call 0x11897200 */
  push32(0x118a130cu); f_11897200();
  /* 118a130c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a130f mov dword ptr [0x118c24dc], eax */
  w32((uint32_t)(0x118c24dc), (EAX));
L_118a1314:;
  /* 118a1314 mov eax, dword ptr [0x118c24dc] */
  EAX = (r32((uint32_t)(0x118c24dc)));
  /* 118a1319 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 118a131c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118a1323 jmp 0x118a132e */
  goto L_118a132e;
L_118a1325:;
  /* 118a1325 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1328 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a132b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_118a132e:;
  /* 118a132e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1331 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a1334 mov eax, dword ptr [edx + 0x118c24dc] */
  EAX = (r32((uint32_t)(EDX + 0x118c24dc)));
  /* 118a133a push eax */
  push32((uint32_t)(EAX));
  /* 118a133b push 0x118bfbd4 */
  push32((uint32_t)(0x118bfbd4u));
  /* 118a1340 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1343 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a1346 mov edx, dword ptr [ecx + 0x118c24d8] */
  EDX = (r32((uint32_t)(ECX + 0x118c24d8)));
  /* 118a134c push edx */
  push32((uint32_t)(EDX));
  /* 118a134d push 3 */
  push32((uint32_t)(0x3u));
  /* 118a134f mov eax, dword ptr [0x118c24dc] */
  EAX = (r32((uint32_t)(0x118c24dc)));
  /* 118a1354 push eax */
  push32((uint32_t)(EAX));
  /* 118a1355 call 0x118a1580 */
  push32(0x118a135au); f_118a1580();
  /* 118a135a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a135d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1361 jge 0x118a13a9 */
  if ((C.sf==C.of)) goto L_118a13a9;
  /* 118a1363 push 0x118bfbc0 */
  push32((uint32_t)(0x118bfbc0u));
  /* 118a1368 mov ecx, dword ptr [0x118c24dc] */
  ECX = (r32((uint32_t)(0x118c24dc)));
  /* 118a136e push ecx */
  push32((uint32_t)(ECX));
  /* 118a136f call 0x1189a1c0 */
  push32(0x118a1374u); f_1189a1c0();
  /* 118a1374 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1377 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a137a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a137d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a1380 mov eax, dword ptr [edx + 0x118c24dc] */
  EAX = (r32((uint32_t)(EDX + 0x118c24dc)));
  /* 118a1386 push eax */
  push32((uint32_t)(EAX));
  /* 118a1387 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a138a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a138d mov edx, dword ptr [ecx + 0x118c24dc] */
  EDX = (r32((uint32_t)(ECX + 0x118c24dc)));
  /* 118a1393 push edx */
  push32((uint32_t)(EDX));
  /* 118a1394 call 0x118a2e90 */
  push32(0x118a1399u); f_118a2e90();
  /* 118a1399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a139c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a139e je 0x118a13a7 */
  if (C.zf) goto L_118a13a7;
  /* 118a13a0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_118a13a7:;
  /* 118a13a7 jmp 0x118a13d7 */
  goto L_118a13d7;
L_118a13a9:;
  /* 118a13a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a13ad jne 0x118a13b6 */
  if (!C.zf) goto L_118a13b6;
  /* 118a13af mov eax, dword ptr [0x118c24dc] */
  EAX = (r32((uint32_t)(0x118c24dc)));
  /* 118a13b4 jmp 0x118a13dc */
  goto L_118a13dc;
L_118a13b6:;
  /* 118a13b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a13b8 mov eax, dword ptr [0x118c24dc] */
  EAX = (r32((uint32_t)(0x118c24dc)));
  /* 118a13bd push eax */
  push32((uint32_t)(EAX));
  /* 118a13be call 0x11897c90 */
  push32(0x118a13c3u); f_11897c90();
  /* 118a13c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a13c6 mov dword ptr [0x118c24dc], 0 */
  w32((uint32_t)(0x118c24dc), (0x0u));
  /* 118a13d0 mov eax, dword ptr [0x118c24f4] */
  EAX = (r32((uint32_t)(0x118c24f4)));
  /* 118a13d5 jmp 0x118a13dc */
  goto L_118a13dc;
L_118a13d7:;
  /* 118a13d7 jmp 0x118a1325 */
  goto L_118a1325;
L_118a13dc:;
  /* 118a13dc mov esp, ebp */
  ESP = (EBP);
  /* 118a13de pop ebp */
  EBP = (pop32());
  /* 118a13df ret  */
  ESPCHK(0x118a12e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113e0 @ 0x118a13e0 (388 bytes, 115 insns) */
void f_118a13e0(void) {
  FTRACE(0x118a13e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a13e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a13e1 mov ebp, esp */
  EBP = (ESP);
  /* 118a13e3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a13e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a13ed jne 0x118a13f6 */
  if (!C.zf) goto L_118a13f6;
  /* 118a13ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a13f1 jmp 0x118a1560 */
  goto L_118a1560;
L_118a13f6:;
  /* 118a13f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a13f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a13fc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a13ff jne 0x118a1450 */
  if (!C.zf) goto L_118a1450;
  /* 118a1401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1404 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 118a1408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a140a jne 0x118a1450 */
  if (!C.zf) goto L_118a1450;
  /* 118a140c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a140f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 118a1412 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a1415 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 118a1419 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a141d je 0x118a1439 */
  if (C.zf) goto L_118a1439;
  /* 118a141f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a1422 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 118a1427 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a142a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 118a1430 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a1433 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_118a1439:;
  /* 118a1439 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a143d je 0x118a1448 */
  if (C.zf) goto L_118a1448;
  /* 118a143f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a1442 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_118a1448:;
  /* 118a1448 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a144b jmp 0x118a1560 */
  goto L_118a1560;
L_118a1450:;
  /* 118a1450 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1453 push ecx */
  push32((uint32_t)(ECX));
  /* 118a1454 push 0x118c2450 */
  push32((uint32_t)(0x118c2450u));
  /* 118a1459 call 0x118a2e90 */
  push32(0x118a145eu); f_118a2e90();
  /* 118a145e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1461 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a1463 je 0x118a1518 */
  if (C.zf) goto L_118a1518;
  /* 118a1469 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a146c push edx */
  push32((uint32_t)(EDX));
  /* 118a146d push 0x118c23cc */
  push32((uint32_t)(0x118c23ccu));
  /* 118a1472 call 0x118a2e90 */
  push32(0x118a1477u); f_118a2e90();
  /* 118a1477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a147a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a147c je 0x118a1518 */
  if (C.zf) goto L_118a1518;
  /* 118a1482 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1485 push eax */
  push32((uint32_t)(EAX));
  /* 118a1486 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 118a148c push ecx */
  push32((uint32_t)(ECX));
  /* 118a148d call 0x118a15d0 */
  push32(0x118a1492u); f_118a15d0();
  /* 118a1492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1495 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a1497 je 0x118a14a0 */
  if (C.zf) goto L_118a14a0;
  /* 118a1499 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a149b jmp 0x118a1560 */
  goto L_118a1560;
L_118a14a0:;
  /* 118a14a0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 118a14a6 push edx */
  push32((uint32_t)(EDX));
  /* 118a14a7 push 0x118c39d8 */
  push32((uint32_t)(0x118c39d8u));
  /* 118a14ac lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 118a14b2 push eax */
  push32((uint32_t)(EAX));
  /* 118a14b3 call 0x118a2fe0 */
  push32(0x118a14b8u); f_118a2fe0();
  /* 118a14b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a14bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a14bd jne 0x118a14c6 */
  if (!C.zf) goto L_118a14c6;
  /* 118a14bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a14c1 jmp 0x118a1560 */
  goto L_118a1560;
L_118a14c6:;
  /* 118a14c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a14c8 mov cx, word ptr [0x118c39dc] */
  CX = (r16((uint32_t)(0x118c39dc)));
  /* 118a14cf mov dword ptr [0x118c39e0], ecx */
  w32((uint32_t)(0x118c39e0), (ECX));
  /* 118a14d5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 118a14db push edx */
  push32((uint32_t)(EDX));
  /* 118a14dc push 0x118c2450 */
  push32((uint32_t)(0x118c2450u));
  /* 118a14e1 call 0x118a1730 */
  push32(0x118a14e6u); f_118a1730();
  /* 118a14e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a14e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a14ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a14ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a14f1 je 0x118a1506 */
  if (C.zf) goto L_118a1506;
  /* 118a14f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a14f6 push edx */
  push32((uint32_t)(EDX));
  /* 118a14f7 push 0x118c23cc */
  push32((uint32_t)(0x118c23ccu));
  /* 118a14fc call 0x1189a1b0 */
  push32(0x118a1501u); f_1189a1b0();
  /* 118a1501 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1504 jmp 0x118a1518 */
  goto L_118a1518;
L_118a1506:;
  /* 118a1506 push 0x118c2450 */
  push32((uint32_t)(0x118c2450u));
  /* 118a150b push 0x118c23cc */
  push32((uint32_t)(0x118c23ccu));
  /* 118a1510 call 0x1189a1b0 */
  push32(0x118a1515u); f_1189a1b0();
  /* 118a1515 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a1518:;
  /* 118a1518 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a151c je 0x118a1531 */
  if (C.zf) goto L_118a1531;
  /* 118a151e push 6 */
  push32((uint32_t)(0x6u));
  /* 118a1520 push 0x118c39d8 */
  push32((uint32_t)(0x118c39d8u));
  /* 118a1525 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a1528 push eax */
  push32((uint32_t)(EAX));
  /* 118a1529 call 0x1189dae0 */
  push32(0x118a152eu); f_1189dae0();
  /* 118a152e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a1531:;
  /* 118a1531 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1535 je 0x118a154a */
  if (C.zf) goto L_118a154a;
  /* 118a1537 push 4 */
  push32((uint32_t)(0x4u));
  /* 118a1539 push 0x118c39e0 */
  push32((uint32_t)(0x118c39e0u));
  /* 118a153e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a1541 push ecx */
  push32((uint32_t)(ECX));
  /* 118a1542 call 0x1189dae0 */
  push32(0x118a1547u); f_1189dae0();
  /* 118a1547 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a154a:;
  /* 118a154a push 0x118c2450 */
  push32((uint32_t)(0x118c2450u));
  /* 118a154f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a1552 push edx */
  push32((uint32_t)(EDX));
  /* 118a1553 call 0x1189a1b0 */
  push32(0x118a1558u); f_1189a1b0();
  /* 118a1558 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a155b mov eax, 0x118c2450 */
  EAX = (0x118c2450u);
L_118a1560:;
  /* 118a1560 mov esp, ebp */
  ESP = (EBP);
  /* 118a1562 pop ebp */
  EBP = (pop32());
  /* 118a1563 ret  */
  ESPCHK(0x118a13e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011570 @ 0x118a1570 (7 bytes, 5 insns) */
void f_118a1570(void) {
  FTRACE(0x118a1570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a1570 push ebp */
  push32((uint32_t)(EBP));
  /* 118a1571 mov ebp, esp */
  EBP = (ESP);
  /* 118a1573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a1575 pop ebp */
  EBP = (pop32());
  /* 118a1576 ret  */
  ESPCHK(0x118a1570u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x118a1580 (79 bytes, 28 insns) */
void f_118a1580(void) {
  FTRACE(0x118a1580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a1580 push ebp */
  push32((uint32_t)(EBP));
  /* 118a1581 mov ebp, esp */
  EBP = (ESP);
  /* 118a1583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a1586 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 118a1589 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a158c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118a1593 jmp 0x118a159e */
  goto L_118a159e;
L_118a1595:;
  /* 118a1595 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a1598 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a159b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_118a159e:;
  /* 118a159e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a15a1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a15a4 jge 0x118a15c4 */
  if ((C.sf==C.of)) goto L_118a15c4;
  /* 118a15a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a15a9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a15ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a15af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a15b2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 118a15b5 push edx */
  push32((uint32_t)(EDX));
  /* 118a15b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a15b9 push eax */
  push32((uint32_t)(EAX));
  /* 118a15ba call 0x1189a1c0 */
  push32(0x118a15bfu); f_1189a1c0();
  /* 118a15bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a15c2 jmp 0x118a1595 */
  goto L_118a1595;
L_118a15c4:;
  /* 118a15c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118a15cb mov esp, ebp */
  ESP = (EBP);
  /* 118a15cd pop ebp */
  EBP = (pop32());
  /* 118a15ce ret  */
  ESPCHK(0x118a1580u, _esp0);
  ESP += 4; return;
}

/* FUN_100115d0 @ 0x118a15d0 (349 bytes, 122 insns) */
void f_118a15d0(void) {
  FTRACE(0x118a15d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a15d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a15d1 mov ebp, esp */
  EBP = (ESP);
  /* 118a15d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a15d6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 118a15db push 0 */
  push32((uint32_t)(0x0u));
  /* 118a15dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a15e0 push eax */
  push32((uint32_t)(EAX));
  /* 118a15e1 call 0x1189af70 */
  push32(0x118a15e6u); f_1189af70();
  /* 118a15e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a15e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a15ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118a15ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a15f1 jne 0x118a15fa */
  if (!C.zf) goto L_118a15fa;
  /* 118a15f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a15f5 jmp 0x118a1729 */
  goto L_118a1729;
L_118a15fa:;
  /* 118a15fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a15fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a1600 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1603 jne 0x118a1630 */
  if (!C.zf) goto L_118a1630;
  /* 118a1605 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a1608 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 118a160c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a160e je 0x118a1630 */
  if (C.zf) goto L_118a1630;
  /* 118a1610 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a1613 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1616 push ecx */
  push32((uint32_t)(ECX));
  /* 118a1617 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a161a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1620 push edx */
  push32((uint32_t)(EDX));
  /* 118a1621 call 0x1189a1b0 */
  push32(0x118a1626u); f_1189a1b0();
  /* 118a1626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1629 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a162b jmp 0x118a1729 */
  goto L_118a1729;
L_118a1630:;
  /* 118a1630 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118a1637 jmp 0x118a1642 */
  goto L_118a1642;
L_118a1639:;
  /* 118a1639 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a163c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a163f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118a1642:;
  /* 118a1642 push 0x118bfbd8 */
  push32((uint32_t)(0x118bfbd8u));
  /* 118a1647 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a164a push ecx */
  push32((uint32_t)(ECX));
  /* 118a164b call 0x118a2f20 */
  push32(0x118a1650u); f_118a2f20();
  /* 118a1650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1653 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a1656 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a165a jne 0x118a1664 */
  if (!C.zf) goto L_118a1664;
  /* 118a165c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a165f jmp 0x118a1729 */
  goto L_118a1729;
L_118a1664:;
  /* 118a1664 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a1667 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a166a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a166c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 118a166f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1673 jne 0x118a169a */
  if (!C.zf) goto L_118a169a;
  /* 118a1675 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1679 jge 0x118a169a */
  if ((C.sf==C.of)) goto L_118a169a;
  /* 118a167b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118a167f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1682 je 0x118a169a */
  if (C.zf) goto L_118a169a;
  /* 118a1684 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1687 push edx */
  push32((uint32_t)(EDX));
  /* 118a1688 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a168b push eax */
  push32((uint32_t)(EAX));
  /* 118a168c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a168f push ecx */
  push32((uint32_t)(ECX));
  /* 118a1690 call 0x1189aa20 */
  push32(0x118a1695u); f_1189aa20();
  /* 118a1695 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1698 jmp 0x118a1700 */
  goto L_118a1700;
L_118a169a:;
  /* 118a169a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a169e jne 0x118a16c8 */
  if (!C.zf) goto L_118a16c8;
  /* 118a16a0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a16a4 jge 0x118a16c8 */
  if ((C.sf==C.of)) goto L_118a16c8;
  /* 118a16a6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118a16aa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a16ad je 0x118a16c8 */
  if (C.zf) goto L_118a16c8;
  /* 118a16af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a16b2 push eax */
  push32((uint32_t)(EAX));
  /* 118a16b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a16b6 push ecx */
  push32((uint32_t)(ECX));
  /* 118a16b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a16ba add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a16bd push edx */
  push32((uint32_t)(EDX));
  /* 118a16be call 0x1189aa20 */
  push32(0x118a16c3u); f_1189aa20();
  /* 118a16c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a16c6 jmp 0x118a1700 */
  goto L_118a1700;
L_118a16c8:;
  /* 118a16c8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a16cc jne 0x118a16fb */
  if (!C.zf) goto L_118a16fb;
  /* 118a16ce movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118a16d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a16d4 je 0x118a16df */
  if (C.zf) goto L_118a16df;
  /* 118a16d6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118a16da cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a16dd jne 0x118a16fb */
  if (!C.zf) goto L_118a16fb;
L_118a16df:;
  /* 118a16df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a16e2 push edx */
  push32((uint32_t)(EDX));
  /* 118a16e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a16e6 push eax */
  push32((uint32_t)(EAX));
  /* 118a16e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a16ea add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a16f0 push ecx */
  push32((uint32_t)(ECX));
  /* 118a16f1 call 0x1189aa20 */
  push32(0x118a16f6u); f_1189aa20();
  /* 118a16f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a16f9 jmp 0x118a1700 */
  goto L_118a1700;
L_118a16fb:;
  /* 118a16fb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a16fe jmp 0x118a1729 */
  goto L_118a1729;
L_118a1700:;
  /* 118a1700 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118a1704 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1707 jne 0x118a170b */
  if (!C.zf) goto L_118a170b;
  /* 118a1709 jmp 0x118a1727 */
  goto L_118a1727;
L_118a170b:;
  /* 118a170b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118a170f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a1711 jne 0x118a1715 */
  if (!C.zf) goto L_118a1715;
  /* 118a1713 jmp 0x118a1727 */
  goto L_118a1727;
L_118a1715:;
  /* 118a1715 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1718 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a171b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 118a171f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 118a1722 jmp 0x118a1639 */
  goto L_118a1639;
L_118a1727:;
  /* 118a1727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a1729:;
  /* 118a1729 mov esp, ebp */
  ESP = (EBP);
  /* 118a172b pop ebp */
  EBP = (pop32());
  /* 118a172c ret  */
  ESPCHK(0x118a15d0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x118a1730 (101 bytes, 36 insns) */
void f_118a1730(void) {
  FTRACE(0x118a1730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a1730 push ebp */
  push32((uint32_t)(EBP));
  /* 118a1731 mov ebp, esp */
  EBP = (ESP);
  /* 118a1733 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a1736 push eax */
  push32((uint32_t)(EAX));
  /* 118a1737 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a173a push ecx */
  push32((uint32_t)(ECX));
  /* 118a173b call 0x1189a1b0 */
  push32(0x118a1740u); f_1189a1b0();
  /* 118a1740 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1743 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a1746 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 118a174a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a174c je 0x118a1768 */
  if (C.zf) goto L_118a1768;
  /* 118a174e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a1751 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1754 push ecx */
  push32((uint32_t)(ECX));
  /* 118a1755 push 0x118bfbe0 */
  push32((uint32_t)(0x118bfbe0u));
  /* 118a175a push 2 */
  push32((uint32_t)(0x2u));
  /* 118a175c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a175f push edx */
  push32((uint32_t)(EDX));
  /* 118a1760 call 0x118a1580 */
  push32(0x118a1765u); f_118a1580();
  /* 118a1765 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a1768:;
  /* 118a1768 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a176b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 118a1772 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a1774 je 0x118a1793 */
  if (C.zf) goto L_118a1793;
  /* 118a1776 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a1779 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a177f push edx */
  push32((uint32_t)(EDX));
  /* 118a1780 push 0x118bfbdc */
  push32((uint32_t)(0x118bfbdcu));
  /* 118a1785 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a1787 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a178a push eax */
  push32((uint32_t)(EAX));
  /* 118a178b call 0x118a1580 */
  push32(0x118a1790u); f_118a1580();
  /* 118a1790 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a1793:;
  /* 118a1793 pop ebp */
  EBP = (pop32());
  /* 118a1794 ret  */
  ESPCHK(0x118a1730u, _esp0);
  ESP += 4; return;
}

/* FUN_100117a0 @ 0x118a17a0 (130 bytes, 50 insns) */
void f_118a17a0(void) {
  FTRACE(0x118a17a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a17a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a17a1 mov ebp, esp */
  EBP = (ESP);
  /* 118a17a3 push ecx */
  push32((uint32_t)(ECX));
  /* 118a17a4 push ebx */
  push32((uint32_t)(EBX));
  /* 118a17a5 push esi */
  push32((uint32_t)(ESI));
  /* 118a17a6 push edi */
  push32((uint32_t)(EDI));
  /* 118a17a7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_118a17ae:;
  /* 118a17ae cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a17b2 jne 0x118a17d2 */
  if (!C.zf) goto L_118a17d2;
  /* 118a17b4 push 0x118bfbf0 */
  push32((uint32_t)(0x118bfbf0u));
  /* 118a17b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a17bb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 118a17bd push 0x118bfbe4 */
  push32((uint32_t)(0x118bfbe4u));
  /* 118a17c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a17c4 call 0x118962c0 */
  push32(0x118a17c9u); f_118962c0();
  /* 118a17c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a17cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a17cf jne 0x118a17d2 */
  if (!C.zf) goto L_118a17d2;
  /* 118a17d1 int3  */
  x86_unimpl("int3 @ 0x118a17d1");
L_118a17d2:;
  /* 118a17d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a17d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a17d6 jne 0x118a17ae */
  if (!C.zf) goto L_118a17ae;
  /* 118a17d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a17db mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118a17de and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 118a17e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a17e3 je 0x118a17f1 */
  if (C.zf) goto L_118a17f1;
  /* 118a17e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a17e8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 118a17ef jmp 0x118a1818 */
  goto L_118a1818;
L_118a17f1:;
  /* 118a17f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a17f4 push ecx */
  push32((uint32_t)(ECX));
  /* 118a17f5 call 0x118a0010 */
  push32(0x118a17fau); f_118a0010();
  /* 118a17fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a17fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1800 push edx */
  push32((uint32_t)(EDX));
  /* 118a1801 call 0x118a1830 */
  push32(0x118a1806u); f_118a1830();
  /* 118a1806 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1809 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a180c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a180f push eax */
  push32((uint32_t)(EAX));
  /* 118a1810 call 0x118a0080 */
  push32(0x118a1815u); f_118a0080();
  /* 118a1815 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a1818:;
  /* 118a1818 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a181b pop edi */
  EDI = (pop32());
  /* 118a181c pop esi */
  ESI = (pop32());
  /* 118a181d pop ebx */
  EBX = (pop32());
  /* 118a181e mov esp, ebp */
  ESP = (EBP);
  /* 118a1820 pop ebp */
  EBP = (pop32());
  /* 118a1821 ret  */
  ESPCHK(0x118a17a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011830 @ 0x118a1830 (190 bytes, 67 insns) */
void f_118a1830(void) {
  FTRACE(0x118a1830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a1830 push ebp */
  push32((uint32_t)(EBP));
  /* 118a1831 mov ebp, esp */
  EBP = (ESP);
  /* 118a1833 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a1836 push ebx */
  push32((uint32_t)(EBX));
  /* 118a1837 push esi */
  push32((uint32_t)(ESI));
  /* 118a1838 push edi */
  push32((uint32_t)(EDI));
  /* 118a1839 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 118a1840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1843 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118a1846:;
  /* 118a1846 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a184a jne 0x118a186a */
  if (!C.zf) goto L_118a186a;
  /* 118a184c push 0x118bfa94 */
  push32((uint32_t)(0x118bfa94u));
  /* 118a1851 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a1853 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 118a1855 push 0x118bfbe4 */
  push32((uint32_t)(0x118bfbe4u));
  /* 118a185a push 2 */
  push32((uint32_t)(0x2u));
  /* 118a185c call 0x118962c0 */
  push32(0x118a1861u); f_118962c0();
  /* 118a1861 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1864 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1867 jne 0x118a186a */
  if (!C.zf) goto L_118a186a;
  /* 118a1869 int3  */
  x86_unimpl("int3 @ 0x118a1869");
L_118a186a:;
  /* 118a186a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a186c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a186e jne 0x118a1846 */
  if (!C.zf) goto L_118a1846;
  /* 118a1870 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a1873 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 118a1876 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 118a187b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a187d je 0x118a18da */
  if (C.zf) goto L_118a18da;
  /* 118a187f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a1882 push ecx */
  push32((uint32_t)(ECX));
  /* 118a1883 call 0x118a0b30 */
  push32(0x118a1888u); f_118a0b30();
  /* 118a1888 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a188b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a188e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a1891 push edx */
  push32((uint32_t)(EDX));
  /* 118a1892 call 0x118a3eb0 */
  push32(0x118a1897u); f_118a3eb0();
  /* 118a1897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a189a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a189d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 118a18a0 push ecx */
  push32((uint32_t)(ECX));
  /* 118a18a1 call 0x118a3d80 */
  push32(0x118a18a6u); f_118a3d80();
  /* 118a18a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a18a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a18ab jge 0x118a18b6 */
  if ((C.sf==C.of)) goto L_118a18b6;
  /* 118a18ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 118a18b4 jmp 0x118a18da */
  goto L_118a18da;
L_118a18b6:;
  /* 118a18b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a18b9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a18bd je 0x118a18da */
  if (C.zf) goto L_118a18da;
  /* 118a18bf push 2 */
  push32((uint32_t)(0x2u));
  /* 118a18c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a18c4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 118a18c7 push ecx */
  push32((uint32_t)(ECX));
  /* 118a18c8 call 0x11897c90 */
  push32(0x118a18cdu); f_11897c90();
  /* 118a18cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a18d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a18d3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_118a18da:;
  /* 118a18da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a18dd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 118a18e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a18e7 pop edi */
  EDI = (pop32());
  /* 118a18e8 pop esi */
  ESI = (pop32());
  /* 118a18e9 pop ebx */
  EBX = (pop32());
  /* 118a18ea mov esp, ebp */
  ESP = (EBP);
  /* 118a18ec pop ebp */
  EBP = (pop32());
  /* 118a18ed ret  */
  ESPCHK(0x118a1830u, _esp0);
  ESP += 4; return;
}

/* FUN_100118f0 @ 0x118a18f0 (210 bytes, 63 insns) */
void f_118a18f0(void) {
  FTRACE(0x118a18f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a18f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a18f1 mov ebp, esp */
  EBP = (ESP);
  /* 118a18f3 push ecx */
  push32((uint32_t)(ECX));
  /* 118a18f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a18f7 cmp eax, dword ptr [0x118c52dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c52dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a18fd jae 0x118a1921 */
  if (!C.cf) goto L_118a1921;
  /* 118a18ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1902 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118a1905 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1908 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 118a190b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a190e mov eax, dword ptr [ecx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118c51a0)));
  /* 118a1915 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 118a191a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 118a191d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a191f jne 0x118a1934 */
  if (!C.zf) goto L_118a1934;
L_118a1921:;
  /* 118a1921 call 0x1189f0d0 */
  push32(0x118a1926u); f_1189f0d0();
  /* 118a1926 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118a192c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a192f jmp 0x118a19be */
  goto L_118a19be;
L_118a1934:;
  /* 118a1934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1937 push edx */
  push32((uint32_t)(EDX));
  /* 118a1938 call 0x118a08f0 */
  push32(0x118a193du); f_118a08f0();
  /* 118a193d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1943 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118a1946 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1949 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 118a194c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a194f mov edx, dword ptr [eax*4 + 0x118c51a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118c51a0)));
  /* 118a1956 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 118a195b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 118a195e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a1960 je 0x118a199d */
  if (C.zf) goto L_118a199d;
  /* 118a1962 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1965 push ecx */
  push32((uint32_t)(ECX));
  /* 118a1966 call 0x118a0770 */
  push32(0x118a196bu); f_118a0770();
  /* 118a196b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a196e push eax */
  push32((uint32_t)(EAX));
  /* 118a196f call dword ptr [0x118c6300] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6300))), 0x118a1975u);
  /* 118a1975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a1977 jne 0x118a1984 */
  if (!C.zf) goto L_118a1984;
  /* 118a1979 call dword ptr [0x118c63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63d8))), 0x118a197fu);
  /* 118a197f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a1982 jmp 0x118a198b */
  goto L_118a198b;
L_118a1984:;
  /* 118a1984 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_118a198b:;
  /* 118a198b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a198f jne 0x118a1993 */
  if (!C.zf) goto L_118a1993;
  /* 118a1991 jmp 0x118a19af */
  goto L_118a19af;
L_118a1993:;
  /* 118a1993 call 0x1189f0e0 */
  push32(0x118a1998u); f_1189f0e0();
  /* 118a1998 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a199b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_118a199d:;
  /* 118a199d call 0x1189f0d0 */
  push32(0x118a19a2u); f_1189f0d0();
  /* 118a19a2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118a19a8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_118a19af:;
  /* 118a19af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a19b2 push eax */
  push32((uint32_t)(EAX));
  /* 118a19b3 call 0x118a0980 */
  push32(0x118a19b8u); f_118a0980();
  /* 118a19b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a19bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_118a19be:;
  /* 118a19be mov esp, ebp */
  ESP = (EBP);
  /* 118a19c0 pop ebp */
  EBP = (pop32());
  /* 118a19c1 ret  */
  ESPCHK(0x118a18f0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x118a19d0 (219 bytes, 64 insns) */
void f_118a19d0(void) {
  FTRACE(0x118a19d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a19d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a19d1 mov ebp, esp */
  EBP = (ESP);
  /* 118a19d3 push ecx */
  push32((uint32_t)(ECX));
  /* 118a19d4 cmp dword ptr [0x118c39c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c39c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a19db je 0x118a1a71 */
  if (C.zf) goto L_118a1a71;
  /* 118a19e1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 118a19e3 push 0x118bfc00 */
  push32((uint32_t)(0x118bfc00u));
  /* 118a19e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a19ea push 0xac */
  push32((uint32_t)(0xacu));
  /* 118a19ef push 1 */
  push32((uint32_t)(0x1u));
  /* 118a19f1 call 0x11897610 */
  push32(0x118a19f6u); f_11897610();
  /* 118a19f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a19f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a19fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1a00 jne 0x118a1a0c */
  if (!C.zf) goto L_118a1a0c;
  /* 118a1a02 mov eax, 1 */
  EAX = (0x1u);
  /* 118a1a07 jmp 0x118a1aa7 */
  goto L_118a1aa7;
L_118a1a0c:;
  /* 118a1a0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1a0f push eax */
  push32((uint32_t)(EAX));
  /* 118a1a10 call 0x118a1ab0 */
  push32(0x118a1a15u); f_118a1ab0();
  /* 118a1a15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a1a1a je 0x118a1a3d */
  if (C.zf) goto L_118a1a3d;
  /* 118a1a1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1a1f push ecx */
  push32((uint32_t)(ECX));
  /* 118a1a20 call 0x118a2040 */
  push32(0x118a1a25u); f_118a2040();
  /* 118a1a25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1a28 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a1a2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1a2d push edx */
  push32((uint32_t)(EDX));
  /* 118a1a2e call 0x11897c90 */
  push32(0x118a1a33u); f_11897c90();
  /* 118a1a33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1a36 mov eax, 1 */
  EAX = (0x1u);
  /* 118a1a3b jmp 0x118a1aa7 */
  goto L_118a1aa7;
L_118a1a3d:;
  /* 118a1a3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1a40 mov dword ptr [0x118c2c98], eax */
  w32((uint32_t)(0x118c2c98), (EAX));
  /* 118a1a45 mov ecx, dword ptr [0x118c39e4] */
  ECX = (r32((uint32_t)(0x118c39e4)));
  /* 118a1a4b push ecx */
  push32((uint32_t)(ECX));
  /* 118a1a4c call 0x118a2040 */
  push32(0x118a1a51u); f_118a2040();
  /* 118a1a51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1a54 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a1a56 mov edx, dword ptr [0x118c39e4] */
  EDX = (r32((uint32_t)(0x118c39e4)));
  /* 118a1a5c push edx */
  push32((uint32_t)(EDX));
  /* 118a1a5d call 0x11897c90 */
  push32(0x118a1a62u); f_11897c90();
  /* 118a1a62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1a65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1a68 mov dword ptr [0x118c39e4], eax */
  w32((uint32_t)(0x118c39e4), (EAX));
  /* 118a1a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a1a6f jmp 0x118a1aa7 */
  goto L_118a1aa7;
L_118a1a71:;
  /* 118a1a71 mov dword ptr [0x118c2c98], 0x118c2ca0 */
  w32((uint32_t)(0x118c2c98), (0x118c2ca0u));
  /* 118a1a7b mov ecx, dword ptr [0x118c39e4] */
  ECX = (r32((uint32_t)(0x118c39e4)));
  /* 118a1a81 push ecx */
  push32((uint32_t)(ECX));
  /* 118a1a82 call 0x118a2040 */
  push32(0x118a1a87u); f_118a2040();
  /* 118a1a87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1a8a push 2 */
  push32((uint32_t)(0x2u));
  /* 118a1a8c mov edx, dword ptr [0x118c39e4] */
  EDX = (r32((uint32_t)(0x118c39e4)));
  /* 118a1a92 push edx */
  push32((uint32_t)(EDX));
  /* 118a1a93 call 0x11897c90 */
  push32(0x118a1a98u); f_11897c90();
  /* 118a1a98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1a9b mov dword ptr [0x118c39e4], 0 */
  w32((uint32_t)(0x118c39e4), (0x0u));
  /* 118a1aa5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a1aa7:;
  /* 118a1aa7 mov esp, ebp */
  ESP = (EBP);
  /* 118a1aa9 pop ebp */
  EBP = (pop32());
  /* 118a1aaa ret  */
  ESPCHK(0x118a19d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ab0 @ 0x118a1ab0 (1423 bytes, 533 insns) */
void f_118a1ab0(void) {
  FTRACE(0x118a1ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a1ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a1ab1 mov ebp, esp */
  EBP = (ESP);
  /* 118a1ab3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a1ab6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 118a1abd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a1abf mov ax, word ptr [0x118c3a1e] */
  AX = (r16((uint32_t)(0x118c3a1e)));
  /* 118a1ac5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a1ac8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1aca mov cx, word ptr [0x118c3a20] */
  CX = (r16((uint32_t)(0x118c3a20)));
  /* 118a1ad1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a1ad4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a1ad8 jne 0x118a1ae2 */
  if (!C.zf) goto L_118a1ae2;
  /* 118a1ada or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a1add jmp 0x118a203b */
  goto L_118a203b;
L_118a1ae2:;
  /* 118a1ae2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1ae5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1ae8 push edx */
  push32((uint32_t)(EDX));
  /* 118a1ae9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 118a1aeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1aee push eax */
  push32((uint32_t)(EAX));
  /* 118a1aef push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1af1 call 0x118a53c0 */
  push32(0x118a1af6u); f_118a53c0();
  /* 118a1af6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1af9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1afc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1afe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1b01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1b04 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1b07 push edx */
  push32((uint32_t)(EDX));
  /* 118a1b08 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 118a1b0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1b0d push eax */
  push32((uint32_t)(EAX));
  /* 118a1b0e push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1b10 call 0x118a53c0 */
  push32(0x118a1b15u); f_118a53c0();
  /* 118a1b15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1b18 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1b1b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1b1d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1b20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1b23 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1b26 push edx */
  push32((uint32_t)(EDX));
  /* 118a1b27 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 118a1b29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1b2c push eax */
  push32((uint32_t)(EAX));
  /* 118a1b2d push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1b2f call 0x118a53c0 */
  push32(0x118a1b34u); f_118a53c0();
  /* 118a1b34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1b37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1b3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1b3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1b3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1b42 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1b45 push edx */
  push32((uint32_t)(EDX));
  /* 118a1b46 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 118a1b48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1b4b push eax */
  push32((uint32_t)(EAX));
  /* 118a1b4c push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1b4e call 0x118a53c0 */
  push32(0x118a1b53u); f_118a53c0();
  /* 118a1b53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1b56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1b59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1b5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1b5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1b61 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1b64 push edx */
  push32((uint32_t)(EDX));
  /* 118a1b65 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 118a1b67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1b6a push eax */
  push32((uint32_t)(EAX));
  /* 118a1b6b push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1b6d call 0x118a53c0 */
  push32(0x118a1b72u); f_118a53c0();
  /* 118a1b72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1b75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1b78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1b7a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1b7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1b80 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1b83 push edx */
  push32((uint32_t)(EDX));
  /* 118a1b84 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 118a1b86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1b89 push eax */
  push32((uint32_t)(EAX));
  /* 118a1b8a push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1b8c call 0x118a53c0 */
  push32(0x118a1b91u); f_118a53c0();
  /* 118a1b91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1b94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1b97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1b99 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1b9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1b9f push edx */
  push32((uint32_t)(EDX));
  /* 118a1ba0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 118a1ba2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1ba5 push eax */
  push32((uint32_t)(EAX));
  /* 118a1ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1ba8 call 0x118a53c0 */
  push32(0x118a1badu); f_118a53c0();
  /* 118a1bad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1bb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1bb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1bb5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1bb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1bbb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1bbe push edx */
  push32((uint32_t)(EDX));
  /* 118a1bbf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 118a1bc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1bc4 push eax */
  push32((uint32_t)(EAX));
  /* 118a1bc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1bc7 call 0x118a53c0 */
  push32(0x118a1bccu); f_118a53c0();
  /* 118a1bcc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1bcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1bd2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1bd4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1bd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1bda add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1bdd push edx */
  push32((uint32_t)(EDX));
  /* 118a1bde push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 118a1be0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1be3 push eax */
  push32((uint32_t)(EAX));
  /* 118a1be4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1be6 call 0x118a53c0 */
  push32(0x118a1bebu); f_118a53c0();
  /* 118a1beb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1bee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1bf1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1bf3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1bf6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1bf9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1bfc push edx */
  push32((uint32_t)(EDX));
  /* 118a1bfd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 118a1bff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1c02 push eax */
  push32((uint32_t)(EAX));
  /* 118a1c03 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1c05 call 0x118a53c0 */
  push32(0x118a1c0au); f_118a53c0();
  /* 118a1c0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1c0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1c10 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1c12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1c15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1c18 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1c1b push edx */
  push32((uint32_t)(EDX));
  /* 118a1c1c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 118a1c1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1c21 push eax */
  push32((uint32_t)(EAX));
  /* 118a1c22 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1c24 call 0x118a53c0 */
  push32(0x118a1c29u); f_118a53c0();
  /* 118a1c29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1c2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1c2f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1c31 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1c34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1c37 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1c3a push edx */
  push32((uint32_t)(EDX));
  /* 118a1c3b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 118a1c3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1c40 push eax */
  push32((uint32_t)(EAX));
  /* 118a1c41 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1c43 call 0x118a53c0 */
  push32(0x118a1c48u); f_118a53c0();
  /* 118a1c48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1c4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1c4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1c50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1c53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1c56 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1c59 push edx */
  push32((uint32_t)(EDX));
  /* 118a1c5a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 118a1c5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1c5f push eax */
  push32((uint32_t)(EAX));
  /* 118a1c60 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1c62 call 0x118a53c0 */
  push32(0x118a1c67u); f_118a53c0();
  /* 118a1c67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1c6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1c6d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1c6f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1c72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1c75 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1c78 push edx */
  push32((uint32_t)(EDX));
  /* 118a1c79 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 118a1c7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1c7e push eax */
  push32((uint32_t)(EAX));
  /* 118a1c7f push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1c81 call 0x118a53c0 */
  push32(0x118a1c86u); f_118a53c0();
  /* 118a1c86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1c89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1c8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1c8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1c91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1c94 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1c97 push edx */
  push32((uint32_t)(EDX));
  /* 118a1c98 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 118a1c9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1c9d push eax */
  push32((uint32_t)(EAX));
  /* 118a1c9e push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1ca0 call 0x118a53c0 */
  push32(0x118a1ca5u); f_118a53c0();
  /* 118a1ca5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1ca8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1cab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1cad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1cb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1cb3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1cb6 push edx */
  push32((uint32_t)(EDX));
  /* 118a1cb7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 118a1cb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1cbc push eax */
  push32((uint32_t)(EAX));
  /* 118a1cbd push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1cbf call 0x118a53c0 */
  push32(0x118a1cc4u); f_118a53c0();
  /* 118a1cc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1cc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1cca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1ccc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1ccf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1cd2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1cd5 push edx */
  push32((uint32_t)(EDX));
  /* 118a1cd6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 118a1cd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1cdb push eax */
  push32((uint32_t)(EAX));
  /* 118a1cdc push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1cde call 0x118a53c0 */
  push32(0x118a1ce3u); f_118a53c0();
  /* 118a1ce3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1ce6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1ce9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1ceb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1cee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1cf1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1cf4 push edx */
  push32((uint32_t)(EDX));
  /* 118a1cf5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 118a1cf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1cfa push eax */
  push32((uint32_t)(EAX));
  /* 118a1cfb push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1cfd call 0x118a53c0 */
  push32(0x118a1d02u); f_118a53c0();
  /* 118a1d02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1d05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1d08 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1d0a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1d0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1d10 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1d13 push edx */
  push32((uint32_t)(EDX));
  /* 118a1d14 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 118a1d16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1d19 push eax */
  push32((uint32_t)(EAX));
  /* 118a1d1a push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1d1c call 0x118a53c0 */
  push32(0x118a1d21u); f_118a53c0();
  /* 118a1d21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1d24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1d27 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1d29 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1d2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1d2f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1d32 push edx */
  push32((uint32_t)(EDX));
  /* 118a1d33 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 118a1d35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1d38 push eax */
  push32((uint32_t)(EAX));
  /* 118a1d39 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1d3b call 0x118a53c0 */
  push32(0x118a1d40u); f_118a53c0();
  /* 118a1d40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1d43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1d46 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1d48 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1d4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1d4e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1d51 push edx */
  push32((uint32_t)(EDX));
  /* 118a1d52 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 118a1d54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1d57 push eax */
  push32((uint32_t)(EAX));
  /* 118a1d58 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1d5a call 0x118a53c0 */
  push32(0x118a1d5fu); f_118a53c0();
  /* 118a1d5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1d62 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1d65 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1d67 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1d6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1d6d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1d70 push edx */
  push32((uint32_t)(EDX));
  /* 118a1d71 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 118a1d73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1d76 push eax */
  push32((uint32_t)(EAX));
  /* 118a1d77 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1d79 call 0x118a53c0 */
  push32(0x118a1d7eu); f_118a53c0();
  /* 118a1d7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1d81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1d84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1d86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1d89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1d8c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1d8f push edx */
  push32((uint32_t)(EDX));
  /* 118a1d90 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 118a1d92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1d95 push eax */
  push32((uint32_t)(EAX));
  /* 118a1d96 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1d98 call 0x118a53c0 */
  push32(0x118a1d9du); f_118a53c0();
  /* 118a1d9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1da0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1da3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1da5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1da8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1dab add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1dae push edx */
  push32((uint32_t)(EDX));
  /* 118a1daf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 118a1db1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1db4 push eax */
  push32((uint32_t)(EAX));
  /* 118a1db5 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1db7 call 0x118a53c0 */
  push32(0x118a1dbcu); f_118a53c0();
  /* 118a1dbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1dbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1dc2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1dc4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1dc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1dca add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1dcd push edx */
  push32((uint32_t)(EDX));
  /* 118a1dce push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 118a1dd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1dd3 push eax */
  push32((uint32_t)(EAX));
  /* 118a1dd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1dd6 call 0x118a53c0 */
  push32(0x118a1ddbu); f_118a53c0();
  /* 118a1ddb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1dde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1de1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1de3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1de6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1de9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1dec push edx */
  push32((uint32_t)(EDX));
  /* 118a1ded push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 118a1def mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1df2 push eax */
  push32((uint32_t)(EAX));
  /* 118a1df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1df5 call 0x118a53c0 */
  push32(0x118a1dfau); f_118a53c0();
  /* 118a1dfa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1dfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1e00 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1e02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1e05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1e08 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1e0b push edx */
  push32((uint32_t)(EDX));
  /* 118a1e0c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 118a1e0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1e11 push eax */
  push32((uint32_t)(EAX));
  /* 118a1e12 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1e14 call 0x118a53c0 */
  push32(0x118a1e19u); f_118a53c0();
  /* 118a1e19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1e1c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1e1f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1e21 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1e24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1e27 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1e2a push edx */
  push32((uint32_t)(EDX));
  /* 118a1e2b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 118a1e2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1e30 push eax */
  push32((uint32_t)(EAX));
  /* 118a1e31 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1e33 call 0x118a53c0 */
  push32(0x118a1e38u); f_118a53c0();
  /* 118a1e38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1e3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1e3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1e40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1e43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1e46 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1e49 push edx */
  push32((uint32_t)(EDX));
  /* 118a1e4a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 118a1e4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1e4f push eax */
  push32((uint32_t)(EAX));
  /* 118a1e50 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1e52 call 0x118a53c0 */
  push32(0x118a1e57u); f_118a53c0();
  /* 118a1e57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1e5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1e5d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1e5f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1e62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1e65 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1e68 push edx */
  push32((uint32_t)(EDX));
  /* 118a1e69 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 118a1e6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1e6e push eax */
  push32((uint32_t)(EAX));
  /* 118a1e6f push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1e71 call 0x118a53c0 */
  push32(0x118a1e76u); f_118a53c0();
  /* 118a1e76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1e79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1e7c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1e7e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1e81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1e84 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1e87 push edx */
  push32((uint32_t)(EDX));
  /* 118a1e88 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 118a1e8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1e8d push eax */
  push32((uint32_t)(EAX));
  /* 118a1e8e push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1e90 call 0x118a53c0 */
  push32(0x118a1e95u); f_118a53c0();
  /* 118a1e95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1e98 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1e9b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1e9d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1ea0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1ea3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1ea6 push edx */
  push32((uint32_t)(EDX));
  /* 118a1ea7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 118a1ea9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1eac push eax */
  push32((uint32_t)(EAX));
  /* 118a1ead push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1eaf call 0x118a53c0 */
  push32(0x118a1eb4u); f_118a53c0();
  /* 118a1eb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1eb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1eba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1ebc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1ebf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1ec2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1ec8 push edx */
  push32((uint32_t)(EDX));
  /* 118a1ec9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 118a1ecb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1ece push eax */
  push32((uint32_t)(EAX));
  /* 118a1ecf push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1ed1 call 0x118a53c0 */
  push32(0x118a1ed6u); f_118a53c0();
  /* 118a1ed6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1ed9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1edc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1ede mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1ee1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1ee4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1eea push edx */
  push32((uint32_t)(EDX));
  /* 118a1eeb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118a1eed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1ef0 push eax */
  push32((uint32_t)(EAX));
  /* 118a1ef1 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1ef3 call 0x118a53c0 */
  push32(0x118a1ef8u); f_118a53c0();
  /* 118a1ef8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1efb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1efe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1f00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1f03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1f06 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1f0c push edx */
  push32((uint32_t)(EDX));
  /* 118a1f0d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118a1f0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1f12 push eax */
  push32((uint32_t)(EAX));
  /* 118a1f13 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1f15 call 0x118a53c0 */
  push32(0x118a1f1au); f_118a53c0();
  /* 118a1f1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1f1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1f20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1f22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1f25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1f28 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1f2e push edx */
  push32((uint32_t)(EDX));
  /* 118a1f2f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 118a1f31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1f34 push eax */
  push32((uint32_t)(EAX));
  /* 118a1f35 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1f37 call 0x118a53c0 */
  push32(0x118a1f3cu); f_118a53c0();
  /* 118a1f3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1f3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1f42 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1f44 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1f47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1f4a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1f50 push edx */
  push32((uint32_t)(EDX));
  /* 118a1f51 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 118a1f53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1f56 push eax */
  push32((uint32_t)(EAX));
  /* 118a1f57 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1f59 call 0x118a53c0 */
  push32(0x118a1f5eu); f_118a53c0();
  /* 118a1f5e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1f61 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1f64 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1f66 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1f69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1f6c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1f72 push edx */
  push32((uint32_t)(EDX));
  /* 118a1f73 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 118a1f75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1f78 push eax */
  push32((uint32_t)(EAX));
  /* 118a1f79 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1f7b call 0x118a53c0 */
  push32(0x118a1f80u); f_118a53c0();
  /* 118a1f80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1f83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1f86 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1f88 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1f8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1f8e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1f94 push edx */
  push32((uint32_t)(EDX));
  /* 118a1f95 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 118a1f97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1f9a push eax */
  push32((uint32_t)(EAX));
  /* 118a1f9b push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1f9d call 0x118a53c0 */
  push32(0x118a1fa2u); f_118a53c0();
  /* 118a1fa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1fa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1fa8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1faa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1fad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1fb0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1fb6 push edx */
  push32((uint32_t)(EDX));
  /* 118a1fb7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 118a1fb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a1fbc push eax */
  push32((uint32_t)(EAX));
  /* 118a1fbd push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1fbf call 0x118a53c0 */
  push32(0x118a1fc4u); f_118a53c0();
  /* 118a1fc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1fc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1fca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1fcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1fcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1fd2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1fd8 push edx */
  push32((uint32_t)(EDX));
  /* 118a1fd9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 118a1fdb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a1fde push eax */
  push32((uint32_t)(EAX));
  /* 118a1fdf push 1 */
  push32((uint32_t)(0x1u));
  /* 118a1fe1 call 0x118a53c0 */
  push32(0x118a1fe6u); f_118a53c0();
  /* 118a1fe6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1fe9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a1fec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a1fee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a1ff1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a1ff4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a1ffa push edx */
  push32((uint32_t)(EDX));
  /* 118a1ffb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 118a1ffd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a2000 push eax */
  push32((uint32_t)(EAX));
  /* 118a2001 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a2003 call 0x118a53c0 */
  push32(0x118a2008u); f_118a53c0();
  /* 118a2008 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a200b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a200e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a2010 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a2013 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2016 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a201c push edx */
  push32((uint32_t)(EDX));
  /* 118a201d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 118a2022 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a2025 push eax */
  push32((uint32_t)(EAX));
  /* 118a2026 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a2028 call 0x118a53c0 */
  push32(0x118a202du); f_118a53c0();
  /* 118a202d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2030 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a2033 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a2035 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a2038 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_118a203b:;
  /* 118a203b mov esp, ebp */
  ESP = (EBP);
  /* 118a203d pop ebp */
  EBP = (pop32());
  /* 118a203e ret  */
  ESPCHK(0x118a1ab0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x118a2040 (779 bytes, 265 insns) */
void f_118a2040(void) {
  FTRACE(0x118a2040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a2040 push ebp */
  push32((uint32_t)(EBP));
  /* 118a2041 mov ebp, esp */
  EBP = (ESP);
  /* 118a2043 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2047 jne 0x118a204e */
  if (!C.zf) goto L_118a204e;
  /* 118a2049 jmp 0x118a2349 */
  goto L_118a2349;
L_118a204e:;
  /* 118a204e push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2050 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2053 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 118a2056 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2057 call 0x11897c90 */
  push32(0x118a205cu); f_11897c90();
  /* 118a205c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a205f push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2061 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2064 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 118a2067 push eax */
  push32((uint32_t)(EAX));
  /* 118a2068 call 0x11897c90 */
  push32(0x118a206du); f_11897c90();
  /* 118a206d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2070 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2072 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2075 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118a2078 push edx */
  push32((uint32_t)(EDX));
  /* 118a2079 call 0x11897c90 */
  push32(0x118a207eu); f_11897c90();
  /* 118a207e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2081 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2083 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2086 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 118a2089 push ecx */
  push32((uint32_t)(ECX));
  /* 118a208a call 0x11897c90 */
  push32(0x118a208fu); f_11897c90();
  /* 118a208f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2092 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2094 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2097 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 118a209a push eax */
  push32((uint32_t)(EAX));
  /* 118a209b call 0x11897c90 */
  push32(0x118a20a0u); f_11897c90();
  /* 118a20a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a20a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a20a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a20a8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 118a20ab push edx */
  push32((uint32_t)(EDX));
  /* 118a20ac call 0x11897c90 */
  push32(0x118a20b1u); f_11897c90();
  /* 118a20b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a20b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a20b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a20b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a20bb push ecx */
  push32((uint32_t)(ECX));
  /* 118a20bc call 0x11897c90 */
  push32(0x118a20c1u); f_11897c90();
  /* 118a20c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a20c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a20c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a20c9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 118a20cc push eax */
  push32((uint32_t)(EAX));
  /* 118a20cd call 0x11897c90 */
  push32(0x118a20d2u); f_11897c90();
  /* 118a20d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a20d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a20d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a20da mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 118a20dd push edx */
  push32((uint32_t)(EDX));
  /* 118a20de call 0x11897c90 */
  push32(0x118a20e3u); f_11897c90();
  /* 118a20e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a20e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a20e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a20eb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 118a20ee push ecx */
  push32((uint32_t)(ECX));
  /* 118a20ef call 0x11897c90 */
  push32(0x118a20f4u); f_11897c90();
  /* 118a20f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a20f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a20f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a20fc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 118a20ff push eax */
  push32((uint32_t)(EAX));
  /* 118a2100 call 0x11897c90 */
  push32(0x118a2105u); f_11897c90();
  /* 118a2105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2108 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a210a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a210d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 118a2110 push edx */
  push32((uint32_t)(EDX));
  /* 118a2111 call 0x11897c90 */
  push32(0x118a2116u); f_11897c90();
  /* 118a2116 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2119 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a211b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a211e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 118a2121 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2122 call 0x11897c90 */
  push32(0x118a2127u); f_11897c90();
  /* 118a2127 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a212a push 2 */
  push32((uint32_t)(0x2u));
  /* 118a212c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a212f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 118a2132 push eax */
  push32((uint32_t)(EAX));
  /* 118a2133 call 0x11897c90 */
  push32(0x118a2138u); f_11897c90();
  /* 118a2138 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a213b push 2 */
  push32((uint32_t)(0x2u));
  /* 118a213d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2140 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 118a2143 push edx */
  push32((uint32_t)(EDX));
  /* 118a2144 call 0x11897c90 */
  push32(0x118a2149u); f_11897c90();
  /* 118a2149 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a214c push 2 */
  push32((uint32_t)(0x2u));
  /* 118a214e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2151 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 118a2154 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2155 call 0x11897c90 */
  push32(0x118a215au); f_11897c90();
  /* 118a215a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a215d push 2 */
  push32((uint32_t)(0x2u));
  /* 118a215f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2162 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 118a2165 push eax */
  push32((uint32_t)(EAX));
  /* 118a2166 call 0x11897c90 */
  push32(0x118a216bu); f_11897c90();
  /* 118a216b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a216e push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2170 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2173 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 118a2176 push edx */
  push32((uint32_t)(EDX));
  /* 118a2177 call 0x11897c90 */
  push32(0x118a217cu); f_11897c90();
  /* 118a217c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a217f push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2181 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2184 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 118a2187 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2188 call 0x11897c90 */
  push32(0x118a218du); f_11897c90();
  /* 118a218d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2190 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2192 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2195 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 118a2198 push eax */
  push32((uint32_t)(EAX));
  /* 118a2199 call 0x11897c90 */
  push32(0x118a219eu); f_11897c90();
  /* 118a219e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a21a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a21a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a21a6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 118a21a9 push edx */
  push32((uint32_t)(EDX));
  /* 118a21aa call 0x11897c90 */
  push32(0x118a21afu); f_11897c90();
  /* 118a21af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a21b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a21b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a21b7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 118a21ba push ecx */
  push32((uint32_t)(ECX));
  /* 118a21bb call 0x11897c90 */
  push32(0x118a21c0u); f_11897c90();
  /* 118a21c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a21c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a21c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a21c8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 118a21cb push eax */
  push32((uint32_t)(EAX));
  /* 118a21cc call 0x11897c90 */
  push32(0x118a21d1u); f_11897c90();
  /* 118a21d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a21d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a21d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a21d9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 118a21dc push edx */
  push32((uint32_t)(EDX));
  /* 118a21dd call 0x11897c90 */
  push32(0x118a21e2u); f_11897c90();
  /* 118a21e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a21e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a21e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a21ea mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 118a21ed push ecx */
  push32((uint32_t)(ECX));
  /* 118a21ee call 0x11897c90 */
  push32(0x118a21f3u); f_11897c90();
  /* 118a21f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a21f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a21f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a21fb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 118a21fe push eax */
  push32((uint32_t)(EAX));
  /* 118a21ff call 0x11897c90 */
  push32(0x118a2204u); f_11897c90();
  /* 118a2204 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2207 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2209 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a220c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 118a220f push edx */
  push32((uint32_t)(EDX));
  /* 118a2210 call 0x11897c90 */
  push32(0x118a2215u); f_11897c90();
  /* 118a2215 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2218 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a221a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a221d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 118a2220 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2221 call 0x11897c90 */
  push32(0x118a2226u); f_11897c90();
  /* 118a2226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2229 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a222b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a222e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 118a2231 push eax */
  push32((uint32_t)(EAX));
  /* 118a2232 call 0x11897c90 */
  push32(0x118a2237u); f_11897c90();
  /* 118a2237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a223a push 2 */
  push32((uint32_t)(0x2u));
  /* 118a223c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a223f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 118a2242 push edx */
  push32((uint32_t)(EDX));
  /* 118a2243 call 0x11897c90 */
  push32(0x118a2248u); f_11897c90();
  /* 118a2248 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a224b push 2 */
  push32((uint32_t)(0x2u));
  /* 118a224d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2250 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 118a2253 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2254 call 0x11897c90 */
  push32(0x118a2259u); f_11897c90();
  /* 118a2259 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a225c push 2 */
  push32((uint32_t)(0x2u));
  /* 118a225e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2261 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 118a2264 push eax */
  push32((uint32_t)(EAX));
  /* 118a2265 call 0x11897c90 */
  push32(0x118a226au); f_11897c90();
  /* 118a226a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a226d push 2 */
  push32((uint32_t)(0x2u));
  /* 118a226f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2272 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 118a2278 push edx */
  push32((uint32_t)(EDX));
  /* 118a2279 call 0x11897c90 */
  push32(0x118a227eu); f_11897c90();
  /* 118a227e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2281 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2286 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 118a228c push ecx */
  push32((uint32_t)(ECX));
  /* 118a228d call 0x11897c90 */
  push32(0x118a2292u); f_11897c90();
  /* 118a2292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2295 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2297 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a229a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 118a22a0 push eax */
  push32((uint32_t)(EAX));
  /* 118a22a1 call 0x11897c90 */
  push32(0x118a22a6u); f_11897c90();
  /* 118a22a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a22a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a22ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a22ae mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 118a22b4 push edx */
  push32((uint32_t)(EDX));
  /* 118a22b5 call 0x11897c90 */
  push32(0x118a22bau); f_11897c90();
  /* 118a22ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a22bd push 2 */
  push32((uint32_t)(0x2u));
  /* 118a22bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a22c2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 118a22c8 push ecx */
  push32((uint32_t)(ECX));
  /* 118a22c9 call 0x11897c90 */
  push32(0x118a22ceu); f_11897c90();
  /* 118a22ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a22d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a22d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a22d6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 118a22dc push eax */
  push32((uint32_t)(EAX));
  /* 118a22dd call 0x11897c90 */
  push32(0x118a22e2u); f_11897c90();
  /* 118a22e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a22e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a22e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a22ea mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 118a22f0 push edx */
  push32((uint32_t)(EDX));
  /* 118a22f1 call 0x11897c90 */
  push32(0x118a22f6u); f_11897c90();
  /* 118a22f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a22f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a22fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a22fe mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 118a2304 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2305 call 0x11897c90 */
  push32(0x118a230au); f_11897c90();
  /* 118a230a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a230d push 2 */
  push32((uint32_t)(0x2u));
  /* 118a230f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2312 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 118a2318 push eax */
  push32((uint32_t)(EAX));
  /* 118a2319 call 0x11897c90 */
  push32(0x118a231eu); f_11897c90();
  /* 118a231e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2321 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2323 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2326 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 118a232c push edx */
  push32((uint32_t)(EDX));
  /* 118a232d call 0x11897c90 */
  push32(0x118a2332u); f_11897c90();
  /* 118a2332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2335 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2337 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a233a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 118a2340 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2341 call 0x11897c90 */
  push32(0x118a2346u); f_11897c90();
  /* 118a2346 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a2349:;
  /* 118a2349 pop ebp */
  EBP = (pop32());
  /* 118a234a ret  */
  ESPCHK(0x118a2040u, _esp0);
  ESP += 4; return;
}

/* FUN_10012350 @ 0x118a2350 (678 bytes, 180 insns) */
void f_118a2350(void) {
  FTRACE(0x118a2350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a2350 push ebp */
  push32((uint32_t)(EBP));
  /* 118a2351 mov ebp, esp */
  EBP = (ESP);
  /* 118a2353 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a2356 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118a235d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a235f mov ax, word ptr [0x118c3a1a] */
  AX = (r16((uint32_t)(0x118c3a1a)));
  /* 118a2365 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a2368 cmp dword ptr [0x118c39c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c39c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a236f je 0x118a24ca */
  if (C.zf) goto L_118a24ca;
  /* 118a2375 push 0x118c39e8 */
  push32((uint32_t)(0x118c39e8u));
  /* 118a237a push 0xe */
  push32((uint32_t)(0xeu));
  /* 118a237c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a237f push ecx */
  push32((uint32_t)(ECX));
  /* 118a2380 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a2382 call 0x118a53c0 */
  push32(0x118a2387u); f_118a53c0();
  /* 118a2387 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a238a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a238d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 118a238f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118a2392 push 0x118c39ec */
  push32((uint32_t)(0x118c39ecu));
  /* 118a2397 push 0xf */
  push32((uint32_t)(0xfu));
  /* 118a2399 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a239c push eax */
  push32((uint32_t)(EAX));
  /* 118a239d push 1 */
  push32((uint32_t)(0x1u));
  /* 118a239f call 0x118a53c0 */
  push32(0x118a23a4u); f_118a53c0();
  /* 118a23a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a23a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a23aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a23ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a23af push 0x118c39f0 */
  push32((uint32_t)(0x118c39f0u));
  /* 118a23b4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118a23b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a23b9 push edx */
  push32((uint32_t)(EDX));
  /* 118a23ba push 1 */
  push32((uint32_t)(0x1u));
  /* 118a23bc call 0x118a53c0 */
  push32(0x118a23c1u); f_118a53c0();
  /* 118a23c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a23c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a23c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a23c9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a23cc mov edx, dword ptr [0x118c39f0] */
  EDX = (r32((uint32_t)(0x118c39f0)));
  /* 118a23d2 push edx */
  push32((uint32_t)(EDX));
  /* 118a23d3 call 0x118a2600 */
  push32(0x118a23d8u); f_118a2600();
  /* 118a23d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a23db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a23df je 0x118a2439 */
  if (C.zf) goto L_118a2439;
  /* 118a23e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a23e3 mov eax, dword ptr [0x118c39e8] */
  EAX = (r32((uint32_t)(0x118c39e8)));
  /* 118a23e8 push eax */
  push32((uint32_t)(EAX));
  /* 118a23e9 call 0x11897c90 */
  push32(0x118a23eeu); f_11897c90();
  /* 118a23ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a23f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a23f3 mov ecx, dword ptr [0x118c39ec] */
  ECX = (r32((uint32_t)(0x118c39ec)));
  /* 118a23f9 push ecx */
  push32((uint32_t)(ECX));
  /* 118a23fa call 0x11897c90 */
  push32(0x118a23ffu); f_11897c90();
  /* 118a23ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2402 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2404 mov edx, dword ptr [0x118c39f0] */
  EDX = (r32((uint32_t)(0x118c39f0)));
  /* 118a240a push edx */
  push32((uint32_t)(EDX));
  /* 118a240b call 0x11897c90 */
  push32(0x118a2410u); f_11897c90();
  /* 118a2410 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2413 mov dword ptr [0x118c39e8], 0 */
  w32((uint32_t)(0x118c39e8), (0x0u));
  /* 118a241d mov dword ptr [0x118c39ec], 0 */
  w32((uint32_t)(0x118c39ec), (0x0u));
  /* 118a2427 mov dword ptr [0x118c39f0], 0 */
  w32((uint32_t)(0x118c39f0), (0x0u));
  /* 118a2431 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a2434 jmp 0x118a25f2 */
  goto L_118a25f2;
L_118a2439:;
  /* 118a2439 mov eax, dword ptr [0x118c2d88] */
  EAX = (r32((uint32_t)(0x118c2d88)));
  /* 118a243e cmp dword ptr [eax], 0x118c2d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x118c2d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2444 je 0x118a2480 */
  if (C.zf) goto L_118a2480;
  /* 118a2446 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2448 mov ecx, dword ptr [0x118c2d88] */
  ECX = (r32((uint32_t)(0x118c2d88)));
  /* 118a244e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a2450 push edx */
  push32((uint32_t)(EDX));
  /* 118a2451 call 0x11897c90 */
  push32(0x118a2456u); f_11897c90();
  /* 118a2456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2459 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a245b mov eax, dword ptr [0x118c2d88] */
  EAX = (r32((uint32_t)(0x118c2d88)));
  /* 118a2460 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 118a2463 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2464 call 0x11897c90 */
  push32(0x118a2469u); f_11897c90();
  /* 118a2469 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a246c push 2 */
  push32((uint32_t)(0x2u));
  /* 118a246e mov edx, dword ptr [0x118c2d88] */
  EDX = (r32((uint32_t)(0x118c2d88)));
  /* 118a2474 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 118a2477 push eax */
  push32((uint32_t)(EAX));
  /* 118a2478 call 0x11897c90 */
  push32(0x118a247du); f_11897c90();
  /* 118a247d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a2480:;
  /* 118a2480 mov ecx, dword ptr [0x118c2d88] */
  ECX = (r32((uint32_t)(0x118c2d88)));
  /* 118a2486 mov edx, dword ptr [0x118c39e8] */
  EDX = (r32((uint32_t)(0x118c39e8)));
  /* 118a248c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 118a248e mov eax, dword ptr [0x118c2d88] */
  EAX = (r32((uint32_t)(0x118c2d88)));
  /* 118a2493 mov ecx, dword ptr [0x118c39ec] */
  ECX = (r32((uint32_t)(0x118c39ec)));
  /* 118a2499 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 118a249c mov edx, dword ptr [0x118c2d88] */
  EDX = (r32((uint32_t)(0x118c2d88)));
  /* 118a24a2 mov eax, dword ptr [0x118c39f0] */
  EAX = (r32((uint32_t)(0x118c39f0)));
  /* 118a24a7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 118a24aa mov ecx, dword ptr [0x118c2d88] */
  ECX = (r32((uint32_t)(0x118c2d88)));
  /* 118a24b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a24b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a24b4 mov byte ptr [0x118c1ea8], al */
  w8((uint32_t)(0x118c1ea8), (AL));
  /* 118a24b9 mov dword ptr [0x118c1eac], 1 */
  w32((uint32_t)(0x118c1eac), (0x1u));
  /* 118a24c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a24c5 jmp 0x118a25f2 */
  goto L_118a25f2;
L_118a24ca:;
  /* 118a24ca push 2 */
  push32((uint32_t)(0x2u));
  /* 118a24cc mov ecx, dword ptr [0x118c39e8] */
  ECX = (r32((uint32_t)(0x118c39e8)));
  /* 118a24d2 push ecx */
  push32((uint32_t)(ECX));
  /* 118a24d3 call 0x11897c90 */
  push32(0x118a24d8u); f_11897c90();
  /* 118a24d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a24db push 2 */
  push32((uint32_t)(0x2u));
  /* 118a24dd mov edx, dword ptr [0x118c39ec] */
  EDX = (r32((uint32_t)(0x118c39ec)));
  /* 118a24e3 push edx */
  push32((uint32_t)(EDX));
  /* 118a24e4 call 0x11897c90 */
  push32(0x118a24e9u); f_11897c90();
  /* 118a24e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a24ec push 2 */
  push32((uint32_t)(0x2u));
  /* 118a24ee mov eax, dword ptr [0x118c39f0] */
  EAX = (r32((uint32_t)(0x118c39f0)));
  /* 118a24f3 push eax */
  push32((uint32_t)(EAX));
  /* 118a24f4 call 0x11897c90 */
  push32(0x118a24f9u); f_11897c90();
  /* 118a24f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a24fc mov dword ptr [0x118c39e8], 0 */
  w32((uint32_t)(0x118c39e8), (0x0u));
  /* 118a2506 mov dword ptr [0x118c39ec], 0 */
  w32((uint32_t)(0x118c39ec), (0x0u));
  /* 118a2510 mov dword ptr [0x118c39f0], 0 */
  w32((uint32_t)(0x118c39f0), (0x0u));
  /* 118a251a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 118a251f push 0x118bfc0c */
  push32((uint32_t)(0x118bfc0cu));
  /* 118a2524 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2526 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2528 call 0x11897200 */
  push32(0x118a252du); f_11897200();
  /* 118a252d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2530 mov ecx, dword ptr [0x118c2d88] */
  ECX = (r32((uint32_t)(0x118c2d88)));
  /* 118a2536 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118a2538 mov edx, dword ptr [0x118c2d88] */
  EDX = (r32((uint32_t)(0x118c2d88)));
  /* 118a253e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2541 jne 0x118a254b */
  if (!C.zf) goto L_118a254b;
  /* 118a2543 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a2546 jmp 0x118a25f2 */
  goto L_118a25f2;
L_118a254b:;
  /* 118a254b push 0x118bfbdc */
  push32((uint32_t)(0x118bfbdcu));
  /* 118a2550 mov eax, dword ptr [0x118c2d88] */
  EAX = (r32((uint32_t)(0x118c2d88)));
  /* 118a2555 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a2557 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2558 call 0x1189a1b0 */
  push32(0x118a255du); f_1189a1b0();
  /* 118a255d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2560 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 118a2565 push 0x118bfc0c */
  push32((uint32_t)(0x118bfc0cu));
  /* 118a256a push 2 */
  push32((uint32_t)(0x2u));
  /* 118a256c push 2 */
  push32((uint32_t)(0x2u));
  /* 118a256e call 0x11897200 */
  push32(0x118a2573u); f_11897200();
  /* 118a2573 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2576 mov edx, dword ptr [0x118c2d88] */
  EDX = (r32((uint32_t)(0x118c2d88)));
  /* 118a257c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 118a257f mov eax, dword ptr [0x118c2d88] */
  EAX = (r32((uint32_t)(0x118c2d88)));
  /* 118a2584 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2588 jne 0x118a258f */
  if (!C.zf) goto L_118a258f;
  /* 118a258a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a258d jmp 0x118a25f2 */
  goto L_118a25f2;
L_118a258f:;
  /* 118a258f mov ecx, dword ptr [0x118c2d88] */
  ECX = (r32((uint32_t)(0x118c2d88)));
  /* 118a2595 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 118a2598 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 118a259b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 118a25a0 push 0x118bfc0c */
  push32((uint32_t)(0x118bfc0cu));
  /* 118a25a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a25a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a25a9 call 0x11897200 */
  push32(0x118a25aeu); f_11897200();
  /* 118a25ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a25b1 mov ecx, dword ptr [0x118c2d88] */
  ECX = (r32((uint32_t)(0x118c2d88)));
  /* 118a25b7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 118a25ba mov edx, dword ptr [0x118c2d88] */
  EDX = (r32((uint32_t)(0x118c2d88)));
  /* 118a25c0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a25c4 jne 0x118a25cb */
  if (!C.zf) goto L_118a25cb;
  /* 118a25c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a25c9 jmp 0x118a25f2 */
  goto L_118a25f2;
L_118a25cb:;
  /* 118a25cb mov eax, dword ptr [0x118c2d88] */
  EAX = (r32((uint32_t)(0x118c2d88)));
  /* 118a25d0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 118a25d3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 118a25d6 mov edx, dword ptr [0x118c2d88] */
  EDX = (r32((uint32_t)(0x118c2d88)));
  /* 118a25dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a25de mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118a25e0 mov byte ptr [0x118c1ea8], cl */
  w8((uint32_t)(0x118c1ea8), (CL));
  /* 118a25e6 mov dword ptr [0x118c1eac], 1 */
  w32((uint32_t)(0x118c1eac), (0x1u));
  /* 118a25f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a25f2:;
  /* 118a25f2 mov esp, ebp */
  ESP = (EBP);
  /* 118a25f4 pop ebp */
  EBP = (pop32());
  /* 118a25f5 ret  */
  ESPCHK(0x118a2350u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x118a2600 (125 bytes, 49 insns) */
void f_118a2600(void) {
  FTRACE(0x118a2600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a2600 push ebp */
  push32((uint32_t)(EBP));
  /* 118a2601 mov ebp, esp */
  EBP = (ESP);
  /* 118a2603 push ecx */
  push32((uint32_t)(ECX));
L_118a2604:;
  /* 118a2604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2607 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a260a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a260c je 0x118a2679 */
  if (C.zf) goto L_118a2679;
  /* 118a260e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2611 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118a2614 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2617 jl 0x118a263d */
  if ((C.sf!=C.of)) goto L_118a263d;
  /* 118a2619 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a261c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118a261f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2622 jg 0x118a263d */
  if ((!C.zf&&C.sf==C.of)) goto L_118a263d;
  /* 118a2624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2627 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a262a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a262d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2630 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 118a2632 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2635 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2638 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a263b jmp 0x118a2677 */
  goto L_118a2677;
L_118a263d:;
  /* 118a263d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2640 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118a2643 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2646 jne 0x118a266e */
  if (!C.zf) goto L_118a266e;
  /* 118a2648 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a264b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118a264e:;
  /* 118a264e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2651 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2654 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 118a2657 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 118a2659 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a265c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a265f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a2662 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2665 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118a2668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a266a jne 0x118a264e */
  if (!C.zf) goto L_118a264e;
  /* 118a266c jmp 0x118a2677 */
  goto L_118a2677;
L_118a266e:;
  /* 118a266e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2671 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2674 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_118a2677:;
  /* 118a2677 jmp 0x118a2604 */
  goto L_118a2604;
L_118a2679:;
  /* 118a2679 mov esp, ebp */
  ESP = (EBP);
  /* 118a267b pop ebp */
  EBP = (pop32());
  /* 118a267c ret  */
  ESPCHK(0x118a2600u, _esp0);
  ESP += 4; return;
}

/* FUN_10012680 @ 0x118a2680 (304 bytes, 85 insns) */
void f_118a2680(void) {
  FTRACE(0x118a2680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a2680 push ebp */
  push32((uint32_t)(EBP));
  /* 118a2681 mov ebp, esp */
  EBP = (ESP);
  /* 118a2683 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2684 cmp dword ptr [0x118c39bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c39bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a268b je 0x118a274c */
  if (C.zf) goto L_118a274c;
  /* 118a2691 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 118a2693 push 0x118bfc18 */
  push32((uint32_t)(0x118bfc18u));
  /* 118a2698 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a269a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 118a269c push 1 */
  push32((uint32_t)(0x1u));
  /* 118a269e call 0x11897610 */
  push32(0x118a26a3u); f_11897610();
  /* 118a26a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a26a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a26a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a26ad jne 0x118a26b9 */
  if (!C.zf) goto L_118a26b9;
  /* 118a26af mov eax, 1 */
  EAX = (0x1u);
  /* 118a26b4 jmp 0x118a27ac */
  goto L_118a27ac;
L_118a26b9:;
  /* 118a26b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a26bc push eax */
  push32((uint32_t)(EAX));
  /* 118a26bd call 0x118a27b0 */
  push32(0x118a26c2u); f_118a27b0();
  /* 118a26c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a26c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a26c7 je 0x118a26ed */
  if (C.zf) goto L_118a26ed;
  /* 118a26c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a26cc push ecx */
  push32((uint32_t)(ECX));
  /* 118a26cd call 0x118a2a40 */
  push32(0x118a26d2u); f_118a2a40();
  /* 118a26d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a26d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a26d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a26da push edx */
  push32((uint32_t)(EDX));
  /* 118a26db call 0x11897c90 */
  push32(0x118a26e0u); f_11897c90();
  /* 118a26e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a26e3 mov eax, 1 */
  EAX = (0x1u);
  /* 118a26e8 jmp 0x118a27ac */
  goto L_118a27ac;
L_118a26ed:;
  /* 118a26ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a26f0 mov ecx, dword ptr [0x118c2d88] */
  ECX = (r32((uint32_t)(0x118c2d88)));
  /* 118a26f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a26f8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118a26fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a26fd mov ecx, dword ptr [0x118c2d88] */
  ECX = (r32((uint32_t)(0x118c2d88)));
  /* 118a2703 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 118a2706 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 118a2709 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a270c mov ecx, dword ptr [0x118c2d88] */
  ECX = (r32((uint32_t)(0x118c2d88)));
  /* 118a2712 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 118a2715 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 118a2718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a271b mov dword ptr [0x118c2d88], eax */
  w32((uint32_t)(0x118c2d88), (EAX));
  /* 118a2720 mov ecx, dword ptr [0x118c39f4] */
  ECX = (r32((uint32_t)(0x118c39f4)));
  /* 118a2726 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2727 call 0x118a2a40 */
  push32(0x118a272cu); f_118a2a40();
  /* 118a272c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a272f push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2731 mov edx, dword ptr [0x118c39f4] */
  EDX = (r32((uint32_t)(0x118c39f4)));
  /* 118a2737 push edx */
  push32((uint32_t)(EDX));
  /* 118a2738 call 0x11897c90 */
  push32(0x118a273du); f_11897c90();
  /* 118a273d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2740 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2743 mov dword ptr [0x118c39f4], eax */
  w32((uint32_t)(0x118c39f4), (EAX));
  /* 118a2748 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a274a jmp 0x118a27ac */
  goto L_118a27ac;
L_118a274c:;
  /* 118a274c mov ecx, dword ptr [0x118c2d88] */
  ECX = (r32((uint32_t)(0x118c2d88)));
  /* 118a2752 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a2754 mov dword ptr [0x118c2d58], edx */
  w32((uint32_t)(0x118c2d58), (EDX));
  /* 118a275a mov eax, dword ptr [0x118c2d88] */
  EAX = (r32((uint32_t)(0x118c2d88)));
  /* 118a275f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 118a2762 mov dword ptr [0x118c2d5c], ecx */
  w32((uint32_t)(0x118c2d5c), (ECX));
  /* 118a2768 mov edx, dword ptr [0x118c2d88] */
  EDX = (r32((uint32_t)(0x118c2d88)));
  /* 118a276e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 118a2771 mov dword ptr [0x118c2d60], eax */
  w32((uint32_t)(0x118c2d60), (EAX));
  /* 118a2776 mov dword ptr [0x118c2d88], 0x118c2d58 */
  w32((uint32_t)(0x118c2d88), (0x118c2d58u));
  /* 118a2780 mov ecx, dword ptr [0x118c39f4] */
  ECX = (r32((uint32_t)(0x118c39f4)));
  /* 118a2786 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2787 call 0x118a2a40 */
  push32(0x118a278cu); f_118a2a40();
  /* 118a278c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a278f push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2791 mov edx, dword ptr [0x118c39f4] */
  EDX = (r32((uint32_t)(0x118c39f4)));
  /* 118a2797 push edx */
  push32((uint32_t)(EDX));
  /* 118a2798 call 0x11897c90 */
  push32(0x118a279du); f_11897c90();
  /* 118a279d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a27a0 mov dword ptr [0x118c39f4], 0 */
  w32((uint32_t)(0x118c39f4), (0x0u));
  /* 118a27aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a27ac:;
  /* 118a27ac mov esp, ebp */
  ESP = (EBP);
  /* 118a27ae pop ebp */
  EBP = (pop32());
  /* 118a27af ret  */
  ESPCHK(0x118a2680u, _esp0);
  ESP += 4; return;
}

/* FUN_100127b0 @ 0x118a27b0 (525 bytes, 200 insns) */
void f_118a27b0(void) {
  FTRACE(0x118a27b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a27b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a27b1 mov ebp, esp */
  EBP = (ESP);
  /* 118a27b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a27b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118a27bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a27bf mov ax, word ptr [0x118c3a14] */
  AX = (r16((uint32_t)(0x118c3a14)));
  /* 118a27c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a27c8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a27cc jne 0x118a27d6 */
  if (!C.zf) goto L_118a27d6;
  /* 118a27ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a27d1 jmp 0x118a29b9 */
  goto L_118a29b9;
L_118a27d6:;
  /* 118a27d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a27d9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a27dc push ecx */
  push32((uint32_t)(ECX));
  /* 118a27dd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 118a27df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a27e2 push edx */
  push32((uint32_t)(EDX));
  /* 118a27e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a27e5 call 0x118a53c0 */
  push32(0x118a27eau); f_118a53c0();
  /* 118a27ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a27ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a27f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a27f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a27f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a27f8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a27fb push edx */
  push32((uint32_t)(EDX));
  /* 118a27fc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 118a27fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2801 push eax */
  push32((uint32_t)(EAX));
  /* 118a2802 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a2804 call 0x118a53c0 */
  push32(0x118a2809u); f_118a53c0();
  /* 118a2809 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a280c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a280f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a2811 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a2814 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2817 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a281a push edx */
  push32((uint32_t)(EDX));
  /* 118a281b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 118a281d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2820 push eax */
  push32((uint32_t)(EAX));
  /* 118a2821 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a2823 call 0x118a53c0 */
  push32(0x118a2828u); f_118a53c0();
  /* 118a2828 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a282b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a282e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a2830 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a2833 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2836 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2839 push edx */
  push32((uint32_t)(EDX));
  /* 118a283a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 118a283c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a283f push eax */
  push32((uint32_t)(EAX));
  /* 118a2840 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a2842 call 0x118a53c0 */
  push32(0x118a2847u); f_118a53c0();
  /* 118a2847 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a284a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a284d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a284f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a2852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2855 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2858 push edx */
  push32((uint32_t)(EDX));
  /* 118a2859 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 118a285b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a285e push eax */
  push32((uint32_t)(EAX));
  /* 118a285f push 1 */
  push32((uint32_t)(0x1u));
  /* 118a2861 call 0x118a53c0 */
  push32(0x118a2866u); f_118a53c0();
  /* 118a2866 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2869 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a286c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a286e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a2871 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2874 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 118a2877 push eax */
  push32((uint32_t)(EAX));
  /* 118a2878 call 0x118a29c0 */
  push32(0x118a287du); f_118a29c0();
  /* 118a287d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2880 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2883 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2886 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2887 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 118a2889 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a288c push edx */
  push32((uint32_t)(EDX));
  /* 118a288d push 1 */
  push32((uint32_t)(0x1u));
  /* 118a288f call 0x118a53c0 */
  push32(0x118a2894u); f_118a53c0();
  /* 118a2894 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2897 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a289a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a289c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a289f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a28a2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a28a5 push edx */
  push32((uint32_t)(EDX));
  /* 118a28a6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 118a28a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a28ab push eax */
  push32((uint32_t)(EAX));
  /* 118a28ac push 1 */
  push32((uint32_t)(0x1u));
  /* 118a28ae call 0x118a53c0 */
  push32(0x118a28b3u); f_118a53c0();
  /* 118a28b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a28b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a28b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a28bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a28be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a28c1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a28c4 push edx */
  push32((uint32_t)(EDX));
  /* 118a28c5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 118a28c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a28ca push eax */
  push32((uint32_t)(EAX));
  /* 118a28cb push 0 */
  push32((uint32_t)(0x0u));
  /* 118a28cd call 0x118a53c0 */
  push32(0x118a28d2u); f_118a53c0();
  /* 118a28d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a28d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a28d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a28da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a28dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a28e0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a28e3 push edx */
  push32((uint32_t)(EDX));
  /* 118a28e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 118a28e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a28e9 push eax */
  push32((uint32_t)(EAX));
  /* 118a28ea push 0 */
  push32((uint32_t)(0x0u));
  /* 118a28ec call 0x118a53c0 */
  push32(0x118a28f1u); f_118a53c0();
  /* 118a28f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a28f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a28f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a28f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a28fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a28ff add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2902 push edx */
  push32((uint32_t)(EDX));
  /* 118a2903 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 118a2905 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2908 push eax */
  push32((uint32_t)(EAX));
  /* 118a2909 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a290b call 0x118a53c0 */
  push32(0x118a2910u); f_118a53c0();
  /* 118a2910 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2913 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a2916 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a2918 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a291b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a291e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2921 push edx */
  push32((uint32_t)(EDX));
  /* 118a2922 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 118a2924 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2927 push eax */
  push32((uint32_t)(EAX));
  /* 118a2928 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a292a call 0x118a53c0 */
  push32(0x118a292fu); f_118a53c0();
  /* 118a292f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2932 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a2935 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a2937 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a293a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a293d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2940 push edx */
  push32((uint32_t)(EDX));
  /* 118a2941 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 118a2943 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2946 push eax */
  push32((uint32_t)(EAX));
  /* 118a2947 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a2949 call 0x118a53c0 */
  push32(0x118a294eu); f_118a53c0();
  /* 118a294e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2951 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a2954 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a2956 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a2959 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a295c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a295f push edx */
  push32((uint32_t)(EDX));
  /* 118a2960 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 118a2962 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2965 push eax */
  push32((uint32_t)(EAX));
  /* 118a2966 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a2968 call 0x118a53c0 */
  push32(0x118a296du); f_118a53c0();
  /* 118a296d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2970 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a2973 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a2975 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a2978 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a297b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a297e push edx */
  push32((uint32_t)(EDX));
  /* 118a297f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 118a2981 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2984 push eax */
  push32((uint32_t)(EAX));
  /* 118a2985 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a2987 call 0x118a53c0 */
  push32(0x118a298cu); f_118a53c0();
  /* 118a298c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a298f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a2992 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a2994 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a2997 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a299a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a299d push edx */
  push32((uint32_t)(EDX));
  /* 118a299e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 118a29a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a29a3 push eax */
  push32((uint32_t)(EAX));
  /* 118a29a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a29a6 call 0x118a53c0 */
  push32(0x118a29abu); f_118a53c0();
  /* 118a29ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a29ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a29b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a29b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a29b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_118a29b9:;
  /* 118a29b9 mov esp, ebp */
  ESP = (EBP);
  /* 118a29bb pop ebp */
  EBP = (pop32());
  /* 118a29bc ret  */
  ESPCHK(0x118a27b0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x118a29c0 (125 bytes, 49 insns) */
void f_118a29c0(void) {
  FTRACE(0x118a29c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a29c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a29c1 mov ebp, esp */
  EBP = (ESP);
  /* 118a29c3 push ecx */
  push32((uint32_t)(ECX));
L_118a29c4:;
  /* 118a29c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a29c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a29ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a29cc je 0x118a2a39 */
  if (C.zf) goto L_118a2a39;
  /* 118a29ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a29d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118a29d4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a29d7 jl 0x118a29fd */
  if ((C.sf!=C.of)) goto L_118a29fd;
  /* 118a29d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a29dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118a29df cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a29e2 jg 0x118a29fd */
  if ((!C.zf&&C.sf==C.of)) goto L_118a29fd;
  /* 118a29e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a29e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a29ea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a29ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a29f0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 118a29f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a29f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a29f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a29fb jmp 0x118a2a37 */
  goto L_118a2a37;
L_118a29fd:;
  /* 118a29fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2a00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118a2a03 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2a06 jne 0x118a2a2e */
  if (!C.zf) goto L_118a2a2e;
  /* 118a2a08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2a0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118a2a0e:;
  /* 118a2a0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2a11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2a14 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 118a2a17 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 118a2a19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2a1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2a1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a2a22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a2a25 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118a2a28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a2a2a jne 0x118a2a0e */
  if (!C.zf) goto L_118a2a0e;
  /* 118a2a2c jmp 0x118a2a37 */
  goto L_118a2a37;
L_118a2a2e:;
  /* 118a2a2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2a31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2a34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_118a2a37:;
  /* 118a2a37 jmp 0x118a29c4 */
  goto L_118a29c4;
L_118a2a39:;
  /* 118a2a39 mov esp, ebp */
  ESP = (EBP);
  /* 118a2a3b pop ebp */
  EBP = (pop32());
  /* 118a2a3c ret  */
  ESPCHK(0x118a29c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a40 @ 0x118a2a40 (147 bytes, 52 insns) */
void f_118a2a40(void) {
  FTRACE(0x118a2a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a2a40 push ebp */
  push32((uint32_t)(EBP));
  /* 118a2a41 mov ebp, esp */
  EBP = (ESP);
  /* 118a2a43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2a47 jne 0x118a2a4e */
  if (!C.zf) goto L_118a2a4e;
  /* 118a2a49 jmp 0x118a2ad1 */
  goto L_118a2ad1;
L_118a2a4e:;
  /* 118a2a4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2a51 cmp dword ptr [eax + 0xc], 0x118c3a50 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x118c3a50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2a58 je 0x118a2ad1 */
  if (C.zf) goto L_118a2ad1;
  /* 118a2a5a push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2a5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2a5f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118a2a62 push edx */
  push32((uint32_t)(EDX));
  /* 118a2a63 call 0x11897c90 */
  push32(0x118a2a68u); f_11897c90();
  /* 118a2a68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2a6b push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2a6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2a70 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 118a2a73 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2a74 call 0x11897c90 */
  push32(0x118a2a79u); f_11897c90();
  /* 118a2a79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2a7c push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2a7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2a81 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 118a2a84 push eax */
  push32((uint32_t)(EAX));
  /* 118a2a85 call 0x11897c90 */
  push32(0x118a2a8au); f_11897c90();
  /* 118a2a8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2a8d push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2a8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2a92 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 118a2a95 push edx */
  push32((uint32_t)(EDX));
  /* 118a2a96 call 0x11897c90 */
  push32(0x118a2a9bu); f_11897c90();
  /* 118a2a9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2a9e push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2aa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2aa3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 118a2aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2aa7 call 0x11897c90 */
  push32(0x118a2aacu); f_11897c90();
  /* 118a2aac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2aaf push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2ab1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2ab4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 118a2ab7 push eax */
  push32((uint32_t)(EAX));
  /* 118a2ab8 call 0x11897c90 */
  push32(0x118a2abdu); f_11897c90();
  /* 118a2abd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2ac0 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2ac2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2ac5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 118a2ac8 push edx */
  push32((uint32_t)(EDX));
  /* 118a2ac9 call 0x11897c90 */
  push32(0x118a2aceu); f_11897c90();
  /* 118a2ace add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a2ad1:;
  /* 118a2ad1 pop ebp */
  EBP = (pop32());
  /* 118a2ad2 ret  */
  ESPCHK(0x118a2a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ae0 @ 0x118a2ae0 (928 bytes, 284 insns) */
void f_118a2ae0(void) {
  FTRACE(0x118a2ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a2ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a2ae1 mov ebp, esp */
  EBP = (ESP);
  /* 118a2ae3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a2ae6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 118a2aed mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 118a2af4 cmp dword ptr [0x118c39b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c39b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2afb je 0x118a2e31 */
  if (C.zf) goto L_118a2e31;
  /* 118a2b01 cmp dword ptr [0x118c39c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c39c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2b08 jne 0x118a2b30 */
  if (!C.zf) goto L_118a2b30;
  /* 118a2b0a push 0x118c39c8 */
  push32((uint32_t)(0x118c39c8u));
  /* 118a2b0f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 118a2b14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a2b16 mov ax, word ptr [0x118c3a0c] */
  AX = (r16((uint32_t)(0x118c3a0c)));
  /* 118a2b1c push eax */
  push32((uint32_t)(EAX));
  /* 118a2b1d push 0 */
  push32((uint32_t)(0x0u));
  /* 118a2b1f call 0x118a53c0 */
  push32(0x118a2b24u); f_118a53c0();
  /* 118a2b24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2b27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a2b29 je 0x118a2b30 */
  if (C.zf) goto L_118a2b30;
  /* 118a2b2b jmp 0x118a2df2 */
  goto L_118a2df2;
L_118a2b30:;
  /* 118a2b30 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 118a2b32 push 0x118bfc24 */
  push32((uint32_t)(0x118bfc24u));
  /* 118a2b37 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2b39 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 118a2b3e call 0x11897200 */
  push32(0x118a2b43u); f_11897200();
  /* 118a2b43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2b46 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 118a2b49 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 118a2b4b push 0x118bfc24 */
  push32((uint32_t)(0x118bfc24u));
  /* 118a2b50 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2b52 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 118a2b57 call 0x11897200 */
  push32(0x118a2b5cu); f_11897200();
  /* 118a2b5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2b5f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118a2b62 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 118a2b64 push 0x118bfc24 */
  push32((uint32_t)(0x118bfc24u));
  /* 118a2b69 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2b6b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 118a2b70 call 0x11897200 */
  push32(0x118a2b75u); f_11897200();
  /* 118a2b75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2b78 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 118a2b7b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 118a2b7d push 0x118bfc24 */
  push32((uint32_t)(0x118bfc24u));
  /* 118a2b82 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2b84 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 118a2b89 call 0x11897200 */
  push32(0x118a2b8eu); f_11897200();
  /* 118a2b8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2b91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 118a2b94 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2b98 je 0x118a2bac */
  if (C.zf) goto L_118a2bac;
  /* 118a2b9a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2b9e je 0x118a2bac */
  if (C.zf) goto L_118a2bac;
  /* 118a2ba0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2ba4 je 0x118a2bac */
  if (C.zf) goto L_118a2bac;
  /* 118a2ba6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2baa jne 0x118a2bb1 */
  if (!C.zf) goto L_118a2bb1;
L_118a2bac:;
  /* 118a2bac jmp 0x118a2df2 */
  goto L_118a2df2;
L_118a2bb1:;
  /* 118a2bb1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 118a2bb4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 118a2bb7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 118a2bbe jmp 0x118a2bc9 */
  goto L_118a2bc9;
L_118a2bc0:;
  /* 118a2bc0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a2bc3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2bc6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_118a2bc9:;
  /* 118a2bc9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2bd0 jge 0x118a2be5 */
  if ((C.sf==C.of)) goto L_118a2be5;
  /* 118a2bd2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a2bd5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 118a2bd8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 118a2bda mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a2bdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2be0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 118a2be3 jmp 0x118a2bc0 */
  goto L_118a2bc0;
L_118a2be5:;
  /* 118a2be5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 118a2be8 push eax */
  push32((uint32_t)(EAX));
  /* 118a2be9 mov ecx, dword ptr [0x118c39c8] */
  ECX = (r32((uint32_t)(0x118c39c8)));
  /* 118a2bef push ecx */
  push32((uint32_t)(ECX));
  /* 118a2bf0 call dword ptr [0x118c6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6330))), 0x118a2bf6u);
  /* 118a2bf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a2bf8 jne 0x118a2bff */
  if (!C.zf) goto L_118a2bff;
  /* 118a2bfa jmp 0x118a2df2 */
  goto L_118a2df2;
L_118a2bff:;
  /* 118a2bff cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2c03 jbe 0x118a2c0a */
  if ((C.cf||C.zf)) goto L_118a2c0a;
  /* 118a2c05 jmp 0x118a2df2 */
  goto L_118a2df2;
L_118a2c0a:;
  /* 118a2c0a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a2c0d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118a2c13 mov dword ptr [0x118c1ea4], edx */
  w32((uint32_t)(0x118c1ea4), (EDX));
  /* 118a2c19 cmp dword ptr [0x118c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2c20 jle 0x118a2c79 */
  if ((C.zf||C.sf!=C.of)) goto L_118a2c79;
  /* 118a2c22 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 118a2c25 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 118a2c28 jmp 0x118a2c33 */
  goto L_118a2c33;
L_118a2c2a:;
  /* 118a2c2a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a2c2d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2c30 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_118a2c33:;
  /* 118a2c33 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a2c36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a2c38 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a2c3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a2c3c je 0x118a2c79 */
  if (C.zf) goto L_118a2c79;
  /* 118a2c3e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a2c41 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a2c43 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 118a2c46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a2c48 je 0x118a2c79 */
  if (C.zf) goto L_118a2c79;
  /* 118a2c4a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a2c4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a2c4f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118a2c51 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 118a2c54 jmp 0x118a2c5f */
  goto L_118a2c5f;
L_118a2c56:;
  /* 118a2c56 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a2c59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2c5c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_118a2c5f:;
  /* 118a2c5f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a2c62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a2c64 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 118a2c67 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2c6a jg 0x118a2c77 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a2c77;
  /* 118a2c6c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 118a2c6f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2c72 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 118a2c75 jmp 0x118a2c56 */
  goto L_118a2c56;
L_118a2c77:;
  /* 118a2c77 jmp 0x118a2c2a */
  goto L_118a2c2a;
L_118a2c79:;
  /* 118a2c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a2c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 118a2c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 118a2c7f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 118a2c82 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2c85 push eax */
  push32((uint32_t)(EAX));
  /* 118a2c86 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 118a2c8b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 118a2c8e push ecx */
  push32((uint32_t)(ECX));
  /* 118a2c8f push 1 */
  push32((uint32_t)(0x1u));
  /* 118a2c91 call 0x1189f430 */
  push32(0x118a2c96u); f_1189f430();
  /* 118a2c96 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2c99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a2c9b jne 0x118a2ca2 */
  if (!C.zf) goto L_118a2ca2;
  /* 118a2c9d jmp 0x118a2df2 */
  goto L_118a2df2;
L_118a2ca2:;
  /* 118a2ca2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 118a2ca5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 118a2caa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 118a2cad mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118a2cb0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 118a2cb7 jmp 0x118a2cc2 */
  goto L_118a2cc2;
L_118a2cb9:;
  /* 118a2cb9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a2cbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2cbf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_118a2cc2:;
  /* 118a2cc2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2cc9 jge 0x118a2ce0 */
  if ((C.sf==C.of)) goto L_118a2ce0;
  /* 118a2ccb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 118a2cce mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 118a2cd2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 118a2cd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 118a2cd8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2cdb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 118a2cde jmp 0x118a2cb9 */
  goto L_118a2cb9;
L_118a2ce0:;
  /* 118a2ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a2ce2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a2ce4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118a2ce7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2cea push edx */
  push32((uint32_t)(EDX));
  /* 118a2ceb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 118a2cf0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 118a2cf3 push eax */
  push32((uint32_t)(EAX));
  /* 118a2cf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a2cf6 call 0x118a5660 */
  push32(0x118a2cfbu); f_118a5660();
  /* 118a2cfb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a2d00 jne 0x118a2d07 */
  if (!C.zf) goto L_118a2d07;
  /* 118a2d02 jmp 0x118a2df2 */
  goto L_118a2df2;
L_118a2d07:;
  /* 118a2d07 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118a2d0a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 118a2d0f cmp dword ptr [0x118c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2d16 jle 0x118a2d73 */
  if ((C.zf||C.sf!=C.of)) goto L_118a2d73;
  /* 118a2d18 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 118a2d1b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 118a2d1e jmp 0x118a2d29 */
  goto L_118a2d29;
L_118a2d20:;
  /* 118a2d20 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a2d23 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2d26 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_118a2d29:;
  /* 118a2d29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a2d2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a2d2e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118a2d30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a2d32 je 0x118a2d73 */
  if (C.zf) goto L_118a2d73;
  /* 118a2d34 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a2d37 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a2d39 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 118a2d3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a2d3e je 0x118a2d73 */
  if (C.zf) goto L_118a2d73;
  /* 118a2d40 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a2d43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a2d45 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a2d47 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118a2d4a jmp 0x118a2d55 */
  goto L_118a2d55;
L_118a2d4c:;
  /* 118a2d4c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a2d4f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2d52 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_118a2d55:;
  /* 118a2d55 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a2d58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a2d5a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 118a2d5d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2d60 jg 0x118a2d71 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a2d71;
  /* 118a2d62 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a2d65 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 118a2d68 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 118a2d6f jmp 0x118a2d4c */
  goto L_118a2d4c;
L_118a2d71:;
  /* 118a2d71 jmp 0x118a2d20 */
  goto L_118a2d20;
L_118a2d73:;
  /* 118a2d73 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 118a2d76 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2d79 mov dword ptr [0x118c1c98], eax */
  w32((uint32_t)(0x118c1c98), (EAX));
  /* 118a2d7e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118a2d81 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2d84 mov dword ptr [0x118c1c9c], ecx */
  w32((uint32_t)(0x118c1c9c), (ECX));
  /* 118a2d8a cmp dword ptr [0x118c39f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c39f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2d91 je 0x118a2da4 */
  if (C.zf) goto L_118a2da4;
  /* 118a2d93 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2d95 mov edx, dword ptr [0x118c39f8] */
  EDX = (r32((uint32_t)(0x118c39f8)));
  /* 118a2d9b push edx */
  push32((uint32_t)(EDX));
  /* 118a2d9c call 0x11897c90 */
  push32(0x118a2da1u); f_11897c90();
  /* 118a2da1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a2da4:;
  /* 118a2da4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 118a2da7 mov dword ptr [0x118c39f8], eax */
  w32((uint32_t)(0x118c39f8), (EAX));
  /* 118a2dac cmp dword ptr [0x118c39fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c39fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2db3 je 0x118a2dc6 */
  if (C.zf) goto L_118a2dc6;
  /* 118a2db5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2db7 mov ecx, dword ptr [0x118c39fc] */
  ECX = (r32((uint32_t)(0x118c39fc)));
  /* 118a2dbd push ecx */
  push32((uint32_t)(ECX));
  /* 118a2dbe call 0x11897c90 */
  push32(0x118a2dc3u); f_11897c90();
  /* 118a2dc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a2dc6:;
  /* 118a2dc6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118a2dc9 mov dword ptr [0x118c39fc], edx */
  w32((uint32_t)(0x118c39fc), (EDX));
  /* 118a2dcf push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2dd1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 118a2dd4 push eax */
  push32((uint32_t)(EAX));
  /* 118a2dd5 call 0x11897c90 */
  push32(0x118a2ddau); f_11897c90();
  /* 118a2dda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2ddd push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2ddf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 118a2de2 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2de3 call 0x11897c90 */
  push32(0x118a2de8u); f_11897c90();
  /* 118a2de8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2deb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a2ded jmp 0x118a2e7c */
  goto L_118a2e7c;
L_118a2df2:;
  /* 118a2df2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2df4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 118a2df7 push edx */
  push32((uint32_t)(EDX));
  /* 118a2df8 call 0x11897c90 */
  push32(0x118a2dfdu); f_11897c90();
  /* 118a2dfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2e00 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2e02 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118a2e05 push eax */
  push32((uint32_t)(EAX));
  /* 118a2e06 call 0x11897c90 */
  push32(0x118a2e0bu); f_11897c90();
  /* 118a2e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2e0e push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2e10 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 118a2e13 push ecx */
  push32((uint32_t)(ECX));
  /* 118a2e14 call 0x11897c90 */
  push32(0x118a2e19u); f_11897c90();
  /* 118a2e19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2e1c push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2e1e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 118a2e21 push edx */
  push32((uint32_t)(EDX));
  /* 118a2e22 call 0x11897c90 */
  push32(0x118a2e27u); f_11897c90();
  /* 118a2e27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2e2a mov eax, 1 */
  EAX = (0x1u);
  /* 118a2e2f jmp 0x118a2e7c */
  goto L_118a2e7c;
L_118a2e31:;
  /* 118a2e31 mov dword ptr [0x118c1c98], 0x118c1ca2 */
  w32((uint32_t)(0x118c1c98), (0x118c1ca2u));
  /* 118a2e3b mov dword ptr [0x118c1c9c], 0x118c1ca2 */
  w32((uint32_t)(0x118c1c9c), (0x118c1ca2u));
  /* 118a2e45 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2e47 mov eax, dword ptr [0x118c39f8] */
  EAX = (r32((uint32_t)(0x118c39f8)));
  /* 118a2e4c push eax */
  push32((uint32_t)(EAX));
  /* 118a2e4d call 0x11897c90 */
  push32(0x118a2e52u); f_11897c90();
  /* 118a2e52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2e55 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a2e57 mov ecx, dword ptr [0x118c39fc] */
  ECX = (r32((uint32_t)(0x118c39fc)));
  /* 118a2e5d push ecx */
  push32((uint32_t)(ECX));
  /* 118a2e5e call 0x11897c90 */
  push32(0x118a2e63u); f_11897c90();
  /* 118a2e63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2e66 mov dword ptr [0x118c39f8], 0 */
  w32((uint32_t)(0x118c39f8), (0x0u));
  /* 118a2e70 mov dword ptr [0x118c39fc], 0 */
  w32((uint32_t)(0x118c39fc), (0x0u));
  /* 118a2e7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a2e7c:;
  /* 118a2e7c mov esp, ebp */
  ESP = (EBP);
  /* 118a2e7e pop ebp */
  EBP = (pop32());
  /* 118a2e7f ret  */
  ESPCHK(0x118a2ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e80 @ 0x118a2e80 (7 bytes, 5 insns) */
void f_118a2e80(void) {
  FTRACE(0x118a2e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a2e80 push ebp */
  push32((uint32_t)(EBP));
  /* 118a2e81 mov ebp, esp */
  EBP = (ESP);
  /* 118a2e83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a2e85 pop ebp */
  EBP = (pop32());
  /* 118a2e86 ret  */
  ESPCHK(0x118a2e80u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x118a2e90 (129 bytes, 56 insns) */
void f_118a2e90(void) {
  FTRACE(0x118a2e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a2e90 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 118a2e94 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118a2e98 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 118a2e9e jne 0x118a2edc */
  if (!C.zf) goto L_118a2edc;
L_118a2ea0:;
  /* 118a2ea0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a2ea2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a2ea4 jne 0x118a2ed4 */
  if (!C.zf) goto L_118a2ed4;
  /* 118a2ea6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118a2ea8 je 0x118a2ed0 */
  if (C.zf) goto L_118a2ed0;
  /* 118a2eaa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a2ead jne 0x118a2ed4 */
  if (!C.zf) goto L_118a2ed4;
  /* 118a2eaf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 118a2eb1 je 0x118a2ed0 */
  if (C.zf) goto L_118a2ed0;
  /* 118a2eb3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 118a2eb6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a2eb9 jne 0x118a2ed4 */
  if (!C.zf) goto L_118a2ed4;
  /* 118a2ebb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118a2ebd je 0x118a2ed0 */
  if (C.zf) goto L_118a2ed0;
  /* 118a2ebf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a2ec2 jne 0x118a2ed4 */
  if (!C.zf) goto L_118a2ed4;
  /* 118a2ec4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2ec7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2eca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 118a2ecc jne 0x118a2ea0 */
  if (!C.zf) goto L_118a2ea0;
  /* 118a2ece mov edi, edi */
  EDI = (EDI);
L_118a2ed0:;
  /* 118a2ed0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a2ed2 ret  */
  ESPCHK(0x118a2e90u, _esp0);
  ESP += 4; return;
  /* 118a2ed3 nop  */
  /* nop */
L_118a2ed4:;
  /* 118a2ed4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a2ed6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118a2ed8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118a2ed9 ret  */
  ESPCHK(0x118a2e90u, _esp0);
  ESP += 4; return;
  /* 118a2eda mov edi, edi */
  EDI = (EDI);
L_118a2edc:;
  /* 118a2edc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 118a2ee2 je 0x118a2ef8 */
  if (C.zf) goto L_118a2ef8;
  /* 118a2ee4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a2ee6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118a2ee7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a2ee9 jne 0x118a2ed4 */
  if (!C.zf) goto L_118a2ed4;
  /* 118a2eeb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118a2eec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118a2eee je 0x118a2ed0 */
  if (C.zf) goto L_118a2ed0;
  /* 118a2ef0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 118a2ef6 je 0x118a2ea0 */
  if (C.zf) goto L_118a2ea0;
L_118a2ef8:;
  /* 118a2ef8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 118a2efb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2efe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a2f00 jne 0x118a2ed4 */
  if (!C.zf) goto L_118a2ed4;
  /* 118a2f02 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118a2f04 je 0x118a2ed0 */
  if (C.zf) goto L_118a2ed0;
  /* 118a2f06 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a2f09 jne 0x118a2ed4 */
  if (!C.zf) goto L_118a2ed4;
  /* 118a2f0b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 118a2f0d je 0x118a2ed0 */
  if (C.zf) goto L_118a2ed0;
  /* 118a2f0f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2f12 jmp 0x118a2ea0 */
  goto L_118a2ea0;
}

/* FUN_10012f20 @ 0x118a2f20 (62 bytes, 35 insns) */
void f_118a2f20(void) {
  FTRACE(0x118a2f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a2f20 push ebp */
  push32((uint32_t)(EBP));
  /* 118a2f21 mov ebp, esp */
  EBP = (ESP);
  /* 118a2f23 push esi */
  push32((uint32_t)(ESI));
  /* 118a2f24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a2f26 push eax */
  push32((uint32_t)(EAX));
  /* 118a2f27 push eax */
  push32((uint32_t)(EAX));
  /* 118a2f28 push eax */
  push32((uint32_t)(EAX));
  /* 118a2f29 push eax */
  push32((uint32_t)(EAX));
  /* 118a2f2a push eax */
  push32((uint32_t)(EAX));
  /* 118a2f2b push eax */
  push32((uint32_t)(EAX));
  /* 118a2f2c push eax */
  push32((uint32_t)(EAX));
  /* 118a2f2d push eax */
  push32((uint32_t)(EAX));
  /* 118a2f2e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a2f31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118a2f34:;
  /* 118a2f34 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a2f36 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118a2f38 je 0x118a2f41 */
  if (C.zf) goto L_118a2f41;
  /* 118a2f3a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118a2f3b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x118a2f3b");
  /* 118a2f3f jmp 0x118a2f34 */
  goto L_118a2f34;
L_118a2f41:;
  /* 118a2f41 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2f44 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 118a2f47 nop  */
  /* nop */
L_118a2f48:;
  /* 118a2f48 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118a2f49 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118a2f4b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118a2f4d je 0x118a2f56 */
  if (C.zf) goto L_118a2f56;
  /* 118a2f4f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118a2f50 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x118a2f50");
  /* 118a2f54 jae 0x118a2f48 */
  if (!C.cf) goto L_118a2f48;
L_118a2f56:;
  /* 118a2f56 mov eax, ecx */
  EAX = (ECX);
  /* 118a2f58 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2f5b pop esi */
  ESI = (pop32());
  /* 118a2f5c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118a2f5d ret  */
  ESPCHK(0x118a2f20u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x118a2f60 (56 bytes, 31 insns) */
void f_118a2f60(void) {
  FTRACE(0x118a2f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a2f60 push ebp */
  push32((uint32_t)(EBP));
  /* 118a2f61 mov ebp, esp */
  EBP = (ESP);
  /* 118a2f63 push edi */
  push32((uint32_t)(EDI));
  /* 118a2f64 push esi */
  push32((uint32_t)(ESI));
  /* 118a2f65 push ebx */
  push32((uint32_t)(EBX));
  /* 118a2f66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a2f69 jecxz 0x118a2f91 */
  x86_unimpl("jecxz @ 0x118a2f69");
  /* 118a2f6b mov ebx, ecx */
  EBX = (ECX);
  /* 118a2f6d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118a2f70 mov esi, edi */
  ESI = (EDI);
  /* 118a2f72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a2f74 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 118a2f76 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a2f78 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2f7a mov edi, esi */
  EDI = (ESI);
  /* 118a2f7c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118a2f7f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 118a2f81 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 118a2f84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a2f86 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a2f89 ja 0x118a2f8f */
  if ((!C.cf&&!C.zf)) goto L_118a2f8f;
  /* 118a2f8b je 0x118a2f91 */
  if (C.zf) goto L_118a2f91;
  /* 118a2f8d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118a2f8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_118a2f8f:;
  /* 118a2f8f not ecx */
  ECX = (~(ECX));
L_118a2f91:;
  /* 118a2f91 mov eax, ecx */
  EAX = (ECX);
  /* 118a2f93 pop ebx */
  EBX = (pop32());
  /* 118a2f94 pop esi */
  ESI = (pop32());
  /* 118a2f95 pop edi */
  EDI = (pop32());
  /* 118a2f96 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118a2f97 ret  */
  ESPCHK(0x118a2f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fa0 @ 0x118a2fa0 (58 bytes, 32 insns) */
void f_118a2fa0(void) {
  FTRACE(0x118a2fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a2fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a2fa1 mov ebp, esp */
  EBP = (ESP);
  /* 118a2fa3 push esi */
  push32((uint32_t)(ESI));
  /* 118a2fa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a2fa6 push eax */
  push32((uint32_t)(EAX));
  /* 118a2fa7 push eax */
  push32((uint32_t)(EAX));
  /* 118a2fa8 push eax */
  push32((uint32_t)(EAX));
  /* 118a2fa9 push eax */
  push32((uint32_t)(EAX));
  /* 118a2faa push eax */
  push32((uint32_t)(EAX));
  /* 118a2fab push eax */
  push32((uint32_t)(EAX));
  /* 118a2fac push eax */
  push32((uint32_t)(EAX));
  /* 118a2fad push eax */
  push32((uint32_t)(EAX));
  /* 118a2fae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a2fb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118a2fb4:;
  /* 118a2fb4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a2fb6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118a2fb8 je 0x118a2fc1 */
  if (C.zf) goto L_118a2fc1;
  /* 118a2fba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118a2fbb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x118a2fbb");
  /* 118a2fbf jmp 0x118a2fb4 */
  goto L_118a2fb4;
L_118a2fc1:;
  /* 118a2fc1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_118a2fc4:;
  /* 118a2fc4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118a2fc6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118a2fc8 je 0x118a2fd4 */
  if (C.zf) goto L_118a2fd4;
  /* 118a2fca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118a2fcb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x118a2fcb");
  /* 118a2fcf jae 0x118a2fc4 */
  if (!C.cf) goto L_118a2fc4;
  /* 118a2fd1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_118a2fd4:;
  /* 118a2fd4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a2fd7 pop esi */
  ESI = (pop32());
  /* 118a2fd8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118a2fd9 ret  */
  ESPCHK(0x118a2fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fe0 @ 0x118a2fe0 (512 bytes, 147 insns) */
void f_118a2fe0(void) {
  FTRACE(0x118a2fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a2fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a2fe1 mov ebp, esp */
  EBP = (ESP);
  /* 118a2fe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a2fe6 cmp dword ptr [0x118c3a44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a2fed jne 0x118a3012 */
  if (!C.zf) goto L_118a3012;
  /* 118a2fef call 0x118a3ab0 */
  push32(0x118a2ff4u); f_118a3ab0();
  /* 118a2ff4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a2ff6 je 0x118a3002 */
  if (C.zf) goto L_118a3002;
  /* 118a2ff8 mov eax, dword ptr [0x118c62f4] */
  EAX = (r32((uint32_t)(0x118c62f4)));
  /* 118a2ffd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a3000 jmp 0x118a3009 */
  goto L_118a3009;
L_118a3002:;
  /* 118a3002 mov dword ptr [ebp - 8], 0x118a3b00 */
  w32((uint32_t)(EBP + -0x8), (0x118a3b00u));
L_118a3009:;
  /* 118a3009 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a300c mov dword ptr [0x118c3a44], ecx */
  w32((uint32_t)(0x118c3a44), (ECX));
L_118a3012:;
  /* 118a3012 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3016 jne 0x118a3022 */
  if (!C.zf) goto L_118a3022;
  /* 118a3018 call 0x118a3900 */
  push32(0x118a301du); f_118a3900();
  /* 118a301d jmp 0x118a30ee */
  goto L_118a30ee;
L_118a3022:;
  /* 118a3022 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3025 mov dword ptr [0x118c3a34], edx */
  w32((uint32_t)(0x118c3a34), (EDX));
  /* 118a302b cmp dword ptr [0x118c3a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3032 je 0x118a3054 */
  if (C.zf) goto L_118a3054;
  /* 118a3034 mov eax, dword ptr [0x118c3a34] */
  EAX = (r32((uint32_t)(0x118c3a34)));
  /* 118a3039 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a303c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a303e je 0x118a3054 */
  if (C.zf) goto L_118a3054;
  /* 118a3040 push 0x118c3a34 */
  push32((uint32_t)(0x118c3a34u));
  /* 118a3045 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118a3047 push 0x118c2a90 */
  push32((uint32_t)(0x118c2a90u));
  /* 118a304c call 0x118a31e0 */
  push32(0x118a3051u); f_118a31e0();
  /* 118a3051 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a3054:;
  /* 118a3054 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3057 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a305a mov dword ptr [0x118c3a38], edx */
  w32((uint32_t)(0x118c3a38), (EDX));
  /* 118a3060 cmp dword ptr [0x118c3a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3067 je 0x118a3089 */
  if (C.zf) goto L_118a3089;
  /* 118a3069 mov eax, dword ptr [0x118c3a38] */
  EAX = (r32((uint32_t)(0x118c3a38)));
  /* 118a306e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a3071 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a3073 je 0x118a3089 */
  if (C.zf) goto L_118a3089;
  /* 118a3075 push 0x118c3a38 */
  push32((uint32_t)(0x118c3a38u));
  /* 118a307a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 118a307c push 0x118c29d8 */
  push32((uint32_t)(0x118c29d8u));
  /* 118a3081 call 0x118a31e0 */
  push32(0x118a3086u); f_118a31e0();
  /* 118a3086 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a3089:;
  /* 118a3089 mov dword ptr [0x118c3a3c], 0 */
  w32((uint32_t)(0x118c3a3c), (0x0u));
  /* 118a3093 cmp dword ptr [0x118c3a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a309a je 0x118a30cd */
  if (C.zf) goto L_118a30cd;
  /* 118a309c mov edx, dword ptr [0x118c3a34] */
  EDX = (r32((uint32_t)(0x118c3a34)));
  /* 118a30a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118a30a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a30a7 je 0x118a30cd */
  if (C.zf) goto L_118a30cd;
  /* 118a30a9 cmp dword ptr [0x118c3a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a30b0 je 0x118a30c6 */
  if (C.zf) goto L_118a30c6;
  /* 118a30b2 mov ecx, dword ptr [0x118c3a38] */
  ECX = (r32((uint32_t)(0x118c3a38)));
  /* 118a30b8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118a30bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a30bd je 0x118a30c6 */
  if (C.zf) goto L_118a30c6;
  /* 118a30bf call 0x118a3270 */
  push32(0x118a30c4u); f_118a3270();
  /* 118a30c4 jmp 0x118a30cb */
  goto L_118a30cb;
L_118a30c6:;
  /* 118a30c6 call 0x118a3660 */
  push32(0x118a30cbu); f_118a3660();
L_118a30cb:;
  /* 118a30cb jmp 0x118a30ee */
  goto L_118a30ee;
L_118a30cd:;
  /* 118a30cd cmp dword ptr [0x118c3a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a30d4 je 0x118a30e9 */
  if (C.zf) goto L_118a30e9;
  /* 118a30d6 mov eax, dword ptr [0x118c3a38] */
  EAX = (r32((uint32_t)(0x118c3a38)));
  /* 118a30db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a30de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a30e0 je 0x118a30e9 */
  if (C.zf) goto L_118a30e9;
  /* 118a30e2 call 0x118a3800 */
  push32(0x118a30e7u); f_118a3800();
  /* 118a30e7 jmp 0x118a30ee */
  goto L_118a30ee;
L_118a30e9:;
  /* 118a30e9 call 0x118a3900 */
  push32(0x118a30eeu); f_118a3900();
L_118a30ee:;
  /* 118a30ee cmp dword ptr [0x118c3a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a30f5 jne 0x118a30fe */
  if (!C.zf) goto L_118a30fe;
  /* 118a30f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a30f9 jmp 0x118a31dc */
  goto L_118a31dc;
L_118a30fe:;
  /* 118a30fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3101 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3107 push edx */
  push32((uint32_t)(EDX));
  /* 118a3108 call 0x118a3930 */
  push32(0x118a310du); f_118a3930();
  /* 118a310d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3110 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a3113 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3117 je 0x118a312c */
  if (C.zf) goto L_118a312c;
  /* 118a3119 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a311c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a3121 push eax */
  push32((uint32_t)(EAX));
  /* 118a3122 call dword ptr [0x118c62f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62f8))), 0x118a3128u);
  /* 118a3128 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a312a jne 0x118a3133 */
  if (!C.zf) goto L_118a3133;
L_118a312c:;
  /* 118a312c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a312e jmp 0x118a31dc */
  goto L_118a31dc;
L_118a3133:;
  /* 118a3133 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a3135 mov ecx, dword ptr [0x118c3a24] */
  ECX = (r32((uint32_t)(0x118c3a24)));
  /* 118a313b push ecx */
  push32((uint32_t)(ECX));
  /* 118a313c call dword ptr [0x118c6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6308))), 0x118a3142u);
  /* 118a3142 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3144 jne 0x118a314d */
  if (!C.zf) goto L_118a314d;
  /* 118a3146 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a3148 jmp 0x118a31dc */
  goto L_118a31dc;
L_118a314d:;
  /* 118a314d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3151 je 0x118a3178 */
  if (C.zf) goto L_118a3178;
  /* 118a3153 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a3156 mov ax, word ptr [0x118c3a24] */
  AX = (r16((uint32_t)(0x118c3a24)));
  /* 118a315c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 118a315f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a3162 mov dx, word ptr [0x118c3a40] */
  DX = (r16((uint32_t)(0x118c3a40)));
  /* 118a3169 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 118a316d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a3170 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 118a3174 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_118a3178:;
  /* 118a3178 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a317c je 0x118a31d7 */
  if (C.zf) goto L_118a31d7;
  /* 118a317e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118a3180 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a3183 push edx */
  push32((uint32_t)(EDX));
  /* 118a3184 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 118a3189 mov eax, dword ptr [0x118c3a24] */
  EAX = (r32((uint32_t)(0x118c3a24)));
  /* 118a318e push eax */
  push32((uint32_t)(EAX));
  /* 118a318f call dword ptr [0x118c3a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c3a44))), 0x118a3195u);
  /* 118a3195 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3197 jne 0x118a319d */
  if (!C.zf) goto L_118a319d;
  /* 118a3199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a319b jmp 0x118a31dc */
  goto L_118a31dc;
L_118a319d:;
  /* 118a319d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118a319f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a31a2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a31a5 push ecx */
  push32((uint32_t)(ECX));
  /* 118a31a6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 118a31ab mov edx, dword ptr [0x118c3a40] */
  EDX = (r32((uint32_t)(0x118c3a40)));
  /* 118a31b1 push edx */
  push32((uint32_t)(EDX));
  /* 118a31b2 call dword ptr [0x118c3a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c3a44))), 0x118a31b8u);
  /* 118a31b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a31ba jne 0x118a31c0 */
  if (!C.zf) goto L_118a31c0;
  /* 118a31bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a31be jmp 0x118a31dc */
  goto L_118a31dc;
L_118a31c0:;
  /* 118a31c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 118a31c2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a31c5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a31ca push eax */
  push32((uint32_t)(EAX));
  /* 118a31cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a31ce push ecx */
  push32((uint32_t)(ECX));
  /* 118a31cf call 0x11899d40 */
  push32(0x118a31d4u); f_11899d40();
  /* 118a31d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a31d7:;
  /* 118a31d7 mov eax, 1 */
  EAX = (0x1u);
L_118a31dc:;
  /* 118a31dc mov esp, ebp */
  ESP = (EBP);
  /* 118a31de pop ebp */
  EBP = (pop32());
  /* 118a31df ret  */
  ESPCHK(0x118a2fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_100131e0 @ 0x118a31e0 (130 bytes, 47 insns) */
void f_118a31e0(void) {
  FTRACE(0x118a31e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a31e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a31e1 mov ebp, esp */
  EBP = (ESP);
  /* 118a31e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a31e6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 118a31ed mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_118a31f4:;
  /* 118a31f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a31f7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a31fa jg 0x118a325e */
  if ((!C.zf&&C.sf==C.of)) goto L_118a325e;
  /* 118a31fc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3200 je 0x118a325e */
  if (C.zf) goto L_118a325e;
  /* 118a3202 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a3205 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3208 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a3209 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a320b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118a320d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a3210 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a3213 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3216 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 118a3219 push eax */
  push32((uint32_t)(EAX));
  /* 118a321a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a321d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a321f push edx */
  push32((uint32_t)(EDX));
  /* 118a3220 call 0x118a58d0 */
  push32(0x118a3225u); f_118a58d0();
  /* 118a3225 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3228 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a322b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a322f jne 0x118a3242 */
  if (!C.zf) goto L_118a3242;
  /* 118a3231 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a3234 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3237 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 118a323b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a323e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118a3240 jmp 0x118a325c */
  goto L_118a325c;
L_118a3242:;
  /* 118a3242 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3246 jge 0x118a3253 */
  if ((C.sf==C.of)) goto L_118a3253;
  /* 118a3248 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a324b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a324e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 118a3251 jmp 0x118a325c */
  goto L_118a325c;
L_118a3253:;
  /* 118a3253 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a3256 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3259 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_118a325c:;
  /* 118a325c jmp 0x118a31f4 */
  goto L_118a31f4;
L_118a325e:;
  /* 118a325e mov esp, ebp */
  ESP = (EBP);
  /* 118a3260 pop ebp */
  EBP = (pop32());
  /* 118a3261 ret  */
  ESPCHK(0x118a31e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013270 @ 0x118a3270 (186 bytes, 50 insns) */
void f_118a3270(void) {
  FTRACE(0x118a3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3270 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3271 mov ebp, esp */
  EBP = (ESP);
  /* 118a3273 push ecx */
  push32((uint32_t)(ECX));
  /* 118a3274 mov eax, dword ptr [0x118c3a34] */
  EAX = (r32((uint32_t)(0x118c3a34)));
  /* 118a3279 push eax */
  push32((uint32_t)(EAX));
  /* 118a327a call 0x1189a030 */
  push32(0x118a327fu); f_1189a030();
  /* 118a327f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3282 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a3284 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3287 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 118a328a mov dword ptr [0x118c3a30], ecx */
  w32((uint32_t)(0x118c3a30), (ECX));
  /* 118a3290 mov edx, dword ptr [0x118c3a38] */
  EDX = (r32((uint32_t)(0x118c3a38)));
  /* 118a3296 push edx */
  push32((uint32_t)(EDX));
  /* 118a3297 call 0x1189a030 */
  push32(0x118a329cu); f_1189a030();
  /* 118a329c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a329f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a32a1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a32a4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 118a32a7 mov dword ptr [0x118c3a28], ecx */
  w32((uint32_t)(0x118c3a28), (ECX));
  /* 118a32ad mov dword ptr [0x118c3a24], 0 */
  w32((uint32_t)(0x118c3a24), (0x0u));
  /* 118a32b7 cmp dword ptr [0x118c3a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a32be je 0x118a32c9 */
  if (C.zf) goto L_118a32c9;
  /* 118a32c0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 118a32c7 jmp 0x118a32db */
  goto L_118a32db;
L_118a32c9:;
  /* 118a32c9 mov edx, dword ptr [0x118c3a34] */
  EDX = (r32((uint32_t)(0x118c3a34)));
  /* 118a32cf push edx */
  push32((uint32_t)(EDX));
  /* 118a32d0 call 0x118a3d10 */
  push32(0x118a32d5u); f_118a3d10();
  /* 118a32d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a32d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118a32db:;
  /* 118a32db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a32de mov dword ptr [0x118c3a2c], eax */
  w32((uint32_t)(0x118c3a2c), (EAX));
  /* 118a32e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a32e5 push 0x118a3330 */
  push32((uint32_t)(0x118a3330u));
  /* 118a32ea call dword ptr [0x118c62fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62fc))), 0x118a32f0u);
  /* 118a32f0 mov ecx, dword ptr [0x118c3a3c] */
  ECX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a32f6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 118a32fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a32fe je 0x118a331c */
  if (C.zf) goto L_118a331c;
  /* 118a3300 mov edx, dword ptr [0x118c3a3c] */
  EDX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a3306 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 118a330c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a330e je 0x118a331c */
  if (C.zf) goto L_118a331c;
  /* 118a3310 mov eax, dword ptr [0x118c3a3c] */
  EAX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a3315 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 118a3318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a331a jne 0x118a3326 */
  if (!C.zf) goto L_118a3326;
L_118a331c:;
  /* 118a331c mov dword ptr [0x118c3a3c], 0 */
  w32((uint32_t)(0x118c3a3c), (0x0u));
L_118a3326:;
  /* 118a3326 mov esp, ebp */
  ESP = (EBP);
  /* 118a3328 pop ebp */
  EBP = (pop32());
  /* 118a3329 ret  */
  ESPCHK(0x118a3270u, _esp0);
  ESP += 4; return;
}

/* FUN_10013330 @ 0x118a3330 (804 bytes, 220 insns) */
void f_118a3330(void) {
  FTRACE(0x118a3330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3330 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3331 mov ebp, esp */
  EBP = (ESP);
  /* 118a3333 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3339 push eax */
  push32((uint32_t)(EAX));
  /* 118a333a call 0x118a3c90 */
  push32(0x118a333fu); f_118a3c90();
  /* 118a333f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3342 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 118a3345 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 118a3347 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 118a334a push ecx */
  push32((uint32_t)(ECX));
  /* 118a334b mov edx, dword ptr [0x118c3a28] */
  EDX = (r32((uint32_t)(0x118c3a28)));
  /* 118a3351 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a3353 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3355 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 118a335b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3361 push edx */
  push32((uint32_t)(EDX));
  /* 118a3362 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a3365 push eax */
  push32((uint32_t)(EAX));
  /* 118a3366 call dword ptr [0x118c3a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c3a44))), 0x118a336cu);
  /* 118a336c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a336e jne 0x118a3384 */
  if (!C.zf) goto L_118a3384;
  /* 118a3370 mov dword ptr [0x118c3a3c], 0 */
  w32((uint32_t)(0x118c3a3c), (0x0u));
  /* 118a337a mov eax, 1 */
  EAX = (0x1u);
  /* 118a337f jmp 0x118a364e */
  goto L_118a364e;
L_118a3384:;
  /* 118a3384 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 118a3387 push ecx */
  push32((uint32_t)(ECX));
  /* 118a3388 mov edx, dword ptr [0x118c3a38] */
  EDX = (r32((uint32_t)(0x118c3a38)));
  /* 118a338e push edx */
  push32((uint32_t)(EDX));
  /* 118a338f call 0x118a58d0 */
  push32(0x118a3394u); f_118a58d0();
  /* 118a3394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3397 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3399 jne 0x118a34bf */
  if (!C.zf) goto L_118a34bf;
  /* 118a339f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 118a33a1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 118a33a4 push eax */
  push32((uint32_t)(EAX));
  /* 118a33a5 mov ecx, dword ptr [0x118c3a30] */
  ECX = (r32((uint32_t)(0x118c3a30)));
  /* 118a33ab neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a33ad sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a33af and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 118a33b5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a33bb push ecx */
  push32((uint32_t)(ECX));
  /* 118a33bc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a33bf push edx */
  push32((uint32_t)(EDX));
  /* 118a33c0 call dword ptr [0x118c3a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c3a44))), 0x118a33c6u);
  /* 118a33c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a33c8 jne 0x118a33de */
  if (!C.zf) goto L_118a33de;
  /* 118a33ca mov dword ptr [0x118c3a3c], 0 */
  w32((uint32_t)(0x118c3a3c), (0x0u));
  /* 118a33d4 mov eax, 1 */
  EAX = (0x1u);
  /* 118a33d9 jmp 0x118a364e */
  goto L_118a364e;
L_118a33de:;
  /* 118a33de lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 118a33e1 push eax */
  push32((uint32_t)(EAX));
  /* 118a33e2 mov ecx, dword ptr [0x118c3a34] */
  ECX = (r32((uint32_t)(0x118c3a34)));
  /* 118a33e8 push ecx */
  push32((uint32_t)(ECX));
  /* 118a33e9 call 0x118a58d0 */
  push32(0x118a33eeu); f_118a58d0();
  /* 118a33ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a33f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a33f3 jne 0x118a3420 */
  if (!C.zf) goto L_118a3420;
  /* 118a33f5 mov edx, dword ptr [0x118c3a3c] */
  EDX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a33fb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 118a3401 mov dword ptr [0x118c3a3c], edx */
  w32((uint32_t)(0x118c3a3c), (EDX));
  /* 118a3407 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a340a mov dword ptr [0x118c3a40], eax */
  w32((uint32_t)(0x118c3a40), (EAX));
  /* 118a340f mov ecx, dword ptr [0x118c3a40] */
  ECX = (r32((uint32_t)(0x118c3a40)));
  /* 118a3415 mov dword ptr [0x118c3a24], ecx */
  w32((uint32_t)(0x118c3a24), (ECX));
  /* 118a341b jmp 0x118a34bf */
  goto L_118a34bf;
L_118a3420:;
  /* 118a3420 mov edx, dword ptr [0x118c3a3c] */
  EDX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a3426 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 118a3429 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a342b jne 0x118a34bf */
  if (!C.zf) goto L_118a34bf;
  /* 118a3431 cmp dword ptr [0x118c3a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3438 je 0x118a348d */
  if (C.zf) goto L_118a348d;
  /* 118a343a mov eax, dword ptr [0x118c3a2c] */
  EAX = (r32((uint32_t)(0x118c3a2c)));
  /* 118a343f push eax */
  push32((uint32_t)(EAX));
  /* 118a3440 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 118a3443 push ecx */
  push32((uint32_t)(ECX));
  /* 118a3444 mov edx, dword ptr [0x118c3a34] */
  EDX = (r32((uint32_t)(0x118c3a34)));
  /* 118a344a push edx */
  push32((uint32_t)(EDX));
  /* 118a344b call 0x118a59a0 */
  push32(0x118a3450u); f_118a59a0();
  /* 118a3450 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3453 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3455 jne 0x118a348d */
  if (!C.zf) goto L_118a348d;
  /* 118a3457 mov eax, dword ptr [0x118c3a3c] */
  EAX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a345c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 118a345e mov dword ptr [0x118c3a3c], eax */
  w32((uint32_t)(0x118c3a3c), (EAX));
  /* 118a3463 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a3466 mov dword ptr [0x118c3a40], ecx */
  w32((uint32_t)(0x118c3a40), (ECX));
  /* 118a346c mov edx, dword ptr [0x118c3a34] */
  EDX = (r32((uint32_t)(0x118c3a34)));
  /* 118a3472 push edx */
  push32((uint32_t)(EDX));
  /* 118a3473 call 0x1189a030 */
  push32(0x118a3478u); f_1189a030();
  /* 118a3478 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a347b cmp eax, dword ptr [0x118c3a2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c3a2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3481 jne 0x118a348b */
  if (!C.zf) goto L_118a348b;
  /* 118a3483 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a3486 mov dword ptr [0x118c3a24], eax */
  w32((uint32_t)(0x118c3a24), (EAX));
L_118a348b:;
  /* 118a348b jmp 0x118a34bf */
  goto L_118a34bf;
L_118a348d:;
  /* 118a348d mov ecx, dword ptr [0x118c3a3c] */
  ECX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a3493 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 118a3496 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a3498 jne 0x118a34bf */
  if (!C.zf) goto L_118a34bf;
  /* 118a349a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a349d push edx */
  push32((uint32_t)(EDX));
  /* 118a349e call 0x118a39d0 */
  push32(0x118a34a3u); f_118a39d0();
  /* 118a34a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a34a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a34a8 je 0x118a34bf */
  if (C.zf) goto L_118a34bf;
  /* 118a34aa mov eax, dword ptr [0x118c3a3c] */
  EAX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a34af or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 118a34b1 mov dword ptr [0x118c3a3c], eax */
  w32((uint32_t)(0x118c3a3c), (EAX));
  /* 118a34b6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a34b9 mov dword ptr [0x118c3a40], ecx */
  w32((uint32_t)(0x118c3a40), (ECX));
L_118a34bf:;
  /* 118a34bf mov edx, dword ptr [0x118c3a3c] */
  EDX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a34c5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 118a34cb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a34d1 je 0x118a3641 */
  if (C.zf) goto L_118a3641;
  /* 118a34d7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 118a34d9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 118a34dc push eax */
  push32((uint32_t)(EAX));
  /* 118a34dd mov ecx, dword ptr [0x118c3a30] */
  ECX = (r32((uint32_t)(0x118c3a30)));
  /* 118a34e3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a34e5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a34e7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 118a34ed add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a34f3 push ecx */
  push32((uint32_t)(ECX));
  /* 118a34f4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a34f7 push edx */
  push32((uint32_t)(EDX));
  /* 118a34f8 call dword ptr [0x118c3a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c3a44))), 0x118a34feu);
  /* 118a34fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3500 jne 0x118a3516 */
  if (!C.zf) goto L_118a3516;
  /* 118a3502 mov dword ptr [0x118c3a3c], 0 */
  w32((uint32_t)(0x118c3a3c), (0x0u));
  /* 118a350c mov eax, 1 */
  EAX = (0x1u);
  /* 118a3511 jmp 0x118a364e */
  goto L_118a364e;
L_118a3516:;
  /* 118a3516 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 118a3519 push eax */
  push32((uint32_t)(EAX));
  /* 118a351a mov ecx, dword ptr [0x118c3a34] */
  ECX = (r32((uint32_t)(0x118c3a34)));
  /* 118a3520 push ecx */
  push32((uint32_t)(ECX));
  /* 118a3521 call 0x118a58d0 */
  push32(0x118a3526u); f_118a58d0();
  /* 118a3526 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a352b jne 0x118a35e0 */
  if (!C.zf) goto L_118a35e0;
  /* 118a3531 mov edx, dword ptr [0x118c3a3c] */
  EDX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a3537 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 118a353a mov dword ptr [0x118c3a3c], edx */
  w32((uint32_t)(0x118c3a3c), (EDX));
  /* 118a3540 cmp dword ptr [0x118c3a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3547 je 0x118a356a */
  if (C.zf) goto L_118a356a;
  /* 118a3549 mov eax, dword ptr [0x118c3a3c] */
  EAX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a354e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 118a3551 mov dword ptr [0x118c3a3c], eax */
  w32((uint32_t)(0x118c3a3c), (EAX));
  /* 118a3556 cmp dword ptr [0x118c3a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a355d jne 0x118a3568 */
  if (!C.zf) goto L_118a3568;
  /* 118a355f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a3562 mov dword ptr [0x118c3a24], ecx */
  w32((uint32_t)(0x118c3a24), (ECX));
L_118a3568:;
  /* 118a3568 jmp 0x118a35de */
  goto L_118a35de;
L_118a356a:;
  /* 118a356a cmp dword ptr [0x118c3a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3571 je 0x118a35bf */
  if (C.zf) goto L_118a35bf;
  /* 118a3573 mov edx, dword ptr [0x118c3a34] */
  EDX = (r32((uint32_t)(0x118c3a34)));
  /* 118a3579 push edx */
  push32((uint32_t)(EDX));
  /* 118a357a call 0x1189a030 */
  push32(0x118a357fu); f_1189a030();
  /* 118a357f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3582 cmp eax, dword ptr [0x118c3a2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c3a2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3588 jne 0x118a35bf */
  if (!C.zf) goto L_118a35bf;
  /* 118a358a push 1 */
  push32((uint32_t)(0x1u));
  /* 118a358c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a358f push eax */
  push32((uint32_t)(EAX));
  /* 118a3590 call 0x118a3a20 */
  push32(0x118a3595u); f_118a3a20();
  /* 118a3595 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a359a je 0x118a35bd */
  if (C.zf) goto L_118a35bd;
  /* 118a359c mov ecx, dword ptr [0x118c3a3c] */
  ECX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a35a2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 118a35a5 mov dword ptr [0x118c3a3c], ecx */
  w32((uint32_t)(0x118c3a3c), (ECX));
  /* 118a35ab cmp dword ptr [0x118c3a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a35b2 jne 0x118a35bd */
  if (!C.zf) goto L_118a35bd;
  /* 118a35b4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a35b7 mov dword ptr [0x118c3a24], edx */
  w32((uint32_t)(0x118c3a24), (EDX));
L_118a35bd:;
  /* 118a35bd jmp 0x118a35de */
  goto L_118a35de;
L_118a35bf:;
  /* 118a35bf mov eax, dword ptr [0x118c3a3c] */
  EAX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a35c4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 118a35c7 mov dword ptr [0x118c3a3c], eax */
  w32((uint32_t)(0x118c3a3c), (EAX));
  /* 118a35cc cmp dword ptr [0x118c3a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a35d3 jne 0x118a35de */
  if (!C.zf) goto L_118a35de;
  /* 118a35d5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a35d8 mov dword ptr [0x118c3a24], ecx */
  w32((uint32_t)(0x118c3a24), (ECX));
L_118a35de:;
  /* 118a35de jmp 0x118a3641 */
  goto L_118a3641;
L_118a35e0:;
  /* 118a35e0 cmp dword ptr [0x118c3a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a35e7 jne 0x118a3641 */
  if (!C.zf) goto L_118a3641;
  /* 118a35e9 cmp dword ptr [0x118c3a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a35f0 je 0x118a3641 */
  if (C.zf) goto L_118a3641;
  /* 118a35f2 mov edx, dword ptr [0x118c3a2c] */
  EDX = (r32((uint32_t)(0x118c3a2c)));
  /* 118a35f8 push edx */
  push32((uint32_t)(EDX));
  /* 118a35f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 118a35fc push eax */
  push32((uint32_t)(EAX));
  /* 118a35fd mov ecx, dword ptr [0x118c3a34] */
  ECX = (r32((uint32_t)(0x118c3a34)));
  /* 118a3603 push ecx */
  push32((uint32_t)(ECX));
  /* 118a3604 call 0x118a59a0 */
  push32(0x118a3609u); f_118a59a0();
  /* 118a3609 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a360c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a360e jne 0x118a3641 */
  if (!C.zf) goto L_118a3641;
  /* 118a3610 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a3612 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a3615 push edx */
  push32((uint32_t)(EDX));
  /* 118a3616 call 0x118a3a20 */
  push32(0x118a361bu); f_118a3a20();
  /* 118a361b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a361e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3620 je 0x118a3641 */
  if (C.zf) goto L_118a3641;
  /* 118a3622 mov eax, dword ptr [0x118c3a3c] */
  EAX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a3627 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 118a362a mov dword ptr [0x118c3a3c], eax */
  w32((uint32_t)(0x118c3a3c), (EAX));
  /* 118a362f cmp dword ptr [0x118c3a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3636 jne 0x118a3641 */
  if (!C.zf) goto L_118a3641;
  /* 118a3638 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a363b mov dword ptr [0x118c3a24], ecx */
  w32((uint32_t)(0x118c3a24), (ECX));
L_118a3641:;
  /* 118a3641 mov eax, dword ptr [0x118c3a3c] */
  EAX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a3646 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 118a3649 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a364b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a364d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_118a364e:;
  /* 118a364e mov esp, ebp */
  ESP = (EBP);
  /* 118a3650 pop ebp */
  EBP = (pop32());
  /* 118a3651 ret 4 */
  ESPCHK(0x118a3330u, _esp0);
  ESP += 8; return;
}

/* FUN_10013660 @ 0x118a3660 (116 bytes, 33 insns) */
void f_118a3660(void) {
  FTRACE(0x118a3660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3660 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3661 mov ebp, esp */
  EBP = (ESP);
  /* 118a3663 push ecx */
  push32((uint32_t)(ECX));
  /* 118a3664 mov eax, dword ptr [0x118c3a34] */
  EAX = (r32((uint32_t)(0x118c3a34)));
  /* 118a3669 push eax */
  push32((uint32_t)(EAX));
  /* 118a366a call 0x1189a030 */
  push32(0x118a366fu); f_1189a030();
  /* 118a366f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3672 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a3674 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3677 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 118a367a mov dword ptr [0x118c3a30], ecx */
  w32((uint32_t)(0x118c3a30), (ECX));
  /* 118a3680 cmp dword ptr [0x118c3a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3687 je 0x118a3692 */
  if (C.zf) goto L_118a3692;
  /* 118a3689 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 118a3690 jmp 0x118a36a4 */
  goto L_118a36a4;
L_118a3692:;
  /* 118a3692 mov edx, dword ptr [0x118c3a34] */
  EDX = (r32((uint32_t)(0x118c3a34)));
  /* 118a3698 push edx */
  push32((uint32_t)(EDX));
  /* 118a3699 call 0x118a3d10 */
  push32(0x118a369eu); f_118a3d10();
  /* 118a369e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a36a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118a36a4:;
  /* 118a36a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a36a7 mov dword ptr [0x118c3a2c], eax */
  w32((uint32_t)(0x118c3a2c), (EAX));
  /* 118a36ac push 1 */
  push32((uint32_t)(0x1u));
  /* 118a36ae push 0x118a36e0 */
  push32((uint32_t)(0x118a36e0u));
  /* 118a36b3 call dword ptr [0x118c62fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62fc))), 0x118a36b9u);
  /* 118a36b9 mov ecx, dword ptr [0x118c3a3c] */
  ECX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a36bf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 118a36c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a36c4 jne 0x118a36d0 */
  if (!C.zf) goto L_118a36d0;
  /* 118a36c6 mov dword ptr [0x118c3a3c], 0 */
  w32((uint32_t)(0x118c3a3c), (0x0u));
L_118a36d0:;
  /* 118a36d0 mov esp, ebp */
  ESP = (EBP);
  /* 118a36d2 pop ebp */
  EBP = (pop32());
  /* 118a36d3 ret  */
  ESPCHK(0x118a3660u, _esp0);
  ESP += 4; return;
}

/* FUN_100136e0 @ 0x118a36e0 (287 bytes, 86 insns) */
void f_118a36e0(void) {
  FTRACE(0x118a36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a36e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a36e1 mov ebp, esp */
  EBP = (ESP);
  /* 118a36e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a36e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a36e9 push eax */
  push32((uint32_t)(EAX));
  /* 118a36ea call 0x118a3c90 */
  push32(0x118a36efu); f_118a3c90();
  /* 118a36ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a36f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 118a36f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 118a36f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 118a36fa push ecx */
  push32((uint32_t)(ECX));
  /* 118a36fb mov edx, dword ptr [0x118c3a30] */
  EDX = (r32((uint32_t)(0x118c3a30)));
  /* 118a3701 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a3703 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3705 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 118a370b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3711 push edx */
  push32((uint32_t)(EDX));
  /* 118a3712 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a3715 push eax */
  push32((uint32_t)(EAX));
  /* 118a3716 call dword ptr [0x118c3a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c3a44))), 0x118a371cu);
  /* 118a371c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a371e jne 0x118a3734 */
  if (!C.zf) goto L_118a3734;
  /* 118a3720 mov dword ptr [0x118c3a3c], 0 */
  w32((uint32_t)(0x118c3a3c), (0x0u));
  /* 118a372a mov eax, 1 */
  EAX = (0x1u);
  /* 118a372f jmp 0x118a37f9 */
  goto L_118a37f9;
L_118a3734:;
  /* 118a3734 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 118a3737 push ecx */
  push32((uint32_t)(ECX));
  /* 118a3738 mov edx, dword ptr [0x118c3a34] */
  EDX = (r32((uint32_t)(0x118c3a34)));
  /* 118a373e push edx */
  push32((uint32_t)(EDX));
  /* 118a373f call 0x118a58d0 */
  push32(0x118a3744u); f_118a58d0();
  /* 118a3744 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3749 jne 0x118a3789 */
  if (!C.zf) goto L_118a3789;
  /* 118a374b cmp dword ptr [0x118c3a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3752 jne 0x118a3766 */
  if (!C.zf) goto L_118a3766;
  /* 118a3754 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a3756 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a3759 push eax */
  push32((uint32_t)(EAX));
  /* 118a375a call 0x118a3a20 */
  push32(0x118a375fu); f_118a3a20();
  /* 118a375f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3762 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3764 je 0x118a3787 */
  if (C.zf) goto L_118a3787;
L_118a3766:;
  /* 118a3766 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a3769 mov dword ptr [0x118c3a40], ecx */
  w32((uint32_t)(0x118c3a40), (ECX));
  /* 118a376f mov edx, dword ptr [0x118c3a40] */
  EDX = (r32((uint32_t)(0x118c3a40)));
  /* 118a3775 mov dword ptr [0x118c3a24], edx */
  w32((uint32_t)(0x118c3a24), (EDX));
  /* 118a377b mov eax, dword ptr [0x118c3a3c] */
  EAX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a3780 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 118a3782 mov dword ptr [0x118c3a3c], eax */
  w32((uint32_t)(0x118c3a3c), (EAX));
L_118a3787:;
  /* 118a3787 jmp 0x118a37ec */
  goto L_118a37ec;
L_118a3789:;
  /* 118a3789 cmp dword ptr [0x118c3a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3790 jne 0x118a37ec */
  if (!C.zf) goto L_118a37ec;
  /* 118a3792 cmp dword ptr [0x118c3a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3799 je 0x118a37ec */
  if (C.zf) goto L_118a37ec;
  /* 118a379b mov ecx, dword ptr [0x118c3a2c] */
  ECX = (r32((uint32_t)(0x118c3a2c)));
  /* 118a37a1 push ecx */
  push32((uint32_t)(ECX));
  /* 118a37a2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 118a37a5 push edx */
  push32((uint32_t)(EDX));
  /* 118a37a6 mov eax, dword ptr [0x118c3a34] */
  EAX = (r32((uint32_t)(0x118c3a34)));
  /* 118a37ab push eax */
  push32((uint32_t)(EAX));
  /* 118a37ac call 0x118a59a0 */
  push32(0x118a37b1u); f_118a59a0();
  /* 118a37b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a37b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a37b6 jne 0x118a37ec */
  if (!C.zf) goto L_118a37ec;
  /* 118a37b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a37ba mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a37bd push ecx */
  push32((uint32_t)(ECX));
  /* 118a37be call 0x118a3a20 */
  push32(0x118a37c3u); f_118a3a20();
  /* 118a37c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a37c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a37c8 je 0x118a37ec */
  if (C.zf) goto L_118a37ec;
  /* 118a37ca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a37cd mov dword ptr [0x118c3a40], edx */
  w32((uint32_t)(0x118c3a40), (EDX));
  /* 118a37d3 mov eax, dword ptr [0x118c3a40] */
  EAX = (r32((uint32_t)(0x118c3a40)));
  /* 118a37d8 mov dword ptr [0x118c3a24], eax */
  w32((uint32_t)(0x118c3a24), (EAX));
  /* 118a37dd mov ecx, dword ptr [0x118c3a3c] */
  ECX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a37e3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 118a37e6 mov dword ptr [0x118c3a3c], ecx */
  w32((uint32_t)(0x118c3a3c), (ECX));
L_118a37ec:;
  /* 118a37ec mov eax, dword ptr [0x118c3a3c] */
  EAX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a37f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 118a37f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a37f6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a37f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_118a37f9:;
  /* 118a37f9 mov esp, ebp */
  ESP = (EBP);
  /* 118a37fb pop ebp */
  EBP = (pop32());
  /* 118a37fc ret 4 */
  ESPCHK(0x118a36e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10013800 @ 0x118a3800 (69 bytes, 20 insns) */
void f_118a3800(void) {
  FTRACE(0x118a3800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3800 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3801 mov ebp, esp */
  EBP = (ESP);
  /* 118a3803 mov eax, dword ptr [0x118c3a38] */
  EAX = (r32((uint32_t)(0x118c3a38)));
  /* 118a3808 push eax */
  push32((uint32_t)(EAX));
  /* 118a3809 call 0x1189a030 */
  push32(0x118a380eu); f_1189a030();
  /* 118a380e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3811 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a3813 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3816 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 118a3819 mov dword ptr [0x118c3a28], ecx */
  w32((uint32_t)(0x118c3a28), (ECX));
  /* 118a381f push 1 */
  push32((uint32_t)(0x1u));
  /* 118a3821 push 0x118a3850 */
  push32((uint32_t)(0x118a3850u));
  /* 118a3826 call dword ptr [0x118c62fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62fc))), 0x118a382cu);
  /* 118a382c mov edx, dword ptr [0x118c3a3c] */
  EDX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a3832 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 118a3835 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a3837 jne 0x118a3843 */
  if (!C.zf) goto L_118a3843;
  /* 118a3839 mov dword ptr [0x118c3a3c], 0 */
  w32((uint32_t)(0x118c3a3c), (0x0u));
L_118a3843:;
  /* 118a3843 pop ebp */
  EBP = (pop32());
  /* 118a3844 ret  */
  ESPCHK(0x118a3800u, _esp0);
  ESP += 4; return;
}

/* FUN_10013850 @ 0x118a3850 (172 bytes, 54 insns) */
void f_118a3850(void) {
  FTRACE(0x118a3850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3850 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3851 mov ebp, esp */
  EBP = (ESP);
  /* 118a3853 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3859 push eax */
  push32((uint32_t)(EAX));
  /* 118a385a call 0x118a3c90 */
  push32(0x118a385fu); f_118a3c90();
  /* 118a385f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3862 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 118a3865 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 118a3867 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 118a386a push ecx */
  push32((uint32_t)(ECX));
  /* 118a386b mov edx, dword ptr [0x118c3a28] */
  EDX = (r32((uint32_t)(0x118c3a28)));
  /* 118a3871 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a3873 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3875 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 118a387b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3881 push edx */
  push32((uint32_t)(EDX));
  /* 118a3882 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a3885 push eax */
  push32((uint32_t)(EAX));
  /* 118a3886 call dword ptr [0x118c3a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c3a44))), 0x118a388cu);
  /* 118a388c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a388e jne 0x118a38a1 */
  if (!C.zf) goto L_118a38a1;
  /* 118a3890 mov dword ptr [0x118c3a3c], 0 */
  w32((uint32_t)(0x118c3a3c), (0x0u));
  /* 118a389a mov eax, 1 */
  EAX = (0x1u);
  /* 118a389f jmp 0x118a38f6 */
  goto L_118a38f6;
L_118a38a1:;
  /* 118a38a1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 118a38a4 push ecx */
  push32((uint32_t)(ECX));
  /* 118a38a5 mov edx, dword ptr [0x118c3a38] */
  EDX = (r32((uint32_t)(0x118c3a38)));
  /* 118a38ab push edx */
  push32((uint32_t)(EDX));
  /* 118a38ac call 0x118a58d0 */
  push32(0x118a38b1u); f_118a58d0();
  /* 118a38b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a38b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a38b6 jne 0x118a38e9 */
  if (!C.zf) goto L_118a38e9;
  /* 118a38b8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a38bb push eax */
  push32((uint32_t)(EAX));
  /* 118a38bc call 0x118a39d0 */
  push32(0x118a38c1u); f_118a39d0();
  /* 118a38c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a38c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a38c6 je 0x118a38e9 */
  if (C.zf) goto L_118a38e9;
  /* 118a38c8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118a38cb mov dword ptr [0x118c3a40], ecx */
  w32((uint32_t)(0x118c3a40), (ECX));
  /* 118a38d1 mov edx, dword ptr [0x118c3a40] */
  EDX = (r32((uint32_t)(0x118c3a40)));
  /* 118a38d7 mov dword ptr [0x118c3a24], edx */
  w32((uint32_t)(0x118c3a24), (EDX));
  /* 118a38dd mov eax, dword ptr [0x118c3a3c] */
  EAX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a38e2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 118a38e4 mov dword ptr [0x118c3a3c], eax */
  w32((uint32_t)(0x118c3a3c), (EAX));
L_118a38e9:;
  /* 118a38e9 mov eax, dword ptr [0x118c3a3c] */
  EAX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a38ee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 118a38f1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a38f3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a38f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_118a38f6:;
  /* 118a38f6 mov esp, ebp */
  ESP = (EBP);
  /* 118a38f8 pop ebp */
  EBP = (pop32());
  /* 118a38f9 ret 4 */
  ESPCHK(0x118a3850u, _esp0);
  ESP += 8; return;
}

/* FUN_10013900 @ 0x118a3900 (43 bytes, 11 insns) */
void f_118a3900(void) {
  FTRACE(0x118a3900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3900 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3901 mov ebp, esp */
  EBP = (ESP);
  /* 118a3903 mov eax, dword ptr [0x118c3a3c] */
  EAX = (r32((uint32_t)(0x118c3a3c)));
  /* 118a3908 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 118a390d mov dword ptr [0x118c3a3c], eax */
  w32((uint32_t)(0x118c3a3c), (EAX));
  /* 118a3912 call dword ptr [0x118c62ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62ec))), 0x118a3918u);
  /* 118a3918 mov dword ptr [0x118c3a40], eax */
  w32((uint32_t)(0x118c3a40), (EAX));
  /* 118a391d mov ecx, dword ptr [0x118c3a40] */
  ECX = (r32((uint32_t)(0x118c3a40)));
  /* 118a3923 mov dword ptr [0x118c3a24], ecx */
  w32((uint32_t)(0x118c3a24), (ECX));
  /* 118a3929 pop ebp */
  EBP = (pop32());
  /* 118a392a ret  */
  ESPCHK(0x118a3900u, _esp0);
  ESP += 4; return;
}

/* FUN_10013930 @ 0x118a3930 (155 bytes, 57 insns) */
void f_118a3930(void) {
  FTRACE(0x118a3930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3930 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3931 mov ebp, esp */
  EBP = (ESP);
  /* 118a3933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3936 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a393a je 0x118a395b */
  if (C.zf) goto L_118a395b;
  /* 118a393c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a393f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a3942 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a3944 je 0x118a395b */
  if (C.zf) goto L_118a395b;
  /* 118a3946 push 0x118c02b4 */
  push32((uint32_t)(0x118c02b4u));
  /* 118a394b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a394e push edx */
  push32((uint32_t)(EDX));
  /* 118a394f call 0x118a2e90 */
  push32(0x118a3954u); f_118a2e90();
  /* 118a3954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3959 jne 0x118a3983 */
  if (!C.zf) goto L_118a3983;
L_118a395b:;
  /* 118a395b push 8 */
  push32((uint32_t)(0x8u));
  /* 118a395d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 118a3960 push eax */
  push32((uint32_t)(EAX));
  /* 118a3961 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 118a3966 mov ecx, dword ptr [0x118c3a40] */
  ECX = (r32((uint32_t)(0x118c3a40)));
  /* 118a396c push ecx */
  push32((uint32_t)(ECX));
  /* 118a396d call dword ptr [0x118c3a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c3a44))), 0x118a3973u);
  /* 118a3973 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3975 jne 0x118a397b */
  if (!C.zf) goto L_118a397b;
  /* 118a3977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a3979 jmp 0x118a39c7 */
  goto L_118a39c7;
L_118a397b:;
  /* 118a397b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 118a397e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 118a3981 jmp 0x118a39bb */
  goto L_118a39bb;
L_118a3983:;
  /* 118a3983 push 0x118c02b0 */
  push32((uint32_t)(0x118c02b0u));
  /* 118a3988 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a398b push eax */
  push32((uint32_t)(EAX));
  /* 118a398c call 0x118a2e90 */
  push32(0x118a3991u); f_118a2e90();
  /* 118a3991 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3994 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3996 jne 0x118a39bb */
  if (!C.zf) goto L_118a39bb;
  /* 118a3998 push 8 */
  push32((uint32_t)(0x8u));
  /* 118a399a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 118a399d push ecx */
  push32((uint32_t)(ECX));
  /* 118a399e push 0xb */
  push32((uint32_t)(0xbu));
  /* 118a39a0 mov edx, dword ptr [0x118c3a40] */
  EDX = (r32((uint32_t)(0x118c3a40)));
  /* 118a39a6 push edx */
  push32((uint32_t)(EDX));
  /* 118a39a7 call dword ptr [0x118c3a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c3a44))), 0x118a39adu);
  /* 118a39ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a39af jne 0x118a39b5 */
  if (!C.zf) goto L_118a39b5;
  /* 118a39b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a39b3 jmp 0x118a39c7 */
  goto L_118a39c7;
L_118a39b5:;
  /* 118a39b5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 118a39b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_118a39bb:;
  /* 118a39bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a39be push ecx */
  push32((uint32_t)(ECX));
  /* 118a39bf call 0x118a5ab0 */
  push32(0x118a39c4u); f_118a5ab0();
  /* 118a39c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a39c7:;
  /* 118a39c7 mov esp, ebp */
  ESP = (EBP);
  /* 118a39c9 pop ebp */
  EBP = (pop32());
  /* 118a39ca ret  */
  ESPCHK(0x118a3930u, _esp0);
  ESP += 4; return;
}

/* FUN_100139d0 @ 0x118a39d0 (79 bytes, 26 insns) */
void f_118a39d0(void) {
  FTRACE(0x118a39d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a39d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a39d1 mov ebp, esp */
  EBP = (ESP);
  /* 118a39d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a39d6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 118a39da mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 118a39de mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118a39e5 jmp 0x118a39f0 */
  goto L_118a39f0;
L_118a39e7:;
  /* 118a39e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a39ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a39ed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_118a39f0:;
  /* 118a39f0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a39f4 jae 0x118a3a16 */
  if (!C.cf) goto L_118a3a16;
  /* 118a39f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a39f9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118a39ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a3a02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a3a04 mov cx, word ptr [eax*2 + 0x118c29c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x118c29c4)));
  /* 118a3a0c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3a0e jne 0x118a3a14 */
  if (!C.zf) goto L_118a3a14;
  /* 118a3a10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a3a12 jmp 0x118a3a1b */
  goto L_118a3a1b;
L_118a3a14:;
  /* 118a3a14 jmp 0x118a39e7 */
  goto L_118a39e7;
L_118a3a16:;
  /* 118a3a16 mov eax, 1 */
  EAX = (0x1u);
L_118a3a1b:;
  /* 118a3a1b mov esp, ebp */
  ESP = (EBP);
  /* 118a3a1d pop ebp */
  EBP = (pop32());
  /* 118a3a1e ret  */
  ESPCHK(0x118a39d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a20 @ 0x118a3a20 (135 bytes, 48 insns) */
void f_118a3a20(void) {
  FTRACE(0x118a3a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3a20 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3a21 mov ebp, esp */
  EBP = (ESP);
  /* 118a3a23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3a26 push esi */
  push32((uint32_t)(ESI));
  /* 118a3a27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3a2a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a3a2f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a3a34 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a3a39 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 118a3a3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a3a41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a3a44 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 118a3a46 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 118a3a49 push ecx */
  push32((uint32_t)(ECX));
  /* 118a3a4a push 1 */
  push32((uint32_t)(0x1u));
  /* 118a3a4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a3a4f push edx */
  push32((uint32_t)(EDX));
  /* 118a3a50 call dword ptr [0x118c3a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c3a44))), 0x118a3a56u);
  /* 118a3a56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3a58 jne 0x118a3a5e */
  if (!C.zf) goto L_118a3a5e;
  /* 118a3a5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a3a5c jmp 0x118a3aa2 */
  goto L_118a3aa2;
L_118a3a5e:;
  /* 118a3a5e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 118a3a61 push eax */
  push32((uint32_t)(EAX));
  /* 118a3a62 call 0x118a3c90 */
  push32(0x118a3a67u); f_118a3c90();
  /* 118a3a67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3a6a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3a6d je 0x118a3a9d */
  if (C.zf) goto L_118a3a9d;
  /* 118a3a6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3a73 je 0x118a3a9d */
  if (C.zf) goto L_118a3a9d;
  /* 118a3a75 mov ecx, dword ptr [0x118c3a34] */
  ECX = (r32((uint32_t)(0x118c3a34)));
  /* 118a3a7b push ecx */
  push32((uint32_t)(ECX));
  /* 118a3a7c call 0x118a3d10 */
  push32(0x118a3a81u); f_118a3d10();
  /* 118a3a81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3a84 mov esi, eax */
  ESI = (EAX);
  /* 118a3a86 mov edx, dword ptr [0x118c3a34] */
  EDX = (r32((uint32_t)(0x118c3a34)));
  /* 118a3a8c push edx */
  push32((uint32_t)(EDX));
  /* 118a3a8d call 0x1189a030 */
  push32(0x118a3a92u); f_1189a030();
  /* 118a3a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3a95 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3a97 jne 0x118a3a9d */
  if (!C.zf) goto L_118a3a9d;
  /* 118a3a99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a3a9b jmp 0x118a3aa2 */
  goto L_118a3aa2;
L_118a3a9d:;
  /* 118a3a9d mov eax, 1 */
  EAX = (0x1u);
L_118a3aa2:;
  /* 118a3aa2 pop esi */
  ESI = (pop32());
  /* 118a3aa3 mov esp, ebp */
  ESP = (EBP);
  /* 118a3aa5 pop ebp */
  EBP = (pop32());
  /* 118a3aa6 ret  */
  ESPCHK(0x118a3a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ab0 @ 0x118a3ab0 (77 bytes, 18 insns) */
void f_118a3ab0(void) {
  FTRACE(0x118a3ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3ab1 mov ebp, esp */
  EBP = (ESP);
  /* 118a3ab3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3ab9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 118a3ac3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 118a3ac9 push eax */
  push32((uint32_t)(EAX));
  /* 118a3aca call dword ptr [0x118c62e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62e8))), 0x118a3ad0u);
  /* 118a3ad0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3ad2 je 0x118a3ae9 */
  if (C.zf) goto L_118a3ae9;
  /* 118a3ad4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3adb jne 0x118a3ae9 */
  if (!C.zf) goto L_118a3ae9;
  /* 118a3add mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 118a3ae7 jmp 0x118a3af3 */
  goto L_118a3af3;
L_118a3ae9:;
  /* 118a3ae9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_118a3af3:;
  /* 118a3af3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 118a3af9 mov esp, ebp */
  ESP = (EBP);
  /* 118a3afb pop ebp */
  EBP = (pop32());
  /* 118a3afc ret  */
  ESPCHK(0x118a3ab0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x118a3b00 (388 bytes, 118 insns) */
void f_118a3b00(void) {
  FTRACE(0x118a3b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3b00 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3b01 mov ebp, esp */
  EBP = (ESP);
  /* 118a3b03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3b06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118a3b0d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 118a3b14 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_118a3b1b:;
  /* 118a3b1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a3b1e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3b21 jg 0x118a3c68 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a3c68;
  /* 118a3b27 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a3b2a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3b2d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a3b2e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3b30 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118a3b32 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a3b35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a3b38 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a3b3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3b3e cmp edx, dword ptr [ecx + 0x118c2520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x118c2520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3b44 jne 0x118a3c3e */
  if (!C.zf) goto L_118a3c3e;
  /* 118a3b4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a3b4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118a3b50 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3b54 ja 0x118a3b77 */
  if ((!C.cf&&!C.zf)) goto L_118a3b77;
  /* 118a3b56 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3b5a je 0x118a3be9 */
  if (C.zf) goto L_118a3be9;
  /* 118a3b60 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3b64 je 0x118a3b94 */
  if (C.zf) goto L_118a3b94;
  /* 118a3b66 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3b6a je 0x118a3bb6 */
  if (C.zf) goto L_118a3bb6;
  /* 118a3b6c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3b70 je 0x118a3bd8 */
  if (C.zf) goto L_118a3bd8;
  /* 118a3b72 jmp 0x118a3c08 */
  goto L_118a3c08;
L_118a3b77:;
  /* 118a3b77 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3b7e je 0x118a3ba5 */
  if (C.zf) goto L_118a3ba5;
  /* 118a3b80 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3b87 je 0x118a3bc7 */
  if (C.zf) goto L_118a3bc7;
  /* 118a3b89 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3b90 je 0x118a3bfa */
  if (C.zf) goto L_118a3bfa;
  /* 118a3b92 jmp 0x118a3c08 */
  goto L_118a3c08;
L_118a3b94:;
  /* 118a3b94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a3b97 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a3b9a add ecx, 0x118c2524 */
  { uint32_t _a=(ECX),_b=(0x118c2524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3ba0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a3ba3 jmp 0x118a3c08 */
  goto L_118a3c08;
L_118a3ba5:;
  /* 118a3ba5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a3ba8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a3bab mov eax, dword ptr [edx + 0x118c252c] */
  EAX = (r32((uint32_t)(EDX + 0x118c252c)));
  /* 118a3bb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a3bb4 jmp 0x118a3c08 */
  goto L_118a3c08;
L_118a3bb6:;
  /* 118a3bb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a3bb9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a3bbc add ecx, 0x118c2530 */
  { uint32_t _a=(ECX),_b=(0x118c2530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3bc2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a3bc5 jmp 0x118a3c08 */
  goto L_118a3c08;
L_118a3bc7:;
  /* 118a3bc7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a3bca imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a3bcd mov eax, dword ptr [edx + 0x118c2534] */
  EAX = (r32((uint32_t)(EDX + 0x118c2534)));
  /* 118a3bd3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a3bd6 jmp 0x118a3c08 */
  goto L_118a3c08;
L_118a3bd8:;
  /* 118a3bd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a3bdb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a3bde add ecx, 0x118c2538 */
  { uint32_t _a=(ECX),_b=(0x118c2538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3be4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a3be7 jmp 0x118a3c08 */
  goto L_118a3c08;
L_118a3be9:;
  /* 118a3be9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a3bec imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a3bef add edx, 0x118c253c */
  { uint32_t _a=(EDX),_b=(0x118c253cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3bf5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118a3bf8 jmp 0x118a3c08 */
  goto L_118a3c08;
L_118a3bfa:;
  /* 118a3bfa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a3bfd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a3c00 add eax, 0x118c2544 */
  { uint32_t _a=(EAX),_b=(0x118c2544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3c05 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118a3c08:;
  /* 118a3c08 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3c0c je 0x118a3c14 */
  if (C.zf) goto L_118a3c14;
  /* 118a3c0e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3c12 jge 0x118a3c16 */
  if ((C.sf==C.of)) goto L_118a3c16;
L_118a3c14:;
  /* 118a3c14 jmp 0x118a3c68 */
  goto L_118a3c68;
L_118a3c16:;
  /* 118a3c16 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a3c19 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3c1c push ecx */
  push32((uint32_t)(ECX));
  /* 118a3c1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a3c20 push edx */
  push32((uint32_t)(EDX));
  /* 118a3c21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a3c24 push eax */
  push32((uint32_t)(EAX));
  /* 118a3c25 call 0x1189aa20 */
  push32(0x118a3c2au); f_1189aa20();
  /* 118a3c2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3c2d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a3c30 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3c33 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 118a3c37 mov eax, 1 */
  EAX = (0x1u);
  /* 118a3c3c jmp 0x118a3c7e */
  goto L_118a3c7e;
L_118a3c3e:;
  /* 118a3c3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a3c41 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a3c44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3c47 cmp eax, dword ptr [edx + 0x118c2520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x118c2520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3c4d jae 0x118a3c5a */
  if (!C.cf) goto L_118a3c5a;
  /* 118a3c4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a3c52 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3c55 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a3c58 jmp 0x118a3c63 */
  goto L_118a3c63;
L_118a3c5a:;
  /* 118a3c5a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a3c5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3c60 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_118a3c63:;
  /* 118a3c63 jmp 0x118a3b1b */
  goto L_118a3b1b;
L_118a3c68:;
  /* 118a3c68 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a3c6b push eax */
  push32((uint32_t)(EAX));
  /* 118a3c6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a3c6f push ecx */
  push32((uint32_t)(ECX));
  /* 118a3c70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a3c73 push edx */
  push32((uint32_t)(EDX));
  /* 118a3c74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3c77 push eax */
  push32((uint32_t)(EAX));
  /* 118a3c78 call dword ptr [0x118c62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62f4))), 0x118a3c7eu);
L_118a3c7e:;
  /* 118a3c7e mov esp, ebp */
  ESP = (EBP);
  /* 118a3c80 pop ebp */
  EBP = (pop32());
  /* 118a3c81 ret 0x10 */
  ESPCHK(0x118a3b00u, _esp0);
  ESP += 20; return;
}

/* FUN_10013c90 @ 0x118a3c90 (118 bytes, 42 insns) */
void f_118a3c90(void) {
  FTRACE(0x118a3c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3c90 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3c91 mov ebp, esp */
  EBP = (ESP);
  /* 118a3c93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3c96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_118a3c9d:;
  /* 118a3c9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3ca0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118a3ca2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 118a3ca5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118a3ca9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3cac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3caf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a3cb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a3cb4 je 0x118a3cff */
  if (C.zf) goto L_118a3cff;
  /* 118a3cb6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118a3cba cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3cbd jl 0x118a3cd2 */
  if ((C.sf!=C.of)) goto L_118a3cd2;
  /* 118a3cbf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118a3cc3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3cc6 jg 0x118a3cd2 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a3cd2;
  /* 118a3cc8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 118a3ccb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118a3ccd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 118a3cd0 jmp 0x118a3cec */
  goto L_118a3cec;
L_118a3cd2:;
  /* 118a3cd2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118a3cd6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3cd9 jl 0x118a3cec */
  if ((C.sf!=C.of)) goto L_118a3cec;
  /* 118a3cdb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118a3cdf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3ce2 jg 0x118a3cec */
  if ((!C.zf&&C.sf==C.of)) goto L_118a3cec;
  /* 118a3ce4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 118a3ce7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118a3ce9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_118a3cec:;
  /* 118a3cec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a3cef shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 118a3cf2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118a3cf6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 118a3cfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a3cfd jmp 0x118a3c9d */
  goto L_118a3c9d;
L_118a3cff:;
  /* 118a3cff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a3d02 mov esp, ebp */
  ESP = (EBP);
  /* 118a3d04 pop ebp */
  EBP = (pop32());
  /* 118a3d05 ret  */
  ESPCHK(0x118a3c90u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x118a3d10 (101 bytes, 36 insns) */
void f_118a3d10(void) {
  FTRACE(0x118a3d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3d10 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3d11 mov ebp, esp */
  EBP = (ESP);
  /* 118a3d13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3d16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118a3d1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3d20 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118a3d22 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 118a3d25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3d28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3d2b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_118a3d2e:;
  /* 118a3d2e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118a3d32 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3d35 jl 0x118a3d40 */
  if ((C.sf!=C.of)) goto L_118a3d40;
  /* 118a3d37 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118a3d3b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3d3e jle 0x118a3d52 */
  if ((C.zf||C.sf!=C.of)) goto L_118a3d52;
L_118a3d40:;
  /* 118a3d40 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118a3d44 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3d47 jl 0x118a3d6e */
  if ((C.sf!=C.of)) goto L_118a3d6e;
  /* 118a3d49 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118a3d4d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3d50 jg 0x118a3d6e */
  if ((!C.zf&&C.sf==C.of)) goto L_118a3d6e;
L_118a3d52:;
  /* 118a3d52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a3d55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3d58 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a3d5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3d5e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a3d60 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 118a3d63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3d66 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3d69 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 118a3d6c jmp 0x118a3d2e */
  goto L_118a3d2e;
L_118a3d6e:;
  /* 118a3d6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a3d71 mov esp, ebp */
  ESP = (EBP);
  /* 118a3d73 pop ebp */
  EBP = (pop32());
  /* 118a3d74 ret  */
  ESPCHK(0x118a3d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d80 @ 0x118a3d80 (122 bytes, 39 insns) */
void f_118a3d80(void) {
  FTRACE(0x118a3d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3d80 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3d81 mov ebp, esp */
  EBP = (ESP);
  /* 118a3d83 push ecx */
  push32((uint32_t)(ECX));
  /* 118a3d84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3d87 cmp eax, dword ptr [0x118c52dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c52dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3d8d jae 0x118a3db1 */
  if (!C.cf) goto L_118a3db1;
  /* 118a3d8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3d92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118a3d95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3d98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 118a3d9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a3d9e mov eax, dword ptr [ecx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118c51a0)));
  /* 118a3da5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 118a3daa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 118a3dad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a3daf jne 0x118a3dcc */
  if (!C.zf) goto L_118a3dcc;
L_118a3db1:;
  /* 118a3db1 call 0x1189f0d0 */
  push32(0x118a3db6u); f_1189f0d0();
  /* 118a3db6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118a3dbc call 0x1189f0e0 */
  push32(0x118a3dc1u); f_1189f0e0();
  /* 118a3dc1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 118a3dc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a3dca jmp 0x118a3df6 */
  goto L_118a3df6;
L_118a3dcc:;
  /* 118a3dcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3dcf push edx */
  push32((uint32_t)(EDX));
  /* 118a3dd0 call 0x118a08f0 */
  push32(0x118a3dd5u); f_118a08f0();
  /* 118a3dd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3dd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3ddb push eax */
  push32((uint32_t)(EAX));
  /* 118a3ddc call 0x118a3e00 */
  push32(0x118a3de1u); f_118a3e00();
  /* 118a3de1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3de4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a3de7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3dea push ecx */
  push32((uint32_t)(ECX));
  /* 118a3deb call 0x118a0980 */
  push32(0x118a3df0u); f_118a0980();
  /* 118a3df0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3df3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_118a3df6:;
  /* 118a3df6 mov esp, ebp */
  ESP = (EBP);
  /* 118a3df8 pop ebp */
  EBP = (pop32());
  /* 118a3df9 ret  */
  ESPCHK(0x118a3d80u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x118a3e00 (170 bytes, 59 insns) */
void f_118a3e00(void) {
  FTRACE(0x118a3e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3e00 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3e01 mov ebp, esp */
  EBP = (ESP);
  /* 118a3e03 push ecx */
  push32((uint32_t)(ECX));
  /* 118a3e04 push esi */
  push32((uint32_t)(ESI));
  /* 118a3e05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3e08 push eax */
  push32((uint32_t)(EAX));
  /* 118a3e09 call 0x118a0770 */
  push32(0x118a3e0eu); f_118a0770();
  /* 118a3e0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3e11 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3e14 je 0x118a3e53 */
  if (C.zf) goto L_118a3e53;
  /* 118a3e16 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3e1a je 0x118a3e22 */
  if (C.zf) goto L_118a3e22;
  /* 118a3e1c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3e20 jne 0x118a3e3c */
  if (!C.zf) goto L_118a3e3c;
L_118a3e22:;
  /* 118a3e22 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a3e24 call 0x118a0770 */
  push32(0x118a3e29u); f_118a0770();
  /* 118a3e29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3e2c mov esi, eax */
  ESI = (EAX);
  /* 118a3e2e push 2 */
  push32((uint32_t)(0x2u));
  /* 118a3e30 call 0x118a0770 */
  push32(0x118a3e35u); f_118a0770();
  /* 118a3e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3e38 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3e3a je 0x118a3e53 */
  if (C.zf) goto L_118a3e53;
L_118a3e3c:;
  /* 118a3e3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3e3f push ecx */
  push32((uint32_t)(ECX));
  /* 118a3e40 call 0x118a0770 */
  push32(0x118a3e45u); f_118a0770();
  /* 118a3e45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3e48 push eax */
  push32((uint32_t)(EAX));
  /* 118a3e49 call dword ptr [0x118c62f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62f0))), 0x118a3e4fu);
  /* 118a3e4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3e51 je 0x118a3e5c */
  if (C.zf) goto L_118a3e5c;
L_118a3e53:;
  /* 118a3e53 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118a3e5a jmp 0x118a3e65 */
  goto L_118a3e65;
L_118a3e5c:;
  /* 118a3e5c call dword ptr [0x118c63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63d8))), 0x118a3e62u);
  /* 118a3e62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118a3e65:;
  /* 118a3e65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3e68 push edx */
  push32((uint32_t)(EDX));
  /* 118a3e69 call 0x118a0690 */
  push32(0x118a3e6eu); f_118a0690();
  /* 118a3e6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3e71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3e74 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118a3e77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3e7a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 118a3e7d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a3e80 mov edx, dword ptr [eax*4 + 0x118c51a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118c51a0)));
  /* 118a3e87 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 118a3e8c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3e90 je 0x118a3ea3 */
  if (C.zf) goto L_118a3ea3;
  /* 118a3e92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a3e95 push eax */
  push32((uint32_t)(EAX));
  /* 118a3e96 call 0x1189f030 */
  push32(0x118a3e9bu); f_1189f030();
  /* 118a3e9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3e9e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a3ea1 jmp 0x118a3ea5 */
  goto L_118a3ea5;
L_118a3ea3:;
  /* 118a3ea3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a3ea5:;
  /* 118a3ea5 pop esi */
  ESI = (pop32());
  /* 118a3ea6 mov esp, ebp */
  ESP = (EBP);
  /* 118a3ea8 pop ebp */
  EBP = (pop32());
  /* 118a3ea9 ret  */
  ESPCHK(0x118a3e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013eb0 @ 0x118a3eb0 (146 bytes, 52 insns) */
void f_118a3eb0(void) {
  FTRACE(0x118a3eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3eb1 mov ebp, esp */
  EBP = (ESP);
  /* 118a3eb3 push ebx */
  push32((uint32_t)(EBX));
  /* 118a3eb4 push esi */
  push32((uint32_t)(ESI));
  /* 118a3eb5 push edi */
  push32((uint32_t)(EDI));
L_118a3eb6:;
  /* 118a3eb6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3eba jne 0x118a3eda */
  if (!C.zf) goto L_118a3eda;
  /* 118a3ebc push 0x118bfbf0 */
  push32((uint32_t)(0x118bfbf0u));
  /* 118a3ec1 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a3ec3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 118a3ec5 push 0x118c02b8 */
  push32((uint32_t)(0x118c02b8u));
  /* 118a3eca push 2 */
  push32((uint32_t)(0x2u));
  /* 118a3ecc call 0x118962c0 */
  push32(0x118a3ed1u); f_118962c0();
  /* 118a3ed1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3ed4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3ed7 jne 0x118a3eda */
  if (!C.zf) goto L_118a3eda;
  /* 118a3ed9 int3  */
  x86_unimpl("int3 @ 0x118a3ed9");
L_118a3eda:;
  /* 118a3eda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a3edc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a3ede jne 0x118a3eb6 */
  if (!C.zf) goto L_118a3eb6;
  /* 118a3ee0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3ee3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118a3ee6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 118a3eec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a3eee je 0x118a3f3d */
  if (C.zf) goto L_118a3f3d;
  /* 118a3ef0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3ef3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 118a3ef6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 118a3ef9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a3efb je 0x118a3f3d */
  if (C.zf) goto L_118a3f3d;
  /* 118a3efd push 2 */
  push32((uint32_t)(0x2u));
  /* 118a3eff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3f02 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 118a3f05 push eax */
  push32((uint32_t)(EAX));
  /* 118a3f06 call 0x11897c90 */
  push32(0x118a3f0bu); f_11897c90();
  /* 118a3f0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3f0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3f11 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118a3f14 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 118a3f1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3f1d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 118a3f20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3f23 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 118a3f29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3f2c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 118a3f33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a3f36 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_118a3f3d:;
  /* 118a3f3d pop edi */
  EDI = (pop32());
  /* 118a3f3e pop esi */
  ESI = (pop32());
  /* 118a3f3f pop ebx */
  EBX = (pop32());
  /* 118a3f40 pop ebp */
  EBP = (pop32());
  /* 118a3f41 ret  */
  ESPCHK(0x118a3eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f50 @ 0x118a3f50 (289 bytes, 97 insns) */
void f_118a3f50(void) {
  FTRACE(0x118a3f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a3f50 push ebp */
  push32((uint32_t)(EBP));
  /* 118a3f51 mov ebp, esp */
  EBP = (ESP);
  /* 118a3f53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a3f56 push esi */
  push32((uint32_t)(ESI));
  /* 118a3f57 mov eax, dword ptr [0x118c2c98] */
  EAX = (r32((uint32_t)(0x118c2c98)));
  /* 118a3f5c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a3f5f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118a3f66 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118a3f6d jmp 0x118a3f78 */
  goto L_118a3f78;
L_118a3f6f:;
  /* 118a3f6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a3f72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3f75 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_118a3f78:;
  /* 118a3f78 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3f7c jae 0x118a3fb1 */
  if (!C.cf) goto L_118a3fb1;
  /* 118a3f7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a3f81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a3f84 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 118a3f87 push ecx */
  push32((uint32_t)(ECX));
  /* 118a3f88 call 0x1189a030 */
  push32(0x118a3f8du); f_1189a030();
  /* 118a3f8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3f90 mov esi, eax */
  ESI = (EAX);
  /* 118a3f92 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a3f95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a3f98 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 118a3f9c push ecx */
  push32((uint32_t)(ECX));
  /* 118a3f9d call 0x1189a030 */
  push32(0x118a3fa2u); f_1189a030();
  /* 118a3fa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3fa5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3fa8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 118a3fac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118a3faf jmp 0x118a3f6f */
  goto L_118a3f6f;
L_118a3fb1:;
  /* 118a3fb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a3fb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3fb7 push eax */
  push32((uint32_t)(EAX));
  /* 118a3fb8 call 0x118971e0 */
  push32(0x118a3fbdu); f_118971e0();
  /* 118a3fbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3fc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a3fc3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3fc7 je 0x118a4069 */
  if (C.zf) goto L_118a4069;
  /* 118a3fcd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a3fd0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 118a3fd3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118a3fda jmp 0x118a3fe5 */
  goto L_118a3fe5;
L_118a3fdc:;
  /* 118a3fdc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a3fdf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3fe2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_118a3fe5:;
  /* 118a3fe5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a3fe9 jae 0x118a405a */
  if (!C.cf) goto L_118a405a;
  /* 118a3feb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a3fee mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 118a3ff1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a3ff4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a3ff7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 118a3ffa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a3ffd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4000 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 118a4003 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4004 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4007 push edx */
  push32((uint32_t)(EDX));
  /* 118a4008 call 0x1189a1b0 */
  push32(0x118a400du); f_1189a1b0();
  /* 118a400d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4010 push eax */
  push32((uint32_t)(EAX));
  /* 118a4011 call 0x1189a030 */
  push32(0x118a4016u); f_1189a030();
  /* 118a4016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4019 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a401c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a401e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 118a4021 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4024 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 118a4027 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a402a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a402d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118a4030 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a4033 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4036 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 118a403a push eax */
  push32((uint32_t)(EAX));
  /* 118a403b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a403e push ecx */
  push32((uint32_t)(ECX));
  /* 118a403f call 0x1189a1b0 */
  push32(0x118a4044u); f_1189a1b0();
  /* 118a4044 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4047 push eax */
  push32((uint32_t)(EAX));
  /* 118a4048 call 0x1189a030 */
  push32(0x118a404du); f_1189a030();
  /* 118a404d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4050 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4053 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4055 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 118a4058 jmp 0x118a3fdc */
  goto L_118a3fdc;
L_118a405a:;
  /* 118a405a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a405d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 118a4060 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4063 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4066 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_118a4069:;
  /* 118a4069 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a406c pop esi */
  ESI = (pop32());
  /* 118a406d mov esp, ebp */
  ESP = (EBP);
  /* 118a406f pop ebp */
  EBP = (pop32());
  /* 118a4070 ret  */
  ESPCHK(0x118a3f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014080 @ 0x118a4080 (291 bytes, 97 insns) */
void f_118a4080(void) {
  FTRACE(0x118a4080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a4080 push ebp */
  push32((uint32_t)(EBP));
  /* 118a4081 mov ebp, esp */
  EBP = (ESP);
  /* 118a4083 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4086 push esi */
  push32((uint32_t)(ESI));
  /* 118a4087 mov eax, dword ptr [0x118c2c98] */
  EAX = (r32((uint32_t)(0x118c2c98)));
  /* 118a408c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a408f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118a4096 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118a409d jmp 0x118a40a8 */
  goto L_118a40a8;
L_118a409f:;
  /* 118a409f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a40a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a40a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_118a40a8:;
  /* 118a40a8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a40ac jae 0x118a40e2 */
  if (!C.cf) goto L_118a40e2;
  /* 118a40ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a40b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a40b4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 118a40b8 push ecx */
  push32((uint32_t)(ECX));
  /* 118a40b9 call 0x1189a030 */
  push32(0x118a40beu); f_1189a030();
  /* 118a40be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a40c1 mov esi, eax */
  ESI = (EAX);
  /* 118a40c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a40c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a40c9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 118a40cd push ecx */
  push32((uint32_t)(ECX));
  /* 118a40ce call 0x1189a030 */
  push32(0x118a40d3u); f_1189a030();
  /* 118a40d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a40d6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a40d9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 118a40dd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118a40e0 jmp 0x118a409f */
  goto L_118a409f;
L_118a40e2:;
  /* 118a40e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a40e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a40e8 push eax */
  push32((uint32_t)(EAX));
  /* 118a40e9 call 0x118971e0 */
  push32(0x118a40eeu); f_118971e0();
  /* 118a40ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a40f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a40f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a40f8 je 0x118a419b */
  if (C.zf) goto L_118a419b;
  /* 118a40fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4101 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 118a4104 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118a410b jmp 0x118a4116 */
  goto L_118a4116;
L_118a410d:;
  /* 118a410d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a4110 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4113 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_118a4116:;
  /* 118a4116 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a411a jae 0x118a418c */
  if (!C.cf) goto L_118a418c;
  /* 118a411c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a411f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 118a4122 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4125 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4128 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 118a412b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a412e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4131 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 118a4135 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4136 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4139 push edx */
  push32((uint32_t)(EDX));
  /* 118a413a call 0x1189a1b0 */
  push32(0x118a413fu); f_1189a1b0();
  /* 118a413f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4142 push eax */
  push32((uint32_t)(EAX));
  /* 118a4143 call 0x1189a030 */
  push32(0x118a4148u); f_1189a030();
  /* 118a4148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a414b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a414e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4150 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 118a4153 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4156 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 118a4159 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a415c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a415f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118a4162 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a4165 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4168 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 118a416c push eax */
  push32((uint32_t)(EAX));
  /* 118a416d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4170 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4171 call 0x1189a1b0 */
  push32(0x118a4176u); f_1189a1b0();
  /* 118a4176 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4179 push eax */
  push32((uint32_t)(EAX));
  /* 118a417a call 0x1189a030 */
  push32(0x118a417fu); f_1189a030();
  /* 118a417f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4182 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4185 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4187 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 118a418a jmp 0x118a410d */
  goto L_118a410d;
L_118a418c:;
  /* 118a418c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a418f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 118a4192 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4195 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4198 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_118a419b:;
  /* 118a419b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a419e pop esi */
  ESI = (pop32());
  /* 118a419f mov esp, ebp */
  ESP = (EBP);
  /* 118a41a1 pop ebp */
  EBP = (pop32());
  /* 118a41a2 ret  */
  ESPCHK(0x118a4080u, _esp0);
  ESP += 4; return;
}

/* FUN_100141b0 @ 0x118a41b0 (878 bytes, 273 insns) */
void f_118a41b0(void) {
  FTRACE(0x118a41b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a41b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a41b1 mov ebp, esp */
  EBP = (ESP);
  /* 118a41b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a41b6 push esi */
  push32((uint32_t)(ESI));
  /* 118a41b7 mov eax, dword ptr [0x118c2c98] */
  EAX = (r32((uint32_t)(0x118c2c98)));
  /* 118a41bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a41bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118a41c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118a41cd jmp 0x118a41d8 */
  goto L_118a41d8;
L_118a41cf:;
  /* 118a41cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a41d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a41d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_118a41d8:;
  /* 118a41d8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a41dc jae 0x118a4211 */
  if (!C.cf) goto L_118a4211;
  /* 118a41de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a41e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a41e4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 118a41e7 push ecx */
  push32((uint32_t)(ECX));
  /* 118a41e8 call 0x1189a030 */
  push32(0x118a41edu); f_1189a030();
  /* 118a41ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a41f0 mov esi, eax */
  ESI = (EAX);
  /* 118a41f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a41f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a41f8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 118a41fc push ecx */
  push32((uint32_t)(ECX));
  /* 118a41fd call 0x1189a030 */
  push32(0x118a4202u); f_1189a030();
  /* 118a4202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4205 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4208 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 118a420c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118a420f jmp 0x118a41cf */
  goto L_118a41cf;
L_118a4211:;
  /* 118a4211 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118a4218 jmp 0x118a4223 */
  goto L_118a4223;
L_118a421a:;
  /* 118a421a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a421d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4220 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_118a4223:;
  /* 118a4223 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4227 jae 0x118a425d */
  if (!C.cf) goto L_118a425d;
  /* 118a4229 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a422c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a422f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 118a4233 push eax */
  push32((uint32_t)(EAX));
  /* 118a4234 call 0x1189a030 */
  push32(0x118a4239u); f_1189a030();
  /* 118a4239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a423c mov esi, eax */
  ESI = (EAX);
  /* 118a423e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a4241 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4244 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 118a4248 push eax */
  push32((uint32_t)(EAX));
  /* 118a4249 call 0x1189a030 */
  push32(0x118a424eu); f_1189a030();
  /* 118a424e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4251 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4254 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 118a4258 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a425b jmp 0x118a421a */
  goto L_118a421a;
L_118a425d:;
  /* 118a425d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4260 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 118a4266 push eax */
  push32((uint32_t)(EAX));
  /* 118a4267 call 0x1189a030 */
  push32(0x118a426cu); f_1189a030();
  /* 118a426c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a426f mov esi, eax */
  ESI = (EAX);
  /* 118a4271 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4274 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 118a427a push edx */
  push32((uint32_t)(EDX));
  /* 118a427b call 0x1189a030 */
  push32(0x118a4280u); f_1189a030();
  /* 118a4280 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4283 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4286 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 118a428a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a428d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4290 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 118a4296 push edx */
  push32((uint32_t)(EDX));
  /* 118a4297 call 0x1189a030 */
  push32(0x118a429cu); f_1189a030();
  /* 118a429c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a429f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a42a2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 118a42a6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118a42a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a42ac mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 118a42b2 push ecx */
  push32((uint32_t)(ECX));
  /* 118a42b3 call 0x1189a030 */
  push32(0x118a42b8u); f_1189a030();
  /* 118a42b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a42bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a42be lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 118a42c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a42c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a42c8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 118a42ce push edx */
  push32((uint32_t)(EDX));
  /* 118a42cf call 0x1189a030 */
  push32(0x118a42d4u); f_1189a030();
  /* 118a42d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a42d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a42da lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 118a42de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118a42e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a42e4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a42e9 push eax */
  push32((uint32_t)(EAX));
  /* 118a42ea call 0x118971e0 */
  push32(0x118a42efu); f_118971e0();
  /* 118a42ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a42f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a42f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a42f9 je 0x118a4516 */
  if (C.zf) goto L_118a4516;
  /* 118a42ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4302 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 118a4305 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4308 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a430e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 118a4311 push 0xac */
  push32((uint32_t)(0xacu));
  /* 118a4316 mov eax, dword ptr [0x118c2c98] */
  EAX = (r32((uint32_t)(0x118c2c98)));
  /* 118a431b push eax */
  push32((uint32_t)(EAX));
  /* 118a431c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a431f push ecx */
  push32((uint32_t)(ECX));
  /* 118a4320 call 0x1189dae0 */
  push32(0x118a4325u); f_1189dae0();
  /* 118a4325 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4328 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118a432f jmp 0x118a433a */
  goto L_118a433a;
L_118a4331:;
  /* 118a4331 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a4334 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4337 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_118a433a:;
  /* 118a433a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a433e jae 0x118a43ae */
  if (!C.cf) goto L_118a43ae;
  /* 118a4340 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a4343 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a4346 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4349 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 118a434c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a434f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4352 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 118a4355 push edx */
  push32((uint32_t)(EDX));
  /* 118a4356 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4359 push eax */
  push32((uint32_t)(EAX));
  /* 118a435a call 0x1189a1b0 */
  push32(0x118a435fu); f_1189a1b0();
  /* 118a435f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4362 push eax */
  push32((uint32_t)(EAX));
  /* 118a4363 call 0x1189a030 */
  push32(0x118a4368u); f_1189a030();
  /* 118a4368 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a436b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a436e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 118a4372 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 118a4375 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a4378 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a437b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a437e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 118a4382 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a4385 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4388 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 118a438c push edx */
  push32((uint32_t)(EDX));
  /* 118a438d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4390 push eax */
  push32((uint32_t)(EAX));
  /* 118a4391 call 0x1189a1b0 */
  push32(0x118a4396u); f_1189a1b0();
  /* 118a4396 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4399 push eax */
  push32((uint32_t)(EAX));
  /* 118a439a call 0x1189a030 */
  push32(0x118a439fu); f_1189a030();
  /* 118a439f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a43a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a43a5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 118a43a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 118a43ac jmp 0x118a4331 */
  goto L_118a4331;
L_118a43ae:;
  /* 118a43ae mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118a43b5 jmp 0x118a43c0 */
  goto L_118a43c0;
L_118a43b7:;
  /* 118a43b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a43ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a43bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_118a43c0:;
  /* 118a43c0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a43c4 jae 0x118a4436 */
  if (!C.cf) goto L_118a4436;
  /* 118a43c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a43c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a43cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a43cf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 118a43d3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a43d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a43d9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 118a43dd push eax */
  push32((uint32_t)(EAX));
  /* 118a43de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a43e1 push ecx */
  push32((uint32_t)(ECX));
  /* 118a43e2 call 0x1189a1b0 */
  push32(0x118a43e7u); f_1189a1b0();
  /* 118a43e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a43ea push eax */
  push32((uint32_t)(EAX));
  /* 118a43eb call 0x1189a030 */
  push32(0x118a43f0u); f_1189a030();
  /* 118a43f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a43f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a43f6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 118a43fa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118a43fd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a4400 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a4403 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4406 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 118a440a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a440d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4410 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 118a4414 push eax */
  push32((uint32_t)(EAX));
  /* 118a4415 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4418 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4419 call 0x1189a1b0 */
  push32(0x118a441eu); f_1189a1b0();
  /* 118a441e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4421 push eax */
  push32((uint32_t)(EAX));
  /* 118a4422 call 0x1189a030 */
  push32(0x118a4427u); f_1189a030();
  /* 118a4427 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a442a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a442d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 118a4431 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118a4434 jmp 0x118a43b7 */
  goto L_118a43b7;
L_118a4436:;
  /* 118a4436 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a4439 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a443c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 118a4442 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4445 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 118a444b push ecx */
  push32((uint32_t)(ECX));
  /* 118a444c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a444f push edx */
  push32((uint32_t)(EDX));
  /* 118a4450 call 0x1189a1b0 */
  push32(0x118a4455u); f_1189a1b0();
  /* 118a4455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4458 push eax */
  push32((uint32_t)(EAX));
  /* 118a4459 call 0x1189a030 */
  push32(0x118a445eu); f_1189a030();
  /* 118a445e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4461 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4464 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 118a4468 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 118a446b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a446e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4471 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 118a4477 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a447a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 118a4480 push eax */
  push32((uint32_t)(EAX));
  /* 118a4481 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4484 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4485 call 0x1189a1b0 */
  push32(0x118a448au); f_1189a1b0();
  /* 118a448a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a448d push eax */
  push32((uint32_t)(EAX));
  /* 118a448e call 0x1189a030 */
  push32(0x118a4493u); f_1189a030();
  /* 118a4493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4496 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4499 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 118a449d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118a44a0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a44a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a44a6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 118a44ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a44af mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 118a44b5 push ecx */
  push32((uint32_t)(ECX));
  /* 118a44b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a44b9 push edx */
  push32((uint32_t)(EDX));
  /* 118a44ba call 0x1189a1b0 */
  push32(0x118a44bfu); f_1189a1b0();
  /* 118a44bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a44c2 push eax */
  push32((uint32_t)(EAX));
  /* 118a44c3 call 0x1189a030 */
  push32(0x118a44c8u); f_1189a030();
  /* 118a44c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a44cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a44ce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 118a44d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 118a44d5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a44d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a44db mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 118a44e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a44e4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 118a44ea push eax */
  push32((uint32_t)(EAX));
  /* 118a44eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a44ee push ecx */
  push32((uint32_t)(ECX));
  /* 118a44ef call 0x1189a1b0 */
  push32(0x118a44f4u); f_1189a1b0();
  /* 118a44f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a44f7 push eax */
  push32((uint32_t)(EAX));
  /* 118a44f8 call 0x1189a030 */
  push32(0x118a44fdu); f_1189a030();
  /* 118a44fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4500 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4503 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 118a4507 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118a450a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a450d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4510 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_118a4516:;
  /* 118a4516 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4519 pop esi */
  ESI = (pop32());
  /* 118a451a mov esp, ebp */
  ESP = (EBP);
  /* 118a451c pop ebp */
  EBP = (pop32());
  /* 118a451d ret  */
  ESPCHK(0x118a41b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014520 @ 0x118a4520 (31 bytes, 15 insns) */
void f_118a4520(void) {
  FTRACE(0x118a4520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a4520 push ebp */
  push32((uint32_t)(EBP));
  /* 118a4521 mov ebp, esp */
  EBP = (ESP);
  /* 118a4523 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a4525 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4528 push eax */
  push32((uint32_t)(EAX));
  /* 118a4529 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a452c push ecx */
  push32((uint32_t)(ECX));
  /* 118a452d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4530 push edx */
  push32((uint32_t)(EDX));
  /* 118a4531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4534 push eax */
  push32((uint32_t)(EAX));
  /* 118a4535 call 0x118a4540 */
  push32(0x118a453au); f_118a4540();
  /* 118a453a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a453d pop ebp */
  EBP = (pop32());
  /* 118a453e ret  */
  ESPCHK(0x118a4520u, _esp0);
  ESP += 4; return;
}

