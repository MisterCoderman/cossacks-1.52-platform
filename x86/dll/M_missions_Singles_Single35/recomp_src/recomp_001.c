#include "recomp.h"

/* FUN_100094d0 @ 0x115a94d0 (10 bytes, 5 insns) */
void f_115a94d0(void) {
  FTRACE(0x115a94d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a94d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a94d1 mov ebp, esp */
  EBP = (ESP);
  /* 115a94d3 mov eax, dword ptr [0x115cfc94] */
  EAX = (r32((uint32_t)(0x115cfc94)));
  /* 115a94d8 pop ebp */
  EBP = (pop32());
  /* 115a94d9 ret  */
  ESPCHK(0x115a94d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094e0 @ 0x115a94e0 (31 bytes, 11 insns) */
void f_115a94e0(void) {
  FTRACE(0x115a94e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a94e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a94e1 mov ebp, esp */
  EBP = (ESP);
  /* 115a94e3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a94ea jbe 0x115a94f0 */
  if ((C.cf||C.zf)) goto L_115a94f0;
  /* 115a94ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a94ee jmp 0x115a94fd */
  goto L_115a94fd;
L_115a94f0:;
  /* 115a94f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a94f3 mov dword ptr [0x115cfc94], eax */
  w32((uint32_t)(0x115cfc94), (EAX));
  /* 115a94f8 mov eax, 1 */
  EAX = (0x1u);
L_115a94fd:;
  /* 115a94fd pop ebp */
  EBP = (pop32());
  /* 115a94fe ret  */
  ESPCHK(0x115a94e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009500 @ 0x115a9500 (89 bytes, 20 insns) */
void f_115a9500(void) {
  FTRACE(0x115a9500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a9500 push ebp */
  push32((uint32_t)(EBP));
  /* 115a9501 mov ebp, esp */
  EBP = (ESP);
  /* 115a9503 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 115a9508 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a950a mov eax, dword ptr [0x115d2fcc] */
  EAX = (r32((uint32_t)(0x115d2fcc)));
  /* 115a950f push eax */
  push32((uint32_t)(EAX));
  /* 115a9510 call dword ptr [0x115d433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d433c))), 0x115a9516u);
  /* 115a9516 mov dword ptr [0x115d2fc8], eax */
  w32((uint32_t)(0x115d2fc8), (EAX));
  /* 115a951b cmp dword ptr [0x115d2fc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d2fc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9522 jne 0x115a9528 */
  if (!C.zf) goto L_115a9528;
  /* 115a9524 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a9526 jmp 0x115a9557 */
  goto L_115a9557;
L_115a9528:;
  /* 115a9528 mov ecx, dword ptr [0x115d2fc8] */
  ECX = (r32((uint32_t)(0x115d2fc8)));
  /* 115a952e mov dword ptr [0x115d2fbc], ecx */
  w32((uint32_t)(0x115d2fbc), (ECX));
  /* 115a9534 mov dword ptr [0x115d2fc0], 0 */
  w32((uint32_t)(0x115d2fc0), (0x0u));
  /* 115a953e mov dword ptr [0x115d2fc4], 0 */
  w32((uint32_t)(0x115d2fc4), (0x0u));
  /* 115a9548 mov dword ptr [0x115d2fa8], 0x10 */
  w32((uint32_t)(0x115d2fa8), (0x10u));
  /* 115a9552 mov eax, 1 */
  EAX = (0x1u);
L_115a9557:;
  /* 115a9557 pop ebp */
  EBP = (pop32());
  /* 115a9558 ret  */
  ESPCHK(0x115a9500u, _esp0);
  ESP += 4; return;
}

/* FUN_10009560 @ 0x115a9560 (85 bytes, 29 insns) */
void f_115a9560(void) {
  FTRACE(0x115a9560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a9560 push ebp */
  push32((uint32_t)(EBP));
  /* 115a9561 mov ebp, esp */
  EBP = (ESP);
  /* 115a9563 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9566 mov eax, dword ptr [0x115d2fc4] */
  EAX = (r32((uint32_t)(0x115d2fc4)));
  /* 115a956b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a956e mov ecx, dword ptr [0x115d2fc8] */
  ECX = (r32((uint32_t)(0x115d2fc8)));
  /* 115a9574 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9576 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115a9579 mov edx, dword ptr [0x115d2fc8] */
  EDX = (r32((uint32_t)(0x115d2fc8)));
  /* 115a957f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_115a9582:;
  /* 115a9582 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a9585 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9588 jae 0x115a95af */
  if (!C.cf) goto L_115a95af;
  /* 115a958a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a958d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9590 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9593 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a9596 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a959d jae 0x115a95a4 */
  if (!C.cf) goto L_115a95a4;
  /* 115a959f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a95a2 jmp 0x115a95b1 */
  goto L_115a95b1;
L_115a95a4:;
  /* 115a95a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a95a7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a95aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a95ad jmp 0x115a9582 */
  goto L_115a9582;
L_115a95af:;
  /* 115a95af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115a95b1:;
  /* 115a95b1 mov esp, ebp */
  ESP = (EBP);
  /* 115a95b3 pop ebp */
  EBP = (pop32());
  /* 115a95b4 ret  */
  ESPCHK(0x115a9560u, _esp0);
  ESP += 4; return;
}

/* FUN_100095c0 @ 0x115a95c0 (95 bytes, 33 insns) */
void f_115a95c0(void) {
  FTRACE(0x115a95c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a95c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a95c1 mov ebp, esp */
  EBP = (ESP);
  /* 115a95c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a95c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a95c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a95cc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a95cf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115a95d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a95d5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 115a95d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a95db mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115a95e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a95e3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115a95e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a95e8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115a95eb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 115a95ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a95ef jne 0x115a9611 */
  if (!C.zf) goto L_115a9611;
  /* 115a95f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a95f4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 115a95f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a95f9 jne 0x115a9611 */
  if (!C.zf) goto L_115a9611;
  /* 115a95fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a95fe and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a9604 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a9606 je 0x115a9611 */
  if (C.zf) goto L_115a9611;
  /* 115a9608 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 115a960f jmp 0x115a9618 */
  goto L_115a9618;
L_115a9611:;
  /* 115a9611 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_115a9618:;
  /* 115a9618 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a961b mov esp, ebp */
  ESP = (EBP);
  /* 115a961d pop ebp */
  EBP = (pop32());
  /* 115a961e ret  */
  ESPCHK(0x115a95c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009620 @ 0x115a9620 (1485 bytes, 453 insns) */
void f_115a9620(void) {
  FTRACE(0x115a9620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a9620 push ebp */
  push32((uint32_t)(EBP));
  /* 115a9621 mov ebp, esp */
  EBP = (ESP);
  /* 115a9623 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9626 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9629 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115a962c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 115a962f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9632 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a9635 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9638 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115a963b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a963e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 115a9641 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115a9644 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a9647 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a964d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a9650 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 115a9657 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115a965a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a965d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9660 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 115a9663 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115a9666 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a9668 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a966b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 115a966e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115a9671 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9674 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 115a9677 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a967a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a967c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115a967f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115a9682 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 115a9685 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a9688 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a968b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115a968e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a9690 jne 0x115a97b8 */
  if (!C.zf) goto L_115a97b8;
  /* 115a9696 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a9699 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 115a969c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a969f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 115a96a2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a96a6 jbe 0x115a96af */
  if ((C.cf||C.zf)) goto L_115a96af;
  /* 115a96a8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_115a96af:;
  /* 115a96af mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a96b2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a96b5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 115a96b8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a96bb jne 0x115a9791 */
  if (!C.zf) goto L_115a9791;
  /* 115a96c1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a96c5 jae 0x115a9726 */
  if (!C.cf) goto L_115a9726;
  /* 115a96c7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115a96cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a96cf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115a96d1 not eax */
  EAX = (~(EAX));
  /* 115a96d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a96d6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a96d9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 115a96dd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115a96df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a96e2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a96e5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 115a96e9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a96ec add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a96ef mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 115a96f2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115a96f5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a96f8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a96fb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 115a96fe mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a9701 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9704 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 115a9708 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a970a jne 0x115a9724 */
  if (!C.zf) goto L_115a9724;
  /* 115a970c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115a9711 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a9714 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115a9716 not eax */
  EAX = (~(EAX));
  /* 115a9718 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a971b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a971d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 115a971f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9722 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_115a9724:;
  /* 115a9724 jmp 0x115a9791 */
  goto L_115a9791;
L_115a9726:;
  /* 115a9726 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a9729 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a972c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115a9731 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115a9733 not edx */
  EDX = (~(EDX));
  /* 115a9735 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a9738 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a973b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 115a9742 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115a9744 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a9747 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a974a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 115a9751 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a9754 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9757 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115a975a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115a975d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a9760 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9763 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 115a9766 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a9769 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a976c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 115a9770 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a9772 jne 0x115a9791 */
  if (!C.zf) goto L_115a9791;
  /* 115a9774 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a9777 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a977a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115a977f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115a9781 not edx */
  EDX = (~(EDX));
  /* 115a9783 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9786 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115a9789 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 115a978b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a978e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_115a9791:;
  /* 115a9791 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9794 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115a9797 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a979a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 115a979d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 115a97a0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a97a3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115a97a6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a97a9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115a97ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 115a97af mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a97b2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a97b5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_115a97b8:;
  /* 115a97b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a97bb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 115a97be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a97c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 115a97c4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a97c8 jbe 0x115a97d1 */
  if ((C.cf||C.zf)) goto L_115a97d1;
  /* 115a97ca mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_115a97d1:;
  /* 115a97d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a97d4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115a97d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a97d9 jne 0x115a9935 */
  if (!C.zf) goto L_115a9935;
  /* 115a97df mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115a97e2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a97e5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 115a97e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a97eb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 115a97ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a97f1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 115a97f4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a97f8 jbe 0x115a9801 */
  if ((C.cf||C.zf)) goto L_115a9801;
  /* 115a97fa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_115a9801:;
  /* 115a9801 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9804 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9807 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 115a980a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a980d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 115a9810 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9813 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 115a9816 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a981a jbe 0x115a9823 */
  if ((C.cf||C.zf)) goto L_115a9823;
  /* 115a981c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_115a9823:;
  /* 115a9823 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115a9826 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9829 je 0x115a992f */
  if (C.zf) goto L_115a992f;
  /* 115a982f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 115a9832 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 115a9835 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 115a9838 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a983b jne 0x115a9911 */
  if (!C.zf) goto L_115a9911;
  /* 115a9841 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9845 jae 0x115a98a6 */
  if (!C.cf) goto L_115a98a6;
  /* 115a9847 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115a984c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115a984f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115a9851 not edx */
  EDX = (~(EDX));
  /* 115a9853 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a9856 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a9859 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 115a985d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115a985f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a9862 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a9865 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 115a9869 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a986c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a986f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115a9872 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115a9875 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a9878 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a987b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 115a987e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a9881 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9884 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 115a9888 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a988a jne 0x115a98a4 */
  if (!C.zf) goto L_115a98a4;
  /* 115a988c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115a9891 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115a9894 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115a9896 not edx */
  EDX = (~(EDX));
  /* 115a9898 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a989b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a989d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 115a989f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a98a2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_115a98a4:;
  /* 115a98a4 jmp 0x115a9911 */
  goto L_115a9911;
L_115a98a6:;
  /* 115a98a6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115a98a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a98ac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115a98b1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115a98b3 not eax */
  EAX = (~(EAX));
  /* 115a98b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a98b8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a98bb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 115a98c2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115a98c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a98c7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a98ca mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 115a98d1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a98d4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a98d7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 115a98da sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115a98dd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a98e0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a98e3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 115a98e6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a98e9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a98ec movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 115a98f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a98f2 jne 0x115a9911 */
  if (!C.zf) goto L_115a9911;
  /* 115a98f4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115a98f7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a98fa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115a98ff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115a9901 not eax */
  EAX = (~(EAX));
  /* 115a9903 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9906 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115a9909 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 115a990b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a990e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_115a9911:;
  /* 115a9911 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 115a9914 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115a9917 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 115a991a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115a991d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 115a9920 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 115a9923 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 115a9926 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 115a9929 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115a992c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_115a992f:;
  /* 115a992f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 115a9932 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_115a9935:;
  /* 115a9935 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a9938 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115a993b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a993d jne 0x115a994b */
  if (!C.zf) goto L_115a994b;
  /* 115a993f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115a9942 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9945 je 0x115a9a5b */
  if (C.zf) goto L_115a9a5b;
L_115a994b:;
  /* 115a994b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115a994e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a9951 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 115a9954 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 115a9957 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115a995a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115a995d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115a9960 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 115a9963 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115a9966 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115a9969 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 115a996c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 115a996f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115a9972 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 115a9975 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115a9978 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115a997b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115a997e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 115a9981 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115a9984 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115a9987 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 115a998a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a998d jne 0x115a9a5b */
  if (!C.zf) goto L_115a9a5b;
  /* 115a9993 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9997 jae 0x115a99f4 */
  if (!C.cf) goto L_115a99f4;
  /* 115a9999 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a999c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a999f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 115a99a3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a99a6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a99a9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115a99ac add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 115a99af mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a99b2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a99b5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 115a99b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a99ba jne 0x115a99d2 */
  if (!C.zf) goto L_115a99d2;
  /* 115a99bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115a99c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115a99c4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115a99c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a99c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a99cb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 115a99cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a99d0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_115a99d2:;
  /* 115a99d2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115a99d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115a99da shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115a99dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a99df mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a99e2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 115a99e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115a99e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a99eb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a99ee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 115a99f2 jmp 0x115a9a5b */
  goto L_115a9a5b;
L_115a99f4:;
  /* 115a99f4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a99f7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a99fa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 115a99fe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a9a01 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9a04 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115a9a07 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 115a9a0a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a9a0d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9a10 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 115a9a13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a9a15 jne 0x115a9a32 */
  if (!C.zf) goto L_115a9a32;
  /* 115a9a17 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115a9a1a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9a1d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115a9a22 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115a9a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9a27 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115a9a2a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 115a9a2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9a2f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_115a9a32:;
  /* 115a9a32 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115a9a35 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9a38 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115a9a3d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115a9a3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a9a42 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a9a45 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 115a9a4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115a9a4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a9a51 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 115a9a54 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_115a9a5b:;
  /* 115a9a5b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115a9a5e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9a61 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 115a9a63 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115a9a66 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9a69 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9a6c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 115a9a6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a9a72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a9a74 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9a77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a9a7a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115a9a7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a9a7f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9a82 jne 0x115a9be9 */
  if (!C.zf) goto L_115a9be9;
  /* 115a9a88 cmp dword ptr [0x115d2fc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d2fc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9a8f je 0x115a9bd8 */
  if (C.zf) goto L_115a9bd8;
  /* 115a9a95 mov eax, dword ptr [0x115d2fb8] */
  EAX = (r32((uint32_t)(0x115d2fb8)));
  /* 115a9a9a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 115a9a9d mov ecx, dword ptr [0x115d2fc0] */
  ECX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9aa3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115a9aa6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9aa8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 115a9aab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 115a9ab0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 115a9ab5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9ab8 push eax */
  push32((uint32_t)(EAX));
  /* 115a9ab9 call dword ptr [0x115d4358] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4358))), 0x115a9abfu);
  /* 115a9abf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115a9ac4 mov ecx, dword ptr [0x115d2fb8] */
  ECX = (r32((uint32_t)(0x115d2fb8)));
  /* 115a9aca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115a9acc mov eax, dword ptr [0x115d2fc0] */
  EAX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9ad1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115a9ad4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 115a9ad6 mov edx, dword ptr [0x115d2fc0] */
  EDX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9adc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 115a9adf mov eax, dword ptr [0x115d2fc0] */
  EAX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9ae4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115a9ae7 mov edx, dword ptr [0x115d2fb8] */
  EDX = (r32((uint32_t)(0x115d2fb8)));
  /* 115a9aed mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 115a9af8 mov eax, dword ptr [0x115d2fc0] */
  EAX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9afd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115a9b00 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 115a9b03 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115a9b06 mov eax, dword ptr [0x115d2fc0] */
  EAX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9b0b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115a9b0e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 115a9b11 mov edx, dword ptr [0x115d2fc0] */
  EDX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9b17 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115a9b1a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 115a9b1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a9b20 jne 0x115a9b36 */
  if (!C.zf) goto L_115a9b36;
  /* 115a9b22 mov edx, dword ptr [0x115d2fc0] */
  EDX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9b28 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 115a9b2b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 115a9b2d mov ecx, dword ptr [0x115d2fc0] */
  ECX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9b33 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_115a9b36:;
  /* 115a9b36 mov edx, dword ptr [0x115d2fc0] */
  EDX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9b3c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9b40 jne 0x115a9bd8 */
  if (!C.zf) goto L_115a9bd8;
  /* 115a9b46 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 115a9b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 115a9b4d mov eax, dword ptr [0x115d2fc0] */
  EAX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9b52 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115a9b55 push ecx */
  push32((uint32_t)(ECX));
  /* 115a9b56 call dword ptr [0x115d4358] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4358))), 0x115a9b5cu);
  /* 115a9b5c mov edx, dword ptr [0x115d2fc0] */
  EDX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9b62 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115a9b65 push eax */
  push32((uint32_t)(EAX));
  /* 115a9b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a9b68 mov ecx, dword ptr [0x115d2fcc] */
  ECX = (r32((uint32_t)(0x115d2fcc)));
  /* 115a9b6e push ecx */
  push32((uint32_t)(ECX));
  /* 115a9b6f call dword ptr [0x115d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4368))), 0x115a9b75u);
  /* 115a9b75 mov edx, dword ptr [0x115d2fc4] */
  EDX = (r32((uint32_t)(0x115d2fc4)));
  /* 115a9b7b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a9b7e mov eax, dword ptr [0x115d2fc8] */
  EAX = (r32((uint32_t)(0x115d2fc8)));
  /* 115a9b83 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9b85 mov ecx, dword ptr [0x115d2fc0] */
  ECX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9b8b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9b8e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9b90 push eax */
  push32((uint32_t)(EAX));
  /* 115a9b91 mov edx, dword ptr [0x115d2fc0] */
  EDX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9b97 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9b9a push edx */
  push32((uint32_t)(EDX));
  /* 115a9b9b mov eax, dword ptr [0x115d2fc0] */
  EAX = (r32((uint32_t)(0x115d2fc0)));
  /* 115a9ba0 push eax */
  push32((uint32_t)(EAX));
  /* 115a9ba1 call 0x115ad150 */
  push32(0x115a9ba6u); f_115ad150();
  /* 115a9ba6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9ba9 mov ecx, dword ptr [0x115d2fc4] */
  ECX = (r32((uint32_t)(0x115d2fc4)));
  /* 115a9baf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9bb2 mov dword ptr [0x115d2fc4], ecx */
  w32((uint32_t)(0x115d2fc4), (ECX));
  /* 115a9bb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9bbb cmp edx, dword ptr [0x115d2fc0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x115d2fc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9bc1 jbe 0x115a9bcc */
  if ((C.cf||C.zf)) goto L_115a9bcc;
  /* 115a9bc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9bc6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9bc9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_115a9bcc:;
  /* 115a9bcc mov ecx, dword ptr [0x115d2fc8] */
  ECX = (r32((uint32_t)(0x115d2fc8)));
  /* 115a9bd2 mov dword ptr [0x115d2fbc], ecx */
  w32((uint32_t)(0x115d2fbc), (ECX));
L_115a9bd8:;
  /* 115a9bd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9bdb mov dword ptr [0x115d2fc0], edx */
  w32((uint32_t)(0x115d2fc0), (EDX));
  /* 115a9be1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a9be4 mov dword ptr [0x115d2fb8], eax */
  w32((uint32_t)(0x115d2fb8), (EAX));
L_115a9be9:;
  /* 115a9be9 mov esp, ebp */
  ESP = (EBP);
  /* 115a9beb pop ebp */
  EBP = (pop32());
  /* 115a9bec ret  */
  ESPCHK(0x115a9620u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bf0 @ 0x115a9bf0 (1334 bytes, 427 insns) */
void f_115a9bf0(void) {
  FTRACE(0x115a9bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a9bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a9bf1 mov ebp, esp */
  EBP = (ESP);
  /* 115a9bf3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9bf6 push esi */
  push32((uint32_t)(ESI));
  /* 115a9bf7 mov eax, dword ptr [0x115d2fc4] */
  EAX = (r32((uint32_t)(0x115d2fc4)));
  /* 115a9bfc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a9bff mov ecx, dword ptr [0x115d2fc8] */
  ECX = (r32((uint32_t)(0x115d2fc8)));
  /* 115a9c05 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9c07 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 115a9c0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9c0d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9c10 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 115a9c13 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 115a9c16 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115a9c19 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 115a9c1c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9c1f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115a9c22 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9c26 jge 0x115a9c3c */
  if ((C.sf==C.of)) goto L_115a9c3c;
  /* 115a9c28 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a9c2b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115a9c2e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115a9c30 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 115a9c33 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 115a9c3a jmp 0x115a9c51 */
  goto L_115a9c51;
L_115a9c3c:;
  /* 115a9c3c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 115a9c43 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115a9c46 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9c49 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a9c4c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115a9c4e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_115a9c51:;
  /* 115a9c51 mov ecx, dword ptr [0x115d2fbc] */
  ECX = (r32((uint32_t)(0x115d2fbc)));
  /* 115a9c57 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_115a9c5a:;
  /* 115a9c5a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9c5d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9c60 jae 0x115a9c86 */
  if (!C.cf) goto L_115a9c86;
  /* 115a9c62 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9c65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a9c68 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 115a9c6a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9c6d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 115a9c70 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 115a9c73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115a9c75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a9c77 je 0x115a9c7b */
  if (C.zf) goto L_115a9c7b;
  /* 115a9c79 jmp 0x115a9c86 */
  goto L_115a9c86;
L_115a9c7b:;
  /* 115a9c7b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9c7e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9c81 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 115a9c84 jmp 0x115a9c5a */
  goto L_115a9c5a;
L_115a9c86:;
  /* 115a9c86 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9c89 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9c8c jne 0x115a9d6d */
  if (!C.zf) goto L_115a9d6d;
  /* 115a9c92 mov eax, dword ptr [0x115d2fc8] */
  EAX = (r32((uint32_t)(0x115d2fc8)));
  /* 115a9c97 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_115a9c9a:;
  /* 115a9c9a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9c9d cmp ecx, dword ptr [0x115d2fbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d2fbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9ca3 jae 0x115a9cc9 */
  if (!C.cf) goto L_115a9cc9;
  /* 115a9ca5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9ca8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a9cab and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 115a9cad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9cb0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 115a9cb3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 115a9cb6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115a9cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a9cba je 0x115a9cbe */
  if (C.zf) goto L_115a9cbe;
  /* 115a9cbc jmp 0x115a9cc9 */
  goto L_115a9cc9;
L_115a9cbe:;
  /* 115a9cbe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9cc1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9cc4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115a9cc7 jmp 0x115a9c9a */
  goto L_115a9c9a;
L_115a9cc9:;
  /* 115a9cc9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9ccc cmp ecx, dword ptr [0x115d2fbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d2fbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9cd2 jne 0x115a9d6d */
  if (!C.zf) goto L_115a9d6d;
L_115a9cd8:;
  /* 115a9cd8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9cdb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9cde jae 0x115a9cf6 */
  if (!C.cf) goto L_115a9cf6;
  /* 115a9ce0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9ce3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9ce7 je 0x115a9ceb */
  if (C.zf) goto L_115a9ceb;
  /* 115a9ce9 jmp 0x115a9cf6 */
  goto L_115a9cf6;
L_115a9ceb:;
  /* 115a9ceb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9cee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9cf1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 115a9cf4 jmp 0x115a9cd8 */
  goto L_115a9cd8;
L_115a9cf6:;
  /* 115a9cf6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9cf9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9cfc jne 0x115a9d47 */
  if (!C.zf) goto L_115a9d47;
  /* 115a9cfe mov eax, dword ptr [0x115d2fc8] */
  EAX = (r32((uint32_t)(0x115d2fc8)));
  /* 115a9d03 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_115a9d06:;
  /* 115a9d06 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9d09 cmp ecx, dword ptr [0x115d2fbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d2fbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9d0f jae 0x115a9d27 */
  if (!C.cf) goto L_115a9d27;
  /* 115a9d11 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9d14 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9d18 je 0x115a9d1c */
  if (C.zf) goto L_115a9d1c;
  /* 115a9d1a jmp 0x115a9d27 */
  goto L_115a9d27;
L_115a9d1c:;
  /* 115a9d1c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9d1f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9d22 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115a9d25 jmp 0x115a9d06 */
  goto L_115a9d06;
L_115a9d27:;
  /* 115a9d27 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9d2a cmp ecx, dword ptr [0x115d2fbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d2fbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9d30 jne 0x115a9d47 */
  if (!C.zf) goto L_115a9d47;
  /* 115a9d32 call 0x115aa130 */
  push32(0x115a9d37u); f_115aa130();
  /* 115a9d37 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115a9d3a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9d3e jne 0x115a9d47 */
  if (!C.zf) goto L_115a9d47;
  /* 115a9d40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a9d42 jmp 0x115aa121 */
  goto L_115aa121;
L_115a9d47:;
  /* 115a9d47 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9d4a push edx */
  push32((uint32_t)(EDX));
  /* 115a9d4b call 0x115aa240 */
  push32(0x115a9d50u); f_115aa240();
  /* 115a9d50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9d53 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9d56 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 115a9d59 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 115a9d5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9d5e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115a9d61 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9d64 jne 0x115a9d6d */
  if (!C.zf) goto L_115a9d6d;
  /* 115a9d66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a9d68 jmp 0x115aa121 */
  goto L_115aa121;
L_115a9d6d:;
  /* 115a9d6d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9d70 mov dword ptr [0x115d2fbc], edx */
  w32((uint32_t)(0x115d2fbc), (EDX));
  /* 115a9d76 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9d79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115a9d7c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 115a9d7f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9d82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a9d84 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 115a9d87 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9d8b je 0x115a9db0 */
  if (C.zf) goto L_115a9db0;
  /* 115a9d8d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9d90 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9d93 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a9d96 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 115a9d9a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9d9d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9da0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 115a9da3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 115a9daa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 115a9dac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a9dae jne 0x115a9de5 */
  if (!C.zf) goto L_115a9de5;
L_115a9db0:;
  /* 115a9db0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_115a9db7:;
  /* 115a9db7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9dba mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9dbd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a9dc0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 115a9dc4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9dc7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9dca mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 115a9dcd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 115a9dd4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 115a9dd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a9dd8 jne 0x115a9de5 */
  if (!C.zf) goto L_115a9de5;
  /* 115a9dda mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9ddd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9de0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 115a9de3 jmp 0x115a9db7 */
  goto L_115a9db7;
L_115a9de5:;
  /* 115a9de5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9de8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a9dee mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9df1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 115a9df8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a9dfb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 115a9e02 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9e05 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9e08 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a9e0b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 115a9e0f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 115a9e12 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9e16 jne 0x115a9e32 */
  if (!C.zf) goto L_115a9e32;
  /* 115a9e18 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 115a9e1f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9e22 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9e25 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 115a9e28 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 115a9e2f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_115a9e32:;
  /* 115a9e32 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9e36 jl 0x115a9e4b */
  if ((C.sf!=C.of)) goto L_115a9e4b;
  /* 115a9e38 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115a9e3b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115a9e3d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 115a9e40 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115a9e43 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9e46 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 115a9e49 jmp 0x115a9e32 */
  goto L_115a9e32;
L_115a9e4b:;
  /* 115a9e4b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 115a9e4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a9e51 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 115a9e55 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115a9e58 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a9e5b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a9e5d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9e60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a9e63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a9e66 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 115a9e69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9e6c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115a9e6f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9e73 jle 0x115a9e7c */
  if ((C.zf||C.sf!=C.of)) goto L_115a9e7c;
  /* 115a9e75 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_115a9e7c:;
  /* 115a9e7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a9e7f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9e82 je 0x115aa0a0 */
  if (C.zf) goto L_115aa0a0;
  /* 115a9e88 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a9e8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a9e8e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 115a9e91 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9e94 jne 0x115a9f6a */
  if (!C.zf) goto L_115a9f6a;
  /* 115a9e9a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9e9e jge 0x115a9eff */
  if ((C.sf==C.of)) goto L_115a9eff;
  /* 115a9ea0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115a9ea5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115a9ea8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115a9eaa not eax */
  EAX = (~(EAX));
  /* 115a9eac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9eaf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9eb2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 115a9eb6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115a9eb8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9ebb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9ebe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 115a9ec2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9ec5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9ec8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 115a9ecb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115a9ece mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9ed1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9ed4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 115a9ed7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9eda add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9edd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 115a9ee1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a9ee3 jne 0x115a9efd */
  if (!C.zf) goto L_115a9efd;
  /* 115a9ee5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115a9eea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115a9eed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115a9eef not eax */
  EAX = (~(EAX));
  /* 115a9ef1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9ef4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a9ef6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 115a9ef8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9efb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_115a9efd:;
  /* 115a9efd jmp 0x115a9f6a */
  goto L_115a9f6a;
L_115a9eff:;
  /* 115a9eff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115a9f02 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9f05 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115a9f0a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115a9f0c not edx */
  EDX = (~(EDX));
  /* 115a9f0e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9f11 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9f14 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 115a9f1b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115a9f1d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115a9f20 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9f23 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 115a9f2a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9f2d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9f30 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115a9f33 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115a9f36 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9f39 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9f3c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 115a9f3f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9f42 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9f45 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 115a9f49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a9f4b jne 0x115a9f6a */
  if (!C.zf) goto L_115a9f6a;
  /* 115a9f4d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115a9f50 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9f53 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115a9f58 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115a9f5a not edx */
  EDX = (~(EDX));
  /* 115a9f5c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9f5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115a9f62 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 115a9f64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a9f67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_115a9f6a:;
  /* 115a9f6a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a9f6d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115a9f70 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a9f73 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 115a9f76 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 115a9f79 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a9f7c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115a9f7f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a9f82 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115a9f85 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 115a9f88 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9f8c je 0x115aa0a0 */
  if (C.zf) goto L_115aa0a0;
  /* 115a9f92 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a9f95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a9f98 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 115a9f9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115a9f9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a9fa1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a9fa4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115a9fa7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 115a9faa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a9fad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a9fb0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 115a9fb3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a9fb6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a9fb9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 115a9fbc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a9fbf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115a9fc2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a9fc5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 115a9fc8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a9fcb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a9fce mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 115a9fd1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9fd4 jne 0x115aa0a0 */
  if (!C.zf) goto L_115aa0a0;
  /* 115a9fda cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9fde jge 0x115aa03a */
  if ((C.sf==C.of)) goto L_115aa03a;
  /* 115a9fe0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9fe3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9fe6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 115a9fea mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9fed add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9ff0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 115a9ff3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 115a9ff5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 115a9ff8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9ffb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 115a9ffe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115aa000 jne 0x115aa018 */
  if (!C.zf) goto L_115aa018;
  /* 115aa002 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115aa007 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa00a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115aa00c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa00f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115aa011 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 115aa013 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa016 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_115aa018:;
  /* 115aa018 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115aa01d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa020 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115aa022 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa025 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 115aa028 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 115aa02c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115aa02e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa031 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 115aa034 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 115aa038 jmp 0x115aa0a0 */
  goto L_115aa0a0;
L_115aa03a:;
  /* 115aa03a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 115aa03d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa040 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 115aa044 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 115aa047 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa04a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 115aa04d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 115aa04f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 115aa052 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa055 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 115aa058 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115aa05a jne 0x115aa077 */
  if (!C.zf) goto L_115aa077;
  /* 115aa05c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa05f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa062 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115aa067 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115aa069 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa06c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115aa06f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 115aa071 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa074 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_115aa077:;
  /* 115aa077 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa07a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa07d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115aa082 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115aa084 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa087 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 115aa08a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 115aa091 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115aa093 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa096 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 115aa099 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_115aa0a0:;
  /* 115aa0a0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa0a4 je 0x115aa0ba */
  if (C.zf) goto L_115aa0ba;
  /* 115aa0a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa0a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aa0ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115aa0ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa0b1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa0b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aa0b7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_115aa0ba:;
  /* 115aa0ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa0bd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa0c0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115aa0c3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aa0c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa0c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa0cc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115aa0ce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aa0d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa0d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa0d7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa0da mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 115aa0dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa0e0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115aa0e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa0e5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115aa0e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa0ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa0ed mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 115aa0ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115aa0f1 jne 0x115aa113 */
  if (!C.zf) goto L_115aa113;
  /* 115aa0f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa0f6 cmp eax, dword ptr [0x115d2fc0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d2fc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa0fc jne 0x115aa113 */
  if (!C.zf) goto L_115aa113;
  /* 115aa0fe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa101 cmp ecx, dword ptr [0x115d2fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d2fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa107 jne 0x115aa113 */
  if (!C.zf) goto L_115aa113;
  /* 115aa109 mov dword ptr [0x115d2fc0], 0 */
  w32((uint32_t)(0x115d2fc0), (0x0u));
L_115aa113:;
  /* 115aa113 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 115aa116 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa119 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 115aa11b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa11e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_115aa121:;
  /* 115aa121 pop esi */
  ESI = (pop32());
  /* 115aa122 mov esp, ebp */
  ESP = (EBP);
  /* 115aa124 pop ebp */
  EBP = (pop32());
  /* 115aa125 ret  */
  ESPCHK(0x115a9bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a130 @ 0x115aa130 (271 bytes, 78 insns) */
void f_115aa130(void) {
  FTRACE(0x115aa130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115aa130 push ebp */
  push32((uint32_t)(EBP));
  /* 115aa131 mov ebp, esp */
  EBP = (ESP);
  /* 115aa133 push ecx */
  push32((uint32_t)(ECX));
  /* 115aa134 mov eax, dword ptr [0x115d2fc4] */
  EAX = (r32((uint32_t)(0x115d2fc4)));
  /* 115aa139 cmp eax, dword ptr [0x115d2fa8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d2fa8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa13f jne 0x115aa18b */
  if (!C.zf) goto L_115aa18b;
  /* 115aa141 mov ecx, dword ptr [0x115d2fa8] */
  ECX = (r32((uint32_t)(0x115d2fa8)));
  /* 115aa147 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa14a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115aa14d push ecx */
  push32((uint32_t)(ECX));
  /* 115aa14e mov edx, dword ptr [0x115d2fc8] */
  EDX = (r32((uint32_t)(0x115d2fc8)));
  /* 115aa154 push edx */
  push32((uint32_t)(EDX));
  /* 115aa155 push 0 */
  push32((uint32_t)(0x0u));
  /* 115aa157 mov eax, dword ptr [0x115d2fcc] */
  EAX = (r32((uint32_t)(0x115d2fcc)));
  /* 115aa15c push eax */
  push32((uint32_t)(EAX));
  /* 115aa15d call dword ptr [0x115d4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4344))), 0x115aa163u);
  /* 115aa163 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115aa166 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa16a jne 0x115aa173 */
  if (!C.zf) goto L_115aa173;
  /* 115aa16c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115aa16e jmp 0x115aa23b */
  goto L_115aa23b;
L_115aa173:;
  /* 115aa173 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa176 mov dword ptr [0x115d2fc8], ecx */
  w32((uint32_t)(0x115d2fc8), (ECX));
  /* 115aa17c mov edx, dword ptr [0x115d2fa8] */
  EDX = (r32((uint32_t)(0x115d2fa8)));
  /* 115aa182 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa185 mov dword ptr [0x115d2fa8], edx */
  w32((uint32_t)(0x115d2fa8), (EDX));
L_115aa18b:;
  /* 115aa18b mov eax, dword ptr [0x115d2fc4] */
  EAX = (r32((uint32_t)(0x115d2fc4)));
  /* 115aa190 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115aa193 mov ecx, dword ptr [0x115d2fc8] */
  ECX = (r32((uint32_t)(0x115d2fc8)));
  /* 115aa199 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa19b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115aa19e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 115aa1a3 push 8 */
  push32((uint32_t)(0x8u));
  /* 115aa1a5 mov edx, dword ptr [0x115d2fcc] */
  EDX = (r32((uint32_t)(0x115d2fcc)));
  /* 115aa1ab push edx */
  push32((uint32_t)(EDX));
  /* 115aa1ac call dword ptr [0x115d433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d433c))), 0x115aa1b2u);
  /* 115aa1b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa1b5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 115aa1b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa1bb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa1bf jne 0x115aa1c5 */
  if (!C.zf) goto L_115aa1c5;
  /* 115aa1c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115aa1c3 jmp 0x115aa23b */
  goto L_115aa23b;
L_115aa1c5:;
  /* 115aa1c5 push 4 */
  push32((uint32_t)(0x4u));
  /* 115aa1c7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 115aa1cc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 115aa1d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115aa1d3 call dword ptr [0x115d4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4334))), 0x115aa1d9u);
  /* 115aa1d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa1dc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 115aa1df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa1e2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa1e6 jne 0x115aa202 */
  if (!C.zf) goto L_115aa202;
  /* 115aa1e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa1eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115aa1ee push ecx */
  push32((uint32_t)(ECX));
  /* 115aa1ef push 0 */
  push32((uint32_t)(0x0u));
  /* 115aa1f1 mov edx, dword ptr [0x115d2fcc] */
  EDX = (r32((uint32_t)(0x115d2fcc)));
  /* 115aa1f7 push edx */
  push32((uint32_t)(EDX));
  /* 115aa1f8 call dword ptr [0x115d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4368))), 0x115aa1feu);
  /* 115aa1fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115aa200 jmp 0x115aa23b */
  goto L_115aa23b;
L_115aa202:;
  /* 115aa202 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa205 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115aa20b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa20e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 115aa215 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa218 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 115aa21f mov eax, dword ptr [0x115d2fc4] */
  EAX = (r32((uint32_t)(0x115d2fc4)));
  /* 115aa224 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa227 mov dword ptr [0x115d2fc4], eax */
  w32((uint32_t)(0x115d2fc4), (EAX));
  /* 115aa22c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa22f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 115aa232 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 115aa238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115aa23b:;
  /* 115aa23b mov esp, ebp */
  ESP = (EBP);
  /* 115aa23d pop ebp */
  EBP = (pop32());
  /* 115aa23e ret  */
  ESPCHK(0x115aa130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a240 @ 0x115aa240 (494 bytes, 149 insns) */
void f_115aa240(void) {
  FTRACE(0x115aa240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115aa240 push ebp */
  push32((uint32_t)(EBP));
  /* 115aa241 mov ebp, esp */
  EBP = (ESP);
  /* 115aa243 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa249 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115aa24c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 115aa24f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa252 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115aa255 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115aa258 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_115aa25f:;
  /* 115aa25f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa263 jl 0x115aa278 */
  if ((C.sf!=C.of)) goto L_115aa278;
  /* 115aa265 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aa268 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 115aa26a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115aa26d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aa270 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa273 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 115aa276 jmp 0x115aa25f */
  goto L_115aa25f;
L_115aa278:;
  /* 115aa278 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aa27b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115aa281 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa284 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 115aa28b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 115aa28e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 115aa295 jmp 0x115aa2a0 */
  goto L_115aa2a0;
L_115aa297:;
  /* 115aa297 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa29a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa29d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_115aa2a0:;
  /* 115aa2a0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa2a4 jge 0x115aa2c6 */
  if ((C.sf==C.of)) goto L_115aa2c6;
  /* 115aa2a6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa2a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aa2ac lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 115aa2af mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115aa2b2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa2b5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa2b8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 115aa2bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa2be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa2c1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 115aa2c4 jmp 0x115aa297 */
  goto L_115aa297;
L_115aa2c6:;
  /* 115aa2c6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aa2c9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 115aa2cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa2cf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115aa2d2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa2d4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115aa2d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 115aa2d9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 115aa2de push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 115aa2e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa2e6 push edx */
  push32((uint32_t)(EDX));
  /* 115aa2e7 call dword ptr [0x115d4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4334))), 0x115aa2edu);
  /* 115aa2ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115aa2ef jne 0x115aa2f9 */
  if (!C.zf) goto L_115aa2f9;
  /* 115aa2f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115aa2f4 jmp 0x115aa42a */
  goto L_115aa42a;
L_115aa2f9:;
  /* 115aa2f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa2fc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa301 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 115aa304 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa307 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115aa30a jmp 0x115aa318 */
  goto L_115aa318;
L_115aa30c:;
  /* 115aa30c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa30f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa315 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115aa318:;
  /* 115aa318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa31b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa31e ja 0x115aa37d */
  if ((!C.cf&&!C.zf)) goto L_115aa37d;
  /* 115aa320 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa323 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 115aa32a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa32d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 115aa337 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa33a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa33d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115aa340 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa343 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 115aa349 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa34c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa352 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa355 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 115aa358 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa35b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa361 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa364 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 115aa367 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa36a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa36f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115aa372 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115aa375 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 115aa37b jmp 0x115aa30c */
  goto L_115aa30c;
L_115aa37d:;
  /* 115aa37d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aa380 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa386 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115aa389 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa38c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa38f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa392 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 115aa395 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa398 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 115aa39b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115aa39e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa3a1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa3a4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 115aa3a7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115aa3aa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa3ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa3b0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 115aa3b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa3b6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115aa3b9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115aa3bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa3bf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa3c2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 115aa3c5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aa3c8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa3cb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 115aa3d3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aa3d6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa3d9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 115aa3e4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa3e7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 115aa3eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa3ee mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 115aa3f1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 115aa3f4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa3f7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 115aa3fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115aa3fc jne 0x115aa40d */
  if (!C.zf) goto L_115aa40d;
  /* 115aa3fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa401 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115aa404 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 115aa407 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa40a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_115aa40d:;
  /* 115aa40d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115aa412 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aa415 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115aa417 not edx */
  EDX = (~(EDX));
  /* 115aa419 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa41c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115aa41f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 115aa421 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa424 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 115aa427 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_115aa42a:;
  /* 115aa42a mov esp, ebp */
  ESP = (EBP);
  /* 115aa42c pop ebp */
  EBP = (pop32());
  /* 115aa42d ret  */
  ESPCHK(0x115aa240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a430 @ 0x115aa430 (1515 bytes, 489 insns) */
void f_115aa430(void) {
  FTRACE(0x115aa430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115aa430 push ebp */
  push32((uint32_t)(EBP));
  /* 115aa431 mov ebp, esp */
  EBP = (ESP);
  /* 115aa433 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa436 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115aa439 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa43c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 115aa43e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 115aa441 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa444 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 115aa447 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 115aa44a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa44d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115aa450 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa453 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115aa456 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aa459 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 115aa45c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115aa45f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa462 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115aa468 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa46b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 115aa472 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115aa475 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115aa478 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa47b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115aa47e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa481 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115aa483 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa486 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 115aa489 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa48c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa48f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 115aa492 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa495 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115aa497 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 115aa49a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115aa49d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa4a0 jle 0x115aa756 */
  if ((C.zf||C.sf!=C.of)) goto L_115aa756;
  /* 115aa4a6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa4a9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115aa4ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115aa4ae jne 0x115aa4bb */
  if (!C.zf) goto L_115aa4bb;
  /* 115aa4b0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aa4b3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa4b6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa4b9 jle 0x115aa4c2 */
  if ((C.zf||C.sf!=C.of)) goto L_115aa4c2;
L_115aa4bb:;
  /* 115aa4bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115aa4bd jmp 0x115aaa17 */
  goto L_115aaa17;
L_115aa4c2:;
  /* 115aa4c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa4c5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 115aa4c8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa4cb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115aa4ce cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa4d2 jbe 0x115aa4db */
  if ((C.cf||C.zf)) goto L_115aa4db;
  /* 115aa4d4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_115aa4db:;
  /* 115aa4db mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa4de mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa4e1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 115aa4e4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa4e7 jne 0x115aa5bd */
  if (!C.zf) goto L_115aa5bd;
  /* 115aa4ed cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa4f1 jae 0x115aa552 */
  if (!C.cf) goto L_115aa552;
  /* 115aa4f3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115aa4f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa4fb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115aa4fd not edx */
  EDX = (~(EDX));
  /* 115aa4ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa502 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa505 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 115aa509 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115aa50b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa50e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa511 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 115aa515 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa518 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa51b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115aa51e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115aa521 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa524 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa527 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 115aa52a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa52d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa530 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 115aa534 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115aa536 jne 0x115aa550 */
  if (!C.zf) goto L_115aa550;
  /* 115aa538 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115aa53d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa540 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115aa542 not edx */
  EDX = (~(EDX));
  /* 115aa544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa547 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115aa549 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 115aa54b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa54e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_115aa550:;
  /* 115aa550 jmp 0x115aa5bd */
  goto L_115aa5bd;
L_115aa552:;
  /* 115aa552 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa555 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa558 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115aa55d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115aa55f not eax */
  EAX = (~(EAX));
  /* 115aa561 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa564 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa567 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 115aa56e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115aa570 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa573 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa576 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 115aa57d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa580 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa583 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 115aa586 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115aa589 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa58c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa58f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 115aa592 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa595 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa598 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 115aa59c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115aa59e jne 0x115aa5bd */
  if (!C.zf) goto L_115aa5bd;
  /* 115aa5a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa5a3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa5a6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115aa5ab shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115aa5ad not eax */
  EAX = (~(EAX));
  /* 115aa5af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa5b2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115aa5b5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 115aa5b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa5ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_115aa5bd:;
  /* 115aa5bd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa5c0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115aa5c3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa5c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115aa5c9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 115aa5cc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa5cf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 115aa5d2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa5d5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115aa5d8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 115aa5db mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aa5de add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa5e1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa5e4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115aa5e7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa5eb jle 0x115aa737 */
  if ((C.zf||C.sf!=C.of)) goto L_115aa737;
  /* 115aa5f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa5f4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa5f7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 115aa5fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa5fd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 115aa600 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa603 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 115aa606 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa60a jbe 0x115aa613 */
  if ((C.cf||C.zf)) goto L_115aa613;
  /* 115aa60c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_115aa613:;
  /* 115aa613 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa616 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aa619 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 115aa61c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 115aa61f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa622 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa625 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115aa628 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 115aa62b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa62e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa631 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 115aa634 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa637 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa63a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 115aa63d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa640 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115aa643 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa646 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 115aa649 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa64c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa64f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 115aa652 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa655 jne 0x115aa723 */
  if (!C.zf) goto L_115aa723;
  /* 115aa65b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa65f jae 0x115aa6bc */
  if (!C.cf) goto L_115aa6bc;
  /* 115aa661 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa664 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa667 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 115aa66b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa66e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa671 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115aa674 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 115aa677 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa67a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa67d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 115aa680 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115aa682 jne 0x115aa69a */
  if (!C.zf) goto L_115aa69a;
  /* 115aa684 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115aa689 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa68c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115aa68e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa691 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115aa693 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 115aa695 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa698 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_115aa69a:;
  /* 115aa69a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115aa69f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa6a2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115aa6a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa6a7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa6aa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 115aa6ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115aa6b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa6b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa6b6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 115aa6ba jmp 0x115aa723 */
  goto L_115aa723;
L_115aa6bc:;
  /* 115aa6bc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa6bf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa6c2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 115aa6c6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa6c9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa6cc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115aa6cf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 115aa6d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa6d5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa6d8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 115aa6db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115aa6dd jne 0x115aa6fa */
  if (!C.zf) goto L_115aa6fa;
  /* 115aa6df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa6e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa6e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115aa6ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115aa6ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa6ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115aa6f2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 115aa6f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa6f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_115aa6fa:;
  /* 115aa6fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa6fd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa700 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115aa705 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115aa707 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa70a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa70d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 115aa714 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115aa716 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa719 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa71c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_115aa723:;
  /* 115aa723 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa726 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa729 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 115aa72b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa72e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa731 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa734 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_115aa737:;
  /* 115aa737 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115aa73a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa73d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa740 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115aa742 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115aa745 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa748 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa74b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa74e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 115aa751 jmp 0x115aaa12 */
  goto L_115aaa12;
L_115aa756:;
  /* 115aa756 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115aa759 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa75c jge 0x115aaa12 */
  if ((C.sf==C.of)) goto L_115aaa12;
  /* 115aa762 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115aa765 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa768 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa76b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115aa76d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115aa770 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa773 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa776 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa779 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 115aa77c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa77f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa782 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115aa785 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aa788 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa78b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 115aa78e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aa791 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 115aa794 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa797 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 115aa79a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa79e jbe 0x115aa7a7 */
  if ((C.cf||C.zf)) goto L_115aa7a7;
  /* 115aa7a0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_115aa7a7:;
  /* 115aa7a7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa7aa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 115aa7ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115aa7af jne 0x115aa8f0 */
  if (!C.zf) goto L_115aa8f0;
  /* 115aa7b5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aa7b8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 115aa7bb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa7be mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115aa7c1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa7c5 jbe 0x115aa7ce */
  if ((C.cf||C.zf)) goto L_115aa7ce;
  /* 115aa7c7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_115aa7ce:;
  /* 115aa7ce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa7d1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa7d4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 115aa7d7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa7da jne 0x115aa8b0 */
  if (!C.zf) goto L_115aa8b0;
  /* 115aa7e0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa7e4 jae 0x115aa845 */
  if (!C.cf) goto L_115aa845;
  /* 115aa7e6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115aa7eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa7ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115aa7f0 not edx */
  EDX = (~(EDX));
  /* 115aa7f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa7f5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa7f8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 115aa7fc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115aa7fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa801 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa804 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 115aa808 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa80b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa80e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115aa811 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115aa814 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa817 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa81a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 115aa81d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa820 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa823 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 115aa827 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115aa829 jne 0x115aa843 */
  if (!C.zf) goto L_115aa843;
  /* 115aa82b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115aa830 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa833 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115aa835 not edx */
  EDX = (~(EDX));
  /* 115aa837 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa83a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115aa83c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 115aa83e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa841 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_115aa843:;
  /* 115aa843 jmp 0x115aa8b0 */
  goto L_115aa8b0;
L_115aa845:;
  /* 115aa845 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa848 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa84b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115aa850 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115aa852 not eax */
  EAX = (~(EAX));
  /* 115aa854 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa857 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa85a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 115aa861 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115aa863 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa866 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa869 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 115aa870 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa873 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa876 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 115aa879 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115aa87c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa87f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa882 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 115aa885 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa888 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa88b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 115aa88f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115aa891 jne 0x115aa8b0 */
  if (!C.zf) goto L_115aa8b0;
  /* 115aa893 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115aa896 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa899 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115aa89e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115aa8a0 not eax */
  EAX = (~(EAX));
  /* 115aa8a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa8a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115aa8a8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 115aa8aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa8ad mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_115aa8b0:;
  /* 115aa8b0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa8b3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115aa8b6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa8b9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115aa8bc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 115aa8bf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa8c2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 115aa8c5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115aa8c8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115aa8cb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 115aa8ce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aa8d1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa8d4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 115aa8d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aa8da sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 115aa8dd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa8e0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 115aa8e3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa8e7 jbe 0x115aa8f0 */
  if ((C.cf||C.zf)) goto L_115aa8f0;
  /* 115aa8e9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_115aa8f0:;
  /* 115aa8f0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115aa8f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aa8f6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 115aa8f9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 115aa8fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa8ff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa902 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115aa905 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 115aa908 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa90b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa90e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 115aa911 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aa914 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa917 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 115aa91a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa91d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115aa920 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa923 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 115aa926 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa929 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aa92c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 115aa92f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa932 jne 0x115aa9fe */
  if (!C.zf) goto L_115aa9fe;
  /* 115aa938 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aa93c jae 0x115aa998 */
  if (!C.cf) goto L_115aa998;
  /* 115aa93e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa941 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa944 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 115aa948 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa94b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa94e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 115aa951 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 115aa953 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa956 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa959 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 115aa95c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115aa95e jne 0x115aa976 */
  if (!C.zf) goto L_115aa976;
  /* 115aa960 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115aa965 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115aa968 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115aa96a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa96d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115aa96f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 115aa971 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa974 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_115aa976:;
  /* 115aa976 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115aa97b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115aa97e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115aa980 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa983 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa986 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 115aa98a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115aa98c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa98f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa992 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 115aa996 jmp 0x115aa9fe */
  goto L_115aa9fe;
L_115aa998:;
  /* 115aa998 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa99b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa99e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 115aa9a2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa9a5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa9a8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 115aa9ab add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 115aa9ad mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa9b0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aa9b3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 115aa9b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115aa9b8 jne 0x115aa9d5 */
  if (!C.zf) goto L_115aa9d5;
  /* 115aa9ba mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115aa9bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa9c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 115aa9c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 115aa9c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa9ca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115aa9cd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 115aa9cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aa9d2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_115aa9d5:;
  /* 115aa9d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115aa9d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aa9db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115aa9e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115aa9e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa9e5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa9e8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 115aa9ef or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115aa9f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aa9f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115aa9f7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_115aa9fe:;
  /* 115aa9fe mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aaa01 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aaa04 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115aaa06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aaa09 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aaa0c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115aaa0f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_115aaa12:;
  /* 115aaa12 mov eax, 1 */
  EAX = (0x1u);
L_115aaa17:;
  /* 115aaa17 mov esp, ebp */
  ESP = (EBP);
  /* 115aaa19 pop ebp */
  EBP = (pop32());
  /* 115aaa1a ret  */
  ESPCHK(0x115aa430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa20 @ 0x115aaa20 (304 bytes, 79 insns) */
void f_115aaa20(void) {
  FTRACE(0x115aaa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115aaa20 push ebp */
  push32((uint32_t)(EBP));
  /* 115aaa21 mov ebp, esp */
  EBP = (ESP);
  /* 115aaa23 push ecx */
  push32((uint32_t)(ECX));
  /* 115aaa24 cmp dword ptr [0x115d2fc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d2fc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aaa2b je 0x115aab4c */
  if (C.zf) goto L_115aab4c;
  /* 115aaa31 mov eax, dword ptr [0x115d2fb8] */
  EAX = (r32((uint32_t)(0x115d2fb8)));
  /* 115aaa36 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 115aaa39 mov ecx, dword ptr [0x115d2fc0] */
  ECX = (r32((uint32_t)(0x115d2fc0)));
  /* 115aaa3f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115aaa42 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aaa44 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115aaa47 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 115aaa4c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 115aaa51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aaa54 push eax */
  push32((uint32_t)(EAX));
  /* 115aaa55 call dword ptr [0x115d4358] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4358))), 0x115aaa5bu);
  /* 115aaa5b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115aaa60 mov ecx, dword ptr [0x115d2fb8] */
  ECX = (r32((uint32_t)(0x115d2fb8)));
  /* 115aaa66 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115aaa68 mov eax, dword ptr [0x115d2fc0] */
  EAX = (r32((uint32_t)(0x115d2fc0)));
  /* 115aaa6d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115aaa70 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 115aaa72 mov edx, dword ptr [0x115d2fc0] */
  EDX = (r32((uint32_t)(0x115d2fc0)));
  /* 115aaa78 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 115aaa7b mov eax, dword ptr [0x115d2fc0] */
  EAX = (r32((uint32_t)(0x115d2fc0)));
  /* 115aaa80 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115aaa83 mov edx, dword ptr [0x115d2fb8] */
  EDX = (r32((uint32_t)(0x115d2fb8)));
  /* 115aaa89 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 115aaa94 mov eax, dword ptr [0x115d2fc0] */
  EAX = (r32((uint32_t)(0x115d2fc0)));
  /* 115aaa99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115aaa9c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 115aaa9f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 115aaaa2 mov eax, dword ptr [0x115d2fc0] */
  EAX = (r32((uint32_t)(0x115d2fc0)));
  /* 115aaaa7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115aaaaa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 115aaaad mov edx, dword ptr [0x115d2fc0] */
  EDX = (r32((uint32_t)(0x115d2fc0)));
  /* 115aaab3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115aaab6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 115aaaba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115aaabc jne 0x115aaad2 */
  if (!C.zf) goto L_115aaad2;
  /* 115aaabe mov edx, dword ptr [0x115d2fc0] */
  EDX = (r32((uint32_t)(0x115d2fc0)));
  /* 115aaac4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 115aaac7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 115aaac9 mov ecx, dword ptr [0x115d2fc0] */
  ECX = (r32((uint32_t)(0x115d2fc0)));
  /* 115aaacf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_115aaad2:;
  /* 115aaad2 mov edx, dword ptr [0x115d2fc0] */
  EDX = (r32((uint32_t)(0x115d2fc0)));
  /* 115aaad8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aaadc jne 0x115aab42 */
  if (!C.zf) goto L_115aab42;
  /* 115aaade cmp dword ptr [0x115d2fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d2fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aaae5 jle 0x115aab42 */
  if ((C.zf||C.sf!=C.of)) goto L_115aab42;
  /* 115aaae7 mov eax, dword ptr [0x115d2fc0] */
  EAX = (r32((uint32_t)(0x115d2fc0)));
  /* 115aaaec mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115aaaef push ecx */
  push32((uint32_t)(ECX));
  /* 115aaaf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115aaaf2 mov edx, dword ptr [0x115d2fcc] */
  EDX = (r32((uint32_t)(0x115d2fcc)));
  /* 115aaaf8 push edx */
  push32((uint32_t)(EDX));
  /* 115aaaf9 call dword ptr [0x115d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4368))), 0x115aaaffu);
  /* 115aaaff mov eax, dword ptr [0x115d2fc4] */
  EAX = (r32((uint32_t)(0x115d2fc4)));
  /* 115aab04 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115aab07 mov ecx, dword ptr [0x115d2fc8] */
  ECX = (r32((uint32_t)(0x115d2fc8)));
  /* 115aab0d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aab0f mov edx, dword ptr [0x115d2fc0] */
  EDX = (r32((uint32_t)(0x115d2fc0)));
  /* 115aab15 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aab18 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aab1a push ecx */
  push32((uint32_t)(ECX));
  /* 115aab1b mov eax, dword ptr [0x115d2fc0] */
  EAX = (r32((uint32_t)(0x115d2fc0)));
  /* 115aab20 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aab23 push eax */
  push32((uint32_t)(EAX));
  /* 115aab24 mov ecx, dword ptr [0x115d2fc0] */
  ECX = (r32((uint32_t)(0x115d2fc0)));
  /* 115aab2a push ecx */
  push32((uint32_t)(ECX));
  /* 115aab2b call 0x115ad150 */
  push32(0x115aab30u); f_115ad150();
  /* 115aab30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aab33 mov edx, dword ptr [0x115d2fc4] */
  EDX = (r32((uint32_t)(0x115d2fc4)));
  /* 115aab39 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aab3c mov dword ptr [0x115d2fc4], edx */
  w32((uint32_t)(0x115d2fc4), (EDX));
L_115aab42:;
  /* 115aab42 mov dword ptr [0x115d2fc0], 0 */
  w32((uint32_t)(0x115d2fc0), (0x0u));
L_115aab4c:;
  /* 115aab4c mov esp, ebp */
  ESP = (EBP);
  /* 115aab4e pop ebp */
  EBP = (pop32());
  /* 115aab4f ret  */
  ESPCHK(0x115aaa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab50 @ 0x115aab50 (1565 bytes, 343 insns) */
void f_115aab50(void) {
  FTRACE(0x115aab50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115aab50 push ebp */
  push32((uint32_t)(EBP));
  /* 115aab51 mov ebp, esp */
  EBP = (ESP);
  /* 115aab53 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aab59 mov eax, dword ptr [0x115d2fc4] */
  EAX = (r32((uint32_t)(0x115d2fc4)));
  /* 115aab5e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115aab61 push eax */
  push32((uint32_t)(EAX));
  /* 115aab62 mov ecx, dword ptr [0x115d2fc8] */
  ECX = (r32((uint32_t)(0x115d2fc8)));
  /* 115aab68 push ecx */
  push32((uint32_t)(ECX));
  /* 115aab69 call dword ptr [0x115d4384] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4384))), 0x115aab6fu);
  /* 115aab6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115aab71 je 0x115aab7b */
  if (C.zf) goto L_115aab7b;
  /* 115aab73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115aab76 jmp 0x115ab169 */
  goto L_115ab169;
L_115aab7b:;
  /* 115aab7b mov edx, dword ptr [0x115d2fc8] */
  EDX = (r32((uint32_t)(0x115d2fc8)));
  /* 115aab81 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 115aab87 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 115aab91 jmp 0x115aaba2 */
  goto L_115aaba2;
L_115aab93:;
  /* 115aab93 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 115aab99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aab9c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_115aaba2:;
  /* 115aaba2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 115aaba8 cmp ecx, dword ptr [0x115d2fc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d2fc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aabae jge 0x115ab167 */
  if ((C.sf==C.of)) goto L_115ab167;
  /* 115aabb4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 115aabba mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115aabbd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 115aabc3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 115aabc8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 115aabce push ecx */
  push32((uint32_t)(ECX));
  /* 115aabcf call dword ptr [0x115d4384] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4384))), 0x115aabd5u);
  /* 115aabd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115aabd7 je 0x115aabe3 */
  if (C.zf) goto L_115aabe3;
  /* 115aabd9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 115aabde jmp 0x115ab169 */
  goto L_115ab169;
L_115aabe3:;
  /* 115aabe3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 115aabe9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 115aabec mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 115aabf2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 115aabf8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aabfe mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 115aac01 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 115aac07 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115aac0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115aac0d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 115aac17 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 115aac21 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115aac28 jmp 0x115aac33 */
  goto L_115aac33;
L_115aac2a:;
  /* 115aac2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aac2d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aac30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_115aac33:;
  /* 115aac33 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aac37 jge 0x115ab12b */
  if ((C.sf==C.of)) goto L_115ab12b;
  /* 115aac3d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 115aac47 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 115aac51 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 115aac5b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 115aac65 jmp 0x115aac76 */
  goto L_115aac76;
L_115aac67:;
  /* 115aac67 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 115aac6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aac70 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_115aac76:;
  /* 115aac76 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aac7d jge 0x115aac92 */
  if ((C.sf==C.of)) goto L_115aac92;
  /* 115aac7f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 115aac85 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 115aac90 jmp 0x115aac67 */
  goto L_115aac67;
L_115aac92:;
  /* 115aac92 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aac96 jl 0x115ab0cd */
  if ((C.sf!=C.of)) goto L_115ab0cd;
  /* 115aac9c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 115aaca1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 115aaca7 push ecx */
  push32((uint32_t)(ECX));
  /* 115aaca8 call dword ptr [0x115d4384] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4384))), 0x115aacaeu);
  /* 115aacae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115aacb0 je 0x115aacbc */
  if (C.zf) goto L_115aacbc;
  /* 115aacb2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 115aacb7 jmp 0x115ab169 */
  goto L_115ab169;
L_115aacbc:;
  /* 115aacbc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 115aacc2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115aacc5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 115aaccf jmp 0x115aace0 */
  goto L_115aace0;
L_115aacd1:;
  /* 115aacd1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 115aacd7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aacda mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_115aace0:;
  /* 115aace0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aace7 jge 0x115aae64 */
  if ((C.sf==C.of)) goto L_115aae64;
  /* 115aaced mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aacf0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aacf3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 115aacf9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 115aacff add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aad05 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 115aad0b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 115aad11 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aad15 jne 0x115aad22 */
  if (!C.zf) goto L_115aad22;
  /* 115aad17 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 115aad1d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aad20 je 0x115aad2c */
  if (C.zf) goto L_115aad2c;
L_115aad22:;
  /* 115aad22 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 115aad27 jmp 0x115ab169 */
  goto L_115ab169;
L_115aad2c:;
  /* 115aad2c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 115aad32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115aad34 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 115aad3a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 115aad40 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 115aad46 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 115aad4c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 115aad4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115aad51 je 0x115aad89 */
  if (C.zf) goto L_115aad89;
  /* 115aad53 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 115aad59 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aad5c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 115aad62 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aad6c jle 0x115aad78 */
  if ((C.zf||C.sf!=C.of)) goto L_115aad78;
  /* 115aad6e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 115aad73 jmp 0x115ab169 */
  goto L_115ab169;
L_115aad78:;
  /* 115aad78 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 115aad7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aad81 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 115aad87 jmp 0x115aadcb */
  goto L_115aadcb;
L_115aad89:;
  /* 115aad89 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 115aad8f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 115aad92 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aad95 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 115aad9b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aada2 jle 0x115aadae */
  if ((C.zf||C.sf!=C.of)) goto L_115aadae;
  /* 115aada4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_115aadae:;
  /* 115aadae mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 115aadb4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 115aadbb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aadbe mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 115aadc4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_115aadcb:;
  /* 115aadcb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aadd2 jl 0x115aaded */
  if ((C.sf!=C.of)) goto L_115aaded;
  /* 115aadd4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 115aadda and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 115aaddd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115aaddf jne 0x115aaded */
  if (!C.zf) goto L_115aaded;
  /* 115aade1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aadeb jle 0x115aadf7 */
  if ((C.zf||C.sf!=C.of)) goto L_115aadf7;
L_115aaded:;
  /* 115aaded mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 115aadf2 jmp 0x115ab169 */
  goto L_115ab169;
L_115aadf7:;
  /* 115aadf7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 115aadfd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aae03 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 115aae06 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aae0c je 0x115aae18 */
  if (C.zf) goto L_115aae18;
  /* 115aae0e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 115aae13 jmp 0x115ab169 */
  goto L_115ab169;
L_115aae18:;
  /* 115aae18 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 115aae1e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aae24 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 115aae2a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 115aae30 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aae36 jb 0x115aad2c */
  if (C.cf) goto L_115aad2c;
  /* 115aae3c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 115aae42 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aae48 je 0x115aae54 */
  if (C.zf) goto L_115aae54;
  /* 115aae4a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 115aae4f jmp 0x115ab169 */
  goto L_115ab169;
L_115aae54:;
  /* 115aae54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aae57 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aae5c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115aae5f jmp 0x115aacd1 */
  goto L_115aacd1;
L_115aae64:;
  /* 115aae64 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aae67 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115aae69 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aae6f je 0x115aae7b */
  if (C.zf) goto L_115aae7b;
  /* 115aae71 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 115aae76 jmp 0x115ab169 */
  goto L_115ab169;
L_115aae7b:;
  /* 115aae7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115aae7e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 115aae84 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 115aae8b jmp 0x115aae96 */
  goto L_115aae96;
L_115aae8d:;
  /* 115aae8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aae90 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aae93 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_115aae96:;
  /* 115aae96 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aae9a jge 0x115ab0cd */
  if ((C.sf==C.of)) goto L_115ab0cd;
  /* 115aaea0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 115aaeaa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 115aaeb0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_115aaeb6:;
  /* 115aaeb6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 115aaebc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115aaebf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 115aaec5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 115aaecb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aaed1 je 0x115aaffa */
  if (C.zf) goto L_115aaffa;
  /* 115aaed7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115aaeda mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 115aaee0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aaee7 je 0x115aaffa */
  if (C.zf) goto L_115aaffa;
  /* 115aaeed mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 115aaef3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aaef9 jb 0x115aaf0e */
  if (C.cf) goto L_115aaf0e;
  /* 115aaefb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 115aaf01 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aaf06 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aaf0c jb 0x115aaf18 */
  if (C.cf) goto L_115aaf18;
L_115aaf0e:;
  /* 115aaf0e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 115aaf13 jmp 0x115ab169 */
  goto L_115ab169;
L_115aaf18:;
  /* 115aaf18 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 115aaf1e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 115aaf24 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 115aaf2a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 115aaf30 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aaf33 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 115aaf36 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aaf39 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aaf3e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_115aaf44:;
  /* 115aaf44 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aaf47 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aaf4d je 0x115aaf6e */
  if (C.zf) goto L_115aaf6e;
  /* 115aaf4f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aaf52 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aaf58 jne 0x115aaf5c */
  if (!C.zf) goto L_115aaf5c;
  /* 115aaf5a jmp 0x115aaf6e */
  goto L_115aaf6e;
L_115aaf5c:;
  /* 115aaf5c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aaf5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115aaf61 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 115aaf64 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aaf67 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aaf69 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 115aaf6c jmp 0x115aaf44 */
  goto L_115aaf44;
L_115aaf6e:;
  /* 115aaf6e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aaf71 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aaf77 jne 0x115aaf83 */
  if (!C.zf) goto L_115aaf83;
  /* 115aaf79 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 115aaf7e jmp 0x115ab169 */
  goto L_115ab169;
L_115aaf83:;
  /* 115aaf83 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 115aaf89 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115aaf8b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 115aaf8e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aaf91 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 115aaf97 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aaf9e jle 0x115aafaa */
  if ((C.zf||C.sf!=C.of)) goto L_115aafaa;
  /* 115aafa0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_115aafaa:;
  /* 115aafaa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 115aafb0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aafb3 je 0x115aafbf */
  if (C.zf) goto L_115aafbf;
  /* 115aafb5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 115aafba jmp 0x115ab169 */
  goto L_115ab169;
L_115aafbf:;
  /* 115aafbf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 115aafc5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115aafc8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aafce je 0x115aafda */
  if (C.zf) goto L_115aafda;
  /* 115aafd0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 115aafd5 jmp 0x115ab169 */
  goto L_115ab169;
L_115aafda:;
  /* 115aafda mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 115aafe0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 115aafe6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 115aafec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aafef mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 115aaff5 jmp 0x115aaeb6 */
  goto L_115aaeb6;
L_115aaffa:;
  /* 115aaffa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab001 je 0x115ab071 */
  if (C.zf) goto L_115ab071;
  /* 115ab003 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab007 jge 0x115ab03b */
  if ((C.sf==C.of)) goto L_115ab03b;
  /* 115ab009 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115ab00e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115ab011 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115ab013 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 115ab019 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab01b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 115ab021 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115ab026 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115ab029 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115ab02b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 115ab031 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab033 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 115ab039 jmp 0x115ab071 */
  goto L_115ab071;
L_115ab03b:;
  /* 115ab03b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115ab03e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ab041 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115ab046 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115ab048 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 115ab04e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab050 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 115ab056 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115ab059 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ab05c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115ab061 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115ab063 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 115ab069 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab06b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_115ab071:;
  /* 115ab071 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 115ab077 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115ab07a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab080 jne 0x115ab094 */
  if (!C.zf) goto L_115ab094;
  /* 115ab082 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115ab085 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 115ab08b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab092 je 0x115ab09e */
  if (C.zf) goto L_115ab09e;
L_115ab094:;
  /* 115ab094 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 115ab099 jmp 0x115ab169 */
  goto L_115ab169;
L_115ab09e:;
  /* 115ab09e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 115ab0a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115ab0a7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab0ad je 0x115ab0b9 */
  if (C.zf) goto L_115ab0b9;
  /* 115ab0af mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 115ab0b4 jmp 0x115ab169 */
  goto L_115ab169;
L_115ab0b9:;
  /* 115ab0b9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 115ab0bf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab0c2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 115ab0c8 jmp 0x115aae8d */
  goto L_115aae8d;
L_115ab0cd:;
  /* 115ab0cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ab0d0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 115ab0d6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 115ab0dc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab0e0 jne 0x115ab0fa */
  if (!C.zf) goto L_115ab0fa;
  /* 115ab0e2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ab0e5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 115ab0eb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 115ab0f1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab0f8 je 0x115ab101 */
  if (C.zf) goto L_115ab101;
L_115ab0fa:;
  /* 115ab0fa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 115ab0ff jmp 0x115ab169 */
  goto L_115ab169;
L_115ab101:;
  /* 115ab101 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 115ab107 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab10d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 115ab113 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115ab116 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab11b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115ab11e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab121 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 115ab123 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115ab126 jmp 0x115aac2a */
  goto L_115aac2a;
L_115ab12b:;
  /* 115ab12b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 115ab131 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 115ab137 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab139 jne 0x115ab14c */
  if (!C.zf) goto L_115ab14c;
  /* 115ab13b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 115ab141 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 115ab147 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab14a je 0x115ab153 */
  if (C.zf) goto L_115ab153;
L_115ab14c:;
  /* 115ab14c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 115ab151 jmp 0x115ab169 */
  goto L_115ab169;
L_115ab153:;
  /* 115ab153 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 115ab159 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab15c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 115ab162 jmp 0x115aab93 */
  goto L_115aab93;
L_115ab167:;
  /* 115ab167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115ab169:;
  /* 115ab169 mov esp, ebp */
  ESP = (EBP);
  /* 115ab16b pop ebp */
  EBP = (pop32());
  /* 115ab16c ret  */
  ESPCHK(0x115aab50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b170 @ 0x115ab170 (250 bytes, 92 insns) */
void f_115ab170(void) {
  FTRACE(0x115ab170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ab170 push ebp */
  push32((uint32_t)(EBP));
  /* 115ab171 mov ebp, esp */
  EBP = (ESP);
  /* 115ab173 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ab176 push ebx */
  push32((uint32_t)(EBX));
  /* 115ab177 push esi */
  push32((uint32_t)(ESI));
  /* 115ab178 push edi */
  push32((uint32_t)(EDI));
  /* 115ab179 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 115ab17c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115ab17f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 115ab182 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_115ab185:;
  /* 115ab185 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab189 jne 0x115ab1a9 */
  if (!C.zf) goto L_115ab1a9;
  /* 115ab18b push 0x115cd0a0 */
  push32((uint32_t)(0x115cd0a0u));
  /* 115ab190 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ab192 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 115ab194 push 0x115cd094 */
  push32((uint32_t)(0x115cd094u));
  /* 115ab199 push 2 */
  push32((uint32_t)(0x2u));
  /* 115ab19b call 0x115a4320 */
  push32(0x115ab1a0u); f_115a4320();
  /* 115ab1a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab1a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab1a6 jne 0x115ab1a9 */
  if (!C.zf) goto L_115ab1a9;
  /* 115ab1a8 int3  */
  x86_unimpl("int3 @ 0x115ab1a8");
L_115ab1a9:;
  /* 115ab1a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115ab1ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ab1ad jne 0x115ab185 */
  if (!C.zf) goto L_115ab185;
L_115ab1af:;
  /* 115ab1af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab1b3 jne 0x115ab1d3 */
  if (!C.zf) goto L_115ab1d3;
  /* 115ab1b5 push 0x115cd084 */
  push32((uint32_t)(0x115cd084u));
  /* 115ab1ba push 0 */
  push32((uint32_t)(0x0u));
  /* 115ab1bc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 115ab1be push 0x115cd094 */
  push32((uint32_t)(0x115cd094u));
  /* 115ab1c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 115ab1c5 call 0x115a4320 */
  push32(0x115ab1cau); f_115a4320();
  /* 115ab1ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab1cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab1d0 jne 0x115ab1d3 */
  if (!C.zf) goto L_115ab1d3;
  /* 115ab1d2 int3  */
  x86_unimpl("int3 @ 0x115ab1d2");
L_115ab1d3:;
  /* 115ab1d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab1d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ab1d7 jne 0x115ab1af */
  if (!C.zf) goto L_115ab1af;
  /* 115ab1d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab1dc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 115ab1e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab1e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ab1e9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 115ab1ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab1ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ab1f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 115ab1f4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab1f7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 115ab1fe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115ab201 push ecx */
  push32((uint32_t)(ECX));
  /* 115ab202 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ab205 push edx */
  push32((uint32_t)(EDX));
  /* 115ab206 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab209 push eax */
  push32((uint32_t)(EAX));
  /* 115ab20a call 0x115ac1f0 */
  push32(0x115ab20fu); f_115ac1f0();
  /* 115ab20f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab212 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 115ab215 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab218 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115ab21b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ab21e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab221 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 115ab224 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab227 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab22b jl 0x115ab24f */
  if ((C.sf!=C.of)) goto L_115ab24f;
  /* 115ab22d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab230 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115ab232 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 115ab235 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115ab237 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115ab23d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 115ab240 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab243 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115ab245 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab248 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab24b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115ab24d jmp 0x115ab260 */
  goto L_115ab260;
L_115ab24f:;
  /* 115ab24f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab252 push edx */
  push32((uint32_t)(EDX));
  /* 115ab253 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ab255 call 0x115abf70 */
  push32(0x115ab25au); f_115abf70();
  /* 115ab25a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab25d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_115ab260:;
  /* 115ab260 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115ab263 pop edi */
  EDI = (pop32());
  /* 115ab264 pop esi */
  ESI = (pop32());
  /* 115ab265 pop ebx */
  EBX = (pop32());
  /* 115ab266 mov esp, ebp */
  ESP = (EBP);
  /* 115ab268 pop ebp */
  EBP = (pop32());
  /* 115ab269 ret  */
  ESPCHK(0x115ab170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b270 @ 0x115ab270 (183 bytes, 58 insns) */
void f_115ab270(void) {
  FTRACE(0x115ab270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ab270 push ebp */
  push32((uint32_t)(EBP));
  /* 115ab271 mov ebp, esp */
  EBP = (ESP);
  /* 115ab273 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ab276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ab279 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab27c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab281 ja 0x115ab29a */
  if ((!C.cf&&!C.zf)) goto L_115ab29a;
  /* 115ab283 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ab286 mov edx, dword ptr [0x115cfc98] */
  EDX = (r32((uint32_t)(0x115cfc98)));
  /* 115ab28c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab28e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 115ab292 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 115ab295 jmp 0x115ab323 */
  goto L_115ab323;
L_115ab29a:;
  /* 115ab29a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ab29d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 115ab2a0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115ab2a6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115ab2ac mov edx, dword ptr [0x115cfc98] */
  EDX = (r32((uint32_t)(0x115cfc98)));
  /* 115ab2b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab2b4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 115ab2b8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 115ab2bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ab2bf je 0x115ab2e3 */
  if (C.zf) goto L_115ab2e3;
  /* 115ab2c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ab2c4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 115ab2c7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115ab2cd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 115ab2d0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 115ab2d3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 115ab2d6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 115ab2da mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 115ab2e1 jmp 0x115ab2f4 */
  goto L_115ab2f4;
L_115ab2e3:;
  /* 115ab2e3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 115ab2e6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 115ab2e9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 115ab2ed mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_115ab2f4:;
  /* 115ab2f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115ab2f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ab2f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ab2fa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 115ab2fd push ecx */
  push32((uint32_t)(ECX));
  /* 115ab2fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ab301 push edx */
  push32((uint32_t)(EDX));
  /* 115ab302 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 115ab305 push eax */
  push32((uint32_t)(EAX));
  /* 115ab306 push 1 */
  push32((uint32_t)(0x1u));
  /* 115ab308 call 0x115ad490 */
  push32(0x115ab30du); f_115ad490();
  /* 115ab30d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab310 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ab312 jne 0x115ab318 */
  if (!C.zf) goto L_115ab318;
  /* 115ab314 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab316 jmp 0x115ab323 */
  goto L_115ab323;
L_115ab318:;
  /* 115ab318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab31b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115ab320 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_115ab323:;
  /* 115ab323 mov esp, ebp */
  ESP = (EBP);
  /* 115ab325 pop ebp */
  EBP = (pop32());
  /* 115ab326 ret  */
  ESPCHK(0x115ab270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b330 @ 0x115ab330 (836 bytes, 238 insns) */
void f_115ab330(void) {
  FTRACE(0x115ab330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ab330 push ebp */
  push32((uint32_t)(EBP));
  /* 115ab331 mov ebp, esp */
  EBP = (ESP);
  /* 115ab333 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ab336 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115ab338 call 0x115a8c60 */
  push32(0x115ab33du); f_115a8c60();
  /* 115ab33d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ab343 push eax */
  push32((uint32_t)(EAX));
  /* 115ab344 call 0x115ab680 */
  push32(0x115ab349u); f_115ab680();
  /* 115ab349 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab34c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115ab34f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ab352 cmp ecx, dword ptr [0x115d2d04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d2d04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab358 jne 0x115ab36b */
  if (!C.zf) goto L_115ab36b;
  /* 115ab35a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115ab35c call 0x115a8d00 */
  push32(0x115ab361u); f_115a8d00();
  /* 115ab361 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab364 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab366 jmp 0x115ab670 */
  goto L_115ab670;
L_115ab36b:;
  /* 115ab36b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab36f jne 0x115ab38c */
  if (!C.zf) goto L_115ab38c;
  /* 115ab371 call 0x115ab760 */
  push32(0x115ab376u); f_115ab760();
  /* 115ab376 call 0x115ab7e0 */
  push32(0x115ab37bu); f_115ab7e0();
  /* 115ab37b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115ab37d call 0x115a8d00 */
  push32(0x115ab382u); f_115a8d00();
  /* 115ab382 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab385 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab387 jmp 0x115ab670 */
  goto L_115ab670;
L_115ab38c:;
  /* 115ab38c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115ab393 jmp 0x115ab39e */
  goto L_115ab39e;
L_115ab395:;
  /* 115ab395 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab398 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab39b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115ab39e:;
  /* 115ab39e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab3a2 jae 0x115ab4ef */
  if (!C.cf) goto L_115ab4ef;
  /* 115ab3a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab3ab imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ab3ae mov ecx, dword ptr [eax + 0x115cfeb8] */
  ECX = (r32((uint32_t)(EAX + 0x115cfeb8)));
  /* 115ab3b4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab3b7 jne 0x115ab4ea */
  if (!C.zf) goto L_115ab4ea;
  /* 115ab3bd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 115ab3c4 jmp 0x115ab3cf */
  goto L_115ab3cf;
L_115ab3c6:;
  /* 115ab3c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab3c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab3cc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_115ab3cf:;
  /* 115ab3cf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab3d6 jae 0x115ab3e4 */
  if (!C.cf) goto L_115ab3e4;
  /* 115ab3d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab3db mov byte ptr [eax + 0x115d2ea0], 0 */
  w8((uint32_t)(EAX + 0x115d2ea0), (0x0u));
  /* 115ab3e2 jmp 0x115ab3c6 */
  goto L_115ab3c6;
L_115ab3e4:;
  /* 115ab3e4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115ab3eb jmp 0x115ab3f6 */
  goto L_115ab3f6;
L_115ab3ed:;
  /* 115ab3ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ab3f0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab3f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_115ab3f6:;
  /* 115ab3f6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab3fa jae 0x115ab477 */
  if (!C.cf) goto L_115ab477;
  /* 115ab3fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab3ff imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ab402 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ab405 lea ecx, [edx + eax*8 + 0x115cfec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x115cfec8));
  /* 115ab40c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115ab40f jmp 0x115ab41a */
  goto L_115ab41a;
L_115ab411:;
  /* 115ab411 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ab414 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab417 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_115ab41a:;
  /* 115ab41a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ab41d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115ab41f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115ab421 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115ab423 je 0x115ab472 */
  if (C.zf) goto L_115ab472;
  /* 115ab425 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ab428 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab42a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 115ab42d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ab42f je 0x115ab472 */
  if (C.zf) goto L_115ab472;
  /* 115ab431 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ab434 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115ab436 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115ab438 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 115ab43b jmp 0x115ab446 */
  goto L_115ab446;
L_115ab43d:;
  /* 115ab43d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab440 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab443 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_115ab446:;
  /* 115ab446 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ab449 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115ab44b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 115ab44e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab451 ja 0x115ab470 */
  if ((!C.cf&&!C.zf)) goto L_115ab470;
  /* 115ab453 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab456 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ab459 mov dl, byte ptr [eax + 0x115d2ea1] */
  DL = (r8((uint32_t)(EAX + 0x115d2ea1)));
  /* 115ab45f or dl, byte ptr [ecx + 0x115cfeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x115cfeb0))); DL = (_r); fl_logic(_r,8); }
  /* 115ab465 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab468 mov byte ptr [eax + 0x115d2ea1], dl */
  w8((uint32_t)(EAX + 0x115d2ea1), (DL));
  /* 115ab46e jmp 0x115ab43d */
  goto L_115ab43d;
L_115ab470:;
  /* 115ab470 jmp 0x115ab411 */
  goto L_115ab411;
L_115ab472:;
  /* 115ab472 jmp 0x115ab3ed */
  goto L_115ab3ed;
L_115ab477:;
  /* 115ab477 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ab47a mov dword ptr [0x115d2d04], ecx */
  w32((uint32_t)(0x115d2d04), (ECX));
  /* 115ab480 mov dword ptr [0x115d2d8c], 1 */
  w32((uint32_t)(0x115d2d8c), (0x1u));
  /* 115ab48a mov edx, dword ptr [0x115d2d04] */
  EDX = (r32((uint32_t)(0x115d2d04)));
  /* 115ab490 push edx */
  push32((uint32_t)(EDX));
  /* 115ab491 call 0x115ab6e0 */
  push32(0x115ab496u); f_115ab6e0();
  /* 115ab496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab499 mov dword ptr [0x115d2fa4], eax */
  w32((uint32_t)(0x115d2fa4), (EAX));
  /* 115ab49e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115ab4a5 jmp 0x115ab4b0 */
  goto L_115ab4b0;
L_115ab4a7:;
  /* 115ab4a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ab4aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab4ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_115ab4b0:;
  /* 115ab4b0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab4b4 jae 0x115ab4d4 */
  if (!C.cf) goto L_115ab4d4;
  /* 115ab4b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab4b9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ab4bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ab4bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ab4c2 mov cx, word ptr [ecx + eax*2 + 0x115cfebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x115cfebc)));
  /* 115ab4ca mov word ptr [edx*2 + 0x115d2d80], cx */
  w16((uint32_t)(EDX*2 + 0x115d2d80), (CX));
  /* 115ab4d2 jmp 0x115ab4a7 */
  goto L_115ab4a7;
L_115ab4d4:;
  /* 115ab4d4 call 0x115ab7e0 */
  push32(0x115ab4d9u); f_115ab7e0();
  /* 115ab4d9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115ab4db call 0x115a8d00 */
  push32(0x115ab4e0u); f_115a8d00();
  /* 115ab4e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab4e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab4e5 jmp 0x115ab670 */
  goto L_115ab670;
L_115ab4ea:;
  /* 115ab4ea jmp 0x115ab395 */
  goto L_115ab395;
L_115ab4ef:;
  /* 115ab4ef lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 115ab4f2 push edx */
  push32((uint32_t)(EDX));
  /* 115ab4f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ab4f6 push eax */
  push32((uint32_t)(EAX));
  /* 115ab4f7 call dword ptr [0x115d4330] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4330))), 0x115ab4fdu);
  /* 115ab4fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab500 jne 0x115ab642 */
  if (!C.zf) goto L_115ab642;
  /* 115ab506 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 115ab50d jmp 0x115ab518 */
  goto L_115ab518;
L_115ab50f:;
  /* 115ab50f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab512 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab515 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_115ab518:;
  /* 115ab518 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab51f jae 0x115ab52d */
  if (!C.cf) goto L_115ab52d;
  /* 115ab521 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab524 mov byte ptr [edx + 0x115d2ea0], 0 */
  w8((uint32_t)(EDX + 0x115d2ea0), (0x0u));
  /* 115ab52b jmp 0x115ab50f */
  goto L_115ab50f;
L_115ab52d:;
  /* 115ab52d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ab530 mov dword ptr [0x115d2d04], eax */
  w32((uint32_t)(0x115d2d04), (EAX));
  /* 115ab535 mov dword ptr [0x115d2fa4], 0 */
  w32((uint32_t)(0x115d2fa4), (0x0u));
  /* 115ab53f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab543 jbe 0x115ab5fe */
  if ((C.cf||C.zf)) goto L_115ab5fe;
  /* 115ab549 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 115ab54c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 115ab54f jmp 0x115ab55a */
  goto L_115ab55a;
L_115ab551:;
  /* 115ab551 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 115ab554 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab557 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_115ab55a:;
  /* 115ab55a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115ab55d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115ab55f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115ab561 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115ab563 je 0x115ab5ac */
  if (C.zf) goto L_115ab5ac;
  /* 115ab565 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 115ab568 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab56a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 115ab56d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ab56f je 0x115ab5ac */
  if (C.zf) goto L_115ab5ac;
  /* 115ab571 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115ab574 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115ab576 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115ab578 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 115ab57b jmp 0x115ab586 */
  goto L_115ab586;
L_115ab57d:;
  /* 115ab57d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab580 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab583 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_115ab586:;
  /* 115ab586 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115ab589 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115ab58b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 115ab58e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab591 ja 0x115ab5aa */
  if ((!C.cf&&!C.zf)) goto L_115ab5aa;
  /* 115ab593 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab596 mov cl, byte ptr [eax + 0x115d2ea1] */
  CL = (r8((uint32_t)(EAX + 0x115d2ea1)));
  /* 115ab59c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 115ab59f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab5a2 mov byte ptr [edx + 0x115d2ea1], cl */
  w8((uint32_t)(EDX + 0x115d2ea1), (CL));
  /* 115ab5a8 jmp 0x115ab57d */
  goto L_115ab57d;
L_115ab5aa:;
  /* 115ab5aa jmp 0x115ab551 */
  goto L_115ab551;
L_115ab5ac:;
  /* 115ab5ac mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 115ab5b3 jmp 0x115ab5be */
  goto L_115ab5be;
L_115ab5b5:;
  /* 115ab5b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab5b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab5bb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_115ab5be:;
  /* 115ab5be cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab5c5 jae 0x115ab5de */
  if (!C.cf) goto L_115ab5de;
  /* 115ab5c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab5ca mov dl, byte ptr [ecx + 0x115d2ea1] */
  DL = (r8((uint32_t)(ECX + 0x115d2ea1)));
  /* 115ab5d0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 115ab5d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ab5d6 mov byte ptr [eax + 0x115d2ea1], dl */
  w8((uint32_t)(EAX + 0x115d2ea1), (DL));
  /* 115ab5dc jmp 0x115ab5b5 */
  goto L_115ab5b5;
L_115ab5de:;
  /* 115ab5de mov ecx, dword ptr [0x115d2d04] */
  ECX = (r32((uint32_t)(0x115d2d04)));
  /* 115ab5e4 push ecx */
  push32((uint32_t)(ECX));
  /* 115ab5e5 call 0x115ab6e0 */
  push32(0x115ab5eau); f_115ab6e0();
  /* 115ab5ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab5ed mov dword ptr [0x115d2fa4], eax */
  w32((uint32_t)(0x115d2fa4), (EAX));
  /* 115ab5f2 mov dword ptr [0x115d2d8c], 1 */
  w32((uint32_t)(0x115d2d8c), (0x1u));
  /* 115ab5fc jmp 0x115ab608 */
  goto L_115ab608;
L_115ab5fe:;
  /* 115ab5fe mov dword ptr [0x115d2d8c], 0 */
  w32((uint32_t)(0x115d2d8c), (0x0u));
L_115ab608:;
  /* 115ab608 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115ab60f jmp 0x115ab61a */
  goto L_115ab61a;
L_115ab611:;
  /* 115ab611 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ab614 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab617 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_115ab61a:;
  /* 115ab61a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab61e jae 0x115ab62f */
  if (!C.cf) goto L_115ab62f;
  /* 115ab620 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ab623 mov word ptr [eax*2 + 0x115d2d80], 0 */
  w16((uint32_t)(EAX*2 + 0x115d2d80), (0x0u));
  /* 115ab62d jmp 0x115ab611 */
  goto L_115ab611;
L_115ab62f:;
  /* 115ab62f call 0x115ab7e0 */
  push32(0x115ab634u); f_115ab7e0();
  /* 115ab634 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115ab636 call 0x115a8d00 */
  push32(0x115ab63bu); f_115a8d00();
  /* 115ab63b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab63e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab640 jmp 0x115ab670 */
  goto L_115ab670;
L_115ab642:;
  /* 115ab642 cmp dword ptr [0x115d1810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab649 je 0x115ab663 */
  if (C.zf) goto L_115ab663;
  /* 115ab64b call 0x115ab760 */
  push32(0x115ab650u); f_115ab760();
  /* 115ab650 call 0x115ab7e0 */
  push32(0x115ab655u); f_115ab7e0();
  /* 115ab655 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115ab657 call 0x115a8d00 */
  push32(0x115ab65cu); f_115a8d00();
  /* 115ab65c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab65f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ab661 jmp 0x115ab670 */
  goto L_115ab670;
L_115ab663:;
  /* 115ab663 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115ab665 call 0x115a8d00 */
  push32(0x115ab66au); f_115a8d00();
  /* 115ab66a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab66d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_115ab670:;
  /* 115ab670 mov esp, ebp */
  ESP = (EBP);
  /* 115ab672 pop ebp */
  EBP = (pop32());
  /* 115ab673 ret  */
  ESPCHK(0x115ab330u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x115ab680 (89 bytes, 21 insns) */
void f_115ab680(void) {
  FTRACE(0x115ab680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ab680 push ebp */
  push32((uint32_t)(EBP));
  /* 115ab681 mov ebp, esp */
  EBP = (ESP);
  /* 115ab683 mov dword ptr [0x115d1810], 0 */
  w32((uint32_t)(0x115d1810), (0x0u));
  /* 115ab68d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab691 jne 0x115ab6a5 */
  if (!C.zf) goto L_115ab6a5;
  /* 115ab693 mov dword ptr [0x115d1810], 1 */
  w32((uint32_t)(0x115d1810), (0x1u));
  /* 115ab69d call dword ptr [0x115d4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4328))), 0x115ab6a3u);
  /* 115ab6a3 jmp 0x115ab6d7 */
  goto L_115ab6d7;
L_115ab6a5:;
  /* 115ab6a5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab6a9 jne 0x115ab6bd */
  if (!C.zf) goto L_115ab6bd;
  /* 115ab6ab mov dword ptr [0x115d1810], 1 */
  w32((uint32_t)(0x115d1810), (0x1u));
  /* 115ab6b5 call dword ptr [0x115d4338] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4338))), 0x115ab6bbu);
  /* 115ab6bb jmp 0x115ab6d7 */
  goto L_115ab6d7;
L_115ab6bd:;
  /* 115ab6bd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab6c1 jne 0x115ab6d4 */
  if (!C.zf) goto L_115ab6d4;
  /* 115ab6c3 mov dword ptr [0x115d1810], 1 */
  w32((uint32_t)(0x115d1810), (0x1u));
  /* 115ab6cd mov eax, dword ptr [0x115d1830] */
  EAX = (r32((uint32_t)(0x115d1830)));
  /* 115ab6d2 jmp 0x115ab6d7 */
  goto L_115ab6d7;
L_115ab6d4:;
  /* 115ab6d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_115ab6d7:;
  /* 115ab6d7 pop ebp */
  EBP = (pop32());
  /* 115ab6d8 ret  */
  ESPCHK(0x115ab680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6e0 @ 0x115ab6e0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_115ab6e0(void) {
  FTRACE(0x115ab6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ab6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115ab6e1 mov ebp, esp */
  EBP = (ESP);
  /* 115ab6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 115ab6e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ab6e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115ab6ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab6ed sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ab6f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115ab6f6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab6fa ja 0x115ab72a */
  if ((!C.cf&&!C.zf)) goto L_115ab72a;
  /* 115ab6fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab6ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115ab701 mov dl, byte ptr [eax + 0x115ab744] */
  DL = (r8((uint32_t)(EAX + 0x115ab744)));
  /* 115ab707 jmp dword ptr [edx*4 + 0x115ab730] */
  switch (EDX) {
    case 0: goto L_115ab70e;
    case 1: goto L_115ab715;
    case 2: goto L_115ab71c;
    case 3: goto L_115ab723;
    case 4: goto L_115ab72a;
    default: x86_unimpl("switch@0x115ab707 out of table"); return;
  }
L_115ab70e:;
  /* 115ab70e mov eax, 0x411 */
  EAX = (0x411u);
  /* 115ab713 jmp 0x115ab72c */
  goto L_115ab72c;
L_115ab715:;
  /* 115ab715 mov eax, 0x804 */
  EAX = (0x804u);
  /* 115ab71a jmp 0x115ab72c */
  goto L_115ab72c;
L_115ab71c:;
  /* 115ab71c mov eax, 0x412 */
  EAX = (0x412u);
  /* 115ab721 jmp 0x115ab72c */
  goto L_115ab72c;
L_115ab723:;
  /* 115ab723 mov eax, 0x404 */
  EAX = (0x404u);
  /* 115ab728 jmp 0x115ab72c */
  goto L_115ab72c;
L_115ab72a:;
  /* 115ab72a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115ab72c:;
  /* 115ab72c mov esp, ebp */
  ESP = (EBP);
  /* 115ab72e pop ebp */
  EBP = (pop32());
  /* 115ab72f ret  */
  ESPCHK(0x115ab6e0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x115ab760 (116 bytes, 29 insns) */
void f_115ab760(void) {
  FTRACE(0x115ab760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ab760 push ebp */
  push32((uint32_t)(EBP));
  /* 115ab761 mov ebp, esp */
  EBP = (ESP);
  /* 115ab763 push ecx */
  push32((uint32_t)(ECX));
  /* 115ab764 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115ab76b jmp 0x115ab776 */
  goto L_115ab776;
L_115ab76d:;
  /* 115ab76d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab770 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab773 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115ab776:;
  /* 115ab776 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab77d jge 0x115ab78b */
  if ((C.sf==C.of)) goto L_115ab78b;
  /* 115ab77f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab782 mov byte ptr [ecx + 0x115d2ea0], 0 */
  w8((uint32_t)(ECX + 0x115d2ea0), (0x0u));
  /* 115ab789 jmp 0x115ab76d */
  goto L_115ab76d;
L_115ab78b:;
  /* 115ab78b mov dword ptr [0x115d2d04], 0 */
  w32((uint32_t)(0x115d2d04), (0x0u));
  /* 115ab795 mov dword ptr [0x115d2d8c], 0 */
  w32((uint32_t)(0x115d2d8c), (0x0u));
  /* 115ab79f mov dword ptr [0x115d2fa4], 0 */
  w32((uint32_t)(0x115d2fa4), (0x0u));
  /* 115ab7a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115ab7b0 jmp 0x115ab7bb */
  goto L_115ab7bb;
L_115ab7b2:;
  /* 115ab7b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab7b5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab7b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115ab7bb:;
  /* 115ab7bb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab7bf jge 0x115ab7d0 */
  if ((C.sf==C.of)) goto L_115ab7d0;
  /* 115ab7c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab7c4 mov word ptr [eax*2 + 0x115d2d80], 0 */
  w16((uint32_t)(EAX*2 + 0x115d2d80), (0x0u));
  /* 115ab7ce jmp 0x115ab7b2 */
  goto L_115ab7b2;
L_115ab7d0:;
  /* 115ab7d0 mov esp, ebp */
  ESP = (EBP);
  /* 115ab7d2 pop ebp */
  EBP = (pop32());
  /* 115ab7d3 ret  */
  ESPCHK(0x115ab760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7e0 @ 0x115ab7e0 (770 bytes, 175 insns) */
void f_115ab7e0(void) {
  FTRACE(0x115ab7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ab7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115ab7e1 mov ebp, esp */
  EBP = (ESP);
  /* 115ab7e3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ab7e9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 115ab7ef push eax */
  push32((uint32_t)(EAX));
  /* 115ab7f0 mov ecx, dword ptr [0x115d2d04] */
  ECX = (r32((uint32_t)(0x115d2d04)));
  /* 115ab7f6 push ecx */
  push32((uint32_t)(ECX));
  /* 115ab7f7 call dword ptr [0x115d4330] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4330))), 0x115ab7fdu);
  /* 115ab7fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab800 jne 0x115aba19 */
  if (!C.zf) goto L_115aba19;
  /* 115ab806 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 115ab810 jmp 0x115ab821 */
  goto L_115ab821;
L_115ab812:;
  /* 115ab812 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab818 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab81b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_115ab821:;
  /* 115ab821 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab82b jae 0x115ab842 */
  if (!C.cf) goto L_115ab842;
  /* 115ab82d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab833 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 115ab839 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 115ab840 jmp 0x115ab812 */
  goto L_115ab812;
L_115ab842:;
  /* 115ab842 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 115ab849 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 115ab84f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115ab852 jmp 0x115ab85d */
  goto L_115ab85d;
L_115ab854:;
  /* 115ab854 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab857 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab85a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115ab85d:;
  /* 115ab85d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab860 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115ab862 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115ab864 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ab866 je 0x115ab8a8 */
  if (C.zf) goto L_115ab8a8;
  /* 115ab868 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab86b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115ab86d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115ab86f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 115ab875 jmp 0x115ab886 */
  goto L_115ab886;
L_115ab877:;
  /* 115ab877 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab87d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab880 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_115ab886:;
  /* 115ab886 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ab889 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115ab88b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 115ab88e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab894 ja 0x115ab8a6 */
  if ((!C.cf&&!C.zf)) goto L_115ab8a6;
  /* 115ab896 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab89c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 115ab8a4 jmp 0x115ab877 */
  goto L_115ab877;
L_115ab8a6:;
  /* 115ab8a6 jmp 0x115ab854 */
  goto L_115ab854;
L_115ab8a8:;
  /* 115ab8a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ab8aa mov eax, dword ptr [0x115d2fa4] */
  EAX = (r32((uint32_t)(0x115d2fa4)));
  /* 115ab8af push eax */
  push32((uint32_t)(EAX));
  /* 115ab8b0 mov ecx, dword ptr [0x115d2d04] */
  ECX = (r32((uint32_t)(0x115d2d04)));
  /* 115ab8b6 push ecx */
  push32((uint32_t)(ECX));
  /* 115ab8b7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 115ab8bd push edx */
  push32((uint32_t)(EDX));
  /* 115ab8be push 0x100 */
  push32((uint32_t)(0x100u));
  /* 115ab8c3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 115ab8c9 push eax */
  push32((uint32_t)(EAX));
  /* 115ab8ca push 1 */
  push32((uint32_t)(0x1u));
  /* 115ab8cc call 0x115ad490 */
  push32(0x115ab8d1u); f_115ad490();
  /* 115ab8d1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab8d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ab8d6 mov ecx, dword ptr [0x115d2d04] */
  ECX = (r32((uint32_t)(0x115d2d04)));
  /* 115ab8dc push ecx */
  push32((uint32_t)(ECX));
  /* 115ab8dd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 115ab8e2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 115ab8e8 push edx */
  push32((uint32_t)(EDX));
  /* 115ab8e9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 115ab8ee lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 115ab8f4 push eax */
  push32((uint32_t)(EAX));
  /* 115ab8f5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 115ab8fa mov ecx, dword ptr [0x115d2fa4] */
  ECX = (r32((uint32_t)(0x115d2fa4)));
  /* 115ab900 push ecx */
  push32((uint32_t)(ECX));
  /* 115ab901 call 0x115ad650 */
  push32(0x115ab906u); f_115ad650();
  /* 115ab906 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab909 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ab90b mov edx, dword ptr [0x115d2d04] */
  EDX = (r32((uint32_t)(0x115d2d04)));
  /* 115ab911 push edx */
  push32((uint32_t)(EDX));
  /* 115ab912 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 115ab917 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 115ab91d push eax */
  push32((uint32_t)(EAX));
  /* 115ab91e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 115ab923 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 115ab929 push ecx */
  push32((uint32_t)(ECX));
  /* 115ab92a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 115ab92f mov edx, dword ptr [0x115d2fa4] */
  EDX = (r32((uint32_t)(0x115d2fa4)));
  /* 115ab935 push edx */
  push32((uint32_t)(EDX));
  /* 115ab936 call 0x115ad650 */
  push32(0x115ab93bu); f_115ad650();
  /* 115ab93b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab93e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 115ab948 jmp 0x115ab959 */
  goto L_115ab959;
L_115ab94a:;
  /* 115ab94a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab950 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ab953 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_115ab959:;
  /* 115ab959 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ab963 jae 0x115aba14 */
  if (!C.cf) goto L_115aba14;
  /* 115ab969 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab96f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115ab971 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 115ab979 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 115ab97c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ab97e je 0x115ab9b6 */
  if (C.zf) goto L_115ab9b6;
  /* 115ab980 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab986 mov cl, byte ptr [eax + 0x115d2ea1] */
  CL = (r8((uint32_t)(EAX + 0x115d2ea1)));
  /* 115ab98c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 115ab98f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab995 mov byte ptr [edx + 0x115d2ea1], cl */
  w8((uint32_t)(EDX + 0x115d2ea1), (CL));
  /* 115ab99b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab9a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab9a7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 115ab9ae mov byte ptr [eax + 0x115d2da0], dl */
  w8((uint32_t)(EAX + 0x115d2da0), (DL));
  /* 115ab9b4 jmp 0x115aba0f */
  goto L_115aba0f;
L_115ab9b6:;
  /* 115ab9b6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab9bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115ab9be mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 115ab9c6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 115ab9c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115ab9cb je 0x115aba02 */
  if (C.zf) goto L_115aba02;
  /* 115ab9cd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab9d3 mov al, byte ptr [edx + 0x115d2ea1] */
  AL = (r8((uint32_t)(EDX + 0x115d2ea1)));
  /* 115ab9d9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 115ab9db mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab9e1 mov byte ptr [ecx + 0x115d2ea1], al */
  w8((uint32_t)(ECX + 0x115d2ea1), (AL));
  /* 115ab9e7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab9ed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ab9f3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 115ab9fa mov byte ptr [edx + 0x115d2da0], cl */
  w8((uint32_t)(EDX + 0x115d2da0), (CL));
  /* 115aba00 jmp 0x115aba0f */
  goto L_115aba0f;
L_115aba02:;
  /* 115aba02 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115aba08 mov byte ptr [edx + 0x115d2da0], 0 */
  w8((uint32_t)(EDX + 0x115d2da0), (0x0u));
L_115aba0f:;
  /* 115aba0f jmp 0x115ab94a */
  goto L_115ab94a;
L_115aba14:;
  /* 115aba14 jmp 0x115abade */
  goto L_115abade;
L_115aba19:;
  /* 115aba19 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 115aba23 jmp 0x115aba34 */
  goto L_115aba34;
L_115aba25:;
  /* 115aba25 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115aba2b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aba2e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_115aba34:;
  /* 115aba34 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aba3e jae 0x115abade */
  if (!C.cf) goto L_115abade;
  /* 115aba44 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aba4b jb 0x115aba88 */
  if (C.cf) goto L_115aba88;
  /* 115aba4d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aba54 ja 0x115aba88 */
  if ((!C.cf&&!C.zf)) goto L_115aba88;
  /* 115aba56 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115aba5c mov dl, byte ptr [ecx + 0x115d2ea1] */
  DL = (r8((uint32_t)(ECX + 0x115d2ea1)));
  /* 115aba62 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 115aba65 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115aba6b mov byte ptr [eax + 0x115d2ea1], dl */
  w8((uint32_t)(EAX + 0x115d2ea1), (DL));
  /* 115aba71 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115aba77 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aba7a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115aba80 mov byte ptr [edx + 0x115d2da0], cl */
  w8((uint32_t)(EDX + 0x115d2da0), (CL));
  /* 115aba86 jmp 0x115abad9 */
  goto L_115abad9;
L_115aba88:;
  /* 115aba88 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aba8f jb 0x115abacc */
  if (C.cf) goto L_115abacc;
  /* 115aba91 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aba98 ja 0x115abacc */
  if ((!C.cf&&!C.zf)) goto L_115abacc;
  /* 115aba9a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115abaa0 mov cl, byte ptr [eax + 0x115d2ea1] */
  CL = (r8((uint32_t)(EAX + 0x115d2ea1)));
  /* 115abaa6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 115abaa9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115abaaf mov byte ptr [edx + 0x115d2ea1], cl */
  w8((uint32_t)(EDX + 0x115d2ea1), (CL));
  /* 115abab5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115ababb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ababe mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115abac4 mov byte ptr [ecx + 0x115d2da0], al */
  w8((uint32_t)(ECX + 0x115d2da0), (AL));
  /* 115abaca jmp 0x115abad9 */
  goto L_115abad9;
L_115abacc:;
  /* 115abacc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 115abad2 mov byte ptr [edx + 0x115d2da0], 0 */
  w8((uint32_t)(EDX + 0x115d2da0), (0x0u));
L_115abad9:;
  /* 115abad9 jmp 0x115aba25 */
  goto L_115aba25;
L_115abade:;
  /* 115abade mov esp, ebp */
  ESP = (EBP);
  /* 115abae0 pop ebp */
  EBP = (pop32());
  /* 115abae1 ret  */
  ESPCHK(0x115ab7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000baf0 @ 0x115abaf0 (23 bytes, 9 insns) */
void f_115abaf0(void) {
  FTRACE(0x115abaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115abaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 115abaf1 mov ebp, esp */
  EBP = (ESP);
  /* 115abaf3 cmp dword ptr [0x115d2d8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d2d8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abafa je 0x115abb03 */
  if (C.zf) goto L_115abb03;
  /* 115abafc mov eax, dword ptr [0x115d2d04] */
  EAX = (r32((uint32_t)(0x115d2d04)));
  /* 115abb01 jmp 0x115abb05 */
  goto L_115abb05;
L_115abb03:;
  /* 115abb03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115abb05:;
  /* 115abb05 pop ebp */
  EBP = (pop32());
  /* 115abb06 ret  */
  ESPCHK(0x115abaf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb10 @ 0x115abb10 (34 bytes, 10 insns) */
void f_115abb10(void) {
  FTRACE(0x115abb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115abb10 push ebp */
  push32((uint32_t)(EBP));
  /* 115abb11 mov ebp, esp */
  EBP = (ESP);
  /* 115abb13 cmp dword ptr [0x115d3150], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d3150))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abb1a jne 0x115abb30 */
  if (!C.zf) goto L_115abb30;
  /* 115abb1c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 115abb1e call 0x115ab330 */
  push32(0x115abb23u); f_115ab330();
  /* 115abb23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115abb26 mov dword ptr [0x115d3150], 1 */
  w32((uint32_t)(0x115d3150), (0x1u));
L_115abb30:;
  /* 115abb30 pop ebp */
  EBP = (pop32());
  /* 115abb31 ret  */
  ESPCHK(0x115abb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb40 @ 0x115abb40 (664 bytes, 262 insns) [15 switch table(s)] */
void f_115abb40(void) {
  FTRACE(0x115abb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115abb40 push ebp */
  push32((uint32_t)(EBP));
  /* 115abb41 mov ebp, esp */
  EBP = (ESP);
  /* 115abb43 push edi */
  push32((uint32_t)(EDI));
  /* 115abb44 push esi */
  push32((uint32_t)(ESI));
  /* 115abb45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 115abb48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115abb4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 115abb4e mov eax, ecx */
  EAX = (ECX);
  /* 115abb50 mov edx, ecx */
  EDX = (ECX);
  /* 115abb52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115abb54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abb56 jbe 0x115abb60 */
  if ((C.cf||C.zf)) goto L_115abb60;
  /* 115abb58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abb5a jb 0x115abcd8 */
  if (C.cf) goto L_115abcd8;
L_115abb60:;
  /* 115abb60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115abb66 jne 0x115abb7c */
  if (!C.zf) goto L_115abb7c;
  /* 115abb68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115abb6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115abb6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abb71 jb 0x115abb9c */
  if (C.cf) goto L_115abb9c;
  /* 115abb73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115abb75 jmp dword ptr [edx*4 + 0x115abc88] */
  switch (EDX) {
    case 0: goto L_115abc98;
    case 1: goto L_115abca0;
    case 2: goto L_115abcac;
    case 3: goto L_115abcc0;
    default: x86_unimpl("switch@0x115abb75 out of table"); return;
  }
L_115abb7c:;
  /* 115abb7c mov eax, edi */
  EAX = (EDI);
  /* 115abb7e mov edx, 3 */
  EDX = (0x3u);
  /* 115abb83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115abb86 jb 0x115abb94 */
  if (C.cf) goto L_115abb94;
  /* 115abb88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 115abb8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115abb8d jmp dword ptr [eax*4 + 0x115abba0] */
  switch (EAX) {
    case 1: goto L_115abbb0;
    case 2: goto L_115abbdc;
    case 3: goto L_115abc00;
    default: x86_unimpl("switch@0x115abb8d out of table"); return;
  }
L_115abb94:;
  /* 115abb94 jmp dword ptr [ecx*4 + 0x115abc98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x115abc98)))); return;
  /* 115abb9b nop  */
  /* nop */
L_115abb9c:;
  /* 115abb9c jmp dword ptr [ecx*4 + 0x115abc1c] */
  switch (ECX) {
    case 0: goto L_115abc7f;
    case 1: goto L_115abc6c;
    case 2: goto L_115abc64;
    case 3: goto L_115abc5c;
    case 4: goto L_115abc54;
    case 5: goto L_115abc4c;
    case 6: goto L_115abc44;
    case 7: goto L_115abc3c;
    default: x86_unimpl("switch@0x115abb9c out of table"); return;
  }
  /* 115abba3 nop  */
  /* nop */
L_115abbb0:;
  /* 115abbb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115abbb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115abbb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115abbb6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115abbb9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115abbbc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115abbbf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115abbc2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115abbc5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115abbc8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115abbcb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abbce jb 0x115abb9c */
  if (C.cf) goto L_115abb9c;
  /* 115abbd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115abbd2 jmp dword ptr [edx*4 + 0x115abc88] */
  switch (EDX) {
    case 0: goto L_115abc98;
    case 1: goto L_115abca0;
    case 2: goto L_115abcac;
    case 3: goto L_115abcc0;
    default: x86_unimpl("switch@0x115abbd2 out of table"); return;
  }
  /* 115abbd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115abbdc:;
  /* 115abbdc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115abbde mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115abbe0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115abbe2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115abbe5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115abbe8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115abbeb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115abbee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115abbf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abbf4 jb 0x115abb9c */
  if (C.cf) goto L_115abb9c;
  /* 115abbf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115abbf8 jmp dword ptr [edx*4 + 0x115abc88] */
  switch (EDX) {
    case 0: goto L_115abc98;
    case 1: goto L_115abca0;
    case 2: goto L_115abcac;
    case 3: goto L_115abcc0;
    default: x86_unimpl("switch@0x115abbf8 out of table"); return;
  }
  /* 115abbff nop  */
  /* nop */
L_115abc00:;
  /* 115abc00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115abc02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115abc04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115abc06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115abc07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115abc0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115abc0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abc0e jb 0x115abb9c */
  if (C.cf) goto L_115abb9c;
  /* 115abc10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115abc12 jmp dword ptr [edx*4 + 0x115abc88] */
  switch (EDX) {
    case 0: goto L_115abc98;
    case 1: goto L_115abca0;
    case 2: goto L_115abcac;
    case 3: goto L_115abcc0;
    default: x86_unimpl("switch@0x115abc12 out of table"); return;
  }
  /* 115abc19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115abc3c:;
  /* 115abc3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 115abc40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_115abc44:;
  /* 115abc44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 115abc48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_115abc4c:;
  /* 115abc4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 115abc50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_115abc54:;
  /* 115abc54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 115abc58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_115abc5c:;
  /* 115abc5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 115abc60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_115abc64:;
  /* 115abc64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 115abc68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_115abc6c:;
  /* 115abc6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 115abc70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 115abc74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 115abc7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115abc7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115abc7f:;
  /* 115abc7f jmp dword ptr [edx*4 + 0x115abc88] */
  switch (EDX) {
    case 0: goto L_115abc98;
    case 1: goto L_115abca0;
    case 2: goto L_115abcac;
    case 3: goto L_115abcc0;
    default: x86_unimpl("switch@0x115abc7f out of table"); return;
  }
  /* 115abc86 mov edi, edi */
  EDI = (EDI);
L_115abc98:;
  /* 115abc98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115abc9b pop esi */
  ESI = (pop32());
  /* 115abc9c pop edi */
  EDI = (pop32());
  /* 115abc9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115abc9e ret  */
  ESPCHK(0x115abb40u, _esp0);
  ESP += 4; return;
  /* 115abc9f nop  */
  /* nop */
L_115abca0:;
  /* 115abca0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115abca2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115abca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115abca7 pop esi */
  ESI = (pop32());
  /* 115abca8 pop edi */
  EDI = (pop32());
  /* 115abca9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115abcaa ret  */
  ESPCHK(0x115abb40u, _esp0);
  ESP += 4; return;
  /* 115abcab nop  */
  /* nop */
L_115abcac:;
  /* 115abcac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115abcae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115abcb0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115abcb3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115abcb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115abcb9 pop esi */
  ESI = (pop32());
  /* 115abcba pop edi */
  EDI = (pop32());
  /* 115abcbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115abcbc ret  */
  ESPCHK(0x115abb40u, _esp0);
  ESP += 4; return;
  /* 115abcbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115abcc0:;
  /* 115abcc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115abcc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115abcc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115abcc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115abcca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115abccd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115abcd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115abcd3 pop esi */
  ESI = (pop32());
  /* 115abcd4 pop edi */
  EDI = (pop32());
  /* 115abcd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115abcd6 ret  */
  ESPCHK(0x115abb40u, _esp0);
  ESP += 4; return;
  /* 115abcd7 nop  */
  /* nop */
L_115abcd8:;
  /* 115abcd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 115abcdc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 115abce0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115abce6 jne 0x115abd0c */
  if (!C.zf) goto L_115abd0c;
  /* 115abce8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115abceb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115abcee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abcf1 jb 0x115abd00 */
  if (C.cf) goto L_115abd00;
  /* 115abcf3 std  */
  C.df=1;
  /* 115abcf4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115abcf6 cld  */
  C.df=0;
  /* 115abcf7 jmp dword ptr [edx*4 + 0x115abe20] */
  switch (EDX) {
    case 0: goto L_115abe30;
    case 1: goto L_115abe38;
    case 2: goto L_115abe48;
    case 3: goto L_115abe5c;
    default: x86_unimpl("switch@0x115abcf7 out of table"); return;
  }
  /* 115abcfe mov edi, edi */
  EDI = (EDI);
L_115abd00:;
  /* 115abd00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115abd02 jmp dword ptr [ecx*4 + 0x115abdd0] */
  switch (ECX) {
    case 0: goto L_115abe17;
    default: x86_unimpl("switch@0x115abd02 out of table"); return;
  }
  /* 115abd09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115abd0c:;
  /* 115abd0c mov eax, edi */
  EAX = (EDI);
  /* 115abd0e mov edx, 3 */
  EDX = (0x3u);
  /* 115abd13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abd16 jb 0x115abd24 */
  if (C.cf) goto L_115abd24;
  /* 115abd18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 115abd1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115abd1d jmp dword ptr [eax*4 + 0x115abd28] */
  switch (EAX) {
    case 1: goto L_115abd38;
    case 2: goto L_115abd58;
    case 3: goto L_115abd80;
    default: x86_unimpl("switch@0x115abd1d out of table"); return;
  }
L_115abd24:;
  /* 115abd24 jmp dword ptr [ecx*4 + 0x115abe20] */
  switch (ECX) {
    case 0: goto L_115abe30;
    case 1: goto L_115abe38;
    case 2: goto L_115abe48;
    case 3: goto L_115abe5c;
    default: x86_unimpl("switch@0x115abd24 out of table"); return;
  }
  /* 115abd2b nop  */
  /* nop */
L_115abd38:;
  /* 115abd38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115abd3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115abd3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115abd40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 115abd41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115abd44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115abd45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abd48 jb 0x115abd00 */
  if (C.cf) goto L_115abd00;
  /* 115abd4a std  */
  C.df=1;
  /* 115abd4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115abd4d cld  */
  C.df=0;
  /* 115abd4e jmp dword ptr [edx*4 + 0x115abe20] */
  switch (EDX) {
    case 0: goto L_115abe30;
    case 1: goto L_115abe38;
    case 2: goto L_115abe48;
    case 3: goto L_115abe5c;
    default: x86_unimpl("switch@0x115abd4e out of table"); return;
  }
  /* 115abd55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115abd58:;
  /* 115abd58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115abd5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115abd5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115abd60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115abd63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115abd66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115abd69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115abd6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115abd6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abd72 jb 0x115abd00 */
  if (C.cf) goto L_115abd00;
  /* 115abd74 std  */
  C.df=1;
  /* 115abd75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115abd77 cld  */
  C.df=0;
  /* 115abd78 jmp dword ptr [edx*4 + 0x115abe20] */
  switch (EDX) {
    case 0: goto L_115abe30;
    case 1: goto L_115abe38;
    case 2: goto L_115abe48;
    case 3: goto L_115abe5c;
    default: x86_unimpl("switch@0x115abd78 out of table"); return;
  }
  /* 115abd7f nop  */
  /* nop */
L_115abd80:;
  /* 115abd80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115abd83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115abd85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115abd88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115abd8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115abd8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115abd91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115abd94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115abd97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115abd9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115abd9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abda0 jb 0x115abd00 */
  if (C.cf) goto L_115abd00;
  /* 115abda6 std  */
  C.df=1;
  /* 115abda7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115abda9 cld  */
  C.df=0;
  /* 115abdaa jmp dword ptr [edx*4 + 0x115abe20] */
  switch (EDX) {
    case 0: goto L_115abe30;
    case 1: goto L_115abe38;
    case 2: goto L_115abe48;
    case 3: goto L_115abe5c;
    default: x86_unimpl("switch@0x115abdaa out of table"); return;
  }
  /* 115abdb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 115abdb4 aam 0xbd */
  x86_unimpl("aam @ 0x115abdb4");
  /* 115abdb6 pop edx */
  EDX = (pop32());
  /* 115abdb7 adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115abdb9 mov ebp, 0xbde4115a */
  EBP = (0xbde4115au);
  /* 115abdbe pop edx */
  EDX = (pop32());
  /* 115abdbf adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115abdc1 mov ebp, 0xbdf4115a */
  EBP = (0xbdf4115au);
  /* 115abdc6 pop edx */
  EDX = (pop32());
  /* 115abdc7 adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115abdc9 mov ebp, 0xbe04115a */
  EBP = (0xbe04115au);
  /* 115abdce pop edx */
  EDX = (pop32());
  /* 115abdd4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 115abdd8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 115abddc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 115abde0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 115abde4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 115abde8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 115abdec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 115abdf0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 115abdf4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 115abdf8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 115abdfc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 115abe00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 115abe04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 115abe08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 115abe0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 115abe13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115abe15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115abe17:;
  /* 115abe17 jmp dword ptr [edx*4 + 0x115abe20] */
  switch (EDX) {
    case 0: goto L_115abe30;
    case 1: goto L_115abe38;
    case 2: goto L_115abe48;
    case 3: goto L_115abe5c;
    default: x86_unimpl("switch@0x115abe17 out of table"); return;
  }
  /* 115abe1e mov edi, edi */
  EDI = (EDI);
L_115abe30:;
  /* 115abe30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115abe33 pop esi */
  ESI = (pop32());
  /* 115abe34 pop edi */
  EDI = (pop32());
  /* 115abe35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115abe36 ret  */
  ESPCHK(0x115abb40u, _esp0);
  ESP += 4; return;
  /* 115abe37 nop  */
  /* nop */
L_115abe38:;
  /* 115abe38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115abe3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115abe3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115abe41 pop esi */
  ESI = (pop32());
  /* 115abe42 pop edi */
  EDI = (pop32());
  /* 115abe43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115abe44 ret  */
  ESPCHK(0x115abb40u, _esp0);
  ESP += 4; return;
  /* 115abe45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115abe48:;
  /* 115abe48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115abe4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115abe4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115abe51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115abe54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115abe57 pop esi */
  ESI = (pop32());
  /* 115abe58 pop edi */
  EDI = (pop32());
  /* 115abe59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115abe5a ret  */
  ESPCHK(0x115abb40u, _esp0);
  ESP += 4; return;
  /* 115abe5b nop  */
  /* nop */
L_115abe5c:;
  /* 115abe5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115abe5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115abe62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115abe65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115abe68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115abe6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115abe6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115abe71 pop esi */
  ESI = (pop32());
  /* 115abe72 pop edi */
  EDI = (pop32());
  /* 115abe73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115abe74 ret  */
  ESPCHK(0x115abb40u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x115abe80 (104 bytes, 43 insns) */
void f_115abe80(void) {
  FTRACE(0x115abe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115abe80 push ebx */
  push32((uint32_t)(EBX));
  /* 115abe81 push esi */
  push32((uint32_t)(ESI));
  /* 115abe82 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 115abe86 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115abe88 jne 0x115abea2 */
  if (!C.zf) goto L_115abea2;
  /* 115abe8a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 115abe8e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 115abe92 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115abe94 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115abe96 mov ebx, eax */
  EBX = (EAX);
  /* 115abe98 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 115abe9c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115abe9e mov edx, ebx */
  EDX = (EBX);
  /* 115abea0 jmp 0x115abee3 */
  goto L_115abee3;
L_115abea2:;
  /* 115abea2 mov ecx, eax */
  ECX = (EAX);
  /* 115abea4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 115abea8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 115abeac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_115abeb0:;
  /* 115abeb0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 115abeb2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 115abeb4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 115abeb6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 115abeb8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115abeba jne 0x115abeb0 */
  if (!C.zf) goto L_115abeb0;
  /* 115abebc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115abebe mov esi, eax */
  ESI = (EAX);
  /* 115abec0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 115abec4 mov ecx, eax */
  ECX = (EAX);
  /* 115abec6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 115abeca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 115abecc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115abece jb 0x115abede */
  if (C.cf) goto L_115abede;
  /* 115abed0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abed4 ja 0x115abede */
  if ((!C.cf&&!C.zf)) goto L_115abede;
  /* 115abed6 jb 0x115abedf */
  if (C.cf) goto L_115abedf;
  /* 115abed8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abedc jbe 0x115abedf */
  if ((C.cf||C.zf)) goto L_115abedf;
L_115abede:;
  /* 115abede dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_115abedf:;
  /* 115abedf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115abee1 mov eax, esi */
  EAX = (ESI);
L_115abee3:;
  /* 115abee3 pop esi */
  ESI = (pop32());
  /* 115abee4 pop ebx */
  EBX = (pop32());
  /* 115abee5 ret 0x10 */
  ESPCHK(0x115abe80u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x115abef0 (117 bytes, 44 insns) */
void f_115abef0(void) {
  FTRACE(0x115abef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115abef0 push ebx */
  push32((uint32_t)(EBX));
  /* 115abef1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 115abef5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115abef7 jne 0x115abf11 */
  if (!C.zf) goto L_115abf11;
  /* 115abef9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 115abefd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 115abf01 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115abf03 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115abf05 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115abf09 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115abf0b mov eax, edx */
  EAX = (EDX);
  /* 115abf0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115abf0f jmp 0x115abf61 */
  goto L_115abf61;
L_115abf11:;
  /* 115abf11 mov ecx, eax */
  ECX = (EAX);
  /* 115abf13 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 115abf17 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 115abf1b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_115abf1f:;
  /* 115abf1f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 115abf21 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 115abf23 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 115abf25 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 115abf27 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115abf29 jne 0x115abf1f */
  if (!C.zf) goto L_115abf1f;
  /* 115abf2b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115abf2d mov ecx, eax */
  ECX = (EAX);
  /* 115abf2f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 115abf33 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 115abf34 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 115abf38 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115abf3a jb 0x115abf4a */
  if (C.cf) goto L_115abf4a;
  /* 115abf3c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abf40 ja 0x115abf4a */
  if ((!C.cf&&!C.zf)) goto L_115abf4a;
  /* 115abf42 jb 0x115abf52 */
  if (C.cf) goto L_115abf52;
  /* 115abf44 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abf48 jbe 0x115abf52 */
  if ((C.cf||C.zf)) goto L_115abf52;
L_115abf4a:;
  /* 115abf4a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115abf4e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_115abf52:;
  /* 115abf52 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115abf56 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115abf5a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 115abf5c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115abf5e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_115abf61:;
  /* 115abf61 pop ebx */
  EBX = (pop32());
  /* 115abf62 ret 0x10 */
  ESPCHK(0x115abef0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000bf70 @ 0x115abf70 (628 bytes, 214 insns) */
void f_115abf70(void) {
  FTRACE(0x115abf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115abf70 push ebp */
  push32((uint32_t)(EBP));
  /* 115abf71 mov ebp, esp */
  EBP = (ESP);
  /* 115abf73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115abf76 push ebx */
  push32((uint32_t)(EBX));
  /* 115abf77 push esi */
  push32((uint32_t)(ESI));
  /* 115abf78 push edi */
  push32((uint32_t)(EDI));
L_115abf79:;
  /* 115abf79 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abf7d jne 0x115abf9d */
  if (!C.zf) goto L_115abf9d;
  /* 115abf7f push 0x115cd14c */
  push32((uint32_t)(0x115cd14cu));
  /* 115abf84 push 0 */
  push32((uint32_t)(0x0u));
  /* 115abf86 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 115abf88 push 0x115cd140 */
  push32((uint32_t)(0x115cd140u));
  /* 115abf8d push 2 */
  push32((uint32_t)(0x2u));
  /* 115abf8f call 0x115a4320 */
  push32(0x115abf94u); f_115a4320();
  /* 115abf94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115abf97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115abf9a jne 0x115abf9d */
  if (!C.zf) goto L_115abf9d;
  /* 115abf9c int3  */
  x86_unimpl("int3 @ 0x115abf9c");
L_115abf9d:;
  /* 115abf9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115abf9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115abfa1 jne 0x115abf79 */
  if (!C.zf) goto L_115abf79;
  /* 115abfa3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115abfa6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115abfa9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115abfac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115abfaf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115abfb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115abfb5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115abfb8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 115abfbe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115abfc0 je 0x115abfcf */
  if (C.zf) goto L_115abfcf;
  /* 115abfc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115abfc5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115abfc8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 115abfcb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115abfcd je 0x115abfe5 */
  if (C.zf) goto L_115abfe5;
L_115abfcf:;
  /* 115abfcf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115abfd2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 115abfd5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 115abfd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115abfda mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 115abfdd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115abfe0 jmp 0x115ac1dd */
  goto L_115ac1dd;
L_115abfe5:;
  /* 115abfe5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115abfe8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 115abfeb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 115abfee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115abff0 je 0x115ac03c */
  if (C.zf) goto L_115ac03c;
  /* 115abff2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115abff5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 115abffc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115abfff mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 115ac002 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 115ac005 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ac007 je 0x115ac025 */
  if (C.zf) goto L_115ac025;
  /* 115ac009 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac00c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac00f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115ac012 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115ac014 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac017 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115ac01a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 115ac01d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac020 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 115ac023 jmp 0x115ac03c */
  goto L_115ac03c;
L_115ac025:;
  /* 115ac025 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac028 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115ac02b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 115ac02e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac031 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 115ac034 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115ac037 jmp 0x115ac1dd */
  goto L_115ac1dd;
L_115ac03c:;
  /* 115ac03c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac03f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115ac042 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 115ac045 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac048 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 115ac04b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac04e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115ac051 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 115ac054 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac057 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 115ac05a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac05d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 115ac064 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115ac06b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac06e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 115ac071 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac074 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115ac077 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 115ac07d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115ac07f jne 0x115ac0af */
  if (!C.zf) goto L_115ac0af;
  /* 115ac081 cmp dword ptr [ebp - 8], 0x115d0140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x115d0140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac088 je 0x115ac093 */
  if (C.zf) goto L_115ac093;
  /* 115ac08a cmp dword ptr [ebp - 8], 0x115d0160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x115d0160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac091 jne 0x115ac0a3 */
  if (!C.zf) goto L_115ac0a3;
L_115ac093:;
  /* 115ac093 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115ac096 push edx */
  push32((uint32_t)(EDX));
  /* 115ac097 call 0x115adee0 */
  push32(0x115ac09cu); f_115adee0();
  /* 115ac09c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac09f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ac0a1 jne 0x115ac0af */
  if (!C.zf) goto L_115ac0af;
L_115ac0a3:;
  /* 115ac0a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac0a6 push eax */
  push32((uint32_t)(EAX));
  /* 115ac0a7 call 0x115ade10 */
  push32(0x115ac0acu); f_115ade10();
  /* 115ac0ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115ac0af:;
  /* 115ac0af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac0b2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115ac0b5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 115ac0bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ac0bd je 0x115ac19b */
  if (C.zf) goto L_115ac19b;
L_115ac0c3:;
  /* 115ac0c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac0c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac0c9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 115ac0cb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ac0ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ac0d0 jge 0x115ac0f3 */
  if ((C.sf==C.of)) goto L_115ac0f3;
  /* 115ac0d2 push 0x115cd100 */
  push32((uint32_t)(0x115cd100u));
  /* 115ac0d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ac0d9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 115ac0de push 0x115cd140 */
  push32((uint32_t)(0x115cd140u));
  /* 115ac0e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 115ac0e5 call 0x115a4320 */
  push32(0x115ac0eau); f_115a4320();
  /* 115ac0ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac0ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac0f0 jne 0x115ac0f3 */
  if (!C.zf) goto L_115ac0f3;
  /* 115ac0f2 int3  */
  x86_unimpl("int3 @ 0x115ac0f2");
L_115ac0f3:;
  /* 115ac0f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ac0f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ac0f7 jne 0x115ac0c3 */
  if (!C.zf) goto L_115ac0c3;
  /* 115ac0f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac0fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac0ff mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 115ac101 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ac104 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115ac107 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac10a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115ac10d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac110 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac113 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115ac115 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac118 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 115ac11b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ac11e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac121 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 115ac124 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac128 jle 0x115ac146 */
  if ((C.zf||C.sf!=C.of)) goto L_115ac146;
  /* 115ac12a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac12d push ecx */
  push32((uint32_t)(ECX));
  /* 115ac12e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac131 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115ac134 push eax */
  push32((uint32_t)(EAX));
  /* 115ac135 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115ac138 push ecx */
  push32((uint32_t)(ECX));
  /* 115ac139 call 0x115adb00 */
  push32(0x115ac13eu); f_115adb00();
  /* 115ac13e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac141 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115ac144 jmp 0x115ac18e */
  goto L_115ac18e;
L_115ac146:;
  /* 115ac146 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac14a je 0x115ac169 */
  if (C.zf) goto L_115ac169;
  /* 115ac14c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115ac14f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 115ac152 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115ac155 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 115ac158 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ac15b mov ecx, dword ptr [edx*4 + 0x115d3000] */
  ECX = (r32((uint32_t)(EDX*4 + 0x115d3000)));
  /* 115ac162 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac164 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115ac167 jmp 0x115ac170 */
  goto L_115ac170;
L_115ac169:;
  /* 115ac169 mov dword ptr [ebp - 0x14], 0x115cfa60 */
  w32((uint32_t)(EBP + -0x14), (0x115cfa60u));
L_115ac170:;
  /* 115ac170 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115ac173 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 115ac177 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 115ac17a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ac17c je 0x115ac18e */
  if (C.zf) goto L_115ac18e;
  /* 115ac17e push 2 */
  push32((uint32_t)(0x2u));
  /* 115ac180 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ac182 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115ac185 push ecx */
  push32((uint32_t)(ECX));
  /* 115ac186 call 0x115ad9b0 */
  push32(0x115ac18bu); f_115ad9b0();
  /* 115ac18b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115ac18e:;
  /* 115ac18e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac191 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115ac194 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 115ac197 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 115ac199 jmp 0x115ac1b9 */
  goto L_115ac1b9;
L_115ac19b:;
  /* 115ac19b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115ac1a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac1a5 push edx */
  push32((uint32_t)(EDX));
  /* 115ac1a6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 115ac1a9 push eax */
  push32((uint32_t)(EAX));
  /* 115ac1aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115ac1ad push ecx */
  push32((uint32_t)(ECX));
  /* 115ac1ae call 0x115adb00 */
  push32(0x115ac1b3u); f_115adb00();
  /* 115ac1b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac1b6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_115ac1b9:;
  /* 115ac1b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ac1bc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac1bf je 0x115ac1d5 */
  if (C.zf) goto L_115ac1d5;
  /* 115ac1c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac1c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115ac1c7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 115ac1ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac1cd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 115ac1d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115ac1d3 jmp 0x115ac1dd */
  goto L_115ac1dd;
L_115ac1d5:;
  /* 115ac1d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ac1d8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_115ac1dd:;
  /* 115ac1dd pop edi */
  EDI = (pop32());
  /* 115ac1de pop esi */
  ESI = (pop32());
  /* 115ac1df pop ebx */
  EBX = (pop32());
  /* 115ac1e0 mov esp, ebp */
  ESP = (EBP);
  /* 115ac1e2 pop ebp */
  EBP = (pop32());
  /* 115ac1e3 ret  */
  ESPCHK(0x115abf70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1f0 @ 0x115ac1f0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_115ac1f0(void) {
  FTRACE(0x115ac1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ac1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115ac1f1 mov ebp, esp */
  EBP = (ESP);
  /* 115ac1f3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ac1f9 push ebx */
  push32((uint32_t)(EBX));
  /* 115ac1fa push esi */
  push32((uint32_t)(ESI));
  /* 115ac1fb push edi */
  push32((uint32_t)(EDI));
  /* 115ac1fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 115ac203 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 115ac20d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_115ac214:;
  /* 115ac214 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ac217 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115ac219 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 115ac21c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac220 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ac223 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac226 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 115ac229 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ac22b je 0x115ace07 */
  if (C.zf) goto L_115ace07;
  /* 115ac231 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac238 jl 0x115ace07 */
  if ((C.sf!=C.of)) goto L_115ace07;
  /* 115ac23e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac242 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac245 jl 0x115ac266 */
  if ((C.sf!=C.of)) goto L_115ac266;
  /* 115ac247 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac24b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac24e jg 0x115ac266 */
  if ((!C.zf&&C.sf==C.of)) goto L_115ac266;
  /* 115ac250 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac254 movsx ecx, byte ptr [eax + 0x115cd138] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x115cd138))));
  /* 115ac25b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 115ac25e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 115ac264 jmp 0x115ac270 */
  goto L_115ac270;
L_115ac266:;
  /* 115ac266 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_115ac270:;
  /* 115ac270 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 115ac276 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 115ac279 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ac27c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115ac27f movsx edx, byte ptr [ecx + eax*8 + 0x115cd158] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x115cd158))));
  /* 115ac287 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 115ac28a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 115ac28d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115ac290 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 115ac296 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac29d ja 0x115ace02 */
  if ((!C.cf&&!C.zf)) goto L_115ace02;
  /* 115ac2a3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 115ac2a9 jmp dword ptr [ecx*4 + 0x115ace14] */
  switch (ECX) {
    case 0: goto L_115ac2b0;
    case 1: goto L_115ac34a;
    case 2: goto L_115ac38c;
    case 3: goto L_115ac3fb;
    case 4: goto L_115ac453;
    case 5: goto L_115ac462;
    case 6: goto L_115ac4ae;
    case 7: goto L_115ac541;
    case 8: goto L_115ac3d8;
    case 9: goto L_115ac3e3;
    case 10: goto L_115ac3ce;
    case 11: goto L_115ac3c3;
    case 12: goto L_115ac3ee;
    case 13: goto L_115ac3f6;
    default: x86_unimpl("switch@0x115ac2a9 out of table"); return;
  }
L_115ac2b0:;
  /* 115ac2b0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 115ac2b7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 115ac2ba and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115ac2c0 mov eax, dword ptr [0x115cfc98] */
  EAX = (r32((uint32_t)(0x115cfc98)));
  /* 115ac2c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115ac2c7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 115ac2cb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 115ac2d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115ac2d3 je 0x115ac32d */
  if (C.zf) goto L_115ac32d;
  /* 115ac2d5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 115ac2db push edx */
  push32((uint32_t)(EDX));
  /* 115ac2dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ac2df push eax */
  push32((uint32_t)(EAX));
  /* 115ac2e0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac2e4 push ecx */
  push32((uint32_t)(ECX));
  /* 115ac2e5 call 0x115acf20 */
  push32(0x115ac2eau); f_115acf20();
  /* 115ac2ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac2ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ac2f0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115ac2f2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 115ac2f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ac2f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac2fb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_115ac2fe:;
  /* 115ac2fe movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac302 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ac304 jne 0x115ac327 */
  if (!C.zf) goto L_115ac327;
  /* 115ac306 push 0x115cd1d8 */
  push32((uint32_t)(0x115cd1d8u));
  /* 115ac30b push 0 */
  push32((uint32_t)(0x0u));
  /* 115ac30d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 115ac312 push 0x115cd1cc */
  push32((uint32_t)(0x115cd1ccu));
  /* 115ac317 push 2 */
  push32((uint32_t)(0x2u));
  /* 115ac319 call 0x115a4320 */
  push32(0x115ac31eu); f_115a4320();
  /* 115ac31e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac321 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac324 jne 0x115ac327 */
  if (!C.zf) goto L_115ac327;
  /* 115ac326 int3  */
  x86_unimpl("int3 @ 0x115ac326");
L_115ac327:;
  /* 115ac327 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ac329 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ac32b jne 0x115ac2fe */
  if (!C.zf) goto L_115ac2fe;
L_115ac32d:;
  /* 115ac32d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 115ac333 push ecx */
  push32((uint32_t)(ECX));
  /* 115ac334 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ac337 push edx */
  push32((uint32_t)(EDX));
  /* 115ac338 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac33c push eax */
  push32((uint32_t)(EAX));
  /* 115ac33d call 0x115acf20 */
  push32(0x115ac342u); f_115acf20();
  /* 115ac342 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac345 jmp 0x115ace02 */
  goto L_115ace02;
L_115ac34a:;
  /* 115ac34a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115ac351 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac354 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 115ac35a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 115ac360 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 115ac366 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 115ac36c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115ac36f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115ac376 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 115ac380 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 115ac387 jmp 0x115ace02 */
  goto L_115ace02;
L_115ac38c:;
  /* 115ac38c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac390 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 115ac396 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 115ac39c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ac39f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 115ac3a5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac3ac ja 0x115ac3f6 */
  if ((!C.cf&&!C.zf)) goto L_115ac3f6;
  /* 115ac3ae mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 115ac3b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ac3b6 mov al, byte ptr [ecx + 0x115ace4c] */
  AL = (r8((uint32_t)(ECX + 0x115ace4c)));
  /* 115ac3bc jmp dword ptr [eax*4 + 0x115ace34] */
  switch (EAX) {
    case 0: goto L_115ac3d8;
    case 1: goto L_115ac3e3;
    case 2: goto L_115ac3ce;
    case 3: goto L_115ac3c3;
    case 4: goto L_115ac3ee;
    case 5: goto L_115ac3f6;
    default: x86_unimpl("switch@0x115ac3bc out of table"); return;
  }
L_115ac3c3:;
  /* 115ac3c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac3c6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 115ac3c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115ac3cc jmp 0x115ac3f6 */
  goto L_115ac3f6;
L_115ac3ce:;
  /* 115ac3ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac3d1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 115ac3d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115ac3d6 jmp 0x115ac3f6 */
  goto L_115ac3f6;
L_115ac3d8:;
  /* 115ac3d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac3db or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 115ac3de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115ac3e1 jmp 0x115ac3f6 */
  goto L_115ac3f6;
L_115ac3e3:;
  /* 115ac3e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac3e6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 115ac3e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115ac3ec jmp 0x115ac3f6 */
  goto L_115ac3f6;
L_115ac3ee:;
  /* 115ac3ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac3f1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 115ac3f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115ac3f6:;
  /* 115ac3f6 jmp 0x115ace02 */
  goto L_115ace02;
L_115ac3fb:;
  /* 115ac3fb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac3ff cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac402 jne 0x115ac437 */
  if (!C.zf) goto L_115ac437;
  /* 115ac404 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 115ac407 push edx */
  push32((uint32_t)(EDX));
  /* 115ac408 call 0x115ad030 */
  push32(0x115ac40du); f_115ad030();
  /* 115ac40d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac410 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 115ac416 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac41d jge 0x115ac435 */
  if ((C.sf==C.of)) goto L_115ac435;
  /* 115ac41f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac422 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 115ac424 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115ac427 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 115ac42d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115ac42f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_115ac435:;
  /* 115ac435 jmp 0x115ac44e */
  goto L_115ac44e;
L_115ac437:;
  /* 115ac437 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 115ac43d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ac440 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac444 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 115ac448 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_115ac44e:;
  /* 115ac44e jmp 0x115ace02 */
  goto L_115ace02;
L_115ac453:;
  /* 115ac453 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 115ac45d jmp 0x115ace02 */
  goto L_115ace02;
L_115ac462:;
  /* 115ac462 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac466 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac469 jne 0x115ac492 */
  if (!C.zf) goto L_115ac492;
  /* 115ac46b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 115ac46e push eax */
  push32((uint32_t)(EAX));
  /* 115ac46f call 0x115ad030 */
  push32(0x115ac474u); f_115ad030();
  /* 115ac474 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac477 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 115ac47d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac484 jge 0x115ac490 */
  if ((C.sf==C.of)) goto L_115ac490;
  /* 115ac486 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_115ac490:;
  /* 115ac490 jmp 0x115ac4a9 */
  goto L_115ac4a9;
L_115ac492:;
  /* 115ac492 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 115ac498 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ac49b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac49f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 115ac4a3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_115ac4a9:;
  /* 115ac4a9 jmp 0x115ace02 */
  goto L_115ace02;
L_115ac4ae:;
  /* 115ac4ae movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac4b2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 115ac4b8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 115ac4be sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ac4c1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 115ac4c7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac4ce ja 0x115ac53c */
  if ((!C.cf&&!C.zf)) goto L_115ac53c;
  /* 115ac4d0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 115ac4d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ac4d8 mov al, byte ptr [ecx + 0x115ace71] */
  AL = (r8((uint32_t)(ECX + 0x115ace71)));
  /* 115ac4de jmp dword ptr [eax*4 + 0x115ace5d] */
  switch (EAX) {
    case 0: goto L_115ac4f0;
    case 1: goto L_115ac529;
    case 2: goto L_115ac4e5;
    case 3: goto L_115ac533;
    case 4: goto L_115ac53c;
    default: x86_unimpl("switch@0x115ac4de out of table"); return;
  }
L_115ac4e5:;
  /* 115ac4e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac4e8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 115ac4eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115ac4ee jmp 0x115ac53c */
  goto L_115ac53c;
L_115ac4f0:;
  /* 115ac4f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ac4f3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115ac4f6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac4f9 jne 0x115ac51b */
  if (!C.zf) goto L_115ac51b;
  /* 115ac4fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ac4fe movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 115ac502 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac505 jne 0x115ac51b */
  if (!C.zf) goto L_115ac51b;
  /* 115ac507 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ac50a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac50d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 115ac510 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac513 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 115ac516 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115ac519 jmp 0x115ac527 */
  goto L_115ac527;
L_115ac51b:;
  /* 115ac51b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 115ac522 jmp 0x115ac2b0 */
  goto L_115ac2b0;
L_115ac527:;
  /* 115ac527 jmp 0x115ac53c */
  goto L_115ac53c;
L_115ac529:;
  /* 115ac529 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac52c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 115ac52e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115ac531 jmp 0x115ac53c */
  goto L_115ac53c;
L_115ac533:;
  /* 115ac533 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac536 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 115ac539 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115ac53c:;
  /* 115ac53c jmp 0x115ace02 */
  goto L_115ace02;
L_115ac541:;
  /* 115ac541 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac545 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 115ac54b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 115ac551 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ac554 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 115ac55a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac561 ja 0x115acc27 */
  if ((!C.cf&&!C.zf)) goto L_115acc27;
  /* 115ac567 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 115ac56d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115ac56f mov cl, byte ptr [edx + 0x115acedc] */
  CL = (r8((uint32_t)(EDX + 0x115acedc)));
  /* 115ac575 jmp dword ptr [ecx*4 + 0x115acea0] */
  switch (ECX) {
    case 0: goto L_115ac57c;
    case 1: goto L_115ac810;
    case 2: goto L_115ac6a0;
    case 3: goto L_115ac949;
    case 4: goto L_115ac60b;
    case 5: goto L_115ac591;
    case 6: goto L_115ac91b;
    case 7: goto L_115ac820;
    case 8: goto L_115ac7c5;
    case 9: goto L_115ac995;
    case 10: goto L_115ac93f;
    case 11: goto L_115ac6b6;
    case 12: goto L_115ac933;
    case 13: goto L_115ac955;
    case 14: goto L_115acc27;
    default: x86_unimpl("switch@0x115ac575 out of table"); return;
  }
L_115ac57c:;
  /* 115ac57c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac57f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 115ac584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ac586 jne 0x115ac591 */
  if (!C.zf) goto L_115ac591;
  /* 115ac588 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac58b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 115ac58e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115ac591:;
  /* 115ac591 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac594 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 115ac59a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ac59c je 0x115ac5d7 */
  if (C.zf) goto L_115ac5d7;
  /* 115ac59e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 115ac5a1 push eax */
  push32((uint32_t)(EAX));
  /* 115ac5a2 call 0x115ad070 */
  push32(0x115ac5a7u); f_115ad070();
  /* 115ac5a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac5aa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 115ac5ae mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 115ac5b2 push ecx */
  push32((uint32_t)(ECX));
  /* 115ac5b3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 115ac5b9 push edx */
  push32((uint32_t)(EDX));
  /* 115ac5ba call 0x115ae150 */
  push32(0x115ac5bfu); f_115ae150();
  /* 115ac5bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac5c2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115ac5c5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac5c9 jge 0x115ac5d5 */
  if ((C.sf==C.of)) goto L_115ac5d5;
  /* 115ac5cb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_115ac5d5:;
  /* 115ac5d5 jmp 0x115ac5fd */
  goto L_115ac5fd;
L_115ac5d7:;
  /* 115ac5d7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 115ac5da push eax */
  push32((uint32_t)(EAX));
  /* 115ac5db call 0x115ad030 */
  push32(0x115ac5e0u); f_115ad030();
  /* 115ac5e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac5e3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 115ac5ea mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 115ac5f0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 115ac5f6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_115ac5fd:;
  /* 115ac5fd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 115ac603 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 115ac606 jmp 0x115acc27 */
  goto L_115acc27;
L_115ac60b:;
  /* 115ac60b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 115ac60e push eax */
  push32((uint32_t)(EAX));
  /* 115ac60f call 0x115ad030 */
  push32(0x115ac614u); f_115ad030();
  /* 115ac614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac617 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 115ac61d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac624 je 0x115ac632 */
  if (C.zf) goto L_115ac632;
  /* 115ac626 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 115ac62c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac630 jne 0x115ac64c */
  if (!C.zf) goto L_115ac64c;
L_115ac632:;
  /* 115ac632 mov edx, dword ptr [0x115cffb0] */
  EDX = (r32((uint32_t)(0x115cffb0)));
  /* 115ac638 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 115ac63b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ac63e push eax */
  push32((uint32_t)(EAX));
  /* 115ac63f call 0x115a8090 */
  push32(0x115ac644u); f_115a8090();
  /* 115ac644 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac647 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115ac64a jmp 0x115ac69b */
  goto L_115ac69b;
L_115ac64c:;
  /* 115ac64c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac64f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 115ac655 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115ac657 je 0x115ac67c */
  if (C.zf) goto L_115ac67c;
  /* 115ac659 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 115ac65f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 115ac662 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115ac665 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 115ac66b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 115ac66e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 115ac670 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 115ac673 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 115ac67a jmp 0x115ac69b */
  goto L_115ac69b;
L_115ac67c:;
  /* 115ac67c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 115ac683 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 115ac689 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115ac68c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 115ac68f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 115ac695 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 115ac698 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_115ac69b:;
  /* 115ac69b jmp 0x115acc27 */
  goto L_115acc27;
L_115ac6a0:;
  /* 115ac6a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac6a3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 115ac6a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115ac6ab jne 0x115ac6b6 */
  if (!C.zf) goto L_115ac6b6;
  /* 115ac6ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac6b0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 115ac6b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115ac6b6:;
  /* 115ac6b6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac6bd jne 0x115ac6cb */
  if (!C.zf) goto L_115ac6cb;
  /* 115ac6bf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 115ac6c9 jmp 0x115ac6d7 */
  goto L_115ac6d7;
L_115ac6cb:;
  /* 115ac6cb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 115ac6d1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_115ac6d7:;
  /* 115ac6d7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 115ac6dd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 115ac6e3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 115ac6e6 push edx */
  push32((uint32_t)(EDX));
  /* 115ac6e7 call 0x115ad030 */
  push32(0x115ac6ecu); f_115ad030();
  /* 115ac6ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac6ef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115ac6f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac6f5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 115ac6fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ac6fc je 0x115ac766 */
  if (C.zf) goto L_115ac766;
  /* 115ac6fe cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac702 jne 0x115ac70d */
  if (!C.zf) goto L_115ac70d;
  /* 115ac704 mov ecx, dword ptr [0x115cffb4] */
  ECX = (r32((uint32_t)(0x115cffb4)));
  /* 115ac70a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_115ac70d:;
  /* 115ac70d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 115ac714 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ac717 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_115ac71d:;
  /* 115ac71d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 115ac723 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 115ac729 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ac72c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 115ac732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ac734 je 0x115ac756 */
  if (C.zf) goto L_115ac756;
  /* 115ac736 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 115ac73c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ac73e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 115ac741 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ac743 je 0x115ac756 */
  if (C.zf) goto L_115ac756;
  /* 115ac745 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 115ac74b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac74e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 115ac754 jmp 0x115ac71d */
  goto L_115ac71d;
L_115ac756:;
  /* 115ac756 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 115ac75c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ac75f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 115ac761 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 115ac764 jmp 0x115ac7c0 */
  goto L_115ac7c0;
L_115ac766:;
  /* 115ac766 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac76a jne 0x115ac774 */
  if (!C.zf) goto L_115ac774;
  /* 115ac76c mov eax, dword ptr [0x115cffb0] */
  EAX = (r32((uint32_t)(0x115cffb0)));
  /* 115ac771 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_115ac774:;
  /* 115ac774 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ac777 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_115ac77d:;
  /* 115ac77d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 115ac783 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 115ac789 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ac78c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 115ac792 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ac794 je 0x115ac7b4 */
  if (C.zf) goto L_115ac7b4;
  /* 115ac796 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 115ac79c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115ac79f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ac7a1 je 0x115ac7b4 */
  if (C.zf) goto L_115ac7b4;
  /* 115ac7a3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 115ac7a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac7ac mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 115ac7b2 jmp 0x115ac77d */
  goto L_115ac77d;
L_115ac7b4:;
  /* 115ac7b4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 115ac7ba sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ac7bd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_115ac7c0:;
  /* 115ac7c0 jmp 0x115acc27 */
  goto L_115acc27;
L_115ac7c5:;
  /* 115ac7c5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 115ac7c8 push edx */
  push32((uint32_t)(EDX));
  /* 115ac7c9 call 0x115ad030 */
  push32(0x115ac7ceu); f_115ad030();
  /* 115ac7ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac7d1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 115ac7d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac7da and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 115ac7dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ac7df je 0x115ac7f3 */
  if (C.zf) goto L_115ac7f3;
  /* 115ac7e1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 115ac7e7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 115ac7ee mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 115ac7f1 jmp 0x115ac801 */
  goto L_115ac801;
L_115ac7f3:;
  /* 115ac7f3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 115ac7f9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 115ac7ff mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_115ac801:;
  /* 115ac801 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 115ac80b jmp 0x115acc27 */
  goto L_115acc27;
L_115ac810:;
  /* 115ac810 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 115ac817 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 115ac81a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 115ac81d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_115ac820:;
  /* 115ac820 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac823 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 115ac825 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115ac828 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 115ac82e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 115ac831 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac838 jge 0x115ac846 */
  if ((C.sf==C.of)) goto L_115ac846;
  /* 115ac83a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 115ac844 jmp 0x115ac862 */
  goto L_115ac862;
L_115ac846:;
  /* 115ac846 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac84d jne 0x115ac862 */
  if (!C.zf) goto L_115ac862;
  /* 115ac84f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac853 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac856 jne 0x115ac862 */
  if (!C.zf) goto L_115ac862;
  /* 115ac858 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_115ac862:;
  /* 115ac862 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115ac865 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac868 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 115ac86b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115ac86e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ac871 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115ac873 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 115ac876 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 115ac87c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 115ac882 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ac885 push ecx */
  push32((uint32_t)(ECX));
  /* 115ac886 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 115ac88c push edx */
  push32((uint32_t)(EDX));
  /* 115ac88d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac891 push eax */
  push32((uint32_t)(EAX));
  /* 115ac892 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ac895 push ecx */
  push32((uint32_t)(ECX));
  /* 115ac896 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 115ac89c push edx */
  push32((uint32_t)(EDX));
  /* 115ac89d call dword ptr [0x115d03a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d03a0))), 0x115ac8a3u);
  /* 115ac8a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac8a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac8a9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 115ac8ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ac8b0 je 0x115ac8c8 */
  if (C.zf) goto L_115ac8c8;
  /* 115ac8b2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac8b9 jne 0x115ac8c8 */
  if (!C.zf) goto L_115ac8c8;
  /* 115ac8bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ac8be push ecx */
  push32((uint32_t)(ECX));
  /* 115ac8bf call dword ptr [0x115d03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d03ac))), 0x115ac8c5u);
  /* 115ac8c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115ac8c8:;
  /* 115ac8c8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 115ac8cc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac8cf jne 0x115ac8ea */
  if (!C.zf) goto L_115ac8ea;
  /* 115ac8d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac8d4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 115ac8d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ac8db jne 0x115ac8ea */
  if (!C.zf) goto L_115ac8ea;
  /* 115ac8dd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ac8e0 push ecx */
  push32((uint32_t)(ECX));
  /* 115ac8e1 call dword ptr [0x115d03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d03a4))), 0x115ac8e7u);
  /* 115ac8e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115ac8ea:;
  /* 115ac8ea mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ac8ed movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115ac8f0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ac8f3 jne 0x115ac907 */
  if (!C.zf) goto L_115ac907;
  /* 115ac8f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac8f8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 115ac8fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115ac8fe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ac901 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac904 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_115ac907:;
  /* 115ac907 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ac90a push eax */
  push32((uint32_t)(EAX));
  /* 115ac90b call 0x115a8090 */
  push32(0x115ac910u); f_115a8090();
  /* 115ac910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac913 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115ac916 jmp 0x115acc27 */
  goto L_115acc27;
L_115ac91b:;
  /* 115ac91b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac91e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 115ac921 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115ac924 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 115ac92e jmp 0x115ac9b5 */
  goto L_115ac9b5;
L_115ac933:;
  /* 115ac933 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 115ac93d jmp 0x115ac9b5 */
  goto L_115ac9b5;
L_115ac93f:;
  /* 115ac93f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_115ac949:;
  /* 115ac949 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 115ac953 jmp 0x115ac95f */
  goto L_115ac95f;
L_115ac955:;
  /* 115ac955 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_115ac95f:;
  /* 115ac95f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 115ac969 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac96c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 115ac972 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ac974 je 0x115ac993 */
  if (C.zf) goto L_115ac993;
  /* 115ac976 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 115ac97d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 115ac983 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac986 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 115ac98c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_115ac993:;
  /* 115ac993 jmp 0x115ac9b5 */
  goto L_115ac9b5;
L_115ac995:;
  /* 115ac995 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 115ac99f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac9a2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 115ac9a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115ac9aa je 0x115ac9b5 */
  if (C.zf) goto L_115ac9b5;
  /* 115ac9ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac9af or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 115ac9b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115ac9b5:;
  /* 115ac9b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac9b8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 115ac9bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ac9bf je 0x115ac9de */
  if (C.zf) goto L_115ac9de;
  /* 115ac9c1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 115ac9c4 push ecx */
  push32((uint32_t)(ECX));
  /* 115ac9c5 call 0x115ad050 */
  push32(0x115ac9cau); f_115ad050();
  /* 115ac9ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac9cd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 115ac9d3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 115ac9d9 jmp 0x115aca6f */
  goto L_115aca6f;
L_115ac9de:;
  /* 115ac9de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac9e1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 115ac9e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ac9e6 je 0x115aca30 */
  if (C.zf) goto L_115aca30;
  /* 115ac9e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ac9eb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 115ac9ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ac9f0 je 0x115aca10 */
  if (C.zf) goto L_115aca10;
  /* 115ac9f2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 115ac9f5 push ecx */
  push32((uint32_t)(ECX));
  /* 115ac9f6 call 0x115ad030 */
  push32(0x115ac9fbu); f_115ad030();
  /* 115ac9fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ac9fe movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 115aca01 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115aca02 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 115aca08 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 115aca0e jmp 0x115aca2e */
  goto L_115aca2e;
L_115aca10:;
  /* 115aca10 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 115aca13 push edx */
  push32((uint32_t)(EDX));
  /* 115aca14 call 0x115ad030 */
  push32(0x115aca19u); f_115ad030();
  /* 115aca19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aca1c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115aca21 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115aca22 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 115aca28 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_115aca2e:;
  /* 115aca2e jmp 0x115aca6f */
  goto L_115aca6f;
L_115aca30:;
  /* 115aca30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aca33 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 115aca36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115aca38 je 0x115aca55 */
  if (C.zf) goto L_115aca55;
  /* 115aca3a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 115aca3d push ecx */
  push32((uint32_t)(ECX));
  /* 115aca3e call 0x115ad030 */
  push32(0x115aca43u); f_115ad030();
  /* 115aca43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aca46 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115aca47 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 115aca4d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 115aca53 jmp 0x115aca6f */
  goto L_115aca6f;
L_115aca55:;
  /* 115aca55 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 115aca58 push edx */
  push32((uint32_t)(EDX));
  /* 115aca59 call 0x115ad030 */
  push32(0x115aca5eu); f_115ad030();
  /* 115aca5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aca61 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115aca63 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 115aca69 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_115aca6f:;
  /* 115aca6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aca72 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 115aca75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115aca77 je 0x115acab7 */
  if (C.zf) goto L_115acab7;
  /* 115aca79 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aca80 jg 0x115acab7 */
  if ((!C.zf&&C.sf==C.of)) goto L_115acab7;
  /* 115aca82 jl 0x115aca8d */
  if ((C.sf!=C.of)) goto L_115aca8d;
  /* 115aca84 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aca8b jae 0x115acab7 */
  if (!C.cf) goto L_115acab7;
L_115aca8d:;
  /* 115aca8d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 115aca93 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115aca95 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 115aca9b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aca9e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115acaa0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 115acaa6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 115acaac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115acaaf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 115acab2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115acab5 jmp 0x115acacf */
  goto L_115acacf;
L_115acab7:;
  /* 115acab7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 115acabd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 115acac3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 115acac9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_115acacf:;
  /* 115acacf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115acad2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 115acad8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115acada jne 0x115acaf7 */
  if (!C.zf) goto L_115acaf7;
  /* 115acadc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 115acae2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 115acae8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 115acaeb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 115acaf1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_115acaf7:;
  /* 115acaf7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115acafe jge 0x115acb0c */
  if ((C.sf==C.of)) goto L_115acb0c;
  /* 115acb00 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 115acb0a jmp 0x115acb15 */
  goto L_115acb15;
L_115acb0c:;
  /* 115acb0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115acb0f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 115acb12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115acb15:;
  /* 115acb15 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 115acb1b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 115acb21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115acb23 jne 0x115acb2c */
  if (!C.zf) goto L_115acb2c;
  /* 115acb25 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_115acb2c:;
  /* 115acb2c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 115acb2f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_115acb32:;
  /* 115acb32 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 115acb38 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 115acb3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115acb41 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 115acb47 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115acb49 jg 0x115acb5f */
  if ((!C.zf&&C.sf==C.of)) goto L_115acb5f;
  /* 115acb4b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 115acb51 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 115acb57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115acb59 je 0x115acbe0 */
  if (C.zf) goto L_115acbe0;
L_115acb5f:;
  /* 115acb5f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 115acb65 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115acb66 push edx */
  push32((uint32_t)(EDX));
  /* 115acb67 push eax */
  push32((uint32_t)(EAX));
  /* 115acb68 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 115acb6e push edx */
  push32((uint32_t)(EDX));
  /* 115acb6f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 115acb75 push eax */
  push32((uint32_t)(EAX));
  /* 115acb76 call 0x115abef0 */
  push32(0x115acb7bu); f_115abef0();
  /* 115acb7b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115acb7e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 115acb84 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 115acb8a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115acb8b push edx */
  push32((uint32_t)(EDX));
  /* 115acb8c push eax */
  push32((uint32_t)(EAX));
  /* 115acb8d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 115acb93 push ecx */
  push32((uint32_t)(ECX));
  /* 115acb94 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 115acb9a push edx */
  push32((uint32_t)(EDX));
  /* 115acb9b call 0x115abe80 */
  push32(0x115acba0u); f_115abe80();
  /* 115acba0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 115acba6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 115acbac cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115acbb3 jle 0x115acbc7 */
  if ((C.zf||C.sf!=C.of)) goto L_115acbc7;
  /* 115acbb5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 115acbbb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115acbc1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_115acbc7:;
  /* 115acbc7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115acbca mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 115acbd0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 115acbd2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115acbd5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115acbd8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115acbdb jmp 0x115acb32 */
  goto L_115acb32;
L_115acbe0:;
  /* 115acbe0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 115acbe3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115acbe6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 115acbe9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 115acbec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115acbef mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 115acbf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115acbf5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 115acbfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115acbfc je 0x115acc27 */
  if (C.zf) goto L_115acc27;
  /* 115acbfe mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115acc01 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115acc04 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115acc07 jne 0x115acc0f */
  if (!C.zf) goto L_115acc0f;
  /* 115acc09 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115acc0d jne 0x115acc27 */
  if (!C.zf) goto L_115acc27;
L_115acc0f:;
  /* 115acc0f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115acc12 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115acc15 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115acc18 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115acc1b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 115acc1e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115acc21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115acc24 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_115acc27:;
  /* 115acc27 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115acc2e jne 0x115ace02 */
  if (!C.zf) goto L_115ace02;
  /* 115acc34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115acc37 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 115acc3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115acc3c je 0x115acc8d */
  if (C.zf) goto L_115acc8d;
  /* 115acc3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115acc41 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 115acc47 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115acc49 je 0x115acc5b */
  if (C.zf) goto L_115acc5b;
  /* 115acc4b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 115acc52 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 115acc59 jmp 0x115acc8d */
  goto L_115acc8d;
L_115acc5b:;
  /* 115acc5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115acc5e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 115acc61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115acc63 je 0x115acc75 */
  if (C.zf) goto L_115acc75;
  /* 115acc65 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 115acc6c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 115acc73 jmp 0x115acc8d */
  goto L_115acc8d;
L_115acc75:;
  /* 115acc75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115acc78 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 115acc7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115acc7d je 0x115acc8d */
  if (C.zf) goto L_115acc8d;
  /* 115acc7f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 115acc86 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_115acc8d:;
  /* 115acc8d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 115acc93 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115acc96 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115acc99 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 115acc9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115acca2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 115acca5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115acca7 jne 0x115accc5 */
  if (!C.zf) goto L_115accc5;
  /* 115acca9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 115accaf push eax */
  push32((uint32_t)(EAX));
  /* 115accb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115accb3 push ecx */
  push32((uint32_t)(ECX));
  /* 115accb4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 115accba push edx */
  push32((uint32_t)(EDX));
  /* 115accbb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 115accbd call 0x115acfa0 */
  push32(0x115accc2u); f_115acfa0();
  /* 115accc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115accc5:;
  /* 115accc5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 115acccb push eax */
  push32((uint32_t)(EAX));
  /* 115acccc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115acccf push ecx */
  push32((uint32_t)(ECX));
  /* 115accd0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115accd3 push edx */
  push32((uint32_t)(EDX));
  /* 115accd4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 115accda push eax */
  push32((uint32_t)(EAX));
  /* 115accdb call 0x115acfe0 */
  push32(0x115acce0u); f_115acfe0();
  /* 115acce0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115acce3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115acce6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 115acce9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115acceb je 0x115acd13 */
  if (C.zf) goto L_115acd13;
  /* 115acced mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115accf0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 115accf3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115accf5 jne 0x115acd13 */
  if (!C.zf) goto L_115acd13;
  /* 115accf7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 115accfd push eax */
  push32((uint32_t)(EAX));
  /* 115accfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115acd01 push ecx */
  push32((uint32_t)(ECX));
  /* 115acd02 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 115acd08 push edx */
  push32((uint32_t)(EDX));
  /* 115acd09 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 115acd0b call 0x115acfa0 */
  push32(0x115acd10u); f_115acfa0();
  /* 115acd10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115acd13:;
  /* 115acd13 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115acd17 je 0x115acdc1 */
  if (C.zf) goto L_115acdc1;
  /* 115acd1d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115acd21 jle 0x115acdc1 */
  if ((C.zf||C.sf!=C.of)) goto L_115acdc1;
  /* 115acd27 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115acd2a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 115acd30 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115acd33 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_115acd39:;
  /* 115acd39 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 115acd3f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 115acd45 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115acd48 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 115acd4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115acd50 je 0x115acdbf */
  if (C.zf) goto L_115acdbf;
  /* 115acd52 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 115acd58 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 115acd5b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 115acd62 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 115acd69 push eax */
  push32((uint32_t)(EAX));
  /* 115acd6a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 115acd70 push ecx */
  push32((uint32_t)(ECX));
  /* 115acd71 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 115acd77 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115acd7a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 115acd80 call 0x115ae150 */
  push32(0x115acd85u); f_115ae150();
  /* 115acd85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115acd88 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 115acd8e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115acd95 jg 0x115acd99 */
  if ((!C.zf&&C.sf==C.of)) goto L_115acd99;
  /* 115acd97 jmp 0x115acdbf */
  goto L_115acdbf;
L_115acd99:;
  /* 115acd99 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 115acd9f push eax */
  push32((uint32_t)(EAX));
  /* 115acda0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115acda3 push ecx */
  push32((uint32_t)(ECX));
  /* 115acda4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 115acdaa push edx */
  push32((uint32_t)(EDX));
  /* 115acdab lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 115acdb1 push eax */
  push32((uint32_t)(EAX));
  /* 115acdb2 call 0x115acfe0 */
  push32(0x115acdb7u); f_115acfe0();
  /* 115acdb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115acdba jmp 0x115acd39 */
  goto L_115acd39;
L_115acdbf:;
  /* 115acdbf jmp 0x115acddc */
  goto L_115acddc;
L_115acdc1:;
  /* 115acdc1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 115acdc7 push ecx */
  push32((uint32_t)(ECX));
  /* 115acdc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115acdcb push edx */
  push32((uint32_t)(EDX));
  /* 115acdcc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115acdcf push eax */
  push32((uint32_t)(EAX));
  /* 115acdd0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115acdd3 push ecx */
  push32((uint32_t)(ECX));
  /* 115acdd4 call 0x115acfe0 */
  push32(0x115acdd9u); f_115acfe0();
  /* 115acdd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115acddc:;
  /* 115acddc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115acddf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 115acde2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115acde4 je 0x115ace02 */
  if (C.zf) goto L_115ace02;
  /* 115acde6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 115acdec push eax */
  push32((uint32_t)(EAX));
  /* 115acded mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115acdf0 push ecx */
  push32((uint32_t)(ECX));
  /* 115acdf1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 115acdf7 push edx */
  push32((uint32_t)(EDX));
  /* 115acdf8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 115acdfa call 0x115acfa0 */
  push32(0x115acdffu); f_115acfa0();
  /* 115acdff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115ace02:;
  /* 115ace02 jmp 0x115ac214 */
  goto L_115ac214;
L_115ace07:;
  /* 115ace07 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 115ace0d pop edi */
  EDI = (pop32());
  /* 115ace0e pop esi */
  ESI = (pop32());
  /* 115ace0f pop ebx */
  EBX = (pop32());
  /* 115ace10 mov esp, ebp */
  ESP = (EBP);
  /* 115ace12 pop ebp */
  EBP = (pop32());
  /* 115ace13 ret  */
  ESPCHK(0x115ac1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf20 @ 0x115acf20 (119 bytes, 44 insns) */
void f_115acf20(void) {
  FTRACE(0x115acf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115acf20 push ebp */
  push32((uint32_t)(EBP));
  /* 115acf21 mov ebp, esp */
  EBP = (ESP);
  /* 115acf23 push ecx */
  push32((uint32_t)(ECX));
  /* 115acf24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115acf27 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115acf2a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115acf2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115acf30 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 115acf33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115acf36 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115acf3a jl 0x115acf62 */
  if ((C.sf!=C.of)) goto L_115acf62;
  /* 115acf3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115acf3f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115acf41 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 115acf44 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 115acf46 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 115acf4a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115acf50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115acf53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115acf56 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115acf58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115acf5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115acf5e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115acf60 jmp 0x115acf75 */
  goto L_115acf75;
L_115acf62:;
  /* 115acf62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115acf65 push edx */
  push32((uint32_t)(EDX));
  /* 115acf66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115acf69 push eax */
  push32((uint32_t)(EAX));
  /* 115acf6a call 0x115abf70 */
  push32(0x115acf6fu); f_115abf70();
  /* 115acf6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115acf72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115acf75:;
  /* 115acf75 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115acf79 jne 0x115acf86 */
  if (!C.zf) goto L_115acf86;
  /* 115acf7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115acf7e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 115acf84 jmp 0x115acf93 */
  goto L_115acf93;
L_115acf86:;
  /* 115acf86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115acf89 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115acf8b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115acf8e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115acf91 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_115acf93:;
  /* 115acf93 mov esp, ebp */
  ESP = (EBP);
  /* 115acf95 pop ebp */
  EBP = (pop32());
  /* 115acf96 ret  */
  ESPCHK(0x115acf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfa0 @ 0x115acfa0 (53 bytes, 23 insns) */
void f_115acfa0(void) {
  FTRACE(0x115acfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115acfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 115acfa1 mov ebp, esp */
  EBP = (ESP);
L_115acfa3:;
  /* 115acfa3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115acfa6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115acfa9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115acfac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 115acfaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115acfb1 jle 0x115acfd3 */
  if ((C.zf||C.sf!=C.of)) goto L_115acfd3;
  /* 115acfb3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115acfb6 push edx */
  push32((uint32_t)(EDX));
  /* 115acfb7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115acfba push eax */
  push32((uint32_t)(EAX));
  /* 115acfbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115acfbe push ecx */
  push32((uint32_t)(ECX));
  /* 115acfbf call 0x115acf20 */
  push32(0x115acfc4u); f_115acf20();
  /* 115acfc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115acfc7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115acfca cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115acfcd jne 0x115acfd1 */
  if (!C.zf) goto L_115acfd1;
  /* 115acfcf jmp 0x115acfd3 */
  goto L_115acfd3;
L_115acfd1:;
  /* 115acfd1 jmp 0x115acfa3 */
  goto L_115acfa3;
L_115acfd3:;
  /* 115acfd3 pop ebp */
  EBP = (pop32());
  /* 115acfd4 ret  */
  ESPCHK(0x115acfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfe0 @ 0x115acfe0 (74 bytes, 31 insns) */
void f_115acfe0(void) {
  FTRACE(0x115acfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115acfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 115acfe1 mov ebp, esp */
  EBP = (ESP);
  /* 115acfe3 push ecx */
  push32((uint32_t)(ECX));
L_115acfe4:;
  /* 115acfe4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115acfe7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115acfea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115acfed mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 115acff0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115acff2 jle 0x115ad026 */
  if ((C.zf||C.sf!=C.of)) goto L_115ad026;
  /* 115acff4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115acff7 push edx */
  push32((uint32_t)(EDX));
  /* 115acff8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115acffb push eax */
  push32((uint32_t)(EAX));
  /* 115acffc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115acfff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115ad002 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115ad005 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ad008 push eax */
  push32((uint32_t)(EAX));
  /* 115ad009 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad00c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad00f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 115ad012 call 0x115acf20 */
  push32(0x115ad017u); f_115acf20();
  /* 115ad017 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad01a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115ad01d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad020 jne 0x115ad024 */
  if (!C.zf) goto L_115ad024;
  /* 115ad022 jmp 0x115ad026 */
  goto L_115ad026;
L_115ad024:;
  /* 115ad024 jmp 0x115acfe4 */
  goto L_115acfe4;
L_115ad026:;
  /* 115ad026 mov esp, ebp */
  ESP = (EBP);
  /* 115ad028 pop ebp */
  EBP = (pop32());
  /* 115ad029 ret  */
  ESPCHK(0x115acfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d030 @ 0x115ad030 (26 bytes, 12 insns) */
void f_115ad030(void) {
  FTRACE(0x115ad030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ad030 push ebp */
  push32((uint32_t)(EBP));
  /* 115ad031 mov ebp, esp */
  EBP = (ESP);
  /* 115ad033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad036 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115ad038 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad03b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad03e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115ad040 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad043 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115ad045 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 115ad048 pop ebp */
  EBP = (pop32());
  /* 115ad049 ret  */
  ESPCHK(0x115ad030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d050 @ 0x115ad050 (31 bytes, 14 insns) */
void f_115ad050(void) {
  FTRACE(0x115ad050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ad050 push ebp */
  push32((uint32_t)(EBP));
  /* 115ad051 mov ebp, esp */
  EBP = (ESP);
  /* 115ad053 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad056 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115ad058 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad05b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad05e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115ad060 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad063 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115ad065 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ad068 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 115ad06a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115ad06d pop ebp */
  EBP = (pop32());
  /* 115ad06e ret  */
  ESPCHK(0x115ad050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d070 @ 0x115ad070 (27 bytes, 12 insns) */
void f_115ad070(void) {
  FTRACE(0x115ad070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ad070 push ebp */
  push32((uint32_t)(EBP));
  /* 115ad071 mov ebp, esp */
  EBP = (ESP);
  /* 115ad073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad076 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115ad078 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad07b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad07e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115ad080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad083 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115ad085 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 115ad089 pop ebp */
  EBP = (pop32());
  /* 115ad08a ret  */
  ESPCHK(0x115ad070u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x115ad090 (145 bytes, 42 insns) */
void f_115ad090(void) {
  FTRACE(0x115ad090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ad090 push ebp */
  push32((uint32_t)(EBP));
  /* 115ad091 mov ebp, esp */
  EBP = (ESP);
  /* 115ad093 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad094 call 0x115ad140 */
  push32(0x115ad099u); f_115ad140();
  /* 115ad099 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad09c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115ad09e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115ad0a5 jmp 0x115ad0b0 */
  goto L_115ad0b0;
L_115ad0a7:;
  /* 115ad0a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ad0aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad0ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115ad0b0:;
  /* 115ad0b0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad0b4 jae 0x115ad0da */
  if (!C.cf) goto L_115ad0da;
  /* 115ad0b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ad0b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad0bc cmp ecx, dword ptr [eax*8 + 0x115cffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x115cffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad0c3 jne 0x115ad0d8 */
  if (!C.zf) goto L_115ad0d8;
  /* 115ad0c5 call 0x115ad130 */
  push32(0x115ad0cau); f_115ad130();
  /* 115ad0ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ad0cd mov ecx, dword ptr [edx*8 + 0x115cffbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x115cffbc)));
  /* 115ad0d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115ad0d6 jmp 0x115ad11d */
  goto L_115ad11d;
L_115ad0d8:;
  /* 115ad0d8 jmp 0x115ad0a7 */
  goto L_115ad0a7;
L_115ad0da:;
  /* 115ad0da cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad0de jb 0x115ad0f3 */
  if (C.cf) goto L_115ad0f3;
  /* 115ad0e0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad0e4 ja 0x115ad0f3 */
  if ((!C.cf&&!C.zf)) goto L_115ad0f3;
  /* 115ad0e6 call 0x115ad130 */
  push32(0x115ad0ebu); f_115ad130();
  /* 115ad0eb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 115ad0f1 jmp 0x115ad11d */
  goto L_115ad11d;
L_115ad0f3:;
  /* 115ad0f3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad0fa jb 0x115ad112 */
  if (C.cf) goto L_115ad112;
  /* 115ad0fc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad103 ja 0x115ad112 */
  if ((!C.cf&&!C.zf)) goto L_115ad112;
  /* 115ad105 call 0x115ad130 */
  push32(0x115ad10au); f_115ad130();
  /* 115ad10a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 115ad110 jmp 0x115ad11d */
  goto L_115ad11d;
L_115ad112:;
  /* 115ad112 call 0x115ad130 */
  push32(0x115ad117u); f_115ad130();
  /* 115ad117 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_115ad11d:;
  /* 115ad11d mov esp, ebp */
  ESP = (EBP);
  /* 115ad11f pop ebp */
  EBP = (pop32());
  /* 115ad120 ret  */
  ESPCHK(0x115ad090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d130 @ 0x115ad130 (13 bytes, 6 insns) */
void f_115ad130(void) {
  FTRACE(0x115ad130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ad130 push ebp */
  push32((uint32_t)(EBP));
  /* 115ad131 mov ebp, esp */
  EBP = (ESP);
  /* 115ad133 call 0x115a4ca0 */
  push32(0x115ad138u); f_115a4ca0();
  /* 115ad138 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad13b pop ebp */
  EBP = (pop32());
  /* 115ad13c ret  */
  ESPCHK(0x115ad130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d140 @ 0x115ad140 (13 bytes, 6 insns) */
void f_115ad140(void) {
  FTRACE(0x115ad140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ad140 push ebp */
  push32((uint32_t)(EBP));
  /* 115ad141 mov ebp, esp */
  EBP = (ESP);
  /* 115ad143 call 0x115a4ca0 */
  push32(0x115ad148u); f_115a4ca0();
  /* 115ad148 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad14b pop ebp */
  EBP = (pop32());
  /* 115ad14c ret  */
  ESPCHK(0x115ad140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d150 @ 0x115ad150 (664 bytes, 265 insns) [15 switch table(s)] */
void f_115ad150(void) {
  FTRACE(0x115ad150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ad150 push ebp */
  push32((uint32_t)(EBP));
  /* 115ad151 mov ebp, esp */
  EBP = (ESP);
  /* 115ad153 push edi */
  push32((uint32_t)(EDI));
  /* 115ad154 push esi */
  push32((uint32_t)(ESI));
  /* 115ad155 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 115ad158 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115ad15b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad15e mov eax, ecx */
  EAX = (ECX);
  /* 115ad160 mov edx, ecx */
  EDX = (ECX);
  /* 115ad162 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad164 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad166 jbe 0x115ad170 */
  if ((C.cf||C.zf)) goto L_115ad170;
  /* 115ad168 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad16a jb 0x115ad2e8 */
  if (C.cf) goto L_115ad2e8;
L_115ad170:;
  /* 115ad170 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115ad176 jne 0x115ad18c */
  if (!C.zf) goto L_115ad18c;
  /* 115ad178 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115ad17b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115ad17e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad181 jb 0x115ad1ac */
  if (C.cf) goto L_115ad1ac;
  /* 115ad183 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115ad185 jmp dword ptr [edx*4 + 0x115ad298] */
  switch (EDX) {
    case 0: goto L_115ad2a8;
    case 1: goto L_115ad2b0;
    case 2: goto L_115ad2bc;
    case 3: goto L_115ad2d0;
    default: x86_unimpl("switch@0x115ad185 out of table"); return;
  }
L_115ad18c:;
  /* 115ad18c mov eax, edi */
  EAX = (EDI);
  /* 115ad18e mov edx, 3 */
  EDX = (0x3u);
  /* 115ad193 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ad196 jb 0x115ad1a4 */
  if (C.cf) goto L_115ad1a4;
  /* 115ad198 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 115ad19b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad19d jmp dword ptr [eax*4 + 0x115ad1b0] */
  switch (EAX) {
    case 1: goto L_115ad1c0;
    case 2: goto L_115ad1ec;
    case 3: goto L_115ad210;
    default: x86_unimpl("switch@0x115ad19d out of table"); return;
  }
L_115ad1a4:;
  /* 115ad1a4 jmp dword ptr [ecx*4 + 0x115ad2a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x115ad2a8)))); return;
  /* 115ad1ab nop  */
  /* nop */
L_115ad1ac:;
  /* 115ad1ac jmp dword ptr [ecx*4 + 0x115ad22c] */
  switch (ECX) {
    case 0: goto L_115ad28f;
    case 1: goto L_115ad27c;
    case 2: goto L_115ad274;
    case 3: goto L_115ad26c;
    case 4: goto L_115ad264;
    case 5: goto L_115ad25c;
    case 6: goto L_115ad254;
    case 7: goto L_115ad24c;
    default: x86_unimpl("switch@0x115ad1ac out of table"); return;
  }
  /* 115ad1b3 nop  */
  /* nop */
L_115ad1c0:;
  /* 115ad1c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115ad1c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115ad1c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115ad1c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115ad1c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115ad1cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115ad1cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115ad1d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115ad1d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad1d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad1db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad1de jb 0x115ad1ac */
  if (C.cf) goto L_115ad1ac;
  /* 115ad1e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115ad1e2 jmp dword ptr [edx*4 + 0x115ad298] */
  switch (EDX) {
    case 0: goto L_115ad2a8;
    case 1: goto L_115ad2b0;
    case 2: goto L_115ad2bc;
    case 3: goto L_115ad2d0;
    default: x86_unimpl("switch@0x115ad1e2 out of table"); return;
  }
  /* 115ad1e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115ad1ec:;
  /* 115ad1ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115ad1ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115ad1f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115ad1f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115ad1f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115ad1f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115ad1fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad1fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad201 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad204 jb 0x115ad1ac */
  if (C.cf) goto L_115ad1ac;
  /* 115ad206 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115ad208 jmp dword ptr [edx*4 + 0x115ad298] */
  switch (EDX) {
    case 0: goto L_115ad2a8;
    case 1: goto L_115ad2b0;
    case 2: goto L_115ad2bc;
    case 3: goto L_115ad2d0;
    default: x86_unimpl("switch@0x115ad208 out of table"); return;
  }
  /* 115ad20f nop  */
  /* nop */
L_115ad210:;
  /* 115ad210 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115ad212 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115ad214 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115ad216 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115ad217 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115ad21a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115ad21b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad21e jb 0x115ad1ac */
  if (C.cf) goto L_115ad1ac;
  /* 115ad220 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115ad222 jmp dword ptr [edx*4 + 0x115ad298] */
  switch (EDX) {
    case 0: goto L_115ad2a8;
    case 1: goto L_115ad2b0;
    case 2: goto L_115ad2bc;
    case 3: goto L_115ad2d0;
    default: x86_unimpl("switch@0x115ad222 out of table"); return;
  }
  /* 115ad229 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115ad24c:;
  /* 115ad24c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 115ad250 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_115ad254:;
  /* 115ad254 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 115ad258 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_115ad25c:;
  /* 115ad25c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 115ad260 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_115ad264:;
  /* 115ad264 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 115ad268 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_115ad26c:;
  /* 115ad26c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 115ad270 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_115ad274:;
  /* 115ad274 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 115ad278 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_115ad27c:;
  /* 115ad27c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 115ad280 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 115ad284 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 115ad28b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad28d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115ad28f:;
  /* 115ad28f jmp dword ptr [edx*4 + 0x115ad298] */
  switch (EDX) {
    case 0: goto L_115ad2a8;
    case 1: goto L_115ad2b0;
    case 2: goto L_115ad2bc;
    case 3: goto L_115ad2d0;
    default: x86_unimpl("switch@0x115ad28f out of table"); return;
  }
  /* 115ad296 mov edi, edi */
  EDI = (EDI);
L_115ad2a8:;
  /* 115ad2a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad2ab pop esi */
  ESI = (pop32());
  /* 115ad2ac pop edi */
  EDI = (pop32());
  /* 115ad2ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115ad2ae ret  */
  ESPCHK(0x115ad150u, _esp0);
  ESP += 4; return;
  /* 115ad2af nop  */
  /* nop */
L_115ad2b0:;
  /* 115ad2b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115ad2b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115ad2b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad2b7 pop esi */
  ESI = (pop32());
  /* 115ad2b8 pop edi */
  EDI = (pop32());
  /* 115ad2b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115ad2ba ret  */
  ESPCHK(0x115ad150u, _esp0);
  ESP += 4; return;
  /* 115ad2bb nop  */
  /* nop */
L_115ad2bc:;
  /* 115ad2bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115ad2be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115ad2c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115ad2c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115ad2c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad2c9 pop esi */
  ESI = (pop32());
  /* 115ad2ca pop edi */
  EDI = (pop32());
  /* 115ad2cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115ad2cc ret  */
  ESPCHK(0x115ad150u, _esp0);
  ESP += 4; return;
  /* 115ad2cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115ad2d0:;
  /* 115ad2d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115ad2d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115ad2d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115ad2d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115ad2da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115ad2dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115ad2e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad2e3 pop esi */
  ESI = (pop32());
  /* 115ad2e4 pop edi */
  EDI = (pop32());
  /* 115ad2e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115ad2e6 ret  */
  ESPCHK(0x115ad150u, _esp0);
  ESP += 4; return;
  /* 115ad2e7 nop  */
  /* nop */
L_115ad2e8:;
  /* 115ad2e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 115ad2ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 115ad2f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115ad2f6 jne 0x115ad31c */
  if (!C.zf) goto L_115ad31c;
  /* 115ad2f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115ad2fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115ad2fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad301 jb 0x115ad310 */
  if (C.cf) goto L_115ad310;
  /* 115ad303 std  */
  C.df=1;
  /* 115ad304 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115ad306 cld  */
  C.df=0;
  /* 115ad307 jmp dword ptr [edx*4 + 0x115ad430] */
  switch (EDX) {
    case 0: goto L_115ad440;
    case 1: goto L_115ad448;
    case 2: goto L_115ad458;
    case 3: goto L_115ad46c;
    default: x86_unimpl("switch@0x115ad307 out of table"); return;
  }
  /* 115ad30e mov edi, edi */
  EDI = (EDI);
L_115ad310:;
  /* 115ad310 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115ad312 jmp dword ptr [ecx*4 + 0x115ad3e0] */
  switch (ECX) {
    case 0: goto L_115ad427;
    default: x86_unimpl("switch@0x115ad312 out of table"); return;
  }
  /* 115ad319 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115ad31c:;
  /* 115ad31c mov eax, edi */
  EAX = (EDI);
  /* 115ad31e mov edx, 3 */
  EDX = (0x3u);
  /* 115ad323 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad326 jb 0x115ad334 */
  if (C.cf) goto L_115ad334;
  /* 115ad328 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 115ad32b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ad32d jmp dword ptr [eax*4 + 0x115ad338] */
  switch (EAX) {
    case 1: goto L_115ad348;
    case 2: goto L_115ad368;
    case 3: goto L_115ad390;
    default: x86_unimpl("switch@0x115ad32d out of table"); return;
  }
L_115ad334:;
  /* 115ad334 jmp dword ptr [ecx*4 + 0x115ad430] */
  switch (ECX) {
    case 0: goto L_115ad440;
    case 1: goto L_115ad448;
    case 2: goto L_115ad458;
    case 3: goto L_115ad46c;
    default: x86_unimpl("switch@0x115ad334 out of table"); return;
  }
  /* 115ad33b nop  */
  /* nop */
L_115ad348:;
  /* 115ad348 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115ad34b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115ad34d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115ad350 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 115ad351 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115ad354 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115ad355 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad358 jb 0x115ad310 */
  if (C.cf) goto L_115ad310;
  /* 115ad35a std  */
  C.df=1;
  /* 115ad35b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115ad35d cld  */
  C.df=0;
  /* 115ad35e jmp dword ptr [edx*4 + 0x115ad430] */
  switch (EDX) {
    case 0: goto L_115ad440;
    case 1: goto L_115ad448;
    case 2: goto L_115ad458;
    case 3: goto L_115ad46c;
    default: x86_unimpl("switch@0x115ad35e out of table"); return;
  }
  /* 115ad365 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115ad368:;
  /* 115ad368 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115ad36b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115ad36d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115ad370 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115ad373 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115ad376 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115ad379 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ad37c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ad37f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad382 jb 0x115ad310 */
  if (C.cf) goto L_115ad310;
  /* 115ad384 std  */
  C.df=1;
  /* 115ad385 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115ad387 cld  */
  C.df=0;
  /* 115ad388 jmp dword ptr [edx*4 + 0x115ad430] */
  switch (EDX) {
    case 0: goto L_115ad440;
    case 1: goto L_115ad448;
    case 2: goto L_115ad458;
    case 3: goto L_115ad46c;
    default: x86_unimpl("switch@0x115ad388 out of table"); return;
  }
  /* 115ad38f nop  */
  /* nop */
L_115ad390:;
  /* 115ad390 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115ad393 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 115ad395 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115ad398 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115ad39b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115ad39e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115ad3a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115ad3a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115ad3a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ad3aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ad3ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad3b0 jb 0x115ad310 */
  if (C.cf) goto L_115ad310;
  /* 115ad3b6 std  */
  C.df=1;
  /* 115ad3b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115ad3b9 cld  */
  C.df=0;
  /* 115ad3ba jmp dword ptr [edx*4 + 0x115ad430] */
  switch (EDX) {
    case 0: goto L_115ad440;
    case 1: goto L_115ad448;
    case 2: goto L_115ad458;
    case 3: goto L_115ad46c;
    default: x86_unimpl("switch@0x115ad3ba out of table"); return;
  }
  /* 115ad3c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 115ad3c4 in al, 0xd3 */
  x86_unimpl("in @ 0x115ad3c4");
  /* 115ad3c6 pop edx */
  EDX = (pop32());
  /* 115ad3c7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad3c9 rcr dword ptr [edx + 0x11], cl */
  { uint32_t _v=(r32((uint32_t)(EDX + 0x11)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } w32((uint32_t)(EDX + 0x11), (_v)); C.cf=_cf; }
  /* 115ad3cc hlt  */
  x86_unimpl("hlt @ 0x115ad3cc");
  /* 115ad3cd rcr dword ptr [edx + 0x11], cl */
  { uint32_t _v=(r32((uint32_t)(EDX + 0x11)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } w32((uint32_t)(EDX + 0x11), (_v)); C.cf=_cf; }
  /* 115ad3d0 cld  */
  C.df=0;
  /* 115ad3d1 rcr dword ptr [edx + 0x11], cl */
  { uint32_t _v=(r32((uint32_t)(EDX + 0x11)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } w32((uint32_t)(EDX + 0x11), (_v)); C.cf=_cf; }
  /* 115ad3d4 add al, 0xd4 */
  { uint32_t _a=(AL),_b=(0xd4u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 115ad3d6 pop edx */
  EDX = (pop32());
  /* 115ad3d7 adc dword ptr [esp + edx*8], ecx */
  { uint32_t _a=(r32((uint32_t)(ESP + EDX*8))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EDX*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 115ad3da pop edx */
  EDX = (pop32());
  /* 115ad3db adc dword ptr [esp + edx*8], edx */
  { uint32_t _a=(r32((uint32_t)(ESP + EDX*8))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EDX*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 115ad3de pop edx */
  EDX = (pop32());
  /* 115ad3e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 115ad3e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 115ad3ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 115ad3f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 115ad3f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 115ad3f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 115ad3fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 115ad400 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 115ad404 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 115ad408 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 115ad40c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 115ad410 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 115ad414 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 115ad418 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 115ad41c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 115ad423 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad425 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115ad427:;
  /* 115ad427 jmp dword ptr [edx*4 + 0x115ad430] */
  switch (EDX) {
    case 0: goto L_115ad440;
    case 1: goto L_115ad448;
    case 2: goto L_115ad458;
    case 3: goto L_115ad46c;
    default: x86_unimpl("switch@0x115ad427 out of table"); return;
  }
  /* 115ad42e mov edi, edi */
  EDI = (EDI);
L_115ad440:;
  /* 115ad440 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad443 pop esi */
  ESI = (pop32());
  /* 115ad444 pop edi */
  EDI = (pop32());
  /* 115ad445 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115ad446 ret  */
  ESPCHK(0x115ad150u, _esp0);
  ESP += 4; return;
  /* 115ad447 nop  */
  /* nop */
L_115ad448:;
  /* 115ad448 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115ad44b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115ad44e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad451 pop esi */
  ESI = (pop32());
  /* 115ad452 pop edi */
  EDI = (pop32());
  /* 115ad453 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115ad454 ret  */
  ESPCHK(0x115ad150u, _esp0);
  ESP += 4; return;
  /* 115ad455 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115ad458:;
  /* 115ad458 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115ad45b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115ad45e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115ad461 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115ad464 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad467 pop esi */
  ESI = (pop32());
  /* 115ad468 pop edi */
  EDI = (pop32());
  /* 115ad469 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115ad46a ret  */
  ESPCHK(0x115ad150u, _esp0);
  ESP += 4; return;
  /* 115ad46b nop  */
  /* nop */
L_115ad46c:;
  /* 115ad46c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 115ad46f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 115ad472 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115ad475 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115ad478 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115ad47b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115ad47e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad481 pop esi */
  ESI = (pop32());
  /* 115ad482 pop edi */
  EDI = (pop32());
  /* 115ad483 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115ad484 ret  */
  ESPCHK(0x115ad150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d490 @ 0x115ad490 (421 bytes, 148 insns) */
void f_115ad490(void) {
  FTRACE(0x115ad490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ad490 push ebp */
  push32((uint32_t)(EBP));
  /* 115ad491 mov ebp, esp */
  EBP = (ESP);
  /* 115ad493 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115ad495 push 0x115cd1f0 */
  push32((uint32_t)(0x115cd1f0u));
  /* 115ad49a push 0x115ae368 */
  push32((uint32_t)(0x115ae368u));
  /* 115ad49f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 115ad4a5 push eax */
  push32((uint32_t)(EAX));
  /* 115ad4a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 115ad4ad add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad4b0 push ebx */
  push32((uint32_t)(EBX));
  /* 115ad4b1 push esi */
  push32((uint32_t)(ESI));
  /* 115ad4b2 push edi */
  push32((uint32_t)(EDI));
  /* 115ad4b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115ad4b6 cmp dword ptr [0x115d1814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad4bd jne 0x115ad50e */
  if (!C.zf) goto L_115ad50e;
  /* 115ad4bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 115ad4c2 push eax */
  push32((uint32_t)(EAX));
  /* 115ad4c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115ad4c5 push 0x115cd1ec */
  push32((uint32_t)(0x115cd1ecu));
  /* 115ad4ca push 1 */
  push32((uint32_t)(0x1u));
  /* 115ad4cc call dword ptr [0x115d431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d431c))), 0x115ad4d2u);
  /* 115ad4d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ad4d4 je 0x115ad4e2 */
  if (C.zf) goto L_115ad4e2;
  /* 115ad4d6 mov dword ptr [0x115d1814], 1 */
  w32((uint32_t)(0x115d1814), (0x1u));
  /* 115ad4e0 jmp 0x115ad50e */
  goto L_115ad50e;
L_115ad4e2:;
  /* 115ad4e2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 115ad4e5 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad4e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115ad4e8 push 0x115cd1e8 */
  push32((uint32_t)(0x115cd1e8u));
  /* 115ad4ed push 1 */
  push32((uint32_t)(0x1u));
  /* 115ad4ef push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad4f1 call dword ptr [0x115d432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d432c))), 0x115ad4f7u);
  /* 115ad4f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ad4f9 je 0x115ad507 */
  if (C.zf) goto L_115ad507;
  /* 115ad4fb mov dword ptr [0x115d1814], 2 */
  w32((uint32_t)(0x115d1814), (0x2u));
  /* 115ad505 jmp 0x115ad50e */
  goto L_115ad50e;
L_115ad507:;
  /* 115ad507 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad509 jmp 0x115ad638 */
  goto L_115ad638;
L_115ad50e:;
  /* 115ad50e cmp dword ptr [0x115d1814], 2 */
  { uint32_t _a=(r32((uint32_t)(0x115d1814))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad515 jne 0x115ad545 */
  if (!C.zf) goto L_115ad545;
  /* 115ad517 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad51b jne 0x115ad526 */
  if (!C.zf) goto L_115ad526;
  /* 115ad51d mov edx, dword ptr [0x115d1820] */
  EDX = (r32((uint32_t)(0x115d1820)));
  /* 115ad523 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_115ad526:;
  /* 115ad526 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115ad529 push eax */
  push32((uint32_t)(EAX));
  /* 115ad52a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115ad52d push ecx */
  push32((uint32_t)(ECX));
  /* 115ad52e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ad531 push edx */
  push32((uint32_t)(EDX));
  /* 115ad532 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad535 push eax */
  push32((uint32_t)(EAX));
  /* 115ad536 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115ad539 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad53a call dword ptr [0x115d432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d432c))), 0x115ad540u);
  /* 115ad540 jmp 0x115ad638 */
  goto L_115ad638;
L_115ad545:;
  /* 115ad545 cmp dword ptr [0x115d1814], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d1814))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad54c jne 0x115ad636 */
  if (!C.zf) goto L_115ad636;
  /* 115ad552 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad556 jne 0x115ad561 */
  if (!C.zf) goto L_115ad561;
  /* 115ad558 mov edx, dword ptr [0x115d1830] */
  EDX = (r32((uint32_t)(0x115d1830)));
  /* 115ad55e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_115ad561:;
  /* 115ad561 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad563 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad565 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115ad568 push eax */
  push32((uint32_t)(EAX));
  /* 115ad569 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ad56c push ecx */
  push32((uint32_t)(ECX));
  /* 115ad56d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 115ad570 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 115ad572 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ad574 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 115ad577 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad57a push edx */
  push32((uint32_t)(EDX));
  /* 115ad57b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115ad57e push eax */
  push32((uint32_t)(EAX));
  /* 115ad57f call dword ptr [0x115d4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4324))), 0x115ad585u);
  /* 115ad585 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115ad588 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad58c jne 0x115ad595 */
  if (!C.zf) goto L_115ad595;
  /* 115ad58e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad590 jmp 0x115ad638 */
  goto L_115ad638;
L_115ad595:;
  /* 115ad595 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115ad59c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ad59f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115ad5a1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad5a4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115ad5a6 call 0x115a8400 */
  push32(0x115ad5abu); f_115a8400();
  /* 115ad5ab mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 115ad5ae mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115ad5b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115ad5b4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 115ad5b7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ad5ba shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 115ad5bc push edx */
  push32((uint32_t)(EDX));
  /* 115ad5bd push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad5bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ad5c2 push eax */
  push32((uint32_t)(EAX));
  /* 115ad5c3 call 0x115a8fd0 */
  push32(0x115ad5c8u); f_115a8fd0();
  /* 115ad5c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad5cb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 115ad5d2 jmp 0x115ad5eb */
  goto L_115ad5eb;
  /* 115ad5d4 mov eax, 1 */
  EAX = (0x1u);
  /* 115ad5d9 ret  */
  ESPCHK(0x115ad490u, _esp0);
  ESP += 4; return;
  /* 115ad5da mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115ad5dd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 115ad5e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115ad5eb:;
  /* 115ad5eb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad5ef jne 0x115ad5f5 */
  if (!C.zf) goto L_115ad5f5;
  /* 115ad5f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad5f3 jmp 0x115ad638 */
  goto L_115ad638;
L_115ad5f5:;
  /* 115ad5f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ad5f8 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad5f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ad5fc push edx */
  push32((uint32_t)(EDX));
  /* 115ad5fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115ad600 push eax */
  push32((uint32_t)(EAX));
  /* 115ad601 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ad604 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad605 push 1 */
  push32((uint32_t)(0x1u));
  /* 115ad607 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115ad60a push edx */
  push32((uint32_t)(EDX));
  /* 115ad60b call dword ptr [0x115d4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4324))), 0x115ad611u);
  /* 115ad611 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 115ad614 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad618 jne 0x115ad61e */
  if (!C.zf) goto L_115ad61e;
  /* 115ad61a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad61c jmp 0x115ad638 */
  goto L_115ad638;
L_115ad61e:;
  /* 115ad61e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115ad621 push eax */
  push32((uint32_t)(EAX));
  /* 115ad622 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115ad625 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad626 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ad629 push edx */
  push32((uint32_t)(EDX));
  /* 115ad62a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad62d push eax */
  push32((uint32_t)(EAX));
  /* 115ad62e call dword ptr [0x115d431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d431c))), 0x115ad634u);
  /* 115ad634 jmp 0x115ad638 */
  goto L_115ad638;
L_115ad636:;
  /* 115ad636 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115ad638:;
  /* 115ad638 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 115ad63b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115ad63e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 115ad645 pop edi */
  EDI = (pop32());
  /* 115ad646 pop esi */
  ESI = (pop32());
  /* 115ad647 pop ebx */
  EBX = (pop32());
  /* 115ad648 mov esp, ebp */
  ESP = (EBP);
  /* 115ad64a pop ebp */
  EBP = (pop32());
  /* 115ad64b ret  */
  ESPCHK(0x115ad490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d650 @ 0x115ad650 (727 bytes, 263 insns) */
void f_115ad650(void) {
  FTRACE(0x115ad650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ad650 push ebp */
  push32((uint32_t)(EBP));
  /* 115ad651 mov ebp, esp */
  EBP = (ESP);
  /* 115ad653 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115ad655 push 0x115cd200 */
  push32((uint32_t)(0x115cd200u));
  /* 115ad65a push 0x115ae368 */
  push32((uint32_t)(0x115ae368u));
  /* 115ad65f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 115ad665 push eax */
  push32((uint32_t)(EAX));
  /* 115ad666 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 115ad66d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad670 push ebx */
  push32((uint32_t)(EBX));
  /* 115ad671 push esi */
  push32((uint32_t)(ESI));
  /* 115ad672 push edi */
  push32((uint32_t)(EDI));
  /* 115ad673 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115ad676 cmp dword ptr [0x115d1838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad67d jne 0x115ad6d6 */
  if (!C.zf) goto L_115ad6d6;
  /* 115ad67f push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad681 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad683 push 1 */
  push32((uint32_t)(0x1u));
  /* 115ad685 push 0x115cd1ec */
  push32((uint32_t)(0x115cd1ecu));
  /* 115ad68a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 115ad68f push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad691 call dword ptr [0x115d4320] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4320))), 0x115ad697u);
  /* 115ad697 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ad699 je 0x115ad6a7 */
  if (C.zf) goto L_115ad6a7;
  /* 115ad69b mov dword ptr [0x115d1838], 1 */
  w32((uint32_t)(0x115d1838), (0x1u));
  /* 115ad6a5 jmp 0x115ad6d6 */
  goto L_115ad6d6;
L_115ad6a7:;
  /* 115ad6a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad6a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad6ab push 1 */
  push32((uint32_t)(0x1u));
  /* 115ad6ad push 0x115cd1e8 */
  push32((uint32_t)(0x115cd1e8u));
  /* 115ad6b2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 115ad6b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad6b9 call dword ptr [0x115d4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4318))), 0x115ad6bfu);
  /* 115ad6bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ad6c1 je 0x115ad6cf */
  if (C.zf) goto L_115ad6cf;
  /* 115ad6c3 mov dword ptr [0x115d1838], 2 */
  w32((uint32_t)(0x115d1838), (0x2u));
  /* 115ad6cd jmp 0x115ad6d6 */
  goto L_115ad6d6;
L_115ad6cf:;
  /* 115ad6cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad6d1 jmp 0x115ad941 */
  goto L_115ad941;
L_115ad6d6:;
  /* 115ad6d6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad6da jle 0x115ad6ef */
  if ((C.zf||C.sf!=C.of)) goto L_115ad6ef;
  /* 115ad6dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115ad6df push eax */
  push32((uint32_t)(EAX));
  /* 115ad6e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115ad6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad6e4 call 0x115ad960 */
  push32(0x115ad6e9u); f_115ad960();
  /* 115ad6e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad6ec mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_115ad6ef:;
  /* 115ad6ef cmp dword ptr [0x115d1838], 2 */
  { uint32_t _a=(r32((uint32_t)(0x115d1838))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad6f6 jne 0x115ad71b */
  if (!C.zf) goto L_115ad71b;
  /* 115ad6f8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115ad6fb push edx */
  push32((uint32_t)(EDX));
  /* 115ad6fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115ad6ff push eax */
  push32((uint32_t)(EAX));
  /* 115ad700 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115ad703 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad704 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115ad707 push edx */
  push32((uint32_t)(EDX));
  /* 115ad708 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ad70b push eax */
  push32((uint32_t)(EAX));
  /* 115ad70c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad70f push ecx */
  push32((uint32_t)(ECX));
  /* 115ad710 call dword ptr [0x115d4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4318))), 0x115ad716u);
  /* 115ad716 jmp 0x115ad941 */
  goto L_115ad941;
L_115ad71b:;
  /* 115ad71b cmp dword ptr [0x115d1838], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d1838))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad722 jne 0x115ad93f */
  if (!C.zf) goto L_115ad93f;
  /* 115ad728 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad72c jne 0x115ad737 */
  if (!C.zf) goto L_115ad737;
  /* 115ad72e mov edx, dword ptr [0x115d1830] */
  EDX = (r32((uint32_t)(0x115d1830)));
  /* 115ad734 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_115ad737:;
  /* 115ad737 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad739 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad73b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115ad73e push eax */
  push32((uint32_t)(EAX));
  /* 115ad73f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115ad742 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad743 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 115ad746 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 115ad748 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ad74a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 115ad74d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad750 push edx */
  push32((uint32_t)(EDX));
  /* 115ad751 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 115ad754 push eax */
  push32((uint32_t)(EAX));
  /* 115ad755 call dword ptr [0x115d4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4324))), 0x115ad75bu);
  /* 115ad75b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 115ad75e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad762 jne 0x115ad76b */
  if (!C.zf) goto L_115ad76b;
  /* 115ad764 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad766 jmp 0x115ad941 */
  goto L_115ad941;
L_115ad76b:;
  /* 115ad76b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115ad772 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115ad775 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115ad777 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad77a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115ad77c call 0x115a8400 */
  push32(0x115ad781u); f_115a8400();
  /* 115ad781 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 115ad784 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115ad787 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115ad78a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 115ad78d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 115ad794 jmp 0x115ad7ad */
  goto L_115ad7ad;
  /* 115ad796 mov eax, 1 */
  EAX = (0x1u);
  /* 115ad79b ret  */
  ESPCHK(0x115ad650u, _esp0);
  ESP += 4; return;
  /* 115ad79c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115ad79f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 115ad7a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115ad7ad:;
  /* 115ad7ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad7b1 jne 0x115ad7ba */
  if (!C.zf) goto L_115ad7ba;
  /* 115ad7b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad7b5 jmp 0x115ad941 */
  goto L_115ad941;
L_115ad7ba:;
  /* 115ad7ba mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115ad7bd push edx */
  push32((uint32_t)(EDX));
  /* 115ad7be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ad7c1 push eax */
  push32((uint32_t)(EAX));
  /* 115ad7c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115ad7c5 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad7c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115ad7c9 push edx */
  push32((uint32_t)(EDX));
  /* 115ad7ca push 1 */
  push32((uint32_t)(0x1u));
  /* 115ad7cc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 115ad7cf push eax */
  push32((uint32_t)(EAX));
  /* 115ad7d0 call dword ptr [0x115d4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4324))), 0x115ad7d6u);
  /* 115ad7d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ad7d8 jne 0x115ad7e1 */
  if (!C.zf) goto L_115ad7e1;
  /* 115ad7da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad7dc jmp 0x115ad941 */
  goto L_115ad941;
L_115ad7e1:;
  /* 115ad7e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad7e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad7e5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115ad7e8 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad7e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ad7ec push edx */
  push32((uint32_t)(EDX));
  /* 115ad7ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ad7f0 push eax */
  push32((uint32_t)(EAX));
  /* 115ad7f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad7f4 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad7f5 call dword ptr [0x115d4320] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4320))), 0x115ad7fbu);
  /* 115ad7fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 115ad7fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad802 jne 0x115ad80b */
  if (!C.zf) goto L_115ad80b;
  /* 115ad804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad806 jmp 0x115ad941 */
  goto L_115ad941;
L_115ad80b:;
  /* 115ad80b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ad80e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 115ad814 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ad816 je 0x115ad85b */
  if (C.zf) goto L_115ad85b;
  /* 115ad818 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad81c je 0x115ad856 */
  if (C.zf) goto L_115ad856;
  /* 115ad81e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115ad821 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad824 jle 0x115ad82d */
  if ((C.zf||C.sf!=C.of)) goto L_115ad82d;
  /* 115ad826 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad828 jmp 0x115ad941 */
  goto L_115ad941;
L_115ad82d:;
  /* 115ad82d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115ad830 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad831 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115ad834 push edx */
  push32((uint32_t)(EDX));
  /* 115ad835 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115ad838 push eax */
  push32((uint32_t)(EAX));
  /* 115ad839 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ad83c push ecx */
  push32((uint32_t)(ECX));
  /* 115ad83d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ad840 push edx */
  push32((uint32_t)(EDX));
  /* 115ad841 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad844 push eax */
  push32((uint32_t)(EAX));
  /* 115ad845 call dword ptr [0x115d4320] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4320))), 0x115ad84bu);
  /* 115ad84b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ad84d jne 0x115ad856 */
  if (!C.zf) goto L_115ad856;
  /* 115ad84f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad851 jmp 0x115ad941 */
  goto L_115ad941;
L_115ad856:;
  /* 115ad856 jmp 0x115ad93a */
  goto L_115ad93a;
L_115ad85b:;
  /* 115ad85b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115ad85e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 115ad861 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115ad868 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115ad86b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115ad86d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad870 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 115ad872 call 0x115a8400 */
  push32(0x115ad877u); f_115a8400();
  /* 115ad877 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 115ad87a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115ad87d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 115ad880 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 115ad883 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 115ad88a jmp 0x115ad8a3 */
  goto L_115ad8a3;
  /* 115ad88c mov eax, 1 */
  EAX = (0x1u);
  /* 115ad891 ret  */
  ESPCHK(0x115ad650u, _esp0);
  ESP += 4; return;
  /* 115ad892 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115ad895 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 115ad89c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115ad8a3:;
  /* 115ad8a3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad8a7 jne 0x115ad8b0 */
  if (!C.zf) goto L_115ad8b0;
  /* 115ad8a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad8ab jmp 0x115ad941 */
  goto L_115ad941;
L_115ad8b0:;
  /* 115ad8b0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115ad8b3 push eax */
  push32((uint32_t)(EAX));
  /* 115ad8b4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ad8b7 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad8b8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115ad8bb push edx */
  push32((uint32_t)(EDX));
  /* 115ad8bc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115ad8bf push eax */
  push32((uint32_t)(EAX));
  /* 115ad8c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ad8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad8c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad8c7 push edx */
  push32((uint32_t)(EDX));
  /* 115ad8c8 call dword ptr [0x115d4320] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4320))), 0x115ad8ceu);
  /* 115ad8ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ad8d0 jne 0x115ad8d6 */
  if (!C.zf) goto L_115ad8d6;
  /* 115ad8d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad8d4 jmp 0x115ad941 */
  goto L_115ad941;
L_115ad8d6:;
  /* 115ad8d6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad8da jne 0x115ad90a */
  if (!C.zf) goto L_115ad90a;
  /* 115ad8dc push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad8de push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad8e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad8e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad8e4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115ad8e7 push eax */
  push32((uint32_t)(EAX));
  /* 115ad8e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ad8eb push ecx */
  push32((uint32_t)(ECX));
  /* 115ad8ec push 0x220 */
  push32((uint32_t)(0x220u));
  /* 115ad8f1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 115ad8f4 push edx */
  push32((uint32_t)(EDX));
  /* 115ad8f5 call dword ptr [0x115d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4370))), 0x115ad8fbu);
  /* 115ad8fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 115ad8fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad902 jne 0x115ad908 */
  if (!C.zf) goto L_115ad908;
  /* 115ad904 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad906 jmp 0x115ad941 */
  goto L_115ad941;
L_115ad908:;
  /* 115ad908 jmp 0x115ad93a */
  goto L_115ad93a;
L_115ad90a:;
  /* 115ad90a push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad90c push 0 */
  push32((uint32_t)(0x0u));
  /* 115ad90e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115ad911 push eax */
  push32((uint32_t)(EAX));
  /* 115ad912 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115ad915 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad916 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115ad919 push edx */
  push32((uint32_t)(EDX));
  /* 115ad91a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115ad91d push eax */
  push32((uint32_t)(EAX));
  /* 115ad91e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 115ad923 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 115ad926 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad927 call dword ptr [0x115d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4370))), 0x115ad92du);
  /* 115ad92d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 115ad930 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad934 jne 0x115ad93a */
  if (!C.zf) goto L_115ad93a;
  /* 115ad936 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ad938 jmp 0x115ad941 */
  goto L_115ad941;
L_115ad93a:;
  /* 115ad93a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115ad93d jmp 0x115ad941 */
  goto L_115ad941;
L_115ad93f:;
  /* 115ad93f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115ad941:;
  /* 115ad941 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 115ad944 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115ad947 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 115ad94e pop edi */
  EDI = (pop32());
  /* 115ad94f pop esi */
  ESI = (pop32());
  /* 115ad950 pop ebx */
  EBX = (pop32());
  /* 115ad951 mov esp, ebp */
  ESP = (EBP);
  /* 115ad953 pop ebp */
  EBP = (pop32());
  /* 115ad954 ret  */
  ESPCHK(0x115ad650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d960 @ 0x115ad960 (80 bytes, 32 insns) */
void f_115ad960(void) {
  FTRACE(0x115ad960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ad960 push ebp */
  push32((uint32_t)(EBP));
  /* 115ad961 mov ebp, esp */
  EBP = (ESP);
  /* 115ad963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ad966 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ad969 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115ad96c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad96f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115ad972:;
  /* 115ad972 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ad975 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ad978 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ad97b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115ad97e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ad980 je 0x115ad997 */
  if (C.zf) goto L_115ad997;
  /* 115ad982 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ad985 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115ad988 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ad98a je 0x115ad997 */
  if (C.zf) goto L_115ad997;
  /* 115ad98c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ad98f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ad992 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115ad995 jmp 0x115ad972 */
  goto L_115ad972;
L_115ad997:;
  /* 115ad997 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ad99a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115ad99d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ad99f jne 0x115ad9a9 */
  if (!C.zf) goto L_115ad9a9;
  /* 115ad9a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ad9a4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ad9a7 jmp 0x115ad9ac */
  goto L_115ad9ac;
L_115ad9a9:;
  /* 115ad9a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_115ad9ac:;
  /* 115ad9ac mov esp, ebp */
  ESP = (EBP);
  /* 115ad9ae pop ebp */
  EBP = (pop32());
  /* 115ad9af ret  */
  ESPCHK(0x115ad960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9b0 @ 0x115ad9b0 (130 bytes, 43 insns) */
void f_115ad9b0(void) {
  FTRACE(0x115ad9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ad9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115ad9b1 mov ebp, esp */
  EBP = (ESP);
  /* 115ad9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 115ad9b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad9b7 cmp eax, dword ptr [0x115d313c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d313c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ad9bd jae 0x115ad9e1 */
  if (!C.cf) goto L_115ad9e1;
  /* 115ad9bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad9c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115ad9c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad9c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 115ad9cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ad9ce mov eax, dword ptr [ecx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x115d3000)));
  /* 115ad9d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 115ad9da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115ad9dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115ad9df jne 0x115ad9fc */
  if (!C.zf) goto L_115ad9fc;
L_115ad9e1:;
  /* 115ad9e1 call 0x115ad130 */
  push32(0x115ad9e6u); f_115ad130();
  /* 115ad9e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 115ad9ec call 0x115ad140 */
  push32(0x115ad9f1u); f_115ad140();
  /* 115ad9f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115ad9f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115ad9fa jmp 0x115ada2e */
  goto L_115ada2e;
L_115ad9fc:;
  /* 115ad9fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ad9ff push edx */
  push32((uint32_t)(EDX));
  /* 115ada00 call 0x115ae950 */
  push32(0x115ada05u); f_115ae950();
  /* 115ada05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ada08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115ada0b push eax */
  push32((uint32_t)(EAX));
  /* 115ada0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ada0f push ecx */
  push32((uint32_t)(ECX));
  /* 115ada10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ada13 push edx */
  push32((uint32_t)(EDX));
  /* 115ada14 call 0x115ada40 */
  push32(0x115ada19u); f_115ada40();
  /* 115ada19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ada1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115ada1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ada22 push eax */
  push32((uint32_t)(EAX));
  /* 115ada23 call 0x115ae9e0 */
  push32(0x115ada28u); f_115ae9e0();
  /* 115ada28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ada2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115ada2e:;
  /* 115ada2e mov esp, ebp */
  ESP = (EBP);
  /* 115ada30 pop ebp */
  EBP = (pop32());
  /* 115ada31 ret  */
  ESPCHK(0x115ad9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da40 @ 0x115ada40 (178 bytes, 56 insns) */
void f_115ada40(void) {
  FTRACE(0x115ada40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ada40 push ebp */
  push32((uint32_t)(EBP));
  /* 115ada41 mov ebp, esp */
  EBP = (ESP);
  /* 115ada43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ada46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ada49 push eax */
  push32((uint32_t)(EAX));
  /* 115ada4a call 0x115ae7d0 */
  push32(0x115ada4fu); f_115ae7d0();
  /* 115ada4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ada52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115ada55 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ada59 jne 0x115ada6e */
  if (!C.zf) goto L_115ada6e;
  /* 115ada5b call 0x115ad130 */
  push32(0x115ada60u); f_115ad130();
  /* 115ada60 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 115ada66 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115ada69 jmp 0x115adaee */
  goto L_115adaee;
L_115ada6e:;
  /* 115ada6e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115ada71 push ecx */
  push32((uint32_t)(ECX));
  /* 115ada72 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ada74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ada77 push edx */
  push32((uint32_t)(EDX));
  /* 115ada78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ada7b push eax */
  push32((uint32_t)(EAX));
  /* 115ada7c call dword ptr [0x115d4310] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4310))), 0x115ada82u);
  /* 115ada82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115ada85 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ada89 jne 0x115ada96 */
  if (!C.zf) goto L_115ada96;
  /* 115ada8b call dword ptr [0x115d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43d8))), 0x115ada91u);
  /* 115ada91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115ada94 jmp 0x115ada9d */
  goto L_115ada9d;
L_115ada96:;
  /* 115ada96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115ada9d:;
  /* 115ada9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115adaa1 je 0x115adab4 */
  if (C.zf) goto L_115adab4;
  /* 115adaa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adaa6 push ecx */
  push32((uint32_t)(ECX));
  /* 115adaa7 call 0x115ad090 */
  push32(0x115adaacu); f_115ad090();
  /* 115adaac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115adaaf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115adab2 jmp 0x115adaee */
  goto L_115adaee;
L_115adab4:;
  /* 115adab4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adab7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 115adaba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adabd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 115adac0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115adac3 mov ecx, dword ptr [edx*4 + 0x115d3000] */
  ECX = (r32((uint32_t)(EDX*4 + 0x115d3000)));
  /* 115adaca mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 115adace and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 115adad1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adad4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115adad7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adada and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 115adadd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115adae0 mov eax, dword ptr [eax*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(EAX*4 + 0x115d3000)));
  /* 115adae7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 115adaeb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_115adaee:;
  /* 115adaee mov esp, ebp */
  ESP = (EBP);
  /* 115adaf0 pop ebp */
  EBP = (pop32());
  /* 115adaf1 ret  */
  ESPCHK(0x115ada40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db00 @ 0x115adb00 (130 bytes, 43 insns) */
void f_115adb00(void) {
  FTRACE(0x115adb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115adb00 push ebp */
  push32((uint32_t)(EBP));
  /* 115adb01 mov ebp, esp */
  EBP = (ESP);
  /* 115adb03 push ecx */
  push32((uint32_t)(ECX));
  /* 115adb04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adb07 cmp eax, dword ptr [0x115d313c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d313c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115adb0d jae 0x115adb31 */
  if (!C.cf) goto L_115adb31;
  /* 115adb0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adb12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115adb15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adb18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 115adb1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115adb1e mov eax, dword ptr [ecx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x115d3000)));
  /* 115adb25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 115adb2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115adb2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115adb2f jne 0x115adb4c */
  if (!C.zf) goto L_115adb4c;
L_115adb31:;
  /* 115adb31 call 0x115ad130 */
  push32(0x115adb36u); f_115ad130();
  /* 115adb36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 115adb3c call 0x115ad140 */
  push32(0x115adb41u); f_115ad140();
  /* 115adb41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115adb47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115adb4a jmp 0x115adb7e */
  goto L_115adb7e;
L_115adb4c:;
  /* 115adb4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adb4f push edx */
  push32((uint32_t)(EDX));
  /* 115adb50 call 0x115ae950 */
  push32(0x115adb55u); f_115ae950();
  /* 115adb55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115adb58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115adb5b push eax */
  push32((uint32_t)(EAX));
  /* 115adb5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115adb5f push ecx */
  push32((uint32_t)(ECX));
  /* 115adb60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adb63 push edx */
  push32((uint32_t)(EDX));
  /* 115adb64 call 0x115adb90 */
  push32(0x115adb69u); f_115adb90();
  /* 115adb69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115adb6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115adb6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adb72 push eax */
  push32((uint32_t)(EAX));
  /* 115adb73 call 0x115ae9e0 */
  push32(0x115adb78u); f_115ae9e0();
  /* 115adb78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115adb7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115adb7e:;
  /* 115adb7e mov esp, ebp */
  ESP = (EBP);
  /* 115adb80 pop ebp */
  EBP = (pop32());
  /* 115adb81 ret  */
  ESPCHK(0x115adb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db90 @ 0x115adb90 (627 bytes, 182 insns) */
void f_115adb90(void) {
  FTRACE(0x115adb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115adb90 push ebp */
  push32((uint32_t)(EBP));
  /* 115adb91 mov ebp, esp */
  EBP = (ESP);
  /* 115adb93 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115adb99 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115adba0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115adba3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 115adba9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115adbad jne 0x115adbb6 */
  if (!C.zf) goto L_115adbb6;
  /* 115adbaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115adbb1 jmp 0x115addff */
  goto L_115addff;
L_115adbb6:;
  /* 115adbb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adbb9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115adbbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adbbf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 115adbc2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115adbc5 mov eax, dword ptr [ecx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x115d3000)));
  /* 115adbcc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 115adbd1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 115adbd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115adbd6 je 0x115adbe8 */
  if (C.zf) goto L_115adbe8;
  /* 115adbd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 115adbda push 0 */
  push32((uint32_t)(0x0u));
  /* 115adbdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adbdf push edx */
  push32((uint32_t)(EDX));
  /* 115adbe0 call 0x115ada40 */
  push32(0x115adbe5u); f_115ada40();
  /* 115adbe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115adbe8:;
  /* 115adbe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adbeb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115adbee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adbf1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 115adbf4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115adbf7 mov edx, dword ptr [eax*4 + 0x115d3000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x115d3000)));
  /* 115adbfe movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 115adc03 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 115adc08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115adc0a je 0x115add1c */
  if (C.zf) goto L_115add1c;
  /* 115adc10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115adc13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115adc16 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_115adc1d:;
  /* 115adc1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adc20 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115adc23 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115adc26 jae 0x115add1a */
  if (!C.cf) goto L_115add1a;
  /* 115adc2c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 115adc32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115adc35:;
  /* 115adc35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115adc38 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 115adc3e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115adc40 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115adc46 jge 0x115adca7 */
  if ((C.sf==C.of)) goto L_115adca7;
  /* 115adc48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adc4b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115adc4e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115adc51 jae 0x115adca7 */
  if (!C.cf) goto L_115adca7;
  /* 115adc53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adc56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115adc58 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 115adc5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adc61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115adc64 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115adc67 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 115adc6e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115adc71 jne 0x115adc91 */
  if (!C.zf) goto L_115adc91;
  /* 115adc73 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 115adc79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115adc7c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 115adc82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115adc85 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 115adc88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115adc8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115adc8e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_115adc91:;
  /* 115adc91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115adc94 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 115adc9a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 115adc9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115adc9f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115adca2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115adca5 jmp 0x115adc35 */
  goto L_115adc35;
L_115adca7:;
  /* 115adca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115adca9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 115adcaf push edx */
  push32((uint32_t)(EDX));
  /* 115adcb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115adcb3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 115adcb9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115adcbb push eax */
  push32((uint32_t)(EAX));
  /* 115adcbc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 115adcc2 push edx */
  push32((uint32_t)(EDX));
  /* 115adcc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adcc6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115adcc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adccc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 115adccf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115adcd2 mov edx, dword ptr [eax*4 + 0x115d3000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x115d3000)));
  /* 115adcd9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 115adcdc push eax */
  push32((uint32_t)(EAX));
  /* 115adcdd call dword ptr [0x115d4398] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4398))), 0x115adce3u);
  /* 115adce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115adce5 je 0x115add0a */
  if (C.zf) goto L_115add0a;
  /* 115adce7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115adcea add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115adcf0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115adcf3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115adcf6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 115adcfc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115adcfe cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115add04 jge 0x115add08 */
  if ((C.sf==C.of)) goto L_115add08;
  /* 115add06 jmp 0x115add1a */
  goto L_115add1a;
L_115add08:;
  /* 115add08 jmp 0x115add15 */
  goto L_115add15;
L_115add0a:;
  /* 115add0a call dword ptr [0x115d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43d8))), 0x115add10u);
  /* 115add10 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115add13 jmp 0x115add1a */
  goto L_115add1a;
L_115add15:;
  /* 115add15 jmp 0x115adc1d */
  goto L_115adc1d;
L_115add1a:;
  /* 115add1a jmp 0x115add6c */
  goto L_115add6c;
L_115add1c:;
  /* 115add1c push 0 */
  push32((uint32_t)(0x0u));
  /* 115add1e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 115add24 push ecx */
  push32((uint32_t)(ECX));
  /* 115add25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115add28 push edx */
  push32((uint32_t)(EDX));
  /* 115add29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115add2c push eax */
  push32((uint32_t)(EAX));
  /* 115add2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115add30 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115add33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115add36 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 115add39 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115add3c mov eax, dword ptr [ecx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x115d3000)));
  /* 115add43 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 115add46 push ecx */
  push32((uint32_t)(ECX));
  /* 115add47 call dword ptr [0x115d4398] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4398))), 0x115add4du);
  /* 115add4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115add4f je 0x115add63 */
  if (C.zf) goto L_115add63;
  /* 115add51 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115add58 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 115add5e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 115add61 jmp 0x115add6c */
  goto L_115add6c;
L_115add63:;
  /* 115add63 call dword ptr [0x115d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43d8))), 0x115add69u);
  /* 115add69 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_115add6c:;
  /* 115add6c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115add70 jne 0x115addf6 */
  if (!C.zf) goto L_115addf6;
  /* 115add76 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115add7a je 0x115addaa */
  if (C.zf) goto L_115addaa;
  /* 115add7c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115add80 jne 0x115add99 */
  if (!C.zf) goto L_115add99;
  /* 115add82 call 0x115ad130 */
  push32(0x115add87u); f_115ad130();
  /* 115add87 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 115add8d call 0x115ad140 */
  push32(0x115add92u); f_115ad140();
  /* 115add92 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115add95 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115add97 jmp 0x115adda5 */
  goto L_115adda5;
L_115add99:;
  /* 115add99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115add9c push edx */
  push32((uint32_t)(EDX));
  /* 115add9d call 0x115ad090 */
  push32(0x115adda2u); f_115ad090();
  /* 115adda2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115adda5:;
  /* 115adda5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115adda8 jmp 0x115addff */
  goto L_115addff;
L_115addaa:;
  /* 115addaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115addad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115addb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115addb3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 115addb6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115addb9 mov edx, dword ptr [eax*4 + 0x115d3000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x115d3000)));
  /* 115addc0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 115addc5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 115addc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115addca je 0x115adddb */
  if (C.zf) goto L_115adddb;
  /* 115addcc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115addcf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115addd2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115addd5 jne 0x115adddb */
  if (!C.zf) goto L_115adddb;
  /* 115addd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115addd9 jmp 0x115addff */
  goto L_115addff;
L_115adddb:;
  /* 115adddb call 0x115ad130 */
  push32(0x115adde0u); f_115ad130();
  /* 115adde0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 115adde6 call 0x115ad140 */
  push32(0x115addebu); f_115ad140();
  /* 115addeb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115addf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115addf4 jmp 0x115addff */
  goto L_115addff;
L_115addf6:;
  /* 115addf6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115addf9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_115addff:;
  /* 115addff mov esp, ebp */
  ESP = (EBP);
  /* 115ade01 pop ebp */
  EBP = (pop32());
  /* 115ade02 ret  */
  ESPCHK(0x115adb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de10 @ 0x115ade10 (199 bytes, 68 insns) */
void f_115ade10(void) {
  FTRACE(0x115ade10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ade10 push ebp */
  push32((uint32_t)(EBP));
  /* 115ade11 mov ebp, esp */
  EBP = (ESP);
  /* 115ade13 push ecx */
  push32((uint32_t)(ECX));
  /* 115ade14 push ebx */
  push32((uint32_t)(EBX));
  /* 115ade15 push esi */
  push32((uint32_t)(ESI));
  /* 115ade16 push edi */
  push32((uint32_t)(EDI));
L_115ade17:;
  /* 115ade17 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ade1b jne 0x115ade3b */
  if (!C.zf) goto L_115ade3b;
  /* 115ade1d push 0x115cd14c */
  push32((uint32_t)(0x115cd14cu));
  /* 115ade22 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ade24 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 115ade26 push 0x115cd218 */
  push32((uint32_t)(0x115cd218u));
  /* 115ade2b push 2 */
  push32((uint32_t)(0x2u));
  /* 115ade2d call 0x115a4320 */
  push32(0x115ade32u); f_115a4320();
  /* 115ade32 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ade35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ade38 jne 0x115ade3b */
  if (!C.zf) goto L_115ade3b;
  /* 115ade3a int3  */
  x86_unimpl("int3 @ 0x115ade3a");
L_115ade3b:;
  /* 115ade3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ade3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ade3f jne 0x115ade17 */
  if (!C.zf) goto L_115ade17;
  /* 115ade41 mov ecx, dword ptr [0x115d183c] */
  ECX = (r32((uint32_t)(0x115d183c)));
  /* 115ade47 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ade4a mov dword ptr [0x115d183c], ecx */
  w32((uint32_t)(0x115d183c), (ECX));
  /* 115ade50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ade53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115ade56 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 115ade58 push 0x115cd218 */
  push32((uint32_t)(0x115cd218u));
  /* 115ade5d push 2 */
  push32((uint32_t)(0x2u));
  /* 115ade5f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 115ade64 call 0x115a5260 */
  push32(0x115ade69u); f_115a5260();
  /* 115ade69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ade6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ade6f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 115ade72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ade75 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ade79 je 0x115ade96 */
  if (C.zf) goto L_115ade96;
  /* 115ade7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ade7e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115ade81 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 115ade84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ade87 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 115ade8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ade8d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 115ade94 jmp 0x115adebb */
  goto L_115adebb;
L_115ade96:;
  /* 115ade96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ade99 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115ade9c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 115ade9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adea2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 115adea5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adea8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115adeab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adeae mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 115adeb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adeb4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_115adebb:;
  /* 115adebb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adebe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adec1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115adec4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115adec6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adec9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 115aded0 pop edi */
  EDI = (pop32());
  /* 115aded1 pop esi */
  ESI = (pop32());
  /* 115aded2 pop ebx */
  EBX = (pop32());
  /* 115aded3 mov esp, ebp */
  ESP = (EBP);
  /* 115aded5 pop ebp */
  EBP = (pop32());
  /* 115aded6 ret  */
  ESPCHK(0x115ade10u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x115adee0 (50 bytes, 17 insns) */
void f_115adee0(void) {
  FTRACE(0x115adee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115adee0 push ebp */
  push32((uint32_t)(EBP));
  /* 115adee1 mov ebp, esp */
  EBP = (ESP);
  /* 115adee3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adee6 cmp eax, dword ptr [0x115d313c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d313c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115adeec jb 0x115adef2 */
  if (C.cf) goto L_115adef2;
  /* 115adeee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115adef0 jmp 0x115adf10 */
  goto L_115adf10;
L_115adef2:;
  /* 115adef2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adef5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115adef8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115adefb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 115adefe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115adf01 mov eax, dword ptr [ecx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x115d3000)));
  /* 115adf08 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 115adf0d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_115adf10:;
  /* 115adf10 pop ebp */
  EBP = (pop32());
  /* 115adf11 ret  */
  ESPCHK(0x115adee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df20 @ 0x115adf20 (300 bytes, 80 insns) */
void f_115adf20(void) {
  FTRACE(0x115adf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115adf20 push ebp */
  push32((uint32_t)(EBP));
  /* 115adf21 mov ebp, esp */
  EBP = (ESP);
  /* 115adf23 push ecx */
  push32((uint32_t)(ECX));
  /* 115adf24 cmp dword ptr [0x115d2d00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d2d00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115adf2b jne 0x115adf39 */
  if (!C.zf) goto L_115adf39;
  /* 115adf2d mov dword ptr [0x115d2d00], 0x200 */
  w32((uint32_t)(0x115d2d00), (0x200u));
  /* 115adf37 jmp 0x115adf4c */
  goto L_115adf4c;
L_115adf39:;
  /* 115adf39 cmp dword ptr [0x115d2d00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x115d2d00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115adf40 jge 0x115adf4c */
  if ((C.sf==C.of)) goto L_115adf4c;
  /* 115adf42 mov dword ptr [0x115d2d00], 0x14 */
  w32((uint32_t)(0x115d2d00), (0x14u));
L_115adf4c:;
  /* 115adf4c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 115adf51 push 0x115cd224 */
  push32((uint32_t)(0x115cd224u));
  /* 115adf56 push 2 */
  push32((uint32_t)(0x2u));
  /* 115adf58 push 4 */
  push32((uint32_t)(0x4u));
  /* 115adf5a mov eax, dword ptr [0x115d2d00] */
  EAX = (r32((uint32_t)(0x115d2d00)));
  /* 115adf5f push eax */
  push32((uint32_t)(EAX));
  /* 115adf60 call 0x115a5670 */
  push32(0x115adf65u); f_115a5670();
  /* 115adf65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115adf68 mov dword ptr [0x115d19b0], eax */
  w32((uint32_t)(0x115d19b0), (EAX));
  /* 115adf6d cmp dword ptr [0x115d19b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d19b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115adf74 jne 0x115adfb5 */
  if (!C.zf) goto L_115adfb5;
  /* 115adf76 mov dword ptr [0x115d2d00], 0x14 */
  w32((uint32_t)(0x115d2d00), (0x14u));
  /* 115adf80 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 115adf85 push 0x115cd224 */
  push32((uint32_t)(0x115cd224u));
  /* 115adf8a push 2 */
  push32((uint32_t)(0x2u));
  /* 115adf8c push 4 */
  push32((uint32_t)(0x4u));
  /* 115adf8e mov ecx, dword ptr [0x115d2d00] */
  ECX = (r32((uint32_t)(0x115d2d00)));
  /* 115adf94 push ecx */
  push32((uint32_t)(ECX));
  /* 115adf95 call 0x115a5670 */
  push32(0x115adf9au); f_115a5670();
  /* 115adf9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115adf9d mov dword ptr [0x115d19b0], eax */
  w32((uint32_t)(0x115d19b0), (EAX));
  /* 115adfa2 cmp dword ptr [0x115d19b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d19b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115adfa9 jne 0x115adfb5 */
  if (!C.zf) goto L_115adfb5;
  /* 115adfab push 0x1a */
  push32((uint32_t)(0x1au));
  /* 115adfad call 0x115a41d0 */
  push32(0x115adfb2u); f_115a41d0();
  /* 115adfb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115adfb5:;
  /* 115adfb5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115adfbc jmp 0x115adfc7 */
  goto L_115adfc7;
L_115adfbe:;
  /* 115adfbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adfc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115adfc4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115adfc7:;
  /* 115adfc7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115adfcb jge 0x115adfe6 */
  if ((C.sf==C.of)) goto L_115adfe6;
  /* 115adfcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adfd0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115adfd3 add eax, 0x115d0120 */
  { uint32_t _a=(EAX),_b=(0x115d0120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115adfd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adfdb mov edx, dword ptr [0x115d19b0] */
  EDX = (r32((uint32_t)(0x115d19b0)));
  /* 115adfe1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 115adfe4 jmp 0x115adfbe */
  goto L_115adfbe;
L_115adfe6:;
  /* 115adfe6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115adfed jmp 0x115adff8 */
  goto L_115adff8;
L_115adfef:;
  /* 115adfef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115adff2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115adff5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115adff8:;
  /* 115adff8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115adffc jge 0x115ae048 */
  if ((C.sf==C.of)) goto L_115ae048;
  /* 115adffe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae001 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115ae004 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae007 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 115ae00a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ae00d mov eax, dword ptr [ecx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x115d3000)));
  /* 115ae014 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae018 je 0x115ae036 */
  if (C.zf) goto L_115ae036;
  /* 115ae01a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae01d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115ae020 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae023 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 115ae026 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ae029 mov eax, dword ptr [ecx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x115d3000)));
  /* 115ae030 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae034 jne 0x115ae046 */
  if (!C.zf) goto L_115ae046;
L_115ae036:;
  /* 115ae036 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae039 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115ae03c mov dword ptr [ecx + 0x115d0130], 0xffffffff */
  w32((uint32_t)(ECX + 0x115d0130), (0xffffffffu));
L_115ae046:;
  /* 115ae046 jmp 0x115adfef */
  goto L_115adfef;
L_115ae048:;
  /* 115ae048 mov esp, ebp */
  ESP = (EBP);
  /* 115ae04a pop ebp */
  EBP = (pop32());
  /* 115ae04b ret  */
  ESPCHK(0x115adf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e050 @ 0x115ae050 (26 bytes, 9 insns) */
void f_115ae050(void) {
  FTRACE(0x115ae050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae050 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae051 mov ebp, esp */
  EBP = (ESP);
  /* 115ae053 call 0x115aec50 */
  push32(0x115ae058u); f_115aec50();
  /* 115ae058 movsx eax, byte ptr [0x115d1658] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x115d1658))));
  /* 115ae05f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ae061 je 0x115ae068 */
  if (C.zf) goto L_115ae068;
  /* 115ae063 call 0x115aea10 */
  push32(0x115ae068u); f_115aea10();
L_115ae068:;
  /* 115ae068 pop ebp */
  EBP = (pop32());
  /* 115ae069 ret  */
  ESPCHK(0x115ae050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e070 @ 0x115ae070 (61 bytes, 20 insns) */
void f_115ae070(void) {
  FTRACE(0x115ae070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae070 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae071 mov ebp, esp */
  EBP = (ESP);
  /* 115ae073 cmp dword ptr [ebp + 8], 0x115d0120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x115d0120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae07a jb 0x115ae09e */
  if (C.cf) goto L_115ae09e;
  /* 115ae07c cmp dword ptr [ebp + 8], 0x115d0380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x115d0380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae083 ja 0x115ae09e */
  if ((!C.cf&&!C.zf)) goto L_115ae09e;
  /* 115ae085 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae088 sub eax, 0x115d0120 */
  { uint32_t _a=(EAX),_b=(0x115d0120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ae08d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115ae090 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae093 push eax */
  push32((uint32_t)(EAX));
  /* 115ae094 call 0x115a8c60 */
  push32(0x115ae099u); f_115a8c60();
  /* 115ae099 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae09c jmp 0x115ae0ab */
  goto L_115ae0ab;
L_115ae09e:;
  /* 115ae09e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae0a1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae0a4 push ecx */
  push32((uint32_t)(ECX));
  /* 115ae0a5 call dword ptr [0x115d434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d434c))), 0x115ae0abu);
L_115ae0ab:;
  /* 115ae0ab pop ebp */
  EBP = (pop32());
  /* 115ae0ac ret  */
  ESPCHK(0x115ae070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0b0 @ 0x115ae0b0 (41 bytes, 16 insns) */
void f_115ae0b0(void) {
  FTRACE(0x115ae0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae0b1 mov ebp, esp */
  EBP = (ESP);
  /* 115ae0b3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae0b7 jge 0x115ae0ca */
  if ((C.sf==C.of)) goto L_115ae0ca;
  /* 115ae0b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae0bc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae0bf push eax */
  push32((uint32_t)(EAX));
  /* 115ae0c0 call 0x115a8c60 */
  push32(0x115ae0c5u); f_115a8c60();
  /* 115ae0c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae0c8 jmp 0x115ae0d7 */
  goto L_115ae0d7;
L_115ae0ca:;
  /* 115ae0ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ae0cd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae0d0 push ecx */
  push32((uint32_t)(ECX));
  /* 115ae0d1 call dword ptr [0x115d434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d434c))), 0x115ae0d7u);
L_115ae0d7:;
  /* 115ae0d7 pop ebp */
  EBP = (pop32());
  /* 115ae0d8 ret  */
  ESPCHK(0x115ae0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0e0 @ 0x115ae0e0 (61 bytes, 20 insns) */
void f_115ae0e0(void) {
  FTRACE(0x115ae0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae0e1 mov ebp, esp */
  EBP = (ESP);
  /* 115ae0e3 cmp dword ptr [ebp + 8], 0x115d0120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x115d0120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae0ea jb 0x115ae10e */
  if (C.cf) goto L_115ae10e;
  /* 115ae0ec cmp dword ptr [ebp + 8], 0x115d0380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x115d0380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae0f3 ja 0x115ae10e */
  if ((!C.cf&&!C.zf)) goto L_115ae10e;
  /* 115ae0f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae0f8 sub eax, 0x115d0120 */
  { uint32_t _a=(EAX),_b=(0x115d0120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ae0fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115ae100 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae103 push eax */
  push32((uint32_t)(EAX));
  /* 115ae104 call 0x115a8d00 */
  push32(0x115ae109u); f_115a8d00();
  /* 115ae109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae10c jmp 0x115ae11b */
  goto L_115ae11b;
L_115ae10e:;
  /* 115ae10e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae111 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae114 push ecx */
  push32((uint32_t)(ECX));
  /* 115ae115 call dword ptr [0x115d4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4348))), 0x115ae11bu);
L_115ae11b:;
  /* 115ae11b pop ebp */
  EBP = (pop32());
  /* 115ae11c ret  */
  ESPCHK(0x115ae0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e120 @ 0x115ae120 (41 bytes, 16 insns) */
void f_115ae120(void) {
  FTRACE(0x115ae120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae120 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae121 mov ebp, esp */
  EBP = (ESP);
  /* 115ae123 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae127 jge 0x115ae13a */
  if ((C.sf==C.of)) goto L_115ae13a;
  /* 115ae129 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae12c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae12f push eax */
  push32((uint32_t)(EAX));
  /* 115ae130 call 0x115a8d00 */
  push32(0x115ae135u); f_115a8d00();
  /* 115ae135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae138 jmp 0x115ae147 */
  goto L_115ae147;
L_115ae13a:;
  /* 115ae13a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ae13d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae140 push ecx */
  push32((uint32_t)(ECX));
  /* 115ae141 call dword ptr [0x115d4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4348))), 0x115ae147u);
L_115ae147:;
  /* 115ae147 pop ebp */
  EBP = (pop32());
  /* 115ae148 ret  */
  ESPCHK(0x115ae120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e150 @ 0x115ae150 (119 bytes, 34 insns) */
void f_115ae150(void) {
  FTRACE(0x115ae150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae150 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae151 mov ebp, esp */
  EBP = (ESP);
  /* 115ae153 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ae156 push 0x115d19ac */
  push32((uint32_t)(0x115d19acu));
  /* 115ae15b call dword ptr [0x115d43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43ac))), 0x115ae161u);
  /* 115ae161 cmp dword ptr [0x115d199c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d199c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae168 je 0x115ae188 */
  if (C.zf) goto L_115ae188;
  /* 115ae16a push 0x115d19ac */
  push32((uint32_t)(0x115d19acu));
  /* 115ae16f call dword ptr [0x115d439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d439c))), 0x115ae175u);
  /* 115ae175 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115ae177 call 0x115a8c60 */
  push32(0x115ae17cu); f_115a8c60();
  /* 115ae17c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae17f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115ae186 jmp 0x115ae18f */
  goto L_115ae18f;
L_115ae188:;
  /* 115ae188 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115ae18f:;
  /* 115ae18f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 115ae193 push eax */
  push32((uint32_t)(EAX));
  /* 115ae194 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae197 push ecx */
  push32((uint32_t)(ECX));
  /* 115ae198 call 0x115ae1d0 */
  push32(0x115ae19du); f_115ae1d0();
  /* 115ae19d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae1a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115ae1a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae1a7 je 0x115ae1b5 */
  if (C.zf) goto L_115ae1b5;
  /* 115ae1a9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115ae1ab call 0x115a8d00 */
  push32(0x115ae1b0u); f_115a8d00();
  /* 115ae1b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae1b3 jmp 0x115ae1c0 */
  goto L_115ae1c0;
L_115ae1b5:;
  /* 115ae1b5 push 0x115d19ac */
  push32((uint32_t)(0x115d19acu));
  /* 115ae1ba call dword ptr [0x115d439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d439c))), 0x115ae1c0u);
L_115ae1c0:;
  /* 115ae1c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ae1c3 mov esp, ebp */
  ESP = (EBP);
  /* 115ae1c5 pop ebp */
  EBP = (pop32());
  /* 115ae1c6 ret  */
  ESPCHK(0x115ae150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1d0 @ 0x115ae1d0 (160 bytes, 50 insns) */
void f_115ae1d0(void) {
  FTRACE(0x115ae1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae1d1 mov ebp, esp */
  EBP = (ESP);
  /* 115ae1d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ae1d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae1da jne 0x115ae1e3 */
  if (!C.zf) goto L_115ae1e3;
  /* 115ae1dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ae1de jmp 0x115ae26c */
  goto L_115ae26c;
L_115ae1e3:;
  /* 115ae1e3 cmp dword ptr [0x115d1820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae1ea jne 0x115ae21a */
  if (!C.zf) goto L_115ae21a;
  /* 115ae1ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ae1ef and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115ae1f4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae1f9 jle 0x115ae20b */
  if ((C.zf||C.sf!=C.of)) goto L_115ae20b;
  /* 115ae1fb call 0x115ad130 */
  push32(0x115ae200u); f_115ad130();
  /* 115ae200 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 115ae206 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115ae209 jmp 0x115ae26c */
  goto L_115ae26c;
L_115ae20b:;
  /* 115ae20b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae20e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 115ae211 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 115ae213 mov eax, 1 */
  EAX = (0x1u);
  /* 115ae218 jmp 0x115ae26c */
  goto L_115ae26c;
L_115ae21a:;
  /* 115ae21a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115ae221 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 115ae224 push eax */
  push32((uint32_t)(EAX));
  /* 115ae225 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ae227 mov ecx, dword ptr [0x115cfea4] */
  ECX = (r32((uint32_t)(0x115cfea4)));
  /* 115ae22d push ecx */
  push32((uint32_t)(ECX));
  /* 115ae22e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae231 push edx */
  push32((uint32_t)(EDX));
  /* 115ae232 push 1 */
  push32((uint32_t)(0x1u));
  /* 115ae234 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 115ae237 push eax */
  push32((uint32_t)(EAX));
  /* 115ae238 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 115ae23d mov ecx, dword ptr [0x115d1830] */
  ECX = (r32((uint32_t)(0x115d1830)));
  /* 115ae243 push ecx */
  push32((uint32_t)(ECX));
  /* 115ae244 call dword ptr [0x115d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4370))), 0x115ae24au);
  /* 115ae24a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115ae24d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae251 je 0x115ae259 */
  if (C.zf) goto L_115ae259;
  /* 115ae253 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae257 je 0x115ae269 */
  if (C.zf) goto L_115ae269;
L_115ae259:;
  /* 115ae259 call 0x115ad130 */
  push32(0x115ae25eu); f_115ad130();
  /* 115ae25e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 115ae264 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115ae267 jmp 0x115ae26c */
  goto L_115ae26c;
L_115ae269:;
  /* 115ae269 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115ae26c:;
  /* 115ae26c mov esp, ebp */
  ESP = (EBP);
  /* 115ae26e pop ebp */
  EBP = (pop32());
  /* 115ae26f ret  */
  ESPCHK(0x115ae1d0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x115ae270 (32 bytes, 18 insns) */
void f_115ae270(void) {
  FTRACE(0x115ae270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae270 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae271 mov ebp, esp */
  EBP = (ESP);
  /* 115ae273 push ebx */
  push32((uint32_t)(EBX));
  /* 115ae274 push esi */
  push32((uint32_t)(ESI));
  /* 115ae275 push edi */
  push32((uint32_t)(EDI));
  /* 115ae276 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae277 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ae279 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ae27b push 0x115ae288 */
  push32((uint32_t)(0x115ae288u));
  /* 115ae280 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 115ae283 call 0x115b59bc */
  push32(0x115ae288u); f_115b59bc();
  /* 115ae288 pop ebp */
  EBP = (pop32());
  /* 115ae289 pop edi */
  EDI = (pop32());
  /* 115ae28a pop esi */
  ESI = (pop32());
  /* 115ae28b pop ebx */
  EBX = (pop32());
  /* 115ae28c mov esp, ebp */
  ESP = (EBP);
  /* 115ae28e pop ebp */
  EBP = (pop32());
  /* 115ae28f ret  */
  ESPCHK(0x115ae270u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x115ae2b2 (104 bytes, 33 insns) */
void f_115ae2b2(void) {
  FTRACE(0x115ae2b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae2b2 push ebx */
  push32((uint32_t)(EBX));
  /* 115ae2b3 push esi */
  push32((uint32_t)(ESI));
  /* 115ae2b4 push edi */
  push32((uint32_t)(EDI));
  /* 115ae2b5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 115ae2b9 push eax */
  push32((uint32_t)(EAX));
  /* 115ae2ba push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 115ae2bc push 0x115ae290 */
  push32((uint32_t)(0x115ae290u));
  /* 115ae2c1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 115ae2c8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_115ae2cf:;
  /* 115ae2cf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 115ae2d3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 115ae2d6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 115ae2d9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae2dc je 0x115ae30c */
  if (C.zf) goto L_115ae30c;
  /* 115ae2de cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae2e2 je 0x115ae30c */
  if (C.zf) goto L_115ae30c;
  /* 115ae2e4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 115ae2e7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 115ae2ea mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 115ae2ee mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 115ae2f1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae2f6 jne 0x115ae30a */
  if (!C.zf) goto L_115ae30a;
  /* 115ae2f8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 115ae2fd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 115ae301 call 0x115ae346 */
  push32(0x115ae306u); f_115ae346();
  /* 115ae306 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x115ae30au);
L_115ae30a:;
  /* 115ae30a jmp 0x115ae2cf */
  goto L_115ae2cf;
L_115ae30c:;
  /* 115ae30c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 115ae313 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae316 pop edi */
  EDI = (pop32());
  /* 115ae317 pop esi */
  ESI = (pop32());
  /* 115ae318 pop ebx */
  EBX = (pop32());
  /* 115ae319 ret  */
  ESPCHK(0x115ae2b2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e346 @ 0x115ae346 (24 bytes, 10 insns) */
void f_115ae346(void) {
  FTRACE(0x115ae346u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae346 push ebx */
  push32((uint32_t)(EBX));
  /* 115ae347 push ecx */
  push32((uint32_t)(ECX));
  /* 115ae348 mov ebx, 0x115d03b8 */
  EBX = (0x115d03b8u);
  /* 115ae34d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae350 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 115ae353 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 115ae356 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 115ae359 pop ecx */
  ECX = (pop32());
  /* 115ae35a pop ebx */
  EBX = (pop32());
  /* 115ae35b ret 4 */
  ESPCHK(0x115ae346u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e425 @ 0x115ae425 (27 bytes, 11 insns) */
void f_115ae425(void) {
  FTRACE(0x115ae425u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae425 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae426 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 115ae42a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 115ae42c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 115ae42f push eax */
  push32((uint32_t)(EAX));
  /* 115ae430 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 115ae433 push eax */
  push32((uint32_t)(EAX));
  /* 115ae434 call 0x115ae2b2 */
  push32(0x115ae439u); f_115ae2b2();
  /* 115ae439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae43c pop ebp */
  EBP = (pop32());
  /* 115ae43d ret 4 */
  ESPCHK(0x115ae425u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e440 @ 0x115ae440 (482 bytes, 138 insns) */
void f_115ae440(void) {
  FTRACE(0x115ae440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae440 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae441 mov ebp, esp */
  EBP = (ESP);
  /* 115ae443 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ae446 push esi */
  push32((uint32_t)(ESI));
  /* 115ae447 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 115ae44e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 115ae450 call 0x115a8c60 */
  push32(0x115ae455u); f_115a8c60();
  /* 115ae455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae458 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115ae45f jmp 0x115ae46a */
  goto L_115ae46a;
L_115ae461:;
  /* 115ae461 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ae464 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae467 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_115ae46a:;
  /* 115ae46a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae46e jge 0x115ae610 */
  if ((C.sf==C.of)) goto L_115ae610;
  /* 115ae474 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ae477 cmp dword ptr [ecx*4 + 0x115d3000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x115d3000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae47f je 0x115ae576 */
  if (C.zf) goto L_115ae576;
  /* 115ae485 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ae488 mov eax, dword ptr [edx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(EDX*4 + 0x115d3000)));
  /* 115ae48f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115ae492 jmp 0x115ae49d */
  goto L_115ae49d;
L_115ae494:;
  /* 115ae494 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae497 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae49a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115ae49d:;
  /* 115ae49d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ae4a0 mov eax, dword ptr [edx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(EDX*4 + 0x115d3000)));
  /* 115ae4a7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae4ac cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae4af jae 0x115ae566 */
  if (!C.cf) goto L_115ae566;
  /* 115ae4b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae4b8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 115ae4bc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 115ae4bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ae4c1 jne 0x115ae561 */
  if (!C.zf) goto L_115ae561;
  /* 115ae4c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae4ca cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae4ce jne 0x115ae509 */
  if (!C.zf) goto L_115ae509;
  /* 115ae4d0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115ae4d2 call 0x115a8c60 */
  push32(0x115ae4d7u); f_115a8c60();
  /* 115ae4d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae4da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae4dd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae4e1 jne 0x115ae4ff */
  if (!C.zf) goto L_115ae4ff;
  /* 115ae4e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae4e6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae4e9 push edx */
  push32((uint32_t)(EDX));
  /* 115ae4ea call dword ptr [0x115d435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d435c))), 0x115ae4f0u);
  /* 115ae4f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae4f3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115ae4f6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae4f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae4fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_115ae4ff:;
  /* 115ae4ff push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115ae501 call 0x115a8d00 */
  push32(0x115ae506u); f_115a8d00();
  /* 115ae506 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115ae509:;
  /* 115ae509 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae50c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae50f push eax */
  push32((uint32_t)(EAX));
  /* 115ae510 call dword ptr [0x115d434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d434c))), 0x115ae516u);
  /* 115ae516 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae519 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 115ae51d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 115ae520 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ae522 je 0x115ae536 */
  if (C.zf) goto L_115ae536;
  /* 115ae524 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae527 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae52a push eax */
  push32((uint32_t)(EAX));
  /* 115ae52b call dword ptr [0x115d4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4348))), 0x115ae531u);
  /* 115ae531 jmp 0x115ae494 */
  goto L_115ae494;
L_115ae536:;
  /* 115ae536 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae539 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 115ae53f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ae542 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115ae545 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ae548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae54b sub eax, dword ptr [edx*4 + 0x115d3000] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x115d3000))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ae552 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115ae553 mov esi, 0x24 */
  ESI = (0x24u);
  /* 115ae558 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115ae55a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae55c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115ae55f jmp 0x115ae566 */
  goto L_115ae566;
L_115ae561:;
  /* 115ae561 jmp 0x115ae494 */
  goto L_115ae494;
L_115ae566:;
  /* 115ae566 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae56a je 0x115ae571 */
  if (C.zf) goto L_115ae571;
  /* 115ae56c jmp 0x115ae610 */
  goto L_115ae610;
L_115ae571:;
  /* 115ae571 jmp 0x115ae60b */
  goto L_115ae60b;
L_115ae576:;
  /* 115ae576 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 115ae578 push 0x115cd22c */
  push32((uint32_t)(0x115cd22cu));
  /* 115ae57d push 2 */
  push32((uint32_t)(0x2u));
  /* 115ae57f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 115ae584 call 0x115a5260 */
  push32(0x115ae589u); f_115a5260();
  /* 115ae589 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae58c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115ae58f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae593 je 0x115ae609 */
  if (C.zf) goto L_115ae609;
  /* 115ae595 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ae598 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae59b mov dword ptr [eax*4 + 0x115d3000], ecx */
  w32((uint32_t)(EAX*4 + 0x115d3000), (ECX));
  /* 115ae5a2 mov edx, dword ptr [0x115d313c] */
  EDX = (r32((uint32_t)(0x115d313c)));
  /* 115ae5a8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae5ab mov dword ptr [0x115d313c], edx */
  w32((uint32_t)(0x115d313c), (EDX));
  /* 115ae5b1 jmp 0x115ae5bc */
  goto L_115ae5bc;
L_115ae5b3:;
  /* 115ae5b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae5b6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae5b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115ae5bc:;
  /* 115ae5bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ae5bf mov edx, dword ptr [ecx*4 + 0x115d3000] */
  EDX = (r32((uint32_t)(ECX*4 + 0x115d3000)));
  /* 115ae5c6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae5cc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae5cf jae 0x115ae5f4 */
  if (!C.cf) goto L_115ae5f4;
  /* 115ae5d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae5d4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 115ae5d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae5db mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 115ae5e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae5e4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 115ae5e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae5eb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 115ae5f2 jmp 0x115ae5b3 */
  goto L_115ae5b3;
L_115ae5f4:;
  /* 115ae5f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115ae5f7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115ae5fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115ae5fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ae600 push edx */
  push32((uint32_t)(EDX));
  /* 115ae601 call 0x115ae950 */
  push32(0x115ae606u); f_115ae950();
  /* 115ae606 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115ae609:;
  /* 115ae609 jmp 0x115ae610 */
  goto L_115ae610;
L_115ae60b:;
  /* 115ae60b jmp 0x115ae461 */
  goto L_115ae461;
L_115ae610:;
  /* 115ae610 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 115ae612 call 0x115a8d00 */
  push32(0x115ae617u); f_115a8d00();
  /* 115ae617 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae61a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ae61d pop esi */
  ESI = (pop32());
  /* 115ae61e mov esp, ebp */
  ESP = (EBP);
  /* 115ae620 pop ebp */
  EBP = (pop32());
  /* 115ae621 ret  */
  ESPCHK(0x115ae440u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x115ae630 (183 bytes, 57 insns) */
void f_115ae630(void) {
  FTRACE(0x115ae630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae630 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae631 mov ebp, esp */
  EBP = (ESP);
  /* 115ae633 push ecx */
  push32((uint32_t)(ECX));
  /* 115ae634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae637 cmp eax, dword ptr [0x115d313c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d313c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae63d jae 0x115ae6ca */
  if (!C.cf) goto L_115ae6ca;
  /* 115ae643 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae646 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115ae649 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae64c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 115ae64f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ae652 mov eax, dword ptr [ecx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x115d3000)));
  /* 115ae659 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae65d jne 0x115ae6ca */
  if (!C.zf) goto L_115ae6ca;
  /* 115ae65f cmp dword ptr [0x115d1618], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d1618))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae666 jne 0x115ae6aa */
  if (!C.zf) goto L_115ae6aa;
  /* 115ae668 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae66b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115ae66e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae672 je 0x115ae682 */
  if (C.zf) goto L_115ae682;
  /* 115ae674 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae678 je 0x115ae690 */
  if (C.zf) goto L_115ae690;
  /* 115ae67a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae67e je 0x115ae69e */
  if (C.zf) goto L_115ae69e;
  /* 115ae680 jmp 0x115ae6aa */
  goto L_115ae6aa;
L_115ae682:;
  /* 115ae682 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ae685 push edx */
  push32((uint32_t)(EDX));
  /* 115ae686 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 115ae688 call dword ptr [0x115d4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4314))), 0x115ae68eu);
  /* 115ae68e jmp 0x115ae6aa */
  goto L_115ae6aa;
L_115ae690:;
  /* 115ae690 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ae693 push eax */
  push32((uint32_t)(EAX));
  /* 115ae694 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 115ae696 call dword ptr [0x115d4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4314))), 0x115ae69cu);
  /* 115ae69c jmp 0x115ae6aa */
  goto L_115ae6aa;
L_115ae69e:;
  /* 115ae69e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ae6a1 push ecx */
  push32((uint32_t)(ECX));
  /* 115ae6a2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 115ae6a4 call dword ptr [0x115d4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4314))), 0x115ae6aau);
L_115ae6aa:;
  /* 115ae6aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae6ad sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 115ae6b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae6b3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 115ae6b6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ae6b9 mov ecx, dword ptr [edx*4 + 0x115d3000] */
  ECX = (r32((uint32_t)(EDX*4 + 0x115d3000)));
  /* 115ae6c0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ae6c3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 115ae6c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ae6c8 jmp 0x115ae6e3 */
  goto L_115ae6e3;
L_115ae6ca:;
  /* 115ae6ca call 0x115ad130 */
  push32(0x115ae6cfu); f_115ad130();
  /* 115ae6cf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 115ae6d5 call 0x115ad140 */
  push32(0x115ae6dau); f_115ad140();
  /* 115ae6da mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115ae6e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_115ae6e3:;
  /* 115ae6e3 mov esp, ebp */
  ESP = (EBP);
  /* 115ae6e5 pop ebp */
  EBP = (pop32());
  /* 115ae6e6 ret  */
  ESPCHK(0x115ae630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6f0 @ 0x115ae6f0 (216 bytes, 63 insns) */
void f_115ae6f0(void) {
  FTRACE(0x115ae6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae6f1 mov ebp, esp */
  EBP = (ESP);
  /* 115ae6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 115ae6f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae6f7 cmp eax, dword ptr [0x115d313c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d313c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae6fd jae 0x115ae7ab */
  if (!C.cf) goto L_115ae7ab;
  /* 115ae703 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae706 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115ae709 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae70c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 115ae70f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ae712 mov eax, dword ptr [ecx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x115d3000)));
  /* 115ae719 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 115ae71e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115ae721 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115ae723 je 0x115ae7ab */
  if (C.zf) goto L_115ae7ab;
  /* 115ae729 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae72c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 115ae72f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae732 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 115ae735 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ae738 mov ecx, dword ptr [edx*4 + 0x115d3000] */
  ECX = (r32((uint32_t)(EDX*4 + 0x115d3000)));
  /* 115ae73f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae743 je 0x115ae7ab */
  if (C.zf) goto L_115ae7ab;
  /* 115ae745 cmp dword ptr [0x115d1618], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d1618))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae74c jne 0x115ae78a */
  if (!C.zf) goto L_115ae78a;
  /* 115ae74e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae751 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115ae754 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae758 je 0x115ae768 */
  if (C.zf) goto L_115ae768;
  /* 115ae75a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae75e je 0x115ae774 */
  if (C.zf) goto L_115ae774;
  /* 115ae760 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae764 je 0x115ae780 */
  if (C.zf) goto L_115ae780;
  /* 115ae766 jmp 0x115ae78a */
  goto L_115ae78a;
L_115ae768:;
  /* 115ae768 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ae76a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 115ae76c call dword ptr [0x115d4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4314))), 0x115ae772u);
  /* 115ae772 jmp 0x115ae78a */
  goto L_115ae78a;
L_115ae774:;
  /* 115ae774 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ae776 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 115ae778 call dword ptr [0x115d4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4314))), 0x115ae77eu);
  /* 115ae77e jmp 0x115ae78a */
  goto L_115ae78a;
L_115ae780:;
  /* 115ae780 push 0 */
  push32((uint32_t)(0x0u));
  /* 115ae782 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 115ae784 call dword ptr [0x115d4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4314))), 0x115ae78au);
L_115ae78a:;
  /* 115ae78a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae78d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115ae790 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae793 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 115ae796 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ae799 mov edx, dword ptr [eax*4 + 0x115d3000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x115d3000)));
  /* 115ae7a0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 115ae7a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115ae7a9 jmp 0x115ae7c4 */
  goto L_115ae7c4;
L_115ae7ab:;
  /* 115ae7ab call 0x115ad130 */
  push32(0x115ae7b0u); f_115ad130();
  /* 115ae7b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 115ae7b6 call 0x115ad140 */
  push32(0x115ae7bbu); f_115ad140();
  /* 115ae7bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115ae7c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_115ae7c4:;
  /* 115ae7c4 mov esp, ebp */
  ESP = (EBP);
  /* 115ae7c6 pop ebp */
  EBP = (pop32());
  /* 115ae7c7 ret  */
  ESPCHK(0x115ae6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7d0 @ 0x115ae7d0 (102 bytes, 30 insns) */
void f_115ae7d0(void) {
  FTRACE(0x115ae7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae7d1 mov ebp, esp */
  EBP = (ESP);
  /* 115ae7d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae7d6 cmp eax, dword ptr [0x115d313c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d313c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae7dc jae 0x115ae81b */
  if (!C.cf) goto L_115ae81b;
  /* 115ae7de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae7e1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115ae7e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae7e7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 115ae7ea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ae7ed mov eax, dword ptr [ecx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x115d3000)));
  /* 115ae7f4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 115ae7f9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115ae7fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115ae7fe je 0x115ae81b */
  if (C.zf) goto L_115ae81b;
  /* 115ae800 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae803 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 115ae806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae809 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 115ae80c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ae80f mov ecx, dword ptr [edx*4 + 0x115d3000] */
  ECX = (r32((uint32_t)(EDX*4 + 0x115d3000)));
  /* 115ae816 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 115ae819 jmp 0x115ae834 */
  goto L_115ae834;
L_115ae81b:;
  /* 115ae81b call 0x115ad130 */
  push32(0x115ae820u); f_115ad130();
  /* 115ae820 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 115ae826 call 0x115ad140 */
  push32(0x115ae82bu); f_115ad140();
  /* 115ae82b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115ae831 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_115ae834:;
  /* 115ae834 pop ebp */
  EBP = (pop32());
  /* 115ae835 ret  */
  ESPCHK(0x115ae7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e840 @ 0x115ae840 (260 bytes, 83 insns) */
void f_115ae840(void) {
  FTRACE(0x115ae840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae840 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae841 mov ebp, esp */
  EBP = (ESP);
  /* 115ae843 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115ae846 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 115ae84a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ae84d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 115ae850 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115ae852 je 0x115ae85d */
  if (C.zf) goto L_115ae85d;
  /* 115ae854 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 115ae857 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 115ae85a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_115ae85d:;
  /* 115ae85d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ae860 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 115ae866 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115ae868 je 0x115ae872 */
  if (C.zf) goto L_115ae872;
  /* 115ae86a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 115ae86d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 115ae86f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_115ae872:;
  /* 115ae872 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115ae875 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 115ae87b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115ae87d je 0x115ae888 */
  if (C.zf) goto L_115ae888;
  /* 115ae87f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 115ae882 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 115ae885 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_115ae888:;
  /* 115ae888 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae88b push eax */
  push32((uint32_t)(EAX));
  /* 115ae88c call dword ptr [0x115d43e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43e4))), 0x115ae892u);
  /* 115ae892 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115ae895 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae899 jne 0x115ae8b2 */
  if (!C.zf) goto L_115ae8b2;
  /* 115ae89b call dword ptr [0x115d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43d8))), 0x115ae8a1u);
  /* 115ae8a1 push eax */
  push32((uint32_t)(EAX));
  /* 115ae8a2 call 0x115ad090 */
  push32(0x115ae8a7u); f_115ad090();
  /* 115ae8a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae8aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115ae8ad jmp 0x115ae940 */
  goto L_115ae940;
L_115ae8b2:;
  /* 115ae8b2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae8b6 jne 0x115ae8c3 */
  if (!C.zf) goto L_115ae8c3;
  /* 115ae8b8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 115ae8bb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 115ae8be mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 115ae8c1 jmp 0x115ae8d2 */
  goto L_115ae8d2;
L_115ae8c3:;
  /* 115ae8c3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae8c7 jne 0x115ae8d2 */
  if (!C.zf) goto L_115ae8d2;
  /* 115ae8c9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 115ae8cc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 115ae8cf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_115ae8d2:;
  /* 115ae8d2 call 0x115ae440 */
  push32(0x115ae8d7u); f_115ae440();
  /* 115ae8d7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115ae8da cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae8de jne 0x115ae8fb */
  if (!C.zf) goto L_115ae8fb;
  /* 115ae8e0 call 0x115ad130 */
  push32(0x115ae8e5u); f_115ad130();
  /* 115ae8e5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 115ae8eb call 0x115ad140 */
  push32(0x115ae8f0u); f_115ad140();
  /* 115ae8f0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115ae8f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115ae8f9 jmp 0x115ae940 */
  goto L_115ae940;
L_115ae8fb:;
  /* 115ae8fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae8fe push eax */
  push32((uint32_t)(EAX));
  /* 115ae8ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ae902 push ecx */
  push32((uint32_t)(ECX));
  /* 115ae903 call 0x115ae630 */
  push32(0x115ae908u); f_115ae630();
  /* 115ae908 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae90b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 115ae90e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 115ae911 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 115ae914 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ae917 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115ae91a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ae91d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 115ae920 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ae923 mov edx, dword ptr [eax*4 + 0x115d3000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x115d3000)));
  /* 115ae92a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 115ae92d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 115ae931 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115ae934 push ecx */
  push32((uint32_t)(ECX));
  /* 115ae935 call 0x115ae9e0 */
  push32(0x115ae93au); f_115ae9e0();
  /* 115ae93a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae93d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_115ae940:;
  /* 115ae940 mov esp, ebp */
  ESP = (EBP);
  /* 115ae942 pop ebp */
  EBP = (pop32());
  /* 115ae943 ret  */
  ESPCHK(0x115ae840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e950 @ 0x115ae950 (134 bytes, 44 insns) */
void f_115ae950(void) {
  FTRACE(0x115ae950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae950 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae951 mov ebp, esp */
  EBP = (ESP);
  /* 115ae953 push ecx */
  push32((uint32_t)(ECX));
  /* 115ae954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae957 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115ae95a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae95d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 115ae960 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ae963 mov edx, dword ptr [eax*4 + 0x115d3000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x115d3000)));
  /* 115ae96a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae96c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115ae96f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae972 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae976 jne 0x115ae9b1 */
  if (!C.zf) goto L_115ae9b1;
  /* 115ae978 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115ae97a call 0x115a8c60 */
  push32(0x115ae97fu); f_115a8c60();
  /* 115ae97f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae982 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae985 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115ae989 jne 0x115ae9a7 */
  if (!C.zf) goto L_115ae9a7;
  /* 115ae98b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae98e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae991 push edx */
  push32((uint32_t)(EDX));
  /* 115ae992 call dword ptr [0x115d435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d435c))), 0x115ae998u);
  /* 115ae998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae99b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115ae99e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115ae9a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115ae9a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_115ae9a7:;
  /* 115ae9a7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115ae9a9 call 0x115a8d00 */
  push32(0x115ae9aeu); f_115a8d00();
  /* 115ae9ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115ae9b1:;
  /* 115ae9b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae9b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115ae9b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae9ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 115ae9bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ae9c0 mov edx, dword ptr [eax*4 + 0x115d3000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x115d3000)));
  /* 115ae9c7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 115ae9cb push eax */
  push32((uint32_t)(EAX));
  /* 115ae9cc call dword ptr [0x115d434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d434c))), 0x115ae9d2u);
  /* 115ae9d2 mov esp, ebp */
  ESP = (EBP);
  /* 115ae9d4 pop ebp */
  EBP = (pop32());
  /* 115ae9d5 ret  */
  ESPCHK(0x115ae950u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x115ae9e0 (38 bytes, 13 insns) */
void f_115ae9e0(void) {
  FTRACE(0x115ae9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115ae9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115ae9e1 mov ebp, esp */
  EBP = (ESP);
  /* 115ae9e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae9e6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115ae9e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115ae9ec and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 115ae9ef imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115ae9f2 mov edx, dword ptr [eax*4 + 0x115d3000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x115d3000)));
  /* 115ae9f9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 115ae9fd push eax */
  push32((uint32_t)(EAX));
  /* 115ae9fe call dword ptr [0x115d4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4348))), 0x115aea04u);
  /* 115aea04 pop ebp */
  EBP = (pop32());
  /* 115aea05 ret  */
  ESPCHK(0x115ae9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea10 @ 0x115aea10 (218 bytes, 63 insns) */
void f_115aea10(void) {
  FTRACE(0x115aea10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115aea10 push ebp */
  push32((uint32_t)(EBP));
  /* 115aea11 mov ebp, esp */
  EBP = (ESP);
  /* 115aea13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aea16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115aea1d push 2 */
  push32((uint32_t)(0x2u));
  /* 115aea1f call 0x115a8c60 */
  push32(0x115aea24u); f_115a8c60();
  /* 115aea24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aea27 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 115aea2e jmp 0x115aea39 */
  goto L_115aea39;
L_115aea30:;
  /* 115aea30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aea33 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aea36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115aea39:;
  /* 115aea39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aea3c cmp ecx, dword ptr [0x115d2d00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d2d00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aea42 jge 0x115aead9 */
  if ((C.sf==C.of)) goto L_115aead9;
  /* 115aea48 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aea4b mov eax, dword ptr [0x115d19b0] */
  EAX = (r32((uint32_t)(0x115d19b0)));
  /* 115aea50 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aea54 je 0x115aead4 */
  if (C.zf) goto L_115aead4;
  /* 115aea56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aea59 mov edx, dword ptr [0x115d19b0] */
  EDX = (r32((uint32_t)(0x115d19b0)));
  /* 115aea5f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 115aea62 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115aea65 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 115aea6b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115aea6d je 0x115aea91 */
  if (C.zf) goto L_115aea91;
  /* 115aea6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aea72 mov eax, dword ptr [0x115d19b0] */
  EAX = (r32((uint32_t)(0x115d19b0)));
  /* 115aea77 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 115aea7a push ecx */
  push32((uint32_t)(ECX));
  /* 115aea7b call 0x115af800 */
  push32(0x115aea80u); f_115af800();
  /* 115aea80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aea83 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aea86 je 0x115aea91 */
  if (C.zf) goto L_115aea91;
  /* 115aea88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aea8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aea8e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115aea91:;
  /* 115aea91 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aea95 jl 0x115aead4 */
  if ((C.sf!=C.of)) goto L_115aead4;
  /* 115aea97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aea9a mov ecx, dword ptr [0x115d19b0] */
  ECX = (r32((uint32_t)(0x115d19b0)));
  /* 115aeaa0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 115aeaa3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aeaa6 push edx */
  push32((uint32_t)(EDX));
  /* 115aeaa7 call dword ptr [0x115d43b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43b8))), 0x115aeaadu);
  /* 115aeaad push 2 */
  push32((uint32_t)(0x2u));
  /* 115aeaaf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aeab2 mov ecx, dword ptr [0x115d19b0] */
  ECX = (r32((uint32_t)(0x115d19b0)));
  /* 115aeab8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 115aeabb push edx */
  push32((uint32_t)(EDX));
  /* 115aeabc call 0x115a5cf0 */
  push32(0x115aeac1u); f_115a5cf0();
  /* 115aeac1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aeac4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aeac7 mov ecx, dword ptr [0x115d19b0] */
  ECX = (r32((uint32_t)(0x115d19b0)));
  /* 115aeacd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_115aead4:;
  /* 115aead4 jmp 0x115aea30 */
  goto L_115aea30;
L_115aead9:;
  /* 115aead9 push 2 */
  push32((uint32_t)(0x2u));
  /* 115aeadb call 0x115a8d00 */
  push32(0x115aeae0u); f_115a8d00();
  /* 115aeae0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aeae3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aeae6 mov esp, ebp */
  ESP = (EBP);
  /* 115aeae8 pop ebp */
  EBP = (pop32());
  /* 115aeae9 ret  */
  ESPCHK(0x115aea10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaf0 @ 0x115aeaf0 (68 bytes, 26 insns) */
void f_115aeaf0(void) {
  FTRACE(0x115aeaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115aeaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 115aeaf1 mov ebp, esp */
  EBP = (ESP);
  /* 115aeaf3 push ecx */
  push32((uint32_t)(ECX));
  /* 115aeaf4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aeaf8 jne 0x115aeb06 */
  if (!C.zf) goto L_115aeb06;
  /* 115aeafa push 0 */
  push32((uint32_t)(0x0u));
  /* 115aeafc call 0x115aec60 */
  push32(0x115aeb01u); f_115aec60();
  /* 115aeb01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aeb04 jmp 0x115aeb30 */
  goto L_115aeb30;
L_115aeb06:;
  /* 115aeb06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aeb09 push eax */
  push32((uint32_t)(EAX));
  /* 115aeb0a call 0x115ae070 */
  push32(0x115aeb0fu); f_115ae070();
  /* 115aeb0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aeb12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aeb15 push ecx */
  push32((uint32_t)(ECX));
  /* 115aeb16 call 0x115aeb40 */
  push32(0x115aeb1bu); f_115aeb40();
  /* 115aeb1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aeb1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115aeb21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aeb24 push edx */
  push32((uint32_t)(EDX));
  /* 115aeb25 call 0x115ae0e0 */
  push32(0x115aeb2au); f_115ae0e0();
  /* 115aeb2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aeb2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115aeb30:;
  /* 115aeb30 mov esp, ebp */
  ESP = (EBP);
  /* 115aeb32 pop ebp */
  EBP = (pop32());
  /* 115aeb33 ret  */
  ESPCHK(0x115aeaf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb40 @ 0x115aeb40 (65 bytes, 26 insns) */
void f_115aeb40(void) {
  FTRACE(0x115aeb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115aeb40 push ebp */
  push32((uint32_t)(EBP));
  /* 115aeb41 mov ebp, esp */
  EBP = (ESP);
  /* 115aeb43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aeb46 push eax */
  push32((uint32_t)(EAX));
  /* 115aeb47 call 0x115aeb90 */
  push32(0x115aeb4cu); f_115aeb90();
  /* 115aeb4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aeb4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115aeb51 je 0x115aeb58 */
  if (C.zf) goto L_115aeb58;
  /* 115aeb53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115aeb56 jmp 0x115aeb7f */
  goto L_115aeb7f;
L_115aeb58:;
  /* 115aeb58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aeb5b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115aeb5e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 115aeb64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115aeb66 je 0x115aeb7d */
  if (C.zf) goto L_115aeb7d;
  /* 115aeb68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aeb6b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115aeb6e push ecx */
  push32((uint32_t)(ECX));
  /* 115aeb6f call 0x115af950 */
  push32(0x115aeb74u); f_115af950();
  /* 115aeb74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aeb77 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115aeb79 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aeb7b jmp 0x115aeb7f */
  goto L_115aeb7f;
L_115aeb7d:;
  /* 115aeb7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115aeb7f:;
  /* 115aeb7f pop ebp */
  EBP = (pop32());
  /* 115aeb80 ret  */
  ESPCHK(0x115aeb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb90 @ 0x115aeb90 (183 bytes, 62 insns) */
void f_115aeb90(void) {
  FTRACE(0x115aeb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115aeb90 push ebp */
  push32((uint32_t)(EBP));
  /* 115aeb91 mov ebp, esp */
  EBP = (ESP);
  /* 115aeb93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aeb96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115aeb9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aeba0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115aeba3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aeba6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115aeba9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115aebac cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aebaf jne 0x115aec2b */
  if (!C.zf) goto L_115aec2b;
  /* 115aebb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aebb4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115aebb7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 115aebbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115aebbf je 0x115aec2b */
  if (C.zf) goto L_115aec2b;
  /* 115aebc1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aebc4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aebc7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 115aebc9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aebcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115aebcf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aebd3 jle 0x115aec2b */
  if ((C.zf||C.sf!=C.of)) goto L_115aec2b;
  /* 115aebd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aebd8 push edx */
  push32((uint32_t)(EDX));
  /* 115aebd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aebdc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115aebdf push ecx */
  push32((uint32_t)(ECX));
  /* 115aebe0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aebe3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115aebe6 push eax */
  push32((uint32_t)(EAX));
  /* 115aebe7 call 0x115adb00 */
  push32(0x115aebecu); f_115adb00();
  /* 115aebec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aebef cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aebf2 jne 0x115aec15 */
  if (!C.zf) goto L_115aec15;
  /* 115aebf4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aebf7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115aebfa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 115aec00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115aec02 je 0x115aec13 */
  if (C.zf) goto L_115aec13;
  /* 115aec04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aec07 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115aec0a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 115aec0d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aec10 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_115aec13:;
  /* 115aec13 jmp 0x115aec2b */
  goto L_115aec2b;
L_115aec15:;
  /* 115aec15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aec18 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115aec1b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 115aec1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aec21 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 115aec24 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115aec2b:;
  /* 115aec2b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aec2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aec31 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115aec34 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115aec36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115aec39 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 115aec40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aec43 mov esp, ebp */
  ESP = (EBP);
  /* 115aec45 pop ebp */
  EBP = (pop32());
  /* 115aec46 ret  */
  ESPCHK(0x115aeb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec50 @ 0x115aec50 (15 bytes, 7 insns) */
void f_115aec50(void) {
  FTRACE(0x115aec50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115aec50 push ebp */
  push32((uint32_t)(EBP));
  /* 115aec51 mov ebp, esp */
  EBP = (ESP);
  /* 115aec53 push 1 */
  push32((uint32_t)(0x1u));
  /* 115aec55 call 0x115aec60 */
  push32(0x115aec5au); f_115aec60();
  /* 115aec5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aec5d pop ebp */
  EBP = (pop32());
  /* 115aec5e ret  */
  ESPCHK(0x115aec50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec60 @ 0x115aec60 (319 bytes, 94 insns) */
void f_115aec60(void) {
  FTRACE(0x115aec60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115aec60 push ebp */
  push32((uint32_t)(EBP));
  /* 115aec61 mov ebp, esp */
  EBP = (ESP);
  /* 115aec63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aec66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115aec6d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115aec74 push 2 */
  push32((uint32_t)(0x2u));
  /* 115aec76 call 0x115a8c60 */
  push32(0x115aec7bu); f_115a8c60();
  /* 115aec7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aec7e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115aec85 jmp 0x115aec90 */
  goto L_115aec90;
L_115aec87:;
  /* 115aec87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aec8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aec8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_115aec90:;
  /* 115aec90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aec93 cmp ecx, dword ptr [0x115d2d00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d2d00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aec99 jge 0x115aed83 */
  if ((C.sf==C.of)) goto L_115aed83;
  /* 115aec9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aeca2 mov eax, dword ptr [0x115d19b0] */
  EAX = (r32((uint32_t)(0x115d19b0)));
  /* 115aeca7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aecab je 0x115aed7e */
  if (C.zf) goto L_115aed7e;
  /* 115aecb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aecb4 mov edx, dword ptr [0x115d19b0] */
  EDX = (r32((uint32_t)(0x115d19b0)));
  /* 115aecba mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 115aecbd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115aecc0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 115aecc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115aecc8 je 0x115aed7e */
  if (C.zf) goto L_115aed7e;
  /* 115aecce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aecd1 mov eax, dword ptr [0x115d19b0] */
  EAX = (r32((uint32_t)(0x115d19b0)));
  /* 115aecd6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 115aecd9 push ecx */
  push32((uint32_t)(ECX));
  /* 115aecda mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aecdd push edx */
  push32((uint32_t)(EDX));
  /* 115aecde call 0x115ae0b0 */
  push32(0x115aece3u); f_115ae0b0();
  /* 115aece3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aece6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aece9 mov ecx, dword ptr [0x115d19b0] */
  ECX = (r32((uint32_t)(0x115d19b0)));
  /* 115aecef mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 115aecf2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 115aecf5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 115aecfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115aecfc je 0x115aed65 */
  if (C.zf) goto L_115aed65;
  /* 115aecfe cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aed02 jne 0x115aed29 */
  if (!C.zf) goto L_115aed29;
  /* 115aed04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aed07 mov edx, dword ptr [0x115d19b0] */
  EDX = (r32((uint32_t)(0x115d19b0)));
  /* 115aed0d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 115aed10 push eax */
  push32((uint32_t)(EAX));
  /* 115aed11 call 0x115aeb40 */
  push32(0x115aed16u); f_115aeb40();
  /* 115aed16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aed19 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aed1c je 0x115aed27 */
  if (C.zf) goto L_115aed27;
  /* 115aed1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aed21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aed24 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115aed27:;
  /* 115aed27 jmp 0x115aed65 */
  goto L_115aed65;
L_115aed29:;
  /* 115aed29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aed2d jne 0x115aed65 */
  if (!C.zf) goto L_115aed65;
  /* 115aed2f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aed32 mov eax, dword ptr [0x115d19b0] */
  EAX = (r32((uint32_t)(0x115d19b0)));
  /* 115aed37 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 115aed3a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115aed3d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 115aed40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115aed42 je 0x115aed65 */
  if (C.zf) goto L_115aed65;
  /* 115aed44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aed47 mov ecx, dword ptr [0x115d19b0] */
  ECX = (r32((uint32_t)(0x115d19b0)));
  /* 115aed4d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 115aed50 push edx */
  push32((uint32_t)(EDX));
  /* 115aed51 call 0x115aeb40 */
  push32(0x115aed56u); f_115aeb40();
  /* 115aed56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aed59 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aed5c jne 0x115aed65 */
  if (!C.zf) goto L_115aed65;
  /* 115aed5e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_115aed65:;
  /* 115aed65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aed68 mov ecx, dword ptr [0x115d19b0] */
  ECX = (r32((uint32_t)(0x115d19b0)));
  /* 115aed6e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 115aed71 push edx */
  push32((uint32_t)(EDX));
  /* 115aed72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aed75 push eax */
  push32((uint32_t)(EAX));
  /* 115aed76 call 0x115ae120 */
  push32(0x115aed7bu); f_115ae120();
  /* 115aed7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115aed7e:;
  /* 115aed7e jmp 0x115aec87 */
  goto L_115aec87;
L_115aed83:;
  /* 115aed83 push 2 */
  push32((uint32_t)(0x2u));
  /* 115aed85 call 0x115a8d00 */
  push32(0x115aed8au); f_115a8d00();
  /* 115aed8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aed8d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aed91 jne 0x115aed98 */
  if (!C.zf) goto L_115aed98;
  /* 115aed93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aed96 jmp 0x115aed9b */
  goto L_115aed9b;
L_115aed98:;
  /* 115aed98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_115aed9b:;
  /* 115aed9b mov esp, ebp */
  ESP = (EBP);
  /* 115aed9d pop ebp */
  EBP = (pop32());
  /* 115aed9e ret  */
  ESPCHK(0x115aec60u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x115aeda0 (15 bytes, 7 insns) */
void f_115aeda0(void) {
  FTRACE(0x115aeda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115aeda0 push ebp */
  push32((uint32_t)(EBP));
  /* 115aeda1 mov ebp, esp */
  EBP = (ESP);
  /* 115aeda3 push 2 */
  push32((uint32_t)(0x2u));
  /* 115aeda5 call 0x115a41d0 */
  push32(0x115aedaau); f_115a41d0();
  /* 115aedaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aedad pop ebp */
  EBP = (pop32());
  /* 115aedae ret  */
  ESPCHK(0x115aeda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edb0 @ 0x115aedb0 (1007 bytes, 269 insns) */
void f_115aedb0(void) {
  FTRACE(0x115aedb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115aedb0 push ebp */
  push32((uint32_t)(EBP));
  /* 115aedb1 mov ebp, esp */
  EBP = (ESP);
  /* 115aedb3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aedb9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aedbd jl 0x115aedc5 */
  if ((C.sf!=C.of)) goto L_115aedc5;
  /* 115aedbf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aedc3 jle 0x115aedcc */
  if ((C.zf||C.sf!=C.of)) goto L_115aedcc;
L_115aedc5:;
  /* 115aedc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115aedc7 jmp 0x115af19b */
  goto L_115af19b;
L_115aedcc:;
  /* 115aedcc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115aedce call 0x115a8c60 */
  push32(0x115aedd3u); f_115a8c60();
  /* 115aedd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aedd6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115aeddd mov eax, dword ptr [0x115d199c] */
  EAX = (r32((uint32_t)(0x115d199c)));
  /* 115aede2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aede5 mov dword ptr [0x115d199c], eax */
  w32((uint32_t)(0x115d199c), (EAX));
L_115aedea:;
  /* 115aedea cmp dword ptr [0x115d19ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d19ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aedf1 je 0x115aedfd */
  if (C.zf) goto L_115aedfd;
  /* 115aedf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115aedf5 call dword ptr [0x115d4304] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4304))), 0x115aedfbu);
  /* 115aedfb jmp 0x115aedea */
  goto L_115aedea;
L_115aedfd:;
  /* 115aedfd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aee01 je 0x115aee41 */
  if (C.zf) goto L_115aee41;
  /* 115aee03 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aee07 je 0x115aee21 */
  if (C.zf) goto L_115aee21;
  /* 115aee09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115aee0c push ecx */
  push32((uint32_t)(ECX));
  /* 115aee0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aee10 push edx */
  push32((uint32_t)(EDX));
  /* 115aee11 call 0x115af1a0 */
  push32(0x115aee16u); f_115af1a0();
  /* 115aee16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aee19 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 115aee1f jmp 0x115aee33 */
  goto L_115aee33;
L_115aee21:;
  /* 115aee21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aee24 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115aee27 mov ecx, dword ptr [eax + 0x115d04dc] */
  ECX = (r32((uint32_t)(EAX + 0x115d04dc)));
  /* 115aee2d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_115aee33:;
  /* 115aee33 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 115aee39 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115aee3c jmp 0x115af17b */
  goto L_115af17b;
L_115aee41:;
  /* 115aee41 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 115aee48 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115aee4f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aee53 je 0x115af173 */
  if (C.zf) goto L_115af173;
  /* 115aee59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115aee5c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115aee5f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aee62 jne 0x115af084 */
  if (!C.zf) goto L_115af084;
  /* 115aee68 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115aee6b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 115aee6f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aee72 jne 0x115af084 */
  if (!C.zf) goto L_115af084;
  /* 115aee78 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115aee7b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 115aee7f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aee82 jne 0x115af084 */
  if (!C.zf) goto L_115af084;
  /* 115aee88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115aee8b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_115aee91:;
  /* 115aee91 push 0x115cd27c */
  push32((uint32_t)(0x115cd27cu));
  /* 115aee96 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 115aee9c push ecx */
  push32((uint32_t)(ECX));
  /* 115aee9d call 0x115b1000 */
  push32(0x115aeea2u); f_115b1000();
  /* 115aeea2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aeea5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 115aeeab cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aeeb2 je 0x115aeedd */
  if (C.zf) goto L_115aeedd;
  /* 115aeeb4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115aeeba sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aeec0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 115aeec6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aeecd je 0x115aeedd */
  if (C.zf) goto L_115aeedd;
  /* 115aeecf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115aeed5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115aeed8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aeedb jne 0x115aef03 */
  if (!C.zf) goto L_115aef03;
L_115aeedd:;
  /* 115aeedd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aeee1 je 0x115aeefc */
  if (C.zf) goto L_115aeefc;
  /* 115aeee3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115aeee5 call 0x115a8d00 */
  push32(0x115aeeeau); f_115a8d00();
  /* 115aeeea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aeeed mov edx, dword ptr [0x115d199c] */
  EDX = (r32((uint32_t)(0x115d199c)));
  /* 115aeef3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aeef6 mov dword ptr [0x115d199c], edx */
  w32((uint32_t)(0x115d199c), (EDX));
L_115aeefc:;
  /* 115aeefc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115aeefe jmp 0x115af19b */
  goto L_115af19b;
L_115aef03:;
  /* 115aef03 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 115aef0a jmp 0x115aef15 */
  goto L_115aef15;
L_115aef0c:;
  /* 115aef0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aef0f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aef12 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_115aef15:;
  /* 115aef15 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aef19 jg 0x115aef63 */
  if ((!C.zf&&C.sf==C.of)) goto L_115aef63;
  /* 115aef1b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 115aef21 push ecx */
  push32((uint32_t)(ECX));
  /* 115aef22 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 115aef28 push edx */
  push32((uint32_t)(EDX));
  /* 115aef29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aef2c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115aef2f mov ecx, dword ptr [eax + 0x115d04d8] */
  ECX = (r32((uint32_t)(EAX + 0x115d04d8)));
  /* 115aef35 push ecx */
  push32((uint32_t)(ECX));
  /* 115aef36 call 0x115b0fc0 */
  push32(0x115aef3bu); f_115b0fc0();
  /* 115aef3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aef3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115aef40 jne 0x115aef61 */
  if (!C.zf) goto L_115aef61;
  /* 115aef42 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115aef45 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115aef48 mov eax, dword ptr [edx + 0x115d04d8] */
  EAX = (r32((uint32_t)(EDX + 0x115d04d8)));
  /* 115aef4e push eax */
  push32((uint32_t)(EAX));
  /* 115aef4f call 0x115a8090 */
  push32(0x115aef54u); f_115a8090();
  /* 115aef54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aef57 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aef5d jne 0x115aef61 */
  if (!C.zf) goto L_115aef61;
  /* 115aef5f jmp 0x115aef63 */
  goto L_115aef63;
L_115aef61:;
  /* 115aef61 jmp 0x115aef0c */
  goto L_115aef0c;
L_115aef63:;
  /* 115aef63 push 0x115cd278 */
  push32((uint32_t)(0x115cd278u));
  /* 115aef68 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115aef6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aef71 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 115aef77 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115aef7d push edx */
  push32((uint32_t)(EDX));
  /* 115aef7e call 0x115b0f80 */
  push32(0x115aef83u); f_115b0f80();
  /* 115aef83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aef86 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 115aef8c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aef93 jne 0x115aefc9 */
  if (!C.zf) goto L_115aefc9;
  /* 115aef95 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115aef9b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115aef9e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aefa1 je 0x115aefc9 */
  if (C.zf) goto L_115aefc9;
  /* 115aefa3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aefa7 je 0x115aefc2 */
  if (C.zf) goto L_115aefc2;
  /* 115aefa9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115aefab call 0x115a8d00 */
  push32(0x115aefb0u); f_115a8d00();
  /* 115aefb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aefb3 mov edx, dword ptr [0x115d199c] */
  EDX = (r32((uint32_t)(0x115d199c)));
  /* 115aefb9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115aefbc mov dword ptr [0x115d199c], edx */
  w32((uint32_t)(0x115d199c), (EDX));
L_115aefc2:;
  /* 115aefc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115aefc4 jmp 0x115af19b */
  goto L_115af19b;
L_115aefc9:;
  /* 115aefc9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115aefcd jg 0x115af01a */
  if ((!C.zf&&C.sf==C.of)) goto L_115af01a;
  /* 115aefcf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 115aefd5 push eax */
  push32((uint32_t)(EAX));
  /* 115aefd6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115aefdc push ecx */
  push32((uint32_t)(ECX));
  /* 115aefdd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 115aefe3 push edx */
  push32((uint32_t)(EDX));
  /* 115aefe4 call 0x115a8a80 */
  push32(0x115aefe9u); f_115a8a80();
  /* 115aefe9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aefec mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 115aeff2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 115aeffa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 115af000 push ecx */
  push32((uint32_t)(ECX));
  /* 115af001 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115af004 push edx */
  push32((uint32_t)(EDX));
  /* 115af005 call 0x115af1a0 */
  push32(0x115af00au); f_115af1a0();
  /* 115af00a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af00d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af00f je 0x115af01a */
  if (C.zf) goto L_115af01a;
  /* 115af011 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115af014 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af017 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_115af01a:;
  /* 115af01a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115af020 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af026 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 115af02c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 115af032 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115af035 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af037 je 0x115af048 */
  if (C.zf) goto L_115af048;
  /* 115af039 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 115af03f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af042 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_115af048:;
  /* 115af048 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 115af04e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115af051 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af053 jne 0x115aee91 */
  if (!C.zf) goto L_115aee91;
  /* 115af059 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af05d je 0x115af06c */
  if (C.zf) goto L_115af06c;
  /* 115af05f call 0x115af340 */
  push32(0x115af064u); f_115af340();
  /* 115af064 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 115af06a jmp 0x115af076 */
  goto L_115af076;
L_115af06c:;
  /* 115af06c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_115af076:;
  /* 115af076 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 115af07c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115af07f jmp 0x115af171 */
  goto L_115af171;
L_115af084:;
  /* 115af084 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af087 push edx */
  push32((uint32_t)(EDX));
  /* 115af088 push 0 */
  push32((uint32_t)(0x0u));
  /* 115af08a push 0 */
  push32((uint32_t)(0x0u));
  /* 115af08c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 115af092 push eax */
  push32((uint32_t)(EAX));
  /* 115af093 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af096 push ecx */
  push32((uint32_t)(ECX));
  /* 115af097 call 0x115af440 */
  push32(0x115af09cu); f_115af440();
  /* 115af09c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af09f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115af0a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af0a6 je 0x115af171 */
  if (C.zf) goto L_115af171;
  /* 115af0ac mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115af0b3 jmp 0x115af0be */
  goto L_115af0be;
L_115af0b5:;
  /* 115af0b5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115af0b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af0bb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_115af0be:;
  /* 115af0be cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af0c2 jg 0x115af120 */
  if ((!C.zf&&C.sf==C.of)) goto L_115af120;
  /* 115af0c4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af0c8 je 0x115af11e */
  if (C.zf) goto L_115af11e;
  /* 115af0ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115af0cd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115af0d0 mov ecx, dword ptr [eax + 0x115d04dc] */
  ECX = (r32((uint32_t)(EAX + 0x115d04dc)));
  /* 115af0d6 push ecx */
  push32((uint32_t)(ECX));
  /* 115af0d7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 115af0dd push edx */
  push32((uint32_t)(EDX));
  /* 115af0de call 0x115b0ef0 */
  push32(0x115af0e3u); f_115b0ef0();
  /* 115af0e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af0e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af0e8 je 0x115af115 */
  if (C.zf) goto L_115af115;
  /* 115af0ea lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 115af0f0 push eax */
  push32((uint32_t)(EAX));
  /* 115af0f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115af0f4 push ecx */
  push32((uint32_t)(ECX));
  /* 115af0f5 call 0x115af1a0 */
  push32(0x115af0fau); f_115af1a0();
  /* 115af0fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af0fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af0ff je 0x115af10c */
  if (C.zf) goto L_115af10c;
  /* 115af101 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115af104 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af107 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 115af10a jmp 0x115af113 */
  goto L_115af113;
L_115af10c:;
  /* 115af10c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_115af113:;
  /* 115af113 jmp 0x115af11e */
  goto L_115af11e;
L_115af115:;
  /* 115af115 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115af118 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af11b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_115af11e:;
  /* 115af11e jmp 0x115af0b5 */
  goto L_115af0b5;
L_115af120:;
  /* 115af120 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af124 je 0x115af14b */
  if (C.zf) goto L_115af14b;
  /* 115af126 call 0x115af340 */
  push32(0x115af12bu); f_115af340();
  /* 115af12b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115af12e push 2 */
  push32((uint32_t)(0x2u));
  /* 115af130 mov ecx, dword ptr [0x115d04dc] */
  ECX = (r32((uint32_t)(0x115d04dc)));
  /* 115af136 push ecx */
  push32((uint32_t)(ECX));
  /* 115af137 call 0x115a5cf0 */
  push32(0x115af13cu); f_115a5cf0();
  /* 115af13c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af13f mov dword ptr [0x115d04dc], 0 */
  w32((uint32_t)(0x115d04dc), (0x0u));
  /* 115af149 jmp 0x115af171 */
  goto L_115af171;
L_115af14b:;
  /* 115af14b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af14f je 0x115af15e */
  if (C.zf) goto L_115af15e;
  /* 115af151 call 0x115af340 */
  push32(0x115af156u); f_115af340();
  /* 115af156 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 115af15c jmp 0x115af168 */
  goto L_115af168;
L_115af15e:;
  /* 115af15e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_115af168:;
  /* 115af168 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 115af16e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_115af171:;
  /* 115af171 jmp 0x115af17b */
  goto L_115af17b;
L_115af173:;
  /* 115af173 call 0x115af340 */
  push32(0x115af178u); f_115af340();
  /* 115af178 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115af17b:;
  /* 115af17b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af17f je 0x115af198 */
  if (C.zf) goto L_115af198;
  /* 115af181 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115af183 call 0x115a8d00 */
  push32(0x115af188u); f_115a8d00();
  /* 115af188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af18b mov eax, dword ptr [0x115d199c] */
  EAX = (r32((uint32_t)(0x115d199c)));
  /* 115af190 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115af193 mov dword ptr [0x115d199c], eax */
  w32((uint32_t)(0x115d199c), (EAX));
L_115af198:;
  /* 115af198 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_115af19b:;
  /* 115af19b mov esp, ebp */
  ESP = (EBP);
  /* 115af19d pop ebp */
  EBP = (pop32());
  /* 115af19e ret  */
  ESPCHK(0x115aedb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1a0 @ 0x115af1a0 (403 bytes, 117 insns) */
void f_115af1a0(void) {
  FTRACE(0x115af1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115af1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115af1a1 mov ebp, esp */
  EBP = (ESP);
  /* 115af1a3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115af1a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af1ac push eax */
  push32((uint32_t)(EAX));
  /* 115af1ad lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 115af1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 115af1b4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 115af1ba push edx */
  push32((uint32_t)(EDX));
  /* 115af1bb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 115af1c1 push eax */
  push32((uint32_t)(EAX));
  /* 115af1c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af1c5 push ecx */
  push32((uint32_t)(ECX));
  /* 115af1c6 call 0x115af440 */
  push32(0x115af1cbu); f_115af440();
  /* 115af1cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af1ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af1d0 jne 0x115af1d9 */
  if (!C.zf) goto L_115af1d9;
  /* 115af1d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115af1d4 jmp 0x115af32f */
  goto L_115af32f;
L_115af1d9:;
  /* 115af1d9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 115af1de push 0x115cd280 */
  push32((uint32_t)(0x115cd280u));
  /* 115af1e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 115af1e5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 115af1eb push edx */
  push32((uint32_t)(EDX));
  /* 115af1ec call 0x115a8090 */
  push32(0x115af1f1u); f_115a8090();
  /* 115af1f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af1f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af1f7 push eax */
  push32((uint32_t)(EAX));
  /* 115af1f8 call 0x115a5260 */
  push32(0x115af1fdu); f_115a5260();
  /* 115af1fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af200 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115af203 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af207 jne 0x115af210 */
  if (!C.zf) goto L_115af210;
  /* 115af209 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115af20b jmp 0x115af32f */
  goto L_115af32f;
L_115af210:;
  /* 115af210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af213 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115af216 mov ecx, dword ptr [eax + 0x115d04dc] */
  ECX = (r32((uint32_t)(EAX + 0x115d04dc)));
  /* 115af21c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115af21f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af222 mov eax, dword ptr [edx*4 + 0x115d1818] */
  EAX = (r32((uint32_t)(EDX*4 + 0x115d1818)));
  /* 115af229 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115af22c push 6 */
  push32((uint32_t)(0x6u));
  /* 115af22e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af231 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115af234 add ecx, 0x115d1868 */
  { uint32_t _a=(ECX),_b=(0x115d1868u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af23a push ecx */
  push32((uint32_t)(ECX));
  /* 115af23b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 115af23e push edx */
  push32((uint32_t)(EDX));
  /* 115af23f call 0x115abb40 */
  push32(0x115af244u); f_115abb40();
  /* 115af244 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af247 mov eax, dword ptr [0x115d1830] */
  EAX = (r32((uint32_t)(0x115d1830)));
  /* 115af24c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115af24f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 115af255 push ecx */
  push32((uint32_t)(ECX));
  /* 115af256 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115af259 push edx */
  push32((uint32_t)(EDX));
  /* 115af25a call 0x115a8210 */
  push32(0x115af25fu); f_115a8210();
  /* 115af25f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af262 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af265 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115af268 mov dword ptr [ecx + 0x115d04dc], eax */
  w32((uint32_t)(ECX + 0x115d04dc), (EAX));
  /* 115af26e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 115af274 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115af27a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af27d mov dword ptr [eax*4 + 0x115d1818], edx */
  w32((uint32_t)(EAX*4 + 0x115d1818), (EDX));
  /* 115af284 push 6 */
  push32((uint32_t)(0x6u));
  /* 115af286 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 115af28c push ecx */
  push32((uint32_t)(ECX));
  /* 115af28d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af290 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115af293 add edx, 0x115d1868 */
  { uint32_t _a=(EDX),_b=(0x115d1868u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af299 push edx */
  push32((uint32_t)(EDX));
  /* 115af29a call 0x115abb40 */
  push32(0x115af29fu); f_115abb40();
  /* 115af29f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af2a2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af2a6 jne 0x115af2b3 */
  if (!C.zf) goto L_115af2b3;
  /* 115af2a8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115af2ae mov dword ptr [0x115d1830], eax */
  w32((uint32_t)(0x115d1830), (EAX));
L_115af2b3:;
  /* 115af2b3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af2b7 jne 0x115af2c5 */
  if (!C.zf) goto L_115af2c5;
  /* 115af2b9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115af2bf mov dword ptr [0x115d1834], ecx */
  w32((uint32_t)(0x115d1834), (ECX));
L_115af2c5:;
  /* 115af2c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af2c8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115af2cb call dword ptr [edx + 0x115d04e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x115d04e0))), 0x115af2d1u);
  /* 115af2d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af2d3 je 0x115af30c */
  if (C.zf) goto L_115af30c;
  /* 115af2d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af2d8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115af2db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115af2de mov dword ptr [eax + 0x115d04dc], ecx */
  w32((uint32_t)(EAX + 0x115d04dc), (ECX));
  /* 115af2e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 115af2e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115af2e9 push edx */
  push32((uint32_t)(EDX));
  /* 115af2ea call 0x115a5cf0 */
  push32(0x115af2efu); f_115a5cf0();
  /* 115af2ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af2f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af2f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115af2f8 mov dword ptr [eax*4 + 0x115d1818], ecx */
  w32((uint32_t)(EAX*4 + 0x115d1818), (ECX));
  /* 115af2ff mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115af302 mov dword ptr [0x115d1830], edx */
  w32((uint32_t)(0x115d1830), (EDX));
  /* 115af308 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115af30a jmp 0x115af32f */
  goto L_115af32f;
L_115af30c:;
  /* 115af30c cmp dword ptr [ebp - 0xc], 0x115d03c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x115d03c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af313 je 0x115af323 */
  if (C.zf) goto L_115af323;
  /* 115af315 push 2 */
  push32((uint32_t)(0x2u));
  /* 115af317 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115af31a push eax */
  push32((uint32_t)(EAX));
  /* 115af31b call 0x115a5cf0 */
  push32(0x115af320u); f_115a5cf0();
  /* 115af320 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115af323:;
  /* 115af323 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af326 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115af329 mov eax, dword ptr [ecx + 0x115d04dc] */
  EAX = (r32((uint32_t)(ECX + 0x115d04dc)));
L_115af32f:;
  /* 115af32f mov esp, ebp */
  ESP = (EBP);
  /* 115af331 pop ebp */
  EBP = (pop32());
  /* 115af332 ret  */
  ESPCHK(0x115af1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f340 @ 0x115af340 (256 bytes, 72 insns) */
void f_115af340(void) {
  FTRACE(0x115af340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115af340 push ebp */
  push32((uint32_t)(EBP));
  /* 115af341 mov ebp, esp */
  EBP = (ESP);
  /* 115af343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115af346 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 115af34d cmp dword ptr [0x115d04dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d04dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af354 jne 0x115af374 */
  if (!C.zf) goto L_115af374;
  /* 115af356 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 115af35b push 0x115cd280 */
  push32((uint32_t)(0x115cd280u));
  /* 115af360 push 2 */
  push32((uint32_t)(0x2u));
  /* 115af362 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 115af367 call 0x115a5260 */
  push32(0x115af36cu); f_115a5260();
  /* 115af36c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af36f mov dword ptr [0x115d04dc], eax */
  w32((uint32_t)(0x115d04dc), (EAX));
L_115af374:;
  /* 115af374 mov eax, dword ptr [0x115d04dc] */
  EAX = (r32((uint32_t)(0x115d04dc)));
  /* 115af379 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 115af37c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115af383 jmp 0x115af38e */
  goto L_115af38e;
L_115af385:;
  /* 115af385 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115af388 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af38b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115af38e:;
  /* 115af38e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115af391 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115af394 mov eax, dword ptr [edx + 0x115d04dc] */
  EAX = (r32((uint32_t)(EDX + 0x115d04dc)));
  /* 115af39a push eax */
  push32((uint32_t)(EAX));
  /* 115af39b push 0x115cd28c */
  push32((uint32_t)(0x115cd28cu));
  /* 115af3a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115af3a3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115af3a6 mov edx, dword ptr [ecx + 0x115d04d8] */
  EDX = (r32((uint32_t)(ECX + 0x115d04d8)));
  /* 115af3ac push edx */
  push32((uint32_t)(EDX));
  /* 115af3ad push 3 */
  push32((uint32_t)(0x3u));
  /* 115af3af mov eax, dword ptr [0x115d04dc] */
  EAX = (r32((uint32_t)(0x115d04dc)));
  /* 115af3b4 push eax */
  push32((uint32_t)(EAX));
  /* 115af3b5 call 0x115af5e0 */
  push32(0x115af3bau); f_115af5e0();
  /* 115af3ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af3bd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af3c1 jge 0x115af409 */
  if ((C.sf==C.of)) goto L_115af409;
  /* 115af3c3 push 0x115cd278 */
  push32((uint32_t)(0x115cd278u));
  /* 115af3c8 mov ecx, dword ptr [0x115d04dc] */
  ECX = (r32((uint32_t)(0x115d04dc)));
  /* 115af3ce push ecx */
  push32((uint32_t)(ECX));
  /* 115af3cf call 0x115a8220 */
  push32(0x115af3d4u); f_115a8220();
  /* 115af3d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af3d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115af3da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af3dd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115af3e0 mov eax, dword ptr [edx + 0x115d04dc] */
  EAX = (r32((uint32_t)(EDX + 0x115d04dc)));
  /* 115af3e6 push eax */
  push32((uint32_t)(EAX));
  /* 115af3e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115af3ea imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115af3ed mov edx, dword ptr [ecx + 0x115d04dc] */
  EDX = (r32((uint32_t)(ECX + 0x115d04dc)));
  /* 115af3f3 push edx */
  push32((uint32_t)(EDX));
  /* 115af3f4 call 0x115b0ef0 */
  push32(0x115af3f9u); f_115b0ef0();
  /* 115af3f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af3fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af3fe je 0x115af407 */
  if (C.zf) goto L_115af407;
  /* 115af400 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_115af407:;
  /* 115af407 jmp 0x115af437 */
  goto L_115af437;
L_115af409:;
  /* 115af409 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af40d jne 0x115af416 */
  if (!C.zf) goto L_115af416;
  /* 115af40f mov eax, dword ptr [0x115d04dc] */
  EAX = (r32((uint32_t)(0x115d04dc)));
  /* 115af414 jmp 0x115af43c */
  goto L_115af43c;
L_115af416:;
  /* 115af416 push 2 */
  push32((uint32_t)(0x2u));
  /* 115af418 mov eax, dword ptr [0x115d04dc] */
  EAX = (r32((uint32_t)(0x115d04dc)));
  /* 115af41d push eax */
  push32((uint32_t)(EAX));
  /* 115af41e call 0x115a5cf0 */
  push32(0x115af423u); f_115a5cf0();
  /* 115af423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af426 mov dword ptr [0x115d04dc], 0 */
  w32((uint32_t)(0x115d04dc), (0x0u));
  /* 115af430 mov eax, dword ptr [0x115d04f4] */
  EAX = (r32((uint32_t)(0x115d04f4)));
  /* 115af435 jmp 0x115af43c */
  goto L_115af43c;
L_115af437:;
  /* 115af437 jmp 0x115af385 */
  goto L_115af385;
L_115af43c:;
  /* 115af43c mov esp, ebp */
  ESP = (EBP);
  /* 115af43e pop ebp */
  EBP = (pop32());
  /* 115af43f ret  */
  ESPCHK(0x115af340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f440 @ 0x115af440 (388 bytes, 115 insns) */
void f_115af440(void) {
  FTRACE(0x115af440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115af440 push ebp */
  push32((uint32_t)(EBP));
  /* 115af441 mov ebp, esp */
  EBP = (ESP);
  /* 115af443 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115af449 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af44d jne 0x115af456 */
  if (!C.zf) goto L_115af456;
  /* 115af44f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115af451 jmp 0x115af5c0 */
  goto L_115af5c0;
L_115af456:;
  /* 115af456 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af459 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115af45c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af45f jne 0x115af4b0 */
  if (!C.zf) goto L_115af4b0;
  /* 115af461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af464 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 115af468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af46a jne 0x115af4b0 */
  if (!C.zf) goto L_115af4b0;
  /* 115af46c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af46f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 115af472 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af475 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 115af479 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af47d je 0x115af499 */
  if (C.zf) goto L_115af499;
  /* 115af47f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115af482 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 115af487 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115af48a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 115af490 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115af493 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_115af499:;
  /* 115af499 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af49d je 0x115af4a8 */
  if (C.zf) goto L_115af4a8;
  /* 115af49f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115af4a2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_115af4a8:;
  /* 115af4a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af4ab jmp 0x115af5c0 */
  goto L_115af5c0;
L_115af4b0:;
  /* 115af4b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 115af4b4 push 0x115d0450 */
  push32((uint32_t)(0x115d0450u));
  /* 115af4b9 call 0x115b0ef0 */
  push32(0x115af4beu); f_115b0ef0();
  /* 115af4be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af4c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af4c3 je 0x115af578 */
  if (C.zf) goto L_115af578;
  /* 115af4c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af4cc push edx */
  push32((uint32_t)(EDX));
  /* 115af4cd push 0x115d03cc */
  push32((uint32_t)(0x115d03ccu));
  /* 115af4d2 call 0x115b0ef0 */
  push32(0x115af4d7u); f_115b0ef0();
  /* 115af4d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af4da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af4dc je 0x115af578 */
  if (C.zf) goto L_115af578;
  /* 115af4e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af4e5 push eax */
  push32((uint32_t)(EAX));
  /* 115af4e6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 115af4ec push ecx */
  push32((uint32_t)(ECX));
  /* 115af4ed call 0x115af630 */
  push32(0x115af4f2u); f_115af630();
  /* 115af4f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af4f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af4f7 je 0x115af500 */
  if (C.zf) goto L_115af500;
  /* 115af4f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115af4fb jmp 0x115af5c0 */
  goto L_115af5c0;
L_115af500:;
  /* 115af500 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 115af506 push edx */
  push32((uint32_t)(EDX));
  /* 115af507 push 0x115d1840 */
  push32((uint32_t)(0x115d1840u));
  /* 115af50c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 115af512 push eax */
  push32((uint32_t)(EAX));
  /* 115af513 call 0x115b1040 */
  push32(0x115af518u); f_115b1040();
  /* 115af518 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af51b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af51d jne 0x115af526 */
  if (!C.zf) goto L_115af526;
  /* 115af51f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115af521 jmp 0x115af5c0 */
  goto L_115af5c0;
L_115af526:;
  /* 115af526 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115af528 mov cx, word ptr [0x115d1844] */
  CX = (r16((uint32_t)(0x115d1844)));
  /* 115af52f mov dword ptr [0x115d1848], ecx */
  w32((uint32_t)(0x115d1848), (ECX));
  /* 115af535 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 115af53b push edx */
  push32((uint32_t)(EDX));
  /* 115af53c push 0x115d0450 */
  push32((uint32_t)(0x115d0450u));
  /* 115af541 call 0x115af790 */
  push32(0x115af546u); f_115af790();
  /* 115af546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af549 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af54c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115af54f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115af551 je 0x115af566 */
  if (C.zf) goto L_115af566;
  /* 115af553 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af556 push edx */
  push32((uint32_t)(EDX));
  /* 115af557 push 0x115d03cc */
  push32((uint32_t)(0x115d03ccu));
  /* 115af55c call 0x115a8210 */
  push32(0x115af561u); f_115a8210();
  /* 115af561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af564 jmp 0x115af578 */
  goto L_115af578;
L_115af566:;
  /* 115af566 push 0x115d0450 */
  push32((uint32_t)(0x115d0450u));
  /* 115af56b push 0x115d03cc */
  push32((uint32_t)(0x115d03ccu));
  /* 115af570 call 0x115a8210 */
  push32(0x115af575u); f_115a8210();
  /* 115af575 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115af578:;
  /* 115af578 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af57c je 0x115af591 */
  if (C.zf) goto L_115af591;
  /* 115af57e push 6 */
  push32((uint32_t)(0x6u));
  /* 115af580 push 0x115d1840 */
  push32((uint32_t)(0x115d1840u));
  /* 115af585 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115af588 push eax */
  push32((uint32_t)(EAX));
  /* 115af589 call 0x115abb40 */
  push32(0x115af58eu); f_115abb40();
  /* 115af58e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115af591:;
  /* 115af591 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af595 je 0x115af5aa */
  if (C.zf) goto L_115af5aa;
  /* 115af597 push 4 */
  push32((uint32_t)(0x4u));
  /* 115af599 push 0x115d1848 */
  push32((uint32_t)(0x115d1848u));
  /* 115af59e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115af5a1 push ecx */
  push32((uint32_t)(ECX));
  /* 115af5a2 call 0x115abb40 */
  push32(0x115af5a7u); f_115abb40();
  /* 115af5a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115af5aa:;
  /* 115af5aa push 0x115d0450 */
  push32((uint32_t)(0x115d0450u));
  /* 115af5af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af5b2 push edx */
  push32((uint32_t)(EDX));
  /* 115af5b3 call 0x115a8210 */
  push32(0x115af5b8u); f_115a8210();
  /* 115af5b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af5bb mov eax, 0x115d0450 */
  EAX = (0x115d0450u);
L_115af5c0:;
  /* 115af5c0 mov esp, ebp */
  ESP = (EBP);
  /* 115af5c2 pop ebp */
  EBP = (pop32());
  /* 115af5c3 ret  */
  ESPCHK(0x115af440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5d0 @ 0x115af5d0 (7 bytes, 5 insns) */
void f_115af5d0(void) {
  FTRACE(0x115af5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115af5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115af5d1 mov ebp, esp */
  EBP = (ESP);
  /* 115af5d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115af5d5 pop ebp */
  EBP = (pop32());
  /* 115af5d6 ret  */
  ESPCHK(0x115af5d0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x115af5e0 (79 bytes, 28 insns) */
void f_115af5e0(void) {
  FTRACE(0x115af5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115af5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115af5e1 mov ebp, esp */
  EBP = (ESP);
  /* 115af5e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115af5e6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 115af5e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115af5ec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115af5f3 jmp 0x115af5fe */
  goto L_115af5fe;
L_115af5f5:;
  /* 115af5f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115af5f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af5fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_115af5fe:;
  /* 115af5fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115af601 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af604 jge 0x115af624 */
  if ((C.sf==C.of)) goto L_115af624;
  /* 115af606 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115af609 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af60c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115af60f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115af612 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 115af615 push edx */
  push32((uint32_t)(EDX));
  /* 115af616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af619 push eax */
  push32((uint32_t)(EAX));
  /* 115af61a call 0x115a8220 */
  push32(0x115af61fu); f_115a8220();
  /* 115af61f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af622 jmp 0x115af5f5 */
  goto L_115af5f5;
L_115af624:;
  /* 115af624 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115af62b mov esp, ebp */
  ESP = (EBP);
  /* 115af62d pop ebp */
  EBP = (pop32());
  /* 115af62e ret  */
  ESPCHK(0x115af5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f630 @ 0x115af630 (349 bytes, 122 insns) */
void f_115af630(void) {
  FTRACE(0x115af630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115af630 push ebp */
  push32((uint32_t)(EBP));
  /* 115af631 mov ebp, esp */
  EBP = (ESP);
  /* 115af633 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115af636 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 115af63b push 0 */
  push32((uint32_t)(0x0u));
  /* 115af63d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af640 push eax */
  push32((uint32_t)(EAX));
  /* 115af641 call 0x115a8fd0 */
  push32(0x115af646u); f_115a8fd0();
  /* 115af646 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af649 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af64c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115af64f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115af651 jne 0x115af65a */
  if (!C.zf) goto L_115af65a;
  /* 115af653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115af655 jmp 0x115af789 */
  goto L_115af789;
L_115af65a:;
  /* 115af65a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af65d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115af660 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af663 jne 0x115af690 */
  if (!C.zf) goto L_115af690;
  /* 115af665 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af668 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 115af66c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af66e je 0x115af690 */
  if (C.zf) goto L_115af690;
  /* 115af670 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af673 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af676 push ecx */
  push32((uint32_t)(ECX));
  /* 115af677 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af67a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af680 push edx */
  push32((uint32_t)(EDX));
  /* 115af681 call 0x115a8210 */
  push32(0x115af686u); f_115a8210();
  /* 115af686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115af68b jmp 0x115af789 */
  goto L_115af789;
L_115af690:;
  /* 115af690 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115af697 jmp 0x115af6a2 */
  goto L_115af6a2;
L_115af699:;
  /* 115af699 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115af69c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af69f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115af6a2:;
  /* 115af6a2 push 0x115cd290 */
  push32((uint32_t)(0x115cd290u));
  /* 115af6a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af6aa push ecx */
  push32((uint32_t)(ECX));
  /* 115af6ab call 0x115b0f80 */
  push32(0x115af6b0u); f_115b0f80();
  /* 115af6b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af6b3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115af6b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af6ba jne 0x115af6c4 */
  if (!C.zf) goto L_115af6c4;
  /* 115af6bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115af6bf jmp 0x115af789 */
  goto L_115af789;
L_115af6c4:;
  /* 115af6c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af6c7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af6ca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115af6cc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 115af6cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af6d3 jne 0x115af6fa */
  if (!C.zf) goto L_115af6fa;
  /* 115af6d5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af6d9 jge 0x115af6fa */
  if ((C.sf==C.of)) goto L_115af6fa;
  /* 115af6db movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115af6df cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af6e2 je 0x115af6fa */
  if (C.zf) goto L_115af6fa;
  /* 115af6e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115af6e7 push edx */
  push32((uint32_t)(EDX));
  /* 115af6e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af6eb push eax */
  push32((uint32_t)(EAX));
  /* 115af6ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af6ef push ecx */
  push32((uint32_t)(ECX));
  /* 115af6f0 call 0x115a8a80 */
  push32(0x115af6f5u); f_115a8a80();
  /* 115af6f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af6f8 jmp 0x115af760 */
  goto L_115af760;
L_115af6fa:;
  /* 115af6fa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af6fe jne 0x115af728 */
  if (!C.zf) goto L_115af728;
  /* 115af700 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af704 jge 0x115af728 */
  if ((C.sf==C.of)) goto L_115af728;
  /* 115af706 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115af70a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af70d je 0x115af728 */
  if (C.zf) goto L_115af728;
  /* 115af70f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115af712 push eax */
  push32((uint32_t)(EAX));
  /* 115af713 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af716 push ecx */
  push32((uint32_t)(ECX));
  /* 115af717 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af71a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af71d push edx */
  push32((uint32_t)(EDX));
  /* 115af71e call 0x115a8a80 */
  push32(0x115af723u); f_115a8a80();
  /* 115af723 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af726 jmp 0x115af760 */
  goto L_115af760;
L_115af728:;
  /* 115af728 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af72c jne 0x115af75b */
  if (!C.zf) goto L_115af75b;
  /* 115af72e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115af732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af734 je 0x115af73f */
  if (C.zf) goto L_115af73f;
  /* 115af736 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115af73a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af73d jne 0x115af75b */
  if (!C.zf) goto L_115af75b;
L_115af73f:;
  /* 115af73f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115af742 push edx */
  push32((uint32_t)(EDX));
  /* 115af743 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af746 push eax */
  push32((uint32_t)(EAX));
  /* 115af747 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af74a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af750 push ecx */
  push32((uint32_t)(ECX));
  /* 115af751 call 0x115a8a80 */
  push32(0x115af756u); f_115a8a80();
  /* 115af756 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af759 jmp 0x115af760 */
  goto L_115af760;
L_115af75b:;
  /* 115af75b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115af75e jmp 0x115af789 */
  goto L_115af789;
L_115af760:;
  /* 115af760 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115af764 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af767 jne 0x115af76b */
  if (!C.zf) goto L_115af76b;
  /* 115af769 jmp 0x115af787 */
  goto L_115af787;
L_115af76b:;
  /* 115af76b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115af76f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af771 jne 0x115af775 */
  if (!C.zf) goto L_115af775;
  /* 115af773 jmp 0x115af787 */
  goto L_115af787;
L_115af775:;
  /* 115af775 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115af778 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af77b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 115af77f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 115af782 jmp 0x115af699 */
  goto L_115af699;
L_115af787:;
  /* 115af787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115af789:;
  /* 115af789 mov esp, ebp */
  ESP = (EBP);
  /* 115af78b pop ebp */
  EBP = (pop32());
  /* 115af78c ret  */
  ESPCHK(0x115af630u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x115af790 (101 bytes, 36 insns) */
void f_115af790(void) {
  FTRACE(0x115af790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115af790 push ebp */
  push32((uint32_t)(EBP));
  /* 115af791 mov ebp, esp */
  EBP = (ESP);
  /* 115af793 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af796 push eax */
  push32((uint32_t)(EAX));
  /* 115af797 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af79a push ecx */
  push32((uint32_t)(ECX));
  /* 115af79b call 0x115a8210 */
  push32(0x115af7a0u); f_115a8210();
  /* 115af7a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af7a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af7a6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 115af7aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af7ac je 0x115af7c8 */
  if (C.zf) goto L_115af7c8;
  /* 115af7ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af7b1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af7b4 push ecx */
  push32((uint32_t)(ECX));
  /* 115af7b5 push 0x115cd298 */
  push32((uint32_t)(0x115cd298u));
  /* 115af7ba push 2 */
  push32((uint32_t)(0x2u));
  /* 115af7bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af7bf push edx */
  push32((uint32_t)(EDX));
  /* 115af7c0 call 0x115af5e0 */
  push32(0x115af7c5u); f_115af5e0();
  /* 115af7c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115af7c8:;
  /* 115af7c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af7cb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 115af7d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115af7d4 je 0x115af7f3 */
  if (C.zf) goto L_115af7f3;
  /* 115af7d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115af7d9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115af7df push edx */
  push32((uint32_t)(EDX));
  /* 115af7e0 push 0x115cd294 */
  push32((uint32_t)(0x115cd294u));
  /* 115af7e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115af7e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af7ea push eax */
  push32((uint32_t)(EAX));
  /* 115af7eb call 0x115af5e0 */
  push32(0x115af7f0u); f_115af5e0();
  /* 115af7f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115af7f3:;
  /* 115af7f3 pop ebp */
  EBP = (pop32());
  /* 115af7f4 ret  */
  ESPCHK(0x115af790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f800 @ 0x115af800 (130 bytes, 50 insns) */
void f_115af800(void) {
  FTRACE(0x115af800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115af800 push ebp */
  push32((uint32_t)(EBP));
  /* 115af801 mov ebp, esp */
  EBP = (ESP);
  /* 115af803 push ecx */
  push32((uint32_t)(ECX));
  /* 115af804 push ebx */
  push32((uint32_t)(EBX));
  /* 115af805 push esi */
  push32((uint32_t)(ESI));
  /* 115af806 push edi */
  push32((uint32_t)(EDI));
  /* 115af807 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115af80e:;
  /* 115af80e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af812 jne 0x115af832 */
  if (!C.zf) goto L_115af832;
  /* 115af814 push 0x115cd2a8 */
  push32((uint32_t)(0x115cd2a8u));
  /* 115af819 push 0 */
  push32((uint32_t)(0x0u));
  /* 115af81b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 115af81d push 0x115cd29c */
  push32((uint32_t)(0x115cd29cu));
  /* 115af822 push 2 */
  push32((uint32_t)(0x2u));
  /* 115af824 call 0x115a4320 */
  push32(0x115af829u); f_115a4320();
  /* 115af829 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af82c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af82f jne 0x115af832 */
  if (!C.zf) goto L_115af832;
  /* 115af831 int3  */
  x86_unimpl("int3 @ 0x115af831");
L_115af832:;
  /* 115af832 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115af834 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af836 jne 0x115af80e */
  if (!C.zf) goto L_115af80e;
  /* 115af838 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af83b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115af83e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 115af841 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115af843 je 0x115af851 */
  if (C.zf) goto L_115af851;
  /* 115af845 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af848 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 115af84f jmp 0x115af878 */
  goto L_115af878;
L_115af851:;
  /* 115af851 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af854 push ecx */
  push32((uint32_t)(ECX));
  /* 115af855 call 0x115ae070 */
  push32(0x115af85au); f_115ae070();
  /* 115af85a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af85d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af860 push edx */
  push32((uint32_t)(EDX));
  /* 115af861 call 0x115af890 */
  push32(0x115af866u); f_115af890();
  /* 115af866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af869 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115af86c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af86f push eax */
  push32((uint32_t)(EAX));
  /* 115af870 call 0x115ae0e0 */
  push32(0x115af875u); f_115ae0e0();
  /* 115af875 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115af878:;
  /* 115af878 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115af87b pop edi */
  EDI = (pop32());
  /* 115af87c pop esi */
  ESI = (pop32());
  /* 115af87d pop ebx */
  EBX = (pop32());
  /* 115af87e mov esp, ebp */
  ESP = (EBP);
  /* 115af880 pop ebp */
  EBP = (pop32());
  /* 115af881 ret  */
  ESPCHK(0x115af800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f890 @ 0x115af890 (190 bytes, 67 insns) */
void f_115af890(void) {
  FTRACE(0x115af890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115af890 push ebp */
  push32((uint32_t)(EBP));
  /* 115af891 mov ebp, esp */
  EBP = (ESP);
  /* 115af893 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115af896 push ebx */
  push32((uint32_t)(EBX));
  /* 115af897 push esi */
  push32((uint32_t)(ESI));
  /* 115af898 push edi */
  push32((uint32_t)(EDI));
  /* 115af899 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 115af8a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af8a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115af8a6:;
  /* 115af8a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af8aa jne 0x115af8ca */
  if (!C.zf) goto L_115af8ca;
  /* 115af8ac push 0x115cd14c */
  push32((uint32_t)(0x115cd14cu));
  /* 115af8b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115af8b3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 115af8b5 push 0x115cd29c */
  push32((uint32_t)(0x115cd29cu));
  /* 115af8ba push 2 */
  push32((uint32_t)(0x2u));
  /* 115af8bc call 0x115a4320 */
  push32(0x115af8c1u); f_115a4320();
  /* 115af8c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af8c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af8c7 jne 0x115af8ca */
  if (!C.zf) goto L_115af8ca;
  /* 115af8c9 int3  */
  x86_unimpl("int3 @ 0x115af8c9");
L_115af8ca:;
  /* 115af8ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115af8cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115af8ce jne 0x115af8a6 */
  if (!C.zf) goto L_115af8a6;
  /* 115af8d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115af8d3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 115af8d6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 115af8db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af8dd je 0x115af93a */
  if (C.zf) goto L_115af93a;
  /* 115af8df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115af8e2 push ecx */
  push32((uint32_t)(ECX));
  /* 115af8e3 call 0x115aeb90 */
  push32(0x115af8e8u); f_115aeb90();
  /* 115af8e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af8eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115af8ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115af8f1 push edx */
  push32((uint32_t)(EDX));
  /* 115af8f2 call 0x115b1f10 */
  push32(0x115af8f7u); f_115b1f10();
  /* 115af8f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af8fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115af8fd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115af900 push ecx */
  push32((uint32_t)(ECX));
  /* 115af901 call 0x115b1de0 */
  push32(0x115af906u); f_115b1de0();
  /* 115af906 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af909 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af90b jge 0x115af916 */
  if ((C.sf==C.of)) goto L_115af916;
  /* 115af90d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 115af914 jmp 0x115af93a */
  goto L_115af93a;
L_115af916:;
  /* 115af916 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115af919 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af91d je 0x115af93a */
  if (C.zf) goto L_115af93a;
  /* 115af91f push 2 */
  push32((uint32_t)(0x2u));
  /* 115af921 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115af924 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 115af927 push ecx */
  push32((uint32_t)(ECX));
  /* 115af928 call 0x115a5cf0 */
  push32(0x115af92du); f_115a5cf0();
  /* 115af92d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af930 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115af933 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_115af93a:;
  /* 115af93a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115af93d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 115af944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115af947 pop edi */
  EDI = (pop32());
  /* 115af948 pop esi */
  ESI = (pop32());
  /* 115af949 pop ebx */
  EBX = (pop32());
  /* 115af94a mov esp, ebp */
  ESP = (EBP);
  /* 115af94c pop ebp */
  EBP = (pop32());
  /* 115af94d ret  */
  ESPCHK(0x115af890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f950 @ 0x115af950 (210 bytes, 63 insns) */
void f_115af950(void) {
  FTRACE(0x115af950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115af950 push ebp */
  push32((uint32_t)(EBP));
  /* 115af951 mov ebp, esp */
  EBP = (ESP);
  /* 115af953 push ecx */
  push32((uint32_t)(ECX));
  /* 115af954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af957 cmp eax, dword ptr [0x115d313c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d313c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af95d jae 0x115af981 */
  if (!C.cf) goto L_115af981;
  /* 115af95f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af962 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115af965 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af968 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 115af96b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115af96e mov eax, dword ptr [ecx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x115d3000)));
  /* 115af975 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 115af97a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115af97d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115af97f jne 0x115af994 */
  if (!C.zf) goto L_115af994;
L_115af981:;
  /* 115af981 call 0x115ad130 */
  push32(0x115af986u); f_115ad130();
  /* 115af986 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 115af98c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115af98f jmp 0x115afa1e */
  goto L_115afa1e;
L_115af994:;
  /* 115af994 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af997 push edx */
  push32((uint32_t)(EDX));
  /* 115af998 call 0x115ae950 */
  push32(0x115af99du); f_115ae950();
  /* 115af99d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af9a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af9a3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115af9a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af9a9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 115af9ac imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115af9af mov edx, dword ptr [eax*4 + 0x115d3000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x115d3000)));
  /* 115af9b6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 115af9bb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 115af9be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af9c0 je 0x115af9fd */
  if (C.zf) goto L_115af9fd;
  /* 115af9c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115af9c5 push ecx */
  push32((uint32_t)(ECX));
  /* 115af9c6 call 0x115ae7d0 */
  push32(0x115af9cbu); f_115ae7d0();
  /* 115af9cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115af9ce push eax */
  push32((uint32_t)(EAX));
  /* 115af9cf call dword ptr [0x115d4300] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4300))), 0x115af9d5u);
  /* 115af9d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115af9d7 jne 0x115af9e4 */
  if (!C.zf) goto L_115af9e4;
  /* 115af9d9 call dword ptr [0x115d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43d8))), 0x115af9dfu);
  /* 115af9df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115af9e2 jmp 0x115af9eb */
  goto L_115af9eb;
L_115af9e4:;
  /* 115af9e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115af9eb:;
  /* 115af9eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115af9ef jne 0x115af9f3 */
  if (!C.zf) goto L_115af9f3;
  /* 115af9f1 jmp 0x115afa0f */
  goto L_115afa0f;
L_115af9f3:;
  /* 115af9f3 call 0x115ad140 */
  push32(0x115af9f8u); f_115ad140();
  /* 115af9f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115af9fb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_115af9fd:;
  /* 115af9fd call 0x115ad130 */
  push32(0x115afa02u); f_115ad130();
  /* 115afa02 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 115afa08 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115afa0f:;
  /* 115afa0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afa12 push eax */
  push32((uint32_t)(EAX));
  /* 115afa13 call 0x115ae9e0 */
  push32(0x115afa18u); f_115ae9e0();
  /* 115afa18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afa1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115afa1e:;
  /* 115afa1e mov esp, ebp */
  ESP = (EBP);
  /* 115afa20 pop ebp */
  EBP = (pop32());
  /* 115afa21 ret  */
  ESPCHK(0x115af950u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x115afa30 (219 bytes, 64 insns) */
void f_115afa30(void) {
  FTRACE(0x115afa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115afa30 push ebp */
  push32((uint32_t)(EBP));
  /* 115afa31 mov ebp, esp */
  EBP = (ESP);
  /* 115afa33 push ecx */
  push32((uint32_t)(ECX));
  /* 115afa34 cmp dword ptr [0x115d182c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d182c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115afa3b je 0x115afad1 */
  if (C.zf) goto L_115afad1;
  /* 115afa41 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 115afa43 push 0x115cd2b8 */
  push32((uint32_t)(0x115cd2b8u));
  /* 115afa48 push 2 */
  push32((uint32_t)(0x2u));
  /* 115afa4a push 0xac */
  push32((uint32_t)(0xacu));
  /* 115afa4f push 1 */
  push32((uint32_t)(0x1u));
  /* 115afa51 call 0x115a5670 */
  push32(0x115afa56u); f_115a5670();
  /* 115afa56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afa59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115afa5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115afa60 jne 0x115afa6c */
  if (!C.zf) goto L_115afa6c;
  /* 115afa62 mov eax, 1 */
  EAX = (0x1u);
  /* 115afa67 jmp 0x115afb07 */
  goto L_115afb07;
L_115afa6c:;
  /* 115afa6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afa6f push eax */
  push32((uint32_t)(EAX));
  /* 115afa70 call 0x115afb10 */
  push32(0x115afa75u); f_115afb10();
  /* 115afa75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afa78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115afa7a je 0x115afa9d */
  if (C.zf) goto L_115afa9d;
  /* 115afa7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afa7f push ecx */
  push32((uint32_t)(ECX));
  /* 115afa80 call 0x115b00a0 */
  push32(0x115afa85u); f_115b00a0();
  /* 115afa85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afa88 push 2 */
  push32((uint32_t)(0x2u));
  /* 115afa8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afa8d push edx */
  push32((uint32_t)(EDX));
  /* 115afa8e call 0x115a5cf0 */
  push32(0x115afa93u); f_115a5cf0();
  /* 115afa93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afa96 mov eax, 1 */
  EAX = (0x1u);
  /* 115afa9b jmp 0x115afb07 */
  goto L_115afb07;
L_115afa9d:;
  /* 115afa9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afaa0 mov dword ptr [0x115d0c98], eax */
  w32((uint32_t)(0x115d0c98), (EAX));
  /* 115afaa5 mov ecx, dword ptr [0x115d184c] */
  ECX = (r32((uint32_t)(0x115d184c)));
  /* 115afaab push ecx */
  push32((uint32_t)(ECX));
  /* 115afaac call 0x115b00a0 */
  push32(0x115afab1u); f_115b00a0();
  /* 115afab1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afab4 push 2 */
  push32((uint32_t)(0x2u));
  /* 115afab6 mov edx, dword ptr [0x115d184c] */
  EDX = (r32((uint32_t)(0x115d184c)));
  /* 115afabc push edx */
  push32((uint32_t)(EDX));
  /* 115afabd call 0x115a5cf0 */
  push32(0x115afac2u); f_115a5cf0();
  /* 115afac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afac5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afac8 mov dword ptr [0x115d184c], eax */
  w32((uint32_t)(0x115d184c), (EAX));
  /* 115afacd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115afacf jmp 0x115afb07 */
  goto L_115afb07;
L_115afad1:;
  /* 115afad1 mov dword ptr [0x115d0c98], 0x115d0ca0 */
  w32((uint32_t)(0x115d0c98), (0x115d0ca0u));
  /* 115afadb mov ecx, dword ptr [0x115d184c] */
  ECX = (r32((uint32_t)(0x115d184c)));
  /* 115afae1 push ecx */
  push32((uint32_t)(ECX));
  /* 115afae2 call 0x115b00a0 */
  push32(0x115afae7u); f_115b00a0();
  /* 115afae7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afaea push 2 */
  push32((uint32_t)(0x2u));
  /* 115afaec mov edx, dword ptr [0x115d184c] */
  EDX = (r32((uint32_t)(0x115d184c)));
  /* 115afaf2 push edx */
  push32((uint32_t)(EDX));
  /* 115afaf3 call 0x115a5cf0 */
  push32(0x115afaf8u); f_115a5cf0();
  /* 115afaf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afafb mov dword ptr [0x115d184c], 0 */
  w32((uint32_t)(0x115d184c), (0x0u));
  /* 115afb05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115afb07:;
  /* 115afb07 mov esp, ebp */
  ESP = (EBP);
  /* 115afb09 pop ebp */
  EBP = (pop32());
  /* 115afb0a ret  */
  ESPCHK(0x115afa30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb10 @ 0x115afb10 (1423 bytes, 533 insns) */
void f_115afb10(void) {
  FTRACE(0x115afb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115afb10 push ebp */
  push32((uint32_t)(EBP));
  /* 115afb11 mov ebp, esp */
  EBP = (ESP);
  /* 115afb13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115afb16 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115afb1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115afb1f mov ax, word ptr [0x115d1886] */
  AX = (r16((uint32_t)(0x115d1886)));
  /* 115afb25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115afb28 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115afb2a mov cx, word ptr [0x115d1888] */
  CX = (r16((uint32_t)(0x115d1888)));
  /* 115afb31 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115afb34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115afb38 jne 0x115afb42 */
  if (!C.zf) goto L_115afb42;
  /* 115afb3a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115afb3d jmp 0x115b009b */
  goto L_115b009b;
L_115afb42:;
  /* 115afb42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afb45 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afb48 push edx */
  push32((uint32_t)(EDX));
  /* 115afb49 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 115afb4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afb4e push eax */
  push32((uint32_t)(EAX));
  /* 115afb4f push 1 */
  push32((uint32_t)(0x1u));
  /* 115afb51 call 0x115b3420 */
  push32(0x115afb56u); f_115b3420();
  /* 115afb56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afb59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afb5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afb5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afb61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afb64 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afb67 push edx */
  push32((uint32_t)(EDX));
  /* 115afb68 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 115afb6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afb6d push eax */
  push32((uint32_t)(EAX));
  /* 115afb6e push 1 */
  push32((uint32_t)(0x1u));
  /* 115afb70 call 0x115b3420 */
  push32(0x115afb75u); f_115b3420();
  /* 115afb75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afb78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afb7b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afb7d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afb80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afb83 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afb86 push edx */
  push32((uint32_t)(EDX));
  /* 115afb87 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 115afb89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afb8c push eax */
  push32((uint32_t)(EAX));
  /* 115afb8d push 1 */
  push32((uint32_t)(0x1u));
  /* 115afb8f call 0x115b3420 */
  push32(0x115afb94u); f_115b3420();
  /* 115afb94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afb97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afb9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afb9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afb9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afba2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afba5 push edx */
  push32((uint32_t)(EDX));
  /* 115afba6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 115afba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afbab push eax */
  push32((uint32_t)(EAX));
  /* 115afbac push 1 */
  push32((uint32_t)(0x1u));
  /* 115afbae call 0x115b3420 */
  push32(0x115afbb3u); f_115b3420();
  /* 115afbb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afbb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afbb9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afbbb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afbbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afbc1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afbc4 push edx */
  push32((uint32_t)(EDX));
  /* 115afbc5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 115afbc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afbca push eax */
  push32((uint32_t)(EAX));
  /* 115afbcb push 1 */
  push32((uint32_t)(0x1u));
  /* 115afbcd call 0x115b3420 */
  push32(0x115afbd2u); f_115b3420();
  /* 115afbd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afbd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afbd8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afbda mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afbdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afbe0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afbe3 push edx */
  push32((uint32_t)(EDX));
  /* 115afbe4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 115afbe6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afbe9 push eax */
  push32((uint32_t)(EAX));
  /* 115afbea push 1 */
  push32((uint32_t)(0x1u));
  /* 115afbec call 0x115b3420 */
  push32(0x115afbf1u); f_115b3420();
  /* 115afbf1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afbf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afbf7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afbf9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afbfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afbff push edx */
  push32((uint32_t)(EDX));
  /* 115afc00 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 115afc02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afc05 push eax */
  push32((uint32_t)(EAX));
  /* 115afc06 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afc08 call 0x115b3420 */
  push32(0x115afc0du); f_115b3420();
  /* 115afc0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afc10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afc13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afc15 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afc18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afc1b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afc1e push edx */
  push32((uint32_t)(EDX));
  /* 115afc1f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 115afc21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afc24 push eax */
  push32((uint32_t)(EAX));
  /* 115afc25 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afc27 call 0x115b3420 */
  push32(0x115afc2cu); f_115b3420();
  /* 115afc2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afc2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afc32 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afc34 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afc37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afc3a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afc3d push edx */
  push32((uint32_t)(EDX));
  /* 115afc3e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 115afc40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afc43 push eax */
  push32((uint32_t)(EAX));
  /* 115afc44 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afc46 call 0x115b3420 */
  push32(0x115afc4bu); f_115b3420();
  /* 115afc4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afc4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afc51 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afc53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afc56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afc59 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afc5c push edx */
  push32((uint32_t)(EDX));
  /* 115afc5d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 115afc5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afc62 push eax */
  push32((uint32_t)(EAX));
  /* 115afc63 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afc65 call 0x115b3420 */
  push32(0x115afc6au); f_115b3420();
  /* 115afc6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afc6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afc70 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afc72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afc75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afc78 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afc7b push edx */
  push32((uint32_t)(EDX));
  /* 115afc7c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 115afc7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afc81 push eax */
  push32((uint32_t)(EAX));
  /* 115afc82 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afc84 call 0x115b3420 */
  push32(0x115afc89u); f_115b3420();
  /* 115afc89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afc8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afc8f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afc91 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afc94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afc97 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afc9a push edx */
  push32((uint32_t)(EDX));
  /* 115afc9b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 115afc9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afca0 push eax */
  push32((uint32_t)(EAX));
  /* 115afca1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afca3 call 0x115b3420 */
  push32(0x115afca8u); f_115b3420();
  /* 115afca8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afcab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afcae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afcb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afcb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afcb6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afcb9 push edx */
  push32((uint32_t)(EDX));
  /* 115afcba push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 115afcbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afcbf push eax */
  push32((uint32_t)(EAX));
  /* 115afcc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afcc2 call 0x115b3420 */
  push32(0x115afcc7u); f_115b3420();
  /* 115afcc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afcca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afccd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afccf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afcd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afcd5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afcd8 push edx */
  push32((uint32_t)(EDX));
  /* 115afcd9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 115afcdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afcde push eax */
  push32((uint32_t)(EAX));
  /* 115afcdf push 1 */
  push32((uint32_t)(0x1u));
  /* 115afce1 call 0x115b3420 */
  push32(0x115afce6u); f_115b3420();
  /* 115afce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afce9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afcec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afcee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afcf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afcf4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afcf7 push edx */
  push32((uint32_t)(EDX));
  /* 115afcf8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 115afcfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afcfd push eax */
  push32((uint32_t)(EAX));
  /* 115afcfe push 1 */
  push32((uint32_t)(0x1u));
  /* 115afd00 call 0x115b3420 */
  push32(0x115afd05u); f_115b3420();
  /* 115afd05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afd08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afd0b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afd0d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afd10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afd13 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afd16 push edx */
  push32((uint32_t)(EDX));
  /* 115afd17 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 115afd19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afd1c push eax */
  push32((uint32_t)(EAX));
  /* 115afd1d push 1 */
  push32((uint32_t)(0x1u));
  /* 115afd1f call 0x115b3420 */
  push32(0x115afd24u); f_115b3420();
  /* 115afd24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afd27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afd2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afd2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afd2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afd32 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afd35 push edx */
  push32((uint32_t)(EDX));
  /* 115afd36 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 115afd38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afd3b push eax */
  push32((uint32_t)(EAX));
  /* 115afd3c push 1 */
  push32((uint32_t)(0x1u));
  /* 115afd3e call 0x115b3420 */
  push32(0x115afd43u); f_115b3420();
  /* 115afd43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afd46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afd49 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afd4b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afd4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afd51 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afd54 push edx */
  push32((uint32_t)(EDX));
  /* 115afd55 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 115afd57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afd5a push eax */
  push32((uint32_t)(EAX));
  /* 115afd5b push 1 */
  push32((uint32_t)(0x1u));
  /* 115afd5d call 0x115b3420 */
  push32(0x115afd62u); f_115b3420();
  /* 115afd62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afd65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afd68 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afd6a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afd6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afd70 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afd73 push edx */
  push32((uint32_t)(EDX));
  /* 115afd74 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 115afd76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afd79 push eax */
  push32((uint32_t)(EAX));
  /* 115afd7a push 1 */
  push32((uint32_t)(0x1u));
  /* 115afd7c call 0x115b3420 */
  push32(0x115afd81u); f_115b3420();
  /* 115afd81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afd84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afd87 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afd89 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afd8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afd8f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afd92 push edx */
  push32((uint32_t)(EDX));
  /* 115afd93 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 115afd95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afd98 push eax */
  push32((uint32_t)(EAX));
  /* 115afd99 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afd9b call 0x115b3420 */
  push32(0x115afda0u); f_115b3420();
  /* 115afda0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afda3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afda6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afda8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afdab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afdae add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afdb1 push edx */
  push32((uint32_t)(EDX));
  /* 115afdb2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 115afdb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afdb7 push eax */
  push32((uint32_t)(EAX));
  /* 115afdb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afdba call 0x115b3420 */
  push32(0x115afdbfu); f_115b3420();
  /* 115afdbf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afdc2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afdc5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afdc7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afdca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afdcd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afdd0 push edx */
  push32((uint32_t)(EDX));
  /* 115afdd1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 115afdd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afdd6 push eax */
  push32((uint32_t)(EAX));
  /* 115afdd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afdd9 call 0x115b3420 */
  push32(0x115afddeu); f_115b3420();
  /* 115afdde add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afde1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afde4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afde6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afde9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afdec add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afdef push edx */
  push32((uint32_t)(EDX));
  /* 115afdf0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 115afdf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afdf5 push eax */
  push32((uint32_t)(EAX));
  /* 115afdf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afdf8 call 0x115b3420 */
  push32(0x115afdfdu); f_115b3420();
  /* 115afdfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afe00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afe03 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afe05 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afe08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afe0b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afe0e push edx */
  push32((uint32_t)(EDX));
  /* 115afe0f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 115afe11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afe14 push eax */
  push32((uint32_t)(EAX));
  /* 115afe15 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afe17 call 0x115b3420 */
  push32(0x115afe1cu); f_115b3420();
  /* 115afe1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afe1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afe22 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afe24 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afe27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afe2a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afe2d push edx */
  push32((uint32_t)(EDX));
  /* 115afe2e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 115afe30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afe33 push eax */
  push32((uint32_t)(EAX));
  /* 115afe34 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afe36 call 0x115b3420 */
  push32(0x115afe3bu); f_115b3420();
  /* 115afe3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afe3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afe41 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afe43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afe46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afe49 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afe4c push edx */
  push32((uint32_t)(EDX));
  /* 115afe4d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 115afe4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afe52 push eax */
  push32((uint32_t)(EAX));
  /* 115afe53 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afe55 call 0x115b3420 */
  push32(0x115afe5au); f_115b3420();
  /* 115afe5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afe5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afe60 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afe62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afe65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afe68 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afe6b push edx */
  push32((uint32_t)(EDX));
  /* 115afe6c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 115afe6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afe71 push eax */
  push32((uint32_t)(EAX));
  /* 115afe72 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afe74 call 0x115b3420 */
  push32(0x115afe79u); f_115b3420();
  /* 115afe79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afe7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afe7f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afe81 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afe84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afe87 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afe8a push edx */
  push32((uint32_t)(EDX));
  /* 115afe8b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 115afe8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afe90 push eax */
  push32((uint32_t)(EAX));
  /* 115afe91 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afe93 call 0x115b3420 */
  push32(0x115afe98u); f_115b3420();
  /* 115afe98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afe9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afe9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afea0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afea3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afea6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afea9 push edx */
  push32((uint32_t)(EDX));
  /* 115afeaa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 115afeac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afeaf push eax */
  push32((uint32_t)(EAX));
  /* 115afeb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115afeb2 call 0x115b3420 */
  push32(0x115afeb7u); f_115b3420();
  /* 115afeb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afeba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afebd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afebf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afec2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afec5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afec8 push edx */
  push32((uint32_t)(EDX));
  /* 115afec9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 115afecb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afece push eax */
  push32((uint32_t)(EAX));
  /* 115afecf push 1 */
  push32((uint32_t)(0x1u));
  /* 115afed1 call 0x115b3420 */
  push32(0x115afed6u); f_115b3420();
  /* 115afed6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afed9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afedc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afede mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115afee1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115afee4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afee7 push edx */
  push32((uint32_t)(EDX));
  /* 115afee8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 115afeea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afeed push eax */
  push32((uint32_t)(EAX));
  /* 115afeee push 1 */
  push32((uint32_t)(0x1u));
  /* 115afef0 call 0x115b3420 */
  push32(0x115afef5u); f_115b3420();
  /* 115afef5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115afef8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115afefb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115afefd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115aff00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aff03 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aff06 push edx */
  push32((uint32_t)(EDX));
  /* 115aff07 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 115aff09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aff0c push eax */
  push32((uint32_t)(EAX));
  /* 115aff0d push 1 */
  push32((uint32_t)(0x1u));
  /* 115aff0f call 0x115b3420 */
  push32(0x115aff14u); f_115b3420();
  /* 115aff14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aff17 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aff1a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115aff1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115aff1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aff22 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aff28 push edx */
  push32((uint32_t)(EDX));
  /* 115aff29 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 115aff2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aff2e push eax */
  push32((uint32_t)(EAX));
  /* 115aff2f push 1 */
  push32((uint32_t)(0x1u));
  /* 115aff31 call 0x115b3420 */
  push32(0x115aff36u); f_115b3420();
  /* 115aff36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aff39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aff3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115aff3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115aff41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aff44 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aff4a push edx */
  push32((uint32_t)(EDX));
  /* 115aff4b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115aff4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aff50 push eax */
  push32((uint32_t)(EAX));
  /* 115aff51 push 1 */
  push32((uint32_t)(0x1u));
  /* 115aff53 call 0x115b3420 */
  push32(0x115aff58u); f_115b3420();
  /* 115aff58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aff5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aff5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115aff60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115aff63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aff66 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aff6c push edx */
  push32((uint32_t)(EDX));
  /* 115aff6d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115aff6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aff72 push eax */
  push32((uint32_t)(EAX));
  /* 115aff73 push 1 */
  push32((uint32_t)(0x1u));
  /* 115aff75 call 0x115b3420 */
  push32(0x115aff7au); f_115b3420();
  /* 115aff7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aff7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115aff80 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115aff82 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115aff85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115aff88 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115aff8e push edx */
  push32((uint32_t)(EDX));
  /* 115aff8f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 115aff91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115aff94 push eax */
  push32((uint32_t)(EAX));
  /* 115aff95 push 1 */
  push32((uint32_t)(0x1u));
  /* 115aff97 call 0x115b3420 */
  push32(0x115aff9cu); f_115b3420();
  /* 115aff9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115aff9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115affa2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115affa4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115affa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115affaa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115affb0 push edx */
  push32((uint32_t)(EDX));
  /* 115affb1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 115affb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115affb6 push eax */
  push32((uint32_t)(EAX));
  /* 115affb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 115affb9 call 0x115b3420 */
  push32(0x115affbeu); f_115b3420();
  /* 115affbe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115affc1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115affc4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115affc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115affc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115affcc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115affd2 push edx */
  push32((uint32_t)(EDX));
  /* 115affd3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 115affd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115affd8 push eax */
  push32((uint32_t)(EAX));
  /* 115affd9 push 1 */
  push32((uint32_t)(0x1u));
  /* 115affdb call 0x115b3420 */
  push32(0x115affe0u); f_115b3420();
  /* 115affe0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115affe3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115affe6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115affe8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115affeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115affee add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115afff4 push edx */
  push32((uint32_t)(EDX));
  /* 115afff5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 115afff7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115afffa push eax */
  push32((uint32_t)(EAX));
  /* 115afffb push 1 */
  push32((uint32_t)(0x1u));
  /* 115afffd call 0x115b3420 */
  push32(0x115b0002u); f_115b3420();
  /* 115b0002 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0005 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b0008 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b000a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115b000d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0010 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0016 push edx */
  push32((uint32_t)(EDX));
  /* 115b0017 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 115b0019 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b001c push eax */
  push32((uint32_t)(EAX));
  /* 115b001d push 1 */
  push32((uint32_t)(0x1u));
  /* 115b001f call 0x115b3420 */
  push32(0x115b0024u); f_115b3420();
  /* 115b0024 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0027 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b002a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b002c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115b002f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0032 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0038 push edx */
  push32((uint32_t)(EDX));
  /* 115b0039 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 115b003b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b003e push eax */
  push32((uint32_t)(EAX));
  /* 115b003f push 1 */
  push32((uint32_t)(0x1u));
  /* 115b0041 call 0x115b3420 */
  push32(0x115b0046u); f_115b3420();
  /* 115b0046 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0049 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b004c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b004e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115b0051 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0054 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b005a push edx */
  push32((uint32_t)(EDX));
  /* 115b005b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 115b005d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b0060 push eax */
  push32((uint32_t)(EAX));
  /* 115b0061 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b0063 call 0x115b3420 */
  push32(0x115b0068u); f_115b3420();
  /* 115b0068 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b006b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b006e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b0070 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115b0073 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0076 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b007c push edx */
  push32((uint32_t)(EDX));
  /* 115b007d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 115b0082 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b0085 push eax */
  push32((uint32_t)(EAX));
  /* 115b0086 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b0088 call 0x115b3420 */
  push32(0x115b008du); f_115b3420();
  /* 115b008d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0090 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b0093 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b0095 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115b0098 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_115b009b:;
  /* 115b009b mov esp, ebp */
  ESP = (EBP);
  /* 115b009d pop ebp */
  EBP = (pop32());
  /* 115b009e ret  */
  ESPCHK(0x115afb10u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x115b00a0 (779 bytes, 265 insns) */
void f_115b00a0(void) {
  FTRACE(0x115b00a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b00a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b00a1 mov ebp, esp */
  EBP = (ESP);
  /* 115b00a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b00a7 jne 0x115b00ae */
  if (!C.zf) goto L_115b00ae;
  /* 115b00a9 jmp 0x115b03a9 */
  goto L_115b03a9;
L_115b00ae:;
  /* 115b00ae push 2 */
  push32((uint32_t)(0x2u));
  /* 115b00b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b00b3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115b00b6 push ecx */
  push32((uint32_t)(ECX));
  /* 115b00b7 call 0x115a5cf0 */
  push32(0x115b00bcu); f_115a5cf0();
  /* 115b00bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b00bf push 2 */
  push32((uint32_t)(0x2u));
  /* 115b00c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b00c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115b00c7 push eax */
  push32((uint32_t)(EAX));
  /* 115b00c8 call 0x115a5cf0 */
  push32(0x115b00cdu); f_115a5cf0();
  /* 115b00cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b00d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b00d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b00d5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115b00d8 push edx */
  push32((uint32_t)(EDX));
  /* 115b00d9 call 0x115a5cf0 */
  push32(0x115b00deu); f_115a5cf0();
  /* 115b00de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b00e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b00e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b00e6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115b00e9 push ecx */
  push32((uint32_t)(ECX));
  /* 115b00ea call 0x115a5cf0 */
  push32(0x115b00efu); f_115a5cf0();
  /* 115b00ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b00f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b00f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b00f7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115b00fa push eax */
  push32((uint32_t)(EAX));
  /* 115b00fb call 0x115a5cf0 */
  push32(0x115b0100u); f_115a5cf0();
  /* 115b0100 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0103 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0105 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0108 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 115b010b push edx */
  push32((uint32_t)(EDX));
  /* 115b010c call 0x115a5cf0 */
  push32(0x115b0111u); f_115a5cf0();
  /* 115b0111 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0114 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0116 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0119 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b011b push ecx */
  push32((uint32_t)(ECX));
  /* 115b011c call 0x115a5cf0 */
  push32(0x115b0121u); f_115a5cf0();
  /* 115b0121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0124 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0126 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0129 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 115b012c push eax */
  push32((uint32_t)(EAX));
  /* 115b012d call 0x115a5cf0 */
  push32(0x115b0132u); f_115a5cf0();
  /* 115b0132 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0135 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0137 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b013a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 115b013d push edx */
  push32((uint32_t)(EDX));
  /* 115b013e call 0x115a5cf0 */
  push32(0x115b0143u); f_115a5cf0();
  /* 115b0143 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0146 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0148 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b014b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 115b014e push ecx */
  push32((uint32_t)(ECX));
  /* 115b014f call 0x115a5cf0 */
  push32(0x115b0154u); f_115a5cf0();
  /* 115b0154 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0157 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0159 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b015c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 115b015f push eax */
  push32((uint32_t)(EAX));
  /* 115b0160 call 0x115a5cf0 */
  push32(0x115b0165u); f_115a5cf0();
  /* 115b0165 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0168 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b016a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b016d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 115b0170 push edx */
  push32((uint32_t)(EDX));
  /* 115b0171 call 0x115a5cf0 */
  push32(0x115b0176u); f_115a5cf0();
  /* 115b0176 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0179 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b017b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b017e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 115b0181 push ecx */
  push32((uint32_t)(ECX));
  /* 115b0182 call 0x115a5cf0 */
  push32(0x115b0187u); f_115a5cf0();
  /* 115b0187 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b018a push 2 */
  push32((uint32_t)(0x2u));
  /* 115b018c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b018f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 115b0192 push eax */
  push32((uint32_t)(EAX));
  /* 115b0193 call 0x115a5cf0 */
  push32(0x115b0198u); f_115a5cf0();
  /* 115b0198 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b019b push 2 */
  push32((uint32_t)(0x2u));
  /* 115b019d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b01a0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 115b01a3 push edx */
  push32((uint32_t)(EDX));
  /* 115b01a4 call 0x115a5cf0 */
  push32(0x115b01a9u); f_115a5cf0();
  /* 115b01a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b01ac push 2 */
  push32((uint32_t)(0x2u));
  /* 115b01ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b01b1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 115b01b4 push ecx */
  push32((uint32_t)(ECX));
  /* 115b01b5 call 0x115a5cf0 */
  push32(0x115b01bau); f_115a5cf0();
  /* 115b01ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b01bd push 2 */
  push32((uint32_t)(0x2u));
  /* 115b01bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b01c2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 115b01c5 push eax */
  push32((uint32_t)(EAX));
  /* 115b01c6 call 0x115a5cf0 */
  push32(0x115b01cbu); f_115a5cf0();
  /* 115b01cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b01ce push 2 */
  push32((uint32_t)(0x2u));
  /* 115b01d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b01d3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 115b01d6 push edx */
  push32((uint32_t)(EDX));
  /* 115b01d7 call 0x115a5cf0 */
  push32(0x115b01dcu); f_115a5cf0();
  /* 115b01dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b01df push 2 */
  push32((uint32_t)(0x2u));
  /* 115b01e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b01e4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 115b01e7 push ecx */
  push32((uint32_t)(ECX));
  /* 115b01e8 call 0x115a5cf0 */
  push32(0x115b01edu); f_115a5cf0();
  /* 115b01ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b01f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b01f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b01f5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 115b01f8 push eax */
  push32((uint32_t)(EAX));
  /* 115b01f9 call 0x115a5cf0 */
  push32(0x115b01feu); f_115a5cf0();
  /* 115b01fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0201 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0203 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0206 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 115b0209 push edx */
  push32((uint32_t)(EDX));
  /* 115b020a call 0x115a5cf0 */
  push32(0x115b020fu); f_115a5cf0();
  /* 115b020f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0212 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0217 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 115b021a push ecx */
  push32((uint32_t)(ECX));
  /* 115b021b call 0x115a5cf0 */
  push32(0x115b0220u); f_115a5cf0();
  /* 115b0220 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0223 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0225 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0228 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 115b022b push eax */
  push32((uint32_t)(EAX));
  /* 115b022c call 0x115a5cf0 */
  push32(0x115b0231u); f_115a5cf0();
  /* 115b0231 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0234 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0236 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0239 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 115b023c push edx */
  push32((uint32_t)(EDX));
  /* 115b023d call 0x115a5cf0 */
  push32(0x115b0242u); f_115a5cf0();
  /* 115b0242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0245 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0247 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b024a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 115b024d push ecx */
  push32((uint32_t)(ECX));
  /* 115b024e call 0x115a5cf0 */
  push32(0x115b0253u); f_115a5cf0();
  /* 115b0253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0256 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0258 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b025b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 115b025e push eax */
  push32((uint32_t)(EAX));
  /* 115b025f call 0x115a5cf0 */
  push32(0x115b0264u); f_115a5cf0();
  /* 115b0264 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0267 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0269 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b026c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 115b026f push edx */
  push32((uint32_t)(EDX));
  /* 115b0270 call 0x115a5cf0 */
  push32(0x115b0275u); f_115a5cf0();
  /* 115b0275 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0278 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b027a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b027d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 115b0280 push ecx */
  push32((uint32_t)(ECX));
  /* 115b0281 call 0x115a5cf0 */
  push32(0x115b0286u); f_115a5cf0();
  /* 115b0286 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0289 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b028b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b028e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 115b0291 push eax */
  push32((uint32_t)(EAX));
  /* 115b0292 call 0x115a5cf0 */
  push32(0x115b0297u); f_115a5cf0();
  /* 115b0297 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b029a push 2 */
  push32((uint32_t)(0x2u));
  /* 115b029c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b029f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 115b02a2 push edx */
  push32((uint32_t)(EDX));
  /* 115b02a3 call 0x115a5cf0 */
  push32(0x115b02a8u); f_115a5cf0();
  /* 115b02a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b02ab push 2 */
  push32((uint32_t)(0x2u));
  /* 115b02ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b02b0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 115b02b3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b02b4 call 0x115a5cf0 */
  push32(0x115b02b9u); f_115a5cf0();
  /* 115b02b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b02bc push 2 */
  push32((uint32_t)(0x2u));
  /* 115b02be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b02c1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 115b02c4 push eax */
  push32((uint32_t)(EAX));
  /* 115b02c5 call 0x115a5cf0 */
  push32(0x115b02cau); f_115a5cf0();
  /* 115b02ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b02cd push 2 */
  push32((uint32_t)(0x2u));
  /* 115b02cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b02d2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 115b02d8 push edx */
  push32((uint32_t)(EDX));
  /* 115b02d9 call 0x115a5cf0 */
  push32(0x115b02deu); f_115a5cf0();
  /* 115b02de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b02e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b02e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b02e6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 115b02ec push ecx */
  push32((uint32_t)(ECX));
  /* 115b02ed call 0x115a5cf0 */
  push32(0x115b02f2u); f_115a5cf0();
  /* 115b02f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b02f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b02f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b02fa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 115b0300 push eax */
  push32((uint32_t)(EAX));
  /* 115b0301 call 0x115a5cf0 */
  push32(0x115b0306u); f_115a5cf0();
  /* 115b0306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0309 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b030b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b030e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 115b0314 push edx */
  push32((uint32_t)(EDX));
  /* 115b0315 call 0x115a5cf0 */
  push32(0x115b031au); f_115a5cf0();
  /* 115b031a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b031d push 2 */
  push32((uint32_t)(0x2u));
  /* 115b031f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0322 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 115b0328 push ecx */
  push32((uint32_t)(ECX));
  /* 115b0329 call 0x115a5cf0 */
  push32(0x115b032eu); f_115a5cf0();
  /* 115b032e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0331 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0333 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0336 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 115b033c push eax */
  push32((uint32_t)(EAX));
  /* 115b033d call 0x115a5cf0 */
  push32(0x115b0342u); f_115a5cf0();
  /* 115b0342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0345 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0347 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b034a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 115b0350 push edx */
  push32((uint32_t)(EDX));
  /* 115b0351 call 0x115a5cf0 */
  push32(0x115b0356u); f_115a5cf0();
  /* 115b0356 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0359 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b035b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b035e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 115b0364 push ecx */
  push32((uint32_t)(ECX));
  /* 115b0365 call 0x115a5cf0 */
  push32(0x115b036au); f_115a5cf0();
  /* 115b036a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b036d push 2 */
  push32((uint32_t)(0x2u));
  /* 115b036f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0372 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 115b0378 push eax */
  push32((uint32_t)(EAX));
  /* 115b0379 call 0x115a5cf0 */
  push32(0x115b037eu); f_115a5cf0();
  /* 115b037e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0381 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0383 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0386 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 115b038c push edx */
  push32((uint32_t)(EDX));
  /* 115b038d call 0x115a5cf0 */
  push32(0x115b0392u); f_115a5cf0();
  /* 115b0392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0395 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0397 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b039a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 115b03a0 push ecx */
  push32((uint32_t)(ECX));
  /* 115b03a1 call 0x115a5cf0 */
  push32(0x115b03a6u); f_115a5cf0();
  /* 115b03a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b03a9:;
  /* 115b03a9 pop ebp */
  EBP = (pop32());
  /* 115b03aa ret  */
  ESPCHK(0x115b00a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103b0 @ 0x115b03b0 (678 bytes, 180 insns) */
void f_115b03b0(void) {
  FTRACE(0x115b03b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b03b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b03b1 mov ebp, esp */
  EBP = (ESP);
  /* 115b03b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b03b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115b03bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b03bf mov ax, word ptr [0x115d1882] */
  AX = (r16((uint32_t)(0x115d1882)));
  /* 115b03c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b03c8 cmp dword ptr [0x115d1828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b03cf je 0x115b052a */
  if (C.zf) goto L_115b052a;
  /* 115b03d5 push 0x115d1850 */
  push32((uint32_t)(0x115d1850u));
  /* 115b03da push 0xe */
  push32((uint32_t)(0xeu));
  /* 115b03dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b03df push ecx */
  push32((uint32_t)(ECX));
  /* 115b03e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b03e2 call 0x115b3420 */
  push32(0x115b03e7u); f_115b3420();
  /* 115b03e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b03ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b03ed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 115b03ef mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115b03f2 push 0x115d1854 */
  push32((uint32_t)(0x115d1854u));
  /* 115b03f7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 115b03f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b03fc push eax */
  push32((uint32_t)(EAX));
  /* 115b03fd push 1 */
  push32((uint32_t)(0x1u));
  /* 115b03ff call 0x115b3420 */
  push32(0x115b0404u); f_115b3420();
  /* 115b0404 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0407 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b040a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b040c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b040f push 0x115d1858 */
  push32((uint32_t)(0x115d1858u));
  /* 115b0414 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 115b0416 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b0419 push edx */
  push32((uint32_t)(EDX));
  /* 115b041a push 1 */
  push32((uint32_t)(0x1u));
  /* 115b041c call 0x115b3420 */
  push32(0x115b0421u); f_115b3420();
  /* 115b0421 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0424 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b0427 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b0429 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b042c mov edx, dword ptr [0x115d1858] */
  EDX = (r32((uint32_t)(0x115d1858)));
  /* 115b0432 push edx */
  push32((uint32_t)(EDX));
  /* 115b0433 call 0x115b0660 */
  push32(0x115b0438u); f_115b0660();
  /* 115b0438 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b043b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b043f je 0x115b0499 */
  if (C.zf) goto L_115b0499;
  /* 115b0441 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0443 mov eax, dword ptr [0x115d1850] */
  EAX = (r32((uint32_t)(0x115d1850)));
  /* 115b0448 push eax */
  push32((uint32_t)(EAX));
  /* 115b0449 call 0x115a5cf0 */
  push32(0x115b044eu); f_115a5cf0();
  /* 115b044e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0451 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0453 mov ecx, dword ptr [0x115d1854] */
  ECX = (r32((uint32_t)(0x115d1854)));
  /* 115b0459 push ecx */
  push32((uint32_t)(ECX));
  /* 115b045a call 0x115a5cf0 */
  push32(0x115b045fu); f_115a5cf0();
  /* 115b045f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0462 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0464 mov edx, dword ptr [0x115d1858] */
  EDX = (r32((uint32_t)(0x115d1858)));
  /* 115b046a push edx */
  push32((uint32_t)(EDX));
  /* 115b046b call 0x115a5cf0 */
  push32(0x115b0470u); f_115a5cf0();
  /* 115b0470 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0473 mov dword ptr [0x115d1850], 0 */
  w32((uint32_t)(0x115d1850), (0x0u));
  /* 115b047d mov dword ptr [0x115d1854], 0 */
  w32((uint32_t)(0x115d1854), (0x0u));
  /* 115b0487 mov dword ptr [0x115d1858], 0 */
  w32((uint32_t)(0x115d1858), (0x0u));
  /* 115b0491 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b0494 jmp 0x115b0652 */
  goto L_115b0652;
L_115b0499:;
  /* 115b0499 mov eax, dword ptr [0x115d0d88] */
  EAX = (r32((uint32_t)(0x115d0d88)));
  /* 115b049e cmp dword ptr [eax], 0x115d0d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x115d0d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b04a4 je 0x115b04e0 */
  if (C.zf) goto L_115b04e0;
  /* 115b04a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b04a8 mov ecx, dword ptr [0x115d0d88] */
  ECX = (r32((uint32_t)(0x115d0d88)));
  /* 115b04ae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b04b0 push edx */
  push32((uint32_t)(EDX));
  /* 115b04b1 call 0x115a5cf0 */
  push32(0x115b04b6u); f_115a5cf0();
  /* 115b04b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b04b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b04bb mov eax, dword ptr [0x115d0d88] */
  EAX = (r32((uint32_t)(0x115d0d88)));
  /* 115b04c0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115b04c3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b04c4 call 0x115a5cf0 */
  push32(0x115b04c9u); f_115a5cf0();
  /* 115b04c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b04cc push 2 */
  push32((uint32_t)(0x2u));
  /* 115b04ce mov edx, dword ptr [0x115d0d88] */
  EDX = (r32((uint32_t)(0x115d0d88)));
  /* 115b04d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115b04d7 push eax */
  push32((uint32_t)(EAX));
  /* 115b04d8 call 0x115a5cf0 */
  push32(0x115b04ddu); f_115a5cf0();
  /* 115b04dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b04e0:;
  /* 115b04e0 mov ecx, dword ptr [0x115d0d88] */
  ECX = (r32((uint32_t)(0x115d0d88)));
  /* 115b04e6 mov edx, dword ptr [0x115d1850] */
  EDX = (r32((uint32_t)(0x115d1850)));
  /* 115b04ec mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 115b04ee mov eax, dword ptr [0x115d0d88] */
  EAX = (r32((uint32_t)(0x115d0d88)));
  /* 115b04f3 mov ecx, dword ptr [0x115d1854] */
  ECX = (r32((uint32_t)(0x115d1854)));
  /* 115b04f9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 115b04fc mov edx, dword ptr [0x115d0d88] */
  EDX = (r32((uint32_t)(0x115d0d88)));
  /* 115b0502 mov eax, dword ptr [0x115d1858] */
  EAX = (r32((uint32_t)(0x115d1858)));
  /* 115b0507 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 115b050a mov ecx, dword ptr [0x115d0d88] */
  ECX = (r32((uint32_t)(0x115d0d88)));
  /* 115b0510 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b0512 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b0514 mov byte ptr [0x115cfea8], al */
  w8((uint32_t)(0x115cfea8), (AL));
  /* 115b0519 mov dword ptr [0x115cfeac], 1 */
  w32((uint32_t)(0x115cfeac), (0x1u));
  /* 115b0523 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b0525 jmp 0x115b0652 */
  goto L_115b0652;
L_115b052a:;
  /* 115b052a push 2 */
  push32((uint32_t)(0x2u));
  /* 115b052c mov ecx, dword ptr [0x115d1850] */
  ECX = (r32((uint32_t)(0x115d1850)));
  /* 115b0532 push ecx */
  push32((uint32_t)(ECX));
  /* 115b0533 call 0x115a5cf0 */
  push32(0x115b0538u); f_115a5cf0();
  /* 115b0538 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b053b push 2 */
  push32((uint32_t)(0x2u));
  /* 115b053d mov edx, dword ptr [0x115d1854] */
  EDX = (r32((uint32_t)(0x115d1854)));
  /* 115b0543 push edx */
  push32((uint32_t)(EDX));
  /* 115b0544 call 0x115a5cf0 */
  push32(0x115b0549u); f_115a5cf0();
  /* 115b0549 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b054c push 2 */
  push32((uint32_t)(0x2u));
  /* 115b054e mov eax, dword ptr [0x115d1858] */
  EAX = (r32((uint32_t)(0x115d1858)));
  /* 115b0553 push eax */
  push32((uint32_t)(EAX));
  /* 115b0554 call 0x115a5cf0 */
  push32(0x115b0559u); f_115a5cf0();
  /* 115b0559 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b055c mov dword ptr [0x115d1850], 0 */
  w32((uint32_t)(0x115d1850), (0x0u));
  /* 115b0566 mov dword ptr [0x115d1854], 0 */
  w32((uint32_t)(0x115d1854), (0x0u));
  /* 115b0570 mov dword ptr [0x115d1858], 0 */
  w32((uint32_t)(0x115d1858), (0x0u));
  /* 115b057a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 115b057f push 0x115cd2c4 */
  push32((uint32_t)(0x115cd2c4u));
  /* 115b0584 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0586 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0588 call 0x115a5260 */
  push32(0x115b058du); f_115a5260();
  /* 115b058d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0590 mov ecx, dword ptr [0x115d0d88] */
  ECX = (r32((uint32_t)(0x115d0d88)));
  /* 115b0596 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115b0598 mov edx, dword ptr [0x115d0d88] */
  EDX = (r32((uint32_t)(0x115d0d88)));
  /* 115b059e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b05a1 jne 0x115b05ab */
  if (!C.zf) goto L_115b05ab;
  /* 115b05a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b05a6 jmp 0x115b0652 */
  goto L_115b0652;
L_115b05ab:;
  /* 115b05ab push 0x115cd294 */
  push32((uint32_t)(0x115cd294u));
  /* 115b05b0 mov eax, dword ptr [0x115d0d88] */
  EAX = (r32((uint32_t)(0x115d0d88)));
  /* 115b05b5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115b05b7 push ecx */
  push32((uint32_t)(ECX));
  /* 115b05b8 call 0x115a8210 */
  push32(0x115b05bdu); f_115a8210();
  /* 115b05bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b05c0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 115b05c5 push 0x115cd2c4 */
  push32((uint32_t)(0x115cd2c4u));
  /* 115b05ca push 2 */
  push32((uint32_t)(0x2u));
  /* 115b05cc push 2 */
  push32((uint32_t)(0x2u));
  /* 115b05ce call 0x115a5260 */
  push32(0x115b05d3u); f_115a5260();
  /* 115b05d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b05d6 mov edx, dword ptr [0x115d0d88] */
  EDX = (r32((uint32_t)(0x115d0d88)));
  /* 115b05dc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 115b05df mov eax, dword ptr [0x115d0d88] */
  EAX = (r32((uint32_t)(0x115d0d88)));
  /* 115b05e4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b05e8 jne 0x115b05ef */
  if (!C.zf) goto L_115b05ef;
  /* 115b05ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b05ed jmp 0x115b0652 */
  goto L_115b0652;
L_115b05ef:;
  /* 115b05ef mov ecx, dword ptr [0x115d0d88] */
  ECX = (r32((uint32_t)(0x115d0d88)));
  /* 115b05f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115b05f8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 115b05fb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 115b0600 push 0x115cd2c4 */
  push32((uint32_t)(0x115cd2c4u));
  /* 115b0605 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0607 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0609 call 0x115a5260 */
  push32(0x115b060eu); f_115a5260();
  /* 115b060e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0611 mov ecx, dword ptr [0x115d0d88] */
  ECX = (r32((uint32_t)(0x115d0d88)));
  /* 115b0617 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 115b061a mov edx, dword ptr [0x115d0d88] */
  EDX = (r32((uint32_t)(0x115d0d88)));
  /* 115b0620 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0624 jne 0x115b062b */
  if (!C.zf) goto L_115b062b;
  /* 115b0626 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b0629 jmp 0x115b0652 */
  goto L_115b0652;
L_115b062b:;
  /* 115b062b mov eax, dword ptr [0x115d0d88] */
  EAX = (r32((uint32_t)(0x115d0d88)));
  /* 115b0630 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115b0633 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 115b0636 mov edx, dword ptr [0x115d0d88] */
  EDX = (r32((uint32_t)(0x115d0d88)));
  /* 115b063c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b063e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115b0640 mov byte ptr [0x115cfea8], cl */
  w8((uint32_t)(0x115cfea8), (CL));
  /* 115b0646 mov dword ptr [0x115cfeac], 1 */
  w32((uint32_t)(0x115cfeac), (0x1u));
  /* 115b0650 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115b0652:;
  /* 115b0652 mov esp, ebp */
  ESP = (EBP);
  /* 115b0654 pop ebp */
  EBP = (pop32());
  /* 115b0655 ret  */
  ESPCHK(0x115b03b0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x115b0660 (125 bytes, 49 insns) */
void f_115b0660(void) {
  FTRACE(0x115b0660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b0660 push ebp */
  push32((uint32_t)(EBP));
  /* 115b0661 mov ebp, esp */
  EBP = (ESP);
  /* 115b0663 push ecx */
  push32((uint32_t)(ECX));
L_115b0664:;
  /* 115b0664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0667 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b066a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b066c je 0x115b06d9 */
  if (C.zf) goto L_115b06d9;
  /* 115b066e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0671 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115b0674 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0677 jl 0x115b069d */
  if ((C.sf!=C.of)) goto L_115b069d;
  /* 115b0679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b067c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115b067f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0682 jg 0x115b069d */
  if ((!C.zf&&C.sf==C.of)) goto L_115b069d;
  /* 115b0684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0687 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b068a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b068d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0690 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 115b0692 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0695 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0698 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b069b jmp 0x115b06d7 */
  goto L_115b06d7;
L_115b069d:;
  /* 115b069d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b06a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115b06a3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b06a6 jne 0x115b06ce */
  if (!C.zf) goto L_115b06ce;
  /* 115b06a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b06ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115b06ae:;
  /* 115b06ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b06b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b06b4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 115b06b7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 115b06b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b06bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b06bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115b06c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b06c5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115b06c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b06ca jne 0x115b06ae */
  if (!C.zf) goto L_115b06ae;
  /* 115b06cc jmp 0x115b06d7 */
  goto L_115b06d7;
L_115b06ce:;
  /* 115b06ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b06d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b06d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_115b06d7:;
  /* 115b06d7 jmp 0x115b0664 */
  goto L_115b0664;
L_115b06d9:;
  /* 115b06d9 mov esp, ebp */
  ESP = (EBP);
  /* 115b06db pop ebp */
  EBP = (pop32());
  /* 115b06dc ret  */
  ESPCHK(0x115b0660u, _esp0);
  ESP += 4; return;
}

/* FUN_100106e0 @ 0x115b06e0 (304 bytes, 85 insns) */
void f_115b06e0(void) {
  FTRACE(0x115b06e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b06e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b06e1 mov ebp, esp */
  EBP = (ESP);
  /* 115b06e3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b06e4 cmp dword ptr [0x115d1824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b06eb je 0x115b07ac */
  if (C.zf) goto L_115b07ac;
  /* 115b06f1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 115b06f3 push 0x115cd2d0 */
  push32((uint32_t)(0x115cd2d0u));
  /* 115b06f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b06fa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 115b06fc push 1 */
  push32((uint32_t)(0x1u));
  /* 115b06fe call 0x115a5670 */
  push32(0x115b0703u); f_115a5670();
  /* 115b0703 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0706 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b0709 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b070d jne 0x115b0719 */
  if (!C.zf) goto L_115b0719;
  /* 115b070f mov eax, 1 */
  EAX = (0x1u);
  /* 115b0714 jmp 0x115b080c */
  goto L_115b080c;
L_115b0719:;
  /* 115b0719 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b071c push eax */
  push32((uint32_t)(EAX));
  /* 115b071d call 0x115b0810 */
  push32(0x115b0722u); f_115b0810();
  /* 115b0722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0725 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b0727 je 0x115b074d */
  if (C.zf) goto L_115b074d;
  /* 115b0729 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b072c push ecx */
  push32((uint32_t)(ECX));
  /* 115b072d call 0x115b0aa0 */
  push32(0x115b0732u); f_115b0aa0();
  /* 115b0732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0735 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0737 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b073a push edx */
  push32((uint32_t)(EDX));
  /* 115b073b call 0x115a5cf0 */
  push32(0x115b0740u); f_115a5cf0();
  /* 115b0740 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0743 mov eax, 1 */
  EAX = (0x1u);
  /* 115b0748 jmp 0x115b080c */
  goto L_115b080c;
L_115b074d:;
  /* 115b074d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b0750 mov ecx, dword ptr [0x115d0d88] */
  ECX = (r32((uint32_t)(0x115d0d88)));
  /* 115b0756 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b0758 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115b075a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b075d mov ecx, dword ptr [0x115d0d88] */
  ECX = (r32((uint32_t)(0x115d0d88)));
  /* 115b0763 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115b0766 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 115b0769 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b076c mov ecx, dword ptr [0x115d0d88] */
  ECX = (r32((uint32_t)(0x115d0d88)));
  /* 115b0772 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115b0775 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 115b0778 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b077b mov dword ptr [0x115d0d88], eax */
  w32((uint32_t)(0x115d0d88), (EAX));
  /* 115b0780 mov ecx, dword ptr [0x115d185c] */
  ECX = (r32((uint32_t)(0x115d185c)));
  /* 115b0786 push ecx */
  push32((uint32_t)(ECX));
  /* 115b0787 call 0x115b0aa0 */
  push32(0x115b078cu); f_115b0aa0();
  /* 115b078c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b078f push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0791 mov edx, dword ptr [0x115d185c] */
  EDX = (r32((uint32_t)(0x115d185c)));
  /* 115b0797 push edx */
  push32((uint32_t)(EDX));
  /* 115b0798 call 0x115a5cf0 */
  push32(0x115b079du); f_115a5cf0();
  /* 115b079d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b07a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b07a3 mov dword ptr [0x115d185c], eax */
  w32((uint32_t)(0x115d185c), (EAX));
  /* 115b07a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b07aa jmp 0x115b080c */
  goto L_115b080c;
L_115b07ac:;
  /* 115b07ac mov ecx, dword ptr [0x115d0d88] */
  ECX = (r32((uint32_t)(0x115d0d88)));
  /* 115b07b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b07b4 mov dword ptr [0x115d0d58], edx */
  w32((uint32_t)(0x115d0d58), (EDX));
  /* 115b07ba mov eax, dword ptr [0x115d0d88] */
  EAX = (r32((uint32_t)(0x115d0d88)));
  /* 115b07bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115b07c2 mov dword ptr [0x115d0d5c], ecx */
  w32((uint32_t)(0x115d0d5c), (ECX));
  /* 115b07c8 mov edx, dword ptr [0x115d0d88] */
  EDX = (r32((uint32_t)(0x115d0d88)));
  /* 115b07ce mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115b07d1 mov dword ptr [0x115d0d60], eax */
  w32((uint32_t)(0x115d0d60), (EAX));
  /* 115b07d6 mov dword ptr [0x115d0d88], 0x115d0d58 */
  w32((uint32_t)(0x115d0d88), (0x115d0d58u));
  /* 115b07e0 mov ecx, dword ptr [0x115d185c] */
  ECX = (r32((uint32_t)(0x115d185c)));
  /* 115b07e6 push ecx */
  push32((uint32_t)(ECX));
  /* 115b07e7 call 0x115b0aa0 */
  push32(0x115b07ecu); f_115b0aa0();
  /* 115b07ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b07ef push 2 */
  push32((uint32_t)(0x2u));
  /* 115b07f1 mov edx, dword ptr [0x115d185c] */
  EDX = (r32((uint32_t)(0x115d185c)));
  /* 115b07f7 push edx */
  push32((uint32_t)(EDX));
  /* 115b07f8 call 0x115a5cf0 */
  push32(0x115b07fdu); f_115a5cf0();
  /* 115b07fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0800 mov dword ptr [0x115d185c], 0 */
  w32((uint32_t)(0x115d185c), (0x0u));
  /* 115b080a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115b080c:;
  /* 115b080c mov esp, ebp */
  ESP = (EBP);
  /* 115b080e pop ebp */
  EBP = (pop32());
  /* 115b080f ret  */
  ESPCHK(0x115b06e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010810 @ 0x115b0810 (525 bytes, 200 insns) */
void f_115b0810(void) {
  FTRACE(0x115b0810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b0810 push ebp */
  push32((uint32_t)(EBP));
  /* 115b0811 mov ebp, esp */
  EBP = (ESP);
  /* 115b0813 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b0816 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115b081d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b081f mov ax, word ptr [0x115d187c] */
  AX = (r16((uint32_t)(0x115d187c)));
  /* 115b0825 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b0828 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b082c jne 0x115b0836 */
  if (!C.zf) goto L_115b0836;
  /* 115b082e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b0831 jmp 0x115b0a19 */
  goto L_115b0a19;
L_115b0836:;
  /* 115b0836 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0839 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b083c push ecx */
  push32((uint32_t)(ECX));
  /* 115b083d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 115b083f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b0842 push edx */
  push32((uint32_t)(EDX));
  /* 115b0843 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b0845 call 0x115b3420 */
  push32(0x115b084au); f_115b3420();
  /* 115b084a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b084d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b0850 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b0852 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b0855 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0858 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b085b push edx */
  push32((uint32_t)(EDX));
  /* 115b085c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115b085e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b0861 push eax */
  push32((uint32_t)(EAX));
  /* 115b0862 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b0864 call 0x115b3420 */
  push32(0x115b0869u); f_115b3420();
  /* 115b0869 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b086c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b086f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b0871 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b0874 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0877 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b087a push edx */
  push32((uint32_t)(EDX));
  /* 115b087b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 115b087d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b0880 push eax */
  push32((uint32_t)(EAX));
  /* 115b0881 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b0883 call 0x115b3420 */
  push32(0x115b0888u); f_115b3420();
  /* 115b0888 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b088b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b088e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b0890 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b0893 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0896 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0899 push edx */
  push32((uint32_t)(EDX));
  /* 115b089a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 115b089c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b089f push eax */
  push32((uint32_t)(EAX));
  /* 115b08a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b08a2 call 0x115b3420 */
  push32(0x115b08a7u); f_115b3420();
  /* 115b08a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b08aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b08ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b08af mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b08b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b08b5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b08b8 push edx */
  push32((uint32_t)(EDX));
  /* 115b08b9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 115b08bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b08be push eax */
  push32((uint32_t)(EAX));
  /* 115b08bf push 1 */
  push32((uint32_t)(0x1u));
  /* 115b08c1 call 0x115b3420 */
  push32(0x115b08c6u); f_115b3420();
  /* 115b08c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b08c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b08cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b08ce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b08d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b08d4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 115b08d7 push eax */
  push32((uint32_t)(EAX));
  /* 115b08d8 call 0x115b0a20 */
  push32(0x115b08ddu); f_115b0a20();
  /* 115b08dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b08e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b08e3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b08e6 push ecx */
  push32((uint32_t)(ECX));
  /* 115b08e7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 115b08e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b08ec push edx */
  push32((uint32_t)(EDX));
  /* 115b08ed push 1 */
  push32((uint32_t)(0x1u));
  /* 115b08ef call 0x115b3420 */
  push32(0x115b08f4u); f_115b3420();
  /* 115b08f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b08f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b08fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b08fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b08ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0902 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0905 push edx */
  push32((uint32_t)(EDX));
  /* 115b0906 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 115b0908 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b090b push eax */
  push32((uint32_t)(EAX));
  /* 115b090c push 1 */
  push32((uint32_t)(0x1u));
  /* 115b090e call 0x115b3420 */
  push32(0x115b0913u); f_115b3420();
  /* 115b0913 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0916 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b0919 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b091b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b091e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0921 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0924 push edx */
  push32((uint32_t)(EDX));
  /* 115b0925 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 115b0927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b092a push eax */
  push32((uint32_t)(EAX));
  /* 115b092b push 0 */
  push32((uint32_t)(0x0u));
  /* 115b092d call 0x115b3420 */
  push32(0x115b0932u); f_115b3420();
  /* 115b0932 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0935 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b0938 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b093a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b093d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0940 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0943 push edx */
  push32((uint32_t)(EDX));
  /* 115b0944 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115b0946 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b0949 push eax */
  push32((uint32_t)(EAX));
  /* 115b094a push 0 */
  push32((uint32_t)(0x0u));
  /* 115b094c call 0x115b3420 */
  push32(0x115b0951u); f_115b3420();
  /* 115b0951 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0954 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b0957 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b0959 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b095c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b095f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0962 push edx */
  push32((uint32_t)(EDX));
  /* 115b0963 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 115b0965 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b0968 push eax */
  push32((uint32_t)(EAX));
  /* 115b0969 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b096b call 0x115b3420 */
  push32(0x115b0970u); f_115b3420();
  /* 115b0970 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0973 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b0976 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b0978 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b097b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b097e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0981 push edx */
  push32((uint32_t)(EDX));
  /* 115b0982 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 115b0984 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b0987 push eax */
  push32((uint32_t)(EAX));
  /* 115b0988 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b098a call 0x115b3420 */
  push32(0x115b098fu); f_115b3420();
  /* 115b098f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0992 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b0995 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b0997 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b099a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b099d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b09a0 push edx */
  push32((uint32_t)(EDX));
  /* 115b09a1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 115b09a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b09a6 push eax */
  push32((uint32_t)(EAX));
  /* 115b09a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b09a9 call 0x115b3420 */
  push32(0x115b09aeu); f_115b3420();
  /* 115b09ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b09b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b09b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b09b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b09b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b09bc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b09bf push edx */
  push32((uint32_t)(EDX));
  /* 115b09c0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 115b09c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b09c5 push eax */
  push32((uint32_t)(EAX));
  /* 115b09c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b09c8 call 0x115b3420 */
  push32(0x115b09cdu); f_115b3420();
  /* 115b09cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b09d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b09d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b09d5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b09d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b09db add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b09de push edx */
  push32((uint32_t)(EDX));
  /* 115b09df push 0x52 */
  push32((uint32_t)(0x52u));
  /* 115b09e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b09e4 push eax */
  push32((uint32_t)(EAX));
  /* 115b09e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b09e7 call 0x115b3420 */
  push32(0x115b09ecu); f_115b3420();
  /* 115b09ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b09ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b09f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b09f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b09f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b09fa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b09fd push edx */
  push32((uint32_t)(EDX));
  /* 115b09fe push 0x53 */
  push32((uint32_t)(0x53u));
  /* 115b0a00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b0a03 push eax */
  push32((uint32_t)(EAX));
  /* 115b0a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b0a06 call 0x115b3420 */
  push32(0x115b0a0bu); f_115b3420();
  /* 115b0a0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0a0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b0a11 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115b0a13 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b0a16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_115b0a19:;
  /* 115b0a19 mov esp, ebp */
  ESP = (EBP);
  /* 115b0a1b pop ebp */
  EBP = (pop32());
  /* 115b0a1c ret  */
  ESPCHK(0x115b0810u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x115b0a20 (125 bytes, 49 insns) */
void f_115b0a20(void) {
  FTRACE(0x115b0a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b0a20 push ebp */
  push32((uint32_t)(EBP));
  /* 115b0a21 mov ebp, esp */
  EBP = (ESP);
  /* 115b0a23 push ecx */
  push32((uint32_t)(ECX));
L_115b0a24:;
  /* 115b0a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0a27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b0a2a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b0a2c je 0x115b0a99 */
  if (C.zf) goto L_115b0a99;
  /* 115b0a2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0a31 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115b0a34 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0a37 jl 0x115b0a5d */
  if ((C.sf!=C.of)) goto L_115b0a5d;
  /* 115b0a39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0a3c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115b0a3f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0a42 jg 0x115b0a5d */
  if ((!C.zf&&C.sf==C.of)) goto L_115b0a5d;
  /* 115b0a44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0a47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b0a4a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b0a4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0a50 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 115b0a52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0a55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0a58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b0a5b jmp 0x115b0a97 */
  goto L_115b0a97;
L_115b0a5d:;
  /* 115b0a5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0a60 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115b0a63 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0a66 jne 0x115b0a8e */
  if (!C.zf) goto L_115b0a8e;
  /* 115b0a68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0a6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115b0a6e:;
  /* 115b0a6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b0a71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b0a74 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 115b0a77 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 115b0a79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b0a7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0a7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115b0a82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b0a85 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115b0a88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b0a8a jne 0x115b0a6e */
  if (!C.zf) goto L_115b0a6e;
  /* 115b0a8c jmp 0x115b0a97 */
  goto L_115b0a97;
L_115b0a8e:;
  /* 115b0a8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0a91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0a94 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_115b0a97:;
  /* 115b0a97 jmp 0x115b0a24 */
  goto L_115b0a24;
L_115b0a99:;
  /* 115b0a99 mov esp, ebp */
  ESP = (EBP);
  /* 115b0a9b pop ebp */
  EBP = (pop32());
  /* 115b0a9c ret  */
  ESPCHK(0x115b0a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010aa0 @ 0x115b0aa0 (147 bytes, 52 insns) */
void f_115b0aa0(void) {
  FTRACE(0x115b0aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b0aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b0aa1 mov ebp, esp */
  EBP = (ESP);
  /* 115b0aa3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0aa7 jne 0x115b0aae */
  if (!C.zf) goto L_115b0aae;
  /* 115b0aa9 jmp 0x115b0b31 */
  goto L_115b0b31;
L_115b0aae:;
  /* 115b0aae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0ab1 cmp dword ptr [eax + 0xc], 0x115d18b8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x115d18b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0ab8 je 0x115b0b31 */
  if (C.zf) goto L_115b0b31;
  /* 115b0aba push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0abc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0abf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115b0ac2 push edx */
  push32((uint32_t)(EDX));
  /* 115b0ac3 call 0x115a5cf0 */
  push32(0x115b0ac8u); f_115a5cf0();
  /* 115b0ac8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0acb push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0acd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0ad0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115b0ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b0ad4 call 0x115a5cf0 */
  push32(0x115b0ad9u); f_115a5cf0();
  /* 115b0ad9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0adc push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0ade mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0ae1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115b0ae4 push eax */
  push32((uint32_t)(EAX));
  /* 115b0ae5 call 0x115a5cf0 */
  push32(0x115b0aeau); f_115a5cf0();
  /* 115b0aea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0aed push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0aef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0af2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 115b0af5 push edx */
  push32((uint32_t)(EDX));
  /* 115b0af6 call 0x115a5cf0 */
  push32(0x115b0afbu); f_115a5cf0();
  /* 115b0afb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0afe push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0b00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0b03 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 115b0b06 push ecx */
  push32((uint32_t)(ECX));
  /* 115b0b07 call 0x115a5cf0 */
  push32(0x115b0b0cu); f_115a5cf0();
  /* 115b0b0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0b0f push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0b11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0b14 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 115b0b17 push eax */
  push32((uint32_t)(EAX));
  /* 115b0b18 call 0x115a5cf0 */
  push32(0x115b0b1du); f_115a5cf0();
  /* 115b0b1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0b20 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0b22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0b25 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 115b0b28 push edx */
  push32((uint32_t)(EDX));
  /* 115b0b29 call 0x115a5cf0 */
  push32(0x115b0b2eu); f_115a5cf0();
  /* 115b0b2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b0b31:;
  /* 115b0b31 pop ebp */
  EBP = (pop32());
  /* 115b0b32 ret  */
  ESPCHK(0x115b0aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b40 @ 0x115b0b40 (928 bytes, 284 insns) */
void f_115b0b40(void) {
  FTRACE(0x115b0b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b0b40 push ebp */
  push32((uint32_t)(EBP));
  /* 115b0b41 mov ebp, esp */
  EBP = (ESP);
  /* 115b0b43 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b0b46 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 115b0b4d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 115b0b54 cmp dword ptr [0x115d1820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0b5b je 0x115b0e91 */
  if (C.zf) goto L_115b0e91;
  /* 115b0b61 cmp dword ptr [0x115d1830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0b68 jne 0x115b0b90 */
  if (!C.zf) goto L_115b0b90;
  /* 115b0b6a push 0x115d1830 */
  push32((uint32_t)(0x115d1830u));
  /* 115b0b6f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 115b0b74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b0b76 mov ax, word ptr [0x115d1874] */
  AX = (r16((uint32_t)(0x115d1874)));
  /* 115b0b7c push eax */
  push32((uint32_t)(EAX));
  /* 115b0b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 115b0b7f call 0x115b3420 */
  push32(0x115b0b84u); f_115b3420();
  /* 115b0b84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0b87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b0b89 je 0x115b0b90 */
  if (C.zf) goto L_115b0b90;
  /* 115b0b8b jmp 0x115b0e52 */
  goto L_115b0e52;
L_115b0b90:;
  /* 115b0b90 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 115b0b92 push 0x115cd2dc */
  push32((uint32_t)(0x115cd2dcu));
  /* 115b0b97 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0b99 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 115b0b9e call 0x115a5260 */
  push32(0x115b0ba3u); f_115a5260();
  /* 115b0ba3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0ba6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 115b0ba9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 115b0bab push 0x115cd2dc */
  push32((uint32_t)(0x115cd2dcu));
  /* 115b0bb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0bb2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 115b0bb7 call 0x115a5260 */
  push32(0x115b0bbcu); f_115a5260();
  /* 115b0bbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0bbf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 115b0bc2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 115b0bc4 push 0x115cd2dc */
  push32((uint32_t)(0x115cd2dcu));
  /* 115b0bc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0bcb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 115b0bd0 call 0x115a5260 */
  push32(0x115b0bd5u); f_115a5260();
  /* 115b0bd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0bd8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 115b0bdb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 115b0bdd push 0x115cd2dc */
  push32((uint32_t)(0x115cd2dcu));
  /* 115b0be2 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0be4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 115b0be9 call 0x115a5260 */
  push32(0x115b0beeu); f_115a5260();
  /* 115b0bee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0bf1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 115b0bf4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0bf8 je 0x115b0c0c */
  if (C.zf) goto L_115b0c0c;
  /* 115b0bfa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0bfe je 0x115b0c0c */
  if (C.zf) goto L_115b0c0c;
  /* 115b0c00 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0c04 je 0x115b0c0c */
  if (C.zf) goto L_115b0c0c;
  /* 115b0c06 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0c0a jne 0x115b0c11 */
  if (!C.zf) goto L_115b0c11;
L_115b0c0c:;
  /* 115b0c0c jmp 0x115b0e52 */
  goto L_115b0e52;
L_115b0c11:;
  /* 115b0c11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115b0c14 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 115b0c17 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 115b0c1e jmp 0x115b0c29 */
  goto L_115b0c29;
L_115b0c20:;
  /* 115b0c20 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b0c23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0c26 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_115b0c29:;
  /* 115b0c29 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0c30 jge 0x115b0c45 */
  if ((C.sf==C.of)) goto L_115b0c45;
  /* 115b0c32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b0c35 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 115b0c38 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 115b0c3a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b0c3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0c40 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 115b0c43 jmp 0x115b0c20 */
  goto L_115b0c20;
L_115b0c45:;
  /* 115b0c45 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 115b0c48 push eax */
  push32((uint32_t)(EAX));
  /* 115b0c49 mov ecx, dword ptr [0x115d1830] */
  ECX = (r32((uint32_t)(0x115d1830)));
  /* 115b0c4f push ecx */
  push32((uint32_t)(ECX));
  /* 115b0c50 call dword ptr [0x115d4330] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4330))), 0x115b0c56u);
  /* 115b0c56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b0c58 jne 0x115b0c5f */
  if (!C.zf) goto L_115b0c5f;
  /* 115b0c5a jmp 0x115b0e52 */
  goto L_115b0e52;
L_115b0c5f:;
  /* 115b0c5f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0c63 jbe 0x115b0c6a */
  if ((C.cf||C.zf)) goto L_115b0c6a;
  /* 115b0c65 jmp 0x115b0e52 */
  goto L_115b0e52;
L_115b0c6a:;
  /* 115b0c6a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b0c6d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115b0c73 mov dword ptr [0x115cfea4], edx */
  w32((uint32_t)(0x115cfea4), (EDX));
  /* 115b0c79 cmp dword ptr [0x115cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0c80 jle 0x115b0cd9 */
  if ((C.zf||C.sf!=C.of)) goto L_115b0cd9;
  /* 115b0c82 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 115b0c85 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115b0c88 jmp 0x115b0c93 */
  goto L_115b0c93;
L_115b0c8a:;
  /* 115b0c8a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b0c8d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0c90 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_115b0c93:;
  /* 115b0c93 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b0c96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b0c98 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b0c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b0c9c je 0x115b0cd9 */
  if (C.zf) goto L_115b0cd9;
  /* 115b0c9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b0ca1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b0ca3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 115b0ca6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b0ca8 je 0x115b0cd9 */
  if (C.zf) goto L_115b0cd9;
  /* 115b0caa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b0cad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b0caf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115b0cb1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 115b0cb4 jmp 0x115b0cbf */
  goto L_115b0cbf;
L_115b0cb6:;
  /* 115b0cb6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b0cb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0cbc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_115b0cbf:;
  /* 115b0cbf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b0cc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b0cc4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 115b0cc7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0cca jg 0x115b0cd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_115b0cd7;
  /* 115b0ccc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115b0ccf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0cd2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 115b0cd5 jmp 0x115b0cb6 */
  goto L_115b0cb6;
L_115b0cd7:;
  /* 115b0cd7 jmp 0x115b0c8a */
  goto L_115b0c8a;
L_115b0cd9:;
  /* 115b0cd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b0cdb push 0 */
  push32((uint32_t)(0x0u));
  /* 115b0cdd push 0 */
  push32((uint32_t)(0x0u));
  /* 115b0cdf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115b0ce2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0ce5 push eax */
  push32((uint32_t)(EAX));
  /* 115b0ce6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 115b0ceb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115b0cee push ecx */
  push32((uint32_t)(ECX));
  /* 115b0cef push 1 */
  push32((uint32_t)(0x1u));
  /* 115b0cf1 call 0x115ad490 */
  push32(0x115b0cf6u); f_115ad490();
  /* 115b0cf6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b0cfb jne 0x115b0d02 */
  if (!C.zf) goto L_115b0d02;
  /* 115b0cfd jmp 0x115b0e52 */
  goto L_115b0e52;
L_115b0d02:;
  /* 115b0d02 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115b0d05 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 115b0d0a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115b0d0d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115b0d10 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 115b0d17 jmp 0x115b0d22 */
  goto L_115b0d22;
L_115b0d19:;
  /* 115b0d19 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b0d1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0d1f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_115b0d22:;
  /* 115b0d22 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0d29 jge 0x115b0d40 */
  if ((C.sf==C.of)) goto L_115b0d40;
  /* 115b0d2b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115b0d2e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 115b0d32 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 115b0d35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115b0d38 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0d3b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 115b0d3e jmp 0x115b0d19 */
  goto L_115b0d19;
L_115b0d40:;
  /* 115b0d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b0d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b0d44 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115b0d47 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0d4a push edx */
  push32((uint32_t)(EDX));
  /* 115b0d4b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 115b0d50 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115b0d53 push eax */
  push32((uint32_t)(EAX));
  /* 115b0d54 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b0d56 call 0x115b36c0 */
  push32(0x115b0d5bu); f_115b36c0();
  /* 115b0d5b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0d5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b0d60 jne 0x115b0d67 */
  if (!C.zf) goto L_115b0d67;
  /* 115b0d62 jmp 0x115b0e52 */
  goto L_115b0e52;
L_115b0d67:;
  /* 115b0d67 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115b0d6a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 115b0d6f cmp dword ptr [0x115cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0d76 jle 0x115b0dd3 */
  if ((C.zf||C.sf!=C.of)) goto L_115b0dd3;
  /* 115b0d78 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 115b0d7b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 115b0d7e jmp 0x115b0d89 */
  goto L_115b0d89;
L_115b0d80:;
  /* 115b0d80 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b0d83 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0d86 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_115b0d89:;
  /* 115b0d89 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b0d8c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115b0d8e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115b0d90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b0d92 je 0x115b0dd3 */
  if (C.zf) goto L_115b0dd3;
  /* 115b0d94 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b0d97 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b0d99 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 115b0d9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b0d9e je 0x115b0dd3 */
  if (C.zf) goto L_115b0dd3;
  /* 115b0da0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b0da3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b0da5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b0da7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115b0daa jmp 0x115b0db5 */
  goto L_115b0db5;
L_115b0dac:;
  /* 115b0dac mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b0daf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0db2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_115b0db5:;
  /* 115b0db5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b0db8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b0dba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 115b0dbd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0dc0 jg 0x115b0dd1 */
  if ((!C.zf&&C.sf==C.of)) goto L_115b0dd1;
  /* 115b0dc2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115b0dc5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115b0dc8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 115b0dcf jmp 0x115b0dac */
  goto L_115b0dac;
L_115b0dd1:;
  /* 115b0dd1 jmp 0x115b0d80 */
  goto L_115b0d80;
L_115b0dd3:;
  /* 115b0dd3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115b0dd6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0dd9 mov dword ptr [0x115cfc98], eax */
  w32((uint32_t)(0x115cfc98), (EAX));
  /* 115b0dde mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115b0de1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0de4 mov dword ptr [0x115cfc9c], ecx */
  w32((uint32_t)(0x115cfc9c), (ECX));
  /* 115b0dea cmp dword ptr [0x115d1860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0df1 je 0x115b0e04 */
  if (C.zf) goto L_115b0e04;
  /* 115b0df3 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0df5 mov edx, dword ptr [0x115d1860] */
  EDX = (r32((uint32_t)(0x115d1860)));
  /* 115b0dfb push edx */
  push32((uint32_t)(EDX));
  /* 115b0dfc call 0x115a5cf0 */
  push32(0x115b0e01u); f_115a5cf0();
  /* 115b0e01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b0e04:;
  /* 115b0e04 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115b0e07 mov dword ptr [0x115d1860], eax */
  w32((uint32_t)(0x115d1860), (EAX));
  /* 115b0e0c cmp dword ptr [0x115d1864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b0e13 je 0x115b0e26 */
  if (C.zf) goto L_115b0e26;
  /* 115b0e15 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0e17 mov ecx, dword ptr [0x115d1864] */
  ECX = (r32((uint32_t)(0x115d1864)));
  /* 115b0e1d push ecx */
  push32((uint32_t)(ECX));
  /* 115b0e1e call 0x115a5cf0 */
  push32(0x115b0e23u); f_115a5cf0();
  /* 115b0e23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b0e26:;
  /* 115b0e26 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115b0e29 mov dword ptr [0x115d1864], edx */
  w32((uint32_t)(0x115d1864), (EDX));
  /* 115b0e2f push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0e31 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115b0e34 push eax */
  push32((uint32_t)(EAX));
  /* 115b0e35 call 0x115a5cf0 */
  push32(0x115b0e3au); f_115a5cf0();
  /* 115b0e3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0e3d push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0e3f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115b0e42 push ecx */
  push32((uint32_t)(ECX));
  /* 115b0e43 call 0x115a5cf0 */
  push32(0x115b0e48u); f_115a5cf0();
  /* 115b0e48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0e4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b0e4d jmp 0x115b0edc */
  goto L_115b0edc;
L_115b0e52:;
  /* 115b0e52 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0e54 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115b0e57 push edx */
  push32((uint32_t)(EDX));
  /* 115b0e58 call 0x115a5cf0 */
  push32(0x115b0e5du); f_115a5cf0();
  /* 115b0e5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0e60 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0e62 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115b0e65 push eax */
  push32((uint32_t)(EAX));
  /* 115b0e66 call 0x115a5cf0 */
  push32(0x115b0e6bu); f_115a5cf0();
  /* 115b0e6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0e6e push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0e70 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115b0e73 push ecx */
  push32((uint32_t)(ECX));
  /* 115b0e74 call 0x115a5cf0 */
  push32(0x115b0e79u); f_115a5cf0();
  /* 115b0e79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0e7c push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0e7e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 115b0e81 push edx */
  push32((uint32_t)(EDX));
  /* 115b0e82 call 0x115a5cf0 */
  push32(0x115b0e87u); f_115a5cf0();
  /* 115b0e87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0e8a mov eax, 1 */
  EAX = (0x1u);
  /* 115b0e8f jmp 0x115b0edc */
  goto L_115b0edc;
L_115b0e91:;
  /* 115b0e91 mov dword ptr [0x115cfc98], 0x115cfca2 */
  w32((uint32_t)(0x115cfc98), (0x115cfca2u));
  /* 115b0e9b mov dword ptr [0x115cfc9c], 0x115cfca2 */
  w32((uint32_t)(0x115cfc9c), (0x115cfca2u));
  /* 115b0ea5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0ea7 mov eax, dword ptr [0x115d1860] */
  EAX = (r32((uint32_t)(0x115d1860)));
  /* 115b0eac push eax */
  push32((uint32_t)(EAX));
  /* 115b0ead call 0x115a5cf0 */
  push32(0x115b0eb2u); f_115a5cf0();
  /* 115b0eb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0eb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115b0eb7 mov ecx, dword ptr [0x115d1864] */
  ECX = (r32((uint32_t)(0x115d1864)));
  /* 115b0ebd push ecx */
  push32((uint32_t)(ECX));
  /* 115b0ebe call 0x115a5cf0 */
  push32(0x115b0ec3u); f_115a5cf0();
  /* 115b0ec3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0ec6 mov dword ptr [0x115d1860], 0 */
  w32((uint32_t)(0x115d1860), (0x0u));
  /* 115b0ed0 mov dword ptr [0x115d1864], 0 */
  w32((uint32_t)(0x115d1864), (0x0u));
  /* 115b0eda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115b0edc:;
  /* 115b0edc mov esp, ebp */
  ESP = (EBP);
  /* 115b0ede pop ebp */
  EBP = (pop32());
  /* 115b0edf ret  */
  ESPCHK(0x115b0b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ee0 @ 0x115b0ee0 (7 bytes, 5 insns) */
void f_115b0ee0(void) {
  FTRACE(0x115b0ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b0ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b0ee1 mov ebp, esp */
  EBP = (ESP);
  /* 115b0ee3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b0ee5 pop ebp */
  EBP = (pop32());
  /* 115b0ee6 ret  */
  ESPCHK(0x115b0ee0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x115b0ef0 (129 bytes, 56 insns) */
void f_115b0ef0(void) {
  FTRACE(0x115b0ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b0ef0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 115b0ef4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 115b0ef8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 115b0efe jne 0x115b0f3c */
  if (!C.zf) goto L_115b0f3c;
L_115b0f00:;
  /* 115b0f00 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115b0f02 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b0f04 jne 0x115b0f34 */
  if (!C.zf) goto L_115b0f34;
  /* 115b0f06 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 115b0f08 je 0x115b0f30 */
  if (C.zf) goto L_115b0f30;
  /* 115b0f0a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b0f0d jne 0x115b0f34 */
  if (!C.zf) goto L_115b0f34;
  /* 115b0f0f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 115b0f11 je 0x115b0f30 */
  if (C.zf) goto L_115b0f30;
  /* 115b0f13 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 115b0f16 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b0f19 jne 0x115b0f34 */
  if (!C.zf) goto L_115b0f34;
  /* 115b0f1b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 115b0f1d je 0x115b0f30 */
  if (C.zf) goto L_115b0f30;
  /* 115b0f1f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b0f22 jne 0x115b0f34 */
  if (!C.zf) goto L_115b0f34;
  /* 115b0f24 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0f27 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0f2a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 115b0f2c jne 0x115b0f00 */
  if (!C.zf) goto L_115b0f00;
  /* 115b0f2e mov edi, edi */
  EDI = (EDI);
L_115b0f30:;
  /* 115b0f30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b0f32 ret  */
  ESPCHK(0x115b0ef0u, _esp0);
  ESP += 4; return;
  /* 115b0f33 nop  */
  /* nop */
L_115b0f34:;
  /* 115b0f34 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b0f36 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115b0f38 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115b0f39 ret  */
  ESPCHK(0x115b0ef0u, _esp0);
  ESP += 4; return;
  /* 115b0f3a mov edi, edi */
  EDI = (EDI);
L_115b0f3c:;
  /* 115b0f3c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 115b0f42 je 0x115b0f58 */
  if (C.zf) goto L_115b0f58;
  /* 115b0f44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b0f46 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 115b0f47 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b0f49 jne 0x115b0f34 */
  if (!C.zf) goto L_115b0f34;
  /* 115b0f4b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115b0f4c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 115b0f4e je 0x115b0f30 */
  if (C.zf) goto L_115b0f30;
  /* 115b0f50 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 115b0f56 je 0x115b0f00 */
  if (C.zf) goto L_115b0f00;
L_115b0f58:;
  /* 115b0f58 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 115b0f5b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0f5e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b0f60 jne 0x115b0f34 */
  if (!C.zf) goto L_115b0f34;
  /* 115b0f62 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 115b0f64 je 0x115b0f30 */
  if (C.zf) goto L_115b0f30;
  /* 115b0f66 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b0f69 jne 0x115b0f34 */
  if (!C.zf) goto L_115b0f34;
  /* 115b0f6b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 115b0f6d je 0x115b0f30 */
  if (C.zf) goto L_115b0f30;
  /* 115b0f6f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0f72 jmp 0x115b0f00 */
  goto L_115b0f00;
}

/* FUN_10010f80 @ 0x115b0f80 (62 bytes, 35 insns) */
void f_115b0f80(void) {
  FTRACE(0x115b0f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b0f80 push ebp */
  push32((uint32_t)(EBP));
  /* 115b0f81 mov ebp, esp */
  EBP = (ESP);
  /* 115b0f83 push esi */
  push32((uint32_t)(ESI));
  /* 115b0f84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b0f86 push eax */
  push32((uint32_t)(EAX));
  /* 115b0f87 push eax */
  push32((uint32_t)(EAX));
  /* 115b0f88 push eax */
  push32((uint32_t)(EAX));
  /* 115b0f89 push eax */
  push32((uint32_t)(EAX));
  /* 115b0f8a push eax */
  push32((uint32_t)(EAX));
  /* 115b0f8b push eax */
  push32((uint32_t)(EAX));
  /* 115b0f8c push eax */
  push32((uint32_t)(EAX));
  /* 115b0f8d push eax */
  push32((uint32_t)(EAX));
  /* 115b0f8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b0f91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115b0f94:;
  /* 115b0f94 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b0f96 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 115b0f98 je 0x115b0fa1 */
  if (C.zf) goto L_115b0fa1;
  /* 115b0f9a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 115b0f9b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x115b0f9b");
  /* 115b0f9f jmp 0x115b0f94 */
  goto L_115b0f94;
L_115b0fa1:;
  /* 115b0fa1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0fa4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115b0fa7 nop  */
  /* nop */
L_115b0fa8:;
  /* 115b0fa8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115b0fa9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115b0fab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 115b0fad je 0x115b0fb6 */
  if (C.zf) goto L_115b0fb6;
  /* 115b0faf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115b0fb0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x115b0fb0");
  /* 115b0fb4 jae 0x115b0fa8 */
  if (!C.cf) goto L_115b0fa8;
L_115b0fb6:;
  /* 115b0fb6 mov eax, ecx */
  EAX = (ECX);
  /* 115b0fb8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0fbb pop esi */
  ESI = (pop32());
  /* 115b0fbc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115b0fbd ret  */
  ESPCHK(0x115b0f80u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x115b0fc0 (56 bytes, 31 insns) */
void f_115b0fc0(void) {
  FTRACE(0x115b0fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b0fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b0fc1 mov ebp, esp */
  EBP = (ESP);
  /* 115b0fc3 push edi */
  push32((uint32_t)(EDI));
  /* 115b0fc4 push esi */
  push32((uint32_t)(ESI));
  /* 115b0fc5 push ebx */
  push32((uint32_t)(EBX));
  /* 115b0fc6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b0fc9 jecxz 0x115b0ff1 */
  x86_unimpl("jecxz @ 0x115b0fc9");
  /* 115b0fcb mov ebx, ecx */
  EBX = (ECX);
  /* 115b0fcd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 115b0fd0 mov esi, edi */
  ESI = (EDI);
  /* 115b0fd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b0fd4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 115b0fd6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b0fd8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b0fda mov edi, esi */
  EDI = (ESI);
  /* 115b0fdc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 115b0fdf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 115b0fe1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 115b0fe4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b0fe6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115b0fe9 ja 0x115b0fef */
  if ((!C.cf&&!C.zf)) goto L_115b0fef;
  /* 115b0feb je 0x115b0ff1 */
  if (C.zf) goto L_115b0ff1;
  /* 115b0fed dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115b0fee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_115b0fef:;
  /* 115b0fef not ecx */
  ECX = (~(ECX));
L_115b0ff1:;
  /* 115b0ff1 mov eax, ecx */
  EAX = (ECX);
  /* 115b0ff3 pop ebx */
  EBX = (pop32());
  /* 115b0ff4 pop esi */
  ESI = (pop32());
  /* 115b0ff5 pop edi */
  EDI = (pop32());
  /* 115b0ff6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115b0ff7 ret  */
  ESPCHK(0x115b0fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011000 @ 0x115b1000 (58 bytes, 32 insns) */
void f_115b1000(void) {
  FTRACE(0x115b1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1000 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1001 mov ebp, esp */
  EBP = (ESP);
  /* 115b1003 push esi */
  push32((uint32_t)(ESI));
  /* 115b1004 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b1006 push eax */
  push32((uint32_t)(EAX));
  /* 115b1007 push eax */
  push32((uint32_t)(EAX));
  /* 115b1008 push eax */
  push32((uint32_t)(EAX));
  /* 115b1009 push eax */
  push32((uint32_t)(EAX));
  /* 115b100a push eax */
  push32((uint32_t)(EAX));
  /* 115b100b push eax */
  push32((uint32_t)(EAX));
  /* 115b100c push eax */
  push32((uint32_t)(EAX));
  /* 115b100d push eax */
  push32((uint32_t)(EAX));
  /* 115b100e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b1011 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115b1014:;
  /* 115b1014 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b1016 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 115b1018 je 0x115b1021 */
  if (C.zf) goto L_115b1021;
  /* 115b101a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 115b101b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x115b101b");
  /* 115b101f jmp 0x115b1014 */
  goto L_115b1014;
L_115b1021:;
  /* 115b1021 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_115b1024:;
  /* 115b1024 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115b1026 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 115b1028 je 0x115b1034 */
  if (C.zf) goto L_115b1034;
  /* 115b102a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115b102b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x115b102b");
  /* 115b102f jae 0x115b1024 */
  if (!C.cf) goto L_115b1024;
  /* 115b1031 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_115b1034:;
  /* 115b1034 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1037 pop esi */
  ESI = (pop32());
  /* 115b1038 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115b1039 ret  */
  ESPCHK(0x115b1000u, _esp0);
  ESP += 4; return;
}

/* FUN_10011040 @ 0x115b1040 (512 bytes, 147 insns) */
void f_115b1040(void) {
  FTRACE(0x115b1040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1040 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1041 mov ebp, esp */
  EBP = (ESP);
  /* 115b1043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1046 cmp dword ptr [0x115d18ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d18ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b104d jne 0x115b1072 */
  if (!C.zf) goto L_115b1072;
  /* 115b104f call 0x115b1b10 */
  push32(0x115b1054u); f_115b1b10();
  /* 115b1054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1056 je 0x115b1062 */
  if (C.zf) goto L_115b1062;
  /* 115b1058 mov eax, dword ptr [0x115d42f4] */
  EAX = (r32((uint32_t)(0x115d42f4)));
  /* 115b105d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b1060 jmp 0x115b1069 */
  goto L_115b1069;
L_115b1062:;
  /* 115b1062 mov dword ptr [ebp - 8], 0x115b1b60 */
  w32((uint32_t)(EBP + -0x8), (0x115b1b60u));
L_115b1069:;
  /* 115b1069 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b106c mov dword ptr [0x115d18ac], ecx */
  w32((uint32_t)(0x115d18ac), (ECX));
L_115b1072:;
  /* 115b1072 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1076 jne 0x115b1082 */
  if (!C.zf) goto L_115b1082;
  /* 115b1078 call 0x115b1960 */
  push32(0x115b107du); f_115b1960();
  /* 115b107d jmp 0x115b114e */
  goto L_115b114e;
L_115b1082:;
  /* 115b1082 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1085 mov dword ptr [0x115d189c], edx */
  w32((uint32_t)(0x115d189c), (EDX));
  /* 115b108b cmp dword ptr [0x115d189c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d189c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1092 je 0x115b10b4 */
  if (C.zf) goto L_115b10b4;
  /* 115b1094 mov eax, dword ptr [0x115d189c] */
  EAX = (r32((uint32_t)(0x115d189c)));
  /* 115b1099 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b109c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b109e je 0x115b10b4 */
  if (C.zf) goto L_115b10b4;
  /* 115b10a0 push 0x115d189c */
  push32((uint32_t)(0x115d189cu));
  /* 115b10a5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115b10a7 push 0x115d0a90 */
  push32((uint32_t)(0x115d0a90u));
  /* 115b10ac call 0x115b1240 */
  push32(0x115b10b1u); f_115b1240();
  /* 115b10b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b10b4:;
  /* 115b10b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b10b7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b10ba mov dword ptr [0x115d18a0], edx */
  w32((uint32_t)(0x115d18a0), (EDX));
  /* 115b10c0 cmp dword ptr [0x115d18a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d18a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b10c7 je 0x115b10e9 */
  if (C.zf) goto L_115b10e9;
  /* 115b10c9 mov eax, dword ptr [0x115d18a0] */
  EAX = (r32((uint32_t)(0x115d18a0)));
  /* 115b10ce movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b10d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b10d3 je 0x115b10e9 */
  if (C.zf) goto L_115b10e9;
  /* 115b10d5 push 0x115d18a0 */
  push32((uint32_t)(0x115d18a0u));
  /* 115b10da push 0x16 */
  push32((uint32_t)(0x16u));
  /* 115b10dc push 0x115d09d8 */
  push32((uint32_t)(0x115d09d8u));
  /* 115b10e1 call 0x115b1240 */
  push32(0x115b10e6u); f_115b1240();
  /* 115b10e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b10e9:;
  /* 115b10e9 mov dword ptr [0x115d18a4], 0 */
  w32((uint32_t)(0x115d18a4), (0x0u));
  /* 115b10f3 cmp dword ptr [0x115d189c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d189c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b10fa je 0x115b112d */
  if (C.zf) goto L_115b112d;
  /* 115b10fc mov edx, dword ptr [0x115d189c] */
  EDX = (r32((uint32_t)(0x115d189c)));
  /* 115b1102 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115b1105 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1107 je 0x115b112d */
  if (C.zf) goto L_115b112d;
  /* 115b1109 cmp dword ptr [0x115d18a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d18a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1110 je 0x115b1126 */
  if (C.zf) goto L_115b1126;
  /* 115b1112 mov ecx, dword ptr [0x115d18a0] */
  ECX = (r32((uint32_t)(0x115d18a0)));
  /* 115b1118 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115b111b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b111d je 0x115b1126 */
  if (C.zf) goto L_115b1126;
  /* 115b111f call 0x115b12d0 */
  push32(0x115b1124u); f_115b12d0();
  /* 115b1124 jmp 0x115b112b */
  goto L_115b112b;
L_115b1126:;
  /* 115b1126 call 0x115b16c0 */
  push32(0x115b112bu); f_115b16c0();
L_115b112b:;
  /* 115b112b jmp 0x115b114e */
  goto L_115b114e;
L_115b112d:;
  /* 115b112d cmp dword ptr [0x115d18a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d18a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1134 je 0x115b1149 */
  if (C.zf) goto L_115b1149;
  /* 115b1136 mov eax, dword ptr [0x115d18a0] */
  EAX = (r32((uint32_t)(0x115d18a0)));
  /* 115b113b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b113e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b1140 je 0x115b1149 */
  if (C.zf) goto L_115b1149;
  /* 115b1142 call 0x115b1860 */
  push32(0x115b1147u); f_115b1860();
  /* 115b1147 jmp 0x115b114e */
  goto L_115b114e;
L_115b1149:;
  /* 115b1149 call 0x115b1960 */
  push32(0x115b114eu); f_115b1960();
L_115b114e:;
  /* 115b114e cmp dword ptr [0x115d18a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d18a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1155 jne 0x115b115e */
  if (!C.zf) goto L_115b115e;
  /* 115b1157 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b1159 jmp 0x115b123c */
  goto L_115b123c;
L_115b115e:;
  /* 115b115e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1161 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1167 push edx */
  push32((uint32_t)(EDX));
  /* 115b1168 call 0x115b1990 */
  push32(0x115b116du); f_115b1990();
  /* 115b116d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1170 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b1173 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1177 je 0x115b118c */
  if (C.zf) goto L_115b118c;
  /* 115b1179 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b117c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b1181 push eax */
  push32((uint32_t)(EAX));
  /* 115b1182 call dword ptr [0x115d42f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42f8))), 0x115b1188u);
  /* 115b1188 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b118a jne 0x115b1193 */
  if (!C.zf) goto L_115b1193;
L_115b118c:;
  /* 115b118c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b118e jmp 0x115b123c */
  goto L_115b123c;
L_115b1193:;
  /* 115b1193 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b1195 mov ecx, dword ptr [0x115d188c] */
  ECX = (r32((uint32_t)(0x115d188c)));
  /* 115b119b push ecx */
  push32((uint32_t)(ECX));
  /* 115b119c call dword ptr [0x115d4308] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4308))), 0x115b11a2u);
  /* 115b11a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b11a4 jne 0x115b11ad */
  if (!C.zf) goto L_115b11ad;
  /* 115b11a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b11a8 jmp 0x115b123c */
  goto L_115b123c;
L_115b11ad:;
  /* 115b11ad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b11b1 je 0x115b11d8 */
  if (C.zf) goto L_115b11d8;
  /* 115b11b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b11b6 mov ax, word ptr [0x115d188c] */
  AX = (r16((uint32_t)(0x115d188c)));
  /* 115b11bc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 115b11bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b11c2 mov dx, word ptr [0x115d18a8] */
  DX = (r16((uint32_t)(0x115d18a8)));
  /* 115b11c9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 115b11cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b11d0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 115b11d4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_115b11d8:;
  /* 115b11d8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b11dc je 0x115b1237 */
  if (C.zf) goto L_115b1237;
  /* 115b11de push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115b11e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b11e3 push edx */
  push32((uint32_t)(EDX));
  /* 115b11e4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 115b11e9 mov eax, dword ptr [0x115d188c] */
  EAX = (r32((uint32_t)(0x115d188c)));
  /* 115b11ee push eax */
  push32((uint32_t)(EAX));
  /* 115b11ef call dword ptr [0x115d18ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d18ac))), 0x115b11f5u);
  /* 115b11f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b11f7 jne 0x115b11fd */
  if (!C.zf) goto L_115b11fd;
  /* 115b11f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b11fb jmp 0x115b123c */
  goto L_115b123c;
L_115b11fd:;
  /* 115b11fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115b11ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b1202 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1205 push ecx */
  push32((uint32_t)(ECX));
  /* 115b1206 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 115b120b mov edx, dword ptr [0x115d18a8] */
  EDX = (r32((uint32_t)(0x115d18a8)));
  /* 115b1211 push edx */
  push32((uint32_t)(EDX));
  /* 115b1212 call dword ptr [0x115d18ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d18ac))), 0x115b1218u);
  /* 115b1218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b121a jne 0x115b1220 */
  if (!C.zf) goto L_115b1220;
  /* 115b121c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b121e jmp 0x115b123c */
  goto L_115b123c;
L_115b1220:;
  /* 115b1220 push 0xa */
  push32((uint32_t)(0xau));
  /* 115b1222 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b1225 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b122a push eax */
  push32((uint32_t)(EAX));
  /* 115b122b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b122e push ecx */
  push32((uint32_t)(ECX));
  /* 115b122f call 0x115a7da0 */
  push32(0x115b1234u); f_115a7da0();
  /* 115b1234 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b1237:;
  /* 115b1237 mov eax, 1 */
  EAX = (0x1u);
L_115b123c:;
  /* 115b123c mov esp, ebp */
  ESP = (EBP);
  /* 115b123e pop ebp */
  EBP = (pop32());
  /* 115b123f ret  */
  ESPCHK(0x115b1040u, _esp0);
  ESP += 4; return;
}

/* FUN_10011240 @ 0x115b1240 (130 bytes, 47 insns) */
void f_115b1240(void) {
  FTRACE(0x115b1240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1240 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1241 mov ebp, esp */
  EBP = (ESP);
  /* 115b1243 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1246 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 115b124d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_115b1254:;
  /* 115b1254 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1257 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b125a jg 0x115b12be */
  if ((!C.zf&&C.sf==C.of)) goto L_115b12be;
  /* 115b125c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1260 je 0x115b12be */
  if (C.zf) goto L_115b12be;
  /* 115b1262 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1265 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1268 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115b1269 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b126b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115b126d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b1270 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b1273 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1276 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 115b1279 push eax */
  push32((uint32_t)(EAX));
  /* 115b127a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b127d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115b127f push edx */
  push32((uint32_t)(EDX));
  /* 115b1280 call 0x115b3930 */
  push32(0x115b1285u); f_115b3930();
  /* 115b1285 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1288 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b128b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b128f jne 0x115b12a2 */
  if (!C.zf) goto L_115b12a2;
  /* 115b1291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b1294 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1297 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 115b129b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b129e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115b12a0 jmp 0x115b12bc */
  goto L_115b12bc;
L_115b12a2:;
  /* 115b12a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b12a6 jge 0x115b12b3 */
  if ((C.sf==C.of)) goto L_115b12b3;
  /* 115b12a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b12ab sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b12ae mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 115b12b1 jmp 0x115b12bc */
  goto L_115b12bc;
L_115b12b3:;
  /* 115b12b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b12b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b12b9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_115b12bc:;
  /* 115b12bc jmp 0x115b1254 */
  goto L_115b1254;
L_115b12be:;
  /* 115b12be mov esp, ebp */
  ESP = (EBP);
  /* 115b12c0 pop ebp */
  EBP = (pop32());
  /* 115b12c1 ret  */
  ESPCHK(0x115b1240u, _esp0);
  ESP += 4; return;
}

/* FUN_100112d0 @ 0x115b12d0 (186 bytes, 50 insns) */
void f_115b12d0(void) {
  FTRACE(0x115b12d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b12d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b12d1 mov ebp, esp */
  EBP = (ESP);
  /* 115b12d3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b12d4 mov eax, dword ptr [0x115d189c] */
  EAX = (r32((uint32_t)(0x115d189c)));
  /* 115b12d9 push eax */
  push32((uint32_t)(EAX));
  /* 115b12da call 0x115a8090 */
  push32(0x115b12dfu); f_115a8090();
  /* 115b12df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b12e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b12e4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b12e7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 115b12ea mov dword ptr [0x115d1898], ecx */
  w32((uint32_t)(0x115d1898), (ECX));
  /* 115b12f0 mov edx, dword ptr [0x115d18a0] */
  EDX = (r32((uint32_t)(0x115d18a0)));
  /* 115b12f6 push edx */
  push32((uint32_t)(EDX));
  /* 115b12f7 call 0x115a8090 */
  push32(0x115b12fcu); f_115a8090();
  /* 115b12fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b12ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b1301 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1304 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 115b1307 mov dword ptr [0x115d1890], ecx */
  w32((uint32_t)(0x115d1890), (ECX));
  /* 115b130d mov dword ptr [0x115d188c], 0 */
  w32((uint32_t)(0x115d188c), (0x0u));
  /* 115b1317 cmp dword ptr [0x115d1898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b131e je 0x115b1329 */
  if (C.zf) goto L_115b1329;
  /* 115b1320 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 115b1327 jmp 0x115b133b */
  goto L_115b133b;
L_115b1329:;
  /* 115b1329 mov edx, dword ptr [0x115d189c] */
  EDX = (r32((uint32_t)(0x115d189c)));
  /* 115b132f push edx */
  push32((uint32_t)(EDX));
  /* 115b1330 call 0x115b1d70 */
  push32(0x115b1335u); f_115b1d70();
  /* 115b1335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1338 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115b133b:;
  /* 115b133b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b133e mov dword ptr [0x115d1894], eax */
  w32((uint32_t)(0x115d1894), (EAX));
  /* 115b1343 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b1345 push 0x115b1390 */
  push32((uint32_t)(0x115b1390u));
  /* 115b134a call dword ptr [0x115d42fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42fc))), 0x115b1350u);
  /* 115b1350 mov ecx, dword ptr [0x115d18a4] */
  ECX = (r32((uint32_t)(0x115d18a4)));
  /* 115b1356 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 115b135c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b135e je 0x115b137c */
  if (C.zf) goto L_115b137c;
  /* 115b1360 mov edx, dword ptr [0x115d18a4] */
  EDX = (r32((uint32_t)(0x115d18a4)));
  /* 115b1366 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 115b136c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b136e je 0x115b137c */
  if (C.zf) goto L_115b137c;
  /* 115b1370 mov eax, dword ptr [0x115d18a4] */
  EAX = (r32((uint32_t)(0x115d18a4)));
  /* 115b1375 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 115b1378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b137a jne 0x115b1386 */
  if (!C.zf) goto L_115b1386;
L_115b137c:;
  /* 115b137c mov dword ptr [0x115d18a4], 0 */
  w32((uint32_t)(0x115d18a4), (0x0u));
L_115b1386:;
  /* 115b1386 mov esp, ebp */
  ESP = (EBP);
  /* 115b1388 pop ebp */
  EBP = (pop32());
  /* 115b1389 ret  */
  ESPCHK(0x115b12d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011390 @ 0x115b1390 (804 bytes, 220 insns) */
void f_115b1390(void) {
  FTRACE(0x115b1390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1390 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1391 mov ebp, esp */
  EBP = (ESP);
  /* 115b1393 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1399 push eax */
  push32((uint32_t)(EAX));
  /* 115b139a call 0x115b1cf0 */
  push32(0x115b139fu); f_115b1cf0();
  /* 115b139f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b13a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 115b13a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 115b13a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 115b13aa push ecx */
  push32((uint32_t)(ECX));
  /* 115b13ab mov edx, dword ptr [0x115d1890] */
  EDX = (r32((uint32_t)(0x115d1890)));
  /* 115b13b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b13b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b13b5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 115b13bb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b13c1 push edx */
  push32((uint32_t)(EDX));
  /* 115b13c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b13c5 push eax */
  push32((uint32_t)(EAX));
  /* 115b13c6 call dword ptr [0x115d18ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d18ac))), 0x115b13ccu);
  /* 115b13cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b13ce jne 0x115b13e4 */
  if (!C.zf) goto L_115b13e4;
  /* 115b13d0 mov dword ptr [0x115d18a4], 0 */
  w32((uint32_t)(0x115d18a4), (0x0u));
  /* 115b13da mov eax, 1 */
  EAX = (0x1u);
  /* 115b13df jmp 0x115b16ae */
  goto L_115b16ae;
L_115b13e4:;
  /* 115b13e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 115b13e7 push ecx */
  push32((uint32_t)(ECX));
  /* 115b13e8 mov edx, dword ptr [0x115d18a0] */
  EDX = (r32((uint32_t)(0x115d18a0)));
  /* 115b13ee push edx */
  push32((uint32_t)(EDX));
  /* 115b13ef call 0x115b3930 */
  push32(0x115b13f4u); f_115b3930();
  /* 115b13f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b13f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b13f9 jne 0x115b151f */
  if (!C.zf) goto L_115b151f;
  /* 115b13ff push 0x78 */
  push32((uint32_t)(0x78u));
  /* 115b1401 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 115b1404 push eax */
  push32((uint32_t)(EAX));
  /* 115b1405 mov ecx, dword ptr [0x115d1898] */
  ECX = (r32((uint32_t)(0x115d1898)));
  /* 115b140b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b140d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b140f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 115b1415 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b141b push ecx */
  push32((uint32_t)(ECX));
  /* 115b141c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b141f push edx */
  push32((uint32_t)(EDX));
  /* 115b1420 call dword ptr [0x115d18ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d18ac))), 0x115b1426u);
  /* 115b1426 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1428 jne 0x115b143e */
  if (!C.zf) goto L_115b143e;
  /* 115b142a mov dword ptr [0x115d18a4], 0 */
  w32((uint32_t)(0x115d18a4), (0x0u));
  /* 115b1434 mov eax, 1 */
  EAX = (0x1u);
  /* 115b1439 jmp 0x115b16ae */
  goto L_115b16ae;
L_115b143e:;
  /* 115b143e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 115b1441 push eax */
  push32((uint32_t)(EAX));
  /* 115b1442 mov ecx, dword ptr [0x115d189c] */
  ECX = (r32((uint32_t)(0x115d189c)));
  /* 115b1448 push ecx */
  push32((uint32_t)(ECX));
  /* 115b1449 call 0x115b3930 */
  push32(0x115b144eu); f_115b3930();
  /* 115b144e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1453 jne 0x115b1480 */
  if (!C.zf) goto L_115b1480;
  /* 115b1455 mov edx, dword ptr [0x115d18a4] */
  EDX = (r32((uint32_t)(0x115d18a4)));
  /* 115b145b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 115b1461 mov dword ptr [0x115d18a4], edx */
  w32((uint32_t)(0x115d18a4), (EDX));
  /* 115b1467 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b146a mov dword ptr [0x115d18a8], eax */
  w32((uint32_t)(0x115d18a8), (EAX));
  /* 115b146f mov ecx, dword ptr [0x115d18a8] */
  ECX = (r32((uint32_t)(0x115d18a8)));
  /* 115b1475 mov dword ptr [0x115d188c], ecx */
  w32((uint32_t)(0x115d188c), (ECX));
  /* 115b147b jmp 0x115b151f */
  goto L_115b151f;
L_115b1480:;
  /* 115b1480 mov edx, dword ptr [0x115d18a4] */
  EDX = (r32((uint32_t)(0x115d18a4)));
  /* 115b1486 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 115b1489 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b148b jne 0x115b151f */
  if (!C.zf) goto L_115b151f;
  /* 115b1491 cmp dword ptr [0x115d1894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1498 je 0x115b14ed */
  if (C.zf) goto L_115b14ed;
  /* 115b149a mov eax, dword ptr [0x115d1894] */
  EAX = (r32((uint32_t)(0x115d1894)));
  /* 115b149f push eax */
  push32((uint32_t)(EAX));
  /* 115b14a0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 115b14a3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b14a4 mov edx, dword ptr [0x115d189c] */
  EDX = (r32((uint32_t)(0x115d189c)));
  /* 115b14aa push edx */
  push32((uint32_t)(EDX));
  /* 115b14ab call 0x115b3a00 */
  push32(0x115b14b0u); f_115b3a00();
  /* 115b14b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b14b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b14b5 jne 0x115b14ed */
  if (!C.zf) goto L_115b14ed;
  /* 115b14b7 mov eax, dword ptr [0x115d18a4] */
  EAX = (r32((uint32_t)(0x115d18a4)));
  /* 115b14bc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 115b14be mov dword ptr [0x115d18a4], eax */
  w32((uint32_t)(0x115d18a4), (EAX));
  /* 115b14c3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b14c6 mov dword ptr [0x115d18a8], ecx */
  w32((uint32_t)(0x115d18a8), (ECX));
  /* 115b14cc mov edx, dword ptr [0x115d189c] */
  EDX = (r32((uint32_t)(0x115d189c)));
  /* 115b14d2 push edx */
  push32((uint32_t)(EDX));
  /* 115b14d3 call 0x115a8090 */
  push32(0x115b14d8u); f_115a8090();
  /* 115b14d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b14db cmp eax, dword ptr [0x115d1894] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d1894))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b14e1 jne 0x115b14eb */
  if (!C.zf) goto L_115b14eb;
  /* 115b14e3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b14e6 mov dword ptr [0x115d188c], eax */
  w32((uint32_t)(0x115d188c), (EAX));
L_115b14eb:;
  /* 115b14eb jmp 0x115b151f */
  goto L_115b151f;
L_115b14ed:;
  /* 115b14ed mov ecx, dword ptr [0x115d18a4] */
  ECX = (r32((uint32_t)(0x115d18a4)));
  /* 115b14f3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115b14f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b14f8 jne 0x115b151f */
  if (!C.zf) goto L_115b151f;
  /* 115b14fa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b14fd push edx */
  push32((uint32_t)(EDX));
  /* 115b14fe call 0x115b1a30 */
  push32(0x115b1503u); f_115b1a30();
  /* 115b1503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1508 je 0x115b151f */
  if (C.zf) goto L_115b151f;
  /* 115b150a mov eax, dword ptr [0x115d18a4] */
  EAX = (r32((uint32_t)(0x115d18a4)));
  /* 115b150f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 115b1511 mov dword ptr [0x115d18a4], eax */
  w32((uint32_t)(0x115d18a4), (EAX));
  /* 115b1516 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b1519 mov dword ptr [0x115d18a8], ecx */
  w32((uint32_t)(0x115d18a8), (ECX));
L_115b151f:;
  /* 115b151f mov edx, dword ptr [0x115d18a4] */
  EDX = (r32((uint32_t)(0x115d18a4)));
  /* 115b1525 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 115b152b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1531 je 0x115b16a1 */
  if (C.zf) goto L_115b16a1;
  /* 115b1537 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 115b1539 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 115b153c push eax */
  push32((uint32_t)(EAX));
  /* 115b153d mov ecx, dword ptr [0x115d1898] */
  ECX = (r32((uint32_t)(0x115d1898)));
  /* 115b1543 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b1545 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1547 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 115b154d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1553 push ecx */
  push32((uint32_t)(ECX));
  /* 115b1554 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b1557 push edx */
  push32((uint32_t)(EDX));
  /* 115b1558 call dword ptr [0x115d18ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d18ac))), 0x115b155eu);
  /* 115b155e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1560 jne 0x115b1576 */
  if (!C.zf) goto L_115b1576;
  /* 115b1562 mov dword ptr [0x115d18a4], 0 */
  w32((uint32_t)(0x115d18a4), (0x0u));
  /* 115b156c mov eax, 1 */
  EAX = (0x1u);
  /* 115b1571 jmp 0x115b16ae */
  goto L_115b16ae;
L_115b1576:;
  /* 115b1576 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 115b1579 push eax */
  push32((uint32_t)(EAX));
  /* 115b157a mov ecx, dword ptr [0x115d189c] */
  ECX = (r32((uint32_t)(0x115d189c)));
  /* 115b1580 push ecx */
  push32((uint32_t)(ECX));
  /* 115b1581 call 0x115b3930 */
  push32(0x115b1586u); f_115b3930();
  /* 115b1586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b158b jne 0x115b1640 */
  if (!C.zf) goto L_115b1640;
  /* 115b1591 mov edx, dword ptr [0x115d18a4] */
  EDX = (r32((uint32_t)(0x115d18a4)));
  /* 115b1597 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 115b159a mov dword ptr [0x115d18a4], edx */
  w32((uint32_t)(0x115d18a4), (EDX));
  /* 115b15a0 cmp dword ptr [0x115d1898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b15a7 je 0x115b15ca */
  if (C.zf) goto L_115b15ca;
  /* 115b15a9 mov eax, dword ptr [0x115d18a4] */
  EAX = (r32((uint32_t)(0x115d18a4)));
  /* 115b15ae or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 115b15b1 mov dword ptr [0x115d18a4], eax */
  w32((uint32_t)(0x115d18a4), (EAX));
  /* 115b15b6 cmp dword ptr [0x115d188c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d188c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b15bd jne 0x115b15c8 */
  if (!C.zf) goto L_115b15c8;
  /* 115b15bf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b15c2 mov dword ptr [0x115d188c], ecx */
  w32((uint32_t)(0x115d188c), (ECX));
L_115b15c8:;
  /* 115b15c8 jmp 0x115b163e */
  goto L_115b163e;
L_115b15ca:;
  /* 115b15ca cmp dword ptr [0x115d1894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b15d1 je 0x115b161f */
  if (C.zf) goto L_115b161f;
  /* 115b15d3 mov edx, dword ptr [0x115d189c] */
  EDX = (r32((uint32_t)(0x115d189c)));
  /* 115b15d9 push edx */
  push32((uint32_t)(EDX));
  /* 115b15da call 0x115a8090 */
  push32(0x115b15dfu); f_115a8090();
  /* 115b15df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b15e2 cmp eax, dword ptr [0x115d1894] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d1894))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b15e8 jne 0x115b161f */
  if (!C.zf) goto L_115b161f;
  /* 115b15ea push 1 */
  push32((uint32_t)(0x1u));
  /* 115b15ec mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b15ef push eax */
  push32((uint32_t)(EAX));
  /* 115b15f0 call 0x115b1a80 */
  push32(0x115b15f5u); f_115b1a80();
  /* 115b15f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b15f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b15fa je 0x115b161d */
  if (C.zf) goto L_115b161d;
  /* 115b15fc mov ecx, dword ptr [0x115d18a4] */
  ECX = (r32((uint32_t)(0x115d18a4)));
  /* 115b1602 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 115b1605 mov dword ptr [0x115d18a4], ecx */
  w32((uint32_t)(0x115d18a4), (ECX));
  /* 115b160b cmp dword ptr [0x115d188c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d188c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1612 jne 0x115b161d */
  if (!C.zf) goto L_115b161d;
  /* 115b1614 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b1617 mov dword ptr [0x115d188c], edx */
  w32((uint32_t)(0x115d188c), (EDX));
L_115b161d:;
  /* 115b161d jmp 0x115b163e */
  goto L_115b163e;
L_115b161f:;
  /* 115b161f mov eax, dword ptr [0x115d18a4] */
  EAX = (r32((uint32_t)(0x115d18a4)));
  /* 115b1624 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 115b1627 mov dword ptr [0x115d18a4], eax */
  w32((uint32_t)(0x115d18a4), (EAX));
  /* 115b162c cmp dword ptr [0x115d188c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d188c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1633 jne 0x115b163e */
  if (!C.zf) goto L_115b163e;
  /* 115b1635 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b1638 mov dword ptr [0x115d188c], ecx */
  w32((uint32_t)(0x115d188c), (ECX));
L_115b163e:;
  /* 115b163e jmp 0x115b16a1 */
  goto L_115b16a1;
L_115b1640:;
  /* 115b1640 cmp dword ptr [0x115d1898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1647 jne 0x115b16a1 */
  if (!C.zf) goto L_115b16a1;
  /* 115b1649 cmp dword ptr [0x115d1894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1650 je 0x115b16a1 */
  if (C.zf) goto L_115b16a1;
  /* 115b1652 mov edx, dword ptr [0x115d1894] */
  EDX = (r32((uint32_t)(0x115d1894)));
  /* 115b1658 push edx */
  push32((uint32_t)(EDX));
  /* 115b1659 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 115b165c push eax */
  push32((uint32_t)(EAX));
  /* 115b165d mov ecx, dword ptr [0x115d189c] */
  ECX = (r32((uint32_t)(0x115d189c)));
  /* 115b1663 push ecx */
  push32((uint32_t)(ECX));
  /* 115b1664 call 0x115b3a00 */
  push32(0x115b1669u); f_115b3a00();
  /* 115b1669 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b166c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b166e jne 0x115b16a1 */
  if (!C.zf) goto L_115b16a1;
  /* 115b1670 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b1672 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b1675 push edx */
  push32((uint32_t)(EDX));
  /* 115b1676 call 0x115b1a80 */
  push32(0x115b167bu); f_115b1a80();
  /* 115b167b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b167e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1680 je 0x115b16a1 */
  if (C.zf) goto L_115b16a1;
  /* 115b1682 mov eax, dword ptr [0x115d18a4] */
  EAX = (r32((uint32_t)(0x115d18a4)));
  /* 115b1687 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 115b168a mov dword ptr [0x115d18a4], eax */
  w32((uint32_t)(0x115d18a4), (EAX));
  /* 115b168f cmp dword ptr [0x115d188c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d188c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1696 jne 0x115b16a1 */
  if (!C.zf) goto L_115b16a1;
  /* 115b1698 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b169b mov dword ptr [0x115d188c], ecx */
  w32((uint32_t)(0x115d188c), (ECX));
L_115b16a1:;
  /* 115b16a1 mov eax, dword ptr [0x115d18a4] */
  EAX = (r32((uint32_t)(0x115d18a4)));
  /* 115b16a6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 115b16a9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b16ab sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b16ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_115b16ae:;
  /* 115b16ae mov esp, ebp */
  ESP = (EBP);
  /* 115b16b0 pop ebp */
  EBP = (pop32());
  /* 115b16b1 ret 4 */
  ESPCHK(0x115b1390u, _esp0);
  ESP += 8; return;
}

/* FUN_100116c0 @ 0x115b16c0 (116 bytes, 33 insns) */
void f_115b16c0(void) {
  FTRACE(0x115b16c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b16c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b16c1 mov ebp, esp */
  EBP = (ESP);
  /* 115b16c3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b16c4 mov eax, dword ptr [0x115d189c] */
  EAX = (r32((uint32_t)(0x115d189c)));
  /* 115b16c9 push eax */
  push32((uint32_t)(EAX));
  /* 115b16ca call 0x115a8090 */
  push32(0x115b16cfu); f_115a8090();
  /* 115b16cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b16d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b16d4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b16d7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 115b16da mov dword ptr [0x115d1898], ecx */
  w32((uint32_t)(0x115d1898), (ECX));
  /* 115b16e0 cmp dword ptr [0x115d1898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b16e7 je 0x115b16f2 */
  if (C.zf) goto L_115b16f2;
  /* 115b16e9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 115b16f0 jmp 0x115b1704 */
  goto L_115b1704;
L_115b16f2:;
  /* 115b16f2 mov edx, dword ptr [0x115d189c] */
  EDX = (r32((uint32_t)(0x115d189c)));
  /* 115b16f8 push edx */
  push32((uint32_t)(EDX));
  /* 115b16f9 call 0x115b1d70 */
  push32(0x115b16feu); f_115b1d70();
  /* 115b16fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1701 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115b1704:;
  /* 115b1704 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b1707 mov dword ptr [0x115d1894], eax */
  w32((uint32_t)(0x115d1894), (EAX));
  /* 115b170c push 1 */
  push32((uint32_t)(0x1u));
  /* 115b170e push 0x115b1740 */
  push32((uint32_t)(0x115b1740u));
  /* 115b1713 call dword ptr [0x115d42fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42fc))), 0x115b1719u);
  /* 115b1719 mov ecx, dword ptr [0x115d18a4] */
  ECX = (r32((uint32_t)(0x115d18a4)));
  /* 115b171f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 115b1722 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b1724 jne 0x115b1730 */
  if (!C.zf) goto L_115b1730;
  /* 115b1726 mov dword ptr [0x115d18a4], 0 */
  w32((uint32_t)(0x115d18a4), (0x0u));
L_115b1730:;
  /* 115b1730 mov esp, ebp */
  ESP = (EBP);
  /* 115b1732 pop ebp */
  EBP = (pop32());
  /* 115b1733 ret  */
  ESPCHK(0x115b16c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011740 @ 0x115b1740 (287 bytes, 86 insns) */
void f_115b1740(void) {
  FTRACE(0x115b1740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1740 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1741 mov ebp, esp */
  EBP = (ESP);
  /* 115b1743 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1749 push eax */
  push32((uint32_t)(EAX));
  /* 115b174a call 0x115b1cf0 */
  push32(0x115b174fu); f_115b1cf0();
  /* 115b174f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1752 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 115b1755 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 115b1757 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 115b175a push ecx */
  push32((uint32_t)(ECX));
  /* 115b175b mov edx, dword ptr [0x115d1898] */
  EDX = (r32((uint32_t)(0x115d1898)));
  /* 115b1761 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b1763 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1765 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 115b176b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1771 push edx */
  push32((uint32_t)(EDX));
  /* 115b1772 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b1775 push eax */
  push32((uint32_t)(EAX));
  /* 115b1776 call dword ptr [0x115d18ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d18ac))), 0x115b177cu);
  /* 115b177c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b177e jne 0x115b1794 */
  if (!C.zf) goto L_115b1794;
  /* 115b1780 mov dword ptr [0x115d18a4], 0 */
  w32((uint32_t)(0x115d18a4), (0x0u));
  /* 115b178a mov eax, 1 */
  EAX = (0x1u);
  /* 115b178f jmp 0x115b1859 */
  goto L_115b1859;
L_115b1794:;
  /* 115b1794 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 115b1797 push ecx */
  push32((uint32_t)(ECX));
  /* 115b1798 mov edx, dword ptr [0x115d189c] */
  EDX = (r32((uint32_t)(0x115d189c)));
  /* 115b179e push edx */
  push32((uint32_t)(EDX));
  /* 115b179f call 0x115b3930 */
  push32(0x115b17a4u); f_115b3930();
  /* 115b17a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b17a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b17a9 jne 0x115b17e9 */
  if (!C.zf) goto L_115b17e9;
  /* 115b17ab cmp dword ptr [0x115d1898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b17b2 jne 0x115b17c6 */
  if (!C.zf) goto L_115b17c6;
  /* 115b17b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b17b6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b17b9 push eax */
  push32((uint32_t)(EAX));
  /* 115b17ba call 0x115b1a80 */
  push32(0x115b17bfu); f_115b1a80();
  /* 115b17bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b17c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b17c4 je 0x115b17e7 */
  if (C.zf) goto L_115b17e7;
L_115b17c6:;
  /* 115b17c6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b17c9 mov dword ptr [0x115d18a8], ecx */
  w32((uint32_t)(0x115d18a8), (ECX));
  /* 115b17cf mov edx, dword ptr [0x115d18a8] */
  EDX = (r32((uint32_t)(0x115d18a8)));
  /* 115b17d5 mov dword ptr [0x115d188c], edx */
  w32((uint32_t)(0x115d188c), (EDX));
  /* 115b17db mov eax, dword ptr [0x115d18a4] */
  EAX = (r32((uint32_t)(0x115d18a4)));
  /* 115b17e0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 115b17e2 mov dword ptr [0x115d18a4], eax */
  w32((uint32_t)(0x115d18a4), (EAX));
L_115b17e7:;
  /* 115b17e7 jmp 0x115b184c */
  goto L_115b184c;
L_115b17e9:;
  /* 115b17e9 cmp dword ptr [0x115d1898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b17f0 jne 0x115b184c */
  if (!C.zf) goto L_115b184c;
  /* 115b17f2 cmp dword ptr [0x115d1894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b17f9 je 0x115b184c */
  if (C.zf) goto L_115b184c;
  /* 115b17fb mov ecx, dword ptr [0x115d1894] */
  ECX = (r32((uint32_t)(0x115d1894)));
  /* 115b1801 push ecx */
  push32((uint32_t)(ECX));
  /* 115b1802 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 115b1805 push edx */
  push32((uint32_t)(EDX));
  /* 115b1806 mov eax, dword ptr [0x115d189c] */
  EAX = (r32((uint32_t)(0x115d189c)));
  /* 115b180b push eax */
  push32((uint32_t)(EAX));
  /* 115b180c call 0x115b3a00 */
  push32(0x115b1811u); f_115b3a00();
  /* 115b1811 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1814 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1816 jne 0x115b184c */
  if (!C.zf) goto L_115b184c;
  /* 115b1818 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b181a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b181d push ecx */
  push32((uint32_t)(ECX));
  /* 115b181e call 0x115b1a80 */
  push32(0x115b1823u); f_115b1a80();
  /* 115b1823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1826 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1828 je 0x115b184c */
  if (C.zf) goto L_115b184c;
  /* 115b182a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b182d mov dword ptr [0x115d18a8], edx */
  w32((uint32_t)(0x115d18a8), (EDX));
  /* 115b1833 mov eax, dword ptr [0x115d18a8] */
  EAX = (r32((uint32_t)(0x115d18a8)));
  /* 115b1838 mov dword ptr [0x115d188c], eax */
  w32((uint32_t)(0x115d188c), (EAX));
  /* 115b183d mov ecx, dword ptr [0x115d18a4] */
  ECX = (r32((uint32_t)(0x115d18a4)));
  /* 115b1843 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 115b1846 mov dword ptr [0x115d18a4], ecx */
  w32((uint32_t)(0x115d18a4), (ECX));
L_115b184c:;
  /* 115b184c mov eax, dword ptr [0x115d18a4] */
  EAX = (r32((uint32_t)(0x115d18a4)));
  /* 115b1851 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 115b1854 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b1856 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1858 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_115b1859:;
  /* 115b1859 mov esp, ebp */
  ESP = (EBP);
  /* 115b185b pop ebp */
  EBP = (pop32());
  /* 115b185c ret 4 */
  ESPCHK(0x115b1740u, _esp0);
  ESP += 8; return;
}

/* FUN_10011860 @ 0x115b1860 (69 bytes, 20 insns) */
void f_115b1860(void) {
  FTRACE(0x115b1860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1860 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1861 mov ebp, esp */
  EBP = (ESP);
  /* 115b1863 mov eax, dword ptr [0x115d18a0] */
  EAX = (r32((uint32_t)(0x115d18a0)));
  /* 115b1868 push eax */
  push32((uint32_t)(EAX));
  /* 115b1869 call 0x115a8090 */
  push32(0x115b186eu); f_115a8090();
  /* 115b186e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1871 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b1873 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1876 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 115b1879 mov dword ptr [0x115d1890], ecx */
  w32((uint32_t)(0x115d1890), (ECX));
  /* 115b187f push 1 */
  push32((uint32_t)(0x1u));
  /* 115b1881 push 0x115b18b0 */
  push32((uint32_t)(0x115b18b0u));
  /* 115b1886 call dword ptr [0x115d42fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42fc))), 0x115b188cu);
  /* 115b188c mov edx, dword ptr [0x115d18a4] */
  EDX = (r32((uint32_t)(0x115d18a4)));
  /* 115b1892 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 115b1895 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b1897 jne 0x115b18a3 */
  if (!C.zf) goto L_115b18a3;
  /* 115b1899 mov dword ptr [0x115d18a4], 0 */
  w32((uint32_t)(0x115d18a4), (0x0u));
L_115b18a3:;
  /* 115b18a3 pop ebp */
  EBP = (pop32());
  /* 115b18a4 ret  */
  ESPCHK(0x115b1860u, _esp0);
  ESP += 4; return;
}

/* FUN_100118b0 @ 0x115b18b0 (172 bytes, 54 insns) */
void f_115b18b0(void) {
  FTRACE(0x115b18b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b18b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b18b1 mov ebp, esp */
  EBP = (ESP);
  /* 115b18b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b18b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b18b9 push eax */
  push32((uint32_t)(EAX));
  /* 115b18ba call 0x115b1cf0 */
  push32(0x115b18bfu); f_115b1cf0();
  /* 115b18bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b18c2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 115b18c5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 115b18c7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 115b18ca push ecx */
  push32((uint32_t)(ECX));
  /* 115b18cb mov edx, dword ptr [0x115d1890] */
  EDX = (r32((uint32_t)(0x115d1890)));
  /* 115b18d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b18d3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b18d5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 115b18db add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b18e1 push edx */
  push32((uint32_t)(EDX));
  /* 115b18e2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b18e5 push eax */
  push32((uint32_t)(EAX));
  /* 115b18e6 call dword ptr [0x115d18ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d18ac))), 0x115b18ecu);
  /* 115b18ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b18ee jne 0x115b1901 */
  if (!C.zf) goto L_115b1901;
  /* 115b18f0 mov dword ptr [0x115d18a4], 0 */
  w32((uint32_t)(0x115d18a4), (0x0u));
  /* 115b18fa mov eax, 1 */
  EAX = (0x1u);
  /* 115b18ff jmp 0x115b1956 */
  goto L_115b1956;
L_115b1901:;
  /* 115b1901 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 115b1904 push ecx */
  push32((uint32_t)(ECX));
  /* 115b1905 mov edx, dword ptr [0x115d18a0] */
  EDX = (r32((uint32_t)(0x115d18a0)));
  /* 115b190b push edx */
  push32((uint32_t)(EDX));
  /* 115b190c call 0x115b3930 */
  push32(0x115b1911u); f_115b3930();
  /* 115b1911 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1914 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1916 jne 0x115b1949 */
  if (!C.zf) goto L_115b1949;
  /* 115b1918 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b191b push eax */
  push32((uint32_t)(EAX));
  /* 115b191c call 0x115b1a30 */
  push32(0x115b1921u); f_115b1a30();
  /* 115b1921 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1924 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1926 je 0x115b1949 */
  if (C.zf) goto L_115b1949;
  /* 115b1928 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115b192b mov dword ptr [0x115d18a8], ecx */
  w32((uint32_t)(0x115d18a8), (ECX));
  /* 115b1931 mov edx, dword ptr [0x115d18a8] */
  EDX = (r32((uint32_t)(0x115d18a8)));
  /* 115b1937 mov dword ptr [0x115d188c], edx */
  w32((uint32_t)(0x115d188c), (EDX));
  /* 115b193d mov eax, dword ptr [0x115d18a4] */
  EAX = (r32((uint32_t)(0x115d18a4)));
  /* 115b1942 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 115b1944 mov dword ptr [0x115d18a4], eax */
  w32((uint32_t)(0x115d18a4), (EAX));
L_115b1949:;
  /* 115b1949 mov eax, dword ptr [0x115d18a4] */
  EAX = (r32((uint32_t)(0x115d18a4)));
  /* 115b194e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 115b1951 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115b1953 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1955 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_115b1956:;
  /* 115b1956 mov esp, ebp */
  ESP = (EBP);
  /* 115b1958 pop ebp */
  EBP = (pop32());
  /* 115b1959 ret 4 */
  ESPCHK(0x115b18b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011960 @ 0x115b1960 (43 bytes, 11 insns) */
void f_115b1960(void) {
  FTRACE(0x115b1960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1960 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1961 mov ebp, esp */
  EBP = (ESP);
  /* 115b1963 mov eax, dword ptr [0x115d18a4] */
  EAX = (r32((uint32_t)(0x115d18a4)));
  /* 115b1968 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 115b196d mov dword ptr [0x115d18a4], eax */
  w32((uint32_t)(0x115d18a4), (EAX));
  /* 115b1972 call dword ptr [0x115d42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42ec))), 0x115b1978u);
  /* 115b1978 mov dword ptr [0x115d18a8], eax */
  w32((uint32_t)(0x115d18a8), (EAX));
  /* 115b197d mov ecx, dword ptr [0x115d18a8] */
  ECX = (r32((uint32_t)(0x115d18a8)));
  /* 115b1983 mov dword ptr [0x115d188c], ecx */
  w32((uint32_t)(0x115d188c), (ECX));
  /* 115b1989 pop ebp */
  EBP = (pop32());
  /* 115b198a ret  */
  ESPCHK(0x115b1960u, _esp0);
  ESP += 4; return;
}

/* FUN_10011990 @ 0x115b1990 (155 bytes, 57 insns) */
void f_115b1990(void) {
  FTRACE(0x115b1990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1990 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1991 mov ebp, esp */
  EBP = (ESP);
  /* 115b1993 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1996 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b199a je 0x115b19bb */
  if (C.zf) goto L_115b19bb;
  /* 115b199c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b199f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115b19a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b19a4 je 0x115b19bb */
  if (C.zf) goto L_115b19bb;
  /* 115b19a6 push 0x115cd96c */
  push32((uint32_t)(0x115cd96cu));
  /* 115b19ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b19ae push edx */
  push32((uint32_t)(EDX));
  /* 115b19af call 0x115b0ef0 */
  push32(0x115b19b4u); f_115b0ef0();
  /* 115b19b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b19b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b19b9 jne 0x115b19e3 */
  if (!C.zf) goto L_115b19e3;
L_115b19bb:;
  /* 115b19bb push 8 */
  push32((uint32_t)(0x8u));
  /* 115b19bd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 115b19c0 push eax */
  push32((uint32_t)(EAX));
  /* 115b19c1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 115b19c6 mov ecx, dword ptr [0x115d18a8] */
  ECX = (r32((uint32_t)(0x115d18a8)));
  /* 115b19cc push ecx */
  push32((uint32_t)(ECX));
  /* 115b19cd call dword ptr [0x115d18ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d18ac))), 0x115b19d3u);
  /* 115b19d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b19d5 jne 0x115b19db */
  if (!C.zf) goto L_115b19db;
  /* 115b19d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b19d9 jmp 0x115b1a27 */
  goto L_115b1a27;
L_115b19db:;
  /* 115b19db lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 115b19de mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 115b19e1 jmp 0x115b1a1b */
  goto L_115b1a1b;
L_115b19e3:;
  /* 115b19e3 push 0x115cd968 */
  push32((uint32_t)(0x115cd968u));
  /* 115b19e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b19eb push eax */
  push32((uint32_t)(EAX));
  /* 115b19ec call 0x115b0ef0 */
  push32(0x115b19f1u); f_115b0ef0();
  /* 115b19f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b19f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b19f6 jne 0x115b1a1b */
  if (!C.zf) goto L_115b1a1b;
  /* 115b19f8 push 8 */
  push32((uint32_t)(0x8u));
  /* 115b19fa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 115b19fd push ecx */
  push32((uint32_t)(ECX));
  /* 115b19fe push 0xb */
  push32((uint32_t)(0xbu));
  /* 115b1a00 mov edx, dword ptr [0x115d18a8] */
  EDX = (r32((uint32_t)(0x115d18a8)));
  /* 115b1a06 push edx */
  push32((uint32_t)(EDX));
  /* 115b1a07 call dword ptr [0x115d18ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d18ac))), 0x115b1a0du);
  /* 115b1a0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1a0f jne 0x115b1a15 */
  if (!C.zf) goto L_115b1a15;
  /* 115b1a11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b1a13 jmp 0x115b1a27 */
  goto L_115b1a27;
L_115b1a15:;
  /* 115b1a15 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 115b1a18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_115b1a1b:;
  /* 115b1a1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1a1e push ecx */
  push32((uint32_t)(ECX));
  /* 115b1a1f call 0x115b3b10 */
  push32(0x115b1a24u); f_115b3b10();
  /* 115b1a24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115b1a27:;
  /* 115b1a27 mov esp, ebp */
  ESP = (EBP);
  /* 115b1a29 pop ebp */
  EBP = (pop32());
  /* 115b1a2a ret  */
  ESPCHK(0x115b1990u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a30 @ 0x115b1a30 (79 bytes, 26 insns) */
void f_115b1a30(void) {
  FTRACE(0x115b1a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1a30 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1a31 mov ebp, esp */
  EBP = (ESP);
  /* 115b1a33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1a36 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 115b1a3a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 115b1a3e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115b1a45 jmp 0x115b1a50 */
  goto L_115b1a50;
L_115b1a47:;
  /* 115b1a47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b1a4a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1a4d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_115b1a50:;
  /* 115b1a50 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1a54 jae 0x115b1a76 */
  if (!C.cf) goto L_115b1a76;
  /* 115b1a56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b1a59 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115b1a5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b1a62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115b1a64 mov cx, word ptr [eax*2 + 0x115d09c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x115d09c4)));
  /* 115b1a6c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1a6e jne 0x115b1a74 */
  if (!C.zf) goto L_115b1a74;
  /* 115b1a70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b1a72 jmp 0x115b1a7b */
  goto L_115b1a7b;
L_115b1a74:;
  /* 115b1a74 jmp 0x115b1a47 */
  goto L_115b1a47;
L_115b1a76:;
  /* 115b1a76 mov eax, 1 */
  EAX = (0x1u);
L_115b1a7b:;
  /* 115b1a7b mov esp, ebp */
  ESP = (EBP);
  /* 115b1a7d pop ebp */
  EBP = (pop32());
  /* 115b1a7e ret  */
  ESPCHK(0x115b1a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a80 @ 0x115b1a80 (135 bytes, 48 insns) */
void f_115b1a80(void) {
  FTRACE(0x115b1a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1a80 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1a81 mov ebp, esp */
  EBP = (ESP);
  /* 115b1a83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1a86 push esi */
  push32((uint32_t)(ESI));
  /* 115b1a87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1a8a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b1a8f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b1a94 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b1a99 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 115b1a9c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b1aa1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b1aa4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 115b1aa6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 115b1aa9 push ecx */
  push32((uint32_t)(ECX));
  /* 115b1aaa push 1 */
  push32((uint32_t)(0x1u));
  /* 115b1aac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b1aaf push edx */
  push32((uint32_t)(EDX));
  /* 115b1ab0 call dword ptr [0x115d18ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d18ac))), 0x115b1ab6u);
  /* 115b1ab6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1ab8 jne 0x115b1abe */
  if (!C.zf) goto L_115b1abe;
  /* 115b1aba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b1abc jmp 0x115b1b02 */
  goto L_115b1b02;
L_115b1abe:;
  /* 115b1abe lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 115b1ac1 push eax */
  push32((uint32_t)(EAX));
  /* 115b1ac2 call 0x115b1cf0 */
  push32(0x115b1ac7u); f_115b1cf0();
  /* 115b1ac7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1aca cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1acd je 0x115b1afd */
  if (C.zf) goto L_115b1afd;
  /* 115b1acf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1ad3 je 0x115b1afd */
  if (C.zf) goto L_115b1afd;
  /* 115b1ad5 mov ecx, dword ptr [0x115d189c] */
  ECX = (r32((uint32_t)(0x115d189c)));
  /* 115b1adb push ecx */
  push32((uint32_t)(ECX));
  /* 115b1adc call 0x115b1d70 */
  push32(0x115b1ae1u); f_115b1d70();
  /* 115b1ae1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1ae4 mov esi, eax */
  ESI = (EAX);
  /* 115b1ae6 mov edx, dword ptr [0x115d189c] */
  EDX = (r32((uint32_t)(0x115d189c)));
  /* 115b1aec push edx */
  push32((uint32_t)(EDX));
  /* 115b1aed call 0x115a8090 */
  push32(0x115b1af2u); f_115a8090();
  /* 115b1af2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1af5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1af7 jne 0x115b1afd */
  if (!C.zf) goto L_115b1afd;
  /* 115b1af9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b1afb jmp 0x115b1b02 */
  goto L_115b1b02;
L_115b1afd:;
  /* 115b1afd mov eax, 1 */
  EAX = (0x1u);
L_115b1b02:;
  /* 115b1b02 pop esi */
  ESI = (pop32());
  /* 115b1b03 mov esp, ebp */
  ESP = (EBP);
  /* 115b1b05 pop ebp */
  EBP = (pop32());
  /* 115b1b06 ret  */
  ESPCHK(0x115b1a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b10 @ 0x115b1b10 (77 bytes, 18 insns) */
void f_115b1b10(void) {
  FTRACE(0x115b1b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1b10 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1b11 mov ebp, esp */
  EBP = (ESP);
  /* 115b1b13 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1b19 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 115b1b23 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 115b1b29 push eax */
  push32((uint32_t)(EAX));
  /* 115b1b2a call dword ptr [0x115d42e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42e8))), 0x115b1b30u);
  /* 115b1b30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1b32 je 0x115b1b49 */
  if (C.zf) goto L_115b1b49;
  /* 115b1b34 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1b3b jne 0x115b1b49 */
  if (!C.zf) goto L_115b1b49;
  /* 115b1b3d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 115b1b47 jmp 0x115b1b53 */
  goto L_115b1b53;
L_115b1b49:;
  /* 115b1b49 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_115b1b53:;
  /* 115b1b53 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 115b1b59 mov esp, ebp */
  ESP = (EBP);
  /* 115b1b5b pop ebp */
  EBP = (pop32());
  /* 115b1b5c ret  */
  ESPCHK(0x115b1b10u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x115b1b60 (388 bytes, 118 insns) */
void f_115b1b60(void) {
  FTRACE(0x115b1b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1b60 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1b61 mov ebp, esp */
  EBP = (ESP);
  /* 115b1b63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1b66 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115b1b6d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 115b1b74 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_115b1b7b:;
  /* 115b1b7b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b1b7e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1b81 jg 0x115b1cc8 */
  if ((!C.zf&&C.sf==C.of)) goto L_115b1cc8;
  /* 115b1b87 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b1b8a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1b8d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115b1b8e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1b90 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115b1b92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b1b95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1b98 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b1b9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1b9e cmp edx, dword ptr [ecx + 0x115d0520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x115d0520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1ba4 jne 0x115b1c9e */
  if (!C.zf) goto L_115b1c9e;
  /* 115b1baa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b1bad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115b1bb0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1bb4 ja 0x115b1bd7 */
  if ((!C.cf&&!C.zf)) goto L_115b1bd7;
  /* 115b1bb6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1bba je 0x115b1c49 */
  if (C.zf) goto L_115b1c49;
  /* 115b1bc0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1bc4 je 0x115b1bf4 */
  if (C.zf) goto L_115b1bf4;
  /* 115b1bc6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1bca je 0x115b1c16 */
  if (C.zf) goto L_115b1c16;
  /* 115b1bcc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1bd0 je 0x115b1c38 */
  if (C.zf) goto L_115b1c38;
  /* 115b1bd2 jmp 0x115b1c68 */
  goto L_115b1c68;
L_115b1bd7:;
  /* 115b1bd7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1bde je 0x115b1c05 */
  if (C.zf) goto L_115b1c05;
  /* 115b1be0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1be7 je 0x115b1c27 */
  if (C.zf) goto L_115b1c27;
  /* 115b1be9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1bf0 je 0x115b1c5a */
  if (C.zf) goto L_115b1c5a;
  /* 115b1bf2 jmp 0x115b1c68 */
  goto L_115b1c68;
L_115b1bf4:;
  /* 115b1bf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1bf7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b1bfa add ecx, 0x115d0524 */
  { uint32_t _a=(ECX),_b=(0x115d0524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1c00 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b1c03 jmp 0x115b1c68 */
  goto L_115b1c68;
L_115b1c05:;
  /* 115b1c05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1c08 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b1c0b mov eax, dword ptr [edx + 0x115d052c] */
  EAX = (r32((uint32_t)(EDX + 0x115d052c)));
  /* 115b1c11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b1c14 jmp 0x115b1c68 */
  goto L_115b1c68;
L_115b1c16:;
  /* 115b1c16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1c19 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b1c1c add ecx, 0x115d0530 */
  { uint32_t _a=(ECX),_b=(0x115d0530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1c22 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b1c25 jmp 0x115b1c68 */
  goto L_115b1c68;
L_115b1c27:;
  /* 115b1c27 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1c2a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b1c2d mov eax, dword ptr [edx + 0x115d0534] */
  EAX = (r32((uint32_t)(EDX + 0x115d0534)));
  /* 115b1c33 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b1c36 jmp 0x115b1c68 */
  goto L_115b1c68;
L_115b1c38:;
  /* 115b1c38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1c3b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b1c3e add ecx, 0x115d0538 */
  { uint32_t _a=(ECX),_b=(0x115d0538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1c44 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b1c47 jmp 0x115b1c68 */
  goto L_115b1c68;
L_115b1c49:;
  /* 115b1c49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1c4c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b1c4f add edx, 0x115d053c */
  { uint32_t _a=(EDX),_b=(0x115d053cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1c55 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115b1c58 jmp 0x115b1c68 */
  goto L_115b1c68;
L_115b1c5a:;
  /* 115b1c5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1c5d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b1c60 add eax, 0x115d0544 */
  { uint32_t _a=(EAX),_b=(0x115d0544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1c65 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115b1c68:;
  /* 115b1c68 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1c6c je 0x115b1c74 */
  if (C.zf) goto L_115b1c74;
  /* 115b1c6e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1c72 jge 0x115b1c76 */
  if ((C.sf==C.of)) goto L_115b1c76;
L_115b1c74:;
  /* 115b1c74 jmp 0x115b1cc8 */
  goto L_115b1cc8;
L_115b1c76:;
  /* 115b1c76 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b1c79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1c7c push ecx */
  push32((uint32_t)(ECX));
  /* 115b1c7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b1c80 push edx */
  push32((uint32_t)(EDX));
  /* 115b1c81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b1c84 push eax */
  push32((uint32_t)(EAX));
  /* 115b1c85 call 0x115a8a80 */
  push32(0x115b1c8au); f_115a8a80();
  /* 115b1c8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1c8d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b1c90 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1c93 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 115b1c97 mov eax, 1 */
  EAX = (0x1u);
  /* 115b1c9c jmp 0x115b1cde */
  goto L_115b1cde;
L_115b1c9e:;
  /* 115b1c9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1ca1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b1ca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1ca7 cmp eax, dword ptr [edx + 0x115d0520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x115d0520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1cad jae 0x115b1cba */
  if (!C.cf) goto L_115b1cba;
  /* 115b1caf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1cb2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1cb5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115b1cb8 jmp 0x115b1cc3 */
  goto L_115b1cc3;
L_115b1cba:;
  /* 115b1cba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1cbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1cc0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_115b1cc3:;
  /* 115b1cc3 jmp 0x115b1b7b */
  goto L_115b1b7b;
L_115b1cc8:;
  /* 115b1cc8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b1ccb push eax */
  push32((uint32_t)(EAX));
  /* 115b1ccc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b1ccf push ecx */
  push32((uint32_t)(ECX));
  /* 115b1cd0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b1cd3 push edx */
  push32((uint32_t)(EDX));
  /* 115b1cd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1cd7 push eax */
  push32((uint32_t)(EAX));
  /* 115b1cd8 call dword ptr [0x115d42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42f4))), 0x115b1cdeu);
L_115b1cde:;
  /* 115b1cde mov esp, ebp */
  ESP = (EBP);
  /* 115b1ce0 pop ebp */
  EBP = (pop32());
  /* 115b1ce1 ret 0x10 */
  ESPCHK(0x115b1b60u, _esp0);
  ESP += 20; return;
}

/* FUN_10011cf0 @ 0x115b1cf0 (118 bytes, 42 insns) */
void f_115b1cf0(void) {
  FTRACE(0x115b1cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1cf1 mov ebp, esp */
  EBP = (ESP);
  /* 115b1cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1cf6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115b1cfd:;
  /* 115b1cfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1d00 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115b1d02 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 115b1d05 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115b1d09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1d0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1d0f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115b1d12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b1d14 je 0x115b1d5f */
  if (C.zf) goto L_115b1d5f;
  /* 115b1d16 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115b1d1a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1d1d jl 0x115b1d32 */
  if ((C.sf!=C.of)) goto L_115b1d32;
  /* 115b1d1f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115b1d23 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1d26 jg 0x115b1d32 */
  if ((!C.zf&&C.sf==C.of)) goto L_115b1d32;
  /* 115b1d28 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 115b1d2b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 115b1d2d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 115b1d30 jmp 0x115b1d4c */
  goto L_115b1d4c;
L_115b1d32:;
  /* 115b1d32 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115b1d36 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1d39 jl 0x115b1d4c */
  if ((C.sf!=C.of)) goto L_115b1d4c;
  /* 115b1d3b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115b1d3f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1d42 jg 0x115b1d4c */
  if ((!C.zf&&C.sf==C.of)) goto L_115b1d4c;
  /* 115b1d44 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 115b1d47 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 115b1d49 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_115b1d4c:;
  /* 115b1d4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b1d4f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 115b1d52 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115b1d56 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 115b1d5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b1d5d jmp 0x115b1cfd */
  goto L_115b1cfd;
L_115b1d5f:;
  /* 115b1d5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b1d62 mov esp, ebp */
  ESP = (EBP);
  /* 115b1d64 pop ebp */
  EBP = (pop32());
  /* 115b1d65 ret  */
  ESPCHK(0x115b1cf0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x115b1d70 (101 bytes, 36 insns) */
void f_115b1d70(void) {
  FTRACE(0x115b1d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1d70 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1d71 mov ebp, esp */
  EBP = (ESP);
  /* 115b1d73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1d76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115b1d7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1d80 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115b1d82 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 115b1d85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1d88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1d8b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_115b1d8e:;
  /* 115b1d8e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 115b1d92 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1d95 jl 0x115b1da0 */
  if ((C.sf!=C.of)) goto L_115b1da0;
  /* 115b1d97 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 115b1d9b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1d9e jle 0x115b1db2 */
  if ((C.zf||C.sf!=C.of)) goto L_115b1db2;
L_115b1da0:;
  /* 115b1da0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 115b1da4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1da7 jl 0x115b1dce */
  if ((C.sf!=C.of)) goto L_115b1dce;
  /* 115b1da9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 115b1dad cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1db0 jg 0x115b1dce */
  if ((!C.zf&&C.sf==C.of)) goto L_115b1dce;
L_115b1db2:;
  /* 115b1db2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b1db5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1db8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b1dbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1dbe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115b1dc0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 115b1dc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1dc6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1dc9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 115b1dcc jmp 0x115b1d8e */
  goto L_115b1d8e;
L_115b1dce:;
  /* 115b1dce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b1dd1 mov esp, ebp */
  ESP = (EBP);
  /* 115b1dd3 pop ebp */
  EBP = (pop32());
  /* 115b1dd4 ret  */
  ESPCHK(0x115b1d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011de0 @ 0x115b1de0 (122 bytes, 39 insns) */
void f_115b1de0(void) {
  FTRACE(0x115b1de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1de0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1de1 mov ebp, esp */
  EBP = (ESP);
  /* 115b1de3 push ecx */
  push32((uint32_t)(ECX));
  /* 115b1de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1de7 cmp eax, dword ptr [0x115d313c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115d313c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1ded jae 0x115b1e11 */
  if (!C.cf) goto L_115b1e11;
  /* 115b1def mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1df2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 115b1df5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1df8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 115b1dfb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b1dfe mov eax, dword ptr [ecx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x115d3000)));
  /* 115b1e05 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 115b1e0a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115b1e0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b1e0f jne 0x115b1e2c */
  if (!C.zf) goto L_115b1e2c;
L_115b1e11:;
  /* 115b1e11 call 0x115ad130 */
  push32(0x115b1e16u); f_115ad130();
  /* 115b1e16 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 115b1e1c call 0x115ad140 */
  push32(0x115b1e21u); f_115ad140();
  /* 115b1e21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115b1e27 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b1e2a jmp 0x115b1e56 */
  goto L_115b1e56;
L_115b1e2c:;
  /* 115b1e2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1e2f push edx */
  push32((uint32_t)(EDX));
  /* 115b1e30 call 0x115ae950 */
  push32(0x115b1e35u); f_115ae950();
  /* 115b1e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1e38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1e3b push eax */
  push32((uint32_t)(EAX));
  /* 115b1e3c call 0x115b1e60 */
  push32(0x115b1e41u); f_115b1e60();
  /* 115b1e41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1e44 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b1e47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1e4a push ecx */
  push32((uint32_t)(ECX));
  /* 115b1e4b call 0x115ae9e0 */
  push32(0x115b1e50u); f_115ae9e0();
  /* 115b1e50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1e53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115b1e56:;
  /* 115b1e56 mov esp, ebp */
  ESP = (EBP);
  /* 115b1e58 pop ebp */
  EBP = (pop32());
  /* 115b1e59 ret  */
  ESPCHK(0x115b1de0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x115b1e60 (170 bytes, 59 insns) */
void f_115b1e60(void) {
  FTRACE(0x115b1e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1e60 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1e61 mov ebp, esp */
  EBP = (ESP);
  /* 115b1e63 push ecx */
  push32((uint32_t)(ECX));
  /* 115b1e64 push esi */
  push32((uint32_t)(ESI));
  /* 115b1e65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1e68 push eax */
  push32((uint32_t)(EAX));
  /* 115b1e69 call 0x115ae7d0 */
  push32(0x115b1e6eu); f_115ae7d0();
  /* 115b1e6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1e71 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1e74 je 0x115b1eb3 */
  if (C.zf) goto L_115b1eb3;
  /* 115b1e76 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1e7a je 0x115b1e82 */
  if (C.zf) goto L_115b1e82;
  /* 115b1e7c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1e80 jne 0x115b1e9c */
  if (!C.zf) goto L_115b1e9c;
L_115b1e82:;
  /* 115b1e82 push 1 */
  push32((uint32_t)(0x1u));
  /* 115b1e84 call 0x115ae7d0 */
  push32(0x115b1e89u); f_115ae7d0();
  /* 115b1e89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1e8c mov esi, eax */
  ESI = (EAX);
  /* 115b1e8e push 2 */
  push32((uint32_t)(0x2u));
  /* 115b1e90 call 0x115ae7d0 */
  push32(0x115b1e95u); f_115ae7d0();
  /* 115b1e95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1e98 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1e9a je 0x115b1eb3 */
  if (C.zf) goto L_115b1eb3;
L_115b1e9c:;
  /* 115b1e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1e9f push ecx */
  push32((uint32_t)(ECX));
  /* 115b1ea0 call 0x115ae7d0 */
  push32(0x115b1ea5u); f_115ae7d0();
  /* 115b1ea5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1ea8 push eax */
  push32((uint32_t)(EAX));
  /* 115b1ea9 call dword ptr [0x115d42f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42f0))), 0x115b1eafu);
  /* 115b1eaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1eb1 je 0x115b1ebc */
  if (C.zf) goto L_115b1ebc;
L_115b1eb3:;
  /* 115b1eb3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115b1eba jmp 0x115b1ec5 */
  goto L_115b1ec5;
L_115b1ebc:;
  /* 115b1ebc call dword ptr [0x115d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43d8))), 0x115b1ec2u);
  /* 115b1ec2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115b1ec5:;
  /* 115b1ec5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1ec8 push edx */
  push32((uint32_t)(EDX));
  /* 115b1ec9 call 0x115ae6f0 */
  push32(0x115b1eceu); f_115ae6f0();
  /* 115b1ece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1ed1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1ed4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115b1ed7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1eda and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 115b1edd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115b1ee0 mov edx, dword ptr [eax*4 + 0x115d3000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x115d3000)));
  /* 115b1ee7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 115b1eec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1ef0 je 0x115b1f03 */
  if (C.zf) goto L_115b1f03;
  /* 115b1ef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b1ef5 push eax */
  push32((uint32_t)(EAX));
  /* 115b1ef6 call 0x115ad090 */
  push32(0x115b1efbu); f_115ad090();
  /* 115b1efb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1efe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115b1f01 jmp 0x115b1f05 */
  goto L_115b1f05;
L_115b1f03:;
  /* 115b1f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115b1f05:;
  /* 115b1f05 pop esi */
  ESI = (pop32());
  /* 115b1f06 mov esp, ebp */
  ESP = (EBP);
  /* 115b1f08 pop ebp */
  EBP = (pop32());
  /* 115b1f09 ret  */
  ESPCHK(0x115b1e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f10 @ 0x115b1f10 (146 bytes, 52 insns) */
void f_115b1f10(void) {
  FTRACE(0x115b1f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1f10 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1f11 mov ebp, esp */
  EBP = (ESP);
  /* 115b1f13 push ebx */
  push32((uint32_t)(EBX));
  /* 115b1f14 push esi */
  push32((uint32_t)(ESI));
  /* 115b1f15 push edi */
  push32((uint32_t)(EDI));
L_115b1f16:;
  /* 115b1f16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1f1a jne 0x115b1f3a */
  if (!C.zf) goto L_115b1f3a;
  /* 115b1f1c push 0x115cd2a8 */
  push32((uint32_t)(0x115cd2a8u));
  /* 115b1f21 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b1f23 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 115b1f25 push 0x115cd970 */
  push32((uint32_t)(0x115cd970u));
  /* 115b1f2a push 2 */
  push32((uint32_t)(0x2u));
  /* 115b1f2c call 0x115a4320 */
  push32(0x115b1f31u); f_115a4320();
  /* 115b1f31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1f34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1f37 jne 0x115b1f3a */
  if (!C.zf) goto L_115b1f3a;
  /* 115b1f39 int3  */
  x86_unimpl("int3 @ 0x115b1f39");
L_115b1f3a:;
  /* 115b1f3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115b1f3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115b1f3e jne 0x115b1f16 */
  if (!C.zf) goto L_115b1f16;
  /* 115b1f40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1f43 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115b1f46 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 115b1f4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115b1f4e je 0x115b1f9d */
  if (C.zf) goto L_115b1f9d;
  /* 115b1f50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1f53 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115b1f56 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 115b1f59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115b1f5b je 0x115b1f9d */
  if (C.zf) goto L_115b1f9d;
  /* 115b1f5d push 2 */
  push32((uint32_t)(0x2u));
  /* 115b1f5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1f62 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115b1f65 push eax */
  push32((uint32_t)(EAX));
  /* 115b1f66 call 0x115a5cf0 */
  push32(0x115b1f6bu); f_115a5cf0();
  /* 115b1f6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1f6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1f71 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115b1f74 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 115b1f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1f7d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 115b1f80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1f83 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 115b1f89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1f8c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 115b1f93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b1f96 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_115b1f9d:;
  /* 115b1f9d pop edi */
  EDI = (pop32());
  /* 115b1f9e pop esi */
  ESI = (pop32());
  /* 115b1f9f pop ebx */
  EBX = (pop32());
  /* 115b1fa0 pop ebp */
  EBP = (pop32());
  /* 115b1fa1 ret  */
  ESPCHK(0x115b1f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fb0 @ 0x115b1fb0 (289 bytes, 97 insns) */
void f_115b1fb0(void) {
  FTRACE(0x115b1fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b1fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b1fb1 mov ebp, esp */
  EBP = (ESP);
  /* 115b1fb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b1fb6 push esi */
  push32((uint32_t)(ESI));
  /* 115b1fb7 mov eax, dword ptr [0x115d0c98] */
  EAX = (r32((uint32_t)(0x115d0c98)));
  /* 115b1fbc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b1fbf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115b1fc6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115b1fcd jmp 0x115b1fd8 */
  goto L_115b1fd8;
L_115b1fcf:;
  /* 115b1fcf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b1fd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1fd5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_115b1fd8:;
  /* 115b1fd8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b1fdc jae 0x115b2011 */
  if (!C.cf) goto L_115b2011;
  /* 115b1fde mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b1fe1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1fe4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 115b1fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 115b1fe8 call 0x115a8090 */
  push32(0x115b1fedu); f_115a8090();
  /* 115b1fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b1ff0 mov esi, eax */
  ESI = (EAX);
  /* 115b1ff2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b1ff5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b1ff8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 115b1ffc push ecx */
  push32((uint32_t)(ECX));
  /* 115b1ffd call 0x115a8090 */
  push32(0x115b2002u); f_115a8090();
  /* 115b2002 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2005 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2008 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 115b200c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115b200f jmp 0x115b1fcf */
  goto L_115b1fcf;
L_115b2011:;
  /* 115b2011 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b2014 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2017 push eax */
  push32((uint32_t)(EAX));
  /* 115b2018 call 0x115a5240 */
  push32(0x115b201du); f_115a5240();
  /* 115b201d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2020 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b2023 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2027 je 0x115b20c9 */
  if (C.zf) goto L_115b20c9;
  /* 115b202d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2030 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115b2033 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115b203a jmp 0x115b2045 */
  goto L_115b2045;
L_115b203c:;
  /* 115b203c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b203f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2042 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_115b2045:;
  /* 115b2045 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2049 jae 0x115b20ba */
  if (!C.cf) goto L_115b20ba;
  /* 115b204b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b204e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 115b2051 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2054 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2057 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115b205a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b205d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2060 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 115b2063 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2064 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2067 push edx */
  push32((uint32_t)(EDX));
  /* 115b2068 call 0x115a8210 */
  push32(0x115b206du); f_115a8210();
  /* 115b206d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2070 push eax */
  push32((uint32_t)(EAX));
  /* 115b2071 call 0x115a8090 */
  push32(0x115b2076u); f_115a8090();
  /* 115b2076 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2079 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b207c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b207e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115b2081 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2084 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 115b2087 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b208a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b208d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115b2090 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b2093 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2096 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 115b209a push eax */
  push32((uint32_t)(EAX));
  /* 115b209b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b209e push ecx */
  push32((uint32_t)(ECX));
  /* 115b209f call 0x115a8210 */
  push32(0x115b20a4u); f_115a8210();
  /* 115b20a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b20a7 push eax */
  push32((uint32_t)(EAX));
  /* 115b20a8 call 0x115a8090 */
  push32(0x115b20adu); f_115a8090();
  /* 115b20ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b20b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b20b3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b20b5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115b20b8 jmp 0x115b203c */
  goto L_115b203c;
L_115b20ba:;
  /* 115b20ba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b20bd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 115b20c0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b20c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b20c6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_115b20c9:;
  /* 115b20c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b20cc pop esi */
  ESI = (pop32());
  /* 115b20cd mov esp, ebp */
  ESP = (EBP);
  /* 115b20cf pop ebp */
  EBP = (pop32());
  /* 115b20d0 ret  */
  ESPCHK(0x115b1fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100120e0 @ 0x115b20e0 (291 bytes, 97 insns) */
void f_115b20e0(void) {
  FTRACE(0x115b20e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b20e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115b20e1 mov ebp, esp */
  EBP = (ESP);
  /* 115b20e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b20e6 push esi */
  push32((uint32_t)(ESI));
  /* 115b20e7 mov eax, dword ptr [0x115d0c98] */
  EAX = (r32((uint32_t)(0x115d0c98)));
  /* 115b20ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b20ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115b20f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115b20fd jmp 0x115b2108 */
  goto L_115b2108;
L_115b20ff:;
  /* 115b20ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b2102 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2105 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_115b2108:;
  /* 115b2108 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b210c jae 0x115b2142 */
  if (!C.cf) goto L_115b2142;
  /* 115b210e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b2111 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2114 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 115b2118 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2119 call 0x115a8090 */
  push32(0x115b211eu); f_115a8090();
  /* 115b211e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2121 mov esi, eax */
  ESI = (EAX);
  /* 115b2123 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b2126 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2129 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 115b212d push ecx */
  push32((uint32_t)(ECX));
  /* 115b212e call 0x115a8090 */
  push32(0x115b2133u); f_115a8090();
  /* 115b2133 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2136 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2139 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 115b213d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115b2140 jmp 0x115b20ff */
  goto L_115b20ff;
L_115b2142:;
  /* 115b2142 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b2145 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2148 push eax */
  push32((uint32_t)(EAX));
  /* 115b2149 call 0x115a5240 */
  push32(0x115b214eu); f_115a5240();
  /* 115b214e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2151 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b2154 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2158 je 0x115b21fb */
  if (C.zf) goto L_115b21fb;
  /* 115b215e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2161 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115b2164 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115b216b jmp 0x115b2176 */
  goto L_115b2176;
L_115b216d:;
  /* 115b216d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b2170 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2173 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_115b2176:;
  /* 115b2176 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b217a jae 0x115b21ec */
  if (!C.cf) goto L_115b21ec;
  /* 115b217c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b217f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 115b2182 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2185 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2188 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115b218b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b218e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2191 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 115b2195 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2196 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2199 push edx */
  push32((uint32_t)(EDX));
  /* 115b219a call 0x115a8210 */
  push32(0x115b219fu); f_115a8210();
  /* 115b219f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b21a2 push eax */
  push32((uint32_t)(EAX));
  /* 115b21a3 call 0x115a8090 */
  push32(0x115b21a8u); f_115a8090();
  /* 115b21a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b21ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b21ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b21b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115b21b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b21b6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 115b21b9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b21bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b21bf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115b21c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b21c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b21c8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 115b21cc push eax */
  push32((uint32_t)(EAX));
  /* 115b21cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b21d0 push ecx */
  push32((uint32_t)(ECX));
  /* 115b21d1 call 0x115a8210 */
  push32(0x115b21d6u); f_115a8210();
  /* 115b21d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b21d9 push eax */
  push32((uint32_t)(EAX));
  /* 115b21da call 0x115a8090 */
  push32(0x115b21dfu); f_115a8090();
  /* 115b21df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b21e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b21e5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b21e7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115b21ea jmp 0x115b216d */
  goto L_115b216d;
L_115b21ec:;
  /* 115b21ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b21ef mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 115b21f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b21f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b21f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_115b21fb:;
  /* 115b21fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b21fe pop esi */
  ESI = (pop32());
  /* 115b21ff mov esp, ebp */
  ESP = (EBP);
  /* 115b2201 pop ebp */
  EBP = (pop32());
  /* 115b2202 ret  */
  ESPCHK(0x115b20e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012210 @ 0x115b2210 (878 bytes, 273 insns) */
void f_115b2210(void) {
  FTRACE(0x115b2210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b2210 push ebp */
  push32((uint32_t)(EBP));
  /* 115b2211 mov ebp, esp */
  EBP = (ESP);
  /* 115b2213 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115b2216 push esi */
  push32((uint32_t)(ESI));
  /* 115b2217 mov eax, dword ptr [0x115d0c98] */
  EAX = (r32((uint32_t)(0x115d0c98)));
  /* 115b221c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115b221f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115b2226 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115b222d jmp 0x115b2238 */
  goto L_115b2238;
L_115b222f:;
  /* 115b222f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b2232 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2235 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_115b2238:;
  /* 115b2238 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b223c jae 0x115b2271 */
  if (!C.cf) goto L_115b2271;
  /* 115b223e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b2241 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2244 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 115b2247 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2248 call 0x115a8090 */
  push32(0x115b224du); f_115a8090();
  /* 115b224d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2250 mov esi, eax */
  ESI = (EAX);
  /* 115b2252 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b2255 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2258 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 115b225c push ecx */
  push32((uint32_t)(ECX));
  /* 115b225d call 0x115a8090 */
  push32(0x115b2262u); f_115a8090();
  /* 115b2262 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2265 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2268 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 115b226c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115b226f jmp 0x115b222f */
  goto L_115b222f;
L_115b2271:;
  /* 115b2271 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115b2278 jmp 0x115b2283 */
  goto L_115b2283;
L_115b227a:;
  /* 115b227a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b227d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2280 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_115b2283:;
  /* 115b2283 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2287 jae 0x115b22bd */
  if (!C.cf) goto L_115b22bd;
  /* 115b2289 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b228c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b228f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 115b2293 push eax */
  push32((uint32_t)(EAX));
  /* 115b2294 call 0x115a8090 */
  push32(0x115b2299u); f_115a8090();
  /* 115b2299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b229c mov esi, eax */
  ESI = (EAX);
  /* 115b229e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b22a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b22a4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 115b22a8 push eax */
  push32((uint32_t)(EAX));
  /* 115b22a9 call 0x115a8090 */
  push32(0x115b22aeu); f_115a8090();
  /* 115b22ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b22b1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b22b4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 115b22b8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115b22bb jmp 0x115b227a */
  goto L_115b227a;
L_115b22bd:;
  /* 115b22bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b22c0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 115b22c6 push eax */
  push32((uint32_t)(EAX));
  /* 115b22c7 call 0x115a8090 */
  push32(0x115b22ccu); f_115a8090();
  /* 115b22cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b22cf mov esi, eax */
  ESI = (EAX);
  /* 115b22d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b22d4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 115b22da push edx */
  push32((uint32_t)(EDX));
  /* 115b22db call 0x115a8090 */
  push32(0x115b22e0u); f_115a8090();
  /* 115b22e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b22e3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b22e6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 115b22ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b22ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b22f0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 115b22f6 push edx */
  push32((uint32_t)(EDX));
  /* 115b22f7 call 0x115a8090 */
  push32(0x115b22fcu); f_115a8090();
  /* 115b22fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b22ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b2302 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 115b2306 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115b2309 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b230c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 115b2312 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2313 call 0x115a8090 */
  push32(0x115b2318u); f_115a8090();
  /* 115b2318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b231b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b231e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 115b2322 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115b2325 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2328 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 115b232e push edx */
  push32((uint32_t)(EDX));
  /* 115b232f call 0x115a8090 */
  push32(0x115b2334u); f_115a8090();
  /* 115b2334 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2337 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b233a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 115b233e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115b2341 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115b2344 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2349 push eax */
  push32((uint32_t)(EAX));
  /* 115b234a call 0x115a5240 */
  push32(0x115b234fu); f_115a5240();
  /* 115b234f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2352 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115b2355 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2359 je 0x115b2576 */
  if (C.zf) goto L_115b2576;
  /* 115b235f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2362 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 115b2365 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2368 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b236e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115b2371 push 0xac */
  push32((uint32_t)(0xacu));
  /* 115b2376 mov eax, dword ptr [0x115d0c98] */
  EAX = (r32((uint32_t)(0x115d0c98)));
  /* 115b237b push eax */
  push32((uint32_t)(EAX));
  /* 115b237c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b237f push ecx */
  push32((uint32_t)(ECX));
  /* 115b2380 call 0x115abb40 */
  push32(0x115b2385u); f_115abb40();
  /* 115b2385 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2388 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115b238f jmp 0x115b239a */
  goto L_115b239a;
L_115b2391:;
  /* 115b2391 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b2394 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2397 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_115b239a:;
  /* 115b239a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b239e jae 0x115b240e */
  if (!C.cf) goto L_115b240e;
  /* 115b23a0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b23a3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b23a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b23a9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 115b23ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b23af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b23b2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 115b23b5 push edx */
  push32((uint32_t)(EDX));
  /* 115b23b6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b23b9 push eax */
  push32((uint32_t)(EAX));
  /* 115b23ba call 0x115a8210 */
  push32(0x115b23bfu); f_115a8210();
  /* 115b23bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b23c2 push eax */
  push32((uint32_t)(EAX));
  /* 115b23c3 call 0x115a8090 */
  push32(0x115b23c8u); f_115a8090();
  /* 115b23c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b23cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b23ce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 115b23d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115b23d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b23d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b23db mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b23de mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 115b23e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b23e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b23e8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 115b23ec push edx */
  push32((uint32_t)(EDX));
  /* 115b23ed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b23f0 push eax */
  push32((uint32_t)(EAX));
  /* 115b23f1 call 0x115a8210 */
  push32(0x115b23f6u); f_115a8210();
  /* 115b23f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b23f9 push eax */
  push32((uint32_t)(EAX));
  /* 115b23fa call 0x115a8090 */
  push32(0x115b23ffu); f_115a8090();
  /* 115b23ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2402 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2405 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 115b2409 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115b240c jmp 0x115b2391 */
  goto L_115b2391;
L_115b240e:;
  /* 115b240e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115b2415 jmp 0x115b2420 */
  goto L_115b2420;
L_115b2417:;
  /* 115b2417 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b241a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115b241d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_115b2420:;
  /* 115b2420 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115b2424 jae 0x115b2496 */
  if (!C.cf) goto L_115b2496;
  /* 115b2426 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b2429 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b242c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b242f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 115b2433 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b2436 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2439 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 115b243d push eax */
  push32((uint32_t)(EAX));
  /* 115b243e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2441 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2442 call 0x115a8210 */
  push32(0x115b2447u); f_115a8210();
  /* 115b2447 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b244a push eax */
  push32((uint32_t)(EAX));
  /* 115b244b call 0x115a8090 */
  push32(0x115b2450u); f_115a8090();
  /* 115b2450 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2453 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2456 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 115b245a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115b245d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b2460 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b2463 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2466 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 115b246a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115b246d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2470 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 115b2474 push eax */
  push32((uint32_t)(EAX));
  /* 115b2475 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2478 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2479 call 0x115a8210 */
  push32(0x115b247eu); f_115a8210();
  /* 115b247e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2481 push eax */
  push32((uint32_t)(EAX));
  /* 115b2482 call 0x115a8090 */
  push32(0x115b2487u); f_115a8090();
  /* 115b2487 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b248a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b248d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 115b2491 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115b2494 jmp 0x115b2417 */
  goto L_115b2417;
L_115b2496:;
  /* 115b2496 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b2499 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b249c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 115b24a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b24a5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 115b24ab push ecx */
  push32((uint32_t)(ECX));
  /* 115b24ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b24af push edx */
  push32((uint32_t)(EDX));
  /* 115b24b0 call 0x115a8210 */
  push32(0x115b24b5u); f_115a8210();
  /* 115b24b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b24b8 push eax */
  push32((uint32_t)(EAX));
  /* 115b24b9 call 0x115a8090 */
  push32(0x115b24beu); f_115a8090();
  /* 115b24be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b24c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b24c4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 115b24c8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115b24cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b24ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b24d1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 115b24d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b24da mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 115b24e0 push eax */
  push32((uint32_t)(EAX));
  /* 115b24e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b24e4 push ecx */
  push32((uint32_t)(ECX));
  /* 115b24e5 call 0x115a8210 */
  push32(0x115b24eau); f_115a8210();
  /* 115b24ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b24ed push eax */
  push32((uint32_t)(EAX));
  /* 115b24ee call 0x115a8090 */
  push32(0x115b24f3u); f_115a8090();
  /* 115b24f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b24f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b24f9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 115b24fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115b2500 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b2503 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2506 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 115b250c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b250f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 115b2515 push ecx */
  push32((uint32_t)(ECX));
  /* 115b2516 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2519 push edx */
  push32((uint32_t)(EDX));
  /* 115b251a call 0x115a8210 */
  push32(0x115b251fu); f_115a8210();
  /* 115b251f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2522 push eax */
  push32((uint32_t)(EAX));
  /* 115b2523 call 0x115a8090 */
  push32(0x115b2528u); f_115a8090();
  /* 115b2528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b252b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b252e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 115b2532 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115b2535 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b2538 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b253b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 115b2541 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115b2544 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 115b254a push eax */
  push32((uint32_t)(EAX));
  /* 115b254b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b254e push ecx */
  push32((uint32_t)(ECX));
  /* 115b254f call 0x115a8210 */
  push32(0x115b2554u); f_115a8210();
  /* 115b2554 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2557 push eax */
  push32((uint32_t)(EAX));
  /* 115b2558 call 0x115a8090 */
  push32(0x115b255du); f_115a8090();
  /* 115b255d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b2560 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2563 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 115b2567 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115b256a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115b256d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115b2570 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_115b2576:;
  /* 115b2576 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115b2579 pop esi */
  ESI = (pop32());
  /* 115b257a mov esp, ebp */
  ESP = (EBP);
  /* 115b257c pop ebp */
  EBP = (pop32());
  /* 115b257d ret  */
  ESPCHK(0x115b2210u, _esp0);
  ESP += 4; return;
}

/* FUN_10012580 @ 0x115b2580 (31 bytes, 15 insns) */
void f_115b2580(void) {
  FTRACE(0x115b2580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115b2580 push ebp */
  push32((uint32_t)(EBP));
  /* 115b2581 mov ebp, esp */
  EBP = (ESP);
  /* 115b2583 push 0 */
  push32((uint32_t)(0x0u));
  /* 115b2585 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115b2588 push eax */
  push32((uint32_t)(EAX));
  /* 115b2589 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115b258c push ecx */
  push32((uint32_t)(ECX));
  /* 115b258d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115b2590 push edx */
  push32((uint32_t)(EDX));
  /* 115b2591 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115b2594 push eax */
  push32((uint32_t)(EAX));
  /* 115b2595 call 0x115b25a0 */
  push32(0x115b259au); f_115b25a0();
  /* 115b259a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115b259d pop ebp */
  EBP = (pop32());
  /* 115b259e ret  */
  ESPCHK(0x115b2580u, _esp0);
  ESP += 4; return;
}

