#include "recomp.h"

/* FUN_100074e0 @ 0x106a74e0 (116 bytes, 34 insns) */
void f_106a74e0(void) {
  FTRACE(0x106a74e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a74e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a74e1 mov ebp, esp */
  EBP = (ESP);
  /* 106a74e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a74e4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 106a74eb push 9 */
  push32((uint32_t)(0x9u));
  /* 106a74ed call 0x106a6d00 */
  push32(0x106a74f2u); f_106a6d00();
  /* 106a74f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a74f5 call 0x106a8bf0 */
  push32(0x106a74fau); f_106a8bf0();
  /* 106a74fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a74fc jge 0x106a7505 */
  if ((C.sf==C.of)) goto L_106a7505;
  /* 106a74fe mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_106a7505:;
  /* 106a7505 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a7507 call 0x106a6da0 */
  push32(0x106a750cu); f_106a6da0();
  /* 106a750c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a750f push 0 */
  push32((uint32_t)(0x0u));
  /* 106a7511 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a7513 mov eax, dword ptr [0x106d0e2c] */
  EAX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a7518 push eax */
  push32((uint32_t)(EAX));
  /* 106a7519 call dword ptr [0x106d1324] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1324))), 0x106a751fu);
  /* 106a751f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a7521 jne 0x106a754d */
  if (!C.zf) goto L_106a754d;
  /* 106a7523 call dword ptr [0x106d1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1304))), 0x106a7529u);
  /* 106a7529 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a752c jne 0x106a7546 */
  if (!C.zf) goto L_106a7546;
  /* 106a752e call 0x106ab1e0 */
  push32(0x106a7533u); f_106ab1e0();
  /* 106a7533 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 106a7539 call 0x106ab1d0 */
  push32(0x106a753eu); f_106ab1d0();
  /* 106a753e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 106a7544 jmp 0x106a754d */
  goto L_106a754d;
L_106a7546:;
  /* 106a7546 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_106a754d:;
  /* 106a754d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7550 mov esp, ebp */
  ESP = (EBP);
  /* 106a7552 pop ebp */
  EBP = (pop32());
  /* 106a7553 ret  */
  ESPCHK(0x106a74e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007560 @ 0x106a7560 (10 bytes, 5 insns) */
void f_106a7560(void) {
  FTRACE(0x106a7560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a7560 push ebp */
  push32((uint32_t)(EBP));
  /* 106a7561 mov ebp, esp */
  EBP = (ESP);
  /* 106a7563 call 0x106a74e0 */
  push32(0x106a7568u); f_106a74e0();
  /* 106a7568 pop ebp */
  EBP = (pop32());
  /* 106a7569 ret  */
  ESPCHK(0x106a7560u, _esp0);
  ESP += 4; return;
}

/* FUN_10007570 @ 0x106a7570 (10 bytes, 5 insns) */
void f_106a7570(void) {
  FTRACE(0x106a7570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a7570 push ebp */
  push32((uint32_t)(EBP));
  /* 106a7571 mov ebp, esp */
  EBP = (ESP);
  /* 106a7573 mov eax, dword ptr [0x106cdc94] */
  EAX = (r32((uint32_t)(0x106cdc94)));
  /* 106a7578 pop ebp */
  EBP = (pop32());
  /* 106a7579 ret  */
  ESPCHK(0x106a7570u, _esp0);
  ESP += 4; return;
}

/* FUN_10007580 @ 0x106a7580 (31 bytes, 11 insns) */
void f_106a7580(void) {
  FTRACE(0x106a7580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a7580 push ebp */
  push32((uint32_t)(EBP));
  /* 106a7581 mov ebp, esp */
  EBP = (ESP);
  /* 106a7583 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a758a jbe 0x106a7590 */
  if ((C.cf||C.zf)) goto L_106a7590;
  /* 106a758c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a758e jmp 0x106a759d */
  goto L_106a759d;
L_106a7590:;
  /* 106a7590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7593 mov dword ptr [0x106cdc94], eax */
  w32((uint32_t)(0x106cdc94), (EAX));
  /* 106a7598 mov eax, 1 */
  EAX = (0x1u);
L_106a759d:;
  /* 106a759d pop ebp */
  EBP = (pop32());
  /* 106a759e ret  */
  ESPCHK(0x106a7580u, _esp0);
  ESP += 4; return;
}

/* FUN_100075a0 @ 0x106a75a0 (89 bytes, 20 insns) */
void f_106a75a0(void) {
  FTRACE(0x106a75a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a75a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a75a1 mov ebp, esp */
  EBP = (ESP);
  /* 106a75a3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 106a75a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a75aa mov eax, dword ptr [0x106d0e2c] */
  EAX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a75af push eax */
  push32((uint32_t)(EAX));
  /* 106a75b0 call dword ptr [0x106d1364] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1364))), 0x106a75b6u);
  /* 106a75b6 mov dword ptr [0x106d0e28], eax */
  w32((uint32_t)(0x106d0e28), (EAX));
  /* 106a75bb cmp dword ptr [0x106d0e28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0e28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a75c2 jne 0x106a75c8 */
  if (!C.zf) goto L_106a75c8;
  /* 106a75c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a75c6 jmp 0x106a75f7 */
  goto L_106a75f7;
L_106a75c8:;
  /* 106a75c8 mov ecx, dword ptr [0x106d0e28] */
  ECX = (r32((uint32_t)(0x106d0e28)));
  /* 106a75ce mov dword ptr [0x106d0e1c], ecx */
  w32((uint32_t)(0x106d0e1c), (ECX));
  /* 106a75d4 mov dword ptr [0x106d0e20], 0 */
  w32((uint32_t)(0x106d0e20), (0x0u));
  /* 106a75de mov dword ptr [0x106d0e24], 0 */
  w32((uint32_t)(0x106d0e24), (0x0u));
  /* 106a75e8 mov dword ptr [0x106d0e08], 0x10 */
  w32((uint32_t)(0x106d0e08), (0x10u));
  /* 106a75f2 mov eax, 1 */
  EAX = (0x1u);
L_106a75f7:;
  /* 106a75f7 pop ebp */
  EBP = (pop32());
  /* 106a75f8 ret  */
  ESPCHK(0x106a75a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007600 @ 0x106a7600 (85 bytes, 29 insns) */
void f_106a7600(void) {
  FTRACE(0x106a7600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a7600 push ebp */
  push32((uint32_t)(EBP));
  /* 106a7601 mov ebp, esp */
  EBP = (ESP);
  /* 106a7603 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7606 mov eax, dword ptr [0x106d0e24] */
  EAX = (r32((uint32_t)(0x106d0e24)));
  /* 106a760b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a760e mov ecx, dword ptr [0x106d0e28] */
  ECX = (r32((uint32_t)(0x106d0e28)));
  /* 106a7614 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7616 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106a7619 mov edx, dword ptr [0x106d0e28] */
  EDX = (r32((uint32_t)(0x106d0e28)));
  /* 106a761f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106a7622:;
  /* 106a7622 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a7625 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7628 jae 0x106a764f */
  if (!C.cf) goto L_106a764f;
  /* 106a762a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a762d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7630 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7633 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a7636 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a763d jae 0x106a7644 */
  if (!C.cf) goto L_106a7644;
  /* 106a763f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a7642 jmp 0x106a7651 */
  goto L_106a7651;
L_106a7644:;
  /* 106a7644 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a7647 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a764a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a764d jmp 0x106a7622 */
  goto L_106a7622;
L_106a764f:;
  /* 106a764f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106a7651:;
  /* 106a7651 mov esp, ebp */
  ESP = (EBP);
  /* 106a7653 pop ebp */
  EBP = (pop32());
  /* 106a7654 ret  */
  ESPCHK(0x106a7600u, _esp0);
  ESP += 4; return;
}

/* FUN_10007660 @ 0x106a7660 (95 bytes, 33 insns) */
void f_106a7660(void) {
  FTRACE(0x106a7660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a7660 push ebp */
  push32((uint32_t)(EBP));
  /* 106a7661 mov ebp, esp */
  EBP = (ESP);
  /* 106a7663 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7669 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a766c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a766f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106a7672 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a7675 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 106a7678 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a767b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a7680 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7683 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a7685 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7688 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106a768b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106a768d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a768f jne 0x106a76b1 */
  if (!C.zf) goto L_106a76b1;
  /* 106a7691 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a7694 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 106a7697 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a7699 jne 0x106a76b1 */
  if (!C.zf) goto L_106a76b1;
  /* 106a769b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a769e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a76a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a76a6 je 0x106a76b1 */
  if (C.zf) goto L_106a76b1;
  /* 106a76a8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 106a76af jmp 0x106a76b8 */
  goto L_106a76b8;
L_106a76b1:;
  /* 106a76b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_106a76b8:;
  /* 106a76b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a76bb mov esp, ebp */
  ESP = (EBP);
  /* 106a76bd pop ebp */
  EBP = (pop32());
  /* 106a76be ret  */
  ESPCHK(0x106a7660u, _esp0);
  ESP += 4; return;
}

/* FUN_100076c0 @ 0x106a76c0 (1485 bytes, 453 insns) */
void f_106a76c0(void) {
  FTRACE(0x106a76c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a76c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a76c1 mov ebp, esp */
  EBP = (ESP);
  /* 106a76c3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a76c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a76c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a76cc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 106a76cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a76d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a76d5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a76d8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106a76db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a76de shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 106a76e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106a76e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a76e7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a76ed mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a76f0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 106a76f7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106a76fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a76fd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7700 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106a7703 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a7706 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a7708 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a770b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 106a770e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a7711 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7714 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 106a7717 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a771a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a771c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106a771f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a7722 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 106a7725 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a7728 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a772b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106a772e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a7730 jne 0x106a7858 */
  if (!C.zf) goto L_106a7858;
  /* 106a7736 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a7739 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 106a773c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a773f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106a7742 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7746 jbe 0x106a774f */
  if ((C.cf||C.zf)) goto L_106a774f;
  /* 106a7748 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_106a774f:;
  /* 106a774f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7752 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7755 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a7758 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a775b jne 0x106a7831 */
  if (!C.zf) goto L_106a7831;
  /* 106a7761 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7765 jae 0x106a77c6 */
  if (!C.cf) goto L_106a77c6;
  /* 106a7767 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a776c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a776f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a7771 not eax */
  EAX = (~(EAX));
  /* 106a7773 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7776 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7779 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 106a777d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106a777f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7782 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7785 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 106a7789 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a778c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a778f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 106a7792 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106a7795 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7798 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a779b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 106a779e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a77a1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a77a4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106a77a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a77aa jne 0x106a77c4 */
  if (!C.zf) goto L_106a77c4;
  /* 106a77ac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a77b1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a77b4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a77b6 not eax */
  EAX = (~(EAX));
  /* 106a77b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a77bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a77bd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106a77bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a77c2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106a77c4:;
  /* 106a77c4 jmp 0x106a7831 */
  goto L_106a7831;
L_106a77c6:;
  /* 106a77c6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a77c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a77cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a77d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a77d3 not edx */
  EDX = (~(EDX));
  /* 106a77d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a77d8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a77db mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 106a77e2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a77e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a77e7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a77ea mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 106a77f1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a77f4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a77f7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106a77fa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106a77fd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7800 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7803 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 106a7806 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7809 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a780c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106a7810 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a7812 jne 0x106a7831 */
  if (!C.zf) goto L_106a7831;
  /* 106a7814 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a7817 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a781a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a781f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a7821 not edx */
  EDX = (~(EDX));
  /* 106a7823 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7826 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a7829 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106a782b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a782e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_106a7831:;
  /* 106a7831 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7834 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106a7837 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a783a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106a783d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 106a7840 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7843 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a7846 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7849 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106a784c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106a784f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7852 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7855 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_106a7858:;
  /* 106a7858 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a785b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 106a785e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7861 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106a7864 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7868 jbe 0x106a7871 */
  if ((C.cf||C.zf)) goto L_106a7871;
  /* 106a786a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_106a7871:;
  /* 106a7871 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a7874 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106a7877 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a7879 jne 0x106a79d5 */
  if (!C.zf) goto L_106a79d5;
  /* 106a787f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a7882 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7885 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 106a7888 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a788b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 106a788e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7891 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 106a7894 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7898 jbe 0x106a78a1 */
  if ((C.cf||C.zf)) goto L_106a78a1;
  /* 106a789a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_106a78a1:;
  /* 106a78a1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a78a4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a78a7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 106a78aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a78ad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 106a78b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a78b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 106a78b6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a78ba jbe 0x106a78c3 */
  if ((C.cf||C.zf)) goto L_106a78c3;
  /* 106a78bc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_106a78c3:;
  /* 106a78c3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a78c6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a78c9 je 0x106a79cf */
  if (C.zf) goto L_106a79cf;
  /* 106a78cf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 106a78d2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 106a78d5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a78d8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a78db jne 0x106a79b1 */
  if (!C.zf) goto L_106a79b1;
  /* 106a78e1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a78e5 jae 0x106a7946 */
  if (!C.cf) goto L_106a7946;
  /* 106a78e7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a78ec mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a78ef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a78f1 not edx */
  EDX = (~(EDX));
  /* 106a78f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a78f6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a78f9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 106a78fd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a78ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7902 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7905 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 106a7909 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a790c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a790f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106a7912 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106a7915 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7918 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a791b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 106a791e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7921 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7924 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106a7928 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a792a jne 0x106a7944 */
  if (!C.zf) goto L_106a7944;
  /* 106a792c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a7931 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a7934 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a7936 not edx */
  EDX = (~(EDX));
  /* 106a7938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a793b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a793d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106a793f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7942 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106a7944:;
  /* 106a7944 jmp 0x106a79b1 */
  goto L_106a79b1;
L_106a7946:;
  /* 106a7946 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a7949 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a794c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a7951 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a7953 not eax */
  EAX = (~(EAX));
  /* 106a7955 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7958 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a795b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 106a7962 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106a7964 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7967 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a796a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 106a7971 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7974 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7977 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 106a797a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106a797d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7980 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7983 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 106a7986 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7989 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a798c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106a7990 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a7992 jne 0x106a79b1 */
  if (!C.zf) goto L_106a79b1;
  /* 106a7994 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a7997 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a799a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a799f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a79a1 not eax */
  EAX = (~(EAX));
  /* 106a79a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a79a6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a79a9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106a79ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a79ae mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106a79b1:;
  /* 106a79b1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 106a79b4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106a79b7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 106a79ba mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a79bd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 106a79c0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 106a79c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106a79c6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 106a79c9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106a79cc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_106a79cf:;
  /* 106a79cf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 106a79d2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_106a79d5:;
  /* 106a79d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a79d8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106a79db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a79dd jne 0x106a79eb */
  if (!C.zf) goto L_106a79eb;
  /* 106a79df mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a79e2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a79e5 je 0x106a7afb */
  if (C.zf) goto L_106a7afb;
L_106a79eb:;
  /* 106a79eb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a79ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a79f1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 106a79f4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 106a79f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a79fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a79fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a7a00 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106a7a03 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a7a06 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a7a09 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 106a7a0c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a7a0f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a7a12 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 106a7a15 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a7a18 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a7a1b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a7a1e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106a7a21 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a7a24 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a7a27 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a7a2a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7a2d jne 0x106a7afb */
  if (!C.zf) goto L_106a7afb;
  /* 106a7a33 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7a37 jae 0x106a7a94 */
  if (!C.cf) goto L_106a7a94;
  /* 106a7a39 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7a3c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7a3f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106a7a43 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7a46 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7a49 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106a7a4c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 106a7a4f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7a52 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7a55 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 106a7a58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a7a5a jne 0x106a7a72 */
  if (!C.zf) goto L_106a7a72;
  /* 106a7a5c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a7a61 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a7a64 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a7a66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7a69 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a7a6b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106a7a6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7a70 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106a7a72:;
  /* 106a7a72 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a7a77 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a7a7a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a7a7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7a7f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7a82 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 106a7a86 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106a7a88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7a8b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7a8e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 106a7a92 jmp 0x106a7afb */
  goto L_106a7afb;
L_106a7a94:;
  /* 106a7a94 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7a97 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7a9a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106a7a9e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7aa1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7aa4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106a7aa7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 106a7aaa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7aad add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7ab0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 106a7ab3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a7ab5 jne 0x106a7ad2 */
  if (!C.zf) goto L_106a7ad2;
  /* 106a7ab7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a7aba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7abd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a7ac2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a7ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7ac7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a7aca or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106a7acc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7acf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_106a7ad2:;
  /* 106a7ad2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a7ad5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7ad8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a7add shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a7adf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7ae2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7ae5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 106a7aec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106a7aee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7af1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 106a7af4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_106a7afb:;
  /* 106a7afb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a7afe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7b01 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106a7b03 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a7b06 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7b09 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7b0c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 106a7b0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a7b12 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a7b14 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7b17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a7b1a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106a7b1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a7b1f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7b22 jne 0x106a7c89 */
  if (!C.zf) goto L_106a7c89;
  /* 106a7b28 cmp dword ptr [0x106d0e20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0e20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7b2f je 0x106a7c78 */
  if (C.zf) goto L_106a7c78;
  /* 106a7b35 mov eax, dword ptr [0x106d0e18] */
  EAX = (r32((uint32_t)(0x106d0e18)));
  /* 106a7b3a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 106a7b3d mov ecx, dword ptr [0x106d0e20] */
  ECX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7b43 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106a7b46 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7b48 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106a7b4b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 106a7b50 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 106a7b55 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7b58 push eax */
  push32((uint32_t)(EAX));
  /* 106a7b59 call dword ptr [0x106d1348] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1348))), 0x106a7b5fu);
  /* 106a7b5f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a7b64 mov ecx, dword ptr [0x106d0e18] */
  ECX = (r32((uint32_t)(0x106d0e18)));
  /* 106a7b6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a7b6c mov eax, dword ptr [0x106d0e20] */
  EAX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7b71 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106a7b74 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106a7b76 mov edx, dword ptr [0x106d0e20] */
  EDX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7b7c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106a7b7f mov eax, dword ptr [0x106d0e20] */
  EAX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7b84 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a7b87 mov edx, dword ptr [0x106d0e18] */
  EDX = (r32((uint32_t)(0x106d0e18)));
  /* 106a7b8d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 106a7b98 mov eax, dword ptr [0x106d0e20] */
  EAX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7b9d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a7ba0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 106a7ba3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106a7ba6 mov eax, dword ptr [0x106d0e20] */
  EAX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7bab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a7bae mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 106a7bb1 mov edx, dword ptr [0x106d0e20] */
  EDX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7bb7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106a7bba movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 106a7bbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a7bc0 jne 0x106a7bd6 */
  if (!C.zf) goto L_106a7bd6;
  /* 106a7bc2 mov edx, dword ptr [0x106d0e20] */
  EDX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7bc8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106a7bcb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 106a7bcd mov ecx, dword ptr [0x106d0e20] */
  ECX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7bd3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_106a7bd6:;
  /* 106a7bd6 mov edx, dword ptr [0x106d0e20] */
  EDX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7bdc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7be0 jne 0x106a7c78 */
  if (!C.zf) goto L_106a7c78;
  /* 106a7be6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 106a7beb push 0 */
  push32((uint32_t)(0x0u));
  /* 106a7bed mov eax, dword ptr [0x106d0e20] */
  EAX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7bf2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106a7bf5 push ecx */
  push32((uint32_t)(ECX));
  /* 106a7bf6 call dword ptr [0x106d1348] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1348))), 0x106a7bfcu);
  /* 106a7bfc mov edx, dword ptr [0x106d0e20] */
  EDX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7c02 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106a7c05 push eax */
  push32((uint32_t)(EAX));
  /* 106a7c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a7c08 mov ecx, dword ptr [0x106d0e2c] */
  ECX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a7c0e push ecx */
  push32((uint32_t)(ECX));
  /* 106a7c0f call dword ptr [0x106d1344] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1344))), 0x106a7c15u);
  /* 106a7c15 mov edx, dword ptr [0x106d0e24] */
  EDX = (r32((uint32_t)(0x106d0e24)));
  /* 106a7c1b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a7c1e mov eax, dword ptr [0x106d0e28] */
  EAX = (r32((uint32_t)(0x106d0e28)));
  /* 106a7c23 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7c25 mov ecx, dword ptr [0x106d0e20] */
  ECX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7c2b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7c2e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7c30 push eax */
  push32((uint32_t)(EAX));
  /* 106a7c31 mov edx, dword ptr [0x106d0e20] */
  EDX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7c37 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7c3a push edx */
  push32((uint32_t)(EDX));
  /* 106a7c3b mov eax, dword ptr [0x106d0e20] */
  EAX = (r32((uint32_t)(0x106d0e20)));
  /* 106a7c40 push eax */
  push32((uint32_t)(EAX));
  /* 106a7c41 call 0x106ab1f0 */
  push32(0x106a7c46u); f_106ab1f0();
  /* 106a7c46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7c49 mov ecx, dword ptr [0x106d0e24] */
  ECX = (r32((uint32_t)(0x106d0e24)));
  /* 106a7c4f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7c52 mov dword ptr [0x106d0e24], ecx */
  w32((uint32_t)(0x106d0e24), (ECX));
  /* 106a7c58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7c5b cmp edx, dword ptr [0x106d0e20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x106d0e20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7c61 jbe 0x106a7c6c */
  if ((C.cf||C.zf)) goto L_106a7c6c;
  /* 106a7c63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7c66 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7c69 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106a7c6c:;
  /* 106a7c6c mov ecx, dword ptr [0x106d0e28] */
  ECX = (r32((uint32_t)(0x106d0e28)));
  /* 106a7c72 mov dword ptr [0x106d0e1c], ecx */
  w32((uint32_t)(0x106d0e1c), (ECX));
L_106a7c78:;
  /* 106a7c78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7c7b mov dword ptr [0x106d0e20], edx */
  w32((uint32_t)(0x106d0e20), (EDX));
  /* 106a7c81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7c84 mov dword ptr [0x106d0e18], eax */
  w32((uint32_t)(0x106d0e18), (EAX));
L_106a7c89:;
  /* 106a7c89 mov esp, ebp */
  ESP = (EBP);
  /* 106a7c8b pop ebp */
  EBP = (pop32());
  /* 106a7c8c ret  */
  ESPCHK(0x106a76c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c90 @ 0x106a7c90 (1334 bytes, 427 insns) */
void f_106a7c90(void) {
  FTRACE(0x106a7c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a7c90 push ebp */
  push32((uint32_t)(EBP));
  /* 106a7c91 mov ebp, esp */
  EBP = (ESP);
  /* 106a7c93 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7c96 push esi */
  push32((uint32_t)(ESI));
  /* 106a7c97 mov eax, dword ptr [0x106d0e24] */
  EAX = (r32((uint32_t)(0x106d0e24)));
  /* 106a7c9c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a7c9f mov ecx, dword ptr [0x106d0e28] */
  ECX = (r32((uint32_t)(0x106d0e28)));
  /* 106a7ca5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7ca7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 106a7caa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7cad add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7cb0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 106a7cb3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 106a7cb6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a7cb9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 106a7cbc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7cbf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106a7cc2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7cc6 jge 0x106a7cdc */
  if ((C.sf==C.of)) goto L_106a7cdc;
  /* 106a7cc8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a7ccb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a7cce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a7cd0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106a7cd3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 106a7cda jmp 0x106a7cf1 */
  goto L_106a7cf1;
L_106a7cdc:;
  /* 106a7cdc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106a7ce3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a7ce6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7ce9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a7cec shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a7cee mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_106a7cf1:;
  /* 106a7cf1 mov ecx, dword ptr [0x106d0e1c] */
  ECX = (r32((uint32_t)(0x106d0e1c)));
  /* 106a7cf7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_106a7cfa:;
  /* 106a7cfa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7cfd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7d00 jae 0x106a7d26 */
  if (!C.cf) goto L_106a7d26;
  /* 106a7d02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7d05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a7d08 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 106a7d0a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7d0d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 106a7d10 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 106a7d13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106a7d15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a7d17 je 0x106a7d1b */
  if (C.zf) goto L_106a7d1b;
  /* 106a7d19 jmp 0x106a7d26 */
  goto L_106a7d26;
L_106a7d1b:;
  /* 106a7d1b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7d1e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7d21 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106a7d24 jmp 0x106a7cfa */
  goto L_106a7cfa;
L_106a7d26:;
  /* 106a7d26 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7d29 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7d2c jne 0x106a7e0d */
  if (!C.zf) goto L_106a7e0d;
  /* 106a7d32 mov eax, dword ptr [0x106d0e28] */
  EAX = (r32((uint32_t)(0x106d0e28)));
  /* 106a7d37 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_106a7d3a:;
  /* 106a7d3a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7d3d cmp ecx, dword ptr [0x106d0e1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106d0e1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7d43 jae 0x106a7d69 */
  if (!C.cf) goto L_106a7d69;
  /* 106a7d45 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7d48 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a7d4b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 106a7d4d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7d50 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 106a7d53 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 106a7d56 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a7d58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a7d5a je 0x106a7d5e */
  if (C.zf) goto L_106a7d5e;
  /* 106a7d5c jmp 0x106a7d69 */
  goto L_106a7d69;
L_106a7d5e:;
  /* 106a7d5e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7d61 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7d64 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106a7d67 jmp 0x106a7d3a */
  goto L_106a7d3a;
L_106a7d69:;
  /* 106a7d69 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7d6c cmp ecx, dword ptr [0x106d0e1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106d0e1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7d72 jne 0x106a7e0d */
  if (!C.zf) goto L_106a7e0d;
L_106a7d78:;
  /* 106a7d78 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7d7b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7d7e jae 0x106a7d96 */
  if (!C.cf) goto L_106a7d96;
  /* 106a7d80 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7d83 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7d87 je 0x106a7d8b */
  if (C.zf) goto L_106a7d8b;
  /* 106a7d89 jmp 0x106a7d96 */
  goto L_106a7d96;
L_106a7d8b:;
  /* 106a7d8b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7d8e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7d91 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106a7d94 jmp 0x106a7d78 */
  goto L_106a7d78;
L_106a7d96:;
  /* 106a7d96 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7d99 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7d9c jne 0x106a7de7 */
  if (!C.zf) goto L_106a7de7;
  /* 106a7d9e mov eax, dword ptr [0x106d0e28] */
  EAX = (r32((uint32_t)(0x106d0e28)));
  /* 106a7da3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_106a7da6:;
  /* 106a7da6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7da9 cmp ecx, dword ptr [0x106d0e1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106d0e1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7daf jae 0x106a7dc7 */
  if (!C.cf) goto L_106a7dc7;
  /* 106a7db1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7db4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7db8 je 0x106a7dbc */
  if (C.zf) goto L_106a7dbc;
  /* 106a7dba jmp 0x106a7dc7 */
  goto L_106a7dc7;
L_106a7dbc:;
  /* 106a7dbc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7dbf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7dc2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106a7dc5 jmp 0x106a7da6 */
  goto L_106a7da6;
L_106a7dc7:;
  /* 106a7dc7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7dca cmp ecx, dword ptr [0x106d0e1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106d0e1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7dd0 jne 0x106a7de7 */
  if (!C.zf) goto L_106a7de7;
  /* 106a7dd2 call 0x106a81d0 */
  push32(0x106a7dd7u); f_106a81d0();
  /* 106a7dd7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106a7dda cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7dde jne 0x106a7de7 */
  if (!C.zf) goto L_106a7de7;
  /* 106a7de0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a7de2 jmp 0x106a81c1 */
  goto L_106a81c1;
L_106a7de7:;
  /* 106a7de7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7dea push edx */
  push32((uint32_t)(EDX));
  /* 106a7deb call 0x106a82e0 */
  push32(0x106a7df0u); f_106a82e0();
  /* 106a7df0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7df3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7df6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106a7df9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106a7dfb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7dfe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a7e01 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7e04 jne 0x106a7e0d */
  if (!C.zf) goto L_106a7e0d;
  /* 106a7e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a7e08 jmp 0x106a81c1 */
  goto L_106a81c1;
L_106a7e0d:;
  /* 106a7e0d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7e10 mov dword ptr [0x106d0e1c], edx */
  w32((uint32_t)(0x106d0e1c), (EDX));
  /* 106a7e16 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7e19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a7e1c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 106a7e1f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7e22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a7e24 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 106a7e27 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7e2b je 0x106a7e50 */
  if (C.zf) goto L_106a7e50;
  /* 106a7e2d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7e30 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7e33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a7e36 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 106a7e3a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7e3d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7e40 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 106a7e43 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 106a7e4a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 106a7e4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a7e4e jne 0x106a7e85 */
  if (!C.zf) goto L_106a7e85;
L_106a7e50:;
  /* 106a7e50 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_106a7e57:;
  /* 106a7e57 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7e5a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7e5d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a7e60 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 106a7e64 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7e67 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7e6a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 106a7e6d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 106a7e74 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 106a7e76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a7e78 jne 0x106a7e85 */
  if (!C.zf) goto L_106a7e85;
  /* 106a7e7a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7e7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7e80 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 106a7e83 jmp 0x106a7e57 */
  goto L_106a7e57;
L_106a7e85:;
  /* 106a7e85 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7e88 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a7e8e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7e91 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 106a7e98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a7e9b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106a7ea2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7ea5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7ea8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a7eab and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 106a7eaf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106a7eb2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7eb6 jne 0x106a7ed2 */
  if (!C.zf) goto L_106a7ed2;
  /* 106a7eb8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 106a7ebf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7ec2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7ec5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 106a7ec8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 106a7ecf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_106a7ed2:;
  /* 106a7ed2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7ed6 jl 0x106a7eeb */
  if ((C.sf!=C.of)) goto L_106a7eeb;
  /* 106a7ed8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a7edb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106a7edd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106a7ee0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a7ee3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7ee6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106a7ee9 jmp 0x106a7ed2 */
  goto L_106a7ed2;
L_106a7eeb:;
  /* 106a7eeb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a7eee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7ef1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 106a7ef5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106a7ef8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a7efb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a7efd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7f00 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a7f03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a7f06 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 106a7f09 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7f0c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106a7f0f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7f13 jle 0x106a7f1c */
  if ((C.zf||C.sf!=C.of)) goto L_106a7f1c;
  /* 106a7f15 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_106a7f1c:;
  /* 106a7f1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a7f1f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7f22 je 0x106a8140 */
  if (C.zf) goto L_106a8140;
  /* 106a7f28 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a7f2b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a7f2e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a7f31 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7f34 jne 0x106a800a */
  if (!C.zf) goto L_106a800a;
  /* 106a7f3a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7f3e jge 0x106a7f9f */
  if ((C.sf==C.of)) goto L_106a7f9f;
  /* 106a7f40 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a7f45 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a7f48 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a7f4a not eax */
  EAX = (~(EAX));
  /* 106a7f4c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7f4f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7f52 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 106a7f56 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106a7f58 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7f5b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7f5e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 106a7f62 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7f65 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7f68 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 106a7f6b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106a7f6e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7f71 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7f74 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 106a7f77 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7f7a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7f7d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106a7f81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a7f83 jne 0x106a7f9d */
  if (!C.zf) goto L_106a7f9d;
  /* 106a7f85 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a7f8a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a7f8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a7f8f not eax */
  EAX = (~(EAX));
  /* 106a7f91 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7f94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a7f96 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106a7f98 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7f9b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106a7f9d:;
  /* 106a7f9d jmp 0x106a800a */
  goto L_106a800a;
L_106a7f9f:;
  /* 106a7f9f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a7fa2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7fa5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a7faa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a7fac not edx */
  EDX = (~(EDX));
  /* 106a7fae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7fb1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7fb4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 106a7fbb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a7fbd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a7fc0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7fc3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 106a7fca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7fcd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7fd0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106a7fd3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106a7fd6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7fd9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7fdc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 106a7fdf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a7fe2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7fe5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106a7fe9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a7feb jne 0x106a800a */
  if (!C.zf) goto L_106a800a;
  /* 106a7fed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a7ff0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7ff3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a7ff8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a7ffa not edx */
  EDX = (~(EDX));
  /* 106a7ffc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a7fff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a8002 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106a8004 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a8007 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_106a800a:;
  /* 106a800a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a800d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106a8010 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8013 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106a8016 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 106a8019 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a801c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a801f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8022 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106a8025 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106a8028 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a802c je 0x106a8140 */
  if (C.zf) goto L_106a8140;
  /* 106a8032 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a8035 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8038 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 106a803b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106a803e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8041 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a8044 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a8047 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 106a804a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a804d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a8050 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106a8053 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a8056 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8059 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 106a805c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a805f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a8062 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8065 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 106a8068 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a806b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a806e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a8071 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8074 jne 0x106a8140 */
  if (!C.zf) goto L_106a8140;
  /* 106a807a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a807e jge 0x106a80da */
  if ((C.sf==C.of)) goto L_106a80da;
  /* 106a8080 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a8083 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8086 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106a808a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a808d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8090 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 106a8093 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106a8095 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a8098 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a809b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 106a809e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a80a0 jne 0x106a80b8 */
  if (!C.zf) goto L_106a80b8;
  /* 106a80a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a80a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a80aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a80ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a80af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a80b1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106a80b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a80b6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106a80b8:;
  /* 106a80b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a80bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a80c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a80c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a80c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a80c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 106a80cc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a80ce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a80d1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a80d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 106a80d8 jmp 0x106a8140 */
  goto L_106a8140;
L_106a80da:;
  /* 106a80da mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a80dd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a80e0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106a80e4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a80e7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a80ea mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 106a80ed add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106a80ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a80f2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a80f5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 106a80f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a80fa jne 0x106a8117 */
  if (!C.zf) goto L_106a8117;
  /* 106a80fc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a80ff sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8102 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a8107 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a8109 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a810c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a810f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106a8111 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a8114 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106a8117:;
  /* 106a8117 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a811a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a811d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a8122 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a8124 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8127 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a812a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 106a8131 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a8133 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8136 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a8139 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_106a8140:;
  /* 106a8140 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8144 je 0x106a815a */
  if (C.zf) goto L_106a815a;
  /* 106a8146 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8149 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a814c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106a814e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8151 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8154 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a8157 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_106a815a:;
  /* 106a815a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a815d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8160 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106a8163 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a8166 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8169 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a816c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106a816e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a8171 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8174 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8177 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a817a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 106a817d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8180 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a8182 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8185 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a8187 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a818a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a818d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106a818f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a8191 jne 0x106a81b3 */
  if (!C.zf) goto L_106a81b3;
  /* 106a8193 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a8196 cmp eax, dword ptr [0x106d0e20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106d0e20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a819c jne 0x106a81b3 */
  if (!C.zf) goto L_106a81b3;
  /* 106a819e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a81a1 cmp ecx, dword ptr [0x106d0e18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106d0e18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a81a7 jne 0x106a81b3 */
  if (!C.zf) goto L_106a81b3;
  /* 106a81a9 mov dword ptr [0x106d0e20], 0 */
  w32((uint32_t)(0x106d0e20), (0x0u));
L_106a81b3:;
  /* 106a81b3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 106a81b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a81b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106a81bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a81be add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_106a81c1:;
  /* 106a81c1 pop esi */
  ESI = (pop32());
  /* 106a81c2 mov esp, ebp */
  ESP = (EBP);
  /* 106a81c4 pop ebp */
  EBP = (pop32());
  /* 106a81c5 ret  */
  ESPCHK(0x106a7c90u, _esp0);
  ESP += 4; return;
}

/* FUN_100081d0 @ 0x106a81d0 (271 bytes, 78 insns) */
void f_106a81d0(void) {
  FTRACE(0x106a81d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a81d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a81d1 mov ebp, esp */
  EBP = (ESP);
  /* 106a81d3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a81d4 mov eax, dword ptr [0x106d0e24] */
  EAX = (r32((uint32_t)(0x106d0e24)));
  /* 106a81d9 cmp eax, dword ptr [0x106d0e08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106d0e08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a81df jne 0x106a822b */
  if (!C.zf) goto L_106a822b;
  /* 106a81e1 mov ecx, dword ptr [0x106d0e08] */
  ECX = (r32((uint32_t)(0x106d0e08)));
  /* 106a81e7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a81ea imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a81ed push ecx */
  push32((uint32_t)(ECX));
  /* 106a81ee mov edx, dword ptr [0x106d0e28] */
  EDX = (r32((uint32_t)(0x106d0e28)));
  /* 106a81f4 push edx */
  push32((uint32_t)(EDX));
  /* 106a81f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a81f7 mov eax, dword ptr [0x106d0e2c] */
  EAX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a81fc push eax */
  push32((uint32_t)(EAX));
  /* 106a81fd call dword ptr [0x106d1368] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1368))), 0x106a8203u);
  /* 106a8203 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a8206 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a820a jne 0x106a8213 */
  if (!C.zf) goto L_106a8213;
  /* 106a820c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a820e jmp 0x106a82db */
  goto L_106a82db;
L_106a8213:;
  /* 106a8213 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8216 mov dword ptr [0x106d0e28], ecx */
  w32((uint32_t)(0x106d0e28), (ECX));
  /* 106a821c mov edx, dword ptr [0x106d0e08] */
  EDX = (r32((uint32_t)(0x106d0e08)));
  /* 106a8222 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8225 mov dword ptr [0x106d0e08], edx */
  w32((uint32_t)(0x106d0e08), (EDX));
L_106a822b:;
  /* 106a822b mov eax, dword ptr [0x106d0e24] */
  EAX = (r32((uint32_t)(0x106d0e24)));
  /* 106a8230 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a8233 mov ecx, dword ptr [0x106d0e28] */
  ECX = (r32((uint32_t)(0x106d0e28)));
  /* 106a8239 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a823b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106a823e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 106a8243 push 8 */
  push32((uint32_t)(0x8u));
  /* 106a8245 mov edx, dword ptr [0x106d0e2c] */
  EDX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a824b push edx */
  push32((uint32_t)(EDX));
  /* 106a824c call dword ptr [0x106d1364] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1364))), 0x106a8252u);
  /* 106a8252 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8255 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 106a8258 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a825b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a825f jne 0x106a8265 */
  if (!C.zf) goto L_106a8265;
  /* 106a8261 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a8263 jmp 0x106a82db */
  goto L_106a82db;
L_106a8265:;
  /* 106a8265 push 4 */
  push32((uint32_t)(0x4u));
  /* 106a8267 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 106a826c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 106a8271 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a8273 call dword ptr [0x106d136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d136c))), 0x106a8279u);
  /* 106a8279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a827c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 106a827f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8282 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8286 jne 0x106a82a2 */
  if (!C.zf) goto L_106a82a2;
  /* 106a8288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a828b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a828e push ecx */
  push32((uint32_t)(ECX));
  /* 106a828f push 0 */
  push32((uint32_t)(0x0u));
  /* 106a8291 mov edx, dword ptr [0x106d0e2c] */
  EDX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a8297 push edx */
  push32((uint32_t)(EDX));
  /* 106a8298 call dword ptr [0x106d1344] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1344))), 0x106a829eu);
  /* 106a829e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a82a0 jmp 0x106a82db */
  goto L_106a82db;
L_106a82a2:;
  /* 106a82a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a82a5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106a82ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a82ae mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 106a82b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a82b8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 106a82bf mov eax, dword ptr [0x106d0e24] */
  EAX = (r32((uint32_t)(0x106d0e24)));
  /* 106a82c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a82c7 mov dword ptr [0x106d0e24], eax */
  w32((uint32_t)(0x106d0e24), (EAX));
  /* 106a82cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a82cf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106a82d2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 106a82d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106a82db:;
  /* 106a82db mov esp, ebp */
  ESP = (EBP);
  /* 106a82dd pop ebp */
  EBP = (pop32());
  /* 106a82de ret  */
  ESPCHK(0x106a81d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082e0 @ 0x106a82e0 (494 bytes, 149 insns) */
void f_106a82e0(void) {
  FTRACE(0x106a82e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a82e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a82e1 mov ebp, esp */
  EBP = (ESP);
  /* 106a82e3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a82e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a82e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a82ec mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 106a82ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a82f2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106a82f5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a82f8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_106a82ff:;
  /* 106a82ff cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8303 jl 0x106a8318 */
  if ((C.sf!=C.of)) goto L_106a8318;
  /* 106a8305 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a8308 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 106a830a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106a830d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a8310 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8313 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 106a8316 jmp 0x106a82ff */
  goto L_106a82ff;
L_106a8318:;
  /* 106a8318 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a831b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a8321 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8324 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 106a832b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106a832e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106a8335 jmp 0x106a8340 */
  goto L_106a8340;
L_106a8337:;
  /* 106a8337 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a833a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a833d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_106a8340:;
  /* 106a8340 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8344 jge 0x106a8366 */
  if ((C.sf==C.of)) goto L_106a8366;
  /* 106a8346 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a8349 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a834c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 106a834f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106a8352 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a8355 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a8358 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 106a835b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a835e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a8361 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 106a8364 jmp 0x106a8337 */
  goto L_106a8337;
L_106a8366:;
  /* 106a8366 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a8369 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 106a836c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a836f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106a8372 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8374 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106a8377 push 4 */
  push32((uint32_t)(0x4u));
  /* 106a8379 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 106a837e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 106a8383 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8386 push edx */
  push32((uint32_t)(EDX));
  /* 106a8387 call dword ptr [0x106d136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d136c))), 0x106a838du);
  /* 106a838d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a838f jne 0x106a8399 */
  if (!C.zf) goto L_106a8399;
  /* 106a8391 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a8394 jmp 0x106a84ca */
  goto L_106a84ca;
L_106a8399:;
  /* 106a8399 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a839c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a83a1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106a83a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a83a7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106a83aa jmp 0x106a83b8 */
  goto L_106a83b8;
L_106a83ac:;
  /* 106a83ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a83af add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a83b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106a83b8:;
  /* 106a83b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a83bb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a83be ja 0x106a841d */
  if ((!C.cf&&!C.zf)) goto L_106a841d;
  /* 106a83c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a83c3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 106a83ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a83cd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 106a83d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a83da add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a83dd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106a83e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a83e3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 106a83e9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a83ec add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a83f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a83f5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106a83f8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a83fb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8401 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a8404 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106a8407 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a840a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a840f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106a8412 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a8415 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 106a841b jmp 0x106a83ac */
  goto L_106a83ac;
L_106a841d:;
  /* 106a841d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a8420 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8426 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106a8429 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a842c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a842f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a8432 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 106a8435 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a8438 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106a843b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106a843e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a8441 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a8444 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 106a8447 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a844a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a844d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a8450 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 106a8453 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a8456 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106a8459 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106a845c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a845f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a8462 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 106a8465 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a8468 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a846b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 106a8473 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a8476 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8479 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 106a8484 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8487 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 106a848b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a848e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 106a8491 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 106a8494 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8497 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 106a849a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a849c jne 0x106a84ad */
  if (!C.zf) goto L_106a84ad;
  /* 106a849e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a84a1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a84a4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106a84a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a84aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106a84ad:;
  /* 106a84ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a84b2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a84b5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a84b7 not edx */
  EDX = (~(EDX));
  /* 106a84b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a84bc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106a84bf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106a84c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a84c4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106a84c7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_106a84ca:;
  /* 106a84ca mov esp, ebp */
  ESP = (EBP);
  /* 106a84cc pop ebp */
  EBP = (pop32());
  /* 106a84cd ret  */
  ESPCHK(0x106a82e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100084d0 @ 0x106a84d0 (1515 bytes, 489 insns) */
void f_106a84d0(void) {
  FTRACE(0x106a84d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a84d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a84d1 mov ebp, esp */
  EBP = (ESP);
  /* 106a84d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a84d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a84d9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a84dc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 106a84de mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106a84e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a84e4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106a84e7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 106a84ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a84ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a84f0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a84f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106a84f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a84f9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 106a84fc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a84ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8502 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a8508 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a850b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 106a8512 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106a8515 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a8518 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a851b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106a851e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a8521 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a8523 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8526 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 106a8529 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a852c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a852f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 106a8532 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8535 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a8537 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106a853a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a853d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8540 jle 0x106a87f6 */
  if ((C.zf||C.sf!=C.of)) goto L_106a87f6;
  /* 106a8546 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8549 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106a854c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a854e jne 0x106a855b */
  if (!C.zf) goto L_106a855b;
  /* 106a8550 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a8553 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8556 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8559 jle 0x106a8562 */
  if ((C.zf||C.sf!=C.of)) goto L_106a8562;
L_106a855b:;
  /* 106a855b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a855d jmp 0x106a8ab7 */
  goto L_106a8ab7;
L_106a8562:;
  /* 106a8562 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8565 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 106a8568 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a856b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106a856e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8572 jbe 0x106a857b */
  if ((C.cf||C.zf)) goto L_106a857b;
  /* 106a8574 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_106a857b:;
  /* 106a857b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a857e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8581 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a8584 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8587 jne 0x106a865d */
  if (!C.zf) goto L_106a865d;
  /* 106a858d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8591 jae 0x106a85f2 */
  if (!C.cf) goto L_106a85f2;
  /* 106a8593 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a8598 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a859b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a859d not edx */
  EDX = (~(EDX));
  /* 106a859f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a85a2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a85a5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 106a85a9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a85ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a85ae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a85b1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 106a85b5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a85b8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a85bb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106a85be sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106a85c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a85c4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a85c7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 106a85ca mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a85cd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a85d0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106a85d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a85d6 jne 0x106a85f0 */
  if (!C.zf) goto L_106a85f0;
  /* 106a85d8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a85dd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a85e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a85e2 not edx */
  EDX = (~(EDX));
  /* 106a85e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a85e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a85e9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106a85eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a85ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106a85f0:;
  /* 106a85f0 jmp 0x106a865d */
  goto L_106a865d;
L_106a85f2:;
  /* 106a85f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a85f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a85f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a85fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a85ff not eax */
  EAX = (~(EAX));
  /* 106a8601 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8604 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8607 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 106a860e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106a8610 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8613 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8616 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 106a861d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8620 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8623 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 106a8626 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106a8629 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a862c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a862f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 106a8632 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8635 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8638 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106a863c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a863e jne 0x106a865d */
  if (!C.zf) goto L_106a865d;
  /* 106a8640 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a8643 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8646 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a864b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a864d not eax */
  EAX = (~(EAX));
  /* 106a864f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a8652 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a8655 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106a8657 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a865a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106a865d:;
  /* 106a865d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8660 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106a8663 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8666 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a8669 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 106a866c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a866f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106a8672 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8675 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106a8678 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 106a867b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a867e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8681 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8684 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106a8687 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a868b jle 0x106a87d7 */
  if ((C.zf||C.sf!=C.of)) goto L_106a87d7;
  /* 106a8691 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a8694 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8697 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 106a869a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a869d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 106a86a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a86a3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 106a86a6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a86aa jbe 0x106a86b3 */
  if ((C.cf||C.zf)) goto L_106a86b3;
  /* 106a86ac mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_106a86b3:;
  /* 106a86b3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a86b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a86b9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 106a86bc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106a86bf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a86c2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a86c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a86c8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106a86cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a86ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a86d1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 106a86d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a86d7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a86da mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 106a86dd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a86e0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a86e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a86e6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106a86e9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a86ec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a86ef mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a86f2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a86f5 jne 0x106a87c3 */
  if (!C.zf) goto L_106a87c3;
  /* 106a86fb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a86ff jae 0x106a875c */
  if (!C.cf) goto L_106a875c;
  /* 106a8701 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8704 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8707 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106a870b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a870e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8711 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106a8714 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 106a8717 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a871a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a871d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 106a8720 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a8722 jne 0x106a873a */
  if (!C.zf) goto L_106a873a;
  /* 106a8724 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a8729 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a872c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a872e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a8731 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a8733 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106a8735 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a8738 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106a873a:;
  /* 106a873a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a873f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a8742 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a8744 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8747 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a874a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 106a874e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106a8750 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8753 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8756 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 106a875a jmp 0x106a87c3 */
  goto L_106a87c3;
L_106a875c:;
  /* 106a875c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a875f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8762 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106a8766 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8769 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a876c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106a876f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 106a8772 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8775 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8778 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 106a877b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a877d jne 0x106a879a */
  if (!C.zf) goto L_106a879a;
  /* 106a877f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a8782 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8785 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a878a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a878c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a878f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a8792 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106a8794 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a8797 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_106a879a:;
  /* 106a879a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a879d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a87a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a87a5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a87a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a87aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a87ad mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 106a87b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106a87b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a87b9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a87bc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_106a87c3:;
  /* 106a87c3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a87c6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a87c9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106a87cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a87ce add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a87d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a87d4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_106a87d7:;
  /* 106a87d7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a87da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a87dd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a87e0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106a87e2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a87e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a87e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a87eb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a87ee mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 106a87f1 jmp 0x106a8ab2 */
  goto L_106a8ab2;
L_106a87f6:;
  /* 106a87f6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a87f9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a87fc jge 0x106a8ab2 */
  if ((C.sf==C.of)) goto L_106a8ab2;
  /* 106a8802 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a8805 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8808 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a880b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106a880d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106a8810 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8813 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a8816 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8819 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 106a881c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a881f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8822 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106a8825 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a8828 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a882b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106a882e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a8831 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 106a8834 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8837 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106a883a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a883e jbe 0x106a8847 */
  if ((C.cf||C.zf)) goto L_106a8847;
  /* 106a8840 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_106a8847:;
  /* 106a8847 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a884a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106a884d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a884f jne 0x106a8990 */
  if (!C.zf) goto L_106a8990;
  /* 106a8855 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8858 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 106a885b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a885e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106a8861 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8865 jbe 0x106a886e */
  if ((C.cf||C.zf)) goto L_106a886e;
  /* 106a8867 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_106a886e:;
  /* 106a886e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8871 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8874 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a8877 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a887a jne 0x106a8950 */
  if (!C.zf) goto L_106a8950;
  /* 106a8880 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8884 jae 0x106a88e5 */
  if (!C.cf) goto L_106a88e5;
  /* 106a8886 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a888b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a888e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a8890 not edx */
  EDX = (~(EDX));
  /* 106a8892 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8895 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8898 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 106a889c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a889e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a88a1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a88a4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 106a88a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a88ab add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a88ae mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106a88b1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106a88b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a88b7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a88ba mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 106a88bd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a88c0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a88c3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106a88c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a88c9 jne 0x106a88e3 */
  if (!C.zf) goto L_106a88e3;
  /* 106a88cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a88d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a88d3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a88d5 not edx */
  EDX = (~(EDX));
  /* 106a88d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a88da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a88dc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106a88de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a88e1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106a88e3:;
  /* 106a88e3 jmp 0x106a8950 */
  goto L_106a8950;
L_106a88e5:;
  /* 106a88e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a88e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a88eb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a88f0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a88f2 not eax */
  EAX = (~(EAX));
  /* 106a88f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a88f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a88fa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 106a8901 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106a8903 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8906 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8909 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 106a8910 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8913 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8916 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 106a8919 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106a891c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a891f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8922 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 106a8925 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8928 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a892b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106a892f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a8931 jne 0x106a8950 */
  if (!C.zf) goto L_106a8950;
  /* 106a8933 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a8936 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8939 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a893e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a8940 not eax */
  EAX = (~(EAX));
  /* 106a8942 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a8945 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a8948 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106a894a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a894d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106a8950:;
  /* 106a8950 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8953 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106a8956 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8959 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a895c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 106a895f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8962 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106a8965 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a8968 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106a896b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 106a896e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a8971 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8974 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106a8977 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a897a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 106a897d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8980 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106a8983 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8987 jbe 0x106a8990 */
  if ((C.cf||C.zf)) goto L_106a8990;
  /* 106a8989 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_106a8990:;
  /* 106a8990 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a8993 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a8996 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 106a8999 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106a899c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a899f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a89a2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a89a5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 106a89a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a89ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a89ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106a89b1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a89b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a89b7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 106a89ba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a89bd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a89c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a89c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 106a89c6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a89c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a89cc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a89cf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a89d2 jne 0x106a8a9e */
  if (!C.zf) goto L_106a8a9e;
  /* 106a89d8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a89dc jae 0x106a8a38 */
  if (!C.cf) goto L_106a8a38;
  /* 106a89de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a89e1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a89e4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106a89e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a89eb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a89ee mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 106a89f1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106a89f3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a89f6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a89f9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 106a89fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a89fe jne 0x106a8a16 */
  if (!C.zf) goto L_106a8a16;
  /* 106a8a00 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a8a05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a8a08 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a8a0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a8a0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a8a0f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106a8a11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a8a14 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106a8a16:;
  /* 106a8a16 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a8a1b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a8a1e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a8a20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8a23 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8a26 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 106a8a2a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a8a2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8a2f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8a32 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 106a8a36 jmp 0x106a8a9e */
  goto L_106a8a9e;
L_106a8a38:;
  /* 106a8a38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8a3b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8a3e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 106a8a42 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8a45 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8a48 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 106a8a4b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106a8a4d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8a50 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8a53 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 106a8a56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a8a58 jne 0x106a8a75 */
  if (!C.zf) goto L_106a8a75;
  /* 106a8a5a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a8a5d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8a60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 106a8a65 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 106a8a67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a8a6a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a8a6d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106a8a6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a8a72 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_106a8a75:;
  /* 106a8a75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a8a78 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8a7b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a8a80 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a8a82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8a85 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8a88 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 106a8a8f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a8a91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8a94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106a8a97 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_106a8a9e:;
  /* 106a8a9e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a8aa1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a8aa4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106a8aa6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a8aa9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8aac mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a8aaf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_106a8ab2:;
  /* 106a8ab2 mov eax, 1 */
  EAX = (0x1u);
L_106a8ab7:;
  /* 106a8ab7 mov esp, ebp */
  ESP = (EBP);
  /* 106a8ab9 pop ebp */
  EBP = (pop32());
  /* 106a8aba ret  */
  ESPCHK(0x106a84d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ac0 @ 0x106a8ac0 (304 bytes, 79 insns) */
void f_106a8ac0(void) {
  FTRACE(0x106a8ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a8ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a8ac1 mov ebp, esp */
  EBP = (ESP);
  /* 106a8ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a8ac4 cmp dword ptr [0x106d0e20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0e20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8acb je 0x106a8bec */
  if (C.zf) goto L_106a8bec;
  /* 106a8ad1 mov eax, dword ptr [0x106d0e18] */
  EAX = (r32((uint32_t)(0x106d0e18)));
  /* 106a8ad6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 106a8ad9 mov ecx, dword ptr [0x106d0e20] */
  ECX = (r32((uint32_t)(0x106d0e20)));
  /* 106a8adf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106a8ae2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8ae4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a8ae7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 106a8aec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 106a8af1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a8af4 push eax */
  push32((uint32_t)(EAX));
  /* 106a8af5 call dword ptr [0x106d1348] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1348))), 0x106a8afbu);
  /* 106a8afb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a8b00 mov ecx, dword ptr [0x106d0e18] */
  ECX = (r32((uint32_t)(0x106d0e18)));
  /* 106a8b06 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a8b08 mov eax, dword ptr [0x106d0e20] */
  EAX = (r32((uint32_t)(0x106d0e20)));
  /* 106a8b0d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106a8b10 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 106a8b12 mov edx, dword ptr [0x106d0e20] */
  EDX = (r32((uint32_t)(0x106d0e20)));
  /* 106a8b18 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106a8b1b mov eax, dword ptr [0x106d0e20] */
  EAX = (r32((uint32_t)(0x106d0e20)));
  /* 106a8b20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a8b23 mov edx, dword ptr [0x106d0e18] */
  EDX = (r32((uint32_t)(0x106d0e18)));
  /* 106a8b29 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 106a8b34 mov eax, dword ptr [0x106d0e20] */
  EAX = (r32((uint32_t)(0x106d0e20)));
  /* 106a8b39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a8b3c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 106a8b3f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 106a8b42 mov eax, dword ptr [0x106d0e20] */
  EAX = (r32((uint32_t)(0x106d0e20)));
  /* 106a8b47 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a8b4a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 106a8b4d mov edx, dword ptr [0x106d0e20] */
  EDX = (r32((uint32_t)(0x106d0e20)));
  /* 106a8b53 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106a8b56 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 106a8b5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a8b5c jne 0x106a8b72 */
  if (!C.zf) goto L_106a8b72;
  /* 106a8b5e mov edx, dword ptr [0x106d0e20] */
  EDX = (r32((uint32_t)(0x106d0e20)));
  /* 106a8b64 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106a8b67 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 106a8b69 mov ecx, dword ptr [0x106d0e20] */
  ECX = (r32((uint32_t)(0x106d0e20)));
  /* 106a8b6f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_106a8b72:;
  /* 106a8b72 mov edx, dword ptr [0x106d0e20] */
  EDX = (r32((uint32_t)(0x106d0e20)));
  /* 106a8b78 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8b7c jne 0x106a8be2 */
  if (!C.zf) goto L_106a8be2;
  /* 106a8b7e cmp dword ptr [0x106d0e24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106d0e24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8b85 jle 0x106a8be2 */
  if ((C.zf||C.sf!=C.of)) goto L_106a8be2;
  /* 106a8b87 mov eax, dword ptr [0x106d0e20] */
  EAX = (r32((uint32_t)(0x106d0e20)));
  /* 106a8b8c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a8b8f push ecx */
  push32((uint32_t)(ECX));
  /* 106a8b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a8b92 mov edx, dword ptr [0x106d0e2c] */
  EDX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a8b98 push edx */
  push32((uint32_t)(EDX));
  /* 106a8b99 call dword ptr [0x106d1344] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1344))), 0x106a8b9fu);
  /* 106a8b9f mov eax, dword ptr [0x106d0e24] */
  EAX = (r32((uint32_t)(0x106d0e24)));
  /* 106a8ba4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a8ba7 mov ecx, dword ptr [0x106d0e28] */
  ECX = (r32((uint32_t)(0x106d0e28)));
  /* 106a8bad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8baf mov edx, dword ptr [0x106d0e20] */
  EDX = (r32((uint32_t)(0x106d0e20)));
  /* 106a8bb5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8bb8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8bba push ecx */
  push32((uint32_t)(ECX));
  /* 106a8bbb mov eax, dword ptr [0x106d0e20] */
  EAX = (r32((uint32_t)(0x106d0e20)));
  /* 106a8bc0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8bc3 push eax */
  push32((uint32_t)(EAX));
  /* 106a8bc4 mov ecx, dword ptr [0x106d0e20] */
  ECX = (r32((uint32_t)(0x106d0e20)));
  /* 106a8bca push ecx */
  push32((uint32_t)(ECX));
  /* 106a8bcb call 0x106ab1f0 */
  push32(0x106a8bd0u); f_106ab1f0();
  /* 106a8bd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8bd3 mov edx, dword ptr [0x106d0e24] */
  EDX = (r32((uint32_t)(0x106d0e24)));
  /* 106a8bd9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8bdc mov dword ptr [0x106d0e24], edx */
  w32((uint32_t)(0x106d0e24), (EDX));
L_106a8be2:;
  /* 106a8be2 mov dword ptr [0x106d0e20], 0 */
  w32((uint32_t)(0x106d0e20), (0x0u));
L_106a8bec:;
  /* 106a8bec mov esp, ebp */
  ESP = (EBP);
  /* 106a8bee pop ebp */
  EBP = (pop32());
  /* 106a8bef ret  */
  ESPCHK(0x106a8ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bf0 @ 0x106a8bf0 (1565 bytes, 343 insns) */
void f_106a8bf0(void) {
  FTRACE(0x106a8bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a8bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a8bf1 mov ebp, esp */
  EBP = (ESP);
  /* 106a8bf3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8bf9 mov eax, dword ptr [0x106d0e24] */
  EAX = (r32((uint32_t)(0x106d0e24)));
  /* 106a8bfe imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a8c01 push eax */
  push32((uint32_t)(EAX));
  /* 106a8c02 mov ecx, dword ptr [0x106d0e28] */
  ECX = (r32((uint32_t)(0x106d0e28)));
  /* 106a8c08 push ecx */
  push32((uint32_t)(ECX));
  /* 106a8c09 call dword ptr [0x106d131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d131c))), 0x106a8c0fu);
  /* 106a8c0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a8c11 je 0x106a8c1b */
  if (C.zf) goto L_106a8c1b;
  /* 106a8c13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a8c16 jmp 0x106a9209 */
  goto L_106a9209;
L_106a8c1b:;
  /* 106a8c1b mov edx, dword ptr [0x106d0e28] */
  EDX = (r32((uint32_t)(0x106d0e28)));
  /* 106a8c21 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 106a8c27 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 106a8c31 jmp 0x106a8c42 */
  goto L_106a8c42;
L_106a8c33:;
  /* 106a8c33 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 106a8c39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8c3c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_106a8c42:;
  /* 106a8c42 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 106a8c48 cmp ecx, dword ptr [0x106d0e24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106d0e24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8c4e jge 0x106a9207 */
  if ((C.sf==C.of)) goto L_106a9207;
  /* 106a8c54 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106a8c5a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106a8c5d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 106a8c63 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 106a8c68 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 106a8c6e push ecx */
  push32((uint32_t)(ECX));
  /* 106a8c6f call dword ptr [0x106d131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d131c))), 0x106a8c75u);
  /* 106a8c75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a8c77 je 0x106a8c83 */
  if (C.zf) goto L_106a8c83;
  /* 106a8c79 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 106a8c7e jmp 0x106a9209 */
  goto L_106a9209;
L_106a8c83:;
  /* 106a8c83 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106a8c89 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106a8c8c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 106a8c92 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 106a8c98 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8c9e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106a8ca1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106a8ca7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106a8caa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a8cad mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 106a8cb7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 106a8cc1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106a8cc8 jmp 0x106a8cd3 */
  goto L_106a8cd3;
L_106a8cca:;
  /* 106a8cca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a8ccd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8cd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_106a8cd3:;
  /* 106a8cd3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8cd7 jge 0x106a91cb */
  if ((C.sf==C.of)) goto L_106a91cb;
  /* 106a8cdd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 106a8ce7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 106a8cf1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 106a8cfb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 106a8d05 jmp 0x106a8d16 */
  goto L_106a8d16;
L_106a8d07:;
  /* 106a8d07 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 106a8d0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8d10 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_106a8d16:;
  /* 106a8d16 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8d1d jge 0x106a8d32 */
  if ((C.sf==C.of)) goto L_106a8d32;
  /* 106a8d1f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 106a8d25 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 106a8d30 jmp 0x106a8d07 */
  goto L_106a8d07;
L_106a8d32:;
  /* 106a8d32 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8d36 jl 0x106a916d */
  if ((C.sf!=C.of)) goto L_106a916d;
  /* 106a8d3c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 106a8d41 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 106a8d47 push ecx */
  push32((uint32_t)(ECX));
  /* 106a8d48 call dword ptr [0x106d131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d131c))), 0x106a8d4eu);
  /* 106a8d4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a8d50 je 0x106a8d5c */
  if (C.zf) goto L_106a8d5c;
  /* 106a8d52 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 106a8d57 jmp 0x106a9209 */
  goto L_106a9209;
L_106a8d5c:;
  /* 106a8d5c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 106a8d62 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106a8d65 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 106a8d6f jmp 0x106a8d80 */
  goto L_106a8d80;
L_106a8d71:;
  /* 106a8d71 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 106a8d77 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8d7a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_106a8d80:;
  /* 106a8d80 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8d87 jge 0x106a8f04 */
  if ((C.sf==C.of)) goto L_106a8f04;
  /* 106a8d8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a8d90 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8d93 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 106a8d99 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 106a8d9f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8da5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 106a8dab mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 106a8db1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8db5 jne 0x106a8dc2 */
  if (!C.zf) goto L_106a8dc2;
  /* 106a8db7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 106a8dbd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8dc0 je 0x106a8dcc */
  if (C.zf) goto L_106a8dcc;
L_106a8dc2:;
  /* 106a8dc2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 106a8dc7 jmp 0x106a9209 */
  goto L_106a9209;
L_106a8dcc:;
  /* 106a8dcc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 106a8dd2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a8dd4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 106a8dda mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 106a8de0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 106a8de6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 106a8dec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106a8def test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a8df1 je 0x106a8e29 */
  if (C.zf) goto L_106a8e29;
  /* 106a8df3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 106a8df9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8dfc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 106a8e02 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8e0c jle 0x106a8e18 */
  if ((C.zf||C.sf!=C.of)) goto L_106a8e18;
  /* 106a8e0e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 106a8e13 jmp 0x106a9209 */
  goto L_106a9209;
L_106a8e18:;
  /* 106a8e18 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 106a8e1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8e21 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 106a8e27 jmp 0x106a8e6b */
  goto L_106a8e6b;
L_106a8e29:;
  /* 106a8e29 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 106a8e2f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 106a8e32 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a8e35 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 106a8e3b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8e42 jle 0x106a8e4e */
  if ((C.zf||C.sf!=C.of)) goto L_106a8e4e;
  /* 106a8e44 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_106a8e4e:;
  /* 106a8e4e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 106a8e54 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 106a8e5b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8e5e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 106a8e64 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_106a8e6b:;
  /* 106a8e6b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8e72 jl 0x106a8e8d */
  if ((C.sf!=C.of)) goto L_106a8e8d;
  /* 106a8e74 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 106a8e7a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 106a8e7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a8e7f jne 0x106a8e8d */
  if (!C.zf) goto L_106a8e8d;
  /* 106a8e81 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8e8b jle 0x106a8e97 */
  if ((C.zf||C.sf!=C.of)) goto L_106a8e97;
L_106a8e8d:;
  /* 106a8e8d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 106a8e92 jmp 0x106a9209 */
  goto L_106a9209;
L_106a8e97:;
  /* 106a8e97 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 106a8e9d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8ea3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 106a8ea6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8eac je 0x106a8eb8 */
  if (C.zf) goto L_106a8eb8;
  /* 106a8eae mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 106a8eb3 jmp 0x106a9209 */
  goto L_106a9209;
L_106a8eb8:;
  /* 106a8eb8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 106a8ebe add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8ec4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 106a8eca mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 106a8ed0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8ed6 jb 0x106a8dcc */
  if (C.cf) goto L_106a8dcc;
  /* 106a8edc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 106a8ee2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8ee8 je 0x106a8ef4 */
  if (C.zf) goto L_106a8ef4;
  /* 106a8eea mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 106a8eef jmp 0x106a9209 */
  goto L_106a9209;
L_106a8ef4:;
  /* 106a8ef4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a8ef7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8efc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a8eff jmp 0x106a8d71 */
  goto L_106a8d71;
L_106a8f04:;
  /* 106a8f04 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a8f07 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a8f09 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8f0f je 0x106a8f1b */
  if (C.zf) goto L_106a8f1b;
  /* 106a8f11 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 106a8f16 jmp 0x106a9209 */
  goto L_106a9209;
L_106a8f1b:;
  /* 106a8f1b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a8f1e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 106a8f24 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 106a8f2b jmp 0x106a8f36 */
  goto L_106a8f36;
L_106a8f2d:;
  /* 106a8f2d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a8f30 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8f33 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_106a8f36:;
  /* 106a8f36 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8f3a jge 0x106a916d */
  if ((C.sf==C.of)) goto L_106a916d;
  /* 106a8f40 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 106a8f4a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 106a8f50 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_106a8f56:;
  /* 106a8f56 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 106a8f5c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a8f5f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 106a8f65 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 106a8f6b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8f71 je 0x106a909a */
  if (C.zf) goto L_106a909a;
  /* 106a8f77 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a8f7a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 106a8f80 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8f87 je 0x106a909a */
  if (C.zf) goto L_106a909a;
  /* 106a8f8d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 106a8f93 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8f99 jb 0x106a8fae */
  if (C.cf) goto L_106a8fae;
  /* 106a8f9b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 106a8fa1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8fa6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8fac jb 0x106a8fb8 */
  if (C.cf) goto L_106a8fb8;
L_106a8fae:;
  /* 106a8fae mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 106a8fb3 jmp 0x106a9209 */
  goto L_106a9209;
L_106a8fb8:;
  /* 106a8fb8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 106a8fbe and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 106a8fc4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 106a8fca mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 106a8fd0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8fd3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106a8fd6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8fd9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a8fde mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_106a8fe4:;
  /* 106a8fe4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8fe7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8fed je 0x106a900e */
  if (C.zf) goto L_106a900e;
  /* 106a8fef mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8ff2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a8ff8 jne 0x106a8ffc */
  if (!C.zf) goto L_106a8ffc;
  /* 106a8ffa jmp 0x106a900e */
  goto L_106a900e;
L_106a8ffc:;
  /* 106a8ffc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a8fff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a9001 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 106a9004 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a9007 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9009 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106a900c jmp 0x106a8fe4 */
  goto L_106a8fe4;
L_106a900e:;
  /* 106a900e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a9011 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9017 jne 0x106a9023 */
  if (!C.zf) goto L_106a9023;
  /* 106a9019 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 106a901e jmp 0x106a9209 */
  goto L_106a9209;
L_106a9023:;
  /* 106a9023 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 106a9029 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a902b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 106a902e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9031 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 106a9037 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a903e jle 0x106a904a */
  if ((C.zf||C.sf!=C.of)) goto L_106a904a;
  /* 106a9040 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_106a904a:;
  /* 106a904a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 106a9050 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9053 je 0x106a905f */
  if (C.zf) goto L_106a905f;
  /* 106a9055 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 106a905a jmp 0x106a9209 */
  goto L_106a9209;
L_106a905f:;
  /* 106a905f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 106a9065 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106a9068 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a906e je 0x106a907a */
  if (C.zf) goto L_106a907a;
  /* 106a9070 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 106a9075 jmp 0x106a9209 */
  goto L_106a9209;
L_106a907a:;
  /* 106a907a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 106a9080 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 106a9086 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 106a908c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a908f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 106a9095 jmp 0x106a8f56 */
  goto L_106a8f56;
L_106a909a:;
  /* 106a909a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a90a1 je 0x106a9111 */
  if (C.zf) goto L_106a9111;
  /* 106a90a3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a90a7 jge 0x106a90db */
  if ((C.sf==C.of)) goto L_106a90db;
  /* 106a90a9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a90ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a90b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a90b3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 106a90b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a90bb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 106a90c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a90c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a90c9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a90cb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 106a90d1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a90d3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 106a90d9 jmp 0x106a9111 */
  goto L_106a9111;
L_106a90db:;
  /* 106a90db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a90de sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a90e1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a90e6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a90e8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 106a90ee or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a90f0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 106a90f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a90f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a90fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 106a9101 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 106a9103 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 106a9109 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a910b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_106a9111:;
  /* 106a9111 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 106a9117 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a911a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9120 jne 0x106a9134 */
  if (!C.zf) goto L_106a9134;
  /* 106a9122 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a9125 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 106a912b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9132 je 0x106a913e */
  if (C.zf) goto L_106a913e;
L_106a9134:;
  /* 106a9134 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 106a9139 jmp 0x106a9209 */
  goto L_106a9209;
L_106a913e:;
  /* 106a913e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 106a9144 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106a9147 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a914d je 0x106a9159 */
  if (C.zf) goto L_106a9159;
  /* 106a914f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 106a9154 jmp 0x106a9209 */
  goto L_106a9209;
L_106a9159:;
  /* 106a9159 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 106a915f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9162 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 106a9168 jmp 0x106a8f2d */
  goto L_106a8f2d;
L_106a916d:;
  /* 106a916d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a9170 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 106a9176 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 106a917c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9180 jne 0x106a919a */
  if (!C.zf) goto L_106a919a;
  /* 106a9182 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a9185 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 106a918b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 106a9191 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9198 je 0x106a91a1 */
  if (C.zf) goto L_106a91a1;
L_106a919a:;
  /* 106a919a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 106a919f jmp 0x106a9209 */
  goto L_106a9209;
L_106a91a1:;
  /* 106a91a1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 106a91a7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a91ad mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 106a91b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a91b6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a91bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106a91be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a91c1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 106a91c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106a91c6 jmp 0x106a8cca */
  goto L_106a8cca;
L_106a91cb:;
  /* 106a91cb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106a91d1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 106a91d7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a91d9 jne 0x106a91ec */
  if (!C.zf) goto L_106a91ec;
  /* 106a91db mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106a91e1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 106a91e7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a91ea je 0x106a91f3 */
  if (C.zf) goto L_106a91f3;
L_106a91ec:;
  /* 106a91ec mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 106a91f1 jmp 0x106a9209 */
  goto L_106a9209;
L_106a91f3:;
  /* 106a91f3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 106a91f9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a91fc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 106a9202 jmp 0x106a8c33 */
  goto L_106a8c33;
L_106a9207:;
  /* 106a9207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106a9209:;
  /* 106a9209 mov esp, ebp */
  ESP = (EBP);
  /* 106a920b pop ebp */
  EBP = (pop32());
  /* 106a920c ret  */
  ESPCHK(0x106a8bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009210 @ 0x106a9210 (250 bytes, 92 insns) */
void f_106a9210(void) {
  FTRACE(0x106a9210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a9210 push ebp */
  push32((uint32_t)(EBP));
  /* 106a9211 mov ebp, esp */
  EBP = (ESP);
  /* 106a9213 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9216 push ebx */
  push32((uint32_t)(EBX));
  /* 106a9217 push esi */
  push32((uint32_t)(ESI));
  /* 106a9218 push edi */
  push32((uint32_t)(EDI));
  /* 106a9219 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 106a921c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106a921f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 106a9222 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_106a9225:;
  /* 106a9225 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9229 jne 0x106a9249 */
  if (!C.zf) goto L_106a9249;
  /* 106a922b push 0x106cae70 */
  push32((uint32_t)(0x106cae70u));
  /* 106a9230 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a9232 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 106a9234 push 0x106cae64 */
  push32((uint32_t)(0x106cae64u));
  /* 106a9239 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a923b call 0x106a23c0 */
  push32(0x106a9240u); f_106a23c0();
  /* 106a9240 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9243 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9246 jne 0x106a9249 */
  if (!C.zf) goto L_106a9249;
  /* 106a9248 int3  */
  x86_unimpl("int3 @ 0x106a9248");
L_106a9249:;
  /* 106a9249 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a924b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a924d jne 0x106a9225 */
  if (!C.zf) goto L_106a9225;
L_106a924f:;
  /* 106a924f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9253 jne 0x106a9273 */
  if (!C.zf) goto L_106a9273;
  /* 106a9255 push 0x106cae54 */
  push32((uint32_t)(0x106cae54u));
  /* 106a925a push 0 */
  push32((uint32_t)(0x0u));
  /* 106a925c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 106a925e push 0x106cae64 */
  push32((uint32_t)(0x106cae64u));
  /* 106a9263 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a9265 call 0x106a23c0 */
  push32(0x106a926au); f_106a23c0();
  /* 106a926a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a926d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9270 jne 0x106a9273 */
  if (!C.zf) goto L_106a9273;
  /* 106a9272 int3  */
  x86_unimpl("int3 @ 0x106a9272");
L_106a9273:;
  /* 106a9273 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a9275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a9277 jne 0x106a924f */
  if (!C.zf) goto L_106a924f;
  /* 106a9279 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a927c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 106a9283 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a9286 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9289 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106a928c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a928f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9292 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106a9294 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a9297 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 106a929e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a92a1 push ecx */
  push32((uint32_t)(ECX));
  /* 106a92a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a92a5 push edx */
  push32((uint32_t)(EDX));
  /* 106a92a6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a92a9 push eax */
  push32((uint32_t)(EAX));
  /* 106a92aa call 0x106aa290 */
  push32(0x106a92afu); f_106aa290();
  /* 106a92af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a92b2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106a92b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a92b8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a92bb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a92be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a92c1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106a92c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a92c7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a92cb jl 0x106a92ef */
  if ((C.sf!=C.of)) goto L_106a92ef;
  /* 106a92cd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a92d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a92d2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106a92d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a92d7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a92dd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 106a92e0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a92e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a92e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a92e8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a92eb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106a92ed jmp 0x106a9300 */
  goto L_106a9300;
L_106a92ef:;
  /* 106a92ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a92f2 push edx */
  push32((uint32_t)(EDX));
  /* 106a92f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a92f5 call 0x106aa010 */
  push32(0x106a92fau); f_106aa010();
  /* 106a92fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a92fd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_106a9300:;
  /* 106a9300 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a9303 pop edi */
  EDI = (pop32());
  /* 106a9304 pop esi */
  ESI = (pop32());
  /* 106a9305 pop ebx */
  EBX = (pop32());
  /* 106a9306 mov esp, ebp */
  ESP = (EBP);
  /* 106a9308 pop ebp */
  EBP = (pop32());
  /* 106a9309 ret  */
  ESPCHK(0x106a9210u, _esp0);
  ESP += 4; return;
}

/* FUN_10009310 @ 0x106a9310 (183 bytes, 58 insns) */
void f_106a9310(void) {
  FTRACE(0x106a9310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a9310 push ebp */
  push32((uint32_t)(EBP));
  /* 106a9311 mov ebp, esp */
  EBP = (ESP);
  /* 106a9313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9319 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a931c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9321 ja 0x106a933a */
  if ((!C.cf&&!C.zf)) goto L_106a933a;
  /* 106a9323 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9326 mov edx, dword ptr [0x106cdc98] */
  EDX = (r32((uint32_t)(0x106cdc98)));
  /* 106a932c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a932e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 106a9332 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 106a9335 jmp 0x106a93c3 */
  goto L_106a93c3;
L_106a933a:;
  /* 106a933a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a933d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 106a9340 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a9346 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a934c mov edx, dword ptr [0x106cdc98] */
  EDX = (r32((uint32_t)(0x106cdc98)));
  /* 106a9352 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a9354 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 106a9358 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 106a935d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a935f je 0x106a9383 */
  if (C.zf) goto L_106a9383;
  /* 106a9361 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9364 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 106a9367 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a936d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 106a9370 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 106a9373 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 106a9376 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 106a937a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 106a9381 jmp 0x106a9394 */
  goto L_106a9394;
L_106a9383:;
  /* 106a9383 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 106a9386 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 106a9389 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 106a938d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_106a9394:;
  /* 106a9394 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a9396 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a9398 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a939a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 106a939d push ecx */
  push32((uint32_t)(ECX));
  /* 106a939e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a93a1 push edx */
  push32((uint32_t)(EDX));
  /* 106a93a2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 106a93a5 push eax */
  push32((uint32_t)(EAX));
  /* 106a93a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a93a8 call 0x106ab530 */
  push32(0x106a93adu); f_106ab530();
  /* 106a93ad add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a93b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a93b2 jne 0x106a93b8 */
  if (!C.zf) goto L_106a93b8;
  /* 106a93b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a93b6 jmp 0x106a93c3 */
  goto L_106a93c3;
L_106a93b8:;
  /* 106a93b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a93bb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a93c0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_106a93c3:;
  /* 106a93c3 mov esp, ebp */
  ESP = (EBP);
  /* 106a93c5 pop ebp */
  EBP = (pop32());
  /* 106a93c6 ret  */
  ESPCHK(0x106a9310u, _esp0);
  ESP += 4; return;
}

/* FUN_100093d0 @ 0x106a93d0 (836 bytes, 238 insns) */
void f_106a93d0(void) {
  FTRACE(0x106a93d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a93d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a93d1 mov ebp, esp */
  EBP = (ESP);
  /* 106a93d3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a93d6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106a93d8 call 0x106a6d00 */
  push32(0x106a93ddu); f_106a6d00();
  /* 106a93dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a93e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a93e3 push eax */
  push32((uint32_t)(EAX));
  /* 106a93e4 call 0x106a9720 */
  push32(0x106a93e9u); f_106a9720();
  /* 106a93e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a93ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106a93ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a93f2 cmp ecx, dword ptr [0x106d0b64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106d0b64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a93f8 jne 0x106a940b */
  if (!C.zf) goto L_106a940b;
  /* 106a93fa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106a93fc call 0x106a6da0 */
  push32(0x106a9401u); f_106a6da0();
  /* 106a9401 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9404 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a9406 jmp 0x106a9710 */
  goto L_106a9710;
L_106a940b:;
  /* 106a940b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a940f jne 0x106a942c */
  if (!C.zf) goto L_106a942c;
  /* 106a9411 call 0x106a9800 */
  push32(0x106a9416u); f_106a9800();
  /* 106a9416 call 0x106a9880 */
  push32(0x106a941bu); f_106a9880();
  /* 106a941b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106a941d call 0x106a6da0 */
  push32(0x106a9422u); f_106a6da0();
  /* 106a9422 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9425 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a9427 jmp 0x106a9710 */
  goto L_106a9710;
L_106a942c:;
  /* 106a942c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106a9433 jmp 0x106a943e */
  goto L_106a943e;
L_106a9435:;
  /* 106a9435 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a9438 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a943b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106a943e:;
  /* 106a943e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9442 jae 0x106a958f */
  if (!C.cf) goto L_106a958f;
  /* 106a9448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a944b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a944e mov ecx, dword ptr [eax + 0x106cdeb8] */
  ECX = (r32((uint32_t)(EAX + 0x106cdeb8)));
  /* 106a9454 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9457 jne 0x106a958a */
  if (!C.zf) goto L_106a958a;
  /* 106a945d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106a9464 jmp 0x106a946f */
  goto L_106a946f;
L_106a9466:;
  /* 106a9466 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a9469 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a946c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_106a946f:;
  /* 106a946f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9476 jae 0x106a9484 */
  if (!C.cf) goto L_106a9484;
  /* 106a9478 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a947b mov byte ptr [eax + 0x106d0d00], 0 */
  w8((uint32_t)(EAX + 0x106d0d00), (0x0u));
  /* 106a9482 jmp 0x106a9466 */
  goto L_106a9466;
L_106a9484:;
  /* 106a9484 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106a948b jmp 0x106a9496 */
  goto L_106a9496;
L_106a948d:;
  /* 106a948d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a9490 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9493 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_106a9496:;
  /* 106a9496 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a949a jae 0x106a9517 */
  if (!C.cf) goto L_106a9517;
  /* 106a949c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a949f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a94a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a94a5 lea ecx, [edx + eax*8 + 0x106cdec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x106cdec8));
  /* 106a94ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106a94af jmp 0x106a94ba */
  goto L_106a94ba;
L_106a94b1:;
  /* 106a94b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a94b4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a94b7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106a94ba:;
  /* 106a94ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a94bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a94bf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106a94c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a94c3 je 0x106a9512 */
  if (C.zf) goto L_106a9512;
  /* 106a94c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a94c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a94ca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 106a94cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a94cf je 0x106a9512 */
  if (C.zf) goto L_106a9512;
  /* 106a94d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a94d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a94d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106a94d8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106a94db jmp 0x106a94e6 */
  goto L_106a94e6;
L_106a94dd:;
  /* 106a94dd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a94e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a94e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106a94e6:;
  /* 106a94e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a94e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a94eb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 106a94ee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a94f1 ja 0x106a9510 */
  if ((!C.cf&&!C.zf)) goto L_106a9510;
  /* 106a94f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a94f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a94f9 mov dl, byte ptr [eax + 0x106d0d01] */
  DL = (r8((uint32_t)(EAX + 0x106d0d01)));
  /* 106a94ff or dl, byte ptr [ecx + 0x106cdeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x106cdeb0))); DL = (_r); fl_logic(_r,8); }
  /* 106a9505 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a9508 mov byte ptr [eax + 0x106d0d01], dl */
  w8((uint32_t)(EAX + 0x106d0d01), (DL));
  /* 106a950e jmp 0x106a94dd */
  goto L_106a94dd;
L_106a9510:;
  /* 106a9510 jmp 0x106a94b1 */
  goto L_106a94b1;
L_106a9512:;
  /* 106a9512 jmp 0x106a948d */
  goto L_106a948d;
L_106a9517:;
  /* 106a9517 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a951a mov dword ptr [0x106d0b64], ecx */
  w32((uint32_t)(0x106d0b64), (ECX));
  /* 106a9520 mov dword ptr [0x106d0bec], 1 */
  w32((uint32_t)(0x106d0bec), (0x1u));
  /* 106a952a mov edx, dword ptr [0x106d0b64] */
  EDX = (r32((uint32_t)(0x106d0b64)));
  /* 106a9530 push edx */
  push32((uint32_t)(EDX));
  /* 106a9531 call 0x106a9780 */
  push32(0x106a9536u); f_106a9780();
  /* 106a9536 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9539 mov dword ptr [0x106d0e04], eax */
  w32((uint32_t)(0x106d0e04), (EAX));
  /* 106a953e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106a9545 jmp 0x106a9550 */
  goto L_106a9550;
L_106a9547:;
  /* 106a9547 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a954a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a954d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106a9550:;
  /* 106a9550 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9554 jae 0x106a9574 */
  if (!C.cf) goto L_106a9574;
  /* 106a9556 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a9559 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a955c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a955f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a9562 mov cx, word ptr [ecx + eax*2 + 0x106cdebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x106cdebc)));
  /* 106a956a mov word ptr [edx*2 + 0x106d0be0], cx */
  w16((uint32_t)(EDX*2 + 0x106d0be0), (CX));
  /* 106a9572 jmp 0x106a9547 */
  goto L_106a9547;
L_106a9574:;
  /* 106a9574 call 0x106a9880 */
  push32(0x106a9579u); f_106a9880();
  /* 106a9579 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106a957b call 0x106a6da0 */
  push32(0x106a9580u); f_106a6da0();
  /* 106a9580 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a9585 jmp 0x106a9710 */
  goto L_106a9710;
L_106a958a:;
  /* 106a958a jmp 0x106a9435 */
  goto L_106a9435;
L_106a958f:;
  /* 106a958f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 106a9592 push edx */
  push32((uint32_t)(EDX));
  /* 106a9593 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9596 push eax */
  push32((uint32_t)(EAX));
  /* 106a9597 call dword ptr [0x106d1370] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1370))), 0x106a959du);
  /* 106a959d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a95a0 jne 0x106a96e2 */
  if (!C.zf) goto L_106a96e2;
  /* 106a95a6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106a95ad jmp 0x106a95b8 */
  goto L_106a95b8;
L_106a95af:;
  /* 106a95af mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a95b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a95b5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_106a95b8:;
  /* 106a95b8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a95bf jae 0x106a95cd */
  if (!C.cf) goto L_106a95cd;
  /* 106a95c1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a95c4 mov byte ptr [edx + 0x106d0d00], 0 */
  w8((uint32_t)(EDX + 0x106d0d00), (0x0u));
  /* 106a95cb jmp 0x106a95af */
  goto L_106a95af;
L_106a95cd:;
  /* 106a95cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a95d0 mov dword ptr [0x106d0b64], eax */
  w32((uint32_t)(0x106d0b64), (EAX));
  /* 106a95d5 mov dword ptr [0x106d0e04], 0 */
  w32((uint32_t)(0x106d0e04), (0x0u));
  /* 106a95df cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a95e3 jbe 0x106a969e */
  if ((C.cf||C.zf)) goto L_106a969e;
  /* 106a95e9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 106a95ec mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 106a95ef jmp 0x106a95fa */
  goto L_106a95fa;
L_106a95f1:;
  /* 106a95f1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a95f4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a95f7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_106a95fa:;
  /* 106a95fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a95fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a95ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106a9601 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a9603 je 0x106a964c */
  if (C.zf) goto L_106a964c;
  /* 106a9605 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a9608 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a960a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 106a960d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a960f je 0x106a964c */
  if (C.zf) goto L_106a964c;
  /* 106a9611 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a9614 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a9616 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106a9618 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106a961b jmp 0x106a9626 */
  goto L_106a9626;
L_106a961d:;
  /* 106a961d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a9620 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9623 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106a9626:;
  /* 106a9626 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a9629 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a962b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 106a962e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9631 ja 0x106a964a */
  if ((!C.cf&&!C.zf)) goto L_106a964a;
  /* 106a9633 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a9636 mov cl, byte ptr [eax + 0x106d0d01] */
  CL = (r8((uint32_t)(EAX + 0x106d0d01)));
  /* 106a963c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 106a963f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a9642 mov byte ptr [edx + 0x106d0d01], cl */
  w8((uint32_t)(EDX + 0x106d0d01), (CL));
  /* 106a9648 jmp 0x106a961d */
  goto L_106a961d;
L_106a964a:;
  /* 106a964a jmp 0x106a95f1 */
  goto L_106a95f1;
L_106a964c:;
  /* 106a964c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 106a9653 jmp 0x106a965e */
  goto L_106a965e;
L_106a9655:;
  /* 106a9655 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a9658 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a965b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106a965e:;
  /* 106a965e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9665 jae 0x106a967e */
  if (!C.cf) goto L_106a967e;
  /* 106a9667 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a966a mov dl, byte ptr [ecx + 0x106d0d01] */
  DL = (r8((uint32_t)(ECX + 0x106d0d01)));
  /* 106a9670 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 106a9673 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a9676 mov byte ptr [eax + 0x106d0d01], dl */
  w8((uint32_t)(EAX + 0x106d0d01), (DL));
  /* 106a967c jmp 0x106a9655 */
  goto L_106a9655;
L_106a967e:;
  /* 106a967e mov ecx, dword ptr [0x106d0b64] */
  ECX = (r32((uint32_t)(0x106d0b64)));
  /* 106a9684 push ecx */
  push32((uint32_t)(ECX));
  /* 106a9685 call 0x106a9780 */
  push32(0x106a968au); f_106a9780();
  /* 106a968a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a968d mov dword ptr [0x106d0e04], eax */
  w32((uint32_t)(0x106d0e04), (EAX));
  /* 106a9692 mov dword ptr [0x106d0bec], 1 */
  w32((uint32_t)(0x106d0bec), (0x1u));
  /* 106a969c jmp 0x106a96a8 */
  goto L_106a96a8;
L_106a969e:;
  /* 106a969e mov dword ptr [0x106d0bec], 0 */
  w32((uint32_t)(0x106d0bec), (0x0u));
L_106a96a8:;
  /* 106a96a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106a96af jmp 0x106a96ba */
  goto L_106a96ba;
L_106a96b1:;
  /* 106a96b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a96b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a96b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106a96ba:;
  /* 106a96ba cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a96be jae 0x106a96cf */
  if (!C.cf) goto L_106a96cf;
  /* 106a96c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a96c3 mov word ptr [eax*2 + 0x106d0be0], 0 */
  w16((uint32_t)(EAX*2 + 0x106d0be0), (0x0u));
  /* 106a96cd jmp 0x106a96b1 */
  goto L_106a96b1;
L_106a96cf:;
  /* 106a96cf call 0x106a9880 */
  push32(0x106a96d4u); f_106a9880();
  /* 106a96d4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106a96d6 call 0x106a6da0 */
  push32(0x106a96dbu); f_106a6da0();
  /* 106a96db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a96de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a96e0 jmp 0x106a9710 */
  goto L_106a9710;
L_106a96e2:;
  /* 106a96e2 cmp dword ptr [0x106cf680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a96e9 je 0x106a9703 */
  if (C.zf) goto L_106a9703;
  /* 106a96eb call 0x106a9800 */
  push32(0x106a96f0u); f_106a9800();
  /* 106a96f0 call 0x106a9880 */
  push32(0x106a96f5u); f_106a9880();
  /* 106a96f5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106a96f7 call 0x106a6da0 */
  push32(0x106a96fcu); f_106a6da0();
  /* 106a96fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a96ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a9701 jmp 0x106a9710 */
  goto L_106a9710;
L_106a9703:;
  /* 106a9703 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106a9705 call 0x106a6da0 */
  push32(0x106a970au); f_106a6da0();
  /* 106a970a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a970d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106a9710:;
  /* 106a9710 mov esp, ebp */
  ESP = (EBP);
  /* 106a9712 pop ebp */
  EBP = (pop32());
  /* 106a9713 ret  */
  ESPCHK(0x106a93d0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x106a9720 (89 bytes, 21 insns) */
void f_106a9720(void) {
  FTRACE(0x106a9720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a9720 push ebp */
  push32((uint32_t)(EBP));
  /* 106a9721 mov ebp, esp */
  EBP = (ESP);
  /* 106a9723 mov dword ptr [0x106cf680], 0 */
  w32((uint32_t)(0x106cf680), (0x0u));
  /* 106a972d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9731 jne 0x106a9745 */
  if (!C.zf) goto L_106a9745;
  /* 106a9733 mov dword ptr [0x106cf680], 1 */
  w32((uint32_t)(0x106cf680), (0x1u));
  /* 106a973d call dword ptr [0x106d1314] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1314))), 0x106a9743u);
  /* 106a9743 jmp 0x106a9777 */
  goto L_106a9777;
L_106a9745:;
  /* 106a9745 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9749 jne 0x106a975d */
  if (!C.zf) goto L_106a975d;
  /* 106a974b mov dword ptr [0x106cf680], 1 */
  w32((uint32_t)(0x106cf680), (0x1u));
  /* 106a9755 call dword ptr [0x106d1374] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1374))), 0x106a975bu);
  /* 106a975b jmp 0x106a9777 */
  goto L_106a9777;
L_106a975d:;
  /* 106a975d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9761 jne 0x106a9774 */
  if (!C.zf) goto L_106a9774;
  /* 106a9763 mov dword ptr [0x106cf680], 1 */
  w32((uint32_t)(0x106cf680), (0x1u));
  /* 106a976d mov eax, dword ptr [0x106cf6a0] */
  EAX = (r32((uint32_t)(0x106cf6a0)));
  /* 106a9772 jmp 0x106a9777 */
  goto L_106a9777;
L_106a9774:;
  /* 106a9774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_106a9777:;
  /* 106a9777 pop ebp */
  EBP = (pop32());
  /* 106a9778 ret  */
  ESPCHK(0x106a9720u, _esp0);
  ESP += 4; return;
}

/* FUN_10009780 @ 0x106a9780 (80 bytes, 26 insns) [1 switch table(s)] */
void f_106a9780(void) {
  FTRACE(0x106a9780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a9780 push ebp */
  push32((uint32_t)(EBP));
  /* 106a9781 mov ebp, esp */
  EBP = (ESP);
  /* 106a9783 push ecx */
  push32((uint32_t)(ECX));
  /* 106a9784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9787 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a978a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a978d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9793 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106a9796 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a979a ja 0x106a97ca */
  if ((!C.cf&&!C.zf)) goto L_106a97ca;
  /* 106a979c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a979f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a97a1 mov dl, byte ptr [eax + 0x106a97e4] */
  DL = (r8((uint32_t)(EAX + 0x106a97e4)));
  /* 106a97a7 jmp dword ptr [edx*4 + 0x106a97d0] */
  switch (EDX) {
    case 0: goto L_106a97ae;
    case 1: goto L_106a97b5;
    case 2: goto L_106a97bc;
    case 3: goto L_106a97c3;
    case 4: goto L_106a97ca;
    default: x86_unimpl("switch@0x106a97a7 out of table"); return;
  }
L_106a97ae:;
  /* 106a97ae mov eax, 0x411 */
  EAX = (0x411u);
  /* 106a97b3 jmp 0x106a97cc */
  goto L_106a97cc;
L_106a97b5:;
  /* 106a97b5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 106a97ba jmp 0x106a97cc */
  goto L_106a97cc;
L_106a97bc:;
  /* 106a97bc mov eax, 0x412 */
  EAX = (0x412u);
  /* 106a97c1 jmp 0x106a97cc */
  goto L_106a97cc;
L_106a97c3:;
  /* 106a97c3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 106a97c8 jmp 0x106a97cc */
  goto L_106a97cc;
L_106a97ca:;
  /* 106a97ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106a97cc:;
  /* 106a97cc mov esp, ebp */
  ESP = (EBP);
  /* 106a97ce pop ebp */
  EBP = (pop32());
  /* 106a97cf ret  */
  ESPCHK(0x106a9780u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x106a9800 (116 bytes, 29 insns) */
void f_106a9800(void) {
  FTRACE(0x106a9800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a9800 push ebp */
  push32((uint32_t)(EBP));
  /* 106a9801 mov ebp, esp */
  EBP = (ESP);
  /* 106a9803 push ecx */
  push32((uint32_t)(ECX));
  /* 106a9804 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106a980b jmp 0x106a9816 */
  goto L_106a9816;
L_106a980d:;
  /* 106a980d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a9810 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9813 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a9816:;
  /* 106a9816 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a981d jge 0x106a982b */
  if ((C.sf==C.of)) goto L_106a982b;
  /* 106a981f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a9822 mov byte ptr [ecx + 0x106d0d00], 0 */
  w8((uint32_t)(ECX + 0x106d0d00), (0x0u));
  /* 106a9829 jmp 0x106a980d */
  goto L_106a980d;
L_106a982b:;
  /* 106a982b mov dword ptr [0x106d0b64], 0 */
  w32((uint32_t)(0x106d0b64), (0x0u));
  /* 106a9835 mov dword ptr [0x106d0bec], 0 */
  w32((uint32_t)(0x106d0bec), (0x0u));
  /* 106a983f mov dword ptr [0x106d0e04], 0 */
  w32((uint32_t)(0x106d0e04), (0x0u));
  /* 106a9849 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106a9850 jmp 0x106a985b */
  goto L_106a985b;
L_106a9852:;
  /* 106a9852 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a9855 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9858 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106a985b:;
  /* 106a985b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a985f jge 0x106a9870 */
  if ((C.sf==C.of)) goto L_106a9870;
  /* 106a9861 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a9864 mov word ptr [eax*2 + 0x106d0be0], 0 */
  w16((uint32_t)(EAX*2 + 0x106d0be0), (0x0u));
  /* 106a986e jmp 0x106a9852 */
  goto L_106a9852;
L_106a9870:;
  /* 106a9870 mov esp, ebp */
  ESP = (EBP);
  /* 106a9872 pop ebp */
  EBP = (pop32());
  /* 106a9873 ret  */
  ESPCHK(0x106a9800u, _esp0);
  ESP += 4; return;
}

/* FUN_10009880 @ 0x106a9880 (770 bytes, 175 insns) */
void f_106a9880(void) {
  FTRACE(0x106a9880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a9880 push ebp */
  push32((uint32_t)(EBP));
  /* 106a9881 mov ebp, esp */
  EBP = (ESP);
  /* 106a9883 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9889 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 106a988f push eax */
  push32((uint32_t)(EAX));
  /* 106a9890 mov ecx, dword ptr [0x106d0b64] */
  ECX = (r32((uint32_t)(0x106d0b64)));
  /* 106a9896 push ecx */
  push32((uint32_t)(ECX));
  /* 106a9897 call dword ptr [0x106d1370] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1370))), 0x106a989du);
  /* 106a989d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a98a0 jne 0x106a9ab9 */
  if (!C.zf) goto L_106a9ab9;
  /* 106a98a6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 106a98b0 jmp 0x106a98c1 */
  goto L_106a98c1;
L_106a98b2:;
  /* 106a98b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a98b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a98bb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_106a98c1:;
  /* 106a98c1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a98cb jae 0x106a98e2 */
  if (!C.cf) goto L_106a98e2;
  /* 106a98cd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a98d3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 106a98d9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 106a98e0 jmp 0x106a98b2 */
  goto L_106a98b2;
L_106a98e2:;
  /* 106a98e2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 106a98e9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 106a98ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a98f2 jmp 0x106a98fd */
  goto L_106a98fd;
L_106a98f4:;
  /* 106a98f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a98f7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a98fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a98fd:;
  /* 106a98fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a9900 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a9902 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106a9904 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a9906 je 0x106a9948 */
  if (C.zf) goto L_106a9948;
  /* 106a9908 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a990b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a990d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106a990f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 106a9915 jmp 0x106a9926 */
  goto L_106a9926;
L_106a9917:;
  /* 106a9917 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a991d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9920 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_106a9926:;
  /* 106a9926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a9929 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a992b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 106a992e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9934 ja 0x106a9946 */
  if ((!C.cf&&!C.zf)) goto L_106a9946;
  /* 106a9936 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a993c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 106a9944 jmp 0x106a9917 */
  goto L_106a9917;
L_106a9946:;
  /* 106a9946 jmp 0x106a98f4 */
  goto L_106a98f4;
L_106a9948:;
  /* 106a9948 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a994a mov eax, dword ptr [0x106d0e04] */
  EAX = (r32((uint32_t)(0x106d0e04)));
  /* 106a994f push eax */
  push32((uint32_t)(EAX));
  /* 106a9950 mov ecx, dword ptr [0x106d0b64] */
  ECX = (r32((uint32_t)(0x106d0b64)));
  /* 106a9956 push ecx */
  push32((uint32_t)(ECX));
  /* 106a9957 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 106a995d push edx */
  push32((uint32_t)(EDX));
  /* 106a995e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106a9963 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 106a9969 push eax */
  push32((uint32_t)(EAX));
  /* 106a996a push 1 */
  push32((uint32_t)(0x1u));
  /* 106a996c call 0x106ab530 */
  push32(0x106a9971u); f_106ab530();
  /* 106a9971 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9974 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a9976 mov ecx, dword ptr [0x106d0b64] */
  ECX = (r32((uint32_t)(0x106d0b64)));
  /* 106a997c push ecx */
  push32((uint32_t)(ECX));
  /* 106a997d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106a9982 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 106a9988 push edx */
  push32((uint32_t)(EDX));
  /* 106a9989 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106a998e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 106a9994 push eax */
  push32((uint32_t)(EAX));
  /* 106a9995 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106a999a mov ecx, dword ptr [0x106d0e04] */
  ECX = (r32((uint32_t)(0x106d0e04)));
  /* 106a99a0 push ecx */
  push32((uint32_t)(ECX));
  /* 106a99a1 call 0x106ab6f0 */
  push32(0x106a99a6u); f_106ab6f0();
  /* 106a99a6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a99a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a99ab mov edx, dword ptr [0x106d0b64] */
  EDX = (r32((uint32_t)(0x106d0b64)));
  /* 106a99b1 push edx */
  push32((uint32_t)(EDX));
  /* 106a99b2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106a99b7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 106a99bd push eax */
  push32((uint32_t)(EAX));
  /* 106a99be push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106a99c3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 106a99c9 push ecx */
  push32((uint32_t)(ECX));
  /* 106a99ca push 0x200 */
  push32((uint32_t)(0x200u));
  /* 106a99cf mov edx, dword ptr [0x106d0e04] */
  EDX = (r32((uint32_t)(0x106d0e04)));
  /* 106a99d5 push edx */
  push32((uint32_t)(EDX));
  /* 106a99d6 call 0x106ab6f0 */
  push32(0x106a99dbu); f_106ab6f0();
  /* 106a99db add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a99de mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 106a99e8 jmp 0x106a99f9 */
  goto L_106a99f9;
L_106a99ea:;
  /* 106a99ea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a99f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a99f3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_106a99f9:;
  /* 106a99f9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9a03 jae 0x106a9ab4 */
  if (!C.cf) goto L_106a9ab4;
  /* 106a9a09 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9a0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a9a11 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 106a9a19 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106a9a1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a9a1e je 0x106a9a56 */
  if (C.zf) goto L_106a9a56;
  /* 106a9a20 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9a26 mov cl, byte ptr [eax + 0x106d0d01] */
  CL = (r8((uint32_t)(EAX + 0x106d0d01)));
  /* 106a9a2c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 106a9a2f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9a35 mov byte ptr [edx + 0x106d0d01], cl */
  w8((uint32_t)(EDX + 0x106d0d01), (CL));
  /* 106a9a3b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9a41 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9a47 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 106a9a4e mov byte ptr [eax + 0x106d0c00], dl */
  w8((uint32_t)(EAX + 0x106d0c00), (DL));
  /* 106a9a54 jmp 0x106a9aaf */
  goto L_106a9aaf;
L_106a9a56:;
  /* 106a9a56 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9a5c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a9a5e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 106a9a66 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 106a9a69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a9a6b je 0x106a9aa2 */
  if (C.zf) goto L_106a9aa2;
  /* 106a9a6d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9a73 mov al, byte ptr [edx + 0x106d0d01] */
  AL = (r8((uint32_t)(EDX + 0x106d0d01)));
  /* 106a9a79 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 106a9a7b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9a81 mov byte ptr [ecx + 0x106d0d01], al */
  w8((uint32_t)(ECX + 0x106d0d01), (AL));
  /* 106a9a87 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9a8d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9a93 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 106a9a9a mov byte ptr [edx + 0x106d0c00], cl */
  w8((uint32_t)(EDX + 0x106d0c00), (CL));
  /* 106a9aa0 jmp 0x106a9aaf */
  goto L_106a9aaf;
L_106a9aa2:;
  /* 106a9aa2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9aa8 mov byte ptr [edx + 0x106d0c00], 0 */
  w8((uint32_t)(EDX + 0x106d0c00), (0x0u));
L_106a9aaf:;
  /* 106a9aaf jmp 0x106a99ea */
  goto L_106a99ea;
L_106a9ab4:;
  /* 106a9ab4 jmp 0x106a9b7e */
  goto L_106a9b7e;
L_106a9ab9:;
  /* 106a9ab9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 106a9ac3 jmp 0x106a9ad4 */
  goto L_106a9ad4;
L_106a9ac5:;
  /* 106a9ac5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9acb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9ace mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_106a9ad4:;
  /* 106a9ad4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9ade jae 0x106a9b7e */
  if (!C.cf) goto L_106a9b7e;
  /* 106a9ae4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9aeb jb 0x106a9b28 */
  if (C.cf) goto L_106a9b28;
  /* 106a9aed cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9af4 ja 0x106a9b28 */
  if ((!C.cf&&!C.zf)) goto L_106a9b28;
  /* 106a9af6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9afc mov dl, byte ptr [ecx + 0x106d0d01] */
  DL = (r8((uint32_t)(ECX + 0x106d0d01)));
  /* 106a9b02 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 106a9b05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9b0b mov byte ptr [eax + 0x106d0d01], dl */
  w8((uint32_t)(EAX + 0x106d0d01), (DL));
  /* 106a9b11 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9b17 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9b1a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9b20 mov byte ptr [edx + 0x106d0c00], cl */
  w8((uint32_t)(EDX + 0x106d0c00), (CL));
  /* 106a9b26 jmp 0x106a9b79 */
  goto L_106a9b79;
L_106a9b28:;
  /* 106a9b28 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9b2f jb 0x106a9b6c */
  if (C.cf) goto L_106a9b6c;
  /* 106a9b31 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9b38 ja 0x106a9b6c */
  if ((!C.cf&&!C.zf)) goto L_106a9b6c;
  /* 106a9b3a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9b40 mov cl, byte ptr [eax + 0x106d0d01] */
  CL = (r8((uint32_t)(EAX + 0x106d0d01)));
  /* 106a9b46 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 106a9b49 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9b4f mov byte ptr [edx + 0x106d0d01], cl */
  w8((uint32_t)(EDX + 0x106d0d01), (CL));
  /* 106a9b55 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9b5b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9b5e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9b64 mov byte ptr [ecx + 0x106d0c00], al */
  w8((uint32_t)(ECX + 0x106d0c00), (AL));
  /* 106a9b6a jmp 0x106a9b79 */
  goto L_106a9b79;
L_106a9b6c:;
  /* 106a9b6c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 106a9b72 mov byte ptr [edx + 0x106d0c00], 0 */
  w8((uint32_t)(EDX + 0x106d0c00), (0x0u));
L_106a9b79:;
  /* 106a9b79 jmp 0x106a9ac5 */
  goto L_106a9ac5;
L_106a9b7e:;
  /* 106a9b7e mov esp, ebp */
  ESP = (EBP);
  /* 106a9b80 pop ebp */
  EBP = (pop32());
  /* 106a9b81 ret  */
  ESPCHK(0x106a9880u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b90 @ 0x106a9b90 (23 bytes, 9 insns) */
void f_106a9b90(void) {
  FTRACE(0x106a9b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a9b90 push ebp */
  push32((uint32_t)(EBP));
  /* 106a9b91 mov ebp, esp */
  EBP = (ESP);
  /* 106a9b93 cmp dword ptr [0x106d0bec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0bec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9b9a je 0x106a9ba3 */
  if (C.zf) goto L_106a9ba3;
  /* 106a9b9c mov eax, dword ptr [0x106d0b64] */
  EAX = (r32((uint32_t)(0x106d0b64)));
  /* 106a9ba1 jmp 0x106a9ba5 */
  goto L_106a9ba5;
L_106a9ba3:;
  /* 106a9ba3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106a9ba5:;
  /* 106a9ba5 pop ebp */
  EBP = (pop32());
  /* 106a9ba6 ret  */
  ESPCHK(0x106a9b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bb0 @ 0x106a9bb0 (34 bytes, 10 insns) */
void f_106a9bb0(void) {
  FTRACE(0x106a9bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a9bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a9bb1 mov ebp, esp */
  EBP = (ESP);
  /* 106a9bb3 cmp dword ptr [0x106d0fb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0fb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9bba jne 0x106a9bd0 */
  if (!C.zf) goto L_106a9bd0;
  /* 106a9bbc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 106a9bbe call 0x106a93d0 */
  push32(0x106a9bc3u); f_106a93d0();
  /* 106a9bc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9bc6 mov dword ptr [0x106d0fb0], 1 */
  w32((uint32_t)(0x106d0fb0), (0x1u));
L_106a9bd0:;
  /* 106a9bd0 pop ebp */
  EBP = (pop32());
  /* 106a9bd1 ret  */
  ESPCHK(0x106a9bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009be0 @ 0x106a9be0 (664 bytes, 266 insns) [15 switch table(s)] */
void f_106a9be0(void) {
  FTRACE(0x106a9be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a9be0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a9be1 mov ebp, esp */
  EBP = (ESP);
  /* 106a9be3 push edi */
  push32((uint32_t)(EDI));
  /* 106a9be4 push esi */
  push32((uint32_t)(ESI));
  /* 106a9be5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 106a9be8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a9beb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9bee mov eax, ecx */
  EAX = (ECX);
  /* 106a9bf0 mov edx, ecx */
  EDX = (ECX);
  /* 106a9bf2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9bf4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9bf6 jbe 0x106a9c00 */
  if ((C.cf||C.zf)) goto L_106a9c00;
  /* 106a9bf8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9bfa jb 0x106a9d78 */
  if (C.cf) goto L_106a9d78;
L_106a9c00:;
  /* 106a9c00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 106a9c06 jne 0x106a9c1c */
  if (!C.zf) goto L_106a9c1c;
  /* 106a9c08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106a9c0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106a9c0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9c11 jb 0x106a9c3c */
  if (C.cf) goto L_106a9c3c;
  /* 106a9c13 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106a9c15 jmp dword ptr [edx*4 + 0x106a9d28] */
  switch (EDX) {
    case 0: goto L_106a9d38;
    case 1: goto L_106a9d40;
    case 2: goto L_106a9d4c;
    case 3: goto L_106a9d60;
    default: x86_unimpl("switch@0x106a9c15 out of table"); return;
  }
L_106a9c1c:;
  /* 106a9c1c mov eax, edi */
  EAX = (EDI);
  /* 106a9c1e mov edx, 3 */
  EDX = (0x3u);
  /* 106a9c23 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9c26 jb 0x106a9c34 */
  if (C.cf) goto L_106a9c34;
  /* 106a9c28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 106a9c2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9c2d jmp dword ptr [eax*4 + 0x106a9c40] */
  switch (EAX) {
    case 1: goto L_106a9c50;
    case 2: goto L_106a9c7c;
    case 3: goto L_106a9ca0;
    default: x86_unimpl("switch@0x106a9c2d out of table"); return;
  }
L_106a9c34:;
  /* 106a9c34 jmp dword ptr [ecx*4 + 0x106a9d38] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x106a9d38)))); return;
  /* 106a9c3b nop  */
  /* nop */
L_106a9c3c:;
  /* 106a9c3c jmp dword ptr [ecx*4 + 0x106a9cbc] */
  switch (ECX) {
    case 0: goto L_106a9d1f;
    case 1: goto L_106a9d0c;
    case 2: goto L_106a9d04;
    case 3: goto L_106a9cfc;
    case 4: goto L_106a9cf4;
    case 5: goto L_106a9cec;
    case 6: goto L_106a9ce4;
    case 7: goto L_106a9cdc;
    default: x86_unimpl("switch@0x106a9c3c out of table"); return;
  }
  /* 106a9c43 nop  */
  /* nop */
L_106a9c50:;
  /* 106a9c50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106a9c52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106a9c54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106a9c56 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106a9c59 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106a9c5c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106a9c5f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106a9c62 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106a9c65 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9c68 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9c6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9c6e jb 0x106a9c3c */
  if (C.cf) goto L_106a9c3c;
  /* 106a9c70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106a9c72 jmp dword ptr [edx*4 + 0x106a9d28] */
  switch (EDX) {
    case 0: goto L_106a9d38;
    case 1: goto L_106a9d40;
    case 2: goto L_106a9d4c;
    case 3: goto L_106a9d60;
    default: x86_unimpl("switch@0x106a9c72 out of table"); return;
  }
  /* 106a9c79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106a9c7c:;
  /* 106a9c7c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106a9c7e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106a9c80 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106a9c82 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106a9c85 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106a9c88 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106a9c8b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9c8e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9c91 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9c94 jb 0x106a9c3c */
  if (C.cf) goto L_106a9c3c;
  /* 106a9c96 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106a9c98 jmp dword ptr [edx*4 + 0x106a9d28] */
  switch (EDX) {
    case 0: goto L_106a9d38;
    case 1: goto L_106a9d40;
    case 2: goto L_106a9d4c;
    case 3: goto L_106a9d60;
    default: x86_unimpl("switch@0x106a9c98 out of table"); return;
  }
  /* 106a9c9f nop  */
  /* nop */
L_106a9ca0:;
  /* 106a9ca0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106a9ca2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106a9ca4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106a9ca6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106a9ca7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106a9caa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106a9cab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9cae jb 0x106a9c3c */
  if (C.cf) goto L_106a9c3c;
  /* 106a9cb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106a9cb2 jmp dword ptr [edx*4 + 0x106a9d28] */
  switch (EDX) {
    case 0: goto L_106a9d38;
    case 1: goto L_106a9d40;
    case 2: goto L_106a9d4c;
    case 3: goto L_106a9d60;
    default: x86_unimpl("switch@0x106a9cb2 out of table"); return;
  }
  /* 106a9cb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106a9cdc:;
  /* 106a9cdc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 106a9ce0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_106a9ce4:;
  /* 106a9ce4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 106a9ce8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_106a9cec:;
  /* 106a9cec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 106a9cf0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_106a9cf4:;
  /* 106a9cf4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 106a9cf8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_106a9cfc:;
  /* 106a9cfc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 106a9d00 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_106a9d04:;
  /* 106a9d04 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 106a9d08 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_106a9d0c:;
  /* 106a9d0c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 106a9d10 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 106a9d14 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 106a9d1b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9d1d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_106a9d1f:;
  /* 106a9d1f jmp dword ptr [edx*4 + 0x106a9d28] */
  switch (EDX) {
    case 0: goto L_106a9d38;
    case 1: goto L_106a9d40;
    case 2: goto L_106a9d4c;
    case 3: goto L_106a9d60;
    default: x86_unimpl("switch@0x106a9d1f out of table"); return;
  }
  /* 106a9d26 mov edi, edi */
  EDI = (EDI);
L_106a9d38:;
  /* 106a9d38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9d3b pop esi */
  ESI = (pop32());
  /* 106a9d3c pop edi */
  EDI = (pop32());
  /* 106a9d3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106a9d3e ret  */
  ESPCHK(0x106a9be0u, _esp0);
  ESP += 4; return;
  /* 106a9d3f nop  */
  /* nop */
L_106a9d40:;
  /* 106a9d40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106a9d42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106a9d44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9d47 pop esi */
  ESI = (pop32());
  /* 106a9d48 pop edi */
  EDI = (pop32());
  /* 106a9d49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106a9d4a ret  */
  ESPCHK(0x106a9be0u, _esp0);
  ESP += 4; return;
  /* 106a9d4b nop  */
  /* nop */
L_106a9d4c:;
  /* 106a9d4c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106a9d4e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106a9d50 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106a9d53 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106a9d56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9d59 pop esi */
  ESI = (pop32());
  /* 106a9d5a pop edi */
  EDI = (pop32());
  /* 106a9d5b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106a9d5c ret  */
  ESPCHK(0x106a9be0u, _esp0);
  ESP += 4; return;
  /* 106a9d5d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106a9d60:;
  /* 106a9d60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106a9d62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106a9d64 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106a9d67 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106a9d6a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106a9d6d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106a9d70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9d73 pop esi */
  ESI = (pop32());
  /* 106a9d74 pop edi */
  EDI = (pop32());
  /* 106a9d75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106a9d76 ret  */
  ESPCHK(0x106a9be0u, _esp0);
  ESP += 4; return;
  /* 106a9d77 nop  */
  /* nop */
L_106a9d78:;
  /* 106a9d78 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 106a9d7c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 106a9d80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 106a9d86 jne 0x106a9dac */
  if (!C.zf) goto L_106a9dac;
  /* 106a9d88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106a9d8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106a9d8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9d91 jb 0x106a9da0 */
  if (C.cf) goto L_106a9da0;
  /* 106a9d93 std  */
  C.df=1;
  /* 106a9d94 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106a9d96 cld  */
  C.df=0;
  /* 106a9d97 jmp dword ptr [edx*4 + 0x106a9ec0] */
  switch (EDX) {
    case 0: goto L_106a9ed0;
    case 1: goto L_106a9ed8;
    case 2: goto L_106a9ee8;
    case 3: goto L_106a9efc;
    default: x86_unimpl("switch@0x106a9d97 out of table"); return;
  }
  /* 106a9d9e mov edi, edi */
  EDI = (EDI);
L_106a9da0:;
  /* 106a9da0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106a9da2 jmp dword ptr [ecx*4 + 0x106a9e70] */
  switch (ECX) {
    case 0: goto L_106a9eb7;
    default: x86_unimpl("switch@0x106a9da2 out of table"); return;
  }
  /* 106a9da9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106a9dac:;
  /* 106a9dac mov eax, edi */
  EAX = (EDI);
  /* 106a9dae mov edx, 3 */
  EDX = (0x3u);
  /* 106a9db3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9db6 jb 0x106a9dc4 */
  if (C.cf) goto L_106a9dc4;
  /* 106a9db8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 106a9dbb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9dbd jmp dword ptr [eax*4 + 0x106a9dc8] */
  switch (EAX) {
    case 1: goto L_106a9dd8;
    case 2: goto L_106a9df8;
    case 3: goto L_106a9e20;
    default: x86_unimpl("switch@0x106a9dbd out of table"); return;
  }
L_106a9dc4:;
  /* 106a9dc4 jmp dword ptr [ecx*4 + 0x106a9ec0] */
  switch (ECX) {
    case 0: goto L_106a9ed0;
    case 1: goto L_106a9ed8;
    case 2: goto L_106a9ee8;
    case 3: goto L_106a9efc;
    default: x86_unimpl("switch@0x106a9dc4 out of table"); return;
  }
  /* 106a9dcb nop  */
  /* nop */
L_106a9dd8:;
  /* 106a9dd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106a9ddb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106a9ddd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106a9de0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 106a9de1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106a9de4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 106a9de5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9de8 jb 0x106a9da0 */
  if (C.cf) goto L_106a9da0;
  /* 106a9dea std  */
  C.df=1;
  /* 106a9deb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106a9ded cld  */
  C.df=0;
  /* 106a9dee jmp dword ptr [edx*4 + 0x106a9ec0] */
  switch (EDX) {
    case 0: goto L_106a9ed0;
    case 1: goto L_106a9ed8;
    case 2: goto L_106a9ee8;
    case 3: goto L_106a9efc;
    default: x86_unimpl("switch@0x106a9dee out of table"); return;
  }
  /* 106a9df5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106a9df8:;
  /* 106a9df8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106a9dfb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106a9dfd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106a9e00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106a9e03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106a9e06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106a9e09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9e0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9e0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9e12 jb 0x106a9da0 */
  if (C.cf) goto L_106a9da0;
  /* 106a9e14 std  */
  C.df=1;
  /* 106a9e15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106a9e17 cld  */
  C.df=0;
  /* 106a9e18 jmp dword ptr [edx*4 + 0x106a9ec0] */
  switch (EDX) {
    case 0: goto L_106a9ed0;
    case 1: goto L_106a9ed8;
    case 2: goto L_106a9ee8;
    case 3: goto L_106a9efc;
    default: x86_unimpl("switch@0x106a9e18 out of table"); return;
  }
  /* 106a9e1f nop  */
  /* nop */
L_106a9e20:;
  /* 106a9e20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106a9e23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106a9e25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106a9e28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106a9e2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106a9e2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106a9e31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106a9e34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106a9e37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9e3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9e3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9e40 jb 0x106a9da0 */
  if (C.cf) goto L_106a9da0;
  /* 106a9e46 std  */
  C.df=1;
  /* 106a9e47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106a9e49 cld  */
  C.df=0;
  /* 106a9e4a jmp dword ptr [edx*4 + 0x106a9ec0] */
  switch (EDX) {
    case 0: goto L_106a9ed0;
    case 1: goto L_106a9ed8;
    case 2: goto L_106a9ee8;
    case 3: goto L_106a9efc;
    default: x86_unimpl("switch@0x106a9e4a out of table"); return;
  }
  /* 106a9e51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 106a9e54 je 0x106a9df4 */
  if (C.zf) goto L_106a9df4;
  /* 106a9e56 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 106a9e58 jl 0x106a9df8 */
  if ((C.sf!=C.of)) goto L_106a9df8;
  /* 106a9e5a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 106a9e5c test byte ptr [esi - 0x6173ef96], bl */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x6173ef96)))&(BL); fl_logic(_r,8); }
  /* 106a9e62 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 106a9e64 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 106a9e65 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 106a9e66 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 106a9e68 pushfd  */
  x86_unimpl("pushfd @ 0x106a9e68");
  /* 106a9e69 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 106a9e6a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 106a9e6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 106a9e6d sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 106a9e6e push 0x10 */
  push32((uint32_t)(0x10u));
  /* 106a9e74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 106a9e78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 106a9e7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 106a9e80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 106a9e84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 106a9e88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 106a9e8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 106a9e90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 106a9e94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 106a9e98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 106a9e9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 106a9ea0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 106a9ea4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 106a9ea8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 106a9eac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 106a9eb3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9eb5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_106a9eb7:;
  /* 106a9eb7 jmp dword ptr [edx*4 + 0x106a9ec0] */
  switch (EDX) {
    case 0: goto L_106a9ed0;
    case 1: goto L_106a9ed8;
    case 2: goto L_106a9ee8;
    case 3: goto L_106a9efc;
    default: x86_unimpl("switch@0x106a9eb7 out of table"); return;
  }
  /* 106a9ebe mov edi, edi */
  EDI = (EDI);
L_106a9ed0:;
  /* 106a9ed0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9ed3 pop esi */
  ESI = (pop32());
  /* 106a9ed4 pop edi */
  EDI = (pop32());
  /* 106a9ed5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106a9ed6 ret  */
  ESPCHK(0x106a9be0u, _esp0);
  ESP += 4; return;
  /* 106a9ed7 nop  */
  /* nop */
L_106a9ed8:;
  /* 106a9ed8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106a9edb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106a9ede mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9ee1 pop esi */
  ESI = (pop32());
  /* 106a9ee2 pop edi */
  EDI = (pop32());
  /* 106a9ee3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106a9ee4 ret  */
  ESPCHK(0x106a9be0u, _esp0);
  ESP += 4; return;
  /* 106a9ee5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106a9ee8:;
  /* 106a9ee8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106a9eeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106a9eee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106a9ef1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106a9ef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9ef7 pop esi */
  ESI = (pop32());
  /* 106a9ef8 pop edi */
  EDI = (pop32());
  /* 106a9ef9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106a9efa ret  */
  ESPCHK(0x106a9be0u, _esp0);
  ESP += 4; return;
  /* 106a9efb nop  */
  /* nop */
L_106a9efc:;
  /* 106a9efc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106a9eff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106a9f02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106a9f05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106a9f08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106a9f0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106a9f0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a9f11 pop esi */
  ESI = (pop32());
  /* 106a9f12 pop edi */
  EDI = (pop32());
  /* 106a9f13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106a9f14 ret  */
  ESPCHK(0x106a9be0u, _esp0);
  ESP += 4; return;
L_106a9df4: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x106a9df4 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x106a9f20 (104 bytes, 43 insns) */
void f_106a9f20(void) {
  FTRACE(0x106a9f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a9f20 push ebx */
  push32((uint32_t)(EBX));
  /* 106a9f21 push esi */
  push32((uint32_t)(ESI));
  /* 106a9f22 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 106a9f26 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a9f28 jne 0x106a9f42 */
  if (!C.zf) goto L_106a9f42;
  /* 106a9f2a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 106a9f2e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 106a9f32 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a9f34 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106a9f36 mov ebx, eax */
  EBX = (EAX);
  /* 106a9f38 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 106a9f3c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106a9f3e mov edx, ebx */
  EDX = (EBX);
  /* 106a9f40 jmp 0x106a9f83 */
  goto L_106a9f83;
L_106a9f42:;
  /* 106a9f42 mov ecx, eax */
  ECX = (EAX);
  /* 106a9f44 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 106a9f48 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 106a9f4c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_106a9f50:;
  /* 106a9f50 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 106a9f52 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 106a9f54 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 106a9f56 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 106a9f58 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a9f5a jne 0x106a9f50 */
  if (!C.zf) goto L_106a9f50;
  /* 106a9f5c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106a9f5e mov esi, eax */
  ESI = (EAX);
  /* 106a9f60 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106a9f64 mov ecx, eax */
  ECX = (EAX);
  /* 106a9f66 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 106a9f6a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106a9f6c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9f6e jb 0x106a9f7e */
  if (C.cf) goto L_106a9f7e;
  /* 106a9f70 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9f74 ja 0x106a9f7e */
  if ((!C.cf&&!C.zf)) goto L_106a9f7e;
  /* 106a9f76 jb 0x106a9f7f */
  if (C.cf) goto L_106a9f7f;
  /* 106a9f78 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9f7c jbe 0x106a9f7f */
  if ((C.cf||C.zf)) goto L_106a9f7f;
L_106a9f7e:;
  /* 106a9f7e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_106a9f7f:;
  /* 106a9f7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a9f81 mov eax, esi */
  EAX = (ESI);
L_106a9f83:;
  /* 106a9f83 pop esi */
  ESI = (pop32());
  /* 106a9f84 pop ebx */
  EBX = (pop32());
  /* 106a9f85 ret 0x10 */
  ESPCHK(0x106a9f20u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x106a9f90 (117 bytes, 44 insns) */
void f_106a9f90(void) {
  FTRACE(0x106a9f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a9f90 push ebx */
  push32((uint32_t)(EBX));
  /* 106a9f91 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 106a9f95 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a9f97 jne 0x106a9fb1 */
  if (!C.zf) goto L_106a9fb1;
  /* 106a9f99 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 106a9f9d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 106a9fa1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a9fa3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106a9fa5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106a9fa9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106a9fab mov eax, edx */
  EAX = (EDX);
  /* 106a9fad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a9faf jmp 0x106aa001 */
  goto L_106aa001;
L_106a9fb1:;
  /* 106a9fb1 mov ecx, eax */
  ECX = (EAX);
  /* 106a9fb3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 106a9fb7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 106a9fbb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_106a9fbf:;
  /* 106a9fbf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 106a9fc1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 106a9fc3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 106a9fc5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 106a9fc7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a9fc9 jne 0x106a9fbf */
  if (!C.zf) goto L_106a9fbf;
  /* 106a9fcb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106a9fcd mov ecx, eax */
  ECX = (EAX);
  /* 106a9fcf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106a9fd3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 106a9fd4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 106a9fd8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a9fda jb 0x106a9fea */
  if (C.cf) goto L_106a9fea;
  /* 106a9fdc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9fe0 ja 0x106a9fea */
  if ((!C.cf&&!C.zf)) goto L_106a9fea;
  /* 106a9fe2 jb 0x106a9ff2 */
  if (C.cf) goto L_106a9ff2;
  /* 106a9fe4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a9fe8 jbe 0x106a9ff2 */
  if ((C.cf||C.zf)) goto L_106a9ff2;
L_106a9fea:;
  /* 106a9fea sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9fee sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_106a9ff2:;
  /* 106a9ff2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9ff6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a9ffa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106a9ffc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106a9ffe sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_106aa001:;
  /* 106aa001 pop ebx */
  EBX = (pop32());
  /* 106aa002 ret 0x10 */
  ESPCHK(0x106a9f90u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a010 @ 0x106aa010 (628 bytes, 214 insns) */
void f_106aa010(void) {
  FTRACE(0x106aa010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106aa010 push ebp */
  push32((uint32_t)(EBP));
  /* 106aa011 mov ebp, esp */
  EBP = (ESP);
  /* 106aa013 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aa016 push ebx */
  push32((uint32_t)(EBX));
  /* 106aa017 push esi */
  push32((uint32_t)(ESI));
  /* 106aa018 push edi */
  push32((uint32_t)(EDI));
L_106aa019:;
  /* 106aa019 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa01d jne 0x106aa03d */
  if (!C.zf) goto L_106aa03d;
  /* 106aa01f push 0x106caf1c */
  push32((uint32_t)(0x106caf1cu));
  /* 106aa024 push 0 */
  push32((uint32_t)(0x0u));
  /* 106aa026 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 106aa028 push 0x106caf10 */
  push32((uint32_t)(0x106caf10u));
  /* 106aa02d push 2 */
  push32((uint32_t)(0x2u));
  /* 106aa02f call 0x106a23c0 */
  push32(0x106aa034u); f_106a23c0();
  /* 106aa034 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa037 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa03a jne 0x106aa03d */
  if (!C.zf) goto L_106aa03d;
  /* 106aa03c int3  */
  x86_unimpl("int3 @ 0x106aa03c");
L_106aa03d:;
  /* 106aa03d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106aa03f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aa041 jne 0x106aa019 */
  if (!C.zf) goto L_106aa019;
  /* 106aa043 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aa046 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106aa049 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa04c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106aa04f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106aa052 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa055 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106aa058 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 106aa05e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aa060 je 0x106aa06f */
  if (C.zf) goto L_106aa06f;
  /* 106aa062 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa065 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106aa068 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 106aa06b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106aa06d je 0x106aa085 */
  if (C.zf) goto L_106aa085;
L_106aa06f:;
  /* 106aa06f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa072 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106aa075 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 106aa077 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa07a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 106aa07d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106aa080 jmp 0x106aa27d */
  goto L_106aa27d;
L_106aa085:;
  /* 106aa085 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa088 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106aa08b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 106aa08e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aa090 je 0x106aa0dc */
  if (C.zf) goto L_106aa0dc;
  /* 106aa092 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa095 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 106aa09c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa09f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106aa0a2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 106aa0a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aa0a7 je 0x106aa0c5 */
  if (C.zf) goto L_106aa0c5;
  /* 106aa0a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa0ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa0af mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106aa0b2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106aa0b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa0b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106aa0ba and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 106aa0bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa0c0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106aa0c3 jmp 0x106aa0dc */
  goto L_106aa0dc;
L_106aa0c5:;
  /* 106aa0c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa0c8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106aa0cb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 106aa0ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa0d1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106aa0d4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106aa0d7 jmp 0x106aa27d */
  goto L_106aa27d;
L_106aa0dc:;
  /* 106aa0dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa0df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106aa0e2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 106aa0e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa0e8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106aa0eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa0ee mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106aa0f1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 106aa0f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa0f7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106aa0fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa0fd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 106aa104 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106aa10b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa10e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106aa111 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa114 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106aa117 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 106aa11d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106aa11f jne 0x106aa14f */
  if (!C.zf) goto L_106aa14f;
  /* 106aa121 cmp dword ptr [ebp - 8], 0x106ce140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x106ce140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa128 je 0x106aa133 */
  if (C.zf) goto L_106aa133;
  /* 106aa12a cmp dword ptr [ebp - 8], 0x106ce160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x106ce160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa131 jne 0x106aa143 */
  if (!C.zf) goto L_106aa143;
L_106aa133:;
  /* 106aa133 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106aa136 push edx */
  push32((uint32_t)(EDX));
  /* 106aa137 call 0x106abf80 */
  push32(0x106aa13cu); f_106abf80();
  /* 106aa13c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa13f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aa141 jne 0x106aa14f */
  if (!C.zf) goto L_106aa14f;
L_106aa143:;
  /* 106aa143 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa146 push eax */
  push32((uint32_t)(EAX));
  /* 106aa147 call 0x106abeb0 */
  push32(0x106aa14cu); f_106abeb0();
  /* 106aa14c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106aa14f:;
  /* 106aa14f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa152 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106aa155 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 106aa15b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aa15d je 0x106aa23b */
  if (C.zf) goto L_106aa23b;
L_106aa163:;
  /* 106aa163 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa166 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa169 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 106aa16b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aa16e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aa170 jge 0x106aa193 */
  if ((C.sf==C.of)) goto L_106aa193;
  /* 106aa172 push 0x106caed0 */
  push32((uint32_t)(0x106caed0u));
  /* 106aa177 push 0 */
  push32((uint32_t)(0x0u));
  /* 106aa179 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 106aa17e push 0x106caf10 */
  push32((uint32_t)(0x106caf10u));
  /* 106aa183 push 2 */
  push32((uint32_t)(0x2u));
  /* 106aa185 call 0x106a23c0 */
  push32(0x106aa18au); f_106a23c0();
  /* 106aa18a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa18d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa190 jne 0x106aa193 */
  if (!C.zf) goto L_106aa193;
  /* 106aa192 int3  */
  x86_unimpl("int3 @ 0x106aa192");
L_106aa193:;
  /* 106aa193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106aa195 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aa197 jne 0x106aa163 */
  if (!C.zf) goto L_106aa163;
  /* 106aa199 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa19c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa19f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 106aa1a1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aa1a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106aa1a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa1aa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106aa1ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa1b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa1b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106aa1b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa1b8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106aa1bb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aa1be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa1c1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106aa1c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa1c8 jle 0x106aa1e6 */
  if ((C.zf||C.sf!=C.of)) goto L_106aa1e6;
  /* 106aa1ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa1cd push ecx */
  push32((uint32_t)(ECX));
  /* 106aa1ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa1d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106aa1d4 push eax */
  push32((uint32_t)(EAX));
  /* 106aa1d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106aa1d8 push ecx */
  push32((uint32_t)(ECX));
  /* 106aa1d9 call 0x106abba0 */
  push32(0x106aa1deu); f_106abba0();
  /* 106aa1de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa1e1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106aa1e4 jmp 0x106aa22e */
  goto L_106aa22e;
L_106aa1e6:;
  /* 106aa1e6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa1ea je 0x106aa209 */
  if (C.zf) goto L_106aa209;
  /* 106aa1ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106aa1ef sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 106aa1f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106aa1f5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 106aa1f8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106aa1fb mov ecx, dword ptr [edx*4 + 0x106d0e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x106d0e60)));
  /* 106aa202 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa204 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106aa207 jmp 0x106aa210 */
  goto L_106aa210;
L_106aa209:;
  /* 106aa209 mov dword ptr [ebp - 0x14], 0x106cda60 */
  w32((uint32_t)(EBP + -0x14), (0x106cda60u));
L_106aa210:;
  /* 106aa210 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106aa213 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 106aa217 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 106aa21a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aa21c je 0x106aa22e */
  if (C.zf) goto L_106aa22e;
  /* 106aa21e push 2 */
  push32((uint32_t)(0x2u));
  /* 106aa220 push 0 */
  push32((uint32_t)(0x0u));
  /* 106aa222 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106aa225 push ecx */
  push32((uint32_t)(ECX));
  /* 106aa226 call 0x106aba50 */
  push32(0x106aa22bu); f_106aba50();
  /* 106aa22b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106aa22e:;
  /* 106aa22e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa231 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106aa234 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 106aa237 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 106aa239 jmp 0x106aa259 */
  goto L_106aa259;
L_106aa23b:;
  /* 106aa23b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106aa242 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa245 push edx */
  push32((uint32_t)(EDX));
  /* 106aa246 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 106aa249 push eax */
  push32((uint32_t)(EAX));
  /* 106aa24a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106aa24d push ecx */
  push32((uint32_t)(ECX));
  /* 106aa24e call 0x106abba0 */
  push32(0x106aa253u); f_106abba0();
  /* 106aa253 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa256 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106aa259:;
  /* 106aa259 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106aa25c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa25f je 0x106aa275 */
  if (C.zf) goto L_106aa275;
  /* 106aa261 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa264 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106aa267 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 106aa26a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa26d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 106aa270 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106aa273 jmp 0x106aa27d */
  goto L_106aa27d;
L_106aa275:;
  /* 106aa275 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aa278 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_106aa27d:;
  /* 106aa27d pop edi */
  EDI = (pop32());
  /* 106aa27e pop esi */
  ESI = (pop32());
  /* 106aa27f pop ebx */
  EBX = (pop32());
  /* 106aa280 mov esp, ebp */
  ESP = (EBP);
  /* 106aa282 pop ebp */
  EBP = (pop32());
  /* 106aa283 ret  */
  ESPCHK(0x106aa010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a290 @ 0x106aa290 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_106aa290(void) {
  FTRACE(0x106aa290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106aa290 push ebp */
  push32((uint32_t)(EBP));
  /* 106aa291 mov ebp, esp */
  EBP = (ESP);
  /* 106aa293 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aa299 push ebx */
  push32((uint32_t)(EBX));
  /* 106aa29a push esi */
  push32((uint32_t)(ESI));
  /* 106aa29b push edi */
  push32((uint32_t)(EDI));
  /* 106aa29c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106aa2a3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 106aa2ad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_106aa2b4:;
  /* 106aa2b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aa2b7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106aa2b9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 106aa2bc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa2c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aa2c3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa2c6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 106aa2c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aa2cb je 0x106aaea7 */
  if (C.zf) goto L_106aaea7;
  /* 106aa2d1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa2d8 jl 0x106aaea7 */
  if ((C.sf!=C.of)) goto L_106aaea7;
  /* 106aa2de movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa2e2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa2e5 jl 0x106aa306 */
  if ((C.sf!=C.of)) goto L_106aa306;
  /* 106aa2e7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa2eb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa2ee jg 0x106aa306 */
  if ((!C.zf&&C.sf==C.of)) goto L_106aa306;
  /* 106aa2f0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa2f4 movsx ecx, byte ptr [eax + 0x106caf08] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x106caf08))));
  /* 106aa2fb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 106aa2fe mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 106aa304 jmp 0x106aa310 */
  goto L_106aa310;
L_106aa306:;
  /* 106aa306 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_106aa310:;
  /* 106aa310 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 106aa316 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106aa319 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106aa31c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106aa31f movsx edx, byte ptr [ecx + eax*8 + 0x106caf28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x106caf28))));
  /* 106aa327 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 106aa32a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106aa32d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106aa330 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 106aa336 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa33d ja 0x106aaea2 */
  if ((!C.cf&&!C.zf)) goto L_106aaea2;
  /* 106aa343 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 106aa349 jmp dword ptr [ecx*4 + 0x106aaeb4] */
  switch (ECX) {
    case 0: goto L_106aa350;
    case 1: goto L_106aa3ea;
    case 2: goto L_106aa42c;
    case 3: goto L_106aa49b;
    case 4: goto L_106aa4f3;
    case 5: goto L_106aa502;
    case 6: goto L_106aa54e;
    case 7: goto L_106aa5e1;
    case 8: goto L_106aa478;
    case 9: goto L_106aa483;
    case 10: goto L_106aa46e;
    case 11: goto L_106aa463;
    case 12: goto L_106aa48e;
    case 13: goto L_106aa496;
    default: x86_unimpl("switch@0x106aa349 out of table"); return;
  }
L_106aa350:;
  /* 106aa350 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 106aa357 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106aa35a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106aa360 mov eax, dword ptr [0x106cdc98] */
  EAX = (r32((uint32_t)(0x106cdc98)));
  /* 106aa365 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106aa367 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 106aa36b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 106aa371 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106aa373 je 0x106aa3cd */
  if (C.zf) goto L_106aa3cd;
  /* 106aa375 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 106aa37b push edx */
  push32((uint32_t)(EDX));
  /* 106aa37c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aa37f push eax */
  push32((uint32_t)(EAX));
  /* 106aa380 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa384 push ecx */
  push32((uint32_t)(ECX));
  /* 106aa385 call 0x106aafc0 */
  push32(0x106aa38au); f_106aafc0();
  /* 106aa38a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa38d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aa390 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106aa392 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 106aa395 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aa398 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa39b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_106aa39e:;
  /* 106aa39e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa3a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aa3a4 jne 0x106aa3c7 */
  if (!C.zf) goto L_106aa3c7;
  /* 106aa3a6 push 0x106cafa8 */
  push32((uint32_t)(0x106cafa8u));
  /* 106aa3ab push 0 */
  push32((uint32_t)(0x0u));
  /* 106aa3ad push 0x186 */
  push32((uint32_t)(0x186u));
  /* 106aa3b2 push 0x106caf9c */
  push32((uint32_t)(0x106caf9cu));
  /* 106aa3b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106aa3b9 call 0x106a23c0 */
  push32(0x106aa3beu); f_106a23c0();
  /* 106aa3be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa3c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa3c4 jne 0x106aa3c7 */
  if (!C.zf) goto L_106aa3c7;
  /* 106aa3c6 int3  */
  x86_unimpl("int3 @ 0x106aa3c6");
L_106aa3c7:;
  /* 106aa3c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106aa3c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aa3cb jne 0x106aa39e */
  if (!C.zf) goto L_106aa39e;
L_106aa3cd:;
  /* 106aa3cd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 106aa3d3 push ecx */
  push32((uint32_t)(ECX));
  /* 106aa3d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aa3d7 push edx */
  push32((uint32_t)(EDX));
  /* 106aa3d8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa3dc push eax */
  push32((uint32_t)(EAX));
  /* 106aa3dd call 0x106aafc0 */
  push32(0x106aa3e2u); f_106aafc0();
  /* 106aa3e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa3e5 jmp 0x106aaea2 */
  goto L_106aaea2;
L_106aa3ea:;
  /* 106aa3ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106aa3f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa3f4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 106aa3fa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 106aa400 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 106aa406 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 106aa40c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106aa40f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106aa416 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 106aa420 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 106aa427 jmp 0x106aaea2 */
  goto L_106aaea2;
L_106aa42c:;
  /* 106aa42c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa430 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 106aa436 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 106aa43c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aa43f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 106aa445 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa44c ja 0x106aa496 */
  if ((!C.cf&&!C.zf)) goto L_106aa496;
  /* 106aa44e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 106aa454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106aa456 mov al, byte ptr [ecx + 0x106aaeec] */
  AL = (r8((uint32_t)(ECX + 0x106aaeec)));
  /* 106aa45c jmp dword ptr [eax*4 + 0x106aaed4] */
  switch (EAX) {
    case 0: goto L_106aa478;
    case 1: goto L_106aa483;
    case 2: goto L_106aa46e;
    case 3: goto L_106aa463;
    case 4: goto L_106aa48e;
    case 5: goto L_106aa496;
    default: x86_unimpl("switch@0x106aa45c out of table"); return;
  }
L_106aa463:;
  /* 106aa463 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa466 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106aa469 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106aa46c jmp 0x106aa496 */
  goto L_106aa496;
L_106aa46e:;
  /* 106aa46e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa471 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 106aa473 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106aa476 jmp 0x106aa496 */
  goto L_106aa496;
L_106aa478:;
  /* 106aa478 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa47b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 106aa47e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106aa481 jmp 0x106aa496 */
  goto L_106aa496;
L_106aa483:;
  /* 106aa483 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa486 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 106aa489 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106aa48c jmp 0x106aa496 */
  goto L_106aa496;
L_106aa48e:;
  /* 106aa48e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa491 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 106aa493 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106aa496:;
  /* 106aa496 jmp 0x106aaea2 */
  goto L_106aaea2;
L_106aa49b:;
  /* 106aa49b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa49f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa4a2 jne 0x106aa4d7 */
  if (!C.zf) goto L_106aa4d7;
  /* 106aa4a4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 106aa4a7 push edx */
  push32((uint32_t)(EDX));
  /* 106aa4a8 call 0x106ab0d0 */
  push32(0x106aa4adu); f_106ab0d0();
  /* 106aa4ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa4b0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 106aa4b6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa4bd jge 0x106aa4d5 */
  if ((C.sf==C.of)) goto L_106aa4d5;
  /* 106aa4bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa4c2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 106aa4c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106aa4c7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 106aa4cd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106aa4cf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_106aa4d5:;
  /* 106aa4d5 jmp 0x106aa4ee */
  goto L_106aa4ee;
L_106aa4d7:;
  /* 106aa4d7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 106aa4dd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106aa4e0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa4e4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 106aa4e8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_106aa4ee:;
  /* 106aa4ee jmp 0x106aaea2 */
  goto L_106aaea2;
L_106aa4f3:;
  /* 106aa4f3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 106aa4fd jmp 0x106aaea2 */
  goto L_106aaea2;
L_106aa502:;
  /* 106aa502 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa506 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa509 jne 0x106aa532 */
  if (!C.zf) goto L_106aa532;
  /* 106aa50b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 106aa50e push eax */
  push32((uint32_t)(EAX));
  /* 106aa50f call 0x106ab0d0 */
  push32(0x106aa514u); f_106ab0d0();
  /* 106aa514 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa517 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 106aa51d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa524 jge 0x106aa530 */
  if ((C.sf==C.of)) goto L_106aa530;
  /* 106aa526 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_106aa530:;
  /* 106aa530 jmp 0x106aa549 */
  goto L_106aa549;
L_106aa532:;
  /* 106aa532 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 106aa538 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106aa53b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa53f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 106aa543 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_106aa549:;
  /* 106aa549 jmp 0x106aaea2 */
  goto L_106aaea2;
L_106aa54e:;
  /* 106aa54e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa552 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 106aa558 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 106aa55e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aa561 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 106aa567 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa56e ja 0x106aa5dc */
  if ((!C.cf&&!C.zf)) goto L_106aa5dc;
  /* 106aa570 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 106aa576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106aa578 mov al, byte ptr [ecx + 0x106aaf11] */
  AL = (r8((uint32_t)(ECX + 0x106aaf11)));
  /* 106aa57e jmp dword ptr [eax*4 + 0x106aaefd] */
  switch (EAX) {
    case 0: goto L_106aa590;
    case 1: goto L_106aa5c9;
    case 2: goto L_106aa585;
    case 3: goto L_106aa5d3;
    case 4: goto L_106aa5dc;
    default: x86_unimpl("switch@0x106aa57e out of table"); return;
  }
L_106aa585:;
  /* 106aa585 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa588 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 106aa58b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106aa58e jmp 0x106aa5dc */
  goto L_106aa5dc;
L_106aa590:;
  /* 106aa590 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aa593 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106aa596 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa599 jne 0x106aa5bb */
  if (!C.zf) goto L_106aa5bb;
  /* 106aa59b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aa59e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 106aa5a2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa5a5 jne 0x106aa5bb */
  if (!C.zf) goto L_106aa5bb;
  /* 106aa5a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aa5aa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa5ad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 106aa5b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa5b3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 106aa5b6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106aa5b9 jmp 0x106aa5c7 */
  goto L_106aa5c7;
L_106aa5bb:;
  /* 106aa5bb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 106aa5c2 jmp 0x106aa350 */
  goto L_106aa350;
L_106aa5c7:;
  /* 106aa5c7 jmp 0x106aa5dc */
  goto L_106aa5dc;
L_106aa5c9:;
  /* 106aa5c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa5cc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 106aa5ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106aa5d1 jmp 0x106aa5dc */
  goto L_106aa5dc;
L_106aa5d3:;
  /* 106aa5d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa5d6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 106aa5d9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106aa5dc:;
  /* 106aa5dc jmp 0x106aaea2 */
  goto L_106aaea2;
L_106aa5e1:;
  /* 106aa5e1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa5e5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 106aa5eb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 106aa5f1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aa5f4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 106aa5fa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa601 ja 0x106aacc7 */
  if ((!C.cf&&!C.zf)) goto L_106aacc7;
  /* 106aa607 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 106aa60d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106aa60f mov cl, byte ptr [edx + 0x106aaf7c] */
  CL = (r8((uint32_t)(EDX + 0x106aaf7c)));
  /* 106aa615 jmp dword ptr [ecx*4 + 0x106aaf40] */
  switch (ECX) {
    case 0: goto L_106aa61c;
    case 1: goto L_106aa8b0;
    case 2: goto L_106aa740;
    case 3: goto L_106aa9e9;
    case 4: goto L_106aa6ab;
    case 5: goto L_106aa631;
    case 6: goto L_106aa9bb;
    case 7: goto L_106aa8c0;
    case 8: goto L_106aa865;
    case 9: goto L_106aaa35;
    case 10: goto L_106aa9df;
    case 11: goto L_106aa756;
    case 12: goto L_106aa9d3;
    case 13: goto L_106aa9f5;
    case 14: goto L_106aacc7;
    default: x86_unimpl("switch@0x106aa615 out of table"); return;
  }
L_106aa61c:;
  /* 106aa61c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa61f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 106aa624 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aa626 jne 0x106aa631 */
  if (!C.zf) goto L_106aa631;
  /* 106aa628 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa62b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 106aa62e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106aa631:;
  /* 106aa631 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa634 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 106aa63a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aa63c je 0x106aa677 */
  if (C.zf) goto L_106aa677;
  /* 106aa63e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 106aa641 push eax */
  push32((uint32_t)(EAX));
  /* 106aa642 call 0x106ab110 */
  push32(0x106aa647u); f_106ab110();
  /* 106aa647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa64a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 106aa64e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 106aa652 push ecx */
  push32((uint32_t)(ECX));
  /* 106aa653 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 106aa659 push edx */
  push32((uint32_t)(EDX));
  /* 106aa65a call 0x106ac1f0 */
  push32(0x106aa65fu); f_106ac1f0();
  /* 106aa65f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa662 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106aa665 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa669 jge 0x106aa675 */
  if ((C.sf==C.of)) goto L_106aa675;
  /* 106aa66b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_106aa675:;
  /* 106aa675 jmp 0x106aa69d */
  goto L_106aa69d;
L_106aa677:;
  /* 106aa677 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 106aa67a push eax */
  push32((uint32_t)(EAX));
  /* 106aa67b call 0x106ab0d0 */
  push32(0x106aa680u); f_106ab0d0();
  /* 106aa680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa683 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 106aa68a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 106aa690 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 106aa696 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_106aa69d:;
  /* 106aa69d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 106aa6a3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 106aa6a6 jmp 0x106aacc7 */
  goto L_106aacc7;
L_106aa6ab:;
  /* 106aa6ab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 106aa6ae push eax */
  push32((uint32_t)(EAX));
  /* 106aa6af call 0x106ab0d0 */
  push32(0x106aa6b4u); f_106ab0d0();
  /* 106aa6b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa6b7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 106aa6bd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa6c4 je 0x106aa6d2 */
  if (C.zf) goto L_106aa6d2;
  /* 106aa6c6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 106aa6cc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa6d0 jne 0x106aa6ec */
  if (!C.zf) goto L_106aa6ec;
L_106aa6d2:;
  /* 106aa6d2 mov edx, dword ptr [0x106cdfb0] */
  EDX = (r32((uint32_t)(0x106cdfb0)));
  /* 106aa6d8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 106aa6db mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aa6de push eax */
  push32((uint32_t)(EAX));
  /* 106aa6df call 0x106a6130 */
  push32(0x106aa6e4u); f_106a6130();
  /* 106aa6e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa6e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106aa6ea jmp 0x106aa73b */
  goto L_106aa73b;
L_106aa6ec:;
  /* 106aa6ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa6ef and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 106aa6f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106aa6f7 je 0x106aa71c */
  if (C.zf) goto L_106aa71c;
  /* 106aa6f9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 106aa6ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106aa702 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106aa705 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 106aa70b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 106aa70e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 106aa710 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106aa713 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 106aa71a jmp 0x106aa73b */
  goto L_106aa73b;
L_106aa71c:;
  /* 106aa71c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 106aa723 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 106aa729 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106aa72c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106aa72f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 106aa735 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 106aa738 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106aa73b:;
  /* 106aa73b jmp 0x106aacc7 */
  goto L_106aacc7;
L_106aa740:;
  /* 106aa740 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa743 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 106aa749 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106aa74b jne 0x106aa756 */
  if (!C.zf) goto L_106aa756;
  /* 106aa74d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa750 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 106aa753 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106aa756:;
  /* 106aa756 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa75d jne 0x106aa76b */
  if (!C.zf) goto L_106aa76b;
  /* 106aa75f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 106aa769 jmp 0x106aa777 */
  goto L_106aa777;
L_106aa76b:;
  /* 106aa76b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 106aa771 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_106aa777:;
  /* 106aa777 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 106aa77d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 106aa783 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 106aa786 push edx */
  push32((uint32_t)(EDX));
  /* 106aa787 call 0x106ab0d0 */
  push32(0x106aa78cu); f_106ab0d0();
  /* 106aa78c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa78f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106aa792 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa795 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 106aa79a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aa79c je 0x106aa806 */
  if (C.zf) goto L_106aa806;
  /* 106aa79e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa7a2 jne 0x106aa7ad */
  if (!C.zf) goto L_106aa7ad;
  /* 106aa7a4 mov ecx, dword ptr [0x106cdfb4] */
  ECX = (r32((uint32_t)(0x106cdfb4)));
  /* 106aa7aa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_106aa7ad:;
  /* 106aa7ad mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 106aa7b4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aa7b7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_106aa7bd:;
  /* 106aa7bd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 106aa7c3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 106aa7c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aa7cc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 106aa7d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aa7d4 je 0x106aa7f6 */
  if (C.zf) goto L_106aa7f6;
  /* 106aa7d6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 106aa7dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106aa7de mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 106aa7e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aa7e3 je 0x106aa7f6 */
  if (C.zf) goto L_106aa7f6;
  /* 106aa7e5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 106aa7eb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa7ee mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 106aa7f4 jmp 0x106aa7bd */
  goto L_106aa7bd;
L_106aa7f6:;
  /* 106aa7f6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 106aa7fc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aa7ff sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 106aa801 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 106aa804 jmp 0x106aa860 */
  goto L_106aa860;
L_106aa806:;
  /* 106aa806 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa80a jne 0x106aa814 */
  if (!C.zf) goto L_106aa814;
  /* 106aa80c mov eax, dword ptr [0x106cdfb0] */
  EAX = (r32((uint32_t)(0x106cdfb0)));
  /* 106aa811 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_106aa814:;
  /* 106aa814 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aa817 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_106aa81d:;
  /* 106aa81d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 106aa823 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 106aa829 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aa82c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 106aa832 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aa834 je 0x106aa854 */
  if (C.zf) goto L_106aa854;
  /* 106aa836 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 106aa83c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106aa83f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aa841 je 0x106aa854 */
  if (C.zf) goto L_106aa854;
  /* 106aa843 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 106aa849 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa84c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 106aa852 jmp 0x106aa81d */
  goto L_106aa81d;
L_106aa854:;
  /* 106aa854 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 106aa85a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aa85d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_106aa860:;
  /* 106aa860 jmp 0x106aacc7 */
  goto L_106aacc7;
L_106aa865:;
  /* 106aa865 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 106aa868 push edx */
  push32((uint32_t)(EDX));
  /* 106aa869 call 0x106ab0d0 */
  push32(0x106aa86eu); f_106ab0d0();
  /* 106aa86e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa871 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 106aa877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa87a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 106aa87d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aa87f je 0x106aa893 */
  if (C.zf) goto L_106aa893;
  /* 106aa881 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 106aa887 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 106aa88e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 106aa891 jmp 0x106aa8a1 */
  goto L_106aa8a1;
L_106aa893:;
  /* 106aa893 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 106aa899 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 106aa89f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_106aa8a1:;
  /* 106aa8a1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 106aa8ab jmp 0x106aacc7 */
  goto L_106aacc7;
L_106aa8b0:;
  /* 106aa8b0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 106aa8b7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 106aa8ba add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 106aa8bd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_106aa8c0:;
  /* 106aa8c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa8c3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 106aa8c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106aa8c8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 106aa8ce mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106aa8d1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa8d8 jge 0x106aa8e6 */
  if ((C.sf==C.of)) goto L_106aa8e6;
  /* 106aa8da mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 106aa8e4 jmp 0x106aa902 */
  goto L_106aa902;
L_106aa8e6:;
  /* 106aa8e6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa8ed jne 0x106aa902 */
  if (!C.zf) goto L_106aa902;
  /* 106aa8ef movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa8f3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa8f6 jne 0x106aa902 */
  if (!C.zf) goto L_106aa902;
  /* 106aa8f8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_106aa902:;
  /* 106aa902 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106aa905 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa908 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 106aa90b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106aa90e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aa911 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106aa913 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 106aa916 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 106aa91c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 106aa922 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aa925 push ecx */
  push32((uint32_t)(ECX));
  /* 106aa926 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 106aa92c push edx */
  push32((uint32_t)(EDX));
  /* 106aa92d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa931 push eax */
  push32((uint32_t)(EAX));
  /* 106aa932 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aa935 push ecx */
  push32((uint32_t)(ECX));
  /* 106aa936 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 106aa93c push edx */
  push32((uint32_t)(EDX));
  /* 106aa93d call dword ptr [0x106ce3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106ce3a0))), 0x106aa943u);
  /* 106aa943 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa946 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa949 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 106aa94e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aa950 je 0x106aa968 */
  if (C.zf) goto L_106aa968;
  /* 106aa952 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa959 jne 0x106aa968 */
  if (!C.zf) goto L_106aa968;
  /* 106aa95b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aa95e push ecx */
  push32((uint32_t)(ECX));
  /* 106aa95f call dword ptr [0x106ce3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106ce3ac))), 0x106aa965u);
  /* 106aa965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106aa968:;
  /* 106aa968 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 106aa96c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa96f jne 0x106aa98a */
  if (!C.zf) goto L_106aa98a;
  /* 106aa971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa974 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 106aa979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aa97b jne 0x106aa98a */
  if (!C.zf) goto L_106aa98a;
  /* 106aa97d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aa980 push ecx */
  push32((uint32_t)(ECX));
  /* 106aa981 call dword ptr [0x106ce3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106ce3a4))), 0x106aa987u);
  /* 106aa987 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106aa98a:;
  /* 106aa98a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aa98d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106aa990 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aa993 jne 0x106aa9a7 */
  if (!C.zf) goto L_106aa9a7;
  /* 106aa995 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa998 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 106aa99b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106aa99e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aa9a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa9a4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_106aa9a7:;
  /* 106aa9a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aa9aa push eax */
  push32((uint32_t)(EAX));
  /* 106aa9ab call 0x106a6130 */
  push32(0x106aa9b0u); f_106a6130();
  /* 106aa9b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aa9b3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106aa9b6 jmp 0x106aacc7 */
  goto L_106aacc7;
L_106aa9bb:;
  /* 106aa9bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aa9be or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 106aa9c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106aa9c4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 106aa9ce jmp 0x106aaa55 */
  goto L_106aaa55;
L_106aa9d3:;
  /* 106aa9d3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 106aa9dd jmp 0x106aaa55 */
  goto L_106aaa55;
L_106aa9df:;
  /* 106aa9df mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_106aa9e9:;
  /* 106aa9e9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 106aa9f3 jmp 0x106aa9ff */
  goto L_106aa9ff;
L_106aa9f5:;
  /* 106aa9f5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_106aa9ff:;
  /* 106aa9ff mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 106aaa09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aaa0c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 106aaa12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aaa14 je 0x106aaa33 */
  if (C.zf) goto L_106aaa33;
  /* 106aaa16 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 106aaa1d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 106aaa23 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aaa26 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 106aaa2c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_106aaa33:;
  /* 106aaa33 jmp 0x106aaa55 */
  goto L_106aaa55;
L_106aaa35:;
  /* 106aaa35 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 106aaa3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aaa42 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 106aaa48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106aaa4a je 0x106aaa55 */
  if (C.zf) goto L_106aaa55;
  /* 106aaa4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aaa4f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 106aaa52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106aaa55:;
  /* 106aaa55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aaa58 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 106aaa5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aaa5f je 0x106aaa7e */
  if (C.zf) goto L_106aaa7e;
  /* 106aaa61 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 106aaa64 push ecx */
  push32((uint32_t)(ECX));
  /* 106aaa65 call 0x106ab0f0 */
  push32(0x106aaa6au); f_106ab0f0();
  /* 106aaa6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aaa6d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 106aaa73 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 106aaa79 jmp 0x106aab0f */
  goto L_106aab0f;
L_106aaa7e:;
  /* 106aaa7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aaa81 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 106aaa84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aaa86 je 0x106aaad0 */
  if (C.zf) goto L_106aaad0;
  /* 106aaa88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aaa8b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 106aaa8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aaa90 je 0x106aaab0 */
  if (C.zf) goto L_106aaab0;
  /* 106aaa92 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 106aaa95 push ecx */
  push32((uint32_t)(ECX));
  /* 106aaa96 call 0x106ab0d0 */
  push32(0x106aaa9bu); f_106ab0d0();
  /* 106aaa9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aaa9e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 106aaaa1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106aaaa2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 106aaaa8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 106aaaae jmp 0x106aaace */
  goto L_106aaace;
L_106aaab0:;
  /* 106aaab0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 106aaab3 push edx */
  push32((uint32_t)(EDX));
  /* 106aaab4 call 0x106ab0d0 */
  push32(0x106aaab9u); f_106ab0d0();
  /* 106aaab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aaabc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106aaac1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106aaac2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 106aaac8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_106aaace:;
  /* 106aaace jmp 0x106aab0f */
  goto L_106aab0f;
L_106aaad0:;
  /* 106aaad0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aaad3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 106aaad6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aaad8 je 0x106aaaf5 */
  if (C.zf) goto L_106aaaf5;
  /* 106aaada lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 106aaadd push ecx */
  push32((uint32_t)(ECX));
  /* 106aaade call 0x106ab0d0 */
  push32(0x106aaae3u); f_106ab0d0();
  /* 106aaae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aaae6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106aaae7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 106aaaed mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 106aaaf3 jmp 0x106aab0f */
  goto L_106aab0f;
L_106aaaf5:;
  /* 106aaaf5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 106aaaf8 push edx */
  push32((uint32_t)(EDX));
  /* 106aaaf9 call 0x106ab0d0 */
  push32(0x106aaafeu); f_106ab0d0();
  /* 106aaafe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aab01 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106aab03 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 106aab09 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_106aab0f:;
  /* 106aab0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aab12 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 106aab15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aab17 je 0x106aab57 */
  if (C.zf) goto L_106aab57;
  /* 106aab19 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aab20 jg 0x106aab57 */
  if ((!C.zf&&C.sf==C.of)) goto L_106aab57;
  /* 106aab22 jl 0x106aab2d */
  if ((C.sf!=C.of)) goto L_106aab2d;
  /* 106aab24 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aab2b jae 0x106aab57 */
  if (!C.cf) goto L_106aab57;
L_106aab2d:;
  /* 106aab2d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 106aab33 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106aab35 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 106aab3b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aab3e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106aab40 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 106aab46 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 106aab4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aab4f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 106aab52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106aab55 jmp 0x106aab6f */
  goto L_106aab6f;
L_106aab57:;
  /* 106aab57 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 106aab5d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 106aab63 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 106aab69 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_106aab6f:;
  /* 106aab6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aab72 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 106aab78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aab7a jne 0x106aab97 */
  if (!C.zf) goto L_106aab97;
  /* 106aab7c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 106aab82 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 106aab88 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 106aab8b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 106aab91 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_106aab97:;
  /* 106aab97 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aab9e jge 0x106aabac */
  if ((C.sf==C.of)) goto L_106aabac;
  /* 106aaba0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 106aabaa jmp 0x106aabb5 */
  goto L_106aabb5;
L_106aabac:;
  /* 106aabac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aabaf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 106aabb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106aabb5:;
  /* 106aabb5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 106aabbb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 106aabc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aabc3 jne 0x106aabcc */
  if (!C.zf) goto L_106aabcc;
  /* 106aabc5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_106aabcc:;
  /* 106aabcc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 106aabcf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_106aabd2:;
  /* 106aabd2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 106aabd8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 106aabde sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aabe1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 106aabe7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aabe9 jg 0x106aabff */
  if ((!C.zf&&C.sf==C.of)) goto L_106aabff;
  /* 106aabeb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 106aabf1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 106aabf7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106aabf9 je 0x106aac80 */
  if (C.zf) goto L_106aac80;
L_106aabff:;
  /* 106aabff mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 106aac05 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106aac06 push edx */
  push32((uint32_t)(EDX));
  /* 106aac07 push eax */
  push32((uint32_t)(EAX));
  /* 106aac08 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 106aac0e push edx */
  push32((uint32_t)(EDX));
  /* 106aac0f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 106aac15 push eax */
  push32((uint32_t)(EAX));
  /* 106aac16 call 0x106a9f90 */
  push32(0x106aac1bu); f_106a9f90();
  /* 106aac1b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aac1e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 106aac24 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 106aac2a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106aac2b push edx */
  push32((uint32_t)(EDX));
  /* 106aac2c push eax */
  push32((uint32_t)(EAX));
  /* 106aac2d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 106aac33 push ecx */
  push32((uint32_t)(ECX));
  /* 106aac34 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 106aac3a push edx */
  push32((uint32_t)(EDX));
  /* 106aac3b call 0x106a9f20 */
  push32(0x106aac40u); f_106a9f20();
  /* 106aac40 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 106aac46 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 106aac4c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aac53 jle 0x106aac67 */
  if ((C.zf||C.sf!=C.of)) goto L_106aac67;
  /* 106aac55 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 106aac5b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aac61 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_106aac67:;
  /* 106aac67 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aac6a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 106aac70 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 106aac72 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aac75 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aac78 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106aac7b jmp 0x106aabd2 */
  goto L_106aabd2;
L_106aac80:;
  /* 106aac80 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 106aac83 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aac86 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106aac89 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aac8c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aac8f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 106aac92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aac95 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 106aac9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aac9c je 0x106aacc7 */
  if (C.zf) goto L_106aacc7;
  /* 106aac9e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aaca1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106aaca4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aaca7 jne 0x106aacaf */
  if (!C.zf) goto L_106aacaf;
  /* 106aaca9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aacad jne 0x106aacc7 */
  if (!C.zf) goto L_106aacc7;
L_106aacaf:;
  /* 106aacaf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aacb2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aacb5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106aacb8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aacbb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 106aacbe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106aacc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aacc4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_106aacc7:;
  /* 106aacc7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aacce jne 0x106aaea2 */
  if (!C.zf) goto L_106aaea2;
  /* 106aacd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aacd7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 106aacda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aacdc je 0x106aad2d */
  if (C.zf) goto L_106aad2d;
  /* 106aacde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aace1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 106aace7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106aace9 je 0x106aacfb */
  if (C.zf) goto L_106aacfb;
  /* 106aaceb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 106aacf2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 106aacf9 jmp 0x106aad2d */
  goto L_106aad2d;
L_106aacfb:;
  /* 106aacfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aacfe and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106aad01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aad03 je 0x106aad15 */
  if (C.zf) goto L_106aad15;
  /* 106aad05 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 106aad0c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 106aad13 jmp 0x106aad2d */
  goto L_106aad2d;
L_106aad15:;
  /* 106aad15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aad18 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 106aad1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aad1d je 0x106aad2d */
  if (C.zf) goto L_106aad2d;
  /* 106aad1f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 106aad26 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_106aad2d:;
  /* 106aad2d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 106aad33 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aad36 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aad39 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 106aad3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aad42 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 106aad45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aad47 jne 0x106aad65 */
  if (!C.zf) goto L_106aad65;
  /* 106aad49 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 106aad4f push eax */
  push32((uint32_t)(EAX));
  /* 106aad50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aad53 push ecx */
  push32((uint32_t)(ECX));
  /* 106aad54 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 106aad5a push edx */
  push32((uint32_t)(EDX));
  /* 106aad5b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 106aad5d call 0x106ab040 */
  push32(0x106aad62u); f_106ab040();
  /* 106aad62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106aad65:;
  /* 106aad65 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 106aad6b push eax */
  push32((uint32_t)(EAX));
  /* 106aad6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aad6f push ecx */
  push32((uint32_t)(ECX));
  /* 106aad70 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106aad73 push edx */
  push32((uint32_t)(EDX));
  /* 106aad74 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 106aad7a push eax */
  push32((uint32_t)(EAX));
  /* 106aad7b call 0x106ab080 */
  push32(0x106aad80u); f_106ab080();
  /* 106aad80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aad83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aad86 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 106aad89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106aad8b je 0x106aadb3 */
  if (C.zf) goto L_106aadb3;
  /* 106aad8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aad90 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106aad93 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aad95 jne 0x106aadb3 */
  if (!C.zf) goto L_106aadb3;
  /* 106aad97 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 106aad9d push eax */
  push32((uint32_t)(EAX));
  /* 106aad9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aada1 push ecx */
  push32((uint32_t)(ECX));
  /* 106aada2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 106aada8 push edx */
  push32((uint32_t)(EDX));
  /* 106aada9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 106aadab call 0x106ab040 */
  push32(0x106aadb0u); f_106ab040();
  /* 106aadb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106aadb3:;
  /* 106aadb3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aadb7 je 0x106aae61 */
  if (C.zf) goto L_106aae61;
  /* 106aadbd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aadc1 jle 0x106aae61 */
  if ((C.zf||C.sf!=C.of)) goto L_106aae61;
  /* 106aadc7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aadca mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 106aadd0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106aadd3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_106aadd9:;
  /* 106aadd9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 106aaddf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 106aade5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aade8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 106aadee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aadf0 je 0x106aae5f */
  if (C.zf) goto L_106aae5f;
  /* 106aadf2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 106aadf8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 106aadfb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 106aae02 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 106aae09 push eax */
  push32((uint32_t)(EAX));
  /* 106aae0a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 106aae10 push ecx */
  push32((uint32_t)(ECX));
  /* 106aae11 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 106aae17 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aae1a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 106aae20 call 0x106ac1f0 */
  push32(0x106aae25u); f_106ac1f0();
  /* 106aae25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aae28 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 106aae2e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aae35 jg 0x106aae39 */
  if ((!C.zf&&C.sf==C.of)) goto L_106aae39;
  /* 106aae37 jmp 0x106aae5f */
  goto L_106aae5f;
L_106aae39:;
  /* 106aae39 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 106aae3f push eax */
  push32((uint32_t)(EAX));
  /* 106aae40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aae43 push ecx */
  push32((uint32_t)(ECX));
  /* 106aae44 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 106aae4a push edx */
  push32((uint32_t)(EDX));
  /* 106aae4b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 106aae51 push eax */
  push32((uint32_t)(EAX));
  /* 106aae52 call 0x106ab080 */
  push32(0x106aae57u); f_106ab080();
  /* 106aae57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aae5a jmp 0x106aadd9 */
  goto L_106aadd9;
L_106aae5f:;
  /* 106aae5f jmp 0x106aae7c */
  goto L_106aae7c;
L_106aae61:;
  /* 106aae61 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 106aae67 push ecx */
  push32((uint32_t)(ECX));
  /* 106aae68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aae6b push edx */
  push32((uint32_t)(EDX));
  /* 106aae6c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106aae6f push eax */
  push32((uint32_t)(EAX));
  /* 106aae70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aae73 push ecx */
  push32((uint32_t)(ECX));
  /* 106aae74 call 0x106ab080 */
  push32(0x106aae79u); f_106ab080();
  /* 106aae79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106aae7c:;
  /* 106aae7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aae7f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106aae82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aae84 je 0x106aaea2 */
  if (C.zf) goto L_106aaea2;
  /* 106aae86 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 106aae8c push eax */
  push32((uint32_t)(EAX));
  /* 106aae8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aae90 push ecx */
  push32((uint32_t)(ECX));
  /* 106aae91 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 106aae97 push edx */
  push32((uint32_t)(EDX));
  /* 106aae98 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 106aae9a call 0x106ab040 */
  push32(0x106aae9fu); f_106ab040();
  /* 106aae9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106aaea2:;
  /* 106aaea2 jmp 0x106aa2b4 */
  goto L_106aa2b4;
L_106aaea7:;
  /* 106aaea7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 106aaead pop edi */
  EDI = (pop32());
  /* 106aaeae pop esi */
  ESI = (pop32());
  /* 106aaeaf pop ebx */
  EBX = (pop32());
  /* 106aaeb0 mov esp, ebp */
  ESP = (EBP);
  /* 106aaeb2 pop ebp */
  EBP = (pop32());
  /* 106aaeb3 ret  */
  ESPCHK(0x106aa290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afc0 @ 0x106aafc0 (119 bytes, 44 insns) */
void f_106aafc0(void) {
  FTRACE(0x106aafc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106aafc0 push ebp */
  push32((uint32_t)(EBP));
  /* 106aafc1 mov ebp, esp */
  EBP = (ESP);
  /* 106aafc3 push ecx */
  push32((uint32_t)(ECX));
  /* 106aafc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aafc7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106aafca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aafcd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aafd0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 106aafd3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aafd6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aafda jl 0x106ab002 */
  if ((C.sf!=C.of)) goto L_106ab002;
  /* 106aafdc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aafdf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106aafe1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 106aafe4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 106aafe6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 106aafea and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106aaff0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106aaff3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aaff6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106aaff8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aaffb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aaffe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106ab000 jmp 0x106ab015 */
  goto L_106ab015;
L_106ab002:;
  /* 106ab002 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ab005 push edx */
  push32((uint32_t)(EDX));
  /* 106ab006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab009 push eax */
  push32((uint32_t)(EAX));
  /* 106ab00a call 0x106aa010 */
  push32(0x106ab00fu); f_106aa010();
  /* 106ab00f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab012 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106ab015:;
  /* 106ab015 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab019 jne 0x106ab026 */
  if (!C.zf) goto L_106ab026;
  /* 106ab01b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ab01e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 106ab024 jmp 0x106ab033 */
  goto L_106ab033;
L_106ab026:;
  /* 106ab026 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ab029 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106ab02b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab02e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ab031 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_106ab033:;
  /* 106ab033 mov esp, ebp */
  ESP = (EBP);
  /* 106ab035 pop ebp */
  EBP = (pop32());
  /* 106ab036 ret  */
  ESPCHK(0x106aafc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b040 @ 0x106ab040 (53 bytes, 23 insns) */
void f_106ab040(void) {
  FTRACE(0x106ab040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ab040 push ebp */
  push32((uint32_t)(EBP));
  /* 106ab041 mov ebp, esp */
  EBP = (ESP);
L_106ab043:;
  /* 106ab043 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ab046 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ab049 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ab04c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 106ab04f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ab051 jle 0x106ab073 */
  if ((C.zf||C.sf!=C.of)) goto L_106ab073;
  /* 106ab053 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ab056 push edx */
  push32((uint32_t)(EDX));
  /* 106ab057 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ab05a push eax */
  push32((uint32_t)(EAX));
  /* 106ab05b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab05e push ecx */
  push32((uint32_t)(ECX));
  /* 106ab05f call 0x106aafc0 */
  push32(0x106ab064u); f_106aafc0();
  /* 106ab064 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab067 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ab06a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab06d jne 0x106ab071 */
  if (!C.zf) goto L_106ab071;
  /* 106ab06f jmp 0x106ab073 */
  goto L_106ab073;
L_106ab071:;
  /* 106ab071 jmp 0x106ab043 */
  goto L_106ab043;
L_106ab073:;
  /* 106ab073 pop ebp */
  EBP = (pop32());
  /* 106ab074 ret  */
  ESPCHK(0x106ab040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b080 @ 0x106ab080 (74 bytes, 31 insns) */
void f_106ab080(void) {
  FTRACE(0x106ab080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ab080 push ebp */
  push32((uint32_t)(EBP));
  /* 106ab081 mov ebp, esp */
  EBP = (ESP);
  /* 106ab083 push ecx */
  push32((uint32_t)(ECX));
L_106ab084:;
  /* 106ab084 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ab087 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ab08a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ab08d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 106ab090 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ab092 jle 0x106ab0c6 */
  if ((C.zf||C.sf!=C.of)) goto L_106ab0c6;
  /* 106ab094 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ab097 push edx */
  push32((uint32_t)(EDX));
  /* 106ab098 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ab09b push eax */
  push32((uint32_t)(EAX));
  /* 106ab09c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab09f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106ab0a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106ab0a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ab0a8 push eax */
  push32((uint32_t)(EAX));
  /* 106ab0a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab0ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab0af mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 106ab0b2 call 0x106aafc0 */
  push32(0x106ab0b7u); f_106aafc0();
  /* 106ab0b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab0ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ab0bd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab0c0 jne 0x106ab0c4 */
  if (!C.zf) goto L_106ab0c4;
  /* 106ab0c2 jmp 0x106ab0c6 */
  goto L_106ab0c6;
L_106ab0c4:;
  /* 106ab0c4 jmp 0x106ab084 */
  goto L_106ab084;
L_106ab0c6:;
  /* 106ab0c6 mov esp, ebp */
  ESP = (EBP);
  /* 106ab0c8 pop ebp */
  EBP = (pop32());
  /* 106ab0c9 ret  */
  ESPCHK(0x106ab080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0d0 @ 0x106ab0d0 (26 bytes, 12 insns) */
void f_106ab0d0(void) {
  FTRACE(0x106ab0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ab0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ab0d1 mov ebp, esp */
  EBP = (ESP);
  /* 106ab0d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab0d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106ab0d8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab0db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab0de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106ab0e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab0e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106ab0e5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 106ab0e8 pop ebp */
  EBP = (pop32());
  /* 106ab0e9 ret  */
  ESPCHK(0x106ab0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0f0 @ 0x106ab0f0 (31 bytes, 14 insns) */
void f_106ab0f0(void) {
  FTRACE(0x106ab0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ab0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ab0f1 mov ebp, esp */
  EBP = (ESP);
  /* 106ab0f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab0f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106ab0f8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab0fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab0fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106ab100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab103 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106ab105 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ab108 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 106ab10a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106ab10d pop ebp */
  EBP = (pop32());
  /* 106ab10e ret  */
  ESPCHK(0x106ab0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b110 @ 0x106ab110 (27 bytes, 12 insns) */
void f_106ab110(void) {
  FTRACE(0x106ab110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ab110 push ebp */
  push32((uint32_t)(EBP));
  /* 106ab111 mov ebp, esp */
  EBP = (ESP);
  /* 106ab113 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab116 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106ab118 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab11b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab11e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106ab120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab123 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106ab125 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 106ab129 pop ebp */
  EBP = (pop32());
  /* 106ab12a ret  */
  ESPCHK(0x106ab110u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x106ab130 (145 bytes, 42 insns) */
void f_106ab130(void) {
  FTRACE(0x106ab130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ab130 push ebp */
  push32((uint32_t)(EBP));
  /* 106ab131 mov ebp, esp */
  EBP = (ESP);
  /* 106ab133 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab134 call 0x106ab1e0 */
  push32(0x106ab139u); f_106ab1e0();
  /* 106ab139 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab13c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106ab13e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106ab145 jmp 0x106ab150 */
  goto L_106ab150;
L_106ab147:;
  /* 106ab147 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ab14a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab14d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106ab150:;
  /* 106ab150 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab154 jae 0x106ab17a */
  if (!C.cf) goto L_106ab17a;
  /* 106ab156 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ab159 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab15c cmp ecx, dword ptr [eax*8 + 0x106cdfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x106cdfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab163 jne 0x106ab178 */
  if (!C.zf) goto L_106ab178;
  /* 106ab165 call 0x106ab1d0 */
  push32(0x106ab16au); f_106ab1d0();
  /* 106ab16a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ab16d mov ecx, dword ptr [edx*8 + 0x106cdfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x106cdfbc)));
  /* 106ab174 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106ab176 jmp 0x106ab1bd */
  goto L_106ab1bd;
L_106ab178:;
  /* 106ab178 jmp 0x106ab147 */
  goto L_106ab147;
L_106ab17a:;
  /* 106ab17a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab17e jb 0x106ab193 */
  if (C.cf) goto L_106ab193;
  /* 106ab180 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab184 ja 0x106ab193 */
  if ((!C.cf&&!C.zf)) goto L_106ab193;
  /* 106ab186 call 0x106ab1d0 */
  push32(0x106ab18bu); f_106ab1d0();
  /* 106ab18b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 106ab191 jmp 0x106ab1bd */
  goto L_106ab1bd;
L_106ab193:;
  /* 106ab193 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab19a jb 0x106ab1b2 */
  if (C.cf) goto L_106ab1b2;
  /* 106ab19c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab1a3 ja 0x106ab1b2 */
  if ((!C.cf&&!C.zf)) goto L_106ab1b2;
  /* 106ab1a5 call 0x106ab1d0 */
  push32(0x106ab1aau); f_106ab1d0();
  /* 106ab1aa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 106ab1b0 jmp 0x106ab1bd */
  goto L_106ab1bd;
L_106ab1b2:;
  /* 106ab1b2 call 0x106ab1d0 */
  push32(0x106ab1b7u); f_106ab1d0();
  /* 106ab1b7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_106ab1bd:;
  /* 106ab1bd mov esp, ebp */
  ESP = (EBP);
  /* 106ab1bf pop ebp */
  EBP = (pop32());
  /* 106ab1c0 ret  */
  ESPCHK(0x106ab130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1d0 @ 0x106ab1d0 (13 bytes, 6 insns) */
void f_106ab1d0(void) {
  FTRACE(0x106ab1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ab1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ab1d1 mov ebp, esp */
  EBP = (ESP);
  /* 106ab1d3 call 0x106a2d40 */
  push32(0x106ab1d8u); f_106a2d40();
  /* 106ab1d8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab1db pop ebp */
  EBP = (pop32());
  /* 106ab1dc ret  */
  ESPCHK(0x106ab1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1e0 @ 0x106ab1e0 (13 bytes, 6 insns) */
void f_106ab1e0(void) {
  FTRACE(0x106ab1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ab1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ab1e1 mov ebp, esp */
  EBP = (ESP);
  /* 106ab1e3 call 0x106a2d40 */
  push32(0x106ab1e8u); f_106a2d40();
  /* 106ab1e8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab1eb pop ebp */
  EBP = (pop32());
  /* 106ab1ec ret  */
  ESPCHK(0x106ab1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1f0 @ 0x106ab1f0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_106ab1f0(void) {
  FTRACE(0x106ab1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ab1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ab1f1 mov ebp, esp */
  EBP = (ESP);
  /* 106ab1f3 push edi */
  push32((uint32_t)(EDI));
  /* 106ab1f4 push esi */
  push32((uint32_t)(ESI));
  /* 106ab1f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 106ab1f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ab1fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab1fe mov eax, ecx */
  EAX = (ECX);
  /* 106ab200 mov edx, ecx */
  EDX = (ECX);
  /* 106ab202 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab204 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab206 jbe 0x106ab210 */
  if ((C.cf||C.zf)) goto L_106ab210;
  /* 106ab208 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab20a jb 0x106ab388 */
  if (C.cf) goto L_106ab388;
L_106ab210:;
  /* 106ab210 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 106ab216 jne 0x106ab22c */
  if (!C.zf) goto L_106ab22c;
  /* 106ab218 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ab21b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106ab21e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab221 jb 0x106ab24c */
  if (C.cf) goto L_106ab24c;
  /* 106ab223 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ab225 jmp dword ptr [edx*4 + 0x106ab338] */
  switch (EDX) {
    case 0: goto L_106ab348;
    case 1: goto L_106ab350;
    case 2: goto L_106ab35c;
    case 3: goto L_106ab370;
    default: x86_unimpl("switch@0x106ab225 out of table"); return;
  }
L_106ab22c:;
  /* 106ab22c mov eax, edi */
  EAX = (EDI);
  /* 106ab22e mov edx, 3 */
  EDX = (0x3u);
  /* 106ab233 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ab236 jb 0x106ab244 */
  if (C.cf) goto L_106ab244;
  /* 106ab238 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 106ab23b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab23d jmp dword ptr [eax*4 + 0x106ab250] */
  switch (EAX) {
    case 1: goto L_106ab260;
    case 2: goto L_106ab28c;
    case 3: goto L_106ab2b0;
    default: x86_unimpl("switch@0x106ab23d out of table"); return;
  }
L_106ab244:;
  /* 106ab244 jmp dword ptr [ecx*4 + 0x106ab348] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x106ab348)))); return;
  /* 106ab24b nop  */
  /* nop */
L_106ab24c:;
  /* 106ab24c jmp dword ptr [ecx*4 + 0x106ab2cc] */
  switch (ECX) {
    case 0: goto L_106ab32f;
    case 1: goto L_106ab31c;
    case 2: goto L_106ab314;
    case 3: goto L_106ab30c;
    case 4: goto L_106ab304;
    case 5: goto L_106ab2fc;
    case 6: goto L_106ab2f4;
    case 7: goto L_106ab2ec;
    default: x86_unimpl("switch@0x106ab24c out of table"); return;
  }
  /* 106ab253 nop  */
  /* nop */
L_106ab260:;
  /* 106ab260 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106ab262 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106ab264 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106ab266 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106ab269 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106ab26c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106ab26f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ab272 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106ab275 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab278 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab27b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab27e jb 0x106ab24c */
  if (C.cf) goto L_106ab24c;
  /* 106ab280 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ab282 jmp dword ptr [edx*4 + 0x106ab338] */
  switch (EDX) {
    case 0: goto L_106ab348;
    case 1: goto L_106ab350;
    case 2: goto L_106ab35c;
    case 3: goto L_106ab370;
    default: x86_unimpl("switch@0x106ab282 out of table"); return;
  }
  /* 106ab289 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106ab28c:;
  /* 106ab28c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106ab28e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106ab290 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106ab292 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106ab295 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ab298 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106ab29b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab29e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab2a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab2a4 jb 0x106ab24c */
  if (C.cf) goto L_106ab24c;
  /* 106ab2a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ab2a8 jmp dword ptr [edx*4 + 0x106ab338] */
  switch (EDX) {
    case 0: goto L_106ab348;
    case 1: goto L_106ab350;
    case 2: goto L_106ab35c;
    case 3: goto L_106ab370;
    default: x86_unimpl("switch@0x106ab2a8 out of table"); return;
  }
  /* 106ab2af nop  */
  /* nop */
L_106ab2b0:;
  /* 106ab2b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106ab2b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106ab2b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106ab2b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106ab2b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ab2ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106ab2bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab2be jb 0x106ab24c */
  if (C.cf) goto L_106ab24c;
  /* 106ab2c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ab2c2 jmp dword ptr [edx*4 + 0x106ab338] */
  switch (EDX) {
    case 0: goto L_106ab348;
    case 1: goto L_106ab350;
    case 2: goto L_106ab35c;
    case 3: goto L_106ab370;
    default: x86_unimpl("switch@0x106ab2c2 out of table"); return;
  }
  /* 106ab2c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106ab2ec:;
  /* 106ab2ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 106ab2f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_106ab2f4:;
  /* 106ab2f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 106ab2f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_106ab2fc:;
  /* 106ab2fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 106ab300 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_106ab304:;
  /* 106ab304 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 106ab308 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_106ab30c:;
  /* 106ab30c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 106ab310 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_106ab314:;
  /* 106ab314 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 106ab318 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_106ab31c:;
  /* 106ab31c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 106ab320 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 106ab324 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 106ab32b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab32d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_106ab32f:;
  /* 106ab32f jmp dword ptr [edx*4 + 0x106ab338] */
  switch (EDX) {
    case 0: goto L_106ab348;
    case 1: goto L_106ab350;
    case 2: goto L_106ab35c;
    case 3: goto L_106ab370;
    default: x86_unimpl("switch@0x106ab32f out of table"); return;
  }
  /* 106ab336 mov edi, edi */
  EDI = (EDI);
L_106ab348:;
  /* 106ab348 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab34b pop esi */
  ESI = (pop32());
  /* 106ab34c pop edi */
  EDI = (pop32());
  /* 106ab34d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ab34e ret  */
  ESPCHK(0x106ab1f0u, _esp0);
  ESP += 4; return;
  /* 106ab34f nop  */
  /* nop */
L_106ab350:;
  /* 106ab350 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106ab352 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106ab354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab357 pop esi */
  ESI = (pop32());
  /* 106ab358 pop edi */
  EDI = (pop32());
  /* 106ab359 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ab35a ret  */
  ESPCHK(0x106ab1f0u, _esp0);
  ESP += 4; return;
  /* 106ab35b nop  */
  /* nop */
L_106ab35c:;
  /* 106ab35c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106ab35e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106ab360 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106ab363 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106ab366 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab369 pop esi */
  ESI = (pop32());
  /* 106ab36a pop edi */
  EDI = (pop32());
  /* 106ab36b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ab36c ret  */
  ESPCHK(0x106ab1f0u, _esp0);
  ESP += 4; return;
  /* 106ab36d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106ab370:;
  /* 106ab370 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106ab372 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106ab374 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106ab377 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106ab37a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106ab37d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106ab380 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab383 pop esi */
  ESI = (pop32());
  /* 106ab384 pop edi */
  EDI = (pop32());
  /* 106ab385 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ab386 ret  */
  ESPCHK(0x106ab1f0u, _esp0);
  ESP += 4; return;
  /* 106ab387 nop  */
  /* nop */
L_106ab388:;
  /* 106ab388 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 106ab38c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 106ab390 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 106ab396 jne 0x106ab3bc */
  if (!C.zf) goto L_106ab3bc;
  /* 106ab398 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ab39b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106ab39e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab3a1 jb 0x106ab3b0 */
  if (C.cf) goto L_106ab3b0;
  /* 106ab3a3 std  */
  C.df=1;
  /* 106ab3a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ab3a6 cld  */
  C.df=0;
  /* 106ab3a7 jmp dword ptr [edx*4 + 0x106ab4d0] */
  switch (EDX) {
    case 0: goto L_106ab4e0;
    case 1: goto L_106ab4e8;
    case 2: goto L_106ab4f8;
    case 3: goto L_106ab50c;
    default: x86_unimpl("switch@0x106ab3a7 out of table"); return;
  }
  /* 106ab3ae mov edi, edi */
  EDI = (EDI);
L_106ab3b0:;
  /* 106ab3b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106ab3b2 jmp dword ptr [ecx*4 + 0x106ab480] */
  switch (ECX) {
    case 0: goto L_106ab4c7;
    default: x86_unimpl("switch@0x106ab3b2 out of table"); return;
  }
  /* 106ab3b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106ab3bc:;
  /* 106ab3bc mov eax, edi */
  EAX = (EDI);
  /* 106ab3be mov edx, 3 */
  EDX = (0x3u);
  /* 106ab3c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab3c6 jb 0x106ab3d4 */
  if (C.cf) goto L_106ab3d4;
  /* 106ab3c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 106ab3cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ab3cd jmp dword ptr [eax*4 + 0x106ab3d8] */
  switch (EAX) {
    case 1: goto L_106ab3e8;
    case 2: goto L_106ab408;
    case 3: goto L_106ab430;
    default: x86_unimpl("switch@0x106ab3cd out of table"); return;
  }
L_106ab3d4:;
  /* 106ab3d4 jmp dword ptr [ecx*4 + 0x106ab4d0] */
  switch (ECX) {
    case 0: goto L_106ab4e0;
    case 1: goto L_106ab4e8;
    case 2: goto L_106ab4f8;
    case 3: goto L_106ab50c;
    default: x86_unimpl("switch@0x106ab3d4 out of table"); return;
  }
  /* 106ab3db nop  */
  /* nop */
L_106ab3e8:;
  /* 106ab3e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106ab3eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106ab3ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106ab3f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 106ab3f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ab3f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 106ab3f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab3f8 jb 0x106ab3b0 */
  if (C.cf) goto L_106ab3b0;
  /* 106ab3fa std  */
  C.df=1;
  /* 106ab3fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ab3fd cld  */
  C.df=0;
  /* 106ab3fe jmp dword ptr [edx*4 + 0x106ab4d0] */
  switch (EDX) {
    case 0: goto L_106ab4e0;
    case 1: goto L_106ab4e8;
    case 2: goto L_106ab4f8;
    case 3: goto L_106ab50c;
    default: x86_unimpl("switch@0x106ab3fe out of table"); return;
  }
  /* 106ab405 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106ab408:;
  /* 106ab408 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106ab40b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106ab40d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106ab410 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106ab413 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ab416 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106ab419 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ab41c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ab41f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab422 jb 0x106ab3b0 */
  if (C.cf) goto L_106ab3b0;
  /* 106ab424 std  */
  C.df=1;
  /* 106ab425 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ab427 cld  */
  C.df=0;
  /* 106ab428 jmp dword ptr [edx*4 + 0x106ab4d0] */
  switch (EDX) {
    case 0: goto L_106ab4e0;
    case 1: goto L_106ab4e8;
    case 2: goto L_106ab4f8;
    case 3: goto L_106ab50c;
    default: x86_unimpl("switch@0x106ab428 out of table"); return;
  }
  /* 106ab42f nop  */
  /* nop */
L_106ab430:;
  /* 106ab430 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106ab433 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 106ab435 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106ab438 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106ab43b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106ab43e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106ab441 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106ab444 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106ab447 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ab44a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ab44d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab450 jb 0x106ab3b0 */
  if (C.cf) goto L_106ab3b0;
  /* 106ab456 std  */
  C.df=1;
  /* 106ab457 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 106ab459 cld  */
  C.df=0;
  /* 106ab45a jmp dword ptr [edx*4 + 0x106ab4d0] */
  switch (EDX) {
    case 0: goto L_106ab4e0;
    case 1: goto L_106ab4e8;
    case 2: goto L_106ab4f8;
    case 3: goto L_106ab50c;
    default: x86_unimpl("switch@0x106ab45a out of table"); return;
  }
  /* 106ab461 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 106ab464 test byte ptr [edx + ebp*2 + 0x6ab48c10], dh */
  { uint32_t _r=(r8((uint32_t)(EDX + EBP*2 + 0x6ab48c10)))&(C.d.b.h); fl_logic(_r,8); }
  /* 106ab46b adc byte ptr [esp + esi*4 - 0x4b63ef96], dl */
  { uint32_t _a=(r8((uint32_t)(ESP + ESI*4 + -0x4b63ef96))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + ESI*4 + -0x4b63ef96), (_r)); fl_add(_a,_b,_r,8); }
  /* 106ab472 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 106ab474 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 106ab475 mov ah, 0x6a */
  AH = (0x6au);
  /* 106ab477 adc byte ptr [esp + esi*4 - 0x4b4bef96], ch */
  { uint32_t _a=(r8((uint32_t)(ESP + ESI*4 + -0x4b4bef96))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + ESI*4 + -0x4b4bef96), (_r)); fl_add(_a,_b,_r,8); }
  /* 106ab47e push 0x10 */
  push32((uint32_t)(0x10u));
  /* 106ab484 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 106ab488 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 106ab48c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 106ab490 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 106ab494 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 106ab498 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 106ab49c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 106ab4a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 106ab4a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 106ab4a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 106ab4ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 106ab4b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 106ab4b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 106ab4b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 106ab4bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 106ab4c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab4c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_106ab4c7:;
  /* 106ab4c7 jmp dword ptr [edx*4 + 0x106ab4d0] */
  switch (EDX) {
    case 0: goto L_106ab4e0;
    case 1: goto L_106ab4e8;
    case 2: goto L_106ab4f8;
    case 3: goto L_106ab50c;
    default: x86_unimpl("switch@0x106ab4c7 out of table"); return;
  }
  /* 106ab4ce mov edi, edi */
  EDI = (EDI);
L_106ab4e0:;
  /* 106ab4e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab4e3 pop esi */
  ESI = (pop32());
  /* 106ab4e4 pop edi */
  EDI = (pop32());
  /* 106ab4e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ab4e6 ret  */
  ESPCHK(0x106ab1f0u, _esp0);
  ESP += 4; return;
  /* 106ab4e7 nop  */
  /* nop */
L_106ab4e8:;
  /* 106ab4e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106ab4eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106ab4ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab4f1 pop esi */
  ESI = (pop32());
  /* 106ab4f2 pop edi */
  EDI = (pop32());
  /* 106ab4f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ab4f4 ret  */
  ESPCHK(0x106ab1f0u, _esp0);
  ESP += 4; return;
  /* 106ab4f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106ab4f8:;
  /* 106ab4f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106ab4fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106ab4fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106ab501 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106ab504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab507 pop esi */
  ESI = (pop32());
  /* 106ab508 pop edi */
  EDI = (pop32());
  /* 106ab509 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ab50a ret  */
  ESPCHK(0x106ab1f0u, _esp0);
  ESP += 4; return;
  /* 106ab50b nop  */
  /* nop */
L_106ab50c:;
  /* 106ab50c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 106ab50f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 106ab512 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 106ab515 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 106ab518 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 106ab51b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 106ab51e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab521 pop esi */
  ESI = (pop32());
  /* 106ab522 pop edi */
  EDI = (pop32());
  /* 106ab523 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106ab524 ret  */
  ESPCHK(0x106ab1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b530 @ 0x106ab530 (421 bytes, 148 insns) */
void f_106ab530(void) {
  FTRACE(0x106ab530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ab530 push ebp */
  push32((uint32_t)(EBP));
  /* 106ab531 mov ebp, esp */
  EBP = (ESP);
  /* 106ab533 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106ab535 push 0x106cafc0 */
  push32((uint32_t)(0x106cafc0u));
  /* 106ab53a push 0x106ac408 */
  push32((uint32_t)(0x106ac408u));
  /* 106ab53f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 106ab545 push eax */
  push32((uint32_t)(EAX));
  /* 106ab546 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 106ab54d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab550 push ebx */
  push32((uint32_t)(EBX));
  /* 106ab551 push esi */
  push32((uint32_t)(ESI));
  /* 106ab552 push edi */
  push32((uint32_t)(EDI));
  /* 106ab553 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106ab556 cmp dword ptr [0x106cf684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab55d jne 0x106ab5ae */
  if (!C.zf) goto L_106ab5ae;
  /* 106ab55f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 106ab562 push eax */
  push32((uint32_t)(EAX));
  /* 106ab563 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ab565 push 0x106cafbc */
  push32((uint32_t)(0x106cafbcu));
  /* 106ab56a push 1 */
  push32((uint32_t)(0x1u));
  /* 106ab56c call dword ptr [0x106d12a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12a8))), 0x106ab572u);
  /* 106ab572 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ab574 je 0x106ab582 */
  if (C.zf) goto L_106ab582;
  /* 106ab576 mov dword ptr [0x106cf684], 1 */
  w32((uint32_t)(0x106cf684), (0x1u));
  /* 106ab580 jmp 0x106ab5ae */
  goto L_106ab5ae;
L_106ab582:;
  /* 106ab582 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 106ab585 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab586 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ab588 push 0x106cafb8 */
  push32((uint32_t)(0x106cafb8u));
  /* 106ab58d push 1 */
  push32((uint32_t)(0x1u));
  /* 106ab58f push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab591 call dword ptr [0x106d1318] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1318))), 0x106ab597u);
  /* 106ab597 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ab599 je 0x106ab5a7 */
  if (C.zf) goto L_106ab5a7;
  /* 106ab59b mov dword ptr [0x106cf684], 2 */
  w32((uint32_t)(0x106cf684), (0x2u));
  /* 106ab5a5 jmp 0x106ab5ae */
  goto L_106ab5ae;
L_106ab5a7:;
  /* 106ab5a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab5a9 jmp 0x106ab6d8 */
  goto L_106ab6d8;
L_106ab5ae:;
  /* 106ab5ae cmp dword ptr [0x106cf684], 2 */
  { uint32_t _a=(r32((uint32_t)(0x106cf684))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab5b5 jne 0x106ab5e5 */
  if (!C.zf) goto L_106ab5e5;
  /* 106ab5b7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab5bb jne 0x106ab5c6 */
  if (!C.zf) goto L_106ab5c6;
  /* 106ab5bd mov edx, dword ptr [0x106cf690] */
  EDX = (r32((uint32_t)(0x106cf690)));
  /* 106ab5c3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_106ab5c6:;
  /* 106ab5c6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ab5c9 push eax */
  push32((uint32_t)(EAX));
  /* 106ab5ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ab5cd push ecx */
  push32((uint32_t)(ECX));
  /* 106ab5ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ab5d1 push edx */
  push32((uint32_t)(EDX));
  /* 106ab5d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab5d5 push eax */
  push32((uint32_t)(EAX));
  /* 106ab5d6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106ab5d9 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab5da call dword ptr [0x106d1318] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1318))), 0x106ab5e0u);
  /* 106ab5e0 jmp 0x106ab6d8 */
  goto L_106ab6d8;
L_106ab5e5:;
  /* 106ab5e5 cmp dword ptr [0x106cf684], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf684))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab5ec jne 0x106ab6d6 */
  if (!C.zf) goto L_106ab6d6;
  /* 106ab5f2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab5f6 jne 0x106ab601 */
  if (!C.zf) goto L_106ab601;
  /* 106ab5f8 mov edx, dword ptr [0x106cf6a0] */
  EDX = (r32((uint32_t)(0x106cf6a0)));
  /* 106ab5fe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_106ab601:;
  /* 106ab601 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab603 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab605 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ab608 push eax */
  push32((uint32_t)(EAX));
  /* 106ab609 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ab60c push ecx */
  push32((uint32_t)(ECX));
  /* 106ab60d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 106ab610 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106ab612 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ab614 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 106ab617 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab61a push edx */
  push32((uint32_t)(EDX));
  /* 106ab61b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106ab61e push eax */
  push32((uint32_t)(EAX));
  /* 106ab61f call dword ptr [0x106d12b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12b0))), 0x106ab625u);
  /* 106ab625 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106ab628 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab62c jne 0x106ab635 */
  if (!C.zf) goto L_106ab635;
  /* 106ab62e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab630 jmp 0x106ab6d8 */
  goto L_106ab6d8;
L_106ab635:;
  /* 106ab635 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106ab63c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ab63f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106ab641 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab644 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106ab646 call 0x106a64a0 */
  push32(0x106ab64bu); f_106a64a0();
  /* 106ab64b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 106ab64e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106ab651 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106ab654 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106ab657 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ab65a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 106ab65c push edx */
  push32((uint32_t)(EDX));
  /* 106ab65d push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab65f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ab662 push eax */
  push32((uint32_t)(EAX));
  /* 106ab663 call 0x106a7070 */
  push32(0x106ab668u); f_106a7070();
  /* 106ab668 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab66b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106ab672 jmp 0x106ab68b */
  goto L_106ab68b;
  /* 106ab674 mov eax, 1 */
  EAX = (0x1u);
  /* 106ab679 ret  */
  ESPCHK(0x106ab530u, _esp0);
  ESP += 4; return;
  /* 106ab67a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106ab67d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106ab684 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106ab68b:;
  /* 106ab68b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab68f jne 0x106ab695 */
  if (!C.zf) goto L_106ab695;
  /* 106ab691 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab693 jmp 0x106ab6d8 */
  goto L_106ab6d8;
L_106ab695:;
  /* 106ab695 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ab698 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab699 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ab69c push edx */
  push32((uint32_t)(EDX));
  /* 106ab69d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ab6a0 push eax */
  push32((uint32_t)(EAX));
  /* 106ab6a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ab6a4 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab6a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ab6a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106ab6aa push edx */
  push32((uint32_t)(EDX));
  /* 106ab6ab call dword ptr [0x106d12b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12b0))), 0x106ab6b1u);
  /* 106ab6b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106ab6b4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab6b8 jne 0x106ab6be */
  if (!C.zf) goto L_106ab6be;
  /* 106ab6ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab6bc jmp 0x106ab6d8 */
  goto L_106ab6d8;
L_106ab6be:;
  /* 106ab6be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ab6c1 push eax */
  push32((uint32_t)(EAX));
  /* 106ab6c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106ab6c5 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab6c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ab6c9 push edx */
  push32((uint32_t)(EDX));
  /* 106ab6ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab6cd push eax */
  push32((uint32_t)(EAX));
  /* 106ab6ce call dword ptr [0x106d12a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12a8))), 0x106ab6d4u);
  /* 106ab6d4 jmp 0x106ab6d8 */
  goto L_106ab6d8;
L_106ab6d6:;
  /* 106ab6d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106ab6d8:;
  /* 106ab6d8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 106ab6db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ab6de mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 106ab6e5 pop edi */
  EDI = (pop32());
  /* 106ab6e6 pop esi */
  ESI = (pop32());
  /* 106ab6e7 pop ebx */
  EBX = (pop32());
  /* 106ab6e8 mov esp, ebp */
  ESP = (EBP);
  /* 106ab6ea pop ebp */
  EBP = (pop32());
  /* 106ab6eb ret  */
  ESPCHK(0x106ab530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6f0 @ 0x106ab6f0 (727 bytes, 263 insns) */
void f_106ab6f0(void) {
  FTRACE(0x106ab6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ab6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ab6f1 mov ebp, esp */
  EBP = (ESP);
  /* 106ab6f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106ab6f5 push 0x106cafd0 */
  push32((uint32_t)(0x106cafd0u));
  /* 106ab6fa push 0x106ac408 */
  push32((uint32_t)(0x106ac408u));
  /* 106ab6ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 106ab705 push eax */
  push32((uint32_t)(EAX));
  /* 106ab706 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 106ab70d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab710 push ebx */
  push32((uint32_t)(EBX));
  /* 106ab711 push esi */
  push32((uint32_t)(ESI));
  /* 106ab712 push edi */
  push32((uint32_t)(EDI));
  /* 106ab713 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106ab716 cmp dword ptr [0x106cf6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab71d jne 0x106ab776 */
  if (!C.zf) goto L_106ab776;
  /* 106ab71f push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab721 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab723 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ab725 push 0x106cafbc */
  push32((uint32_t)(0x106cafbcu));
  /* 106ab72a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106ab72f push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab731 call dword ptr [0x106d12ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12ac))), 0x106ab737u);
  /* 106ab737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ab739 je 0x106ab747 */
  if (C.zf) goto L_106ab747;
  /* 106ab73b mov dword ptr [0x106cf6a8], 1 */
  w32((uint32_t)(0x106cf6a8), (0x1u));
  /* 106ab745 jmp 0x106ab776 */
  goto L_106ab776;
L_106ab747:;
  /* 106ab747 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab749 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab74b push 1 */
  push32((uint32_t)(0x1u));
  /* 106ab74d push 0x106cafb8 */
  push32((uint32_t)(0x106cafb8u));
  /* 106ab752 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106ab757 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab759 call dword ptr [0x106d12a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12a4))), 0x106ab75fu);
  /* 106ab75f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ab761 je 0x106ab76f */
  if (C.zf) goto L_106ab76f;
  /* 106ab763 mov dword ptr [0x106cf6a8], 2 */
  w32((uint32_t)(0x106cf6a8), (0x2u));
  /* 106ab76d jmp 0x106ab776 */
  goto L_106ab776;
L_106ab76f:;
  /* 106ab76f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab771 jmp 0x106ab9e1 */
  goto L_106ab9e1;
L_106ab776:;
  /* 106ab776 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab77a jle 0x106ab78f */
  if ((C.zf||C.sf!=C.of)) goto L_106ab78f;
  /* 106ab77c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ab77f push eax */
  push32((uint32_t)(EAX));
  /* 106ab780 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ab783 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab784 call 0x106aba00 */
  push32(0x106ab789u); f_106aba00();
  /* 106ab789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab78c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_106ab78f:;
  /* 106ab78f cmp dword ptr [0x106cf6a8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x106cf6a8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab796 jne 0x106ab7bb */
  if (!C.zf) goto L_106ab7bb;
  /* 106ab798 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106ab79b push edx */
  push32((uint32_t)(EDX));
  /* 106ab79c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106ab79f push eax */
  push32((uint32_t)(EAX));
  /* 106ab7a0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ab7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab7a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ab7a7 push edx */
  push32((uint32_t)(EDX));
  /* 106ab7a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ab7ab push eax */
  push32((uint32_t)(EAX));
  /* 106ab7ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab7af push ecx */
  push32((uint32_t)(ECX));
  /* 106ab7b0 call dword ptr [0x106d12a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12a4))), 0x106ab7b6u);
  /* 106ab7b6 jmp 0x106ab9e1 */
  goto L_106ab9e1;
L_106ab7bb:;
  /* 106ab7bb cmp dword ptr [0x106cf6a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf6a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab7c2 jne 0x106ab9df */
  if (!C.zf) goto L_106ab9df;
  /* 106ab7c8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab7cc jne 0x106ab7d7 */
  if (!C.zf) goto L_106ab7d7;
  /* 106ab7ce mov edx, dword ptr [0x106cf6a0] */
  EDX = (r32((uint32_t)(0x106cf6a0)));
  /* 106ab7d4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_106ab7d7:;
  /* 106ab7d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab7d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab7db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ab7de push eax */
  push32((uint32_t)(EAX));
  /* 106ab7df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ab7e2 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab7e3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 106ab7e6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106ab7e8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ab7ea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 106ab7ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab7f0 push edx */
  push32((uint32_t)(EDX));
  /* 106ab7f1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106ab7f4 push eax */
  push32((uint32_t)(EAX));
  /* 106ab7f5 call dword ptr [0x106d12b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12b0))), 0x106ab7fbu);
  /* 106ab7fb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106ab7fe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab802 jne 0x106ab80b */
  if (!C.zf) goto L_106ab80b;
  /* 106ab804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab806 jmp 0x106ab9e1 */
  goto L_106ab9e1;
L_106ab80b:;
  /* 106ab80b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106ab812 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ab815 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106ab817 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab81a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106ab81c call 0x106a64a0 */
  push32(0x106ab821u); f_106a64a0();
  /* 106ab821 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 106ab824 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106ab827 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 106ab82a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106ab82d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106ab834 jmp 0x106ab84d */
  goto L_106ab84d;
  /* 106ab836 mov eax, 1 */
  EAX = (0x1u);
  /* 106ab83b ret  */
  ESPCHK(0x106ab6f0u, _esp0);
  ESP += 4; return;
  /* 106ab83c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106ab83f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 106ab846 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106ab84d:;
  /* 106ab84d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab851 jne 0x106ab85a */
  if (!C.zf) goto L_106ab85a;
  /* 106ab853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab855 jmp 0x106ab9e1 */
  goto L_106ab9e1;
L_106ab85a:;
  /* 106ab85a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ab85d push edx */
  push32((uint32_t)(EDX));
  /* 106ab85e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ab861 push eax */
  push32((uint32_t)(EAX));
  /* 106ab862 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ab865 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab866 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ab869 push edx */
  push32((uint32_t)(EDX));
  /* 106ab86a push 1 */
  push32((uint32_t)(0x1u));
  /* 106ab86c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106ab86f push eax */
  push32((uint32_t)(EAX));
  /* 106ab870 call dword ptr [0x106d12b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12b0))), 0x106ab876u);
  /* 106ab876 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ab878 jne 0x106ab881 */
  if (!C.zf) goto L_106ab881;
  /* 106ab87a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab87c jmp 0x106ab9e1 */
  goto L_106ab9e1;
L_106ab881:;
  /* 106ab881 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab883 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab885 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ab888 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab889 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ab88c push edx */
  push32((uint32_t)(EDX));
  /* 106ab88d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ab890 push eax */
  push32((uint32_t)(EAX));
  /* 106ab891 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab894 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab895 call dword ptr [0x106d12ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12ac))), 0x106ab89bu);
  /* 106ab89b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106ab89e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab8a2 jne 0x106ab8ab */
  if (!C.zf) goto L_106ab8ab;
  /* 106ab8a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab8a6 jmp 0x106ab9e1 */
  goto L_106ab9e1;
L_106ab8ab:;
  /* 106ab8ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ab8ae and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 106ab8b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ab8b6 je 0x106ab8fb */
  if (C.zf) goto L_106ab8fb;
  /* 106ab8b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab8bc je 0x106ab8f6 */
  if (C.zf) goto L_106ab8f6;
  /* 106ab8be mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106ab8c1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab8c4 jle 0x106ab8cd */
  if ((C.zf||C.sf!=C.of)) goto L_106ab8cd;
  /* 106ab8c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab8c8 jmp 0x106ab9e1 */
  goto L_106ab9e1;
L_106ab8cd:;
  /* 106ab8cd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106ab8d0 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab8d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106ab8d4 push edx */
  push32((uint32_t)(EDX));
  /* 106ab8d5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ab8d8 push eax */
  push32((uint32_t)(EAX));
  /* 106ab8d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ab8dc push ecx */
  push32((uint32_t)(ECX));
  /* 106ab8dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ab8e0 push edx */
  push32((uint32_t)(EDX));
  /* 106ab8e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab8e4 push eax */
  push32((uint32_t)(EAX));
  /* 106ab8e5 call dword ptr [0x106d12ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12ac))), 0x106ab8ebu);
  /* 106ab8eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ab8ed jne 0x106ab8f6 */
  if (!C.zf) goto L_106ab8f6;
  /* 106ab8ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab8f1 jmp 0x106ab9e1 */
  goto L_106ab9e1;
L_106ab8f6:;
  /* 106ab8f6 jmp 0x106ab9da */
  goto L_106ab9da;
L_106ab8fb:;
  /* 106ab8fb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106ab8fe mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 106ab901 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106ab908 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106ab90b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106ab90d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ab910 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106ab912 call 0x106a64a0 */
  push32(0x106ab917u); f_106a64a0();
  /* 106ab917 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 106ab91a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106ab91d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 106ab920 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 106ab923 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106ab92a jmp 0x106ab943 */
  goto L_106ab943;
  /* 106ab92c mov eax, 1 */
  EAX = (0x1u);
  /* 106ab931 ret  */
  ESPCHK(0x106ab6f0u, _esp0);
  ESP += 4; return;
  /* 106ab932 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106ab935 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106ab93c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106ab943:;
  /* 106ab943 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab947 jne 0x106ab950 */
  if (!C.zf) goto L_106ab950;
  /* 106ab949 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab94b jmp 0x106ab9e1 */
  goto L_106ab9e1;
L_106ab950:;
  /* 106ab950 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106ab953 push eax */
  push32((uint32_t)(EAX));
  /* 106ab954 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ab957 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab958 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106ab95b push edx */
  push32((uint32_t)(EDX));
  /* 106ab95c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106ab95f push eax */
  push32((uint32_t)(EAX));
  /* 106ab960 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ab963 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ab967 push edx */
  push32((uint32_t)(EDX));
  /* 106ab968 call dword ptr [0x106d12ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12ac))), 0x106ab96eu);
  /* 106ab96e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ab970 jne 0x106ab976 */
  if (!C.zf) goto L_106ab976;
  /* 106ab972 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab974 jmp 0x106ab9e1 */
  goto L_106ab9e1;
L_106ab976:;
  /* 106ab976 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab97a jne 0x106ab9aa */
  if (!C.zf) goto L_106ab9aa;
  /* 106ab97c push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab97e push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab980 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab982 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab984 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106ab987 push eax */
  push32((uint32_t)(EAX));
  /* 106ab988 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ab98b push ecx */
  push32((uint32_t)(ECX));
  /* 106ab98c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106ab991 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 106ab994 push edx */
  push32((uint32_t)(EDX));
  /* 106ab995 call dword ptr [0x106d1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1330))), 0x106ab99bu);
  /* 106ab99b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106ab99e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab9a2 jne 0x106ab9a8 */
  if (!C.zf) goto L_106ab9a8;
  /* 106ab9a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab9a6 jmp 0x106ab9e1 */
  goto L_106ab9e1;
L_106ab9a8:;
  /* 106ab9a8 jmp 0x106ab9da */
  goto L_106ab9da;
L_106ab9aa:;
  /* 106ab9aa push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab9ac push 0 */
  push32((uint32_t)(0x0u));
  /* 106ab9ae mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106ab9b1 push eax */
  push32((uint32_t)(EAX));
  /* 106ab9b2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106ab9b5 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab9b6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106ab9b9 push edx */
  push32((uint32_t)(EDX));
  /* 106ab9ba mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106ab9bd push eax */
  push32((uint32_t)(EAX));
  /* 106ab9be push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106ab9c3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 106ab9c6 push ecx */
  push32((uint32_t)(ECX));
  /* 106ab9c7 call dword ptr [0x106d1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1330))), 0x106ab9cdu);
  /* 106ab9cd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106ab9d0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ab9d4 jne 0x106ab9da */
  if (!C.zf) goto L_106ab9da;
  /* 106ab9d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ab9d8 jmp 0x106ab9e1 */
  goto L_106ab9e1;
L_106ab9da:;
  /* 106ab9da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106ab9dd jmp 0x106ab9e1 */
  goto L_106ab9e1;
L_106ab9df:;
  /* 106ab9df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106ab9e1:;
  /* 106ab9e1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 106ab9e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ab9e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 106ab9ee pop edi */
  EDI = (pop32());
  /* 106ab9ef pop esi */
  ESI = (pop32());
  /* 106ab9f0 pop ebx */
  EBX = (pop32());
  /* 106ab9f1 mov esp, ebp */
  ESP = (EBP);
  /* 106ab9f3 pop ebp */
  EBP = (pop32());
  /* 106ab9f4 ret  */
  ESPCHK(0x106ab6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba00 @ 0x106aba00 (80 bytes, 32 insns) */
void f_106aba00(void) {
  FTRACE(0x106aba00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106aba00 push ebp */
  push32((uint32_t)(EBP));
  /* 106aba01 mov ebp, esp */
  EBP = (ESP);
  /* 106aba03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aba06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aba09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106aba0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aba0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106aba12:;
  /* 106aba12 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aba15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aba18 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aba1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106aba1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aba20 je 0x106aba37 */
  if (C.zf) goto L_106aba37;
  /* 106aba22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aba25 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106aba28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aba2a je 0x106aba37 */
  if (C.zf) goto L_106aba37;
  /* 106aba2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aba2f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aba32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106aba35 jmp 0x106aba12 */
  goto L_106aba12;
L_106aba37:;
  /* 106aba37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aba3a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106aba3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aba3f jne 0x106aba49 */
  if (!C.zf) goto L_106aba49;
  /* 106aba41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aba44 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aba47 jmp 0x106aba4c */
  goto L_106aba4c;
L_106aba49:;
  /* 106aba49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_106aba4c:;
  /* 106aba4c mov esp, ebp */
  ESP = (EBP);
  /* 106aba4e pop ebp */
  EBP = (pop32());
  /* 106aba4f ret  */
  ESPCHK(0x106aba00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba50 @ 0x106aba50 (130 bytes, 43 insns) */
void f_106aba50(void) {
  FTRACE(0x106aba50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106aba50 push ebp */
  push32((uint32_t)(EBP));
  /* 106aba51 mov ebp, esp */
  EBP = (ESP);
  /* 106aba53 push ecx */
  push32((uint32_t)(ECX));
  /* 106aba54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aba57 cmp eax, dword ptr [0x106d0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106d0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aba5d jae 0x106aba81 */
  if (!C.cf) goto L_106aba81;
  /* 106aba5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aba62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106aba65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aba68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106aba6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106aba6e mov eax, dword ptr [ecx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x106d0e60)));
  /* 106aba75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106aba7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106aba7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106aba7f jne 0x106aba9c */
  if (!C.zf) goto L_106aba9c;
L_106aba81:;
  /* 106aba81 call 0x106ab1d0 */
  push32(0x106aba86u); f_106ab1d0();
  /* 106aba86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106aba8c call 0x106ab1e0 */
  push32(0x106aba91u); f_106ab1e0();
  /* 106aba91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106aba97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106aba9a jmp 0x106abace */
  goto L_106abace;
L_106aba9c:;
  /* 106aba9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aba9f push edx */
  push32((uint32_t)(EDX));
  /* 106abaa0 call 0x106ac9f0 */
  push32(0x106abaa5u); f_106ac9f0();
  /* 106abaa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106abaa8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106abaab push eax */
  push32((uint32_t)(EAX));
  /* 106abaac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106abaaf push ecx */
  push32((uint32_t)(ECX));
  /* 106abab0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abab3 push edx */
  push32((uint32_t)(EDX));
  /* 106abab4 call 0x106abae0 */
  push32(0x106abab9u); f_106abae0();
  /* 106abab9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ababc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ababf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abac2 push eax */
  push32((uint32_t)(EAX));
  /* 106abac3 call 0x106aca80 */
  push32(0x106abac8u); f_106aca80();
  /* 106abac8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106abacb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106abace:;
  /* 106abace mov esp, ebp */
  ESP = (EBP);
  /* 106abad0 pop ebp */
  EBP = (pop32());
  /* 106abad1 ret  */
  ESPCHK(0x106aba50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bae0 @ 0x106abae0 (178 bytes, 56 insns) */
void f_106abae0(void) {
  FTRACE(0x106abae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106abae0 push ebp */
  push32((uint32_t)(EBP));
  /* 106abae1 mov ebp, esp */
  EBP = (ESP);
  /* 106abae3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106abae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abae9 push eax */
  push32((uint32_t)(EAX));
  /* 106abaea call 0x106ac870 */
  push32(0x106abaefu); f_106ac870();
  /* 106abaef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106abaf2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106abaf5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abaf9 jne 0x106abb0e */
  if (!C.zf) goto L_106abb0e;
  /* 106abafb call 0x106ab1d0 */
  push32(0x106abb00u); f_106ab1d0();
  /* 106abb00 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106abb06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106abb09 jmp 0x106abb8e */
  goto L_106abb8e;
L_106abb0e:;
  /* 106abb0e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106abb11 push ecx */
  push32((uint32_t)(ECX));
  /* 106abb12 push 0 */
  push32((uint32_t)(0x0u));
  /* 106abb14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106abb17 push edx */
  push32((uint32_t)(EDX));
  /* 106abb18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106abb1b push eax */
  push32((uint32_t)(EAX));
  /* 106abb1c call dword ptr [0x106d129c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d129c))), 0x106abb22u);
  /* 106abb22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106abb25 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abb29 jne 0x106abb36 */
  if (!C.zf) goto L_106abb36;
  /* 106abb2b call dword ptr [0x106d1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1304))), 0x106abb31u);
  /* 106abb31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106abb34 jmp 0x106abb3d */
  goto L_106abb3d;
L_106abb36:;
  /* 106abb36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106abb3d:;
  /* 106abb3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abb41 je 0x106abb54 */
  if (C.zf) goto L_106abb54;
  /* 106abb43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abb46 push ecx */
  push32((uint32_t)(ECX));
  /* 106abb47 call 0x106ab130 */
  push32(0x106abb4cu); f_106ab130();
  /* 106abb4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106abb4f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106abb52 jmp 0x106abb8e */
  goto L_106abb8e;
L_106abb54:;
  /* 106abb54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abb57 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 106abb5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abb5d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 106abb60 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106abb63 mov ecx, dword ptr [edx*4 + 0x106d0e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x106d0e60)));
  /* 106abb6a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 106abb6e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 106abb71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abb74 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106abb77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abb7a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106abb7d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106abb80 mov eax, dword ptr [eax*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x106d0e60)));
  /* 106abb87 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 106abb8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_106abb8e:;
  /* 106abb8e mov esp, ebp */
  ESP = (EBP);
  /* 106abb90 pop ebp */
  EBP = (pop32());
  /* 106abb91 ret  */
  ESPCHK(0x106abae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bba0 @ 0x106abba0 (130 bytes, 43 insns) */
void f_106abba0(void) {
  FTRACE(0x106abba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106abba0 push ebp */
  push32((uint32_t)(EBP));
  /* 106abba1 mov ebp, esp */
  EBP = (ESP);
  /* 106abba3 push ecx */
  push32((uint32_t)(ECX));
  /* 106abba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abba7 cmp eax, dword ptr [0x106d0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106d0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abbad jae 0x106abbd1 */
  if (!C.cf) goto L_106abbd1;
  /* 106abbaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abbb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106abbb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abbb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106abbbb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106abbbe mov eax, dword ptr [ecx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x106d0e60)));
  /* 106abbc5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106abbca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106abbcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106abbcf jne 0x106abbec */
  if (!C.zf) goto L_106abbec;
L_106abbd1:;
  /* 106abbd1 call 0x106ab1d0 */
  push32(0x106abbd6u); f_106ab1d0();
  /* 106abbd6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106abbdc call 0x106ab1e0 */
  push32(0x106abbe1u); f_106ab1e0();
  /* 106abbe1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106abbe7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106abbea jmp 0x106abc1e */
  goto L_106abc1e;
L_106abbec:;
  /* 106abbec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abbef push edx */
  push32((uint32_t)(EDX));
  /* 106abbf0 call 0x106ac9f0 */
  push32(0x106abbf5u); f_106ac9f0();
  /* 106abbf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106abbf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106abbfb push eax */
  push32((uint32_t)(EAX));
  /* 106abbfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106abbff push ecx */
  push32((uint32_t)(ECX));
  /* 106abc00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abc03 push edx */
  push32((uint32_t)(EDX));
  /* 106abc04 call 0x106abc30 */
  push32(0x106abc09u); f_106abc30();
  /* 106abc09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106abc0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106abc0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abc12 push eax */
  push32((uint32_t)(EAX));
  /* 106abc13 call 0x106aca80 */
  push32(0x106abc18u); f_106aca80();
  /* 106abc18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106abc1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106abc1e:;
  /* 106abc1e mov esp, ebp */
  ESP = (EBP);
  /* 106abc20 pop ebp */
  EBP = (pop32());
  /* 106abc21 ret  */
  ESPCHK(0x106abba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x106abc30 (627 bytes, 182 insns) */
void f_106abc30(void) {
  FTRACE(0x106abc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106abc30 push ebp */
  push32((uint32_t)(EBP));
  /* 106abc31 mov ebp, esp */
  EBP = (ESP);
  /* 106abc33 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106abc39 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106abc40 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106abc43 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 106abc49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abc4d jne 0x106abc56 */
  if (!C.zf) goto L_106abc56;
  /* 106abc4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106abc51 jmp 0x106abe9f */
  goto L_106abe9f;
L_106abc56:;
  /* 106abc56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abc59 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106abc5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abc5f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106abc62 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106abc65 mov eax, dword ptr [ecx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x106d0e60)));
  /* 106abc6c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106abc71 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 106abc74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106abc76 je 0x106abc88 */
  if (C.zf) goto L_106abc88;
  /* 106abc78 push 2 */
  push32((uint32_t)(0x2u));
  /* 106abc7a push 0 */
  push32((uint32_t)(0x0u));
  /* 106abc7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abc7f push edx */
  push32((uint32_t)(EDX));
  /* 106abc80 call 0x106abae0 */
  push32(0x106abc85u); f_106abae0();
  /* 106abc85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106abc88:;
  /* 106abc88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abc8b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106abc8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abc91 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106abc94 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106abc97 mov edx, dword ptr [eax*4 + 0x106d0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x106d0e60)));
  /* 106abc9e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 106abca3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 106abca8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106abcaa je 0x106abdbc */
  if (C.zf) goto L_106abdbc;
  /* 106abcb0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106abcb3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106abcb6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_106abcbd:;
  /* 106abcbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abcc0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106abcc3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abcc6 jae 0x106abdba */
  if (!C.cf) goto L_106abdba;
  /* 106abccc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 106abcd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106abcd5:;
  /* 106abcd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106abcd8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 106abcde sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106abce0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abce6 jge 0x106abd47 */
  if ((C.sf==C.of)) goto L_106abd47;
  /* 106abce8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abceb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106abcee cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abcf1 jae 0x106abd47 */
  if (!C.cf) goto L_106abd47;
  /* 106abcf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abcf6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106abcf8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 106abcfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abd01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106abd04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106abd07 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 106abd0e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abd11 jne 0x106abd31 */
  if (!C.zf) goto L_106abd31;
  /* 106abd13 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 106abd19 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106abd1c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 106abd22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106abd25 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 106abd28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106abd2b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106abd2e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106abd31:;
  /* 106abd31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106abd34 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 106abd3a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 106abd3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106abd3f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106abd42 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106abd45 jmp 0x106abcd5 */
  goto L_106abcd5;
L_106abd47:;
  /* 106abd47 push 0 */
  push32((uint32_t)(0x0u));
  /* 106abd49 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 106abd4f push edx */
  push32((uint32_t)(EDX));
  /* 106abd50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106abd53 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 106abd59 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106abd5b push eax */
  push32((uint32_t)(EAX));
  /* 106abd5c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 106abd62 push edx */
  push32((uint32_t)(EDX));
  /* 106abd63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abd66 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106abd69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abd6c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106abd6f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106abd72 mov edx, dword ptr [eax*4 + 0x106d0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x106d0e60)));
  /* 106abd79 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 106abd7c push eax */
  push32((uint32_t)(EAX));
  /* 106abd7d call dword ptr [0x106d12c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c4))), 0x106abd83u);
  /* 106abd83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106abd85 je 0x106abdaa */
  if (C.zf) goto L_106abdaa;
  /* 106abd87 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106abd8a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106abd90 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106abd93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106abd96 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 106abd9c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106abd9e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abda4 jge 0x106abda8 */
  if ((C.sf==C.of)) goto L_106abda8;
  /* 106abda6 jmp 0x106abdba */
  goto L_106abdba;
L_106abda8:;
  /* 106abda8 jmp 0x106abdb5 */
  goto L_106abdb5;
L_106abdaa:;
  /* 106abdaa call dword ptr [0x106d1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1304))), 0x106abdb0u);
  /* 106abdb0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106abdb3 jmp 0x106abdba */
  goto L_106abdba;
L_106abdb5:;
  /* 106abdb5 jmp 0x106abcbd */
  goto L_106abcbd;
L_106abdba:;
  /* 106abdba jmp 0x106abe0c */
  goto L_106abe0c;
L_106abdbc:;
  /* 106abdbc push 0 */
  push32((uint32_t)(0x0u));
  /* 106abdbe lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 106abdc4 push ecx */
  push32((uint32_t)(ECX));
  /* 106abdc5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106abdc8 push edx */
  push32((uint32_t)(EDX));
  /* 106abdc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106abdcc push eax */
  push32((uint32_t)(EAX));
  /* 106abdcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abdd0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106abdd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abdd6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106abdd9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106abddc mov eax, dword ptr [ecx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x106d0e60)));
  /* 106abde3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 106abde6 push ecx */
  push32((uint32_t)(ECX));
  /* 106abde7 call dword ptr [0x106d12c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c4))), 0x106abdedu);
  /* 106abded test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106abdef je 0x106abe03 */
  if (C.zf) goto L_106abe03;
  /* 106abdf1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106abdf8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 106abdfe mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106abe01 jmp 0x106abe0c */
  goto L_106abe0c;
L_106abe03:;
  /* 106abe03 call dword ptr [0x106d1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1304))), 0x106abe09u);
  /* 106abe09 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106abe0c:;
  /* 106abe0c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abe10 jne 0x106abe96 */
  if (!C.zf) goto L_106abe96;
  /* 106abe16 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abe1a je 0x106abe4a */
  if (C.zf) goto L_106abe4a;
  /* 106abe1c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abe20 jne 0x106abe39 */
  if (!C.zf) goto L_106abe39;
  /* 106abe22 call 0x106ab1d0 */
  push32(0x106abe27u); f_106ab1d0();
  /* 106abe27 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106abe2d call 0x106ab1e0 */
  push32(0x106abe32u); f_106ab1e0();
  /* 106abe32 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106abe35 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106abe37 jmp 0x106abe45 */
  goto L_106abe45;
L_106abe39:;
  /* 106abe39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106abe3c push edx */
  push32((uint32_t)(EDX));
  /* 106abe3d call 0x106ab130 */
  push32(0x106abe42u); f_106ab130();
  /* 106abe42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106abe45:;
  /* 106abe45 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106abe48 jmp 0x106abe9f */
  goto L_106abe9f;
L_106abe4a:;
  /* 106abe4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abe4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106abe50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abe53 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106abe56 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106abe59 mov edx, dword ptr [eax*4 + 0x106d0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x106d0e60)));
  /* 106abe60 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 106abe65 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 106abe68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106abe6a je 0x106abe7b */
  if (C.zf) goto L_106abe7b;
  /* 106abe6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106abe6f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106abe72 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abe75 jne 0x106abe7b */
  if (!C.zf) goto L_106abe7b;
  /* 106abe77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106abe79 jmp 0x106abe9f */
  goto L_106abe9f;
L_106abe7b:;
  /* 106abe7b call 0x106ab1d0 */
  push32(0x106abe80u); f_106ab1d0();
  /* 106abe80 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 106abe86 call 0x106ab1e0 */
  push32(0x106abe8bu); f_106ab1e0();
  /* 106abe8b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106abe91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106abe94 jmp 0x106abe9f */
  goto L_106abe9f;
L_106abe96:;
  /* 106abe96 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106abe99 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_106abe9f:;
  /* 106abe9f mov esp, ebp */
  ESP = (EBP);
  /* 106abea1 pop ebp */
  EBP = (pop32());
  /* 106abea2 ret  */
  ESPCHK(0x106abc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000beb0 @ 0x106abeb0 (199 bytes, 68 insns) */
void f_106abeb0(void) {
  FTRACE(0x106abeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106abeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 106abeb1 mov ebp, esp */
  EBP = (ESP);
  /* 106abeb3 push ecx */
  push32((uint32_t)(ECX));
  /* 106abeb4 push ebx */
  push32((uint32_t)(EBX));
  /* 106abeb5 push esi */
  push32((uint32_t)(ESI));
  /* 106abeb6 push edi */
  push32((uint32_t)(EDI));
L_106abeb7:;
  /* 106abeb7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abebb jne 0x106abedb */
  if (!C.zf) goto L_106abedb;
  /* 106abebd push 0x106caf1c */
  push32((uint32_t)(0x106caf1cu));
  /* 106abec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106abec4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 106abec6 push 0x106cafe8 */
  push32((uint32_t)(0x106cafe8u));
  /* 106abecb push 2 */
  push32((uint32_t)(0x2u));
  /* 106abecd call 0x106a23c0 */
  push32(0x106abed2u); f_106a23c0();
  /* 106abed2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106abed5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abed8 jne 0x106abedb */
  if (!C.zf) goto L_106abedb;
  /* 106abeda int3  */
  x86_unimpl("int3 @ 0x106abeda");
L_106abedb:;
  /* 106abedb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106abedd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106abedf jne 0x106abeb7 */
  if (!C.zf) goto L_106abeb7;
  /* 106abee1 mov ecx, dword ptr [0x106cf6ac] */
  ECX = (r32((uint32_t)(0x106cf6ac)));
  /* 106abee7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106abeea mov dword ptr [0x106cf6ac], ecx */
  w32((uint32_t)(0x106cf6ac), (ECX));
  /* 106abef0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abef3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106abef6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 106abef8 push 0x106cafe8 */
  push32((uint32_t)(0x106cafe8u));
  /* 106abefd push 2 */
  push32((uint32_t)(0x2u));
  /* 106abeff push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 106abf04 call 0x106a3300 */
  push32(0x106abf09u); f_106a3300();
  /* 106abf09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106abf0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abf0f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 106abf12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abf15 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abf19 je 0x106abf36 */
  if (C.zf) goto L_106abf36;
  /* 106abf1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abf1e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106abf21 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 106abf24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abf27 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 106abf2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abf2d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 106abf34 jmp 0x106abf5b */
  goto L_106abf5b;
L_106abf36:;
  /* 106abf36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abf39 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106abf3c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106abf3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abf42 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106abf45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abf48 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106abf4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abf4e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 106abf51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abf54 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_106abf5b:;
  /* 106abf5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abf5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abf61 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106abf64 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106abf66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106abf69 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 106abf70 pop edi */
  EDI = (pop32());
  /* 106abf71 pop esi */
  ESI = (pop32());
  /* 106abf72 pop ebx */
  EBX = (pop32());
  /* 106abf73 mov esp, ebp */
  ESP = (EBP);
  /* 106abf75 pop ebp */
  EBP = (pop32());
  /* 106abf76 ret  */
  ESPCHK(0x106abeb0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x106abf80 (50 bytes, 17 insns) */
void f_106abf80(void) {
  FTRACE(0x106abf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106abf80 push ebp */
  push32((uint32_t)(EBP));
  /* 106abf81 mov ebp, esp */
  EBP = (ESP);
  /* 106abf83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abf86 cmp eax, dword ptr [0x106d0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106d0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abf8c jb 0x106abf92 */
  if (C.cf) goto L_106abf92;
  /* 106abf8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106abf90 jmp 0x106abfb0 */
  goto L_106abfb0;
L_106abf92:;
  /* 106abf92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abf95 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106abf98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106abf9b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106abf9e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106abfa1 mov eax, dword ptr [ecx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x106d0e60)));
  /* 106abfa8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106abfad and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_106abfb0:;
  /* 106abfb0 pop ebp */
  EBP = (pop32());
  /* 106abfb1 ret  */
  ESPCHK(0x106abf80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfc0 @ 0x106abfc0 (300 bytes, 80 insns) */
void f_106abfc0(void) {
  FTRACE(0x106abfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106abfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 106abfc1 mov ebp, esp */
  EBP = (ESP);
  /* 106abfc3 push ecx */
  push32((uint32_t)(ECX));
  /* 106abfc4 cmp dword ptr [0x106d0b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abfcb jne 0x106abfd9 */
  if (!C.zf) goto L_106abfd9;
  /* 106abfcd mov dword ptr [0x106d0b60], 0x200 */
  w32((uint32_t)(0x106d0b60), (0x200u));
  /* 106abfd7 jmp 0x106abfec */
  goto L_106abfec;
L_106abfd9:;
  /* 106abfd9 cmp dword ptr [0x106d0b60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x106d0b60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106abfe0 jge 0x106abfec */
  if ((C.sf==C.of)) goto L_106abfec;
  /* 106abfe2 mov dword ptr [0x106d0b60], 0x14 */
  w32((uint32_t)(0x106d0b60), (0x14u));
L_106abfec:;
  /* 106abfec push 0x83 */
  push32((uint32_t)(0x83u));
  /* 106abff1 push 0x106caff4 */
  push32((uint32_t)(0x106caff4u));
  /* 106abff6 push 2 */
  push32((uint32_t)(0x2u));
  /* 106abff8 push 4 */
  push32((uint32_t)(0x4u));
  /* 106abffa mov eax, dword ptr [0x106d0b60] */
  EAX = (r32((uint32_t)(0x106d0b60)));
  /* 106abfff push eax */
  push32((uint32_t)(EAX));
  /* 106ac000 call 0x106a3710 */
  push32(0x106ac005u); f_106a3710();
  /* 106ac005 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac008 mov dword ptr [0x106cf820], eax */
  w32((uint32_t)(0x106cf820), (EAX));
  /* 106ac00d cmp dword ptr [0x106cf820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac014 jne 0x106ac055 */
  if (!C.zf) goto L_106ac055;
  /* 106ac016 mov dword ptr [0x106d0b60], 0x14 */
  w32((uint32_t)(0x106d0b60), (0x14u));
  /* 106ac020 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 106ac025 push 0x106caff4 */
  push32((uint32_t)(0x106caff4u));
  /* 106ac02a push 2 */
  push32((uint32_t)(0x2u));
  /* 106ac02c push 4 */
  push32((uint32_t)(0x4u));
  /* 106ac02e mov ecx, dword ptr [0x106d0b60] */
  ECX = (r32((uint32_t)(0x106d0b60)));
  /* 106ac034 push ecx */
  push32((uint32_t)(ECX));
  /* 106ac035 call 0x106a3710 */
  push32(0x106ac03au); f_106a3710();
  /* 106ac03a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac03d mov dword ptr [0x106cf820], eax */
  w32((uint32_t)(0x106cf820), (EAX));
  /* 106ac042 cmp dword ptr [0x106cf820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac049 jne 0x106ac055 */
  if (!C.zf) goto L_106ac055;
  /* 106ac04b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 106ac04d call 0x106a2270 */
  push32(0x106ac052u); f_106a2270();
  /* 106ac052 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ac055:;
  /* 106ac055 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106ac05c jmp 0x106ac067 */
  goto L_106ac067;
L_106ac05e:;
  /* 106ac05e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac061 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac064 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106ac067:;
  /* 106ac067 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac06b jge 0x106ac086 */
  if ((C.sf==C.of)) goto L_106ac086;
  /* 106ac06d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac070 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ac073 add eax, 0x106ce120 */
  { uint32_t _a=(EAX),_b=(0x106ce120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac078 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac07b mov edx, dword ptr [0x106cf820] */
  EDX = (r32((uint32_t)(0x106cf820)));
  /* 106ac081 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 106ac084 jmp 0x106ac05e */
  goto L_106ac05e;
L_106ac086:;
  /* 106ac086 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106ac08d jmp 0x106ac098 */
  goto L_106ac098;
L_106ac08f:;
  /* 106ac08f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac092 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac095 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106ac098:;
  /* 106ac098 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac09c jge 0x106ac0e8 */
  if ((C.sf==C.of)) goto L_106ac0e8;
  /* 106ac09e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac0a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ac0a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac0a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ac0aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ac0ad mov eax, dword ptr [ecx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x106d0e60)));
  /* 106ac0b4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac0b8 je 0x106ac0d6 */
  if (C.zf) goto L_106ac0d6;
  /* 106ac0ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac0bd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ac0c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac0c3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ac0c6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ac0c9 mov eax, dword ptr [ecx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x106d0e60)));
  /* 106ac0d0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac0d4 jne 0x106ac0e6 */
  if (!C.zf) goto L_106ac0e6;
L_106ac0d6:;
  /* 106ac0d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac0d9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ac0dc mov dword ptr [ecx + 0x106ce130], 0xffffffff */
  w32((uint32_t)(ECX + 0x106ce130), (0xffffffffu));
L_106ac0e6:;
  /* 106ac0e6 jmp 0x106ac08f */
  goto L_106ac08f;
L_106ac0e8:;
  /* 106ac0e8 mov esp, ebp */
  ESP = (EBP);
  /* 106ac0ea pop ebp */
  EBP = (pop32());
  /* 106ac0eb ret  */
  ESPCHK(0x106abfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0f0 @ 0x106ac0f0 (26 bytes, 9 insns) */
void f_106ac0f0(void) {
  FTRACE(0x106ac0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac0f1 mov ebp, esp */
  EBP = (ESP);
  /* 106ac0f3 call 0x106accf0 */
  push32(0x106ac0f8u); f_106accf0();
  /* 106ac0f8 movsx eax, byte ptr [0x106cf4c4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x106cf4c4))));
  /* 106ac0ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ac101 je 0x106ac108 */
  if (C.zf) goto L_106ac108;
  /* 106ac103 call 0x106acab0 */
  push32(0x106ac108u); f_106acab0();
L_106ac108:;
  /* 106ac108 pop ebp */
  EBP = (pop32());
  /* 106ac109 ret  */
  ESPCHK(0x106ac0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c110 @ 0x106ac110 (61 bytes, 20 insns) */
void f_106ac110(void) {
  FTRACE(0x106ac110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac110 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac111 mov ebp, esp */
  EBP = (ESP);
  /* 106ac113 cmp dword ptr [ebp + 8], 0x106ce120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x106ce120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac11a jb 0x106ac13e */
  if (C.cf) goto L_106ac13e;
  /* 106ac11c cmp dword ptr [ebp + 8], 0x106ce380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x106ce380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac123 ja 0x106ac13e */
  if ((!C.cf&&!C.zf)) goto L_106ac13e;
  /* 106ac125 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac128 sub eax, 0x106ce120 */
  { uint32_t _a=(EAX),_b=(0x106ce120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ac12d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ac130 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac133 push eax */
  push32((uint32_t)(EAX));
  /* 106ac134 call 0x106a6d00 */
  push32(0x106ac139u); f_106a6d00();
  /* 106ac139 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac13c jmp 0x106ac14b */
  goto L_106ac14b;
L_106ac13e:;
  /* 106ac13e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac141 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac144 push ecx */
  push32((uint32_t)(ECX));
  /* 106ac145 call dword ptr [0x106d1354] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1354))), 0x106ac14bu);
L_106ac14b:;
  /* 106ac14b pop ebp */
  EBP = (pop32());
  /* 106ac14c ret  */
  ESPCHK(0x106ac110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c150 @ 0x106ac150 (41 bytes, 16 insns) */
void f_106ac150(void) {
  FTRACE(0x106ac150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac150 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac151 mov ebp, esp */
  EBP = (ESP);
  /* 106ac153 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac157 jge 0x106ac16a */
  if ((C.sf==C.of)) goto L_106ac16a;
  /* 106ac159 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac15c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac15f push eax */
  push32((uint32_t)(EAX));
  /* 106ac160 call 0x106a6d00 */
  push32(0x106ac165u); f_106a6d00();
  /* 106ac165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac168 jmp 0x106ac177 */
  goto L_106ac177;
L_106ac16a:;
  /* 106ac16a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ac16d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac170 push ecx */
  push32((uint32_t)(ECX));
  /* 106ac171 call dword ptr [0x106d1354] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1354))), 0x106ac177u);
L_106ac177:;
  /* 106ac177 pop ebp */
  EBP = (pop32());
  /* 106ac178 ret  */
  ESPCHK(0x106ac150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c180 @ 0x106ac180 (61 bytes, 20 insns) */
void f_106ac180(void) {
  FTRACE(0x106ac180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac180 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac181 mov ebp, esp */
  EBP = (ESP);
  /* 106ac183 cmp dword ptr [ebp + 8], 0x106ce120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x106ce120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac18a jb 0x106ac1ae */
  if (C.cf) goto L_106ac1ae;
  /* 106ac18c cmp dword ptr [ebp + 8], 0x106ce380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x106ce380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac193 ja 0x106ac1ae */
  if ((!C.cf&&!C.zf)) goto L_106ac1ae;
  /* 106ac195 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac198 sub eax, 0x106ce120 */
  { uint32_t _a=(EAX),_b=(0x106ce120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ac19d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ac1a0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac1a3 push eax */
  push32((uint32_t)(EAX));
  /* 106ac1a4 call 0x106a6da0 */
  push32(0x106ac1a9u); f_106a6da0();
  /* 106ac1a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac1ac jmp 0x106ac1bb */
  goto L_106ac1bb;
L_106ac1ae:;
  /* 106ac1ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac1b1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac1b4 push ecx */
  push32((uint32_t)(ECX));
  /* 106ac1b5 call dword ptr [0x106d1358] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1358))), 0x106ac1bbu);
L_106ac1bb:;
  /* 106ac1bb pop ebp */
  EBP = (pop32());
  /* 106ac1bc ret  */
  ESPCHK(0x106ac180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1c0 @ 0x106ac1c0 (41 bytes, 16 insns) */
void f_106ac1c0(void) {
  FTRACE(0x106ac1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac1c1 mov ebp, esp */
  EBP = (ESP);
  /* 106ac1c3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac1c7 jge 0x106ac1da */
  if ((C.sf==C.of)) goto L_106ac1da;
  /* 106ac1c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac1cc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac1cf push eax */
  push32((uint32_t)(EAX));
  /* 106ac1d0 call 0x106a6da0 */
  push32(0x106ac1d5u); f_106a6da0();
  /* 106ac1d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac1d8 jmp 0x106ac1e7 */
  goto L_106ac1e7;
L_106ac1da:;
  /* 106ac1da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ac1dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac1e0 push ecx */
  push32((uint32_t)(ECX));
  /* 106ac1e1 call dword ptr [0x106d1358] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1358))), 0x106ac1e7u);
L_106ac1e7:;
  /* 106ac1e7 pop ebp */
  EBP = (pop32());
  /* 106ac1e8 ret  */
  ESPCHK(0x106ac1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1f0 @ 0x106ac1f0 (119 bytes, 34 insns) */
void f_106ac1f0(void) {
  FTRACE(0x106ac1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac1f1 mov ebp, esp */
  EBP = (ESP);
  /* 106ac1f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ac1f6 push 0x106cf81c */
  push32((uint32_t)(0x106cf81cu));
  /* 106ac1fb call dword ptr [0x106d12d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12d8))), 0x106ac201u);
  /* 106ac201 cmp dword ptr [0x106cf80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac208 je 0x106ac228 */
  if (C.zf) goto L_106ac228;
  /* 106ac20a push 0x106cf81c */
  push32((uint32_t)(0x106cf81cu));
  /* 106ac20f call dword ptr [0x106d12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c8))), 0x106ac215u);
  /* 106ac215 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106ac217 call 0x106a6d00 */
  push32(0x106ac21cu); f_106a6d00();
  /* 106ac21c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac21f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106ac226 jmp 0x106ac22f */
  goto L_106ac22f;
L_106ac228:;
  /* 106ac228 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106ac22f:;
  /* 106ac22f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 106ac233 push eax */
  push32((uint32_t)(EAX));
  /* 106ac234 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac237 push ecx */
  push32((uint32_t)(ECX));
  /* 106ac238 call 0x106ac270 */
  push32(0x106ac23du); f_106ac270();
  /* 106ac23d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac240 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ac243 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac247 je 0x106ac255 */
  if (C.zf) goto L_106ac255;
  /* 106ac249 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106ac24b call 0x106a6da0 */
  push32(0x106ac250u); f_106a6da0();
  /* 106ac250 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac253 jmp 0x106ac260 */
  goto L_106ac260;
L_106ac255:;
  /* 106ac255 push 0x106cf81c */
  push32((uint32_t)(0x106cf81cu));
  /* 106ac25a call dword ptr [0x106d12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c8))), 0x106ac260u);
L_106ac260:;
  /* 106ac260 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ac263 mov esp, ebp */
  ESP = (EBP);
  /* 106ac265 pop ebp */
  EBP = (pop32());
  /* 106ac266 ret  */
  ESPCHK(0x106ac1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c270 @ 0x106ac270 (160 bytes, 50 insns) */
void f_106ac270(void) {
  FTRACE(0x106ac270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac270 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac271 mov ebp, esp */
  EBP = (ESP);
  /* 106ac273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ac276 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac27a jne 0x106ac283 */
  if (!C.zf) goto L_106ac283;
  /* 106ac27c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ac27e jmp 0x106ac30c */
  goto L_106ac30c;
L_106ac283:;
  /* 106ac283 cmp dword ptr [0x106cf690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac28a jne 0x106ac2ba */
  if (!C.zf) goto L_106ac2ba;
  /* 106ac28c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ac28f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ac294 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac299 jle 0x106ac2ab */
  if ((C.zf||C.sf!=C.of)) goto L_106ac2ab;
  /* 106ac29b call 0x106ab1d0 */
  push32(0x106ac2a0u); f_106ab1d0();
  /* 106ac2a0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 106ac2a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ac2a9 jmp 0x106ac30c */
  goto L_106ac30c;
L_106ac2ab:;
  /* 106ac2ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac2ae mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 106ac2b1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 106ac2b3 mov eax, 1 */
  EAX = (0x1u);
  /* 106ac2b8 jmp 0x106ac30c */
  goto L_106ac30c;
L_106ac2ba:;
  /* 106ac2ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106ac2c1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 106ac2c4 push eax */
  push32((uint32_t)(EAX));
  /* 106ac2c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ac2c7 mov ecx, dword ptr [0x106cdea4] */
  ECX = (r32((uint32_t)(0x106cdea4)));
  /* 106ac2cd push ecx */
  push32((uint32_t)(ECX));
  /* 106ac2ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac2d1 push edx */
  push32((uint32_t)(EDX));
  /* 106ac2d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ac2d4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 106ac2d7 push eax */
  push32((uint32_t)(EAX));
  /* 106ac2d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106ac2dd mov ecx, dword ptr [0x106cf6a0] */
  ECX = (r32((uint32_t)(0x106cf6a0)));
  /* 106ac2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106ac2e4 call dword ptr [0x106d1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1330))), 0x106ac2eau);
  /* 106ac2ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ac2ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac2f1 je 0x106ac2f9 */
  if (C.zf) goto L_106ac2f9;
  /* 106ac2f3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac2f7 je 0x106ac309 */
  if (C.zf) goto L_106ac309;
L_106ac2f9:;
  /* 106ac2f9 call 0x106ab1d0 */
  push32(0x106ac2feu); f_106ab1d0();
  /* 106ac2fe mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 106ac304 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ac307 jmp 0x106ac30c */
  goto L_106ac30c;
L_106ac309:;
  /* 106ac309 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106ac30c:;
  /* 106ac30c mov esp, ebp */
  ESP = (EBP);
  /* 106ac30e pop ebp */
  EBP = (pop32());
  /* 106ac30f ret  */
  ESPCHK(0x106ac270u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x106ac310 (32 bytes, 18 insns) */
void f_106ac310(void) {
  FTRACE(0x106ac310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac310 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac311 mov ebp, esp */
  EBP = (ESP);
  /* 106ac313 push ebx */
  push32((uint32_t)(EBX));
  /* 106ac314 push esi */
  push32((uint32_t)(ESI));
  /* 106ac315 push edi */
  push32((uint32_t)(EDI));
  /* 106ac316 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac317 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ac319 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ac31b push 0x106ac328 */
  push32((uint32_t)(0x106ac328u));
  /* 106ac320 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 106ac323 call 0x106b3a5c */
  push32(0x106ac328u); f_106b3a5c();
  /* 106ac328 pop ebp */
  EBP = (pop32());
  /* 106ac329 pop edi */
  EDI = (pop32());
  /* 106ac32a pop esi */
  ESI = (pop32());
  /* 106ac32b pop ebx */
  EBX = (pop32());
  /* 106ac32c mov esp, ebp */
  ESP = (EBP);
  /* 106ac32e pop ebp */
  EBP = (pop32());
  /* 106ac32f ret  */
  ESPCHK(0x106ac310u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x106ac352 (104 bytes, 33 insns) */
void f_106ac352(void) {
  FTRACE(0x106ac352u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac352 push ebx */
  push32((uint32_t)(EBX));
  /* 106ac353 push esi */
  push32((uint32_t)(ESI));
  /* 106ac354 push edi */
  push32((uint32_t)(EDI));
  /* 106ac355 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 106ac359 push eax */
  push32((uint32_t)(EAX));
  /* 106ac35a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 106ac35c push 0x106ac330 */
  push32((uint32_t)(0x106ac330u));
  /* 106ac361 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 106ac368 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_106ac36f:;
  /* 106ac36f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 106ac373 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 106ac376 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 106ac379 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac37c je 0x106ac3ac */
  if (C.zf) goto L_106ac3ac;
  /* 106ac37e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac382 je 0x106ac3ac */
  if (C.zf) goto L_106ac3ac;
  /* 106ac384 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 106ac387 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 106ac38a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 106ac38e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 106ac391 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac396 jne 0x106ac3aa */
  if (!C.zf) goto L_106ac3aa;
  /* 106ac398 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 106ac39d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 106ac3a1 call 0x106ac3e6 */
  push32(0x106ac3a6u); f_106ac3e6();
  /* 106ac3a6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x106ac3aau);
L_106ac3aa:;
  /* 106ac3aa jmp 0x106ac36f */
  goto L_106ac36f;
L_106ac3ac:;
  /* 106ac3ac pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 106ac3b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac3b6 pop edi */
  EDI = (pop32());
  /* 106ac3b7 pop esi */
  ESI = (pop32());
  /* 106ac3b8 pop ebx */
  EBX = (pop32());
  /* 106ac3b9 ret  */
  ESPCHK(0x106ac352u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3e6 @ 0x106ac3e6 (24 bytes, 10 insns) */
void f_106ac3e6(void) {
  FTRACE(0x106ac3e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac3e6 push ebx */
  push32((uint32_t)(EBX));
  /* 106ac3e7 push ecx */
  push32((uint32_t)(ECX));
  /* 106ac3e8 mov ebx, 0x106ce3b8 */
  EBX = (0x106ce3b8u);
  /* 106ac3ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac3f0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 106ac3f3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 106ac3f6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 106ac3f9 pop ecx */
  ECX = (pop32());
  /* 106ac3fa pop ebx */
  EBX = (pop32());
  /* 106ac3fb ret 4 */
  ESPCHK(0x106ac3e6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c4c5 @ 0x106ac4c5 (27 bytes, 11 insns) */
void f_106ac4c5(void) {
  FTRACE(0x106ac4c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac4c5 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac4c6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 106ac4ca mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 106ac4cc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 106ac4cf push eax */
  push32((uint32_t)(EAX));
  /* 106ac4d0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 106ac4d3 push eax */
  push32((uint32_t)(EAX));
  /* 106ac4d4 call 0x106ac352 */
  push32(0x106ac4d9u); f_106ac352();
  /* 106ac4d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac4dc pop ebp */
  EBP = (pop32());
  /* 106ac4dd ret 4 */
  ESPCHK(0x106ac4c5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c4e0 @ 0x106ac4e0 (482 bytes, 138 insns) */
void f_106ac4e0(void) {
  FTRACE(0x106ac4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac4e1 mov ebp, esp */
  EBP = (ESP);
  /* 106ac4e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ac4e6 push esi */
  push32((uint32_t)(ESI));
  /* 106ac4e7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 106ac4ee push 0x12 */
  push32((uint32_t)(0x12u));
  /* 106ac4f0 call 0x106a6d00 */
  push32(0x106ac4f5u); f_106a6d00();
  /* 106ac4f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac4f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106ac4ff jmp 0x106ac50a */
  goto L_106ac50a;
L_106ac501:;
  /* 106ac501 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ac504 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac507 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106ac50a:;
  /* 106ac50a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac50e jge 0x106ac6b0 */
  if ((C.sf==C.of)) goto L_106ac6b0;
  /* 106ac514 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ac517 cmp dword ptr [ecx*4 + 0x106d0e60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x106d0e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac51f je 0x106ac616 */
  if (C.zf) goto L_106ac616;
  /* 106ac525 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ac528 mov eax, dword ptr [edx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x106d0e60)));
  /* 106ac52f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ac532 jmp 0x106ac53d */
  goto L_106ac53d;
L_106ac534:;
  /* 106ac534 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac537 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac53a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106ac53d:;
  /* 106ac53d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ac540 mov eax, dword ptr [edx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x106d0e60)));
  /* 106ac547 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac54c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac54f jae 0x106ac606 */
  if (!C.cf) goto L_106ac606;
  /* 106ac555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac558 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106ac55c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106ac55f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ac561 jne 0x106ac601 */
  if (!C.zf) goto L_106ac601;
  /* 106ac567 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac56a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac56e jne 0x106ac5a9 */
  if (!C.zf) goto L_106ac5a9;
  /* 106ac570 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106ac572 call 0x106a6d00 */
  push32(0x106ac577u); f_106a6d00();
  /* 106ac577 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac57a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac57d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac581 jne 0x106ac59f */
  if (!C.zf) goto L_106ac59f;
  /* 106ac583 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac586 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac589 push edx */
  push32((uint32_t)(EDX));
  /* 106ac58a call dword ptr [0x106d1350] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1350))), 0x106ac590u);
  /* 106ac590 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac593 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106ac596 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac599 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac59c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_106ac59f:;
  /* 106ac59f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106ac5a1 call 0x106a6da0 */
  push32(0x106ac5a6u); f_106a6da0();
  /* 106ac5a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ac5a9:;
  /* 106ac5a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac5ac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac5af push eax */
  push32((uint32_t)(EAX));
  /* 106ac5b0 call dword ptr [0x106d1354] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1354))), 0x106ac5b6u);
  /* 106ac5b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac5b9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 106ac5bd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106ac5c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ac5c2 je 0x106ac5d6 */
  if (C.zf) goto L_106ac5d6;
  /* 106ac5c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac5c7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac5ca push eax */
  push32((uint32_t)(EAX));
  /* 106ac5cb call dword ptr [0x106d1358] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1358))), 0x106ac5d1u);
  /* 106ac5d1 jmp 0x106ac534 */
  goto L_106ac534;
L_106ac5d6:;
  /* 106ac5d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac5d9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 106ac5df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ac5e2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ac5e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ac5e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac5eb sub eax, dword ptr [edx*4 + 0x106d0e60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x106d0e60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ac5f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106ac5f3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 106ac5f8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106ac5fa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac5fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ac5ff jmp 0x106ac606 */
  goto L_106ac606;
L_106ac601:;
  /* 106ac601 jmp 0x106ac534 */
  goto L_106ac534;
L_106ac606:;
  /* 106ac606 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac60a je 0x106ac611 */
  if (C.zf) goto L_106ac611;
  /* 106ac60c jmp 0x106ac6b0 */
  goto L_106ac6b0;
L_106ac611:;
  /* 106ac611 jmp 0x106ac6ab */
  goto L_106ac6ab;
L_106ac616:;
  /* 106ac616 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 106ac618 push 0x106caffc */
  push32((uint32_t)(0x106caffcu));
  /* 106ac61d push 2 */
  push32((uint32_t)(0x2u));
  /* 106ac61f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 106ac624 call 0x106a3300 */
  push32(0x106ac629u); f_106a3300();
  /* 106ac629 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac62c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ac62f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac633 je 0x106ac6a9 */
  if (C.zf) goto L_106ac6a9;
  /* 106ac635 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ac638 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac63b mov dword ptr [eax*4 + 0x106d0e60], ecx */
  w32((uint32_t)(EAX*4 + 0x106d0e60), (ECX));
  /* 106ac642 mov edx, dword ptr [0x106d0f9c] */
  EDX = (r32((uint32_t)(0x106d0f9c)));
  /* 106ac648 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac64b mov dword ptr [0x106d0f9c], edx */
  w32((uint32_t)(0x106d0f9c), (EDX));
  /* 106ac651 jmp 0x106ac65c */
  goto L_106ac65c;
L_106ac653:;
  /* 106ac653 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac656 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac659 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106ac65c:;
  /* 106ac65c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ac65f mov edx, dword ptr [ecx*4 + 0x106d0e60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x106d0e60)));
  /* 106ac666 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac66c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac66f jae 0x106ac694 */
  if (!C.cf) goto L_106ac694;
  /* 106ac671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac674 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 106ac678 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac67b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 106ac681 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac684 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 106ac688 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ac68b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 106ac692 jmp 0x106ac653 */
  goto L_106ac653;
L_106ac694:;
  /* 106ac694 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ac697 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ac69a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ac69d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ac6a0 push edx */
  push32((uint32_t)(EDX));
  /* 106ac6a1 call 0x106ac9f0 */
  push32(0x106ac6a6u); f_106ac9f0();
  /* 106ac6a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ac6a9:;
  /* 106ac6a9 jmp 0x106ac6b0 */
  goto L_106ac6b0;
L_106ac6ab:;
  /* 106ac6ab jmp 0x106ac501 */
  goto L_106ac501;
L_106ac6b0:;
  /* 106ac6b0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 106ac6b2 call 0x106a6da0 */
  push32(0x106ac6b7u); f_106a6da0();
  /* 106ac6b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac6ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ac6bd pop esi */
  ESI = (pop32());
  /* 106ac6be mov esp, ebp */
  ESP = (EBP);
  /* 106ac6c0 pop ebp */
  EBP = (pop32());
  /* 106ac6c1 ret  */
  ESPCHK(0x106ac4e0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x106ac6d0 (183 bytes, 57 insns) */
void f_106ac6d0(void) {
  FTRACE(0x106ac6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac6d1 mov ebp, esp */
  EBP = (ESP);
  /* 106ac6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 106ac6d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac6d7 cmp eax, dword ptr [0x106d0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106d0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac6dd jae 0x106ac76a */
  if (!C.cf) goto L_106ac76a;
  /* 106ac6e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac6e6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ac6e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac6ec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ac6ef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ac6f2 mov eax, dword ptr [ecx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x106d0e60)));
  /* 106ac6f9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac6fd jne 0x106ac76a */
  if (!C.zf) goto L_106ac76a;
  /* 106ac6ff cmp dword ptr [0x106cf484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac706 jne 0x106ac74a */
  if (!C.zf) goto L_106ac74a;
  /* 106ac708 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac70b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106ac70e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac712 je 0x106ac722 */
  if (C.zf) goto L_106ac722;
  /* 106ac714 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac718 je 0x106ac730 */
  if (C.zf) goto L_106ac730;
  /* 106ac71a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac71e je 0x106ac73e */
  if (C.zf) goto L_106ac73e;
  /* 106ac720 jmp 0x106ac74a */
  goto L_106ac74a;
L_106ac722:;
  /* 106ac722 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ac725 push edx */
  push32((uint32_t)(EDX));
  /* 106ac726 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 106ac728 call dword ptr [0x106d12a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12a0))), 0x106ac72eu);
  /* 106ac72e jmp 0x106ac74a */
  goto L_106ac74a;
L_106ac730:;
  /* 106ac730 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ac733 push eax */
  push32((uint32_t)(EAX));
  /* 106ac734 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 106ac736 call dword ptr [0x106d12a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12a0))), 0x106ac73cu);
  /* 106ac73c jmp 0x106ac74a */
  goto L_106ac74a;
L_106ac73e:;
  /* 106ac73e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ac741 push ecx */
  push32((uint32_t)(ECX));
  /* 106ac742 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 106ac744 call dword ptr [0x106d12a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12a0))), 0x106ac74au);
L_106ac74a:;
  /* 106ac74a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac74d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 106ac750 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac753 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 106ac756 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ac759 mov ecx, dword ptr [edx*4 + 0x106d0e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x106d0e60)));
  /* 106ac760 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ac763 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 106ac766 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ac768 jmp 0x106ac783 */
  goto L_106ac783;
L_106ac76a:;
  /* 106ac76a call 0x106ab1d0 */
  push32(0x106ac76fu); f_106ab1d0();
  /* 106ac76f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106ac775 call 0x106ab1e0 */
  push32(0x106ac77au); f_106ab1e0();
  /* 106ac77a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106ac780 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106ac783:;
  /* 106ac783 mov esp, ebp */
  ESP = (EBP);
  /* 106ac785 pop ebp */
  EBP = (pop32());
  /* 106ac786 ret  */
  ESPCHK(0x106ac6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c790 @ 0x106ac790 (216 bytes, 63 insns) */
void f_106ac790(void) {
  FTRACE(0x106ac790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac790 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac791 mov ebp, esp */
  EBP = (ESP);
  /* 106ac793 push ecx */
  push32((uint32_t)(ECX));
  /* 106ac794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac797 cmp eax, dword ptr [0x106d0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106d0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac79d jae 0x106ac84b */
  if (!C.cf) goto L_106ac84b;
  /* 106ac7a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac7a6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ac7a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac7ac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ac7af imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ac7b2 mov eax, dword ptr [ecx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x106d0e60)));
  /* 106ac7b9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106ac7be and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106ac7c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ac7c3 je 0x106ac84b */
  if (C.zf) goto L_106ac84b;
  /* 106ac7c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac7cc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 106ac7cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac7d2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 106ac7d5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ac7d8 mov ecx, dword ptr [edx*4 + 0x106d0e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x106d0e60)));
  /* 106ac7df cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac7e3 je 0x106ac84b */
  if (C.zf) goto L_106ac84b;
  /* 106ac7e5 cmp dword ptr [0x106cf484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac7ec jne 0x106ac82a */
  if (!C.zf) goto L_106ac82a;
  /* 106ac7ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac7f1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106ac7f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac7f8 je 0x106ac808 */
  if (C.zf) goto L_106ac808;
  /* 106ac7fa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac7fe je 0x106ac814 */
  if (C.zf) goto L_106ac814;
  /* 106ac800 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac804 je 0x106ac820 */
  if (C.zf) goto L_106ac820;
  /* 106ac806 jmp 0x106ac82a */
  goto L_106ac82a;
L_106ac808:;
  /* 106ac808 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ac80a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 106ac80c call dword ptr [0x106d12a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12a0))), 0x106ac812u);
  /* 106ac812 jmp 0x106ac82a */
  goto L_106ac82a;
L_106ac814:;
  /* 106ac814 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ac816 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 106ac818 call dword ptr [0x106d12a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12a0))), 0x106ac81eu);
  /* 106ac81e jmp 0x106ac82a */
  goto L_106ac82a;
L_106ac820:;
  /* 106ac820 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ac822 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 106ac824 call dword ptr [0x106d12a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12a0))), 0x106ac82au);
L_106ac82a:;
  /* 106ac82a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac82d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ac830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac833 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106ac836 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ac839 mov edx, dword ptr [eax*4 + 0x106d0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x106d0e60)));
  /* 106ac840 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 106ac847 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ac849 jmp 0x106ac864 */
  goto L_106ac864;
L_106ac84b:;
  /* 106ac84b call 0x106ab1d0 */
  push32(0x106ac850u); f_106ab1d0();
  /* 106ac850 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106ac856 call 0x106ab1e0 */
  push32(0x106ac85bu); f_106ab1e0();
  /* 106ac85b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106ac861 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106ac864:;
  /* 106ac864 mov esp, ebp */
  ESP = (EBP);
  /* 106ac866 pop ebp */
  EBP = (pop32());
  /* 106ac867 ret  */
  ESPCHK(0x106ac790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c870 @ 0x106ac870 (102 bytes, 30 insns) */
void f_106ac870(void) {
  FTRACE(0x106ac870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac870 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac871 mov ebp, esp */
  EBP = (ESP);
  /* 106ac873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac876 cmp eax, dword ptr [0x106d0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106d0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac87c jae 0x106ac8bb */
  if (!C.cf) goto L_106ac8bb;
  /* 106ac87e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac881 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ac884 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac887 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ac88a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ac88d mov eax, dword ptr [ecx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x106d0e60)));
  /* 106ac894 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106ac899 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106ac89c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ac89e je 0x106ac8bb */
  if (C.zf) goto L_106ac8bb;
  /* 106ac8a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac8a3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 106ac8a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac8a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 106ac8ac imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ac8af mov ecx, dword ptr [edx*4 + 0x106d0e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x106d0e60)));
  /* 106ac8b6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 106ac8b9 jmp 0x106ac8d4 */
  goto L_106ac8d4;
L_106ac8bb:;
  /* 106ac8bb call 0x106ab1d0 */
  push32(0x106ac8c0u); f_106ab1d0();
  /* 106ac8c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106ac8c6 call 0x106ab1e0 */
  push32(0x106ac8cbu); f_106ab1e0();
  /* 106ac8cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106ac8d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106ac8d4:;
  /* 106ac8d4 pop ebp */
  EBP = (pop32());
  /* 106ac8d5 ret  */
  ESPCHK(0x106ac870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8e0 @ 0x106ac8e0 (260 bytes, 83 insns) */
void f_106ac8e0(void) {
  FTRACE(0x106ac8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac8e1 mov ebp, esp */
  EBP = (ESP);
  /* 106ac8e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ac8e6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 106ac8ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ac8ed and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 106ac8f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ac8f2 je 0x106ac8fd */
  if (C.zf) goto L_106ac8fd;
  /* 106ac8f4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 106ac8f7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 106ac8fa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_106ac8fd:;
  /* 106ac8fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ac900 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 106ac906 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ac908 je 0x106ac912 */
  if (C.zf) goto L_106ac912;
  /* 106ac90a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 106ac90d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 106ac90f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_106ac912:;
  /* 106ac912 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ac915 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 106ac91b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ac91d je 0x106ac928 */
  if (C.zf) goto L_106ac928;
  /* 106ac91f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 106ac922 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 106ac925 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_106ac928:;
  /* 106ac928 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac92b push eax */
  push32((uint32_t)(EAX));
  /* 106ac92c call dword ptr [0x106d1310] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1310))), 0x106ac932u);
  /* 106ac932 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ac935 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac939 jne 0x106ac952 */
  if (!C.zf) goto L_106ac952;
  /* 106ac93b call dword ptr [0x106d1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1304))), 0x106ac941u);
  /* 106ac941 push eax */
  push32((uint32_t)(EAX));
  /* 106ac942 call 0x106ab130 */
  push32(0x106ac947u); f_106ab130();
  /* 106ac947 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac94a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ac94d jmp 0x106ac9e0 */
  goto L_106ac9e0;
L_106ac952:;
  /* 106ac952 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac956 jne 0x106ac963 */
  if (!C.zf) goto L_106ac963;
  /* 106ac958 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 106ac95b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 106ac95e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 106ac961 jmp 0x106ac972 */
  goto L_106ac972;
L_106ac963:;
  /* 106ac963 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac967 jne 0x106ac972 */
  if (!C.zf) goto L_106ac972;
  /* 106ac969 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 106ac96c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 106ac96f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_106ac972:;
  /* 106ac972 call 0x106ac4e0 */
  push32(0x106ac977u); f_106ac4e0();
  /* 106ac977 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ac97a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ac97e jne 0x106ac99b */
  if (!C.zf) goto L_106ac99b;
  /* 106ac980 call 0x106ab1d0 */
  push32(0x106ac985u); f_106ab1d0();
  /* 106ac985 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 106ac98b call 0x106ab1e0 */
  push32(0x106ac990u); f_106ab1e0();
  /* 106ac990 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106ac996 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ac999 jmp 0x106ac9e0 */
  goto L_106ac9e0;
L_106ac99b:;
  /* 106ac99b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac99e push eax */
  push32((uint32_t)(EAX));
  /* 106ac99f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ac9a2 push ecx */
  push32((uint32_t)(ECX));
  /* 106ac9a3 call 0x106ac6d0 */
  push32(0x106ac9a8u); f_106ac6d0();
  /* 106ac9a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac9ab mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 106ac9ae or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 106ac9b1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 106ac9b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ac9b7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ac9ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ac9bd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106ac9c0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ac9c3 mov edx, dword ptr [eax*4 + 0x106d0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x106d0e60)));
  /* 106ac9ca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 106ac9cd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 106ac9d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ac9d4 push ecx */
  push32((uint32_t)(ECX));
  /* 106ac9d5 call 0x106aca80 */
  push32(0x106ac9dau); f_106aca80();
  /* 106ac9da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ac9dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_106ac9e0:;
  /* 106ac9e0 mov esp, ebp */
  ESP = (EBP);
  /* 106ac9e2 pop ebp */
  EBP = (pop32());
  /* 106ac9e3 ret  */
  ESPCHK(0x106ac8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9f0 @ 0x106ac9f0 (134 bytes, 44 insns) */
void f_106ac9f0(void) {
  FTRACE(0x106ac9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ac9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ac9f1 mov ebp, esp */
  EBP = (ESP);
  /* 106ac9f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106ac9f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac9f7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ac9fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ac9fd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106aca00 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106aca03 mov edx, dword ptr [eax*4 + 0x106d0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x106d0e60)));
  /* 106aca0a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aca0c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106aca0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aca12 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aca16 jne 0x106aca51 */
  if (!C.zf) goto L_106aca51;
  /* 106aca18 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106aca1a call 0x106a6d00 */
  push32(0x106aca1fu); f_106a6d00();
  /* 106aca1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aca22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aca25 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aca29 jne 0x106aca47 */
  if (!C.zf) goto L_106aca47;
  /* 106aca2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aca2e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aca31 push edx */
  push32((uint32_t)(EDX));
  /* 106aca32 call dword ptr [0x106d1350] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1350))), 0x106aca38u);
  /* 106aca38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aca3b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106aca3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aca41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aca44 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_106aca47:;
  /* 106aca47 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106aca49 call 0x106a6da0 */
  push32(0x106aca4eu); f_106a6da0();
  /* 106aca4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106aca51:;
  /* 106aca51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aca54 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106aca57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aca5a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106aca5d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106aca60 mov edx, dword ptr [eax*4 + 0x106d0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x106d0e60)));
  /* 106aca67 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 106aca6b push eax */
  push32((uint32_t)(EAX));
  /* 106aca6c call dword ptr [0x106d1354] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1354))), 0x106aca72u);
  /* 106aca72 mov esp, ebp */
  ESP = (EBP);
  /* 106aca74 pop ebp */
  EBP = (pop32());
  /* 106aca75 ret  */
  ESPCHK(0x106ac9f0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x106aca80 (38 bytes, 13 insns) */
void f_106aca80(void) {
  FTRACE(0x106aca80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106aca80 push ebp */
  push32((uint32_t)(EBP));
  /* 106aca81 mov ebp, esp */
  EBP = (ESP);
  /* 106aca83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aca86 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106aca89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aca8c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106aca8f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106aca92 mov edx, dword ptr [eax*4 + 0x106d0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x106d0e60)));
  /* 106aca99 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 106aca9d push eax */
  push32((uint32_t)(EAX));
  /* 106aca9e call dword ptr [0x106d1358] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1358))), 0x106acaa4u);
  /* 106acaa4 pop ebp */
  EBP = (pop32());
  /* 106acaa5 ret  */
  ESPCHK(0x106aca80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cab0 @ 0x106acab0 (218 bytes, 63 insns) */
void f_106acab0(void) {
  FTRACE(0x106acab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106acab0 push ebp */
  push32((uint32_t)(EBP));
  /* 106acab1 mov ebp, esp */
  EBP = (ESP);
  /* 106acab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106acab6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106acabd push 2 */
  push32((uint32_t)(0x2u));
  /* 106acabf call 0x106a6d00 */
  push32(0x106acac4u); f_106a6d00();
  /* 106acac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acac7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 106acace jmp 0x106acad9 */
  goto L_106acad9;
L_106acad0:;
  /* 106acad0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acad3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106acad6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106acad9:;
  /* 106acad9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acadc cmp ecx, dword ptr [0x106d0b60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106d0b60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acae2 jge 0x106acb79 */
  if ((C.sf==C.of)) goto L_106acb79;
  /* 106acae8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acaeb mov eax, dword ptr [0x106cf820] */
  EAX = (r32((uint32_t)(0x106cf820)));
  /* 106acaf0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acaf4 je 0x106acb74 */
  if (C.zf) goto L_106acb74;
  /* 106acaf6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acaf9 mov edx, dword ptr [0x106cf820] */
  EDX = (r32((uint32_t)(0x106cf820)));
  /* 106acaff mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 106acb02 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106acb05 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 106acb0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106acb0d je 0x106acb31 */
  if (C.zf) goto L_106acb31;
  /* 106acb0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acb12 mov eax, dword ptr [0x106cf820] */
  EAX = (r32((uint32_t)(0x106cf820)));
  /* 106acb17 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 106acb1a push ecx */
  push32((uint32_t)(ECX));
  /* 106acb1b call 0x106ad8a0 */
  push32(0x106acb20u); f_106ad8a0();
  /* 106acb20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acb23 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acb26 je 0x106acb31 */
  if (C.zf) goto L_106acb31;
  /* 106acb28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106acb2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106acb2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106acb31:;
  /* 106acb31 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acb35 jl 0x106acb74 */
  if ((C.sf!=C.of)) goto L_106acb74;
  /* 106acb37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acb3a mov ecx, dword ptr [0x106cf820] */
  ECX = (r32((uint32_t)(0x106cf820)));
  /* 106acb40 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106acb43 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106acb46 push edx */
  push32((uint32_t)(EDX));
  /* 106acb47 call dword ptr [0x106d125c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d125c))), 0x106acb4du);
  /* 106acb4d push 2 */
  push32((uint32_t)(0x2u));
  /* 106acb4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acb52 mov ecx, dword ptr [0x106cf820] */
  ECX = (r32((uint32_t)(0x106cf820)));
  /* 106acb58 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106acb5b push edx */
  push32((uint32_t)(EDX));
  /* 106acb5c call 0x106a3d90 */
  push32(0x106acb61u); f_106a3d90();
  /* 106acb61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acb64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acb67 mov ecx, dword ptr [0x106cf820] */
  ECX = (r32((uint32_t)(0x106cf820)));
  /* 106acb6d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_106acb74:;
  /* 106acb74 jmp 0x106acad0 */
  goto L_106acad0;
L_106acb79:;
  /* 106acb79 push 2 */
  push32((uint32_t)(0x2u));
  /* 106acb7b call 0x106a6da0 */
  push32(0x106acb80u); f_106a6da0();
  /* 106acb80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acb83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106acb86 mov esp, ebp */
  ESP = (EBP);
  /* 106acb88 pop ebp */
  EBP = (pop32());
  /* 106acb89 ret  */
  ESPCHK(0x106acab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb90 @ 0x106acb90 (68 bytes, 26 insns) */
void f_106acb90(void) {
  FTRACE(0x106acb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106acb90 push ebp */
  push32((uint32_t)(EBP));
  /* 106acb91 mov ebp, esp */
  EBP = (ESP);
  /* 106acb93 push ecx */
  push32((uint32_t)(ECX));
  /* 106acb94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acb98 jne 0x106acba6 */
  if (!C.zf) goto L_106acba6;
  /* 106acb9a push 0 */
  push32((uint32_t)(0x0u));
  /* 106acb9c call 0x106acd00 */
  push32(0x106acba1u); f_106acd00();
  /* 106acba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acba4 jmp 0x106acbd0 */
  goto L_106acbd0;
L_106acba6:;
  /* 106acba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106acba9 push eax */
  push32((uint32_t)(EAX));
  /* 106acbaa call 0x106ac110 */
  push32(0x106acbafu); f_106ac110();
  /* 106acbaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acbb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106acbb5 push ecx */
  push32((uint32_t)(ECX));
  /* 106acbb6 call 0x106acbe0 */
  push32(0x106acbbbu); f_106acbe0();
  /* 106acbbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acbbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106acbc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106acbc4 push edx */
  push32((uint32_t)(EDX));
  /* 106acbc5 call 0x106ac180 */
  push32(0x106acbcau); f_106ac180();
  /* 106acbca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acbcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106acbd0:;
  /* 106acbd0 mov esp, ebp */
  ESP = (EBP);
  /* 106acbd2 pop ebp */
  EBP = (pop32());
  /* 106acbd3 ret  */
  ESPCHK(0x106acb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbe0 @ 0x106acbe0 (65 bytes, 26 insns) */
void f_106acbe0(void) {
  FTRACE(0x106acbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106acbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 106acbe1 mov ebp, esp */
  EBP = (ESP);
  /* 106acbe3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106acbe6 push eax */
  push32((uint32_t)(EAX));
  /* 106acbe7 call 0x106acc30 */
  push32(0x106acbecu); f_106acc30();
  /* 106acbec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acbef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106acbf1 je 0x106acbf8 */
  if (C.zf) goto L_106acbf8;
  /* 106acbf3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106acbf6 jmp 0x106acc1f */
  goto L_106acc1f;
L_106acbf8:;
  /* 106acbf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106acbfb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106acbfe and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 106acc04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106acc06 je 0x106acc1d */
  if (C.zf) goto L_106acc1d;
  /* 106acc08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106acc0b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106acc0e push ecx */
  push32((uint32_t)(ECX));
  /* 106acc0f call 0x106ad9f0 */
  push32(0x106acc14u); f_106ad9f0();
  /* 106acc14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acc17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106acc19 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106acc1b jmp 0x106acc1f */
  goto L_106acc1f;
L_106acc1d:;
  /* 106acc1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106acc1f:;
  /* 106acc1f pop ebp */
  EBP = (pop32());
  /* 106acc20 ret  */
  ESPCHK(0x106acbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc30 @ 0x106acc30 (183 bytes, 62 insns) */
void f_106acc30(void) {
  FTRACE(0x106acc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106acc30 push ebp */
  push32((uint32_t)(EBP));
  /* 106acc31 mov ebp, esp */
  EBP = (ESP);
  /* 106acc33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106acc36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106acc3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106acc40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106acc43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acc46 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106acc49 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106acc4c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acc4f jne 0x106acccb */
  if (!C.zf) goto L_106acccb;
  /* 106acc51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acc54 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106acc57 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 106acc5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106acc5f je 0x106acccb */
  if (C.zf) goto L_106acccb;
  /* 106acc61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acc64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acc67 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 106acc69 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106acc6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106acc6f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acc73 jle 0x106acccb */
  if ((C.zf||C.sf!=C.of)) goto L_106acccb;
  /* 106acc75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106acc78 push edx */
  push32((uint32_t)(EDX));
  /* 106acc79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acc7c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106acc7f push ecx */
  push32((uint32_t)(ECX));
  /* 106acc80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acc83 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106acc86 push eax */
  push32((uint32_t)(EAX));
  /* 106acc87 call 0x106abba0 */
  push32(0x106acc8cu); f_106abba0();
  /* 106acc8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acc8f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acc92 jne 0x106accb5 */
  if (!C.zf) goto L_106accb5;
  /* 106acc94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acc97 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106acc9a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 106acca0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106acca2 je 0x106accb3 */
  if (C.zf) goto L_106accb3;
  /* 106acca4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106acca7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106accaa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 106accad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106accb0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_106accb3:;
  /* 106accb3 jmp 0x106acccb */
  goto L_106acccb;
L_106accb5:;
  /* 106accb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106accb8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106accbb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 106accbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106accc1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 106accc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106acccb:;
  /* 106acccb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106accce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106accd1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106accd4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106accd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106accd9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 106acce0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106acce3 mov esp, ebp */
  ESP = (EBP);
  /* 106acce5 pop ebp */
  EBP = (pop32());
  /* 106acce6 ret  */
  ESPCHK(0x106acc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccf0 @ 0x106accf0 (15 bytes, 7 insns) */
void f_106accf0(void) {
  FTRACE(0x106accf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106accf0 push ebp */
  push32((uint32_t)(EBP));
  /* 106accf1 mov ebp, esp */
  EBP = (ESP);
  /* 106accf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106accf5 call 0x106acd00 */
  push32(0x106accfau); f_106acd00();
  /* 106accfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106accfd pop ebp */
  EBP = (pop32());
  /* 106accfe ret  */
  ESPCHK(0x106accf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd00 @ 0x106acd00 (319 bytes, 94 insns) */
void f_106acd00(void) {
  FTRACE(0x106acd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106acd00 push ebp */
  push32((uint32_t)(EBP));
  /* 106acd01 mov ebp, esp */
  EBP = (ESP);
  /* 106acd03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106acd06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106acd0d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106acd14 push 2 */
  push32((uint32_t)(0x2u));
  /* 106acd16 call 0x106a6d00 */
  push32(0x106acd1bu); f_106a6d00();
  /* 106acd1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acd1e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106acd25 jmp 0x106acd30 */
  goto L_106acd30;
L_106acd27:;
  /* 106acd27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106acd2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106acd2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106acd30:;
  /* 106acd30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106acd33 cmp ecx, dword ptr [0x106d0b60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106d0b60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acd39 jge 0x106ace23 */
  if ((C.sf==C.of)) goto L_106ace23;
  /* 106acd3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106acd42 mov eax, dword ptr [0x106cf820] */
  EAX = (r32((uint32_t)(0x106cf820)));
  /* 106acd47 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acd4b je 0x106ace1e */
  if (C.zf) goto L_106ace1e;
  /* 106acd51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106acd54 mov edx, dword ptr [0x106cf820] */
  EDX = (r32((uint32_t)(0x106cf820)));
  /* 106acd5a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 106acd5d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106acd60 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 106acd66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106acd68 je 0x106ace1e */
  if (C.zf) goto L_106ace1e;
  /* 106acd6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106acd71 mov eax, dword ptr [0x106cf820] */
  EAX = (r32((uint32_t)(0x106cf820)));
  /* 106acd76 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 106acd79 push ecx */
  push32((uint32_t)(ECX));
  /* 106acd7a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106acd7d push edx */
  push32((uint32_t)(EDX));
  /* 106acd7e call 0x106ac150 */
  push32(0x106acd83u); f_106ac150();
  /* 106acd83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acd86 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106acd89 mov ecx, dword ptr [0x106cf820] */
  ECX = (r32((uint32_t)(0x106cf820)));
  /* 106acd8f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106acd92 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106acd95 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 106acd9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106acd9c je 0x106ace05 */
  if (C.zf) goto L_106ace05;
  /* 106acd9e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acda2 jne 0x106acdc9 */
  if (!C.zf) goto L_106acdc9;
  /* 106acda4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106acda7 mov edx, dword ptr [0x106cf820] */
  EDX = (r32((uint32_t)(0x106cf820)));
  /* 106acdad mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 106acdb0 push eax */
  push32((uint32_t)(EAX));
  /* 106acdb1 call 0x106acbe0 */
  push32(0x106acdb6u); f_106acbe0();
  /* 106acdb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acdb9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acdbc je 0x106acdc7 */
  if (C.zf) goto L_106acdc7;
  /* 106acdbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106acdc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106acdc4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106acdc7:;
  /* 106acdc7 jmp 0x106ace05 */
  goto L_106ace05;
L_106acdc9:;
  /* 106acdc9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acdcd jne 0x106ace05 */
  if (!C.zf) goto L_106ace05;
  /* 106acdcf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106acdd2 mov eax, dword ptr [0x106cf820] */
  EAX = (r32((uint32_t)(0x106cf820)));
  /* 106acdd7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 106acdda mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106acddd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 106acde0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106acde2 je 0x106ace05 */
  if (C.zf) goto L_106ace05;
  /* 106acde4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106acde7 mov ecx, dword ptr [0x106cf820] */
  ECX = (r32((uint32_t)(0x106cf820)));
  /* 106acded mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106acdf0 push edx */
  push32((uint32_t)(EDX));
  /* 106acdf1 call 0x106acbe0 */
  push32(0x106acdf6u); f_106acbe0();
  /* 106acdf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acdf9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acdfc jne 0x106ace05 */
  if (!C.zf) goto L_106ace05;
  /* 106acdfe mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_106ace05:;
  /* 106ace05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ace08 mov ecx, dword ptr [0x106cf820] */
  ECX = (r32((uint32_t)(0x106cf820)));
  /* 106ace0e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106ace11 push edx */
  push32((uint32_t)(EDX));
  /* 106ace12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ace15 push eax */
  push32((uint32_t)(EAX));
  /* 106ace16 call 0x106ac1c0 */
  push32(0x106ace1bu); f_106ac1c0();
  /* 106ace1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ace1e:;
  /* 106ace1e jmp 0x106acd27 */
  goto L_106acd27;
L_106ace23:;
  /* 106ace23 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ace25 call 0x106a6da0 */
  push32(0x106ace2au); f_106a6da0();
  /* 106ace2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ace2d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ace31 jne 0x106ace38 */
  if (!C.zf) goto L_106ace38;
  /* 106ace33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ace36 jmp 0x106ace3b */
  goto L_106ace3b;
L_106ace38:;
  /* 106ace38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_106ace3b:;
  /* 106ace3b mov esp, ebp */
  ESP = (EBP);
  /* 106ace3d pop ebp */
  EBP = (pop32());
  /* 106ace3e ret  */
  ESPCHK(0x106acd00u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x106ace40 (15 bytes, 7 insns) */
void f_106ace40(void) {
  FTRACE(0x106ace40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ace40 push ebp */
  push32((uint32_t)(EBP));
  /* 106ace41 mov ebp, esp */
  EBP = (ESP);
  /* 106ace43 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ace45 call 0x106a2270 */
  push32(0x106ace4au); f_106a2270();
  /* 106ace4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ace4d pop ebp */
  EBP = (pop32());
  /* 106ace4e ret  */
  ESPCHK(0x106ace40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce50 @ 0x106ace50 (1007 bytes, 269 insns) */
void f_106ace50(void) {
  FTRACE(0x106ace50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ace50 push ebp */
  push32((uint32_t)(EBP));
  /* 106ace51 mov ebp, esp */
  EBP = (ESP);
  /* 106ace53 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ace59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ace5d jl 0x106ace65 */
  if ((C.sf!=C.of)) goto L_106ace65;
  /* 106ace5f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ace63 jle 0x106ace6c */
  if ((C.zf||C.sf!=C.of)) goto L_106ace6c;
L_106ace65:;
  /* 106ace65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ace67 jmp 0x106ad23b */
  goto L_106ad23b;
L_106ace6c:;
  /* 106ace6c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106ace6e call 0x106a6d00 */
  push32(0x106ace73u); f_106a6d00();
  /* 106ace73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ace76 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106ace7d mov eax, dword ptr [0x106cf80c] */
  EAX = (r32((uint32_t)(0x106cf80c)));
  /* 106ace82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ace85 mov dword ptr [0x106cf80c], eax */
  w32((uint32_t)(0x106cf80c), (EAX));
L_106ace8a:;
  /* 106ace8a cmp dword ptr [0x106cf81c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf81c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ace91 je 0x106ace9d */
  if (C.zf) goto L_106ace9d;
  /* 106ace93 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ace95 call dword ptr [0x106d1290] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1290))), 0x106ace9bu);
  /* 106ace9b jmp 0x106ace8a */
  goto L_106ace8a;
L_106ace9d:;
  /* 106ace9d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acea1 je 0x106acee1 */
  if (C.zf) goto L_106acee1;
  /* 106acea3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acea7 je 0x106acec1 */
  if (C.zf) goto L_106acec1;
  /* 106acea9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106aceac push ecx */
  push32((uint32_t)(ECX));
  /* 106acead mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aceb0 push edx */
  push32((uint32_t)(EDX));
  /* 106aceb1 call 0x106ad240 */
  push32(0x106aceb6u); f_106ad240();
  /* 106aceb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aceb9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 106acebf jmp 0x106aced3 */
  goto L_106aced3;
L_106acec1:;
  /* 106acec1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106acec4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106acec7 mov ecx, dword ptr [eax + 0x106ce4dc] */
  ECX = (r32((uint32_t)(EAX + 0x106ce4dc)));
  /* 106acecd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_106aced3:;
  /* 106aced3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 106aced9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106acedc jmp 0x106ad21b */
  goto L_106ad21b;
L_106acee1:;
  /* 106acee1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 106acee8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106aceef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acef3 je 0x106ad213 */
  if (C.zf) goto L_106ad213;
  /* 106acef9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106acefc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106aceff cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acf02 jne 0x106ad124 */
  if (!C.zf) goto L_106ad124;
  /* 106acf08 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106acf0b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 106acf0f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acf12 jne 0x106ad124 */
  if (!C.zf) goto L_106ad124;
  /* 106acf18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106acf1b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 106acf1f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acf22 jne 0x106ad124 */
  if (!C.zf) goto L_106ad124;
  /* 106acf28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106acf2b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_106acf31:;
  /* 106acf31 push 0x106cb04c */
  push32((uint32_t)(0x106cb04cu));
  /* 106acf36 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106acf3c push ecx */
  push32((uint32_t)(ECX));
  /* 106acf3d call 0x106af0a0 */
  push32(0x106acf42u); f_106af0a0();
  /* 106acf42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acf45 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 106acf4b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acf52 je 0x106acf7d */
  if (C.zf) goto L_106acf7d;
  /* 106acf54 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106acf5a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106acf60 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 106acf66 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acf6d je 0x106acf7d */
  if (C.zf) goto L_106acf7d;
  /* 106acf6f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106acf75 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106acf78 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acf7b jne 0x106acfa3 */
  if (!C.zf) goto L_106acfa3;
L_106acf7d:;
  /* 106acf7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acf81 je 0x106acf9c */
  if (C.zf) goto L_106acf9c;
  /* 106acf83 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106acf85 call 0x106a6da0 */
  push32(0x106acf8au); f_106a6da0();
  /* 106acf8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acf8d mov edx, dword ptr [0x106cf80c] */
  EDX = (r32((uint32_t)(0x106cf80c)));
  /* 106acf93 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106acf96 mov dword ptr [0x106cf80c], edx */
  w32((uint32_t)(0x106cf80c), (EDX));
L_106acf9c:;
  /* 106acf9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106acf9e jmp 0x106ad23b */
  goto L_106ad23b;
L_106acfa3:;
  /* 106acfa3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 106acfaa jmp 0x106acfb5 */
  goto L_106acfb5;
L_106acfac:;
  /* 106acfac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106acfaf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106acfb2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_106acfb5:;
  /* 106acfb5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acfb9 jg 0x106ad003 */
  if ((!C.zf&&C.sf==C.of)) goto L_106ad003;
  /* 106acfbb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 106acfc1 push ecx */
  push32((uint32_t)(ECX));
  /* 106acfc2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106acfc8 push edx */
  push32((uint32_t)(EDX));
  /* 106acfc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106acfcc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106acfcf mov ecx, dword ptr [eax + 0x106ce4d8] */
  ECX = (r32((uint32_t)(EAX + 0x106ce4d8)));
  /* 106acfd5 push ecx */
  push32((uint32_t)(ECX));
  /* 106acfd6 call 0x106af060 */
  push32(0x106acfdbu); f_106af060();
  /* 106acfdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acfde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106acfe0 jne 0x106ad001 */
  if (!C.zf) goto L_106ad001;
  /* 106acfe2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106acfe5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106acfe8 mov eax, dword ptr [edx + 0x106ce4d8] */
  EAX = (r32((uint32_t)(EDX + 0x106ce4d8)));
  /* 106acfee push eax */
  push32((uint32_t)(EAX));
  /* 106acfef call 0x106a6130 */
  push32(0x106acff4u); f_106a6130();
  /* 106acff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106acff7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106acffd jne 0x106ad001 */
  if (!C.zf) goto L_106ad001;
  /* 106acfff jmp 0x106ad003 */
  goto L_106ad003;
L_106ad001:;
  /* 106ad001 jmp 0x106acfac */
  goto L_106acfac;
L_106ad003:;
  /* 106ad003 push 0x106cb048 */
  push32((uint32_t)(0x106cb048u));
  /* 106ad008 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ad00e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad011 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 106ad017 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ad01d push edx */
  push32((uint32_t)(EDX));
  /* 106ad01e call 0x106af020 */
  push32(0x106ad023u); f_106af020();
  /* 106ad023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad026 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 106ad02c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad033 jne 0x106ad069 */
  if (!C.zf) goto L_106ad069;
  /* 106ad035 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ad03b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106ad03e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad041 je 0x106ad069 */
  if (C.zf) goto L_106ad069;
  /* 106ad043 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad047 je 0x106ad062 */
  if (C.zf) goto L_106ad062;
  /* 106ad049 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106ad04b call 0x106a6da0 */
  push32(0x106ad050u); f_106a6da0();
  /* 106ad050 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad053 mov edx, dword ptr [0x106cf80c] */
  EDX = (r32((uint32_t)(0x106cf80c)));
  /* 106ad059 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ad05c mov dword ptr [0x106cf80c], edx */
  w32((uint32_t)(0x106cf80c), (EDX));
L_106ad062:;
  /* 106ad062 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ad064 jmp 0x106ad23b */
  goto L_106ad23b;
L_106ad069:;
  /* 106ad069 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad06d jg 0x106ad0ba */
  if ((!C.zf&&C.sf==C.of)) goto L_106ad0ba;
  /* 106ad06f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 106ad075 push eax */
  push32((uint32_t)(EAX));
  /* 106ad076 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ad07c push ecx */
  push32((uint32_t)(ECX));
  /* 106ad07d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 106ad083 push edx */
  push32((uint32_t)(EDX));
  /* 106ad084 call 0x106a6b20 */
  push32(0x106ad089u); f_106a6b20();
  /* 106ad089 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad08c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 106ad092 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 106ad09a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 106ad0a0 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad0a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ad0a4 push edx */
  push32((uint32_t)(EDX));
  /* 106ad0a5 call 0x106ad240 */
  push32(0x106ad0aau); f_106ad240();
  /* 106ad0aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad0ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad0af je 0x106ad0ba */
  if (C.zf) goto L_106ad0ba;
  /* 106ad0b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ad0b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad0b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106ad0ba:;
  /* 106ad0ba mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ad0c0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad0c6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 106ad0cc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106ad0d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106ad0d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad0d7 je 0x106ad0e8 */
  if (C.zf) goto L_106ad0e8;
  /* 106ad0d9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106ad0df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad0e2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_106ad0e8:;
  /* 106ad0e8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106ad0ee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106ad0f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad0f3 jne 0x106acf31 */
  if (!C.zf) goto L_106acf31;
  /* 106ad0f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad0fd je 0x106ad10c */
  if (C.zf) goto L_106ad10c;
  /* 106ad0ff call 0x106ad3e0 */
  push32(0x106ad104u); f_106ad3e0();
  /* 106ad104 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 106ad10a jmp 0x106ad116 */
  goto L_106ad116;
L_106ad10c:;
  /* 106ad10c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_106ad116:;
  /* 106ad116 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 106ad11c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ad11f jmp 0x106ad211 */
  goto L_106ad211;
L_106ad124:;
  /* 106ad124 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad127 push edx */
  push32((uint32_t)(EDX));
  /* 106ad128 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ad12a push 0 */
  push32((uint32_t)(0x0u));
  /* 106ad12c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 106ad132 push eax */
  push32((uint32_t)(EAX));
  /* 106ad133 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad136 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad137 call 0x106ad4e0 */
  push32(0x106ad13cu); f_106ad4e0();
  /* 106ad13c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad13f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ad142 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad146 je 0x106ad211 */
  if (C.zf) goto L_106ad211;
  /* 106ad14c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106ad153 jmp 0x106ad15e */
  goto L_106ad15e;
L_106ad155:;
  /* 106ad155 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ad158 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad15b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106ad15e:;
  /* 106ad15e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad162 jg 0x106ad1c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_106ad1c0;
  /* 106ad164 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad168 je 0x106ad1be */
  if (C.zf) goto L_106ad1be;
  /* 106ad16a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ad16d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ad170 mov ecx, dword ptr [eax + 0x106ce4dc] */
  ECX = (r32((uint32_t)(EAX + 0x106ce4dc)));
  /* 106ad176 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad177 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 106ad17d push edx */
  push32((uint32_t)(EDX));
  /* 106ad17e call 0x106aef90 */
  push32(0x106ad183u); f_106aef90();
  /* 106ad183 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad186 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad188 je 0x106ad1b5 */
  if (C.zf) goto L_106ad1b5;
  /* 106ad18a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 106ad190 push eax */
  push32((uint32_t)(EAX));
  /* 106ad191 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106ad194 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad195 call 0x106ad240 */
  push32(0x106ad19au); f_106ad240();
  /* 106ad19a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad19d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad19f je 0x106ad1ac */
  if (C.zf) goto L_106ad1ac;
  /* 106ad1a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ad1a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad1a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106ad1aa jmp 0x106ad1b3 */
  goto L_106ad1b3;
L_106ad1ac:;
  /* 106ad1ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_106ad1b3:;
  /* 106ad1b3 jmp 0x106ad1be */
  goto L_106ad1be;
L_106ad1b5:;
  /* 106ad1b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ad1b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad1bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106ad1be:;
  /* 106ad1be jmp 0x106ad155 */
  goto L_106ad155;
L_106ad1c0:;
  /* 106ad1c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad1c4 je 0x106ad1eb */
  if (C.zf) goto L_106ad1eb;
  /* 106ad1c6 call 0x106ad3e0 */
  push32(0x106ad1cbu); f_106ad3e0();
  /* 106ad1cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ad1ce push 2 */
  push32((uint32_t)(0x2u));
  /* 106ad1d0 mov ecx, dword ptr [0x106ce4dc] */
  ECX = (r32((uint32_t)(0x106ce4dc)));
  /* 106ad1d6 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad1d7 call 0x106a3d90 */
  push32(0x106ad1dcu); f_106a3d90();
  /* 106ad1dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad1df mov dword ptr [0x106ce4dc], 0 */
  w32((uint32_t)(0x106ce4dc), (0x0u));
  /* 106ad1e9 jmp 0x106ad211 */
  goto L_106ad211;
L_106ad1eb:;
  /* 106ad1eb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad1ef je 0x106ad1fe */
  if (C.zf) goto L_106ad1fe;
  /* 106ad1f1 call 0x106ad3e0 */
  push32(0x106ad1f6u); f_106ad3e0();
  /* 106ad1f6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 106ad1fc jmp 0x106ad208 */
  goto L_106ad208;
L_106ad1fe:;
  /* 106ad1fe mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_106ad208:;
  /* 106ad208 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 106ad20e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106ad211:;
  /* 106ad211 jmp 0x106ad21b */
  goto L_106ad21b;
L_106ad213:;
  /* 106ad213 call 0x106ad3e0 */
  push32(0x106ad218u); f_106ad3e0();
  /* 106ad218 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106ad21b:;
  /* 106ad21b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad21f je 0x106ad238 */
  if (C.zf) goto L_106ad238;
  /* 106ad221 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 106ad223 call 0x106a6da0 */
  push32(0x106ad228u); f_106a6da0();
  /* 106ad228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad22b mov eax, dword ptr [0x106cf80c] */
  EAX = (r32((uint32_t)(0x106cf80c)));
  /* 106ad230 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ad233 mov dword ptr [0x106cf80c], eax */
  w32((uint32_t)(0x106cf80c), (EAX));
L_106ad238:;
  /* 106ad238 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_106ad23b:;
  /* 106ad23b mov esp, ebp */
  ESP = (EBP);
  /* 106ad23d pop ebp */
  EBP = (pop32());
  /* 106ad23e ret  */
  ESPCHK(0x106ace50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d240 @ 0x106ad240 (403 bytes, 117 insns) */
void f_106ad240(void) {
  FTRACE(0x106ad240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ad240 push ebp */
  push32((uint32_t)(EBP));
  /* 106ad241 mov ebp, esp */
  EBP = (ESP);
  /* 106ad243 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ad249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad24c push eax */
  push32((uint32_t)(EAX));
  /* 106ad24d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 106ad253 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad254 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 106ad25a push edx */
  push32((uint32_t)(EDX));
  /* 106ad25b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 106ad261 push eax */
  push32((uint32_t)(EAX));
  /* 106ad262 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad265 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad266 call 0x106ad4e0 */
  push32(0x106ad26bu); f_106ad4e0();
  /* 106ad26b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad26e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad270 jne 0x106ad279 */
  if (!C.zf) goto L_106ad279;
  /* 106ad272 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ad274 jmp 0x106ad3cf */
  goto L_106ad3cf;
L_106ad279:;
  /* 106ad279 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 106ad27e push 0x106cb050 */
  push32((uint32_t)(0x106cb050u));
  /* 106ad283 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ad285 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 106ad28b push edx */
  push32((uint32_t)(EDX));
  /* 106ad28c call 0x106a6130 */
  push32(0x106ad291u); f_106a6130();
  /* 106ad291 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad294 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad297 push eax */
  push32((uint32_t)(EAX));
  /* 106ad298 call 0x106a3300 */
  push32(0x106ad29du); f_106a3300();
  /* 106ad29d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad2a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106ad2a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad2a7 jne 0x106ad2b0 */
  if (!C.zf) goto L_106ad2b0;
  /* 106ad2a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ad2ab jmp 0x106ad3cf */
  goto L_106ad3cf;
L_106ad2b0:;
  /* 106ad2b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad2b3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ad2b6 mov ecx, dword ptr [eax + 0x106ce4dc] */
  ECX = (r32((uint32_t)(EAX + 0x106ce4dc)));
  /* 106ad2bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ad2bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad2c2 mov eax, dword ptr [edx*4 + 0x106cf688] */
  EAX = (r32((uint32_t)(EDX*4 + 0x106cf688)));
  /* 106ad2c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ad2cc push 6 */
  push32((uint32_t)(0x6u));
  /* 106ad2ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad2d1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ad2d4 add ecx, 0x106cf6d8 */
  { uint32_t _a=(ECX),_b=(0x106cf6d8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad2da push ecx */
  push32((uint32_t)(ECX));
  /* 106ad2db lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 106ad2de push edx */
  push32((uint32_t)(EDX));
  /* 106ad2df call 0x106a9be0 */
  push32(0x106ad2e4u); f_106a9be0();
  /* 106ad2e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad2e7 mov eax, dword ptr [0x106cf6a0] */
  EAX = (r32((uint32_t)(0x106cf6a0)));
  /* 106ad2ec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106ad2ef lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 106ad2f5 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad2f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ad2f9 push edx */
  push32((uint32_t)(EDX));
  /* 106ad2fa call 0x106a62b0 */
  push32(0x106ad2ffu); f_106a62b0();
  /* 106ad2ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad302 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad305 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ad308 mov dword ptr [ecx + 0x106ce4dc], eax */
  w32((uint32_t)(ECX + 0x106ce4dc), (EAX));
  /* 106ad30e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 106ad314 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106ad31a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad31d mov dword ptr [eax*4 + 0x106cf688], edx */
  w32((uint32_t)(EAX*4 + 0x106cf688), (EDX));
  /* 106ad324 push 6 */
  push32((uint32_t)(0x6u));
  /* 106ad326 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 106ad32c push ecx */
  push32((uint32_t)(ECX));
  /* 106ad32d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad330 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ad333 add edx, 0x106cf6d8 */
  { uint32_t _a=(EDX),_b=(0x106cf6d8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad339 push edx */
  push32((uint32_t)(EDX));
  /* 106ad33a call 0x106a9be0 */
  push32(0x106ad33fu); f_106a9be0();
  /* 106ad33f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad342 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad346 jne 0x106ad353 */
  if (!C.zf) goto L_106ad353;
  /* 106ad348 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ad34e mov dword ptr [0x106cf6a0], eax */
  w32((uint32_t)(0x106cf6a0), (EAX));
L_106ad353:;
  /* 106ad353 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad357 jne 0x106ad365 */
  if (!C.zf) goto L_106ad365;
  /* 106ad359 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 106ad35f mov dword ptr [0x106cf6a4], ecx */
  w32((uint32_t)(0x106cf6a4), (ECX));
L_106ad365:;
  /* 106ad365 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad368 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ad36b call dword ptr [edx + 0x106ce4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x106ce4e0))), 0x106ad371u);
  /* 106ad371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad373 je 0x106ad3ac */
  if (C.zf) goto L_106ad3ac;
  /* 106ad375 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad378 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ad37b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ad37e mov dword ptr [eax + 0x106ce4dc], ecx */
  w32((uint32_t)(EAX + 0x106ce4dc), (ECX));
  /* 106ad384 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ad386 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ad389 push edx */
  push32((uint32_t)(EDX));
  /* 106ad38a call 0x106a3d90 */
  push32(0x106ad38fu); f_106a3d90();
  /* 106ad38f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad392 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad395 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ad398 mov dword ptr [eax*4 + 0x106cf688], ecx */
  w32((uint32_t)(EAX*4 + 0x106cf688), (ECX));
  /* 106ad39f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106ad3a2 mov dword ptr [0x106cf6a0], edx */
  w32((uint32_t)(0x106cf6a0), (EDX));
  /* 106ad3a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ad3aa jmp 0x106ad3cf */
  goto L_106ad3cf;
L_106ad3ac:;
  /* 106ad3ac cmp dword ptr [ebp - 0xc], 0x106ce3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x106ce3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad3b3 je 0x106ad3c3 */
  if (C.zf) goto L_106ad3c3;
  /* 106ad3b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ad3b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ad3ba push eax */
  push32((uint32_t)(EAX));
  /* 106ad3bb call 0x106a3d90 */
  push32(0x106ad3c0u); f_106a3d90();
  /* 106ad3c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ad3c3:;
  /* 106ad3c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad3c6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ad3c9 mov eax, dword ptr [ecx + 0x106ce4dc] */
  EAX = (r32((uint32_t)(ECX + 0x106ce4dc)));
L_106ad3cf:;
  /* 106ad3cf mov esp, ebp */
  ESP = (EBP);
  /* 106ad3d1 pop ebp */
  EBP = (pop32());
  /* 106ad3d2 ret  */
  ESPCHK(0x106ad240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3e0 @ 0x106ad3e0 (256 bytes, 72 insns) */
void f_106ad3e0(void) {
  FTRACE(0x106ad3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ad3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ad3e1 mov ebp, esp */
  EBP = (ESP);
  /* 106ad3e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ad3e6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 106ad3ed cmp dword ptr [0x106ce4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106ce4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad3f4 jne 0x106ad414 */
  if (!C.zf) goto L_106ad414;
  /* 106ad3f6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 106ad3fb push 0x106cb050 */
  push32((uint32_t)(0x106cb050u));
  /* 106ad400 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ad402 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 106ad407 call 0x106a3300 */
  push32(0x106ad40cu); f_106a3300();
  /* 106ad40c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad40f mov dword ptr [0x106ce4dc], eax */
  w32((uint32_t)(0x106ce4dc), (EAX));
L_106ad414:;
  /* 106ad414 mov eax, dword ptr [0x106ce4dc] */
  EAX = (r32((uint32_t)(0x106ce4dc)));
  /* 106ad419 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106ad41c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106ad423 jmp 0x106ad42e */
  goto L_106ad42e;
L_106ad425:;
  /* 106ad425 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ad428 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad42b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106ad42e:;
  /* 106ad42e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ad431 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ad434 mov eax, dword ptr [edx + 0x106ce4dc] */
  EAX = (r32((uint32_t)(EDX + 0x106ce4dc)));
  /* 106ad43a push eax */
  push32((uint32_t)(EAX));
  /* 106ad43b push 0x106cb05c */
  push32((uint32_t)(0x106cb05cu));
  /* 106ad440 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ad443 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ad446 mov edx, dword ptr [ecx + 0x106ce4d8] */
  EDX = (r32((uint32_t)(ECX + 0x106ce4d8)));
  /* 106ad44c push edx */
  push32((uint32_t)(EDX));
  /* 106ad44d push 3 */
  push32((uint32_t)(0x3u));
  /* 106ad44f mov eax, dword ptr [0x106ce4dc] */
  EAX = (r32((uint32_t)(0x106ce4dc)));
  /* 106ad454 push eax */
  push32((uint32_t)(EAX));
  /* 106ad455 call 0x106ad680 */
  push32(0x106ad45au); f_106ad680();
  /* 106ad45a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad45d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad461 jge 0x106ad4a9 */
  if ((C.sf==C.of)) goto L_106ad4a9;
  /* 106ad463 push 0x106cb048 */
  push32((uint32_t)(0x106cb048u));
  /* 106ad468 mov ecx, dword ptr [0x106ce4dc] */
  ECX = (r32((uint32_t)(0x106ce4dc)));
  /* 106ad46e push ecx */
  push32((uint32_t)(ECX));
  /* 106ad46f call 0x106a62c0 */
  push32(0x106ad474u); f_106a62c0();
  /* 106ad474 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad477 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ad47a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad47d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ad480 mov eax, dword ptr [edx + 0x106ce4dc] */
  EAX = (r32((uint32_t)(EDX + 0x106ce4dc)));
  /* 106ad486 push eax */
  push32((uint32_t)(EAX));
  /* 106ad487 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ad48a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ad48d mov edx, dword ptr [ecx + 0x106ce4dc] */
  EDX = (r32((uint32_t)(ECX + 0x106ce4dc)));
  /* 106ad493 push edx */
  push32((uint32_t)(EDX));
  /* 106ad494 call 0x106aef90 */
  push32(0x106ad499u); f_106aef90();
  /* 106ad499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad49c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad49e je 0x106ad4a7 */
  if (C.zf) goto L_106ad4a7;
  /* 106ad4a0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106ad4a7:;
  /* 106ad4a7 jmp 0x106ad4d7 */
  goto L_106ad4d7;
L_106ad4a9:;
  /* 106ad4a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad4ad jne 0x106ad4b6 */
  if (!C.zf) goto L_106ad4b6;
  /* 106ad4af mov eax, dword ptr [0x106ce4dc] */
  EAX = (r32((uint32_t)(0x106ce4dc)));
  /* 106ad4b4 jmp 0x106ad4dc */
  goto L_106ad4dc;
L_106ad4b6:;
  /* 106ad4b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ad4b8 mov eax, dword ptr [0x106ce4dc] */
  EAX = (r32((uint32_t)(0x106ce4dc)));
  /* 106ad4bd push eax */
  push32((uint32_t)(EAX));
  /* 106ad4be call 0x106a3d90 */
  push32(0x106ad4c3u); f_106a3d90();
  /* 106ad4c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad4c6 mov dword ptr [0x106ce4dc], 0 */
  w32((uint32_t)(0x106ce4dc), (0x0u));
  /* 106ad4d0 mov eax, dword ptr [0x106ce4f4] */
  EAX = (r32((uint32_t)(0x106ce4f4)));
  /* 106ad4d5 jmp 0x106ad4dc */
  goto L_106ad4dc;
L_106ad4d7:;
  /* 106ad4d7 jmp 0x106ad425 */
  goto L_106ad425;
L_106ad4dc:;
  /* 106ad4dc mov esp, ebp */
  ESP = (EBP);
  /* 106ad4de pop ebp */
  EBP = (pop32());
  /* 106ad4df ret  */
  ESPCHK(0x106ad3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4e0 @ 0x106ad4e0 (388 bytes, 115 insns) */
void f_106ad4e0(void) {
  FTRACE(0x106ad4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ad4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ad4e1 mov ebp, esp */
  EBP = (ESP);
  /* 106ad4e3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ad4e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad4ed jne 0x106ad4f6 */
  if (!C.zf) goto L_106ad4f6;
  /* 106ad4ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ad4f1 jmp 0x106ad660 */
  goto L_106ad660;
L_106ad4f6:;
  /* 106ad4f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad4f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106ad4fc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad4ff jne 0x106ad550 */
  if (!C.zf) goto L_106ad550;
  /* 106ad501 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad504 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 106ad508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad50a jne 0x106ad550 */
  if (!C.zf) goto L_106ad550;
  /* 106ad50c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad50f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 106ad512 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad515 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 106ad519 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad51d je 0x106ad539 */
  if (C.zf) goto L_106ad539;
  /* 106ad51f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ad522 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 106ad527 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ad52a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 106ad530 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ad533 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_106ad539:;
  /* 106ad539 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad53d je 0x106ad548 */
  if (C.zf) goto L_106ad548;
  /* 106ad53f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ad542 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_106ad548:;
  /* 106ad548 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad54b jmp 0x106ad660 */
  goto L_106ad660;
L_106ad550:;
  /* 106ad550 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad553 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad554 push 0x106ce450 */
  push32((uint32_t)(0x106ce450u));
  /* 106ad559 call 0x106aef90 */
  push32(0x106ad55eu); f_106aef90();
  /* 106ad55e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad561 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad563 je 0x106ad618 */
  if (C.zf) goto L_106ad618;
  /* 106ad569 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad56c push edx */
  push32((uint32_t)(EDX));
  /* 106ad56d push 0x106ce3cc */
  push32((uint32_t)(0x106ce3ccu));
  /* 106ad572 call 0x106aef90 */
  push32(0x106ad577u); f_106aef90();
  /* 106ad577 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad57a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad57c je 0x106ad618 */
  if (C.zf) goto L_106ad618;
  /* 106ad582 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad585 push eax */
  push32((uint32_t)(EAX));
  /* 106ad586 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 106ad58c push ecx */
  push32((uint32_t)(ECX));
  /* 106ad58d call 0x106ad6d0 */
  push32(0x106ad592u); f_106ad6d0();
  /* 106ad592 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad597 je 0x106ad5a0 */
  if (C.zf) goto L_106ad5a0;
  /* 106ad599 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ad59b jmp 0x106ad660 */
  goto L_106ad660;
L_106ad5a0:;
  /* 106ad5a0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 106ad5a6 push edx */
  push32((uint32_t)(EDX));
  /* 106ad5a7 push 0x106cf6b0 */
  push32((uint32_t)(0x106cf6b0u));
  /* 106ad5ac lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 106ad5b2 push eax */
  push32((uint32_t)(EAX));
  /* 106ad5b3 call 0x106af0e0 */
  push32(0x106ad5b8u); f_106af0e0();
  /* 106ad5b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad5bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad5bd jne 0x106ad5c6 */
  if (!C.zf) goto L_106ad5c6;
  /* 106ad5bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ad5c1 jmp 0x106ad660 */
  goto L_106ad660;
L_106ad5c6:;
  /* 106ad5c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106ad5c8 mov cx, word ptr [0x106cf6b4] */
  CX = (r16((uint32_t)(0x106cf6b4)));
  /* 106ad5cf mov dword ptr [0x106cf6b8], ecx */
  w32((uint32_t)(0x106cf6b8), (ECX));
  /* 106ad5d5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 106ad5db push edx */
  push32((uint32_t)(EDX));
  /* 106ad5dc push 0x106ce450 */
  push32((uint32_t)(0x106ce450u));
  /* 106ad5e1 call 0x106ad830 */
  push32(0x106ad5e6u); f_106ad830();
  /* 106ad5e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad5e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad5ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106ad5ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ad5f1 je 0x106ad606 */
  if (C.zf) goto L_106ad606;
  /* 106ad5f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad5f6 push edx */
  push32((uint32_t)(EDX));
  /* 106ad5f7 push 0x106ce3cc */
  push32((uint32_t)(0x106ce3ccu));
  /* 106ad5fc call 0x106a62b0 */
  push32(0x106ad601u); f_106a62b0();
  /* 106ad601 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad604 jmp 0x106ad618 */
  goto L_106ad618;
L_106ad606:;
  /* 106ad606 push 0x106ce450 */
  push32((uint32_t)(0x106ce450u));
  /* 106ad60b push 0x106ce3cc */
  push32((uint32_t)(0x106ce3ccu));
  /* 106ad610 call 0x106a62b0 */
  push32(0x106ad615u); f_106a62b0();
  /* 106ad615 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ad618:;
  /* 106ad618 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad61c je 0x106ad631 */
  if (C.zf) goto L_106ad631;
  /* 106ad61e push 6 */
  push32((uint32_t)(0x6u));
  /* 106ad620 push 0x106cf6b0 */
  push32((uint32_t)(0x106cf6b0u));
  /* 106ad625 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106ad628 push eax */
  push32((uint32_t)(EAX));
  /* 106ad629 call 0x106a9be0 */
  push32(0x106ad62eu); f_106a9be0();
  /* 106ad62e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ad631:;
  /* 106ad631 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad635 je 0x106ad64a */
  if (C.zf) goto L_106ad64a;
  /* 106ad637 push 4 */
  push32((uint32_t)(0x4u));
  /* 106ad639 push 0x106cf6b8 */
  push32((uint32_t)(0x106cf6b8u));
  /* 106ad63e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106ad641 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad642 call 0x106a9be0 */
  push32(0x106ad647u); f_106a9be0();
  /* 106ad647 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ad64a:;
  /* 106ad64a push 0x106ce450 */
  push32((uint32_t)(0x106ce450u));
  /* 106ad64f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad652 push edx */
  push32((uint32_t)(EDX));
  /* 106ad653 call 0x106a62b0 */
  push32(0x106ad658u); f_106a62b0();
  /* 106ad658 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad65b mov eax, 0x106ce450 */
  EAX = (0x106ce450u);
L_106ad660:;
  /* 106ad660 mov esp, ebp */
  ESP = (EBP);
  /* 106ad662 pop ebp */
  EBP = (pop32());
  /* 106ad663 ret  */
  ESPCHK(0x106ad4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d670 @ 0x106ad670 (7 bytes, 5 insns) */
void f_106ad670(void) {
  FTRACE(0x106ad670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ad670 push ebp */
  push32((uint32_t)(EBP));
  /* 106ad671 mov ebp, esp */
  EBP = (ESP);
  /* 106ad673 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ad675 pop ebp */
  EBP = (pop32());
  /* 106ad676 ret  */
  ESPCHK(0x106ad670u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x106ad680 (79 bytes, 28 insns) */
void f_106ad680(void) {
  FTRACE(0x106ad680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ad680 push ebp */
  push32((uint32_t)(EBP));
  /* 106ad681 mov ebp, esp */
  EBP = (ESP);
  /* 106ad683 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ad686 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 106ad689 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ad68c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106ad693 jmp 0x106ad69e */
  goto L_106ad69e;
L_106ad695:;
  /* 106ad695 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ad698 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad69b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106ad69e:;
  /* 106ad69e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ad6a1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad6a4 jge 0x106ad6c4 */
  if ((C.sf==C.of)) goto L_106ad6c4;
  /* 106ad6a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ad6a9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad6ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ad6af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ad6b2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 106ad6b5 push edx */
  push32((uint32_t)(EDX));
  /* 106ad6b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad6b9 push eax */
  push32((uint32_t)(EAX));
  /* 106ad6ba call 0x106a62c0 */
  push32(0x106ad6bfu); f_106a62c0();
  /* 106ad6bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad6c2 jmp 0x106ad695 */
  goto L_106ad695;
L_106ad6c4:;
  /* 106ad6c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106ad6cb mov esp, ebp */
  ESP = (EBP);
  /* 106ad6cd pop ebp */
  EBP = (pop32());
  /* 106ad6ce ret  */
  ESPCHK(0x106ad680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6d0 @ 0x106ad6d0 (349 bytes, 122 insns) */
void f_106ad6d0(void) {
  FTRACE(0x106ad6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ad6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ad6d1 mov ebp, esp */
  EBP = (ESP);
  /* 106ad6d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ad6d6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 106ad6db push 0 */
  push32((uint32_t)(0x0u));
  /* 106ad6dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad6e0 push eax */
  push32((uint32_t)(EAX));
  /* 106ad6e1 call 0x106a7070 */
  push32(0x106ad6e6u); f_106a7070();
  /* 106ad6e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad6e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad6ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106ad6ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ad6f1 jne 0x106ad6fa */
  if (!C.zf) goto L_106ad6fa;
  /* 106ad6f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ad6f5 jmp 0x106ad829 */
  goto L_106ad829;
L_106ad6fa:;
  /* 106ad6fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad6fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106ad700 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad703 jne 0x106ad730 */
  if (!C.zf) goto L_106ad730;
  /* 106ad705 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad708 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 106ad70c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad70e je 0x106ad730 */
  if (C.zf) goto L_106ad730;
  /* 106ad710 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad713 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad716 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad717 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad71a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad720 push edx */
  push32((uint32_t)(EDX));
  /* 106ad721 call 0x106a62b0 */
  push32(0x106ad726u); f_106a62b0();
  /* 106ad726 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad729 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ad72b jmp 0x106ad829 */
  goto L_106ad829;
L_106ad730:;
  /* 106ad730 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106ad737 jmp 0x106ad742 */
  goto L_106ad742;
L_106ad739:;
  /* 106ad739 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ad73c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad73f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106ad742:;
  /* 106ad742 push 0x106cb060 */
  push32((uint32_t)(0x106cb060u));
  /* 106ad747 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad74a push ecx */
  push32((uint32_t)(ECX));
  /* 106ad74b call 0x106af020 */
  push32(0x106ad750u); f_106af020();
  /* 106ad750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad753 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106ad756 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad75a jne 0x106ad764 */
  if (!C.zf) goto L_106ad764;
  /* 106ad75c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ad75f jmp 0x106ad829 */
  goto L_106ad829;
L_106ad764:;
  /* 106ad764 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad767 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad76a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106ad76c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 106ad76f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad773 jne 0x106ad79a */
  if (!C.zf) goto L_106ad79a;
  /* 106ad775 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad779 jge 0x106ad79a */
  if ((C.sf==C.of)) goto L_106ad79a;
  /* 106ad77b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106ad77f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad782 je 0x106ad79a */
  if (C.zf) goto L_106ad79a;
  /* 106ad784 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ad787 push edx */
  push32((uint32_t)(EDX));
  /* 106ad788 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad78b push eax */
  push32((uint32_t)(EAX));
  /* 106ad78c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad78f push ecx */
  push32((uint32_t)(ECX));
  /* 106ad790 call 0x106a6b20 */
  push32(0x106ad795u); f_106a6b20();
  /* 106ad795 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad798 jmp 0x106ad800 */
  goto L_106ad800;
L_106ad79a:;
  /* 106ad79a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad79e jne 0x106ad7c8 */
  if (!C.zf) goto L_106ad7c8;
  /* 106ad7a0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad7a4 jge 0x106ad7c8 */
  if ((C.sf==C.of)) goto L_106ad7c8;
  /* 106ad7a6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106ad7aa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad7ad je 0x106ad7c8 */
  if (C.zf) goto L_106ad7c8;
  /* 106ad7af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ad7b2 push eax */
  push32((uint32_t)(EAX));
  /* 106ad7b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad7b6 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad7b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad7ba add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad7bd push edx */
  push32((uint32_t)(EDX));
  /* 106ad7be call 0x106a6b20 */
  push32(0x106ad7c3u); f_106a6b20();
  /* 106ad7c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad7c6 jmp 0x106ad800 */
  goto L_106ad800;
L_106ad7c8:;
  /* 106ad7c8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad7cc jne 0x106ad7fb */
  if (!C.zf) goto L_106ad7fb;
  /* 106ad7ce movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106ad7d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad7d4 je 0x106ad7df */
  if (C.zf) goto L_106ad7df;
  /* 106ad7d6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106ad7da cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad7dd jne 0x106ad7fb */
  if (!C.zf) goto L_106ad7fb;
L_106ad7df:;
  /* 106ad7df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ad7e2 push edx */
  push32((uint32_t)(EDX));
  /* 106ad7e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad7e6 push eax */
  push32((uint32_t)(EAX));
  /* 106ad7e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad7ea add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad7f0 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad7f1 call 0x106a6b20 */
  push32(0x106ad7f6u); f_106a6b20();
  /* 106ad7f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad7f9 jmp 0x106ad800 */
  goto L_106ad800;
L_106ad7fb:;
  /* 106ad7fb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ad7fe jmp 0x106ad829 */
  goto L_106ad829;
L_106ad800:;
  /* 106ad800 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106ad804 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad807 jne 0x106ad80b */
  if (!C.zf) goto L_106ad80b;
  /* 106ad809 jmp 0x106ad827 */
  goto L_106ad827;
L_106ad80b:;
  /* 106ad80b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106ad80f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad811 jne 0x106ad815 */
  if (!C.zf) goto L_106ad815;
  /* 106ad813 jmp 0x106ad827 */
  goto L_106ad827;
L_106ad815:;
  /* 106ad815 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ad818 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad81b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 106ad81f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 106ad822 jmp 0x106ad739 */
  goto L_106ad739;
L_106ad827:;
  /* 106ad827 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106ad829:;
  /* 106ad829 mov esp, ebp */
  ESP = (EBP);
  /* 106ad82b pop ebp */
  EBP = (pop32());
  /* 106ad82c ret  */
  ESPCHK(0x106ad6d0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x106ad830 (101 bytes, 36 insns) */
void f_106ad830(void) {
  FTRACE(0x106ad830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ad830 push ebp */
  push32((uint32_t)(EBP));
  /* 106ad831 mov ebp, esp */
  EBP = (ESP);
  /* 106ad833 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad836 push eax */
  push32((uint32_t)(EAX));
  /* 106ad837 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad83a push ecx */
  push32((uint32_t)(ECX));
  /* 106ad83b call 0x106a62b0 */
  push32(0x106ad840u); f_106a62b0();
  /* 106ad840 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad843 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad846 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 106ad84a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad84c je 0x106ad868 */
  if (C.zf) goto L_106ad868;
  /* 106ad84e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad851 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad854 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad855 push 0x106cb068 */
  push32((uint32_t)(0x106cb068u));
  /* 106ad85a push 2 */
  push32((uint32_t)(0x2u));
  /* 106ad85c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad85f push edx */
  push32((uint32_t)(EDX));
  /* 106ad860 call 0x106ad680 */
  push32(0x106ad865u); f_106ad680();
  /* 106ad865 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ad868:;
  /* 106ad868 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad86b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 106ad872 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ad874 je 0x106ad893 */
  if (C.zf) goto L_106ad893;
  /* 106ad876 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106ad879 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad87f push edx */
  push32((uint32_t)(EDX));
  /* 106ad880 push 0x106cb064 */
  push32((uint32_t)(0x106cb064u));
  /* 106ad885 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ad887 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad88a push eax */
  push32((uint32_t)(EAX));
  /* 106ad88b call 0x106ad680 */
  push32(0x106ad890u); f_106ad680();
  /* 106ad890 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ad893:;
  /* 106ad893 pop ebp */
  EBP = (pop32());
  /* 106ad894 ret  */
  ESPCHK(0x106ad830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8a0 @ 0x106ad8a0 (130 bytes, 50 insns) */
void f_106ad8a0(void) {
  FTRACE(0x106ad8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ad8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ad8a1 mov ebp, esp */
  EBP = (ESP);
  /* 106ad8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad8a4 push ebx */
  push32((uint32_t)(EBX));
  /* 106ad8a5 push esi */
  push32((uint32_t)(ESI));
  /* 106ad8a6 push edi */
  push32((uint32_t)(EDI));
  /* 106ad8a7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106ad8ae:;
  /* 106ad8ae cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad8b2 jne 0x106ad8d2 */
  if (!C.zf) goto L_106ad8d2;
  /* 106ad8b4 push 0x106cb078 */
  push32((uint32_t)(0x106cb078u));
  /* 106ad8b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ad8bb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 106ad8bd push 0x106cb06c */
  push32((uint32_t)(0x106cb06cu));
  /* 106ad8c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ad8c4 call 0x106a23c0 */
  push32(0x106ad8c9u); f_106a23c0();
  /* 106ad8c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad8cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad8cf jne 0x106ad8d2 */
  if (!C.zf) goto L_106ad8d2;
  /* 106ad8d1 int3  */
  x86_unimpl("int3 @ 0x106ad8d1");
L_106ad8d2:;
  /* 106ad8d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ad8d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad8d6 jne 0x106ad8ae */
  if (!C.zf) goto L_106ad8ae;
  /* 106ad8d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad8db mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106ad8de and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 106ad8e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106ad8e3 je 0x106ad8f1 */
  if (C.zf) goto L_106ad8f1;
  /* 106ad8e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad8e8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 106ad8ef jmp 0x106ad918 */
  goto L_106ad918;
L_106ad8f1:;
  /* 106ad8f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad8f4 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad8f5 call 0x106ac110 */
  push32(0x106ad8fau); f_106ac110();
  /* 106ad8fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad8fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad900 push edx */
  push32((uint32_t)(EDX));
  /* 106ad901 call 0x106ad930 */
  push32(0x106ad906u); f_106ad930();
  /* 106ad906 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad909 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ad90c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad90f push eax */
  push32((uint32_t)(EAX));
  /* 106ad910 call 0x106ac180 */
  push32(0x106ad915u); f_106ac180();
  /* 106ad915 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ad918:;
  /* 106ad918 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ad91b pop edi */
  EDI = (pop32());
  /* 106ad91c pop esi */
  ESI = (pop32());
  /* 106ad91d pop ebx */
  EBX = (pop32());
  /* 106ad91e mov esp, ebp */
  ESP = (EBP);
  /* 106ad920 pop ebp */
  EBP = (pop32());
  /* 106ad921 ret  */
  ESPCHK(0x106ad8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d930 @ 0x106ad930 (190 bytes, 67 insns) */
void f_106ad930(void) {
  FTRACE(0x106ad930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ad930 push ebp */
  push32((uint32_t)(EBP));
  /* 106ad931 mov ebp, esp */
  EBP = (ESP);
  /* 106ad933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ad936 push ebx */
  push32((uint32_t)(EBX));
  /* 106ad937 push esi */
  push32((uint32_t)(ESI));
  /* 106ad938 push edi */
  push32((uint32_t)(EDI));
  /* 106ad939 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106ad940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad943 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106ad946:;
  /* 106ad946 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad94a jne 0x106ad96a */
  if (!C.zf) goto L_106ad96a;
  /* 106ad94c push 0x106caf1c */
  push32((uint32_t)(0x106caf1cu));
  /* 106ad951 push 0 */
  push32((uint32_t)(0x0u));
  /* 106ad953 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 106ad955 push 0x106cb06c */
  push32((uint32_t)(0x106cb06cu));
  /* 106ad95a push 2 */
  push32((uint32_t)(0x2u));
  /* 106ad95c call 0x106a23c0 */
  push32(0x106ad961u); f_106a23c0();
  /* 106ad961 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad964 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad967 jne 0x106ad96a */
  if (!C.zf) goto L_106ad96a;
  /* 106ad969 int3  */
  x86_unimpl("int3 @ 0x106ad969");
L_106ad96a:;
  /* 106ad96a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106ad96c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ad96e jne 0x106ad946 */
  if (!C.zf) goto L_106ad946;
  /* 106ad970 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ad973 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106ad976 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 106ad97b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad97d je 0x106ad9da */
  if (C.zf) goto L_106ad9da;
  /* 106ad97f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ad982 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad983 call 0x106acc30 */
  push32(0x106ad988u); f_106acc30();
  /* 106ad988 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad98b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ad98e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ad991 push edx */
  push32((uint32_t)(EDX));
  /* 106ad992 call 0x106affb0 */
  push32(0x106ad997u); f_106affb0();
  /* 106ad997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad99a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ad99d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106ad9a0 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad9a1 call 0x106afe80 */
  push32(0x106ad9a6u); f_106afe80();
  /* 106ad9a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad9a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ad9ab jge 0x106ad9b6 */
  if ((C.sf==C.of)) goto L_106ad9b6;
  /* 106ad9ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106ad9b4 jmp 0x106ad9da */
  goto L_106ad9da;
L_106ad9b6:;
  /* 106ad9b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ad9b9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad9bd je 0x106ad9da */
  if (C.zf) goto L_106ad9da;
  /* 106ad9bf push 2 */
  push32((uint32_t)(0x2u));
  /* 106ad9c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ad9c4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 106ad9c7 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad9c8 call 0x106a3d90 */
  push32(0x106ad9cdu); f_106a3d90();
  /* 106ad9cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ad9d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ad9d3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_106ad9da:;
  /* 106ad9da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ad9dd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 106ad9e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ad9e7 pop edi */
  EDI = (pop32());
  /* 106ad9e8 pop esi */
  ESI = (pop32());
  /* 106ad9e9 pop ebx */
  EBX = (pop32());
  /* 106ad9ea mov esp, ebp */
  ESP = (EBP);
  /* 106ad9ec pop ebp */
  EBP = (pop32());
  /* 106ad9ed ret  */
  ESPCHK(0x106ad930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9f0 @ 0x106ad9f0 (210 bytes, 63 insns) */
void f_106ad9f0(void) {
  FTRACE(0x106ad9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ad9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ad9f1 mov ebp, esp */
  EBP = (ESP);
  /* 106ad9f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106ad9f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ad9f7 cmp eax, dword ptr [0x106d0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106d0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ad9fd jae 0x106ada21 */
  if (!C.cf) goto L_106ada21;
  /* 106ad9ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ada02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106ada05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ada08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106ada0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ada0e mov eax, dword ptr [ecx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x106d0e60)));
  /* 106ada15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106ada1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106ada1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ada1f jne 0x106ada34 */
  if (!C.zf) goto L_106ada34;
L_106ada21:;
  /* 106ada21 call 0x106ab1d0 */
  push32(0x106ada26u); f_106ab1d0();
  /* 106ada26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106ada2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ada2f jmp 0x106adabe */
  goto L_106adabe;
L_106ada34:;
  /* 106ada34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ada37 push edx */
  push32((uint32_t)(EDX));
  /* 106ada38 call 0x106ac9f0 */
  push32(0x106ada3du); f_106ac9f0();
  /* 106ada3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ada40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ada43 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106ada46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ada49 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106ada4c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106ada4f mov edx, dword ptr [eax*4 + 0x106d0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x106d0e60)));
  /* 106ada56 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 106ada5b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 106ada5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ada60 je 0x106ada9d */
  if (C.zf) goto L_106ada9d;
  /* 106ada62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ada65 push ecx */
  push32((uint32_t)(ECX));
  /* 106ada66 call 0x106ac870 */
  push32(0x106ada6bu); f_106ac870();
  /* 106ada6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ada6e push eax */
  push32((uint32_t)(EAX));
  /* 106ada6f call dword ptr [0x106d128c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d128c))), 0x106ada75u);
  /* 106ada75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ada77 jne 0x106ada84 */
  if (!C.zf) goto L_106ada84;
  /* 106ada79 call dword ptr [0x106d1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1304))), 0x106ada7fu);
  /* 106ada7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ada82 jmp 0x106ada8b */
  goto L_106ada8b;
L_106ada84:;
  /* 106ada84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106ada8b:;
  /* 106ada8b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ada8f jne 0x106ada93 */
  if (!C.zf) goto L_106ada93;
  /* 106ada91 jmp 0x106adaaf */
  goto L_106adaaf;
L_106ada93:;
  /* 106ada93 call 0x106ab1e0 */
  push32(0x106ada98u); f_106ab1e0();
  /* 106ada98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ada9b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106ada9d:;
  /* 106ada9d call 0x106ab1d0 */
  push32(0x106adaa2u); f_106ab1d0();
  /* 106adaa2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106adaa8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106adaaf:;
  /* 106adaaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adab2 push eax */
  push32((uint32_t)(EAX));
  /* 106adab3 call 0x106aca80 */
  push32(0x106adab8u); f_106aca80();
  /* 106adab8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adabb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106adabe:;
  /* 106adabe mov esp, ebp */
  ESP = (EBP);
  /* 106adac0 pop ebp */
  EBP = (pop32());
  /* 106adac1 ret  */
  ESPCHK(0x106ad9f0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x106adad0 (219 bytes, 64 insns) */
void f_106adad0(void) {
  FTRACE(0x106adad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106adad0 push ebp */
  push32((uint32_t)(EBP));
  /* 106adad1 mov ebp, esp */
  EBP = (ESP);
  /* 106adad3 push ecx */
  push32((uint32_t)(ECX));
  /* 106adad4 cmp dword ptr [0x106cf69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106adadb je 0x106adb71 */
  if (C.zf) goto L_106adb71;
  /* 106adae1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 106adae3 push 0x106cb088 */
  push32((uint32_t)(0x106cb088u));
  /* 106adae8 push 2 */
  push32((uint32_t)(0x2u));
  /* 106adaea push 0xac */
  push32((uint32_t)(0xacu));
  /* 106adaef push 1 */
  push32((uint32_t)(0x1u));
  /* 106adaf1 call 0x106a3710 */
  push32(0x106adaf6u); f_106a3710();
  /* 106adaf6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adaf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106adafc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106adb00 jne 0x106adb0c */
  if (!C.zf) goto L_106adb0c;
  /* 106adb02 mov eax, 1 */
  EAX = (0x1u);
  /* 106adb07 jmp 0x106adba7 */
  goto L_106adba7;
L_106adb0c:;
  /* 106adb0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adb0f push eax */
  push32((uint32_t)(EAX));
  /* 106adb10 call 0x106adbb0 */
  push32(0x106adb15u); f_106adbb0();
  /* 106adb15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adb18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106adb1a je 0x106adb3d */
  if (C.zf) goto L_106adb3d;
  /* 106adb1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adb1f push ecx */
  push32((uint32_t)(ECX));
  /* 106adb20 call 0x106ae140 */
  push32(0x106adb25u); f_106ae140();
  /* 106adb25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adb28 push 2 */
  push32((uint32_t)(0x2u));
  /* 106adb2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adb2d push edx */
  push32((uint32_t)(EDX));
  /* 106adb2e call 0x106a3d90 */
  push32(0x106adb33u); f_106a3d90();
  /* 106adb33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adb36 mov eax, 1 */
  EAX = (0x1u);
  /* 106adb3b jmp 0x106adba7 */
  goto L_106adba7;
L_106adb3d:;
  /* 106adb3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adb40 mov dword ptr [0x106cec98], eax */
  w32((uint32_t)(0x106cec98), (EAX));
  /* 106adb45 mov ecx, dword ptr [0x106cf6bc] */
  ECX = (r32((uint32_t)(0x106cf6bc)));
  /* 106adb4b push ecx */
  push32((uint32_t)(ECX));
  /* 106adb4c call 0x106ae140 */
  push32(0x106adb51u); f_106ae140();
  /* 106adb51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adb54 push 2 */
  push32((uint32_t)(0x2u));
  /* 106adb56 mov edx, dword ptr [0x106cf6bc] */
  EDX = (r32((uint32_t)(0x106cf6bc)));
  /* 106adb5c push edx */
  push32((uint32_t)(EDX));
  /* 106adb5d call 0x106a3d90 */
  push32(0x106adb62u); f_106a3d90();
  /* 106adb62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adb65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adb68 mov dword ptr [0x106cf6bc], eax */
  w32((uint32_t)(0x106cf6bc), (EAX));
  /* 106adb6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106adb6f jmp 0x106adba7 */
  goto L_106adba7;
L_106adb71:;
  /* 106adb71 mov dword ptr [0x106cec98], 0x106ceca0 */
  w32((uint32_t)(0x106cec98), (0x106ceca0u));
  /* 106adb7b mov ecx, dword ptr [0x106cf6bc] */
  ECX = (r32((uint32_t)(0x106cf6bc)));
  /* 106adb81 push ecx */
  push32((uint32_t)(ECX));
  /* 106adb82 call 0x106ae140 */
  push32(0x106adb87u); f_106ae140();
  /* 106adb87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adb8a push 2 */
  push32((uint32_t)(0x2u));
  /* 106adb8c mov edx, dword ptr [0x106cf6bc] */
  EDX = (r32((uint32_t)(0x106cf6bc)));
  /* 106adb92 push edx */
  push32((uint32_t)(EDX));
  /* 106adb93 call 0x106a3d90 */
  push32(0x106adb98u); f_106a3d90();
  /* 106adb98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adb9b mov dword ptr [0x106cf6bc], 0 */
  w32((uint32_t)(0x106cf6bc), (0x0u));
  /* 106adba5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106adba7:;
  /* 106adba7 mov esp, ebp */
  ESP = (EBP);
  /* 106adba9 pop ebp */
  EBP = (pop32());
  /* 106adbaa ret  */
  ESPCHK(0x106adad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbb0 @ 0x106adbb0 (1423 bytes, 533 insns) */
void f_106adbb0(void) {
  FTRACE(0x106adbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106adbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 106adbb1 mov ebp, esp */
  EBP = (ESP);
  /* 106adbb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106adbb6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106adbbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106adbbf mov ax, word ptr [0x106cf6f6] */
  AX = (r16((uint32_t)(0x106cf6f6)));
  /* 106adbc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106adbc8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106adbca mov cx, word ptr [0x106cf6f8] */
  CX = (r16((uint32_t)(0x106cf6f8)));
  /* 106adbd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106adbd4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106adbd8 jne 0x106adbe2 */
  if (!C.zf) goto L_106adbe2;
  /* 106adbda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106adbdd jmp 0x106ae13b */
  goto L_106ae13b;
L_106adbe2:;
  /* 106adbe2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adbe5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adbe8 push edx */
  push32((uint32_t)(EDX));
  /* 106adbe9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 106adbeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adbee push eax */
  push32((uint32_t)(EAX));
  /* 106adbef push 1 */
  push32((uint32_t)(0x1u));
  /* 106adbf1 call 0x106b14c0 */
  push32(0x106adbf6u); f_106b14c0();
  /* 106adbf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adbf9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adbfc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adbfe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adc01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adc04 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adc07 push edx */
  push32((uint32_t)(EDX));
  /* 106adc08 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 106adc0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adc0d push eax */
  push32((uint32_t)(EAX));
  /* 106adc0e push 1 */
  push32((uint32_t)(0x1u));
  /* 106adc10 call 0x106b14c0 */
  push32(0x106adc15u); f_106b14c0();
  /* 106adc15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adc18 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adc1b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adc1d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adc20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adc23 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adc26 push edx */
  push32((uint32_t)(EDX));
  /* 106adc27 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 106adc29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adc2c push eax */
  push32((uint32_t)(EAX));
  /* 106adc2d push 1 */
  push32((uint32_t)(0x1u));
  /* 106adc2f call 0x106b14c0 */
  push32(0x106adc34u); f_106b14c0();
  /* 106adc34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adc37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adc3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adc3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adc3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adc42 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adc45 push edx */
  push32((uint32_t)(EDX));
  /* 106adc46 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 106adc48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adc4b push eax */
  push32((uint32_t)(EAX));
  /* 106adc4c push 1 */
  push32((uint32_t)(0x1u));
  /* 106adc4e call 0x106b14c0 */
  push32(0x106adc53u); f_106b14c0();
  /* 106adc53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adc56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adc59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adc5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adc5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adc61 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adc64 push edx */
  push32((uint32_t)(EDX));
  /* 106adc65 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 106adc67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adc6a push eax */
  push32((uint32_t)(EAX));
  /* 106adc6b push 1 */
  push32((uint32_t)(0x1u));
  /* 106adc6d call 0x106b14c0 */
  push32(0x106adc72u); f_106b14c0();
  /* 106adc72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adc75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adc78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adc7a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adc7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adc80 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adc83 push edx */
  push32((uint32_t)(EDX));
  /* 106adc84 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 106adc86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adc89 push eax */
  push32((uint32_t)(EAX));
  /* 106adc8a push 1 */
  push32((uint32_t)(0x1u));
  /* 106adc8c call 0x106b14c0 */
  push32(0x106adc91u); f_106b14c0();
  /* 106adc91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adc94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adc97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adc99 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adc9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adc9f push edx */
  push32((uint32_t)(EDX));
  /* 106adca0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 106adca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adca5 push eax */
  push32((uint32_t)(EAX));
  /* 106adca6 push 1 */
  push32((uint32_t)(0x1u));
  /* 106adca8 call 0x106b14c0 */
  push32(0x106adcadu); f_106b14c0();
  /* 106adcad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adcb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adcb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adcb5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adcb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adcbb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adcbe push edx */
  push32((uint32_t)(EDX));
  /* 106adcbf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 106adcc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adcc4 push eax */
  push32((uint32_t)(EAX));
  /* 106adcc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 106adcc7 call 0x106b14c0 */
  push32(0x106adcccu); f_106b14c0();
  /* 106adccc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adccf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adcd2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adcd4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adcd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adcda add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adcdd push edx */
  push32((uint32_t)(EDX));
  /* 106adcde push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 106adce0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adce3 push eax */
  push32((uint32_t)(EAX));
  /* 106adce4 push 1 */
  push32((uint32_t)(0x1u));
  /* 106adce6 call 0x106b14c0 */
  push32(0x106adcebu); f_106b14c0();
  /* 106adceb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adcee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adcf1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adcf3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adcf6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adcf9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adcfc push edx */
  push32((uint32_t)(EDX));
  /* 106adcfd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 106adcff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106add02 push eax */
  push32((uint32_t)(EAX));
  /* 106add03 push 1 */
  push32((uint32_t)(0x1u));
  /* 106add05 call 0x106b14c0 */
  push32(0x106add0au); f_106b14c0();
  /* 106add0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106add0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106add10 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106add12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106add15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106add18 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106add1b push edx */
  push32((uint32_t)(EDX));
  /* 106add1c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 106add1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106add21 push eax */
  push32((uint32_t)(EAX));
  /* 106add22 push 1 */
  push32((uint32_t)(0x1u));
  /* 106add24 call 0x106b14c0 */
  push32(0x106add29u); f_106b14c0();
  /* 106add29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106add2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106add2f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106add31 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106add34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106add37 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106add3a push edx */
  push32((uint32_t)(EDX));
  /* 106add3b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 106add3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106add40 push eax */
  push32((uint32_t)(EAX));
  /* 106add41 push 1 */
  push32((uint32_t)(0x1u));
  /* 106add43 call 0x106b14c0 */
  push32(0x106add48u); f_106b14c0();
  /* 106add48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106add4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106add4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106add50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106add53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106add56 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106add59 push edx */
  push32((uint32_t)(EDX));
  /* 106add5a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 106add5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106add5f push eax */
  push32((uint32_t)(EAX));
  /* 106add60 push 1 */
  push32((uint32_t)(0x1u));
  /* 106add62 call 0x106b14c0 */
  push32(0x106add67u); f_106b14c0();
  /* 106add67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106add6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106add6d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106add6f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106add72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106add75 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106add78 push edx */
  push32((uint32_t)(EDX));
  /* 106add79 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 106add7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106add7e push eax */
  push32((uint32_t)(EAX));
  /* 106add7f push 1 */
  push32((uint32_t)(0x1u));
  /* 106add81 call 0x106b14c0 */
  push32(0x106add86u); f_106b14c0();
  /* 106add86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106add89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106add8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106add8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106add91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106add94 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106add97 push edx */
  push32((uint32_t)(EDX));
  /* 106add98 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 106add9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106add9d push eax */
  push32((uint32_t)(EAX));
  /* 106add9e push 1 */
  push32((uint32_t)(0x1u));
  /* 106adda0 call 0x106b14c0 */
  push32(0x106adda5u); f_106b14c0();
  /* 106adda5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adda8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106addab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106addad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106addb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106addb3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106addb6 push edx */
  push32((uint32_t)(EDX));
  /* 106addb7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 106addb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106addbc push eax */
  push32((uint32_t)(EAX));
  /* 106addbd push 1 */
  push32((uint32_t)(0x1u));
  /* 106addbf call 0x106b14c0 */
  push32(0x106addc4u); f_106b14c0();
  /* 106addc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106addc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106addca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106addcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106addcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106addd2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106addd5 push edx */
  push32((uint32_t)(EDX));
  /* 106addd6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 106addd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adddb push eax */
  push32((uint32_t)(EAX));
  /* 106adddc push 1 */
  push32((uint32_t)(0x1u));
  /* 106addde call 0x106b14c0 */
  push32(0x106adde3u); f_106b14c0();
  /* 106adde3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adde6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adde9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106addeb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106addee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106addf1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106addf4 push edx */
  push32((uint32_t)(EDX));
  /* 106addf5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 106addf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106addfa push eax */
  push32((uint32_t)(EAX));
  /* 106addfb push 1 */
  push32((uint32_t)(0x1u));
  /* 106addfd call 0x106b14c0 */
  push32(0x106ade02u); f_106b14c0();
  /* 106ade02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ade05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ade08 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ade0a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ade0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ade10 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ade13 push edx */
  push32((uint32_t)(EDX));
  /* 106ade14 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 106ade16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ade19 push eax */
  push32((uint32_t)(EAX));
  /* 106ade1a push 1 */
  push32((uint32_t)(0x1u));
  /* 106ade1c call 0x106b14c0 */
  push32(0x106ade21u); f_106b14c0();
  /* 106ade21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ade24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ade27 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ade29 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ade2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ade2f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ade32 push edx */
  push32((uint32_t)(EDX));
  /* 106ade33 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 106ade35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ade38 push eax */
  push32((uint32_t)(EAX));
  /* 106ade39 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ade3b call 0x106b14c0 */
  push32(0x106ade40u); f_106b14c0();
  /* 106ade40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ade43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ade46 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ade48 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ade4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ade4e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ade51 push edx */
  push32((uint32_t)(EDX));
  /* 106ade52 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 106ade54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ade57 push eax */
  push32((uint32_t)(EAX));
  /* 106ade58 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ade5a call 0x106b14c0 */
  push32(0x106ade5fu); f_106b14c0();
  /* 106ade5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ade62 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ade65 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ade67 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ade6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ade6d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ade70 push edx */
  push32((uint32_t)(EDX));
  /* 106ade71 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 106ade73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ade76 push eax */
  push32((uint32_t)(EAX));
  /* 106ade77 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ade79 call 0x106b14c0 */
  push32(0x106ade7eu); f_106b14c0();
  /* 106ade7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ade81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ade84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ade86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ade89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ade8c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ade8f push edx */
  push32((uint32_t)(EDX));
  /* 106ade90 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 106ade92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ade95 push eax */
  push32((uint32_t)(EAX));
  /* 106ade96 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ade98 call 0x106b14c0 */
  push32(0x106ade9du); f_106b14c0();
  /* 106ade9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adea0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adea3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adea5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adea8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adeab add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adeae push edx */
  push32((uint32_t)(EDX));
  /* 106adeaf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 106adeb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adeb4 push eax */
  push32((uint32_t)(EAX));
  /* 106adeb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 106adeb7 call 0x106b14c0 */
  push32(0x106adebcu); f_106b14c0();
  /* 106adebc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adebf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adec2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adec4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adec7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adeca add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adecd push edx */
  push32((uint32_t)(EDX));
  /* 106adece push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 106aded0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aded3 push eax */
  push32((uint32_t)(EAX));
  /* 106aded4 push 1 */
  push32((uint32_t)(0x1u));
  /* 106aded6 call 0x106b14c0 */
  push32(0x106adedbu); f_106b14c0();
  /* 106adedb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adede mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adee1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adee3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adee6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adee9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adeec push edx */
  push32((uint32_t)(EDX));
  /* 106adeed push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 106adeef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adef2 push eax */
  push32((uint32_t)(EAX));
  /* 106adef3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106adef5 call 0x106b14c0 */
  push32(0x106adefau); f_106b14c0();
  /* 106adefa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adefd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adf00 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adf02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adf05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adf08 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adf0b push edx */
  push32((uint32_t)(EDX));
  /* 106adf0c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 106adf0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adf11 push eax */
  push32((uint32_t)(EAX));
  /* 106adf12 push 1 */
  push32((uint32_t)(0x1u));
  /* 106adf14 call 0x106b14c0 */
  push32(0x106adf19u); f_106b14c0();
  /* 106adf19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adf1c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adf1f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adf21 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adf24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adf27 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adf2a push edx */
  push32((uint32_t)(EDX));
  /* 106adf2b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 106adf2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adf30 push eax */
  push32((uint32_t)(EAX));
  /* 106adf31 push 1 */
  push32((uint32_t)(0x1u));
  /* 106adf33 call 0x106b14c0 */
  push32(0x106adf38u); f_106b14c0();
  /* 106adf38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adf3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adf3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adf40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adf43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adf46 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adf49 push edx */
  push32((uint32_t)(EDX));
  /* 106adf4a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 106adf4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adf4f push eax */
  push32((uint32_t)(EAX));
  /* 106adf50 push 1 */
  push32((uint32_t)(0x1u));
  /* 106adf52 call 0x106b14c0 */
  push32(0x106adf57u); f_106b14c0();
  /* 106adf57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adf5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adf5d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adf5f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adf62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adf65 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adf68 push edx */
  push32((uint32_t)(EDX));
  /* 106adf69 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 106adf6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adf6e push eax */
  push32((uint32_t)(EAX));
  /* 106adf6f push 1 */
  push32((uint32_t)(0x1u));
  /* 106adf71 call 0x106b14c0 */
  push32(0x106adf76u); f_106b14c0();
  /* 106adf76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adf79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adf7c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adf7e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adf81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adf84 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adf87 push edx */
  push32((uint32_t)(EDX));
  /* 106adf88 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 106adf8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adf8d push eax */
  push32((uint32_t)(EAX));
  /* 106adf8e push 1 */
  push32((uint32_t)(0x1u));
  /* 106adf90 call 0x106b14c0 */
  push32(0x106adf95u); f_106b14c0();
  /* 106adf95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adf98 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adf9b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adf9d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adfa0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adfa3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adfa6 push edx */
  push32((uint32_t)(EDX));
  /* 106adfa7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 106adfa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adfac push eax */
  push32((uint32_t)(EAX));
  /* 106adfad push 1 */
  push32((uint32_t)(0x1u));
  /* 106adfaf call 0x106b14c0 */
  push32(0x106adfb4u); f_106b14c0();
  /* 106adfb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adfb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adfba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adfbc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adfbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adfc2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adfc8 push edx */
  push32((uint32_t)(EDX));
  /* 106adfc9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 106adfcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adfce push eax */
  push32((uint32_t)(EAX));
  /* 106adfcf push 1 */
  push32((uint32_t)(0x1u));
  /* 106adfd1 call 0x106b14c0 */
  push32(0x106adfd6u); f_106b14c0();
  /* 106adfd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adfd9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adfdc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106adfde mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106adfe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106adfe4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106adfea push edx */
  push32((uint32_t)(EDX));
  /* 106adfeb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 106adfed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106adff0 push eax */
  push32((uint32_t)(EAX));
  /* 106adff1 push 1 */
  push32((uint32_t)(0x1u));
  /* 106adff3 call 0x106b14c0 */
  push32(0x106adff8u); f_106b14c0();
  /* 106adff8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106adffb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106adffe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae000 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ae003 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae006 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae00c push edx */
  push32((uint32_t)(EDX));
  /* 106ae00d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 106ae00f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae012 push eax */
  push32((uint32_t)(EAX));
  /* 106ae013 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae015 call 0x106b14c0 */
  push32(0x106ae01au); f_106b14c0();
  /* 106ae01a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae01d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ae020 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae022 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ae025 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae028 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae02e push edx */
  push32((uint32_t)(EDX));
  /* 106ae02f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 106ae031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae034 push eax */
  push32((uint32_t)(EAX));
  /* 106ae035 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae037 call 0x106b14c0 */
  push32(0x106ae03cu); f_106b14c0();
  /* 106ae03c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae03f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ae042 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae044 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ae047 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae04a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae050 push edx */
  push32((uint32_t)(EDX));
  /* 106ae051 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 106ae053 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae056 push eax */
  push32((uint32_t)(EAX));
  /* 106ae057 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae059 call 0x106b14c0 */
  push32(0x106ae05eu); f_106b14c0();
  /* 106ae05e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae061 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ae064 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae066 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ae069 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae06c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae072 push edx */
  push32((uint32_t)(EDX));
  /* 106ae073 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 106ae075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae078 push eax */
  push32((uint32_t)(EAX));
  /* 106ae079 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae07b call 0x106b14c0 */
  push32(0x106ae080u); f_106b14c0();
  /* 106ae080 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae083 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ae086 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae088 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ae08b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae08e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae094 push edx */
  push32((uint32_t)(EDX));
  /* 106ae095 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 106ae097 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae09a push eax */
  push32((uint32_t)(EAX));
  /* 106ae09b push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae09d call 0x106b14c0 */
  push32(0x106ae0a2u); f_106b14c0();
  /* 106ae0a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae0a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ae0a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae0aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ae0ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae0b0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae0b6 push edx */
  push32((uint32_t)(EDX));
  /* 106ae0b7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 106ae0b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae0bc push eax */
  push32((uint32_t)(EAX));
  /* 106ae0bd push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae0bf call 0x106b14c0 */
  push32(0x106ae0c4u); f_106b14c0();
  /* 106ae0c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae0c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ae0ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae0cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ae0cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae0d2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae0d8 push edx */
  push32((uint32_t)(EDX));
  /* 106ae0d9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 106ae0db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae0de push eax */
  push32((uint32_t)(EAX));
  /* 106ae0df push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae0e1 call 0x106b14c0 */
  push32(0x106ae0e6u); f_106b14c0();
  /* 106ae0e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae0e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ae0ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae0ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ae0f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae0f4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae0fa push edx */
  push32((uint32_t)(EDX));
  /* 106ae0fb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 106ae0fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae100 push eax */
  push32((uint32_t)(EAX));
  /* 106ae101 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae103 call 0x106b14c0 */
  push32(0x106ae108u); f_106b14c0();
  /* 106ae108 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae10b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ae10e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae110 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ae113 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae116 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae11c push edx */
  push32((uint32_t)(EDX));
  /* 106ae11d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 106ae122 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae125 push eax */
  push32((uint32_t)(EAX));
  /* 106ae126 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae128 call 0x106b14c0 */
  push32(0x106ae12du); f_106b14c0();
  /* 106ae12d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae130 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106ae133 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae135 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106ae138 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_106ae13b:;
  /* 106ae13b mov esp, ebp */
  ESP = (EBP);
  /* 106ae13d pop ebp */
  EBP = (pop32());
  /* 106ae13e ret  */
  ESPCHK(0x106adbb0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x106ae140 (779 bytes, 265 insns) */
void f_106ae140(void) {
  FTRACE(0x106ae140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ae140 push ebp */
  push32((uint32_t)(EBP));
  /* 106ae141 mov ebp, esp */
  EBP = (ESP);
  /* 106ae143 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ae147 jne 0x106ae14e */
  if (!C.zf) goto L_106ae14e;
  /* 106ae149 jmp 0x106ae449 */
  goto L_106ae449;
L_106ae14e:;
  /* 106ae14e push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae153 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106ae156 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae157 call 0x106a3d90 */
  push32(0x106ae15cu); f_106a3d90();
  /* 106ae15c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae15f push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae161 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae164 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106ae167 push eax */
  push32((uint32_t)(EAX));
  /* 106ae168 call 0x106a3d90 */
  push32(0x106ae16du); f_106a3d90();
  /* 106ae16d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae170 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae172 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae175 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106ae178 push edx */
  push32((uint32_t)(EDX));
  /* 106ae179 call 0x106a3d90 */
  push32(0x106ae17eu); f_106a3d90();
  /* 106ae17e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae181 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae186 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106ae189 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae18a call 0x106a3d90 */
  push32(0x106ae18fu); f_106a3d90();
  /* 106ae18f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae192 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae194 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae197 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106ae19a push eax */
  push32((uint32_t)(EAX));
  /* 106ae19b call 0x106a3d90 */
  push32(0x106ae1a0u); f_106a3d90();
  /* 106ae1a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae1a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae1a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae1a8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106ae1ab push edx */
  push32((uint32_t)(EDX));
  /* 106ae1ac call 0x106a3d90 */
  push32(0x106ae1b1u); f_106a3d90();
  /* 106ae1b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae1b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae1b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae1b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106ae1bb push ecx */
  push32((uint32_t)(ECX));
  /* 106ae1bc call 0x106a3d90 */
  push32(0x106ae1c1u); f_106a3d90();
  /* 106ae1c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae1c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae1c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae1c9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 106ae1cc push eax */
  push32((uint32_t)(EAX));
  /* 106ae1cd call 0x106a3d90 */
  push32(0x106ae1d2u); f_106a3d90();
  /* 106ae1d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae1d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae1d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae1da mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 106ae1dd push edx */
  push32((uint32_t)(EDX));
  /* 106ae1de call 0x106a3d90 */
  push32(0x106ae1e3u); f_106a3d90();
  /* 106ae1e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae1e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae1e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae1eb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 106ae1ee push ecx */
  push32((uint32_t)(ECX));
  /* 106ae1ef call 0x106a3d90 */
  push32(0x106ae1f4u); f_106a3d90();
  /* 106ae1f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae1f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae1f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae1fc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 106ae1ff push eax */
  push32((uint32_t)(EAX));
  /* 106ae200 call 0x106a3d90 */
  push32(0x106ae205u); f_106a3d90();
  /* 106ae205 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae208 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae20a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae20d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 106ae210 push edx */
  push32((uint32_t)(EDX));
  /* 106ae211 call 0x106a3d90 */
  push32(0x106ae216u); f_106a3d90();
  /* 106ae216 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae219 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae21b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae21e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 106ae221 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae222 call 0x106a3d90 */
  push32(0x106ae227u); f_106a3d90();
  /* 106ae227 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae22a push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae22c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae22f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106ae232 push eax */
  push32((uint32_t)(EAX));
  /* 106ae233 call 0x106a3d90 */
  push32(0x106ae238u); f_106a3d90();
  /* 106ae238 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae23b push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae23d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae240 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 106ae243 push edx */
  push32((uint32_t)(EDX));
  /* 106ae244 call 0x106a3d90 */
  push32(0x106ae249u); f_106a3d90();
  /* 106ae249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae24c push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae24e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae251 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 106ae254 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae255 call 0x106a3d90 */
  push32(0x106ae25au); f_106a3d90();
  /* 106ae25a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae25d push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae25f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae262 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 106ae265 push eax */
  push32((uint32_t)(EAX));
  /* 106ae266 call 0x106a3d90 */
  push32(0x106ae26bu); f_106a3d90();
  /* 106ae26b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae26e push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae270 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae273 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 106ae276 push edx */
  push32((uint32_t)(EDX));
  /* 106ae277 call 0x106a3d90 */
  push32(0x106ae27cu); f_106a3d90();
  /* 106ae27c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae27f push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae281 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae284 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 106ae287 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae288 call 0x106a3d90 */
  push32(0x106ae28du); f_106a3d90();
  /* 106ae28d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae290 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae292 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae295 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 106ae298 push eax */
  push32((uint32_t)(EAX));
  /* 106ae299 call 0x106a3d90 */
  push32(0x106ae29eu); f_106a3d90();
  /* 106ae29e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae2a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae2a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae2a6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 106ae2a9 push edx */
  push32((uint32_t)(EDX));
  /* 106ae2aa call 0x106a3d90 */
  push32(0x106ae2afu); f_106a3d90();
  /* 106ae2af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae2b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae2b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae2b7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 106ae2ba push ecx */
  push32((uint32_t)(ECX));
  /* 106ae2bb call 0x106a3d90 */
  push32(0x106ae2c0u); f_106a3d90();
  /* 106ae2c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae2c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae2c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae2c8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 106ae2cb push eax */
  push32((uint32_t)(EAX));
  /* 106ae2cc call 0x106a3d90 */
  push32(0x106ae2d1u); f_106a3d90();
  /* 106ae2d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae2d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae2d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae2d9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 106ae2dc push edx */
  push32((uint32_t)(EDX));
  /* 106ae2dd call 0x106a3d90 */
  push32(0x106ae2e2u); f_106a3d90();
  /* 106ae2e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae2e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae2e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae2ea mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 106ae2ed push ecx */
  push32((uint32_t)(ECX));
  /* 106ae2ee call 0x106a3d90 */
  push32(0x106ae2f3u); f_106a3d90();
  /* 106ae2f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae2f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae2f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae2fb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 106ae2fe push eax */
  push32((uint32_t)(EAX));
  /* 106ae2ff call 0x106a3d90 */
  push32(0x106ae304u); f_106a3d90();
  /* 106ae304 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae307 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae309 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae30c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 106ae30f push edx */
  push32((uint32_t)(EDX));
  /* 106ae310 call 0x106a3d90 */
  push32(0x106ae315u); f_106a3d90();
  /* 106ae315 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae318 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae31a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae31d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 106ae320 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae321 call 0x106a3d90 */
  push32(0x106ae326u); f_106a3d90();
  /* 106ae326 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae329 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae32b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae32e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 106ae331 push eax */
  push32((uint32_t)(EAX));
  /* 106ae332 call 0x106a3d90 */
  push32(0x106ae337u); f_106a3d90();
  /* 106ae337 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae33a push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae33c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae33f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 106ae342 push edx */
  push32((uint32_t)(EDX));
  /* 106ae343 call 0x106a3d90 */
  push32(0x106ae348u); f_106a3d90();
  /* 106ae348 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae34b push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae34d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae350 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 106ae353 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae354 call 0x106a3d90 */
  push32(0x106ae359u); f_106a3d90();
  /* 106ae359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae35c push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae35e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae361 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 106ae364 push eax */
  push32((uint32_t)(EAX));
  /* 106ae365 call 0x106a3d90 */
  push32(0x106ae36au); f_106a3d90();
  /* 106ae36a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae36d push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae36f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae372 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 106ae378 push edx */
  push32((uint32_t)(EDX));
  /* 106ae379 call 0x106a3d90 */
  push32(0x106ae37eu); f_106a3d90();
  /* 106ae37e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae381 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae383 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae386 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 106ae38c push ecx */
  push32((uint32_t)(ECX));
  /* 106ae38d call 0x106a3d90 */
  push32(0x106ae392u); f_106a3d90();
  /* 106ae392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae395 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae397 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae39a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 106ae3a0 push eax */
  push32((uint32_t)(EAX));
  /* 106ae3a1 call 0x106a3d90 */
  push32(0x106ae3a6u); f_106a3d90();
  /* 106ae3a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae3a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae3ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae3ae mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 106ae3b4 push edx */
  push32((uint32_t)(EDX));
  /* 106ae3b5 call 0x106a3d90 */
  push32(0x106ae3bau); f_106a3d90();
  /* 106ae3ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae3bd push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae3bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae3c2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 106ae3c8 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae3c9 call 0x106a3d90 */
  push32(0x106ae3ceu); f_106a3d90();
  /* 106ae3ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae3d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae3d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae3d6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 106ae3dc push eax */
  push32((uint32_t)(EAX));
  /* 106ae3dd call 0x106a3d90 */
  push32(0x106ae3e2u); f_106a3d90();
  /* 106ae3e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae3e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae3e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae3ea mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 106ae3f0 push edx */
  push32((uint32_t)(EDX));
  /* 106ae3f1 call 0x106a3d90 */
  push32(0x106ae3f6u); f_106a3d90();
  /* 106ae3f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae3f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae3fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae3fe mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 106ae404 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae405 call 0x106a3d90 */
  push32(0x106ae40au); f_106a3d90();
  /* 106ae40a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae40d push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae40f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae412 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 106ae418 push eax */
  push32((uint32_t)(EAX));
  /* 106ae419 call 0x106a3d90 */
  push32(0x106ae41eu); f_106a3d90();
  /* 106ae41e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae421 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae423 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae426 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 106ae42c push edx */
  push32((uint32_t)(EDX));
  /* 106ae42d call 0x106a3d90 */
  push32(0x106ae432u); f_106a3d90();
  /* 106ae432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae435 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae437 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae43a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 106ae440 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae441 call 0x106a3d90 */
  push32(0x106ae446u); f_106a3d90();
  /* 106ae446 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ae449:;
  /* 106ae449 pop ebp */
  EBP = (pop32());
  /* 106ae44a ret  */
  ESPCHK(0x106ae140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e450 @ 0x106ae450 (678 bytes, 180 insns) */
void f_106ae450(void) {
  FTRACE(0x106ae450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ae450 push ebp */
  push32((uint32_t)(EBP));
  /* 106ae451 mov ebp, esp */
  EBP = (ESP);
  /* 106ae453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ae456 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106ae45d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ae45f mov ax, word ptr [0x106cf6f2] */
  AX = (r16((uint32_t)(0x106cf6f2)));
  /* 106ae465 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ae468 cmp dword ptr [0x106cf698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ae46f je 0x106ae5ca */
  if (C.zf) goto L_106ae5ca;
  /* 106ae475 push 0x106cf6c0 */
  push32((uint32_t)(0x106cf6c0u));
  /* 106ae47a push 0xe */
  push32((uint32_t)(0xeu));
  /* 106ae47c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae47f push ecx */
  push32((uint32_t)(ECX));
  /* 106ae480 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae482 call 0x106b14c0 */
  push32(0x106ae487u); f_106b14c0();
  /* 106ae487 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae48a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae48d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 106ae48f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106ae492 push 0x106cf6c4 */
  push32((uint32_t)(0x106cf6c4u));
  /* 106ae497 push 0xf */
  push32((uint32_t)(0xfu));
  /* 106ae499 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae49c push eax */
  push32((uint32_t)(EAX));
  /* 106ae49d push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae49f call 0x106b14c0 */
  push32(0x106ae4a4u); f_106b14c0();
  /* 106ae4a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae4a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae4aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae4ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ae4af push 0x106cf6c8 */
  push32((uint32_t)(0x106cf6c8u));
  /* 106ae4b4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 106ae4b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae4b9 push edx */
  push32((uint32_t)(EDX));
  /* 106ae4ba push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae4bc call 0x106b14c0 */
  push32(0x106ae4c1u); f_106b14c0();
  /* 106ae4c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae4c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae4c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae4c9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ae4cc mov edx, dword ptr [0x106cf6c8] */
  EDX = (r32((uint32_t)(0x106cf6c8)));
  /* 106ae4d2 push edx */
  push32((uint32_t)(EDX));
  /* 106ae4d3 call 0x106ae700 */
  push32(0x106ae4d8u); f_106ae700();
  /* 106ae4d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae4db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ae4df je 0x106ae539 */
  if (C.zf) goto L_106ae539;
  /* 106ae4e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae4e3 mov eax, dword ptr [0x106cf6c0] */
  EAX = (r32((uint32_t)(0x106cf6c0)));
  /* 106ae4e8 push eax */
  push32((uint32_t)(EAX));
  /* 106ae4e9 call 0x106a3d90 */
  push32(0x106ae4eeu); f_106a3d90();
  /* 106ae4ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae4f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae4f3 mov ecx, dword ptr [0x106cf6c4] */
  ECX = (r32((uint32_t)(0x106cf6c4)));
  /* 106ae4f9 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae4fa call 0x106a3d90 */
  push32(0x106ae4ffu); f_106a3d90();
  /* 106ae4ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae502 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae504 mov edx, dword ptr [0x106cf6c8] */
  EDX = (r32((uint32_t)(0x106cf6c8)));
  /* 106ae50a push edx */
  push32((uint32_t)(EDX));
  /* 106ae50b call 0x106a3d90 */
  push32(0x106ae510u); f_106a3d90();
  /* 106ae510 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae513 mov dword ptr [0x106cf6c0], 0 */
  w32((uint32_t)(0x106cf6c0), (0x0u));
  /* 106ae51d mov dword ptr [0x106cf6c4], 0 */
  w32((uint32_t)(0x106cf6c4), (0x0u));
  /* 106ae527 mov dword ptr [0x106cf6c8], 0 */
  w32((uint32_t)(0x106cf6c8), (0x0u));
  /* 106ae531 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ae534 jmp 0x106ae6f2 */
  goto L_106ae6f2;
L_106ae539:;
  /* 106ae539 mov eax, dword ptr [0x106ced88] */
  EAX = (r32((uint32_t)(0x106ced88)));
  /* 106ae53e cmp dword ptr [eax], 0x106ced50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x106ced50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ae544 je 0x106ae580 */
  if (C.zf) goto L_106ae580;
  /* 106ae546 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae548 mov ecx, dword ptr [0x106ced88] */
  ECX = (r32((uint32_t)(0x106ced88)));
  /* 106ae54e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106ae550 push edx */
  push32((uint32_t)(EDX));
  /* 106ae551 call 0x106a3d90 */
  push32(0x106ae556u); f_106a3d90();
  /* 106ae556 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae559 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae55b mov eax, dword ptr [0x106ced88] */
  EAX = (r32((uint32_t)(0x106ced88)));
  /* 106ae560 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106ae563 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae564 call 0x106a3d90 */
  push32(0x106ae569u); f_106a3d90();
  /* 106ae569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae56c push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae56e mov edx, dword ptr [0x106ced88] */
  EDX = (r32((uint32_t)(0x106ced88)));
  /* 106ae574 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106ae577 push eax */
  push32((uint32_t)(EAX));
  /* 106ae578 call 0x106a3d90 */
  push32(0x106ae57du); f_106a3d90();
  /* 106ae57d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106ae580:;
  /* 106ae580 mov ecx, dword ptr [0x106ced88] */
  ECX = (r32((uint32_t)(0x106ced88)));
  /* 106ae586 mov edx, dword ptr [0x106cf6c0] */
  EDX = (r32((uint32_t)(0x106cf6c0)));
  /* 106ae58c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106ae58e mov eax, dword ptr [0x106ced88] */
  EAX = (r32((uint32_t)(0x106ced88)));
  /* 106ae593 mov ecx, dword ptr [0x106cf6c4] */
  ECX = (r32((uint32_t)(0x106cf6c4)));
  /* 106ae599 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 106ae59c mov edx, dword ptr [0x106ced88] */
  EDX = (r32((uint32_t)(0x106ced88)));
  /* 106ae5a2 mov eax, dword ptr [0x106cf6c8] */
  EAX = (r32((uint32_t)(0x106cf6c8)));
  /* 106ae5a7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106ae5aa mov ecx, dword ptr [0x106ced88] */
  ECX = (r32((uint32_t)(0x106ced88)));
  /* 106ae5b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106ae5b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106ae5b4 mov byte ptr [0x106cdea8], al */
  w8((uint32_t)(0x106cdea8), (AL));
  /* 106ae5b9 mov dword ptr [0x106cdeac], 1 */
  w32((uint32_t)(0x106cdeac), (0x1u));
  /* 106ae5c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ae5c5 jmp 0x106ae6f2 */
  goto L_106ae6f2;
L_106ae5ca:;
  /* 106ae5ca push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae5cc mov ecx, dword ptr [0x106cf6c0] */
  ECX = (r32((uint32_t)(0x106cf6c0)));
  /* 106ae5d2 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae5d3 call 0x106a3d90 */
  push32(0x106ae5d8u); f_106a3d90();
  /* 106ae5d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae5db push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae5dd mov edx, dword ptr [0x106cf6c4] */
  EDX = (r32((uint32_t)(0x106cf6c4)));
  /* 106ae5e3 push edx */
  push32((uint32_t)(EDX));
  /* 106ae5e4 call 0x106a3d90 */
  push32(0x106ae5e9u); f_106a3d90();
  /* 106ae5e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae5ec push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae5ee mov eax, dword ptr [0x106cf6c8] */
  EAX = (r32((uint32_t)(0x106cf6c8)));
  /* 106ae5f3 push eax */
  push32((uint32_t)(EAX));
  /* 106ae5f4 call 0x106a3d90 */
  push32(0x106ae5f9u); f_106a3d90();
  /* 106ae5f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae5fc mov dword ptr [0x106cf6c0], 0 */
  w32((uint32_t)(0x106cf6c0), (0x0u));
  /* 106ae606 mov dword ptr [0x106cf6c4], 0 */
  w32((uint32_t)(0x106cf6c4), (0x0u));
  /* 106ae610 mov dword ptr [0x106cf6c8], 0 */
  w32((uint32_t)(0x106cf6c8), (0x0u));
  /* 106ae61a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 106ae61f push 0x106cb094 */
  push32((uint32_t)(0x106cb094u));
  /* 106ae624 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae626 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae628 call 0x106a3300 */
  push32(0x106ae62du); f_106a3300();
  /* 106ae62d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae630 mov ecx, dword ptr [0x106ced88] */
  ECX = (r32((uint32_t)(0x106ced88)));
  /* 106ae636 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106ae638 mov edx, dword ptr [0x106ced88] */
  EDX = (r32((uint32_t)(0x106ced88)));
  /* 106ae63e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ae641 jne 0x106ae64b */
  if (!C.zf) goto L_106ae64b;
  /* 106ae643 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ae646 jmp 0x106ae6f2 */
  goto L_106ae6f2;
L_106ae64b:;
  /* 106ae64b push 0x106cb064 */
  push32((uint32_t)(0x106cb064u));
  /* 106ae650 mov eax, dword ptr [0x106ced88] */
  EAX = (r32((uint32_t)(0x106ced88)));
  /* 106ae655 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106ae657 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae658 call 0x106a62b0 */
  push32(0x106ae65du); f_106a62b0();
  /* 106ae65d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae660 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 106ae665 push 0x106cb094 */
  push32((uint32_t)(0x106cb094u));
  /* 106ae66a push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae66c push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae66e call 0x106a3300 */
  push32(0x106ae673u); f_106a3300();
  /* 106ae673 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae676 mov edx, dword ptr [0x106ced88] */
  EDX = (r32((uint32_t)(0x106ced88)));
  /* 106ae67c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 106ae67f mov eax, dword ptr [0x106ced88] */
  EAX = (r32((uint32_t)(0x106ced88)));
  /* 106ae684 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ae688 jne 0x106ae68f */
  if (!C.zf) goto L_106ae68f;
  /* 106ae68a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ae68d jmp 0x106ae6f2 */
  goto L_106ae6f2;
L_106ae68f:;
  /* 106ae68f mov ecx, dword ptr [0x106ced88] */
  ECX = (r32((uint32_t)(0x106ced88)));
  /* 106ae695 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106ae698 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106ae69b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 106ae6a0 push 0x106cb094 */
  push32((uint32_t)(0x106cb094u));
  /* 106ae6a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae6a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae6a9 call 0x106a3300 */
  push32(0x106ae6aeu); f_106a3300();
  /* 106ae6ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae6b1 mov ecx, dword ptr [0x106ced88] */
  ECX = (r32((uint32_t)(0x106ced88)));
  /* 106ae6b7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 106ae6ba mov edx, dword ptr [0x106ced88] */
  EDX = (r32((uint32_t)(0x106ced88)));
  /* 106ae6c0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ae6c4 jne 0x106ae6cb */
  if (!C.zf) goto L_106ae6cb;
  /* 106ae6c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ae6c9 jmp 0x106ae6f2 */
  goto L_106ae6f2;
L_106ae6cb:;
  /* 106ae6cb mov eax, dword ptr [0x106ced88] */
  EAX = (r32((uint32_t)(0x106ced88)));
  /* 106ae6d0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106ae6d3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 106ae6d6 mov edx, dword ptr [0x106ced88] */
  EDX = (r32((uint32_t)(0x106ced88)));
  /* 106ae6dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106ae6de mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106ae6e0 mov byte ptr [0x106cdea8], cl */
  w8((uint32_t)(0x106cdea8), (CL));
  /* 106ae6e6 mov dword ptr [0x106cdeac], 1 */
  w32((uint32_t)(0x106cdeac), (0x1u));
  /* 106ae6f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106ae6f2:;
  /* 106ae6f2 mov esp, ebp */
  ESP = (EBP);
  /* 106ae6f4 pop ebp */
  EBP = (pop32());
  /* 106ae6f5 ret  */
  ESPCHK(0x106ae450u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x106ae700 (125 bytes, 49 insns) */
void f_106ae700(void) {
  FTRACE(0x106ae700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ae700 push ebp */
  push32((uint32_t)(EBP));
  /* 106ae701 mov ebp, esp */
  EBP = (ESP);
  /* 106ae703 push ecx */
  push32((uint32_t)(ECX));
L_106ae704:;
  /* 106ae704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae707 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106ae70a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106ae70c je 0x106ae779 */
  if (C.zf) goto L_106ae779;
  /* 106ae70e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae711 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106ae714 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ae717 jl 0x106ae73d */
  if ((C.sf!=C.of)) goto L_106ae73d;
  /* 106ae719 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae71c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106ae71f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ae722 jg 0x106ae73d */
  if ((!C.zf&&C.sf==C.of)) goto L_106ae73d;
  /* 106ae724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae727 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106ae72a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ae72d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae730 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 106ae732 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae735 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae738 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106ae73b jmp 0x106ae777 */
  goto L_106ae777;
L_106ae73d:;
  /* 106ae73d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae740 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106ae743 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ae746 jne 0x106ae76e */
  if (!C.zf) goto L_106ae76e;
  /* 106ae748 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae74b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106ae74e:;
  /* 106ae74e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae751 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae754 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 106ae757 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106ae759 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae75c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae75f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106ae762 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae765 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106ae768 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ae76a jne 0x106ae74e */
  if (!C.zf) goto L_106ae74e;
  /* 106ae76c jmp 0x106ae777 */
  goto L_106ae777;
L_106ae76e:;
  /* 106ae76e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae771 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae774 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_106ae777:;
  /* 106ae777 jmp 0x106ae704 */
  goto L_106ae704;
L_106ae779:;
  /* 106ae779 mov esp, ebp */
  ESP = (EBP);
  /* 106ae77b pop ebp */
  EBP = (pop32());
  /* 106ae77c ret  */
  ESPCHK(0x106ae700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e780 @ 0x106ae780 (304 bytes, 85 insns) */
void f_106ae780(void) {
  FTRACE(0x106ae780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ae780 push ebp */
  push32((uint32_t)(EBP));
  /* 106ae781 mov ebp, esp */
  EBP = (ESP);
  /* 106ae783 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae784 cmp dword ptr [0x106cf694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ae78b je 0x106ae84c */
  if (C.zf) goto L_106ae84c;
  /* 106ae791 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 106ae793 push 0x106cb0a0 */
  push32((uint32_t)(0x106cb0a0u));
  /* 106ae798 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae79a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 106ae79c push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae79e call 0x106a3710 */
  push32(0x106ae7a3u); f_106a3710();
  /* 106ae7a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae7a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ae7a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ae7ad jne 0x106ae7b9 */
  if (!C.zf) goto L_106ae7b9;
  /* 106ae7af mov eax, 1 */
  EAX = (0x1u);
  /* 106ae7b4 jmp 0x106ae8ac */
  goto L_106ae8ac;
L_106ae7b9:;
  /* 106ae7b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae7bc push eax */
  push32((uint32_t)(EAX));
  /* 106ae7bd call 0x106ae8b0 */
  push32(0x106ae7c2u); f_106ae8b0();
  /* 106ae7c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae7c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106ae7c7 je 0x106ae7ed */
  if (C.zf) goto L_106ae7ed;
  /* 106ae7c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae7cc push ecx */
  push32((uint32_t)(ECX));
  /* 106ae7cd call 0x106aeb40 */
  push32(0x106ae7d2u); f_106aeb40();
  /* 106ae7d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae7d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae7d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae7da push edx */
  push32((uint32_t)(EDX));
  /* 106ae7db call 0x106a3d90 */
  push32(0x106ae7e0u); f_106a3d90();
  /* 106ae7e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae7e3 mov eax, 1 */
  EAX = (0x1u);
  /* 106ae7e8 jmp 0x106ae8ac */
  goto L_106ae8ac;
L_106ae7ed:;
  /* 106ae7ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae7f0 mov ecx, dword ptr [0x106ced88] */
  ECX = (r32((uint32_t)(0x106ced88)));
  /* 106ae7f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106ae7f8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106ae7fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae7fd mov ecx, dword ptr [0x106ced88] */
  ECX = (r32((uint32_t)(0x106ced88)));
  /* 106ae803 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106ae806 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106ae809 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae80c mov ecx, dword ptr [0x106ced88] */
  ECX = (r32((uint32_t)(0x106ced88)));
  /* 106ae812 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106ae815 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 106ae818 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae81b mov dword ptr [0x106ced88], eax */
  w32((uint32_t)(0x106ced88), (EAX));
  /* 106ae820 mov ecx, dword ptr [0x106cf6cc] */
  ECX = (r32((uint32_t)(0x106cf6cc)));
  /* 106ae826 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae827 call 0x106aeb40 */
  push32(0x106ae82cu); f_106aeb40();
  /* 106ae82c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae82f push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae831 mov edx, dword ptr [0x106cf6cc] */
  EDX = (r32((uint32_t)(0x106cf6cc)));
  /* 106ae837 push edx */
  push32((uint32_t)(EDX));
  /* 106ae838 call 0x106a3d90 */
  push32(0x106ae83du); f_106a3d90();
  /* 106ae83d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae840 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae843 mov dword ptr [0x106cf6cc], eax */
  w32((uint32_t)(0x106cf6cc), (EAX));
  /* 106ae848 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ae84a jmp 0x106ae8ac */
  goto L_106ae8ac;
L_106ae84c:;
  /* 106ae84c mov ecx, dword ptr [0x106ced88] */
  ECX = (r32((uint32_t)(0x106ced88)));
  /* 106ae852 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106ae854 mov dword ptr [0x106ced58], edx */
  w32((uint32_t)(0x106ced58), (EDX));
  /* 106ae85a mov eax, dword ptr [0x106ced88] */
  EAX = (r32((uint32_t)(0x106ced88)));
  /* 106ae85f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106ae862 mov dword ptr [0x106ced5c], ecx */
  w32((uint32_t)(0x106ced5c), (ECX));
  /* 106ae868 mov edx, dword ptr [0x106ced88] */
  EDX = (r32((uint32_t)(0x106ced88)));
  /* 106ae86e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106ae871 mov dword ptr [0x106ced60], eax */
  w32((uint32_t)(0x106ced60), (EAX));
  /* 106ae876 mov dword ptr [0x106ced88], 0x106ced58 */
  w32((uint32_t)(0x106ced88), (0x106ced58u));
  /* 106ae880 mov ecx, dword ptr [0x106cf6cc] */
  ECX = (r32((uint32_t)(0x106cf6cc)));
  /* 106ae886 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae887 call 0x106aeb40 */
  push32(0x106ae88cu); f_106aeb40();
  /* 106ae88c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae88f push 2 */
  push32((uint32_t)(0x2u));
  /* 106ae891 mov edx, dword ptr [0x106cf6cc] */
  EDX = (r32((uint32_t)(0x106cf6cc)));
  /* 106ae897 push edx */
  push32((uint32_t)(EDX));
  /* 106ae898 call 0x106a3d90 */
  push32(0x106ae89du); f_106a3d90();
  /* 106ae89d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae8a0 mov dword ptr [0x106cf6cc], 0 */
  w32((uint32_t)(0x106cf6cc), (0x0u));
  /* 106ae8aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106ae8ac:;
  /* 106ae8ac mov esp, ebp */
  ESP = (EBP);
  /* 106ae8ae pop ebp */
  EBP = (pop32());
  /* 106ae8af ret  */
  ESPCHK(0x106ae780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8b0 @ 0x106ae8b0 (525 bytes, 200 insns) */
void f_106ae8b0(void) {
  FTRACE(0x106ae8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106ae8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106ae8b1 mov ebp, esp */
  EBP = (ESP);
  /* 106ae8b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106ae8b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106ae8bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106ae8bf mov ax, word ptr [0x106cf6ec] */
  AX = (r16((uint32_t)(0x106cf6ec)));
  /* 106ae8c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106ae8c8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106ae8cc jne 0x106ae8d6 */
  if (!C.zf) goto L_106ae8d6;
  /* 106ae8ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106ae8d1 jmp 0x106aeab9 */
  goto L_106aeab9;
L_106ae8d6:;
  /* 106ae8d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae8d9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae8dc push ecx */
  push32((uint32_t)(ECX));
  /* 106ae8dd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 106ae8df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae8e2 push edx */
  push32((uint32_t)(EDX));
  /* 106ae8e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae8e5 call 0x106b14c0 */
  push32(0x106ae8eau); f_106b14c0();
  /* 106ae8ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae8ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae8f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae8f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ae8f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae8f8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae8fb push edx */
  push32((uint32_t)(EDX));
  /* 106ae8fc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 106ae8fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae901 push eax */
  push32((uint32_t)(EAX));
  /* 106ae902 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae904 call 0x106b14c0 */
  push32(0x106ae909u); f_106b14c0();
  /* 106ae909 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae90c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae90f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae911 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ae914 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae917 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae91a push edx */
  push32((uint32_t)(EDX));
  /* 106ae91b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 106ae91d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae920 push eax */
  push32((uint32_t)(EAX));
  /* 106ae921 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae923 call 0x106b14c0 */
  push32(0x106ae928u); f_106b14c0();
  /* 106ae928 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae92b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae92e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae930 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ae933 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae936 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae939 push edx */
  push32((uint32_t)(EDX));
  /* 106ae93a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 106ae93c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae93f push eax */
  push32((uint32_t)(EAX));
  /* 106ae940 push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae942 call 0x106b14c0 */
  push32(0x106ae947u); f_106b14c0();
  /* 106ae947 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae94a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae94d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae94f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ae952 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae955 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae958 push edx */
  push32((uint32_t)(EDX));
  /* 106ae959 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 106ae95b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae95e push eax */
  push32((uint32_t)(EAX));
  /* 106ae95f push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae961 call 0x106b14c0 */
  push32(0x106ae966u); f_106b14c0();
  /* 106ae966 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae969 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae96c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae96e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ae971 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae974 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106ae977 push eax */
  push32((uint32_t)(EAX));
  /* 106ae978 call 0x106aeac0 */
  push32(0x106ae97du); f_106aeac0();
  /* 106ae97d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae980 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae983 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae986 push ecx */
  push32((uint32_t)(ECX));
  /* 106ae987 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 106ae989 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae98c push edx */
  push32((uint32_t)(EDX));
  /* 106ae98d push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae98f call 0x106b14c0 */
  push32(0x106ae994u); f_106b14c0();
  /* 106ae994 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae997 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae99a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae99c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ae99f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae9a2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae9a5 push edx */
  push32((uint32_t)(EDX));
  /* 106ae9a6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 106ae9a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae9ab push eax */
  push32((uint32_t)(EAX));
  /* 106ae9ac push 1 */
  push32((uint32_t)(0x1u));
  /* 106ae9ae call 0x106b14c0 */
  push32(0x106ae9b3u); f_106b14c0();
  /* 106ae9b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae9b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae9b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae9bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ae9be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae9c1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae9c4 push edx */
  push32((uint32_t)(EDX));
  /* 106ae9c5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 106ae9c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae9ca push eax */
  push32((uint32_t)(EAX));
  /* 106ae9cb push 0 */
  push32((uint32_t)(0x0u));
  /* 106ae9cd call 0x106b14c0 */
  push32(0x106ae9d2u); f_106b14c0();
  /* 106ae9d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae9d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae9d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae9da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ae9dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae9e0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae9e3 push edx */
  push32((uint32_t)(EDX));
  /* 106ae9e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106ae9e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106ae9e9 push eax */
  push32((uint32_t)(EAX));
  /* 106ae9ea push 0 */
  push32((uint32_t)(0x0u));
  /* 106ae9ec call 0x106b14c0 */
  push32(0x106ae9f1u); f_106b14c0();
  /* 106ae9f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106ae9f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106ae9f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106ae9f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106ae9fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106ae9ff add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aea02 push edx */
  push32((uint32_t)(EDX));
  /* 106aea03 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 106aea05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aea08 push eax */
  push32((uint32_t)(EAX));
  /* 106aea09 push 0 */
  push32((uint32_t)(0x0u));
  /* 106aea0b call 0x106b14c0 */
  push32(0x106aea10u); f_106b14c0();
  /* 106aea10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aea13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aea16 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106aea18 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106aea1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aea1e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aea21 push edx */
  push32((uint32_t)(EDX));
  /* 106aea22 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 106aea24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aea27 push eax */
  push32((uint32_t)(EAX));
  /* 106aea28 push 0 */
  push32((uint32_t)(0x0u));
  /* 106aea2a call 0x106b14c0 */
  push32(0x106aea2fu); f_106b14c0();
  /* 106aea2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aea32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aea35 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106aea37 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106aea3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aea3d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aea40 push edx */
  push32((uint32_t)(EDX));
  /* 106aea41 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 106aea43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aea46 push eax */
  push32((uint32_t)(EAX));
  /* 106aea47 push 0 */
  push32((uint32_t)(0x0u));
  /* 106aea49 call 0x106b14c0 */
  push32(0x106aea4eu); f_106b14c0();
  /* 106aea4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aea51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aea54 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106aea56 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106aea59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aea5c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aea5f push edx */
  push32((uint32_t)(EDX));
  /* 106aea60 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 106aea62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aea65 push eax */
  push32((uint32_t)(EAX));
  /* 106aea66 push 0 */
  push32((uint32_t)(0x0u));
  /* 106aea68 call 0x106b14c0 */
  push32(0x106aea6du); f_106b14c0();
  /* 106aea6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aea70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aea73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106aea75 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106aea78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aea7b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aea7e push edx */
  push32((uint32_t)(EDX));
  /* 106aea7f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 106aea81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aea84 push eax */
  push32((uint32_t)(EAX));
  /* 106aea85 push 0 */
  push32((uint32_t)(0x0u));
  /* 106aea87 call 0x106b14c0 */
  push32(0x106aea8cu); f_106b14c0();
  /* 106aea8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aea8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aea92 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106aea94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106aea97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aea9a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aea9d push edx */
  push32((uint32_t)(EDX));
  /* 106aea9e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 106aeaa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aeaa3 push eax */
  push32((uint32_t)(EAX));
  /* 106aeaa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106aeaa6 call 0x106b14c0 */
  push32(0x106aeaabu); f_106b14c0();
  /* 106aeaab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aeaae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106aeab1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 106aeab3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106aeab6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_106aeab9:;
  /* 106aeab9 mov esp, ebp */
  ESP = (EBP);
  /* 106aeabb pop ebp */
  EBP = (pop32());
  /* 106aeabc ret  */
  ESPCHK(0x106ae8b0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x106aeac0 (125 bytes, 49 insns) */
void f_106aeac0(void) {
  FTRACE(0x106aeac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106aeac0 push ebp */
  push32((uint32_t)(EBP));
  /* 106aeac1 mov ebp, esp */
  EBP = (ESP);
  /* 106aeac3 push ecx */
  push32((uint32_t)(ECX));
L_106aeac4:;
  /* 106aeac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aeac7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106aeaca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106aeacc je 0x106aeb39 */
  if (C.zf) goto L_106aeb39;
  /* 106aeace mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aead1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106aead4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aead7 jl 0x106aeafd */
  if ((C.sf!=C.of)) goto L_106aeafd;
  /* 106aead9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aeadc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106aeadf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aeae2 jg 0x106aeafd */
  if ((!C.zf&&C.sf==C.of)) goto L_106aeafd;
  /* 106aeae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aeae7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106aeaea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aeaed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aeaf0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 106aeaf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aeaf5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aeaf8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106aeafb jmp 0x106aeb37 */
  goto L_106aeb37;
L_106aeafd:;
  /* 106aeafd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aeb00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106aeb03 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aeb06 jne 0x106aeb2e */
  if (!C.zf) goto L_106aeb2e;
  /* 106aeb08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aeb0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106aeb0e:;
  /* 106aeb0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aeb11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aeb14 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 106aeb17 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106aeb19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aeb1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aeb1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106aeb22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aeb25 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106aeb28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aeb2a jne 0x106aeb0e */
  if (!C.zf) goto L_106aeb0e;
  /* 106aeb2c jmp 0x106aeb37 */
  goto L_106aeb37;
L_106aeb2e:;
  /* 106aeb2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aeb31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aeb34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_106aeb37:;
  /* 106aeb37 jmp 0x106aeac4 */
  goto L_106aeac4;
L_106aeb39:;
  /* 106aeb39 mov esp, ebp */
  ESP = (EBP);
  /* 106aeb3b pop ebp */
  EBP = (pop32());
  /* 106aeb3c ret  */
  ESPCHK(0x106aeac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb40 @ 0x106aeb40 (147 bytes, 52 insns) */
void f_106aeb40(void) {
  FTRACE(0x106aeb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106aeb40 push ebp */
  push32((uint32_t)(EBP));
  /* 106aeb41 mov ebp, esp */
  EBP = (ESP);
  /* 106aeb43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aeb47 jne 0x106aeb4e */
  if (!C.zf) goto L_106aeb4e;
  /* 106aeb49 jmp 0x106aebd1 */
  goto L_106aebd1;
L_106aeb4e:;
  /* 106aeb4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aeb51 cmp dword ptr [eax + 0xc], 0x106cf728 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x106cf728u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aeb58 je 0x106aebd1 */
  if (C.zf) goto L_106aebd1;
  /* 106aeb5a push 2 */
  push32((uint32_t)(0x2u));
  /* 106aeb5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aeb5f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106aeb62 push edx */
  push32((uint32_t)(EDX));
  /* 106aeb63 call 0x106a3d90 */
  push32(0x106aeb68u); f_106a3d90();
  /* 106aeb68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aeb6b push 2 */
  push32((uint32_t)(0x2u));
  /* 106aeb6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aeb70 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106aeb73 push ecx */
  push32((uint32_t)(ECX));
  /* 106aeb74 call 0x106a3d90 */
  push32(0x106aeb79u); f_106a3d90();
  /* 106aeb79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aeb7c push 2 */
  push32((uint32_t)(0x2u));
  /* 106aeb7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aeb81 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106aeb84 push eax */
  push32((uint32_t)(EAX));
  /* 106aeb85 call 0x106a3d90 */
  push32(0x106aeb8au); f_106a3d90();
  /* 106aeb8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aeb8d push 2 */
  push32((uint32_t)(0x2u));
  /* 106aeb8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aeb92 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106aeb95 push edx */
  push32((uint32_t)(EDX));
  /* 106aeb96 call 0x106a3d90 */
  push32(0x106aeb9bu); f_106a3d90();
  /* 106aeb9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aeb9e push 2 */
  push32((uint32_t)(0x2u));
  /* 106aeba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aeba3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 106aeba6 push ecx */
  push32((uint32_t)(ECX));
  /* 106aeba7 call 0x106a3d90 */
  push32(0x106aebacu); f_106a3d90();
  /* 106aebac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aebaf push 2 */
  push32((uint32_t)(0x2u));
  /* 106aebb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aebb4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 106aebb7 push eax */
  push32((uint32_t)(EAX));
  /* 106aebb8 call 0x106a3d90 */
  push32(0x106aebbdu); f_106a3d90();
  /* 106aebbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aebc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 106aebc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aebc5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 106aebc8 push edx */
  push32((uint32_t)(EDX));
  /* 106aebc9 call 0x106a3d90 */
  push32(0x106aebceu); f_106a3d90();
  /* 106aebce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106aebd1:;
  /* 106aebd1 pop ebp */
  EBP = (pop32());
  /* 106aebd2 ret  */
  ESPCHK(0x106aeb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebe0 @ 0x106aebe0 (928 bytes, 284 insns) */
void f_106aebe0(void) {
  FTRACE(0x106aebe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106aebe0 push ebp */
  push32((uint32_t)(EBP));
  /* 106aebe1 mov ebp, esp */
  EBP = (ESP);
  /* 106aebe3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aebe6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 106aebed mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 106aebf4 cmp dword ptr [0x106cf690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aebfb je 0x106aef31 */
  if (C.zf) goto L_106aef31;
  /* 106aec01 cmp dword ptr [0x106cf6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aec08 jne 0x106aec30 */
  if (!C.zf) goto L_106aec30;
  /* 106aec0a push 0x106cf6a0 */
  push32((uint32_t)(0x106cf6a0u));
  /* 106aec0f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 106aec14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106aec16 mov ax, word ptr [0x106cf6e4] */
  AX = (r16((uint32_t)(0x106cf6e4)));
  /* 106aec1c push eax */
  push32((uint32_t)(EAX));
  /* 106aec1d push 0 */
  push32((uint32_t)(0x0u));
  /* 106aec1f call 0x106b14c0 */
  push32(0x106aec24u); f_106b14c0();
  /* 106aec24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aec27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aec29 je 0x106aec30 */
  if (C.zf) goto L_106aec30;
  /* 106aec2b jmp 0x106aeef2 */
  goto L_106aeef2;
L_106aec30:;
  /* 106aec30 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 106aec32 push 0x106cb0ac */
  push32((uint32_t)(0x106cb0acu));
  /* 106aec37 push 2 */
  push32((uint32_t)(0x2u));
  /* 106aec39 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 106aec3e call 0x106a3300 */
  push32(0x106aec43u); f_106a3300();
  /* 106aec43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aec46 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 106aec49 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 106aec4b push 0x106cb0ac */
  push32((uint32_t)(0x106cb0acu));
  /* 106aec50 push 2 */
  push32((uint32_t)(0x2u));
  /* 106aec52 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 106aec57 call 0x106a3300 */
  push32(0x106aec5cu); f_106a3300();
  /* 106aec5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aec5f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106aec62 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 106aec64 push 0x106cb0ac */
  push32((uint32_t)(0x106cb0acu));
  /* 106aec69 push 2 */
  push32((uint32_t)(0x2u));
  /* 106aec6b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 106aec70 call 0x106a3300 */
  push32(0x106aec75u); f_106a3300();
  /* 106aec75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aec78 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 106aec7b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 106aec7d push 0x106cb0ac */
  push32((uint32_t)(0x106cb0acu));
  /* 106aec82 push 2 */
  push32((uint32_t)(0x2u));
  /* 106aec84 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 106aec89 call 0x106a3300 */
  push32(0x106aec8eu); f_106a3300();
  /* 106aec8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aec91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106aec94 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aec98 je 0x106aecac */
  if (C.zf) goto L_106aecac;
  /* 106aec9a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aec9e je 0x106aecac */
  if (C.zf) goto L_106aecac;
  /* 106aeca0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aeca4 je 0x106aecac */
  if (C.zf) goto L_106aecac;
  /* 106aeca6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aecaa jne 0x106aecb1 */
  if (!C.zf) goto L_106aecb1;
L_106aecac:;
  /* 106aecac jmp 0x106aeef2 */
  goto L_106aeef2;
L_106aecb1:;
  /* 106aecb1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106aecb4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106aecb7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106aecbe jmp 0x106aecc9 */
  goto L_106aecc9;
L_106aecc0:;
  /* 106aecc0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aecc3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aecc6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_106aecc9:;
  /* 106aecc9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aecd0 jge 0x106aece5 */
  if ((C.sf==C.of)) goto L_106aece5;
  /* 106aecd2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106aecd5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 106aecd8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 106aecda mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106aecdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aece0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106aece3 jmp 0x106aecc0 */
  goto L_106aecc0;
L_106aece5:;
  /* 106aece5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 106aece8 push eax */
  push32((uint32_t)(EAX));
  /* 106aece9 mov ecx, dword ptr [0x106cf6a0] */
  ECX = (r32((uint32_t)(0x106cf6a0)));
  /* 106aecef push ecx */
  push32((uint32_t)(ECX));
  /* 106aecf0 call dword ptr [0x106d1370] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1370))), 0x106aecf6u);
  /* 106aecf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aecf8 jne 0x106aecff */
  if (!C.zf) goto L_106aecff;
  /* 106aecfa jmp 0x106aeef2 */
  goto L_106aeef2;
L_106aecff:;
  /* 106aecff cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aed03 jbe 0x106aed0a */
  if ((C.cf||C.zf)) goto L_106aed0a;
  /* 106aed05 jmp 0x106aeef2 */
  goto L_106aeef2;
L_106aed0a:;
  /* 106aed0a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106aed0d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106aed13 mov dword ptr [0x106cdea4], edx */
  w32((uint32_t)(0x106cdea4), (EDX));
  /* 106aed19 cmp dword ptr [0x106cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aed20 jle 0x106aed79 */
  if ((C.zf||C.sf!=C.of)) goto L_106aed79;
  /* 106aed22 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 106aed25 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106aed28 jmp 0x106aed33 */
  goto L_106aed33;
L_106aed2a:;
  /* 106aed2a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106aed2d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aed30 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_106aed33:;
  /* 106aed33 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106aed36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106aed38 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106aed3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aed3c je 0x106aed79 */
  if (C.zf) goto L_106aed79;
  /* 106aed3e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106aed41 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106aed43 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 106aed46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aed48 je 0x106aed79 */
  if (C.zf) goto L_106aed79;
  /* 106aed4a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106aed4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106aed4f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106aed51 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106aed54 jmp 0x106aed5f */
  goto L_106aed5f;
L_106aed56:;
  /* 106aed56 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aed59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aed5c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_106aed5f:;
  /* 106aed5f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106aed62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106aed64 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 106aed67 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aed6a jg 0x106aed77 */
  if ((!C.zf&&C.sf==C.of)) goto L_106aed77;
  /* 106aed6c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106aed6f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aed72 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106aed75 jmp 0x106aed56 */
  goto L_106aed56;
L_106aed77:;
  /* 106aed77 jmp 0x106aed2a */
  goto L_106aed2a;
L_106aed79:;
  /* 106aed79 push 0 */
  push32((uint32_t)(0x0u));
  /* 106aed7b push 0 */
  push32((uint32_t)(0x0u));
  /* 106aed7d push 0 */
  push32((uint32_t)(0x0u));
  /* 106aed7f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106aed82 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aed85 push eax */
  push32((uint32_t)(EAX));
  /* 106aed86 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106aed8b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106aed8e push ecx */
  push32((uint32_t)(ECX));
  /* 106aed8f push 1 */
  push32((uint32_t)(0x1u));
  /* 106aed91 call 0x106ab530 */
  push32(0x106aed96u); f_106ab530();
  /* 106aed96 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aed99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aed9b jne 0x106aeda2 */
  if (!C.zf) goto L_106aeda2;
  /* 106aed9d jmp 0x106aeef2 */
  goto L_106aeef2;
L_106aeda2:;
  /* 106aeda2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106aeda5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 106aedaa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106aedad mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106aedb0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106aedb7 jmp 0x106aedc2 */
  goto L_106aedc2;
L_106aedb9:;
  /* 106aedb9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aedbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aedbf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_106aedc2:;
  /* 106aedc2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aedc9 jge 0x106aede0 */
  if ((C.sf==C.of)) goto L_106aede0;
  /* 106aedcb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106aedce mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 106aedd2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 106aedd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106aedd8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aeddb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 106aedde jmp 0x106aedb9 */
  goto L_106aedb9;
L_106aede0:;
  /* 106aede0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106aede2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106aede4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106aede7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aedea push edx */
  push32((uint32_t)(EDX));
  /* 106aedeb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 106aedf0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106aedf3 push eax */
  push32((uint32_t)(EAX));
  /* 106aedf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 106aedf6 call 0x106b1760 */
  push32(0x106aedfbu); f_106b1760();
  /* 106aedfb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aedfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aee00 jne 0x106aee07 */
  if (!C.zf) goto L_106aee07;
  /* 106aee02 jmp 0x106aeef2 */
  goto L_106aeef2;
L_106aee07:;
  /* 106aee07 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106aee0a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 106aee0f cmp dword ptr [0x106cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aee16 jle 0x106aee73 */
  if ((C.zf||C.sf!=C.of)) goto L_106aee73;
  /* 106aee18 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 106aee1b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106aee1e jmp 0x106aee29 */
  goto L_106aee29;
L_106aee20:;
  /* 106aee20 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106aee23 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aee26 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_106aee29:;
  /* 106aee29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106aee2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106aee2e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106aee30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106aee32 je 0x106aee73 */
  if (C.zf) goto L_106aee73;
  /* 106aee34 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106aee37 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106aee39 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 106aee3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106aee3e je 0x106aee73 */
  if (C.zf) goto L_106aee73;
  /* 106aee40 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106aee43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106aee45 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106aee47 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106aee4a jmp 0x106aee55 */
  goto L_106aee55;
L_106aee4c:;
  /* 106aee4c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aee4f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aee52 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_106aee55:;
  /* 106aee55 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106aee58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106aee5a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 106aee5d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aee60 jg 0x106aee71 */
  if ((!C.zf&&C.sf==C.of)) goto L_106aee71;
  /* 106aee62 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106aee65 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106aee68 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 106aee6f jmp 0x106aee4c */
  goto L_106aee4c;
L_106aee71:;
  /* 106aee71 jmp 0x106aee20 */
  goto L_106aee20;
L_106aee73:;
  /* 106aee73 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106aee76 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aee79 mov dword ptr [0x106cdc98], eax */
  w32((uint32_t)(0x106cdc98), (EAX));
  /* 106aee7e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106aee81 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aee84 mov dword ptr [0x106cdc9c], ecx */
  w32((uint32_t)(0x106cdc9c), (ECX));
  /* 106aee8a cmp dword ptr [0x106cf6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aee91 je 0x106aeea4 */
  if (C.zf) goto L_106aeea4;
  /* 106aee93 push 2 */
  push32((uint32_t)(0x2u));
  /* 106aee95 mov edx, dword ptr [0x106cf6d0] */
  EDX = (r32((uint32_t)(0x106cf6d0)));
  /* 106aee9b push edx */
  push32((uint32_t)(EDX));
  /* 106aee9c call 0x106a3d90 */
  push32(0x106aeea1u); f_106a3d90();
  /* 106aeea1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106aeea4:;
  /* 106aeea4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 106aeea7 mov dword ptr [0x106cf6d0], eax */
  w32((uint32_t)(0x106cf6d0), (EAX));
  /* 106aeeac cmp dword ptr [0x106cf6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aeeb3 je 0x106aeec6 */
  if (C.zf) goto L_106aeec6;
  /* 106aeeb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106aeeb7 mov ecx, dword ptr [0x106cf6d4] */
  ECX = (r32((uint32_t)(0x106cf6d4)));
  /* 106aeebd push ecx */
  push32((uint32_t)(ECX));
  /* 106aeebe call 0x106a3d90 */
  push32(0x106aeec3u); f_106a3d90();
  /* 106aeec3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106aeec6:;
  /* 106aeec6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106aeec9 mov dword ptr [0x106cf6d4], edx */
  w32((uint32_t)(0x106cf6d4), (EDX));
  /* 106aeecf push 2 */
  push32((uint32_t)(0x2u));
  /* 106aeed1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106aeed4 push eax */
  push32((uint32_t)(EAX));
  /* 106aeed5 call 0x106a3d90 */
  push32(0x106aeedau); f_106a3d90();
  /* 106aeeda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aeedd push 2 */
  push32((uint32_t)(0x2u));
  /* 106aeedf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106aeee2 push ecx */
  push32((uint32_t)(ECX));
  /* 106aeee3 call 0x106a3d90 */
  push32(0x106aeee8u); f_106a3d90();
  /* 106aeee8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aeeeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106aeeed jmp 0x106aef7c */
  goto L_106aef7c;
L_106aeef2:;
  /* 106aeef2 push 2 */
  push32((uint32_t)(0x2u));
  /* 106aeef4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 106aeef7 push edx */
  push32((uint32_t)(EDX));
  /* 106aeef8 call 0x106a3d90 */
  push32(0x106aeefdu); f_106a3d90();
  /* 106aeefd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aef00 push 2 */
  push32((uint32_t)(0x2u));
  /* 106aef02 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106aef05 push eax */
  push32((uint32_t)(EAX));
  /* 106aef06 call 0x106a3d90 */
  push32(0x106aef0bu); f_106a3d90();
  /* 106aef0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aef0e push 2 */
  push32((uint32_t)(0x2u));
  /* 106aef10 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106aef13 push ecx */
  push32((uint32_t)(ECX));
  /* 106aef14 call 0x106a3d90 */
  push32(0x106aef19u); f_106a3d90();
  /* 106aef19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aef1c push 2 */
  push32((uint32_t)(0x2u));
  /* 106aef1e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 106aef21 push edx */
  push32((uint32_t)(EDX));
  /* 106aef22 call 0x106a3d90 */
  push32(0x106aef27u); f_106a3d90();
  /* 106aef27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aef2a mov eax, 1 */
  EAX = (0x1u);
  /* 106aef2f jmp 0x106aef7c */
  goto L_106aef7c;
L_106aef31:;
  /* 106aef31 mov dword ptr [0x106cdc98], 0x106cdca2 */
  w32((uint32_t)(0x106cdc98), (0x106cdca2u));
  /* 106aef3b mov dword ptr [0x106cdc9c], 0x106cdca2 */
  w32((uint32_t)(0x106cdc9c), (0x106cdca2u));
  /* 106aef45 push 2 */
  push32((uint32_t)(0x2u));
  /* 106aef47 mov eax, dword ptr [0x106cf6d0] */
  EAX = (r32((uint32_t)(0x106cf6d0)));
  /* 106aef4c push eax */
  push32((uint32_t)(EAX));
  /* 106aef4d call 0x106a3d90 */
  push32(0x106aef52u); f_106a3d90();
  /* 106aef52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aef55 push 2 */
  push32((uint32_t)(0x2u));
  /* 106aef57 mov ecx, dword ptr [0x106cf6d4] */
  ECX = (r32((uint32_t)(0x106cf6d4)));
  /* 106aef5d push ecx */
  push32((uint32_t)(ECX));
  /* 106aef5e call 0x106a3d90 */
  push32(0x106aef63u); f_106a3d90();
  /* 106aef63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aef66 mov dword ptr [0x106cf6d0], 0 */
  w32((uint32_t)(0x106cf6d0), (0x0u));
  /* 106aef70 mov dword ptr [0x106cf6d4], 0 */
  w32((uint32_t)(0x106cf6d4), (0x0u));
  /* 106aef7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106aef7c:;
  /* 106aef7c mov esp, ebp */
  ESP = (EBP);
  /* 106aef7e pop ebp */
  EBP = (pop32());
  /* 106aef7f ret  */
  ESPCHK(0x106aebe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef80 @ 0x106aef80 (7 bytes, 5 insns) */
void f_106aef80(void) {
  FTRACE(0x106aef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106aef80 push ebp */
  push32((uint32_t)(EBP));
  /* 106aef81 mov ebp, esp */
  EBP = (ESP);
  /* 106aef83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106aef85 pop ebp */
  EBP = (pop32());
  /* 106aef86 ret  */
  ESPCHK(0x106aef80u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x106aef90 (129 bytes, 56 insns) */
void f_106aef90(void) {
  FTRACE(0x106aef90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106aef90 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 106aef94 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 106aef98 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 106aef9e jne 0x106aefdc */
  if (!C.zf) goto L_106aefdc;
L_106aefa0:;
  /* 106aefa0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106aefa2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106aefa4 jne 0x106aefd4 */
  if (!C.zf) goto L_106aefd4;
  /* 106aefa6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106aefa8 je 0x106aefd0 */
  if (C.zf) goto L_106aefd0;
  /* 106aefaa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106aefad jne 0x106aefd4 */
  if (!C.zf) goto L_106aefd4;
  /* 106aefaf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 106aefb1 je 0x106aefd0 */
  if (C.zf) goto L_106aefd0;
  /* 106aefb3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 106aefb6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106aefb9 jne 0x106aefd4 */
  if (!C.zf) goto L_106aefd4;
  /* 106aefbb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106aefbd je 0x106aefd0 */
  if (C.zf) goto L_106aefd0;
  /* 106aefbf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106aefc2 jne 0x106aefd4 */
  if (!C.zf) goto L_106aefd4;
  /* 106aefc4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aefc7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aefca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 106aefcc jne 0x106aefa0 */
  if (!C.zf) goto L_106aefa0;
  /* 106aefce mov edi, edi */
  EDI = (EDI);
L_106aefd0:;
  /* 106aefd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106aefd2 ret  */
  ESPCHK(0x106aef90u, _esp0);
  ESP += 4; return;
  /* 106aefd3 nop  */
  /* nop */
L_106aefd4:;
  /* 106aefd4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106aefd6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106aefd8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 106aefd9 ret  */
  ESPCHK(0x106aef90u, _esp0);
  ESP += 4; return;
  /* 106aefda mov edi, edi */
  EDI = (EDI);
L_106aefdc:;
  /* 106aefdc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 106aefe2 je 0x106aeff8 */
  if (C.zf) goto L_106aeff8;
  /* 106aefe4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106aefe6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 106aefe7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106aefe9 jne 0x106aefd4 */
  if (!C.zf) goto L_106aefd4;
  /* 106aefeb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 106aefec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106aefee je 0x106aefd0 */
  if (C.zf) goto L_106aefd0;
  /* 106aeff0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 106aeff6 je 0x106aefa0 */
  if (C.zf) goto L_106aefa0;
L_106aeff8:;
  /* 106aeff8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 106aeffb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106aeffe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106af000 jne 0x106aefd4 */
  if (!C.zf) goto L_106aefd4;
  /* 106af002 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106af004 je 0x106aefd0 */
  if (C.zf) goto L_106aefd0;
  /* 106af006 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106af009 jne 0x106aefd4 */
  if (!C.zf) goto L_106aefd4;
  /* 106af00b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 106af00d je 0x106aefd0 */
  if (C.zf) goto L_106aefd0;
  /* 106af00f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106af012 jmp 0x106aefa0 */
  goto L_106aefa0;
}

/* FUN_1000f020 @ 0x106af020 (62 bytes, 35 insns) */
void f_106af020(void) {
  FTRACE(0x106af020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106af020 push ebp */
  push32((uint32_t)(EBP));
  /* 106af021 mov ebp, esp */
  EBP = (ESP);
  /* 106af023 push esi */
  push32((uint32_t)(ESI));
  /* 106af024 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106af026 push eax */
  push32((uint32_t)(EAX));
  /* 106af027 push eax */
  push32((uint32_t)(EAX));
  /* 106af028 push eax */
  push32((uint32_t)(EAX));
  /* 106af029 push eax */
  push32((uint32_t)(EAX));
  /* 106af02a push eax */
  push32((uint32_t)(EAX));
  /* 106af02b push eax */
  push32((uint32_t)(EAX));
  /* 106af02c push eax */
  push32((uint32_t)(EAX));
  /* 106af02d push eax */
  push32((uint32_t)(EAX));
  /* 106af02e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106af031 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106af034:;
  /* 106af034 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106af036 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106af038 je 0x106af041 */
  if (C.zf) goto L_106af041;
  /* 106af03a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 106af03b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x106af03b");
  /* 106af03f jmp 0x106af034 */
  goto L_106af034;
L_106af041:;
  /* 106af041 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 106af044 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106af047 nop  */
  /* nop */
L_106af048:;
  /* 106af048 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 106af049 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106af04b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106af04d je 0x106af056 */
  if (C.zf) goto L_106af056;
  /* 106af04f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106af050 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x106af050");
  /* 106af054 jae 0x106af048 */
  if (!C.cf) goto L_106af048;
L_106af056:;
  /* 106af056 mov eax, ecx */
  EAX = (ECX);
  /* 106af058 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af05b pop esi */
  ESI = (pop32());
  /* 106af05c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106af05d ret  */
  ESPCHK(0x106af020u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x106af060 (56 bytes, 31 insns) */
void f_106af060(void) {
  FTRACE(0x106af060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106af060 push ebp */
  push32((uint32_t)(EBP));
  /* 106af061 mov ebp, esp */
  EBP = (ESP);
  /* 106af063 push edi */
  push32((uint32_t)(EDI));
  /* 106af064 push esi */
  push32((uint32_t)(ESI));
  /* 106af065 push ebx */
  push32((uint32_t)(EBX));
  /* 106af066 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106af069 jecxz 0x106af091 */
  x86_unimpl("jecxz @ 0x106af069");
  /* 106af06b mov ebx, ecx */
  EBX = (ECX);
  /* 106af06d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 106af070 mov esi, edi */
  ESI = (EDI);
  /* 106af072 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106af074 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 106af076 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106af078 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106af07a mov edi, esi */
  EDI = (ESI);
  /* 106af07c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 106af07f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 106af081 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 106af084 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106af086 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 106af089 ja 0x106af08f */
  if ((!C.cf&&!C.zf)) goto L_106af08f;
  /* 106af08b je 0x106af091 */
  if (C.zf) goto L_106af091;
  /* 106af08d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106af08e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_106af08f:;
  /* 106af08f not ecx */
  ECX = (~(ECX));
L_106af091:;
  /* 106af091 mov eax, ecx */
  EAX = (ECX);
  /* 106af093 pop ebx */
  EBX = (pop32());
  /* 106af094 pop esi */
  ESI = (pop32());
  /* 106af095 pop edi */
  EDI = (pop32());
  /* 106af096 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106af097 ret  */
  ESPCHK(0x106af060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0a0 @ 0x106af0a0 (58 bytes, 32 insns) */
void f_106af0a0(void) {
  FTRACE(0x106af0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106af0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106af0a1 mov ebp, esp */
  EBP = (ESP);
  /* 106af0a3 push esi */
  push32((uint32_t)(ESI));
  /* 106af0a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106af0a6 push eax */
  push32((uint32_t)(EAX));
  /* 106af0a7 push eax */
  push32((uint32_t)(EAX));
  /* 106af0a8 push eax */
  push32((uint32_t)(EAX));
  /* 106af0a9 push eax */
  push32((uint32_t)(EAX));
  /* 106af0aa push eax */
  push32((uint32_t)(EAX));
  /* 106af0ab push eax */
  push32((uint32_t)(EAX));
  /* 106af0ac push eax */
  push32((uint32_t)(EAX));
  /* 106af0ad push eax */
  push32((uint32_t)(EAX));
  /* 106af0ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106af0b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_106af0b4:;
  /* 106af0b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106af0b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106af0b8 je 0x106af0c1 */
  if (C.zf) goto L_106af0c1;
  /* 106af0ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 106af0bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x106af0bb");
  /* 106af0bf jmp 0x106af0b4 */
  goto L_106af0b4;
L_106af0c1:;
  /* 106af0c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_106af0c4:;
  /* 106af0c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106af0c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 106af0c8 je 0x106af0d4 */
  if (C.zf) goto L_106af0d4;
  /* 106af0ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106af0cb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x106af0cb");
  /* 106af0cf jae 0x106af0c4 */
  if (!C.cf) goto L_106af0c4;
  /* 106af0d1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_106af0d4:;
  /* 106af0d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af0d7 pop esi */
  ESI = (pop32());
  /* 106af0d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 106af0d9 ret  */
  ESPCHK(0x106af0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0e0 @ 0x106af0e0 (512 bytes, 147 insns) */
void f_106af0e0(void) {
  FTRACE(0x106af0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106af0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106af0e1 mov ebp, esp */
  EBP = (ESP);
  /* 106af0e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af0e6 cmp dword ptr [0x106cf71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af0ed jne 0x106af112 */
  if (!C.zf) goto L_106af112;
  /* 106af0ef call 0x106afbb0 */
  push32(0x106af0f4u); f_106afbb0();
  /* 106af0f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af0f6 je 0x106af102 */
  if (C.zf) goto L_106af102;
  /* 106af0f8 mov eax, dword ptr [0x106d1280] */
  EAX = (r32((uint32_t)(0x106d1280)));
  /* 106af0fd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106af100 jmp 0x106af109 */
  goto L_106af109;
L_106af102:;
  /* 106af102 mov dword ptr [ebp - 8], 0x106afc00 */
  w32((uint32_t)(EBP + -0x8), (0x106afc00u));
L_106af109:;
  /* 106af109 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106af10c mov dword ptr [0x106cf71c], ecx */
  w32((uint32_t)(0x106cf71c), (ECX));
L_106af112:;
  /* 106af112 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af116 jne 0x106af122 */
  if (!C.zf) goto L_106af122;
  /* 106af118 call 0x106afa00 */
  push32(0x106af11du); f_106afa00();
  /* 106af11d jmp 0x106af1ee */
  goto L_106af1ee;
L_106af122:;
  /* 106af122 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106af125 mov dword ptr [0x106cf70c], edx */
  w32((uint32_t)(0x106cf70c), (EDX));
  /* 106af12b cmp dword ptr [0x106cf70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af132 je 0x106af154 */
  if (C.zf) goto L_106af154;
  /* 106af134 mov eax, dword ptr [0x106cf70c] */
  EAX = (r32((uint32_t)(0x106cf70c)));
  /* 106af139 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106af13c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106af13e je 0x106af154 */
  if (C.zf) goto L_106af154;
  /* 106af140 push 0x106cf70c */
  push32((uint32_t)(0x106cf70cu));
  /* 106af145 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 106af147 push 0x106cea90 */
  push32((uint32_t)(0x106cea90u));
  /* 106af14c call 0x106af2e0 */
  push32(0x106af151u); f_106af2e0();
  /* 106af151 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106af154:;
  /* 106af154 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106af157 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106af15a mov dword ptr [0x106cf710], edx */
  w32((uint32_t)(0x106cf710), (EDX));
  /* 106af160 cmp dword ptr [0x106cf710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af167 je 0x106af189 */
  if (C.zf) goto L_106af189;
  /* 106af169 mov eax, dword ptr [0x106cf710] */
  EAX = (r32((uint32_t)(0x106cf710)));
  /* 106af16e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106af171 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106af173 je 0x106af189 */
  if (C.zf) goto L_106af189;
  /* 106af175 push 0x106cf710 */
  push32((uint32_t)(0x106cf710u));
  /* 106af17a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 106af17c push 0x106ce9d8 */
  push32((uint32_t)(0x106ce9d8u));
  /* 106af181 call 0x106af2e0 */
  push32(0x106af186u); f_106af2e0();
  /* 106af186 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106af189:;
  /* 106af189 mov dword ptr [0x106cf714], 0 */
  w32((uint32_t)(0x106cf714), (0x0u));
  /* 106af193 cmp dword ptr [0x106cf70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af19a je 0x106af1cd */
  if (C.zf) goto L_106af1cd;
  /* 106af19c mov edx, dword ptr [0x106cf70c] */
  EDX = (r32((uint32_t)(0x106cf70c)));
  /* 106af1a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106af1a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af1a7 je 0x106af1cd */
  if (C.zf) goto L_106af1cd;
  /* 106af1a9 cmp dword ptr [0x106cf710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af1b0 je 0x106af1c6 */
  if (C.zf) goto L_106af1c6;
  /* 106af1b2 mov ecx, dword ptr [0x106cf710] */
  ECX = (r32((uint32_t)(0x106cf710)));
  /* 106af1b8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106af1bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106af1bd je 0x106af1c6 */
  if (C.zf) goto L_106af1c6;
  /* 106af1bf call 0x106af370 */
  push32(0x106af1c4u); f_106af370();
  /* 106af1c4 jmp 0x106af1cb */
  goto L_106af1cb;
L_106af1c6:;
  /* 106af1c6 call 0x106af760 */
  push32(0x106af1cbu); f_106af760();
L_106af1cb:;
  /* 106af1cb jmp 0x106af1ee */
  goto L_106af1ee;
L_106af1cd:;
  /* 106af1cd cmp dword ptr [0x106cf710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af1d4 je 0x106af1e9 */
  if (C.zf) goto L_106af1e9;
  /* 106af1d6 mov eax, dword ptr [0x106cf710] */
  EAX = (r32((uint32_t)(0x106cf710)));
  /* 106af1db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106af1de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106af1e0 je 0x106af1e9 */
  if (C.zf) goto L_106af1e9;
  /* 106af1e2 call 0x106af900 */
  push32(0x106af1e7u); f_106af900();
  /* 106af1e7 jmp 0x106af1ee */
  goto L_106af1ee;
L_106af1e9:;
  /* 106af1e9 call 0x106afa00 */
  push32(0x106af1eeu); f_106afa00();
L_106af1ee:;
  /* 106af1ee cmp dword ptr [0x106cf714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af1f5 jne 0x106af1fe */
  if (!C.zf) goto L_106af1fe;
  /* 106af1f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106af1f9 jmp 0x106af2dc */
  goto L_106af2dc;
L_106af1fe:;
  /* 106af1fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106af201 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106af207 push edx */
  push32((uint32_t)(EDX));
  /* 106af208 call 0x106afa30 */
  push32(0x106af20du); f_106afa30();
  /* 106af20d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af210 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106af213 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af217 je 0x106af22c */
  if (C.zf) goto L_106af22c;
  /* 106af219 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106af21c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106af221 push eax */
  push32((uint32_t)(EAX));
  /* 106af222 call dword ptr [0x106d1284] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1284))), 0x106af228u);
  /* 106af228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af22a jne 0x106af233 */
  if (!C.zf) goto L_106af233;
L_106af22c:;
  /* 106af22c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106af22e jmp 0x106af2dc */
  goto L_106af2dc;
L_106af233:;
  /* 106af233 push 1 */
  push32((uint32_t)(0x1u));
  /* 106af235 mov ecx, dword ptr [0x106cf6fc] */
  ECX = (r32((uint32_t)(0x106cf6fc)));
  /* 106af23b push ecx */
  push32((uint32_t)(ECX));
  /* 106af23c call dword ptr [0x106d1294] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1294))), 0x106af242u);
  /* 106af242 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af244 jne 0x106af24d */
  if (!C.zf) goto L_106af24d;
  /* 106af246 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106af248 jmp 0x106af2dc */
  goto L_106af2dc;
L_106af24d:;
  /* 106af24d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af251 je 0x106af278 */
  if (C.zf) goto L_106af278;
  /* 106af253 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106af256 mov ax, word ptr [0x106cf6fc] */
  AX = (r16((uint32_t)(0x106cf6fc)));
  /* 106af25c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 106af25f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106af262 mov dx, word ptr [0x106cf718] */
  DX = (r16((uint32_t)(0x106cf718)));
  /* 106af269 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 106af26d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106af270 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 106af274 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_106af278:;
  /* 106af278 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af27c je 0x106af2d7 */
  if (C.zf) goto L_106af2d7;
  /* 106af27e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 106af280 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106af283 push edx */
  push32((uint32_t)(EDX));
  /* 106af284 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 106af289 mov eax, dword ptr [0x106cf6fc] */
  EAX = (r32((uint32_t)(0x106cf6fc)));
  /* 106af28e push eax */
  push32((uint32_t)(EAX));
  /* 106af28f call dword ptr [0x106cf71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf71c))), 0x106af295u);
  /* 106af295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af297 jne 0x106af29d */
  if (!C.zf) goto L_106af29d;
  /* 106af299 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106af29b jmp 0x106af2dc */
  goto L_106af2dc;
L_106af29d:;
  /* 106af29d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 106af29f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106af2a2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106af2a5 push ecx */
  push32((uint32_t)(ECX));
  /* 106af2a6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 106af2ab mov edx, dword ptr [0x106cf718] */
  EDX = (r32((uint32_t)(0x106cf718)));
  /* 106af2b1 push edx */
  push32((uint32_t)(EDX));
  /* 106af2b2 call dword ptr [0x106cf71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf71c))), 0x106af2b8u);
  /* 106af2b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af2ba jne 0x106af2c0 */
  if (!C.zf) goto L_106af2c0;
  /* 106af2bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106af2be jmp 0x106af2dc */
  goto L_106af2dc;
L_106af2c0:;
  /* 106af2c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 106af2c2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106af2c5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106af2ca push eax */
  push32((uint32_t)(EAX));
  /* 106af2cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106af2ce push ecx */
  push32((uint32_t)(ECX));
  /* 106af2cf call 0x106a5e40 */
  push32(0x106af2d4u); f_106a5e40();
  /* 106af2d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106af2d7:;
  /* 106af2d7 mov eax, 1 */
  EAX = (0x1u);
L_106af2dc:;
  /* 106af2dc mov esp, ebp */
  ESP = (EBP);
  /* 106af2de pop ebp */
  EBP = (pop32());
  /* 106af2df ret  */
  ESPCHK(0x106af0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2e0 @ 0x106af2e0 (130 bytes, 47 insns) */
void f_106af2e0(void) {
  FTRACE(0x106af2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106af2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106af2e1 mov ebp, esp */
  EBP = (ESP);
  /* 106af2e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af2e6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 106af2ed mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_106af2f4:;
  /* 106af2f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106af2f7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af2fa jg 0x106af35e */
  if ((!C.zf&&C.sf==C.of)) goto L_106af35e;
  /* 106af2fc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af300 je 0x106af35e */
  if (C.zf) goto L_106af35e;
  /* 106af302 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106af305 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106af308 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106af309 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af30b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106af30d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106af310 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106af313 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106af316 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 106af319 push eax */
  push32((uint32_t)(EAX));
  /* 106af31a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106af31d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106af31f push edx */
  push32((uint32_t)(EDX));
  /* 106af320 call 0x106b19d0 */
  push32(0x106af325u); f_106b19d0();
  /* 106af325 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af328 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106af32b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af32f jne 0x106af342 */
  if (!C.zf) goto L_106af342;
  /* 106af331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106af334 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106af337 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 106af33b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106af33e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106af340 jmp 0x106af35c */
  goto L_106af35c;
L_106af342:;
  /* 106af342 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af346 jge 0x106af353 */
  if ((C.sf==C.of)) goto L_106af353;
  /* 106af348 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106af34b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af34e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 106af351 jmp 0x106af35c */
  goto L_106af35c;
L_106af353:;
  /* 106af353 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106af356 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106af359 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106af35c:;
  /* 106af35c jmp 0x106af2f4 */
  goto L_106af2f4;
L_106af35e:;
  /* 106af35e mov esp, ebp */
  ESP = (EBP);
  /* 106af360 pop ebp */
  EBP = (pop32());
  /* 106af361 ret  */
  ESPCHK(0x106af2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f370 @ 0x106af370 (186 bytes, 50 insns) */
void f_106af370(void) {
  FTRACE(0x106af370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106af370 push ebp */
  push32((uint32_t)(EBP));
  /* 106af371 mov ebp, esp */
  EBP = (ESP);
  /* 106af373 push ecx */
  push32((uint32_t)(ECX));
  /* 106af374 mov eax, dword ptr [0x106cf70c] */
  EAX = (r32((uint32_t)(0x106cf70c)));
  /* 106af379 push eax */
  push32((uint32_t)(EAX));
  /* 106af37a call 0x106a6130 */
  push32(0x106af37fu); f_106a6130();
  /* 106af37f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af382 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106af384 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af387 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 106af38a mov dword ptr [0x106cf708], ecx */
  w32((uint32_t)(0x106cf708), (ECX));
  /* 106af390 mov edx, dword ptr [0x106cf710] */
  EDX = (r32((uint32_t)(0x106cf710)));
  /* 106af396 push edx */
  push32((uint32_t)(EDX));
  /* 106af397 call 0x106a6130 */
  push32(0x106af39cu); f_106a6130();
  /* 106af39c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af39f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106af3a1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af3a4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 106af3a7 mov dword ptr [0x106cf700], ecx */
  w32((uint32_t)(0x106cf700), (ECX));
  /* 106af3ad mov dword ptr [0x106cf6fc], 0 */
  w32((uint32_t)(0x106cf6fc), (0x0u));
  /* 106af3b7 cmp dword ptr [0x106cf708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af3be je 0x106af3c9 */
  if (C.zf) goto L_106af3c9;
  /* 106af3c0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 106af3c7 jmp 0x106af3db */
  goto L_106af3db;
L_106af3c9:;
  /* 106af3c9 mov edx, dword ptr [0x106cf70c] */
  EDX = (r32((uint32_t)(0x106cf70c)));
  /* 106af3cf push edx */
  push32((uint32_t)(EDX));
  /* 106af3d0 call 0x106afe10 */
  push32(0x106af3d5u); f_106afe10();
  /* 106af3d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af3d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106af3db:;
  /* 106af3db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106af3de mov dword ptr [0x106cf704], eax */
  w32((uint32_t)(0x106cf704), (EAX));
  /* 106af3e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106af3e5 push 0x106af430 */
  push32((uint32_t)(0x106af430u));
  /* 106af3ea call dword ptr [0x106d1288] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1288))), 0x106af3f0u);
  /* 106af3f0 mov ecx, dword ptr [0x106cf714] */
  ECX = (r32((uint32_t)(0x106cf714)));
  /* 106af3f6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 106af3fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106af3fe je 0x106af41c */
  if (C.zf) goto L_106af41c;
  /* 106af400 mov edx, dword ptr [0x106cf714] */
  EDX = (r32((uint32_t)(0x106cf714)));
  /* 106af406 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 106af40c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106af40e je 0x106af41c */
  if (C.zf) goto L_106af41c;
  /* 106af410 mov eax, dword ptr [0x106cf714] */
  EAX = (r32((uint32_t)(0x106cf714)));
  /* 106af415 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 106af418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af41a jne 0x106af426 */
  if (!C.zf) goto L_106af426;
L_106af41c:;
  /* 106af41c mov dword ptr [0x106cf714], 0 */
  w32((uint32_t)(0x106cf714), (0x0u));
L_106af426:;
  /* 106af426 mov esp, ebp */
  ESP = (EBP);
  /* 106af428 pop ebp */
  EBP = (pop32());
  /* 106af429 ret  */
  ESPCHK(0x106af370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f430 @ 0x106af430 (804 bytes, 220 insns) */
void f_106af430(void) {
  FTRACE(0x106af430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106af430 push ebp */
  push32((uint32_t)(EBP));
  /* 106af431 mov ebp, esp */
  EBP = (ESP);
  /* 106af433 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106af439 push eax */
  push32((uint32_t)(EAX));
  /* 106af43a call 0x106afd90 */
  push32(0x106af43fu); f_106afd90();
  /* 106af43f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af442 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 106af445 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 106af447 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 106af44a push ecx */
  push32((uint32_t)(ECX));
  /* 106af44b mov edx, dword ptr [0x106cf700] */
  EDX = (r32((uint32_t)(0x106cf700)));
  /* 106af451 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106af453 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af455 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 106af45b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106af461 push edx */
  push32((uint32_t)(EDX));
  /* 106af462 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af465 push eax */
  push32((uint32_t)(EAX));
  /* 106af466 call dword ptr [0x106cf71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf71c))), 0x106af46cu);
  /* 106af46c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af46e jne 0x106af484 */
  if (!C.zf) goto L_106af484;
  /* 106af470 mov dword ptr [0x106cf714], 0 */
  w32((uint32_t)(0x106cf714), (0x0u));
  /* 106af47a mov eax, 1 */
  EAX = (0x1u);
  /* 106af47f jmp 0x106af74e */
  goto L_106af74e;
L_106af484:;
  /* 106af484 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 106af487 push ecx */
  push32((uint32_t)(ECX));
  /* 106af488 mov edx, dword ptr [0x106cf710] */
  EDX = (r32((uint32_t)(0x106cf710)));
  /* 106af48e push edx */
  push32((uint32_t)(EDX));
  /* 106af48f call 0x106b19d0 */
  push32(0x106af494u); f_106b19d0();
  /* 106af494 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af497 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af499 jne 0x106af5bf */
  if (!C.zf) goto L_106af5bf;
  /* 106af49f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 106af4a1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 106af4a4 push eax */
  push32((uint32_t)(EAX));
  /* 106af4a5 mov ecx, dword ptr [0x106cf708] */
  ECX = (r32((uint32_t)(0x106cf708)));
  /* 106af4ab neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106af4ad sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af4af and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 106af4b5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106af4bb push ecx */
  push32((uint32_t)(ECX));
  /* 106af4bc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af4bf push edx */
  push32((uint32_t)(EDX));
  /* 106af4c0 call dword ptr [0x106cf71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf71c))), 0x106af4c6u);
  /* 106af4c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af4c8 jne 0x106af4de */
  if (!C.zf) goto L_106af4de;
  /* 106af4ca mov dword ptr [0x106cf714], 0 */
  w32((uint32_t)(0x106cf714), (0x0u));
  /* 106af4d4 mov eax, 1 */
  EAX = (0x1u);
  /* 106af4d9 jmp 0x106af74e */
  goto L_106af74e;
L_106af4de:;
  /* 106af4de lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 106af4e1 push eax */
  push32((uint32_t)(EAX));
  /* 106af4e2 mov ecx, dword ptr [0x106cf70c] */
  ECX = (r32((uint32_t)(0x106cf70c)));
  /* 106af4e8 push ecx */
  push32((uint32_t)(ECX));
  /* 106af4e9 call 0x106b19d0 */
  push32(0x106af4eeu); f_106b19d0();
  /* 106af4ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af4f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af4f3 jne 0x106af520 */
  if (!C.zf) goto L_106af520;
  /* 106af4f5 mov edx, dword ptr [0x106cf714] */
  EDX = (r32((uint32_t)(0x106cf714)));
  /* 106af4fb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 106af501 mov dword ptr [0x106cf714], edx */
  w32((uint32_t)(0x106cf714), (EDX));
  /* 106af507 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af50a mov dword ptr [0x106cf718], eax */
  w32((uint32_t)(0x106cf718), (EAX));
  /* 106af50f mov ecx, dword ptr [0x106cf718] */
  ECX = (r32((uint32_t)(0x106cf718)));
  /* 106af515 mov dword ptr [0x106cf6fc], ecx */
  w32((uint32_t)(0x106cf6fc), (ECX));
  /* 106af51b jmp 0x106af5bf */
  goto L_106af5bf;
L_106af520:;
  /* 106af520 mov edx, dword ptr [0x106cf714] */
  EDX = (r32((uint32_t)(0x106cf714)));
  /* 106af526 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 106af529 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106af52b jne 0x106af5bf */
  if (!C.zf) goto L_106af5bf;
  /* 106af531 cmp dword ptr [0x106cf704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af538 je 0x106af58d */
  if (C.zf) goto L_106af58d;
  /* 106af53a mov eax, dword ptr [0x106cf704] */
  EAX = (r32((uint32_t)(0x106cf704)));
  /* 106af53f push eax */
  push32((uint32_t)(EAX));
  /* 106af540 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 106af543 push ecx */
  push32((uint32_t)(ECX));
  /* 106af544 mov edx, dword ptr [0x106cf70c] */
  EDX = (r32((uint32_t)(0x106cf70c)));
  /* 106af54a push edx */
  push32((uint32_t)(EDX));
  /* 106af54b call 0x106b1aa0 */
  push32(0x106af550u); f_106b1aa0();
  /* 106af550 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af553 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af555 jne 0x106af58d */
  if (!C.zf) goto L_106af58d;
  /* 106af557 mov eax, dword ptr [0x106cf714] */
  EAX = (r32((uint32_t)(0x106cf714)));
  /* 106af55c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 106af55e mov dword ptr [0x106cf714], eax */
  w32((uint32_t)(0x106cf714), (EAX));
  /* 106af563 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af566 mov dword ptr [0x106cf718], ecx */
  w32((uint32_t)(0x106cf718), (ECX));
  /* 106af56c mov edx, dword ptr [0x106cf70c] */
  EDX = (r32((uint32_t)(0x106cf70c)));
  /* 106af572 push edx */
  push32((uint32_t)(EDX));
  /* 106af573 call 0x106a6130 */
  push32(0x106af578u); f_106a6130();
  /* 106af578 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af57b cmp eax, dword ptr [0x106cf704] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106cf704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af581 jne 0x106af58b */
  if (!C.zf) goto L_106af58b;
  /* 106af583 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af586 mov dword ptr [0x106cf6fc], eax */
  w32((uint32_t)(0x106cf6fc), (EAX));
L_106af58b:;
  /* 106af58b jmp 0x106af5bf */
  goto L_106af5bf;
L_106af58d:;
  /* 106af58d mov ecx, dword ptr [0x106cf714] */
  ECX = (r32((uint32_t)(0x106cf714)));
  /* 106af593 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106af596 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106af598 jne 0x106af5bf */
  if (!C.zf) goto L_106af5bf;
  /* 106af59a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af59d push edx */
  push32((uint32_t)(EDX));
  /* 106af59e call 0x106afad0 */
  push32(0x106af5a3u); f_106afad0();
  /* 106af5a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af5a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af5a8 je 0x106af5bf */
  if (C.zf) goto L_106af5bf;
  /* 106af5aa mov eax, dword ptr [0x106cf714] */
  EAX = (r32((uint32_t)(0x106cf714)));
  /* 106af5af or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 106af5b1 mov dword ptr [0x106cf714], eax */
  w32((uint32_t)(0x106cf714), (EAX));
  /* 106af5b6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af5b9 mov dword ptr [0x106cf718], ecx */
  w32((uint32_t)(0x106cf718), (ECX));
L_106af5bf:;
  /* 106af5bf mov edx, dword ptr [0x106cf714] */
  EDX = (r32((uint32_t)(0x106cf714)));
  /* 106af5c5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 106af5cb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af5d1 je 0x106af741 */
  if (C.zf) goto L_106af741;
  /* 106af5d7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 106af5d9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 106af5dc push eax */
  push32((uint32_t)(EAX));
  /* 106af5dd mov ecx, dword ptr [0x106cf708] */
  ECX = (r32((uint32_t)(0x106cf708)));
  /* 106af5e3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106af5e5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af5e7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 106af5ed add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106af5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106af5f4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af5f7 push edx */
  push32((uint32_t)(EDX));
  /* 106af5f8 call dword ptr [0x106cf71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf71c))), 0x106af5feu);
  /* 106af5fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af600 jne 0x106af616 */
  if (!C.zf) goto L_106af616;
  /* 106af602 mov dword ptr [0x106cf714], 0 */
  w32((uint32_t)(0x106cf714), (0x0u));
  /* 106af60c mov eax, 1 */
  EAX = (0x1u);
  /* 106af611 jmp 0x106af74e */
  goto L_106af74e;
L_106af616:;
  /* 106af616 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 106af619 push eax */
  push32((uint32_t)(EAX));
  /* 106af61a mov ecx, dword ptr [0x106cf70c] */
  ECX = (r32((uint32_t)(0x106cf70c)));
  /* 106af620 push ecx */
  push32((uint32_t)(ECX));
  /* 106af621 call 0x106b19d0 */
  push32(0x106af626u); f_106b19d0();
  /* 106af626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af62b jne 0x106af6e0 */
  if (!C.zf) goto L_106af6e0;
  /* 106af631 mov edx, dword ptr [0x106cf714] */
  EDX = (r32((uint32_t)(0x106cf714)));
  /* 106af637 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 106af63a mov dword ptr [0x106cf714], edx */
  w32((uint32_t)(0x106cf714), (EDX));
  /* 106af640 cmp dword ptr [0x106cf708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af647 je 0x106af66a */
  if (C.zf) goto L_106af66a;
  /* 106af649 mov eax, dword ptr [0x106cf714] */
  EAX = (r32((uint32_t)(0x106cf714)));
  /* 106af64e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 106af651 mov dword ptr [0x106cf714], eax */
  w32((uint32_t)(0x106cf714), (EAX));
  /* 106af656 cmp dword ptr [0x106cf6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af65d jne 0x106af668 */
  if (!C.zf) goto L_106af668;
  /* 106af65f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af662 mov dword ptr [0x106cf6fc], ecx */
  w32((uint32_t)(0x106cf6fc), (ECX));
L_106af668:;
  /* 106af668 jmp 0x106af6de */
  goto L_106af6de;
L_106af66a:;
  /* 106af66a cmp dword ptr [0x106cf704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af671 je 0x106af6bf */
  if (C.zf) goto L_106af6bf;
  /* 106af673 mov edx, dword ptr [0x106cf70c] */
  EDX = (r32((uint32_t)(0x106cf70c)));
  /* 106af679 push edx */
  push32((uint32_t)(EDX));
  /* 106af67a call 0x106a6130 */
  push32(0x106af67fu); f_106a6130();
  /* 106af67f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af682 cmp eax, dword ptr [0x106cf704] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106cf704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af688 jne 0x106af6bf */
  if (!C.zf) goto L_106af6bf;
  /* 106af68a push 1 */
  push32((uint32_t)(0x1u));
  /* 106af68c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af68f push eax */
  push32((uint32_t)(EAX));
  /* 106af690 call 0x106afb20 */
  push32(0x106af695u); f_106afb20();
  /* 106af695 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af698 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af69a je 0x106af6bd */
  if (C.zf) goto L_106af6bd;
  /* 106af69c mov ecx, dword ptr [0x106cf714] */
  ECX = (r32((uint32_t)(0x106cf714)));
  /* 106af6a2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 106af6a5 mov dword ptr [0x106cf714], ecx */
  w32((uint32_t)(0x106cf714), (ECX));
  /* 106af6ab cmp dword ptr [0x106cf6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af6b2 jne 0x106af6bd */
  if (!C.zf) goto L_106af6bd;
  /* 106af6b4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af6b7 mov dword ptr [0x106cf6fc], edx */
  w32((uint32_t)(0x106cf6fc), (EDX));
L_106af6bd:;
  /* 106af6bd jmp 0x106af6de */
  goto L_106af6de;
L_106af6bf:;
  /* 106af6bf mov eax, dword ptr [0x106cf714] */
  EAX = (r32((uint32_t)(0x106cf714)));
  /* 106af6c4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 106af6c7 mov dword ptr [0x106cf714], eax */
  w32((uint32_t)(0x106cf714), (EAX));
  /* 106af6cc cmp dword ptr [0x106cf6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af6d3 jne 0x106af6de */
  if (!C.zf) goto L_106af6de;
  /* 106af6d5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af6d8 mov dword ptr [0x106cf6fc], ecx */
  w32((uint32_t)(0x106cf6fc), (ECX));
L_106af6de:;
  /* 106af6de jmp 0x106af741 */
  goto L_106af741;
L_106af6e0:;
  /* 106af6e0 cmp dword ptr [0x106cf708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af6e7 jne 0x106af741 */
  if (!C.zf) goto L_106af741;
  /* 106af6e9 cmp dword ptr [0x106cf704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af6f0 je 0x106af741 */
  if (C.zf) goto L_106af741;
  /* 106af6f2 mov edx, dword ptr [0x106cf704] */
  EDX = (r32((uint32_t)(0x106cf704)));
  /* 106af6f8 push edx */
  push32((uint32_t)(EDX));
  /* 106af6f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 106af6fc push eax */
  push32((uint32_t)(EAX));
  /* 106af6fd mov ecx, dword ptr [0x106cf70c] */
  ECX = (r32((uint32_t)(0x106cf70c)));
  /* 106af703 push ecx */
  push32((uint32_t)(ECX));
  /* 106af704 call 0x106b1aa0 */
  push32(0x106af709u); f_106b1aa0();
  /* 106af709 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af70c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af70e jne 0x106af741 */
  if (!C.zf) goto L_106af741;
  /* 106af710 push 0 */
  push32((uint32_t)(0x0u));
  /* 106af712 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af715 push edx */
  push32((uint32_t)(EDX));
  /* 106af716 call 0x106afb20 */
  push32(0x106af71bu); f_106afb20();
  /* 106af71b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af71e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af720 je 0x106af741 */
  if (C.zf) goto L_106af741;
  /* 106af722 mov eax, dword ptr [0x106cf714] */
  EAX = (r32((uint32_t)(0x106cf714)));
  /* 106af727 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 106af72a mov dword ptr [0x106cf714], eax */
  w32((uint32_t)(0x106cf714), (EAX));
  /* 106af72f cmp dword ptr [0x106cf6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af736 jne 0x106af741 */
  if (!C.zf) goto L_106af741;
  /* 106af738 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af73b mov dword ptr [0x106cf6fc], ecx */
  w32((uint32_t)(0x106cf6fc), (ECX));
L_106af741:;
  /* 106af741 mov eax, dword ptr [0x106cf714] */
  EAX = (r32((uint32_t)(0x106cf714)));
  /* 106af746 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106af749 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106af74b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af74d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_106af74e:;
  /* 106af74e mov esp, ebp */
  ESP = (EBP);
  /* 106af750 pop ebp */
  EBP = (pop32());
  /* 106af751 ret 4 */
  ESPCHK(0x106af430u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f760 @ 0x106af760 (116 bytes, 33 insns) */
void f_106af760(void) {
  FTRACE(0x106af760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106af760 push ebp */
  push32((uint32_t)(EBP));
  /* 106af761 mov ebp, esp */
  EBP = (ESP);
  /* 106af763 push ecx */
  push32((uint32_t)(ECX));
  /* 106af764 mov eax, dword ptr [0x106cf70c] */
  EAX = (r32((uint32_t)(0x106cf70c)));
  /* 106af769 push eax */
  push32((uint32_t)(EAX));
  /* 106af76a call 0x106a6130 */
  push32(0x106af76fu); f_106a6130();
  /* 106af76f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af772 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106af774 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af777 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 106af77a mov dword ptr [0x106cf708], ecx */
  w32((uint32_t)(0x106cf708), (ECX));
  /* 106af780 cmp dword ptr [0x106cf708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af787 je 0x106af792 */
  if (C.zf) goto L_106af792;
  /* 106af789 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 106af790 jmp 0x106af7a4 */
  goto L_106af7a4;
L_106af792:;
  /* 106af792 mov edx, dword ptr [0x106cf70c] */
  EDX = (r32((uint32_t)(0x106cf70c)));
  /* 106af798 push edx */
  push32((uint32_t)(EDX));
  /* 106af799 call 0x106afe10 */
  push32(0x106af79eu); f_106afe10();
  /* 106af79e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af7a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106af7a4:;
  /* 106af7a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106af7a7 mov dword ptr [0x106cf704], eax */
  w32((uint32_t)(0x106cf704), (EAX));
  /* 106af7ac push 1 */
  push32((uint32_t)(0x1u));
  /* 106af7ae push 0x106af7e0 */
  push32((uint32_t)(0x106af7e0u));
  /* 106af7b3 call dword ptr [0x106d1288] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1288))), 0x106af7b9u);
  /* 106af7b9 mov ecx, dword ptr [0x106cf714] */
  ECX = (r32((uint32_t)(0x106cf714)));
  /* 106af7bf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 106af7c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106af7c4 jne 0x106af7d0 */
  if (!C.zf) goto L_106af7d0;
  /* 106af7c6 mov dword ptr [0x106cf714], 0 */
  w32((uint32_t)(0x106cf714), (0x0u));
L_106af7d0:;
  /* 106af7d0 mov esp, ebp */
  ESP = (EBP);
  /* 106af7d2 pop ebp */
  EBP = (pop32());
  /* 106af7d3 ret  */
  ESPCHK(0x106af760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7e0 @ 0x106af7e0 (287 bytes, 86 insns) */
void f_106af7e0(void) {
  FTRACE(0x106af7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106af7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106af7e1 mov ebp, esp */
  EBP = (ESP);
  /* 106af7e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af7e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106af7e9 push eax */
  push32((uint32_t)(EAX));
  /* 106af7ea call 0x106afd90 */
  push32(0x106af7efu); f_106afd90();
  /* 106af7ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af7f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 106af7f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 106af7f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 106af7fa push ecx */
  push32((uint32_t)(ECX));
  /* 106af7fb mov edx, dword ptr [0x106cf708] */
  EDX = (r32((uint32_t)(0x106cf708)));
  /* 106af801 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106af803 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af805 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 106af80b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106af811 push edx */
  push32((uint32_t)(EDX));
  /* 106af812 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af815 push eax */
  push32((uint32_t)(EAX));
  /* 106af816 call dword ptr [0x106cf71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf71c))), 0x106af81cu);
  /* 106af81c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af81e jne 0x106af834 */
  if (!C.zf) goto L_106af834;
  /* 106af820 mov dword ptr [0x106cf714], 0 */
  w32((uint32_t)(0x106cf714), (0x0u));
  /* 106af82a mov eax, 1 */
  EAX = (0x1u);
  /* 106af82f jmp 0x106af8f9 */
  goto L_106af8f9;
L_106af834:;
  /* 106af834 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 106af837 push ecx */
  push32((uint32_t)(ECX));
  /* 106af838 mov edx, dword ptr [0x106cf70c] */
  EDX = (r32((uint32_t)(0x106cf70c)));
  /* 106af83e push edx */
  push32((uint32_t)(EDX));
  /* 106af83f call 0x106b19d0 */
  push32(0x106af844u); f_106b19d0();
  /* 106af844 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af847 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af849 jne 0x106af889 */
  if (!C.zf) goto L_106af889;
  /* 106af84b cmp dword ptr [0x106cf708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af852 jne 0x106af866 */
  if (!C.zf) goto L_106af866;
  /* 106af854 push 1 */
  push32((uint32_t)(0x1u));
  /* 106af856 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af859 push eax */
  push32((uint32_t)(EAX));
  /* 106af85a call 0x106afb20 */
  push32(0x106af85fu); f_106afb20();
  /* 106af85f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af862 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af864 je 0x106af887 */
  if (C.zf) goto L_106af887;
L_106af866:;
  /* 106af866 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af869 mov dword ptr [0x106cf718], ecx */
  w32((uint32_t)(0x106cf718), (ECX));
  /* 106af86f mov edx, dword ptr [0x106cf718] */
  EDX = (r32((uint32_t)(0x106cf718)));
  /* 106af875 mov dword ptr [0x106cf6fc], edx */
  w32((uint32_t)(0x106cf6fc), (EDX));
  /* 106af87b mov eax, dword ptr [0x106cf714] */
  EAX = (r32((uint32_t)(0x106cf714)));
  /* 106af880 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 106af882 mov dword ptr [0x106cf714], eax */
  w32((uint32_t)(0x106cf714), (EAX));
L_106af887:;
  /* 106af887 jmp 0x106af8ec */
  goto L_106af8ec;
L_106af889:;
  /* 106af889 cmp dword ptr [0x106cf708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af890 jne 0x106af8ec */
  if (!C.zf) goto L_106af8ec;
  /* 106af892 cmp dword ptr [0x106cf704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af899 je 0x106af8ec */
  if (C.zf) goto L_106af8ec;
  /* 106af89b mov ecx, dword ptr [0x106cf704] */
  ECX = (r32((uint32_t)(0x106cf704)));
  /* 106af8a1 push ecx */
  push32((uint32_t)(ECX));
  /* 106af8a2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 106af8a5 push edx */
  push32((uint32_t)(EDX));
  /* 106af8a6 mov eax, dword ptr [0x106cf70c] */
  EAX = (r32((uint32_t)(0x106cf70c)));
  /* 106af8ab push eax */
  push32((uint32_t)(EAX));
  /* 106af8ac call 0x106b1aa0 */
  push32(0x106af8b1u); f_106b1aa0();
  /* 106af8b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af8b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af8b6 jne 0x106af8ec */
  if (!C.zf) goto L_106af8ec;
  /* 106af8b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106af8ba mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af8bd push ecx */
  push32((uint32_t)(ECX));
  /* 106af8be call 0x106afb20 */
  push32(0x106af8c3u); f_106afb20();
  /* 106af8c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af8c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af8c8 je 0x106af8ec */
  if (C.zf) goto L_106af8ec;
  /* 106af8ca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af8cd mov dword ptr [0x106cf718], edx */
  w32((uint32_t)(0x106cf718), (EDX));
  /* 106af8d3 mov eax, dword ptr [0x106cf718] */
  EAX = (r32((uint32_t)(0x106cf718)));
  /* 106af8d8 mov dword ptr [0x106cf6fc], eax */
  w32((uint32_t)(0x106cf6fc), (EAX));
  /* 106af8dd mov ecx, dword ptr [0x106cf714] */
  ECX = (r32((uint32_t)(0x106cf714)));
  /* 106af8e3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 106af8e6 mov dword ptr [0x106cf714], ecx */
  w32((uint32_t)(0x106cf714), (ECX));
L_106af8ec:;
  /* 106af8ec mov eax, dword ptr [0x106cf714] */
  EAX = (r32((uint32_t)(0x106cf714)));
  /* 106af8f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106af8f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106af8f6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af8f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_106af8f9:;
  /* 106af8f9 mov esp, ebp */
  ESP = (EBP);
  /* 106af8fb pop ebp */
  EBP = (pop32());
  /* 106af8fc ret 4 */
  ESPCHK(0x106af7e0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f900 @ 0x106af900 (69 bytes, 20 insns) */
void f_106af900(void) {
  FTRACE(0x106af900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106af900 push ebp */
  push32((uint32_t)(EBP));
  /* 106af901 mov ebp, esp */
  EBP = (ESP);
  /* 106af903 mov eax, dword ptr [0x106cf710] */
  EAX = (r32((uint32_t)(0x106cf710)));
  /* 106af908 push eax */
  push32((uint32_t)(EAX));
  /* 106af909 call 0x106a6130 */
  push32(0x106af90eu); f_106a6130();
  /* 106af90e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af911 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106af913 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106af916 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 106af919 mov dword ptr [0x106cf700], ecx */
  w32((uint32_t)(0x106cf700), (ECX));
  /* 106af91f push 1 */
  push32((uint32_t)(0x1u));
  /* 106af921 push 0x106af950 */
  push32((uint32_t)(0x106af950u));
  /* 106af926 call dword ptr [0x106d1288] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1288))), 0x106af92cu);
  /* 106af92c mov edx, dword ptr [0x106cf714] */
  EDX = (r32((uint32_t)(0x106cf714)));
  /* 106af932 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106af935 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106af937 jne 0x106af943 */
  if (!C.zf) goto L_106af943;
  /* 106af939 mov dword ptr [0x106cf714], 0 */
  w32((uint32_t)(0x106cf714), (0x0u));
L_106af943:;
  /* 106af943 pop ebp */
  EBP = (pop32());
  /* 106af944 ret  */
  ESPCHK(0x106af900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f950 @ 0x106af950 (172 bytes, 54 insns) */
void f_106af950(void) {
  FTRACE(0x106af950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106af950 push ebp */
  push32((uint32_t)(EBP));
  /* 106af951 mov ebp, esp */
  EBP = (ESP);
  /* 106af953 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106af959 push eax */
  push32((uint32_t)(EAX));
  /* 106af95a call 0x106afd90 */
  push32(0x106af95fu); f_106afd90();
  /* 106af95f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af962 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 106af965 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 106af967 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 106af96a push ecx */
  push32((uint32_t)(ECX));
  /* 106af96b mov edx, dword ptr [0x106cf700] */
  EDX = (r32((uint32_t)(0x106cf700)));
  /* 106af971 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106af973 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af975 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 106af97b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106af981 push edx */
  push32((uint32_t)(EDX));
  /* 106af982 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af985 push eax */
  push32((uint32_t)(EAX));
  /* 106af986 call dword ptr [0x106cf71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf71c))), 0x106af98cu);
  /* 106af98c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af98e jne 0x106af9a1 */
  if (!C.zf) goto L_106af9a1;
  /* 106af990 mov dword ptr [0x106cf714], 0 */
  w32((uint32_t)(0x106cf714), (0x0u));
  /* 106af99a mov eax, 1 */
  EAX = (0x1u);
  /* 106af99f jmp 0x106af9f6 */
  goto L_106af9f6;
L_106af9a1:;
  /* 106af9a1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 106af9a4 push ecx */
  push32((uint32_t)(ECX));
  /* 106af9a5 mov edx, dword ptr [0x106cf710] */
  EDX = (r32((uint32_t)(0x106cf710)));
  /* 106af9ab push edx */
  push32((uint32_t)(EDX));
  /* 106af9ac call 0x106b19d0 */
  push32(0x106af9b1u); f_106b19d0();
  /* 106af9b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af9b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af9b6 jne 0x106af9e9 */
  if (!C.zf) goto L_106af9e9;
  /* 106af9b8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af9bb push eax */
  push32((uint32_t)(EAX));
  /* 106af9bc call 0x106afad0 */
  push32(0x106af9c1u); f_106afad0();
  /* 106af9c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106af9c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106af9c6 je 0x106af9e9 */
  if (C.zf) goto L_106af9e9;
  /* 106af9c8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 106af9cb mov dword ptr [0x106cf718], ecx */
  w32((uint32_t)(0x106cf718), (ECX));
  /* 106af9d1 mov edx, dword ptr [0x106cf718] */
  EDX = (r32((uint32_t)(0x106cf718)));
  /* 106af9d7 mov dword ptr [0x106cf6fc], edx */
  w32((uint32_t)(0x106cf6fc), (EDX));
  /* 106af9dd mov eax, dword ptr [0x106cf714] */
  EAX = (r32((uint32_t)(0x106cf714)));
  /* 106af9e2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 106af9e4 mov dword ptr [0x106cf714], eax */
  w32((uint32_t)(0x106cf714), (EAX));
L_106af9e9:;
  /* 106af9e9 mov eax, dword ptr [0x106cf714] */
  EAX = (r32((uint32_t)(0x106cf714)));
  /* 106af9ee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106af9f1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106af9f3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106af9f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_106af9f6:;
  /* 106af9f6 mov esp, ebp */
  ESP = (EBP);
  /* 106af9f8 pop ebp */
  EBP = (pop32());
  /* 106af9f9 ret 4 */
  ESPCHK(0x106af950u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fa00 @ 0x106afa00 (43 bytes, 11 insns) */
void f_106afa00(void) {
  FTRACE(0x106afa00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106afa00 push ebp */
  push32((uint32_t)(EBP));
  /* 106afa01 mov ebp, esp */
  EBP = (ESP);
  /* 106afa03 mov eax, dword ptr [0x106cf714] */
  EAX = (r32((uint32_t)(0x106cf714)));
  /* 106afa08 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 106afa0d mov dword ptr [0x106cf714], eax */
  w32((uint32_t)(0x106cf714), (EAX));
  /* 106afa12 call dword ptr [0x106d1278] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1278))), 0x106afa18u);
  /* 106afa18 mov dword ptr [0x106cf718], eax */
  w32((uint32_t)(0x106cf718), (EAX));
  /* 106afa1d mov ecx, dword ptr [0x106cf718] */
  ECX = (r32((uint32_t)(0x106cf718)));
  /* 106afa23 mov dword ptr [0x106cf6fc], ecx */
  w32((uint32_t)(0x106cf6fc), (ECX));
  /* 106afa29 pop ebp */
  EBP = (pop32());
  /* 106afa2a ret  */
  ESPCHK(0x106afa00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa30 @ 0x106afa30 (155 bytes, 57 insns) */
void f_106afa30(void) {
  FTRACE(0x106afa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106afa30 push ebp */
  push32((uint32_t)(EBP));
  /* 106afa31 mov ebp, esp */
  EBP = (ESP);
  /* 106afa33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106afa36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afa3a je 0x106afa5b */
  if (C.zf) goto L_106afa5b;
  /* 106afa3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afa3f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106afa42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106afa44 je 0x106afa5b */
  if (C.zf) goto L_106afa5b;
  /* 106afa46 push 0x106cb73c */
  push32((uint32_t)(0x106cb73cu));
  /* 106afa4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afa4e push edx */
  push32((uint32_t)(EDX));
  /* 106afa4f call 0x106aef90 */
  push32(0x106afa54u); f_106aef90();
  /* 106afa54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106afa57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106afa59 jne 0x106afa83 */
  if (!C.zf) goto L_106afa83;
L_106afa5b:;
  /* 106afa5b push 8 */
  push32((uint32_t)(0x8u));
  /* 106afa5d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 106afa60 push eax */
  push32((uint32_t)(EAX));
  /* 106afa61 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 106afa66 mov ecx, dword ptr [0x106cf718] */
  ECX = (r32((uint32_t)(0x106cf718)));
  /* 106afa6c push ecx */
  push32((uint32_t)(ECX));
  /* 106afa6d call dword ptr [0x106cf71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf71c))), 0x106afa73u);
  /* 106afa73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106afa75 jne 0x106afa7b */
  if (!C.zf) goto L_106afa7b;
  /* 106afa77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106afa79 jmp 0x106afac7 */
  goto L_106afac7;
L_106afa7b:;
  /* 106afa7b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 106afa7e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106afa81 jmp 0x106afabb */
  goto L_106afabb;
L_106afa83:;
  /* 106afa83 push 0x106cb738 */
  push32((uint32_t)(0x106cb738u));
  /* 106afa88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afa8b push eax */
  push32((uint32_t)(EAX));
  /* 106afa8c call 0x106aef90 */
  push32(0x106afa91u); f_106aef90();
  /* 106afa91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106afa94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106afa96 jne 0x106afabb */
  if (!C.zf) goto L_106afabb;
  /* 106afa98 push 8 */
  push32((uint32_t)(0x8u));
  /* 106afa9a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 106afa9d push ecx */
  push32((uint32_t)(ECX));
  /* 106afa9e push 0xb */
  push32((uint32_t)(0xbu));
  /* 106afaa0 mov edx, dword ptr [0x106cf718] */
  EDX = (r32((uint32_t)(0x106cf718)));
  /* 106afaa6 push edx */
  push32((uint32_t)(EDX));
  /* 106afaa7 call dword ptr [0x106cf71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf71c))), 0x106afaadu);
  /* 106afaad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106afaaf jne 0x106afab5 */
  if (!C.zf) goto L_106afab5;
  /* 106afab1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106afab3 jmp 0x106afac7 */
  goto L_106afac7;
L_106afab5:;
  /* 106afab5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 106afab8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106afabb:;
  /* 106afabb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afabe push ecx */
  push32((uint32_t)(ECX));
  /* 106afabf call 0x106b1bb0 */
  push32(0x106afac4u); f_106b1bb0();
  /* 106afac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106afac7:;
  /* 106afac7 mov esp, ebp */
  ESP = (EBP);
  /* 106afac9 pop ebp */
  EBP = (pop32());
  /* 106afaca ret  */
  ESPCHK(0x106afa30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fad0 @ 0x106afad0 (79 bytes, 26 insns) */
void f_106afad0(void) {
  FTRACE(0x106afad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106afad0 push ebp */
  push32((uint32_t)(EBP));
  /* 106afad1 mov ebp, esp */
  EBP = (ESP);
  /* 106afad3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106afad6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 106afada mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 106afade mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106afae5 jmp 0x106afaf0 */
  goto L_106afaf0;
L_106afae7:;
  /* 106afae7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106afaea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106afaed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106afaf0:;
  /* 106afaf0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afaf4 jae 0x106afb16 */
  if (!C.cf) goto L_106afb16;
  /* 106afaf6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106afaf9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106afaff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106afb02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106afb04 mov cx, word ptr [eax*2 + 0x106ce9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x106ce9c4)));
  /* 106afb0c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afb0e jne 0x106afb14 */
  if (!C.zf) goto L_106afb14;
  /* 106afb10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106afb12 jmp 0x106afb1b */
  goto L_106afb1b;
L_106afb14:;
  /* 106afb14 jmp 0x106afae7 */
  goto L_106afae7;
L_106afb16:;
  /* 106afb16 mov eax, 1 */
  EAX = (0x1u);
L_106afb1b:;
  /* 106afb1b mov esp, ebp */
  ESP = (EBP);
  /* 106afb1d pop ebp */
  EBP = (pop32());
  /* 106afb1e ret  */
  ESPCHK(0x106afad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb20 @ 0x106afb20 (135 bytes, 48 insns) */
void f_106afb20(void) {
  FTRACE(0x106afb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106afb20 push ebp */
  push32((uint32_t)(EBP));
  /* 106afb21 mov ebp, esp */
  EBP = (ESP);
  /* 106afb23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106afb26 push esi */
  push32((uint32_t)(ESI));
  /* 106afb27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afb2a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106afb2f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 106afb34 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106afb39 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 106afb3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106afb41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106afb44 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 106afb46 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 106afb49 push ecx */
  push32((uint32_t)(ECX));
  /* 106afb4a push 1 */
  push32((uint32_t)(0x1u));
  /* 106afb4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106afb4f push edx */
  push32((uint32_t)(EDX));
  /* 106afb50 call dword ptr [0x106cf71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf71c))), 0x106afb56u);
  /* 106afb56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106afb58 jne 0x106afb5e */
  if (!C.zf) goto L_106afb5e;
  /* 106afb5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106afb5c jmp 0x106afba2 */
  goto L_106afba2;
L_106afb5e:;
  /* 106afb5e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 106afb61 push eax */
  push32((uint32_t)(EAX));
  /* 106afb62 call 0x106afd90 */
  push32(0x106afb67u); f_106afd90();
  /* 106afb67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106afb6a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afb6d je 0x106afb9d */
  if (C.zf) goto L_106afb9d;
  /* 106afb6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afb73 je 0x106afb9d */
  if (C.zf) goto L_106afb9d;
  /* 106afb75 mov ecx, dword ptr [0x106cf70c] */
  ECX = (r32((uint32_t)(0x106cf70c)));
  /* 106afb7b push ecx */
  push32((uint32_t)(ECX));
  /* 106afb7c call 0x106afe10 */
  push32(0x106afb81u); f_106afe10();
  /* 106afb81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106afb84 mov esi, eax */
  ESI = (EAX);
  /* 106afb86 mov edx, dword ptr [0x106cf70c] */
  EDX = (r32((uint32_t)(0x106cf70c)));
  /* 106afb8c push edx */
  push32((uint32_t)(EDX));
  /* 106afb8d call 0x106a6130 */
  push32(0x106afb92u); f_106a6130();
  /* 106afb92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106afb95 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afb97 jne 0x106afb9d */
  if (!C.zf) goto L_106afb9d;
  /* 106afb99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106afb9b jmp 0x106afba2 */
  goto L_106afba2;
L_106afb9d:;
  /* 106afb9d mov eax, 1 */
  EAX = (0x1u);
L_106afba2:;
  /* 106afba2 pop esi */
  ESI = (pop32());
  /* 106afba3 mov esp, ebp */
  ESP = (EBP);
  /* 106afba5 pop ebp */
  EBP = (pop32());
  /* 106afba6 ret  */
  ESPCHK(0x106afb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbb0 @ 0x106afbb0 (77 bytes, 18 insns) */
void f_106afbb0(void) {
  FTRACE(0x106afbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106afbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 106afbb1 mov ebp, esp */
  EBP = (ESP);
  /* 106afbb3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106afbb9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 106afbc3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 106afbc9 push eax */
  push32((uint32_t)(EAX));
  /* 106afbca call dword ptr [0x106d1274] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1274))), 0x106afbd0u);
  /* 106afbd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106afbd2 je 0x106afbe9 */
  if (C.zf) goto L_106afbe9;
  /* 106afbd4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afbdb jne 0x106afbe9 */
  if (!C.zf) goto L_106afbe9;
  /* 106afbdd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 106afbe7 jmp 0x106afbf3 */
  goto L_106afbf3;
L_106afbe9:;
  /* 106afbe9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_106afbf3:;
  /* 106afbf3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 106afbf9 mov esp, ebp */
  ESP = (EBP);
  /* 106afbfb pop ebp */
  EBP = (pop32());
  /* 106afbfc ret  */
  ESPCHK(0x106afbb0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x106afc00 (388 bytes, 118 insns) */
void f_106afc00(void) {
  FTRACE(0x106afc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106afc00 push ebp */
  push32((uint32_t)(EBP));
  /* 106afc01 mov ebp, esp */
  EBP = (ESP);
  /* 106afc03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106afc06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106afc0d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 106afc14 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106afc1b:;
  /* 106afc1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106afc1e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afc21 jg 0x106afd68 */
  if ((!C.zf&&C.sf==C.of)) goto L_106afd68;
  /* 106afc27 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106afc2a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106afc2d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106afc2e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106afc30 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106afc32 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106afc35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106afc38 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106afc3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afc3e cmp edx, dword ptr [ecx + 0x106ce520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x106ce520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afc44 jne 0x106afd3e */
  if (!C.zf) goto L_106afd3e;
  /* 106afc4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106afc4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106afc50 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afc54 ja 0x106afc77 */
  if ((!C.cf&&!C.zf)) goto L_106afc77;
  /* 106afc56 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afc5a je 0x106afce9 */
  if (C.zf) goto L_106afce9;
  /* 106afc60 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afc64 je 0x106afc94 */
  if (C.zf) goto L_106afc94;
  /* 106afc66 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afc6a je 0x106afcb6 */
  if (C.zf) goto L_106afcb6;
  /* 106afc6c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afc70 je 0x106afcd8 */
  if (C.zf) goto L_106afcd8;
  /* 106afc72 jmp 0x106afd08 */
  goto L_106afd08;
L_106afc77:;
  /* 106afc77 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afc7e je 0x106afca5 */
  if (C.zf) goto L_106afca5;
  /* 106afc80 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afc87 je 0x106afcc7 */
  if (C.zf) goto L_106afcc7;
  /* 106afc89 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afc90 je 0x106afcfa */
  if (C.zf) goto L_106afcfa;
  /* 106afc92 jmp 0x106afd08 */
  goto L_106afd08;
L_106afc94:;
  /* 106afc94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106afc97 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106afc9a add ecx, 0x106ce524 */
  { uint32_t _a=(ECX),_b=(0x106ce524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106afca0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106afca3 jmp 0x106afd08 */
  goto L_106afd08;
L_106afca5:;
  /* 106afca5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106afca8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106afcab mov eax, dword ptr [edx + 0x106ce52c] */
  EAX = (r32((uint32_t)(EDX + 0x106ce52c)));
  /* 106afcb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106afcb4 jmp 0x106afd08 */
  goto L_106afd08;
L_106afcb6:;
  /* 106afcb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106afcb9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106afcbc add ecx, 0x106ce530 */
  { uint32_t _a=(ECX),_b=(0x106ce530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106afcc2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106afcc5 jmp 0x106afd08 */
  goto L_106afd08;
L_106afcc7:;
  /* 106afcc7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106afcca imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106afccd mov eax, dword ptr [edx + 0x106ce534] */
  EAX = (r32((uint32_t)(EDX + 0x106ce534)));
  /* 106afcd3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106afcd6 jmp 0x106afd08 */
  goto L_106afd08;
L_106afcd8:;
  /* 106afcd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106afcdb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106afcde add ecx, 0x106ce538 */
  { uint32_t _a=(ECX),_b=(0x106ce538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106afce4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106afce7 jmp 0x106afd08 */
  goto L_106afd08;
L_106afce9:;
  /* 106afce9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106afcec imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106afcef add edx, 0x106ce53c */
  { uint32_t _a=(EDX),_b=(0x106ce53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106afcf5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106afcf8 jmp 0x106afd08 */
  goto L_106afd08;
L_106afcfa:;
  /* 106afcfa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106afcfd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106afd00 add eax, 0x106ce544 */
  { uint32_t _a=(EAX),_b=(0x106ce544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106afd05 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106afd08:;
  /* 106afd08 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afd0c je 0x106afd14 */
  if (C.zf) goto L_106afd14;
  /* 106afd0e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afd12 jge 0x106afd16 */
  if ((C.sf==C.of)) goto L_106afd16;
L_106afd14:;
  /* 106afd14 jmp 0x106afd68 */
  goto L_106afd68;
L_106afd16:;
  /* 106afd16 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106afd19 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106afd1c push ecx */
  push32((uint32_t)(ECX));
  /* 106afd1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106afd20 push edx */
  push32((uint32_t)(EDX));
  /* 106afd21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106afd24 push eax */
  push32((uint32_t)(EAX));
  /* 106afd25 call 0x106a6b20 */
  push32(0x106afd2au); f_106a6b20();
  /* 106afd2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106afd2d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106afd30 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106afd33 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 106afd37 mov eax, 1 */
  EAX = (0x1u);
  /* 106afd3c jmp 0x106afd7e */
  goto L_106afd7e;
L_106afd3e:;
  /* 106afd3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106afd41 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106afd44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afd47 cmp eax, dword ptr [edx + 0x106ce520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x106ce520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afd4d jae 0x106afd5a */
  if (!C.cf) goto L_106afd5a;
  /* 106afd4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106afd52 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106afd55 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106afd58 jmp 0x106afd63 */
  goto L_106afd63;
L_106afd5a:;
  /* 106afd5a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106afd5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106afd60 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106afd63:;
  /* 106afd63 jmp 0x106afc1b */
  goto L_106afc1b;
L_106afd68:;
  /* 106afd68 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106afd6b push eax */
  push32((uint32_t)(EAX));
  /* 106afd6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106afd6f push ecx */
  push32((uint32_t)(ECX));
  /* 106afd70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106afd73 push edx */
  push32((uint32_t)(EDX));
  /* 106afd74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afd77 push eax */
  push32((uint32_t)(EAX));
  /* 106afd78 call dword ptr [0x106d1280] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1280))), 0x106afd7eu);
L_106afd7e:;
  /* 106afd7e mov esp, ebp */
  ESP = (EBP);
  /* 106afd80 pop ebp */
  EBP = (pop32());
  /* 106afd81 ret 0x10 */
  ESPCHK(0x106afc00u, _esp0);
  ESP += 20; return;
}

/* FUN_1000fd90 @ 0x106afd90 (118 bytes, 42 insns) */
void f_106afd90(void) {
  FTRACE(0x106afd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106afd90 push ebp */
  push32((uint32_t)(EBP));
  /* 106afd91 mov ebp, esp */
  EBP = (ESP);
  /* 106afd93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106afd96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106afd9d:;
  /* 106afd9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afda0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106afda2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 106afda5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106afda9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afdac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106afdaf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106afdb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106afdb4 je 0x106afdff */
  if (C.zf) goto L_106afdff;
  /* 106afdb6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106afdba cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afdbd jl 0x106afdd2 */
  if ((C.sf!=C.of)) goto L_106afdd2;
  /* 106afdbf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106afdc3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afdc6 jg 0x106afdd2 */
  if ((!C.zf&&C.sf==C.of)) goto L_106afdd2;
  /* 106afdc8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 106afdcb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106afdcd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 106afdd0 jmp 0x106afdec */
  goto L_106afdec;
L_106afdd2:;
  /* 106afdd2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106afdd6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afdd9 jl 0x106afdec */
  if ((C.sf!=C.of)) goto L_106afdec;
  /* 106afddb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106afddf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afde2 jg 0x106afdec */
  if ((!C.zf&&C.sf==C.of)) goto L_106afdec;
  /* 106afde4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 106afde7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 106afde9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_106afdec:;
  /* 106afdec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106afdef shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 106afdf2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 106afdf6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 106afdfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106afdfd jmp 0x106afd9d */
  goto L_106afd9d;
L_106afdff:;
  /* 106afdff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106afe02 mov esp, ebp */
  ESP = (EBP);
  /* 106afe04 pop ebp */
  EBP = (pop32());
  /* 106afe05 ret  */
  ESPCHK(0x106afd90u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x106afe10 (101 bytes, 36 insns) */
void f_106afe10(void) {
  FTRACE(0x106afe10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106afe10 push ebp */
  push32((uint32_t)(EBP));
  /* 106afe11 mov ebp, esp */
  EBP = (ESP);
  /* 106afe13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106afe16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106afe1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afe20 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106afe22 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 106afe25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afe28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106afe2b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_106afe2e:;
  /* 106afe2e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 106afe32 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afe35 jl 0x106afe40 */
  if ((C.sf!=C.of)) goto L_106afe40;
  /* 106afe37 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 106afe3b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afe3e jle 0x106afe52 */
  if ((C.zf||C.sf!=C.of)) goto L_106afe52;
L_106afe40:;
  /* 106afe40 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 106afe44 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afe47 jl 0x106afe6e */
  if ((C.sf!=C.of)) goto L_106afe6e;
  /* 106afe49 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 106afe4d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afe50 jg 0x106afe6e */
  if ((!C.zf&&C.sf==C.of)) goto L_106afe6e;
L_106afe52:;
  /* 106afe52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106afe55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106afe58 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106afe5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afe5e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106afe60 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 106afe63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afe66 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106afe69 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 106afe6c jmp 0x106afe2e */
  goto L_106afe2e;
L_106afe6e:;
  /* 106afe6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106afe71 mov esp, ebp */
  ESP = (EBP);
  /* 106afe73 pop ebp */
  EBP = (pop32());
  /* 106afe74 ret  */
  ESPCHK(0x106afe10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe80 @ 0x106afe80 (122 bytes, 39 insns) */
void f_106afe80(void) {
  FTRACE(0x106afe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106afe80 push ebp */
  push32((uint32_t)(EBP));
  /* 106afe81 mov ebp, esp */
  EBP = (ESP);
  /* 106afe83 push ecx */
  push32((uint32_t)(ECX));
  /* 106afe84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afe87 cmp eax, dword ptr [0x106d0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106d0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106afe8d jae 0x106afeb1 */
  if (!C.cf) goto L_106afeb1;
  /* 106afe8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afe92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 106afe95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afe98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 106afe9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106afe9e mov eax, dword ptr [ecx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x106d0e60)));
  /* 106afea5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 106afeaa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106afead test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106afeaf jne 0x106afecc */
  if (!C.zf) goto L_106afecc;
L_106afeb1:;
  /* 106afeb1 call 0x106ab1d0 */
  push32(0x106afeb6u); f_106ab1d0();
  /* 106afeb6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 106afebc call 0x106ab1e0 */
  push32(0x106afec1u); f_106ab1e0();
  /* 106afec1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106afec7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106afeca jmp 0x106afef6 */
  goto L_106afef6;
L_106afecc:;
  /* 106afecc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afecf push edx */
  push32((uint32_t)(EDX));
  /* 106afed0 call 0x106ac9f0 */
  push32(0x106afed5u); f_106ac9f0();
  /* 106afed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106afed8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afedb push eax */
  push32((uint32_t)(EAX));
  /* 106afedc call 0x106aff00 */
  push32(0x106afee1u); f_106aff00();
  /* 106afee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106afee4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106afee7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afeea push ecx */
  push32((uint32_t)(ECX));
  /* 106afeeb call 0x106aca80 */
  push32(0x106afef0u); f_106aca80();
  /* 106afef0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106afef3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106afef6:;
  /* 106afef6 mov esp, ebp */
  ESP = (EBP);
  /* 106afef8 pop ebp */
  EBP = (pop32());
  /* 106afef9 ret  */
  ESPCHK(0x106afe80u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x106aff00 (170 bytes, 59 insns) */
void f_106aff00(void) {
  FTRACE(0x106aff00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106aff00 push ebp */
  push32((uint32_t)(EBP));
  /* 106aff01 mov ebp, esp */
  EBP = (ESP);
  /* 106aff03 push ecx */
  push32((uint32_t)(ECX));
  /* 106aff04 push esi */
  push32((uint32_t)(ESI));
  /* 106aff05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aff08 push eax */
  push32((uint32_t)(EAX));
  /* 106aff09 call 0x106ac870 */
  push32(0x106aff0eu); f_106ac870();
  /* 106aff0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aff11 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aff14 je 0x106aff53 */
  if (C.zf) goto L_106aff53;
  /* 106aff16 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aff1a je 0x106aff22 */
  if (C.zf) goto L_106aff22;
  /* 106aff1c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aff20 jne 0x106aff3c */
  if (!C.zf) goto L_106aff3c;
L_106aff22:;
  /* 106aff22 push 1 */
  push32((uint32_t)(0x1u));
  /* 106aff24 call 0x106ac870 */
  push32(0x106aff29u); f_106ac870();
  /* 106aff29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aff2c mov esi, eax */
  ESI = (EAX);
  /* 106aff2e push 2 */
  push32((uint32_t)(0x2u));
  /* 106aff30 call 0x106ac870 */
  push32(0x106aff35u); f_106ac870();
  /* 106aff35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aff38 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aff3a je 0x106aff53 */
  if (C.zf) goto L_106aff53;
L_106aff3c:;
  /* 106aff3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aff3f push ecx */
  push32((uint32_t)(ECX));
  /* 106aff40 call 0x106ac870 */
  push32(0x106aff45u); f_106ac870();
  /* 106aff45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aff48 push eax */
  push32((uint32_t)(EAX));
  /* 106aff49 call dword ptr [0x106d127c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d127c))), 0x106aff4fu);
  /* 106aff4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106aff51 je 0x106aff5c */
  if (C.zf) goto L_106aff5c;
L_106aff53:;
  /* 106aff53 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106aff5a jmp 0x106aff65 */
  goto L_106aff65;
L_106aff5c:;
  /* 106aff5c call dword ptr [0x106d1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1304))), 0x106aff62u);
  /* 106aff62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106aff65:;
  /* 106aff65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aff68 push edx */
  push32((uint32_t)(EDX));
  /* 106aff69 call 0x106ac790 */
  push32(0x106aff6eu); f_106ac790();
  /* 106aff6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aff71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aff74 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106aff77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106aff7a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106aff7d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106aff80 mov edx, dword ptr [eax*4 + 0x106d0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x106d0e60)));
  /* 106aff87 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 106aff8c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106aff90 je 0x106affa3 */
  if (C.zf) goto L_106affa3;
  /* 106aff92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106aff95 push eax */
  push32((uint32_t)(EAX));
  /* 106aff96 call 0x106ab130 */
  push32(0x106aff9bu); f_106ab130();
  /* 106aff9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106aff9e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106affa1 jmp 0x106affa5 */
  goto L_106affa5;
L_106affa3:;
  /* 106affa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106affa5:;
  /* 106affa5 pop esi */
  ESI = (pop32());
  /* 106affa6 mov esp, ebp */
  ESP = (EBP);
  /* 106affa8 pop ebp */
  EBP = (pop32());
  /* 106affa9 ret  */
  ESPCHK(0x106aff00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffb0 @ 0x106affb0 (146 bytes, 52 insns) */
void f_106affb0(void) {
  FTRACE(0x106affb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106affb0 push ebp */
  push32((uint32_t)(EBP));
  /* 106affb1 mov ebp, esp */
  EBP = (ESP);
  /* 106affb3 push ebx */
  push32((uint32_t)(EBX));
  /* 106affb4 push esi */
  push32((uint32_t)(ESI));
  /* 106affb5 push edi */
  push32((uint32_t)(EDI));
L_106affb6:;
  /* 106affb6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106affba jne 0x106affda */
  if (!C.zf) goto L_106affda;
  /* 106affbc push 0x106cb078 */
  push32((uint32_t)(0x106cb078u));
  /* 106affc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106affc3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 106affc5 push 0x106cb740 */
  push32((uint32_t)(0x106cb740u));
  /* 106affca push 2 */
  push32((uint32_t)(0x2u));
  /* 106affcc call 0x106a23c0 */
  push32(0x106affd1u); f_106a23c0();
  /* 106affd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106affd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106affd7 jne 0x106affda */
  if (!C.zf) goto L_106affda;
  /* 106affd9 int3  */
  x86_unimpl("int3 @ 0x106affd9");
L_106affda:;
  /* 106affda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106affdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106affde jne 0x106affb6 */
  if (!C.zf) goto L_106affb6;
  /* 106affe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106affe3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106affe6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 106affec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106affee je 0x106b003d */
  if (C.zf) goto L_106b003d;
  /* 106afff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106afff3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106afff6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 106afff9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106afffb je 0x106b003d */
  if (C.zf) goto L_106b003d;
  /* 106afffd push 2 */
  push32((uint32_t)(0x2u));
  /* 106affff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0002 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106b0005 push eax */
  push32((uint32_t)(EAX));
  /* 106b0006 call 0x106a3d90 */
  push32(0x106b000bu); f_106a3d90();
  /* 106b000b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b000e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0011 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106b0014 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 106b001a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b001d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 106b0020 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0023 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 106b0029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b002c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 106b0033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106b0036 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_106b003d:;
  /* 106b003d pop edi */
  EDI = (pop32());
  /* 106b003e pop esi */
  ESI = (pop32());
  /* 106b003f pop ebx */
  EBX = (pop32());
  /* 106b0040 pop ebp */
  EBP = (pop32());
  /* 106b0041 ret  */
  ESPCHK(0x106affb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010050 @ 0x106b0050 (289 bytes, 97 insns) */
void f_106b0050(void) {
  FTRACE(0x106b0050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b0050 push ebp */
  push32((uint32_t)(EBP));
  /* 106b0051 mov ebp, esp */
  EBP = (ESP);
  /* 106b0053 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0056 push esi */
  push32((uint32_t)(ESI));
  /* 106b0057 mov eax, dword ptr [0x106cec98] */
  EAX = (r32((uint32_t)(0x106cec98)));
  /* 106b005c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106b005f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106b0066 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106b006d jmp 0x106b0078 */
  goto L_106b0078;
L_106b006f:;
  /* 106b006f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b0072 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0075 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106b0078:;
  /* 106b0078 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b007c jae 0x106b00b1 */
  if (!C.cf) goto L_106b00b1;
  /* 106b007e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b0081 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0084 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 106b0087 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0088 call 0x106a6130 */
  push32(0x106b008du); f_106a6130();
  /* 106b008d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0090 mov esi, eax */
  ESI = (EAX);
  /* 106b0092 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b0095 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0098 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 106b009c push ecx */
  push32((uint32_t)(ECX));
  /* 106b009d call 0x106a6130 */
  push32(0x106b00a2u); f_106a6130();
  /* 106b00a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b00a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b00a8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 106b00ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106b00af jmp 0x106b006f */
  goto L_106b006f;
L_106b00b1:;
  /* 106b00b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b00b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b00b7 push eax */
  push32((uint32_t)(EAX));
  /* 106b00b8 call 0x106a32e0 */
  push32(0x106b00bdu); f_106a32e0();
  /* 106b00bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b00c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106b00c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b00c7 je 0x106b0169 */
  if (C.zf) goto L_106b0169;
  /* 106b00cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b00d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106b00d3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106b00da jmp 0x106b00e5 */
  goto L_106b00e5;
L_106b00dc:;
  /* 106b00dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b00df add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b00e2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106b00e5:;
  /* 106b00e5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b00e9 jae 0x106b015a */
  if (!C.cf) goto L_106b015a;
  /* 106b00eb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b00ee mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 106b00f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b00f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b00f7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106b00fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b00fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0100 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 106b0103 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0104 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0107 push edx */
  push32((uint32_t)(EDX));
  /* 106b0108 call 0x106a62b0 */
  push32(0x106b010du); f_106a62b0();
  /* 106b010d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0110 push eax */
  push32((uint32_t)(EAX));
  /* 106b0111 call 0x106a6130 */
  push32(0x106b0116u); f_106a6130();
  /* 106b0116 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0119 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b011c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b011e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106b0121 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0124 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 106b0127 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b012a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b012d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106b0130 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b0133 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0136 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 106b013a push eax */
  push32((uint32_t)(EAX));
  /* 106b013b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b013e push ecx */
  push32((uint32_t)(ECX));
  /* 106b013f call 0x106a62b0 */
  push32(0x106b0144u); f_106a62b0();
  /* 106b0144 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0147 push eax */
  push32((uint32_t)(EAX));
  /* 106b0148 call 0x106a6130 */
  push32(0x106b014du); f_106a6130();
  /* 106b014d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0150 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0153 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0155 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106b0158 jmp 0x106b00dc */
  goto L_106b00dc;
L_106b015a:;
  /* 106b015a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b015d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106b0160 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0163 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0166 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_106b0169:;
  /* 106b0169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b016c pop esi */
  ESI = (pop32());
  /* 106b016d mov esp, ebp */
  ESP = (EBP);
  /* 106b016f pop ebp */
  EBP = (pop32());
  /* 106b0170 ret  */
  ESPCHK(0x106b0050u, _esp0);
  ESP += 4; return;
}

/* FUN_10010180 @ 0x106b0180 (291 bytes, 97 insns) */
void f_106b0180(void) {
  FTRACE(0x106b0180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106b0180 push ebp */
  push32((uint32_t)(EBP));
  /* 106b0181 mov ebp, esp */
  EBP = (ESP);
  /* 106b0183 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106b0186 push esi */
  push32((uint32_t)(ESI));
  /* 106b0187 mov eax, dword ptr [0x106cec98] */
  EAX = (r32((uint32_t)(0x106cec98)));
  /* 106b018c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106b018f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106b0196 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106b019d jmp 0x106b01a8 */
  goto L_106b01a8;
L_106b019f:;
  /* 106b019f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b01a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b01a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106b01a8:;
  /* 106b01a8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b01ac jae 0x106b01e2 */
  if (!C.cf) goto L_106b01e2;
  /* 106b01ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b01b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b01b4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 106b01b8 push ecx */
  push32((uint32_t)(ECX));
  /* 106b01b9 call 0x106a6130 */
  push32(0x106b01beu); f_106a6130();
  /* 106b01be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b01c1 mov esi, eax */
  ESI = (EAX);
  /* 106b01c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b01c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b01c9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 106b01cd push ecx */
  push32((uint32_t)(ECX));
  /* 106b01ce call 0x106a6130 */
  push32(0x106b01d3u); f_106a6130();
  /* 106b01d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b01d6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b01d9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 106b01dd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106b01e0 jmp 0x106b019f */
  goto L_106b019f;
L_106b01e2:;
  /* 106b01e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106b01e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b01e8 push eax */
  push32((uint32_t)(EAX));
  /* 106b01e9 call 0x106a32e0 */
  push32(0x106b01eeu); f_106a32e0();
  /* 106b01ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b01f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106b01f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b01f8 je 0x106b029b */
  if (C.zf) goto L_106b029b;
  /* 106b01fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b0201 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106b0204 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106b020b jmp 0x106b0216 */
  goto L_106b0216;
L_106b020d:;
  /* 106b020d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b0210 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0213 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106b0216:;
  /* 106b0216 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106b021a jae 0x106b028c */
  if (!C.cf) goto L_106b028c;
  /* 106b021c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b021f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 106b0222 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0225 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0228 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106b022b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b022e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0231 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 106b0235 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0236 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0239 push edx */
  push32((uint32_t)(EDX));
  /* 106b023a call 0x106a62b0 */
  push32(0x106b023fu); f_106a62b0();
  /* 106b023f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0242 push eax */
  push32((uint32_t)(EAX));
  /* 106b0243 call 0x106a6130 */
  push32(0x106b0248u); f_106a6130();
  /* 106b0248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b024b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b024e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0250 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106b0253 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0256 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 106b0259 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b025c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b025f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106b0262 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106b0265 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106b0268 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 106b026c push eax */
  push32((uint32_t)(EAX));
  /* 106b026d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0270 push ecx */
  push32((uint32_t)(ECX));
  /* 106b0271 call 0x106a62b0 */
  push32(0x106b0276u); f_106a62b0();
  /* 106b0276 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0279 push eax */
  push32((uint32_t)(EAX));
  /* 106b027a call 0x106a6130 */
  push32(0x106b027fu); f_106a6130();
  /* 106b027f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0282 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0285 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0287 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106b028a jmp 0x106b020d */
  goto L_106b020d;
L_106b028c:;
  /* 106b028c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b028f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106b0292 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106b0295 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106b0298 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_106b029b:;
  /* 106b029b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106b029e pop esi */
  ESI = (pop32());
  /* 106b029f mov esp, ebp */
  ESP = (EBP);
  /* 106b02a1 pop ebp */
  EBP = (pop32());
  /* 106b02a2 ret  */
  ESPCHK(0x106b0180u, _esp0);
  ESP += 4; return;
}

