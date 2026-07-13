#include "recomp.h"

/* FUN_1000c6a0 @ 0x1249c6a0 (116 bytes, 34 insns) */
void f_1249c6a0(void) {
  FTRACE(0x1249c6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249c6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1249c6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1249c6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1249c6a4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1249c6ab push 9 */
  push32((uint32_t)(0x9u));
  /* 1249c6ad call 0x1249bec0 */
  push32(0x1249c6b2u); f_1249bec0();
  /* 1249c6b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249c6b5 call 0x1249ddb0 */
  push32(0x1249c6bau); f_1249ddb0();
  /* 1249c6ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249c6bc jge 0x1249c6c5 */
  if ((C.sf==C.of)) goto L_1249c6c5;
  /* 1249c6be mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1249c6c5:;
  /* 1249c6c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1249c6c7 call 0x1249bf60 */
  push32(0x1249c6ccu); f_1249bf60();
  /* 1249c6cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249c6cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1249c6d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249c6d3 mov eax, dword ptr [0x124c61ec] */
  EAX = (r32((uint32_t)(0x124c61ec)));
  /* 1249c6d8 push eax */
  push32((uint32_t)(EAX));
  /* 1249c6d9 call dword ptr [0x124c73a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c73a8))), 0x1249c6dfu);
  /* 1249c6df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249c6e1 jne 0x1249c70d */
  if (!C.zf) goto L_1249c70d;
  /* 1249c6e3 call dword ptr [0x124c7388] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7388))), 0x1249c6e9u);
  /* 1249c6e9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249c6ec jne 0x1249c706 */
  if (!C.zf) goto L_1249c706;
  /* 1249c6ee call 0x124a03a0 */
  push32(0x1249c6f3u); f_124a03a0();
  /* 1249c6f3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1249c6f9 call 0x124a0390 */
  push32(0x1249c6feu); f_124a0390();
  /* 1249c6fe mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1249c704 jmp 0x1249c70d */
  goto L_1249c70d;
L_1249c706:;
  /* 1249c706 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1249c70d:;
  /* 1249c70d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249c710 mov esp, ebp */
  ESP = (EBP);
  /* 1249c712 pop ebp */
  EBP = (pop32());
  /* 1249c713 ret  */
  ESPCHK(0x1249c6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c720 @ 0x1249c720 (10 bytes, 5 insns) */
void f_1249c720(void) {
  FTRACE(0x1249c720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249c720 push ebp */
  push32((uint32_t)(EBP));
  /* 1249c721 mov ebp, esp */
  EBP = (ESP);
  /* 1249c723 call 0x1249c6a0 */
  push32(0x1249c728u); f_1249c6a0();
  /* 1249c728 pop ebp */
  EBP = (pop32());
  /* 1249c729 ret  */
  ESPCHK(0x1249c720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c730 @ 0x1249c730 (10 bytes, 5 insns) */
void f_1249c730(void) {
  FTRACE(0x1249c730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249c730 push ebp */
  push32((uint32_t)(EBP));
  /* 1249c731 mov ebp, esp */
  EBP = (ESP);
  /* 1249c733 mov eax, dword ptr [0x124c2c94] */
  EAX = (r32((uint32_t)(0x124c2c94)));
  /* 1249c738 pop ebp */
  EBP = (pop32());
  /* 1249c739 ret  */
  ESPCHK(0x1249c730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c740 @ 0x1249c740 (31 bytes, 11 insns) */
void f_1249c740(void) {
  FTRACE(0x1249c740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249c740 push ebp */
  push32((uint32_t)(EBP));
  /* 1249c741 mov ebp, esp */
  EBP = (ESP);
  /* 1249c743 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249c74a jbe 0x1249c750 */
  if ((C.cf||C.zf)) goto L_1249c750;
  /* 1249c74c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249c74e jmp 0x1249c75d */
  goto L_1249c75d;
L_1249c750:;
  /* 1249c750 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249c753 mov dword ptr [0x124c2c94], eax */
  w32((uint32_t)(0x124c2c94), (EAX));
  /* 1249c758 mov eax, 1 */
  EAX = (0x1u);
L_1249c75d:;
  /* 1249c75d pop ebp */
  EBP = (pop32());
  /* 1249c75e ret  */
  ESPCHK(0x1249c740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c760 @ 0x1249c760 (89 bytes, 20 insns) */
void f_1249c760(void) {
  FTRACE(0x1249c760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249c760 push ebp */
  push32((uint32_t)(EBP));
  /* 1249c761 mov ebp, esp */
  EBP = (ESP);
  /* 1249c763 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1249c768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249c76a mov eax, dword ptr [0x124c61ec] */
  EAX = (r32((uint32_t)(0x124c61ec)));
  /* 1249c76f push eax */
  push32((uint32_t)(EAX));
  /* 1249c770 call dword ptr [0x124c7314] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7314))), 0x1249c776u);
  /* 1249c776 mov dword ptr [0x124c61e8], eax */
  w32((uint32_t)(0x124c61e8), (EAX));
  /* 1249c77b cmp dword ptr [0x124c61e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c61e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249c782 jne 0x1249c788 */
  if (!C.zf) goto L_1249c788;
  /* 1249c784 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249c786 jmp 0x1249c7b7 */
  goto L_1249c7b7;
L_1249c788:;
  /* 1249c788 mov ecx, dword ptr [0x124c61e8] */
  ECX = (r32((uint32_t)(0x124c61e8)));
  /* 1249c78e mov dword ptr [0x124c61dc], ecx */
  w32((uint32_t)(0x124c61dc), (ECX));
  /* 1249c794 mov dword ptr [0x124c61e0], 0 */
  w32((uint32_t)(0x124c61e0), (0x0u));
  /* 1249c79e mov dword ptr [0x124c61e4], 0 */
  w32((uint32_t)(0x124c61e4), (0x0u));
  /* 1249c7a8 mov dword ptr [0x124c61c8], 0x10 */
  w32((uint32_t)(0x124c61c8), (0x10u));
  /* 1249c7b2 mov eax, 1 */
  EAX = (0x1u);
L_1249c7b7:;
  /* 1249c7b7 pop ebp */
  EBP = (pop32());
  /* 1249c7b8 ret  */
  ESPCHK(0x1249c760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7c0 @ 0x1249c7c0 (85 bytes, 29 insns) */
void f_1249c7c0(void) {
  FTRACE(0x1249c7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249c7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1249c7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1249c7c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249c7c6 mov eax, dword ptr [0x124c61e4] */
  EAX = (r32((uint32_t)(0x124c61e4)));
  /* 1249c7cb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249c7ce mov ecx, dword ptr [0x124c61e8] */
  ECX = (r32((uint32_t)(0x124c61e8)));
  /* 1249c7d4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249c7d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1249c7d9 mov edx, dword ptr [0x124c61e8] */
  EDX = (r32((uint32_t)(0x124c61e8)));
  /* 1249c7df mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1249c7e2:;
  /* 1249c7e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249c7e5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249c7e8 jae 0x1249c80f */
  if (!C.cf) goto L_1249c80f;
  /* 1249c7ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249c7ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249c7f0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249c7f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1249c7f6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249c7fd jae 0x1249c804 */
  if (!C.cf) goto L_1249c804;
  /* 1249c7ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249c802 jmp 0x1249c811 */
  goto L_1249c811;
L_1249c804:;
  /* 1249c804 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249c807 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249c80a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1249c80d jmp 0x1249c7e2 */
  goto L_1249c7e2;
L_1249c80f:;
  /* 1249c80f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1249c811:;
  /* 1249c811 mov esp, ebp */
  ESP = (EBP);
  /* 1249c813 pop ebp */
  EBP = (pop32());
  /* 1249c814 ret  */
  ESPCHK(0x1249c7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c820 @ 0x1249c820 (95 bytes, 33 insns) */
void f_1249c820(void) {
  FTRACE(0x1249c820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249c820 push ebp */
  push32((uint32_t)(EBP));
  /* 1249c821 mov ebp, esp */
  EBP = (ESP);
  /* 1249c823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249c826 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249c829 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1249c82c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249c82f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1249c832 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249c835 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1249c838 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1249c83b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249c840 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249c843 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249c845 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249c848 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1249c84b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1249c84d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249c84f jne 0x1249c871 */
  if (!C.zf) goto L_1249c871;
  /* 1249c851 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249c854 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1249c857 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249c859 jne 0x1249c871 */
  if (!C.zf) goto L_1249c871;
  /* 1249c85b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249c85e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1249c864 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249c866 je 0x1249c871 */
  if (C.zf) goto L_1249c871;
  /* 1249c868 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1249c86f jmp 0x1249c878 */
  goto L_1249c878;
L_1249c871:;
  /* 1249c871 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1249c878:;
  /* 1249c878 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249c87b mov esp, ebp */
  ESP = (EBP);
  /* 1249c87d pop ebp */
  EBP = (pop32());
  /* 1249c87e ret  */
  ESPCHK(0x1249c820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c880 @ 0x1249c880 (1485 bytes, 453 insns) */
void f_1249c880(void) {
  FTRACE(0x1249c880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249c880 push ebp */
  push32((uint32_t)(EBP));
  /* 1249c881 mov ebp, esp */
  EBP = (ESP);
  /* 1249c883 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249c886 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249c889 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1249c88c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1249c88f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249c892 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1249c895 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249c898 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1249c89b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249c89e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1249c8a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1249c8a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249c8a7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249c8ad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249c8b0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1249c8b7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1249c8ba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1249c8bd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249c8c0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1249c8c3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249c8c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1249c8c8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249c8cb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1249c8ce mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249c8d1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249c8d4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1249c8d7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249c8da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1249c8dc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1249c8df mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249c8e2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1249c8e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1249c8e8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249c8eb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1249c8ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249c8f0 jne 0x1249ca18 */
  if (!C.zf) goto L_1249ca18;
  /* 1249c8f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249c8f9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1249c8fc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249c8ff mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1249c902 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249c906 jbe 0x1249c90f */
  if ((C.cf||C.zf)) goto L_1249c90f;
  /* 1249c908 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1249c90f:;
  /* 1249c90f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249c912 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249c915 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249c918 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249c91b jne 0x1249c9f1 */
  if (!C.zf) goto L_1249c9f1;
  /* 1249c921 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249c925 jae 0x1249c986 */
  if (!C.cf) goto L_1249c986;
  /* 1249c927 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249c92c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249c92f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249c931 not eax */
  EAX = (~(EAX));
  /* 1249c933 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249c936 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249c939 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1249c93d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1249c93f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249c942 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249c945 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1249c949 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249c94c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249c94f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1249c952 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1249c955 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249c958 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249c95b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1249c95e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249c961 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249c964 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1249c968 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249c96a jne 0x1249c984 */
  if (!C.zf) goto L_1249c984;
  /* 1249c96c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249c971 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249c974 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249c976 not eax */
  EAX = (~(EAX));
  /* 1249c978 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249c97b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1249c97d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1249c97f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249c982 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1249c984:;
  /* 1249c984 jmp 0x1249c9f1 */
  goto L_1249c9f1;
L_1249c986:;
  /* 1249c986 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249c989 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249c98c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249c991 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249c993 not edx */
  EDX = (~(EDX));
  /* 1249c995 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249c998 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249c99b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1249c9a2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1249c9a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249c9a7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249c9aa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1249c9b1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249c9b4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249c9b7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1249c9ba sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1249c9bd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249c9c0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249c9c3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1249c9c6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249c9c9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249c9cc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1249c9d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249c9d2 jne 0x1249c9f1 */
  if (!C.zf) goto L_1249c9f1;
  /* 1249c9d4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249c9d7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249c9da mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249c9df shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249c9e1 not edx */
  EDX = (~(EDX));
  /* 1249c9e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249c9e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249c9e9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1249c9eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249c9ee mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1249c9f1:;
  /* 1249c9f1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249c9f4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1249c9f7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249c9fa mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1249c9fd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1249ca00 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249ca03 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249ca06 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249ca09 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1249ca0c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1249ca0f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249ca12 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ca15 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1249ca18:;
  /* 1249ca18 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249ca1b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1249ca1e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ca21 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1249ca24 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ca28 jbe 0x1249ca31 */
  if ((C.cf||C.zf)) goto L_1249ca31;
  /* 1249ca2a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1249ca31:;
  /* 1249ca31 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249ca34 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1249ca37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249ca39 jne 0x1249cb95 */
  if (!C.zf) goto L_1249cb95;
  /* 1249ca3f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249ca42 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ca45 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1249ca48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249ca4b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1249ca4e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ca51 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1249ca54 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ca58 jbe 0x1249ca61 */
  if ((C.cf||C.zf)) goto L_1249ca61;
  /* 1249ca5a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1249ca61:;
  /* 1249ca61 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249ca64 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ca67 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1249ca6a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249ca6d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1249ca70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ca73 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1249ca76 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ca7a jbe 0x1249ca83 */
  if ((C.cf||C.zf)) goto L_1249ca83;
  /* 1249ca7c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1249ca83:;
  /* 1249ca83 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249ca86 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ca89 je 0x1249cb8f */
  if (C.zf) goto L_1249cb8f;
  /* 1249ca8f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1249ca92 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1249ca95 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249ca98 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ca9b jne 0x1249cb71 */
  if (!C.zf) goto L_1249cb71;
  /* 1249caa1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249caa5 jae 0x1249cb06 */
  if (!C.cf) goto L_1249cb06;
  /* 1249caa7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249caac mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249caaf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249cab1 not edx */
  EDX = (~(EDX));
  /* 1249cab3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249cab6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cab9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1249cabd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1249cabf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249cac2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cac5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1249cac9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cacc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cacf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1249cad2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1249cad5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cad8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cadb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1249cade mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cae1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cae4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1249cae8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249caea jne 0x1249cb04 */
  if (!C.zf) goto L_1249cb04;
  /* 1249caec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249caf1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249caf4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249caf6 not edx */
  EDX = (~(EDX));
  /* 1249caf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249cafb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1249cafd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1249caff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249cb02 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1249cb04:;
  /* 1249cb04 jmp 0x1249cb71 */
  goto L_1249cb71;
L_1249cb06:;
  /* 1249cb06 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249cb09 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249cb0c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249cb11 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249cb13 not eax */
  EAX = (~(EAX));
  /* 1249cb15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249cb18 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cb1b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1249cb22 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1249cb24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249cb27 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cb2a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1249cb31 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cb34 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cb37 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1249cb3a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1249cb3d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cb40 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cb43 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1249cb46 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cb49 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cb4c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1249cb50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249cb52 jne 0x1249cb71 */
  if (!C.zf) goto L_1249cb71;
  /* 1249cb54 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249cb57 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249cb5a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249cb5f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249cb61 not eax */
  EAX = (~(EAX));
  /* 1249cb63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249cb66 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249cb69 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1249cb6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249cb6e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1249cb71:;
  /* 1249cb71 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1249cb74 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1249cb77 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1249cb7a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249cb7d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1249cb80 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1249cb83 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1249cb86 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1249cb89 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1249cb8c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1249cb8f:;
  /* 1249cb8f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1249cb92 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1249cb95:;
  /* 1249cb95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249cb98 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1249cb9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249cb9d jne 0x1249cbab */
  if (!C.zf) goto L_1249cbab;
  /* 1249cb9f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249cba2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cba5 je 0x1249ccbb */
  if (C.zf) goto L_1249ccbb;
L_1249cbab:;
  /* 1249cbab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249cbae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249cbb1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1249cbb4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1249cbb7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249cbba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249cbbd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249cbc0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1249cbc3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249cbc6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249cbc9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1249cbcc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249cbcf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249cbd2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1249cbd5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249cbd8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249cbdb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249cbde mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1249cbe1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249cbe4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249cbe7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249cbea cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cbed jne 0x1249ccbb */
  if (!C.zf) goto L_1249ccbb;
  /* 1249cbf3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cbf7 jae 0x1249cc54 */
  if (!C.cf) goto L_1249cc54;
  /* 1249cbf9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cbfc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cbff movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1249cc03 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cc06 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cc09 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1249cc0c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1249cc0f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cc12 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cc15 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1249cc18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249cc1a jne 0x1249cc32 */
  if (!C.zf) goto L_1249cc32;
  /* 1249cc1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249cc21 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249cc24 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249cc26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249cc29 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1249cc2b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1249cc2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249cc30 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1249cc32:;
  /* 1249cc32 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249cc37 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249cc3a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249cc3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249cc3f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cc42 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1249cc46 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1249cc48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249cc4b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cc4e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1249cc52 jmp 0x1249ccbb */
  goto L_1249ccbb;
L_1249cc54:;
  /* 1249cc54 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cc57 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cc5a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1249cc5e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cc61 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cc64 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1249cc67 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1249cc6a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cc6d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cc70 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1249cc73 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249cc75 jne 0x1249cc92 */
  if (!C.zf) goto L_1249cc92;
  /* 1249cc77 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249cc7a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249cc7d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249cc82 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249cc84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249cc87 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249cc8a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1249cc8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249cc8f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1249cc92:;
  /* 1249cc92 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249cc95 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249cc98 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249cc9d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249cc9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249cca2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249cca5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1249ccac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1249ccae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249ccb1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1249ccb4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1249ccbb:;
  /* 1249ccbb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249ccbe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249ccc1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1249ccc3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249ccc6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ccc9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249cccc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1249cccf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249ccd2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1249ccd4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ccd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249ccda mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1249ccdc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249ccdf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cce2 jne 0x1249ce49 */
  if (!C.zf) goto L_1249ce49;
  /* 1249cce8 cmp dword ptr [0x124c61e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c61e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ccef je 0x1249ce38 */
  if (C.zf) goto L_1249ce38;
  /* 1249ccf5 mov eax, dword ptr [0x124c61d8] */
  EAX = (r32((uint32_t)(0x124c61d8)));
  /* 1249ccfa shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1249ccfd mov ecx, dword ptr [0x124c61e0] */
  ECX = (r32((uint32_t)(0x124c61e0)));
  /* 1249cd03 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1249cd06 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cd08 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1249cd0b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1249cd10 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1249cd15 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cd18 push eax */
  push32((uint32_t)(EAX));
  /* 1249cd19 call dword ptr [0x124c7330] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7330))), 0x1249cd1fu);
  /* 1249cd1f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249cd24 mov ecx, dword ptr [0x124c61d8] */
  ECX = (r32((uint32_t)(0x124c61d8)));
  /* 1249cd2a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249cd2c mov eax, dword ptr [0x124c61e0] */
  EAX = (r32((uint32_t)(0x124c61e0)));
  /* 1249cd31 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1249cd34 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1249cd36 mov edx, dword ptr [0x124c61e0] */
  EDX = (r32((uint32_t)(0x124c61e0)));
  /* 1249cd3c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1249cd3f mov eax, dword ptr [0x124c61e0] */
  EAX = (r32((uint32_t)(0x124c61e0)));
  /* 1249cd44 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1249cd47 mov edx, dword ptr [0x124c61d8] */
  EDX = (r32((uint32_t)(0x124c61d8)));
  /* 1249cd4d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1249cd58 mov eax, dword ptr [0x124c61e0] */
  EAX = (r32((uint32_t)(0x124c61e0)));
  /* 1249cd5d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1249cd60 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1249cd63 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1249cd66 mov eax, dword ptr [0x124c61e0] */
  EAX = (r32((uint32_t)(0x124c61e0)));
  /* 1249cd6b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1249cd6e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1249cd71 mov edx, dword ptr [0x124c61e0] */
  EDX = (r32((uint32_t)(0x124c61e0)));
  /* 1249cd77 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1249cd7a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1249cd7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249cd80 jne 0x1249cd96 */
  if (!C.zf) goto L_1249cd96;
  /* 1249cd82 mov edx, dword ptr [0x124c61e0] */
  EDX = (r32((uint32_t)(0x124c61e0)));
  /* 1249cd88 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1249cd8b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1249cd8d mov ecx, dword ptr [0x124c61e0] */
  ECX = (r32((uint32_t)(0x124c61e0)));
  /* 1249cd93 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1249cd96:;
  /* 1249cd96 mov edx, dword ptr [0x124c61e0] */
  EDX = (r32((uint32_t)(0x124c61e0)));
  /* 1249cd9c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cda0 jne 0x1249ce38 */
  if (!C.zf) goto L_1249ce38;
  /* 1249cda6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1249cdab push 0 */
  push32((uint32_t)(0x0u));
  /* 1249cdad mov eax, dword ptr [0x124c61e0] */
  EAX = (r32((uint32_t)(0x124c61e0)));
  /* 1249cdb2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1249cdb5 push ecx */
  push32((uint32_t)(ECX));
  /* 1249cdb6 call dword ptr [0x124c7330] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7330))), 0x1249cdbcu);
  /* 1249cdbc mov edx, dword ptr [0x124c61e0] */
  EDX = (r32((uint32_t)(0x124c61e0)));
  /* 1249cdc2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1249cdc5 push eax */
  push32((uint32_t)(EAX));
  /* 1249cdc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249cdc8 mov ecx, dword ptr [0x124c61ec] */
  ECX = (r32((uint32_t)(0x124c61ec)));
  /* 1249cdce push ecx */
  push32((uint32_t)(ECX));
  /* 1249cdcf call dword ptr [0x124c7334] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7334))), 0x1249cdd5u);
  /* 1249cdd5 mov edx, dword ptr [0x124c61e4] */
  EDX = (r32((uint32_t)(0x124c61e4)));
  /* 1249cddb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249cdde mov eax, dword ptr [0x124c61e8] */
  EAX = (r32((uint32_t)(0x124c61e8)));
  /* 1249cde3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cde5 mov ecx, dword ptr [0x124c61e0] */
  ECX = (r32((uint32_t)(0x124c61e0)));
  /* 1249cdeb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cdee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249cdf0 push eax */
  push32((uint32_t)(EAX));
  /* 1249cdf1 mov edx, dword ptr [0x124c61e0] */
  EDX = (r32((uint32_t)(0x124c61e0)));
  /* 1249cdf7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cdfa push edx */
  push32((uint32_t)(EDX));
  /* 1249cdfb mov eax, dword ptr [0x124c61e0] */
  EAX = (r32((uint32_t)(0x124c61e0)));
  /* 1249ce00 push eax */
  push32((uint32_t)(EAX));
  /* 1249ce01 call 0x124a03b0 */
  push32(0x1249ce06u); f_124a03b0();
  /* 1249ce06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ce09 mov ecx, dword ptr [0x124c61e4] */
  ECX = (r32((uint32_t)(0x124c61e4)));
  /* 1249ce0f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ce12 mov dword ptr [0x124c61e4], ecx */
  w32((uint32_t)(0x124c61e4), (ECX));
  /* 1249ce18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249ce1b cmp edx, dword ptr [0x124c61e0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x124c61e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ce21 jbe 0x1249ce2c */
  if ((C.cf||C.zf)) goto L_1249ce2c;
  /* 1249ce23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249ce26 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ce29 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1249ce2c:;
  /* 1249ce2c mov ecx, dword ptr [0x124c61e8] */
  ECX = (r32((uint32_t)(0x124c61e8)));
  /* 1249ce32 mov dword ptr [0x124c61dc], ecx */
  w32((uint32_t)(0x124c61dc), (ECX));
L_1249ce38:;
  /* 1249ce38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249ce3b mov dword ptr [0x124c61e0], edx */
  w32((uint32_t)(0x124c61e0), (EDX));
  /* 1249ce41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249ce44 mov dword ptr [0x124c61d8], eax */
  w32((uint32_t)(0x124c61d8), (EAX));
L_1249ce49:;
  /* 1249ce49 mov esp, ebp */
  ESP = (EBP);
  /* 1249ce4b pop ebp */
  EBP = (pop32());
  /* 1249ce4c ret  */
  ESPCHK(0x1249c880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce50 @ 0x1249ce50 (1334 bytes, 427 insns) */
void f_1249ce50(void) {
  FTRACE(0x1249ce50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249ce50 push ebp */
  push32((uint32_t)(EBP));
  /* 1249ce51 mov ebp, esp */
  EBP = (ESP);
  /* 1249ce53 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ce56 push esi */
  push32((uint32_t)(ESI));
  /* 1249ce57 mov eax, dword ptr [0x124c61e4] */
  EAX = (r32((uint32_t)(0x124c61e4)));
  /* 1249ce5c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249ce5f mov ecx, dword ptr [0x124c61e8] */
  ECX = (r32((uint32_t)(0x124c61e8)));
  /* 1249ce65 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ce67 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1249ce6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249ce6d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ce70 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1249ce73 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1249ce76 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249ce79 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1249ce7c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ce7f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1249ce82 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ce86 jge 0x1249ce9c */
  if ((C.sf==C.of)) goto L_1249ce9c;
  /* 1249ce88 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1249ce8b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249ce8e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249ce90 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1249ce93 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1249ce9a jmp 0x1249ceb1 */
  goto L_1249ceb1;
L_1249ce9c:;
  /* 1249ce9c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1249cea3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249cea6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249cea9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1249ceac shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249ceae mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1249ceb1:;
  /* 1249ceb1 mov ecx, dword ptr [0x124c61dc] */
  ECX = (r32((uint32_t)(0x124c61dc)));
  /* 1249ceb7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1249ceba:;
  /* 1249ceba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cebd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cec0 jae 0x1249cee6 */
  if (!C.cf) goto L_1249cee6;
  /* 1249cec2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cec5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249cec8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1249ceca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cecd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1249ced0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1249ced3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1249ced5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249ced7 je 0x1249cedb */
  if (C.zf) goto L_1249cedb;
  /* 1249ced9 jmp 0x1249cee6 */
  goto L_1249cee6;
L_1249cedb:;
  /* 1249cedb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cede add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cee1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1249cee4 jmp 0x1249ceba */
  goto L_1249ceba;
L_1249cee6:;
  /* 1249cee6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cee9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ceec jne 0x1249cfcd */
  if (!C.zf) goto L_1249cfcd;
  /* 1249cef2 mov eax, dword ptr [0x124c61e8] */
  EAX = (r32((uint32_t)(0x124c61e8)));
  /* 1249cef7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1249cefa:;
  /* 1249cefa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cefd cmp ecx, dword ptr [0x124c61dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c61dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cf03 jae 0x1249cf29 */
  if (!C.cf) goto L_1249cf29;
  /* 1249cf05 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cf08 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249cf0b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1249cf0d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cf10 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1249cf13 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1249cf16 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1249cf18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249cf1a je 0x1249cf1e */
  if (C.zf) goto L_1249cf1e;
  /* 1249cf1c jmp 0x1249cf29 */
  goto L_1249cf29;
L_1249cf1e:;
  /* 1249cf1e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cf21 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cf24 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1249cf27 jmp 0x1249cefa */
  goto L_1249cefa;
L_1249cf29:;
  /* 1249cf29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cf2c cmp ecx, dword ptr [0x124c61dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c61dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cf32 jne 0x1249cfcd */
  if (!C.zf) goto L_1249cfcd;
L_1249cf38:;
  /* 1249cf38 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cf3b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cf3e jae 0x1249cf56 */
  if (!C.cf) goto L_1249cf56;
  /* 1249cf40 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cf43 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cf47 je 0x1249cf4b */
  if (C.zf) goto L_1249cf4b;
  /* 1249cf49 jmp 0x1249cf56 */
  goto L_1249cf56;
L_1249cf4b:;
  /* 1249cf4b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cf4e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cf51 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1249cf54 jmp 0x1249cf38 */
  goto L_1249cf38;
L_1249cf56:;
  /* 1249cf56 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cf59 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cf5c jne 0x1249cfa7 */
  if (!C.zf) goto L_1249cfa7;
  /* 1249cf5e mov eax, dword ptr [0x124c61e8] */
  EAX = (r32((uint32_t)(0x124c61e8)));
  /* 1249cf63 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1249cf66:;
  /* 1249cf66 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cf69 cmp ecx, dword ptr [0x124c61dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c61dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cf6f jae 0x1249cf87 */
  if (!C.cf) goto L_1249cf87;
  /* 1249cf71 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cf74 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cf78 je 0x1249cf7c */
  if (C.zf) goto L_1249cf7c;
  /* 1249cf7a jmp 0x1249cf87 */
  goto L_1249cf87;
L_1249cf7c:;
  /* 1249cf7c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cf7f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cf82 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1249cf85 jmp 0x1249cf66 */
  goto L_1249cf66;
L_1249cf87:;
  /* 1249cf87 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cf8a cmp ecx, dword ptr [0x124c61dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c61dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cf90 jne 0x1249cfa7 */
  if (!C.zf) goto L_1249cfa7;
  /* 1249cf92 call 0x1249d390 */
  push32(0x1249cf97u); f_1249d390();
  /* 1249cf97 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1249cf9a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cf9e jne 0x1249cfa7 */
  if (!C.zf) goto L_1249cfa7;
  /* 1249cfa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249cfa2 jmp 0x1249d381 */
  goto L_1249d381;
L_1249cfa7:;
  /* 1249cfa7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cfaa push edx */
  push32((uint32_t)(EDX));
  /* 1249cfab call 0x1249d4a0 */
  push32(0x1249cfb0u); f_1249d4a0();
  /* 1249cfb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249cfb3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cfb6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1249cfb9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1249cfbb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cfbe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1249cfc1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cfc4 jne 0x1249cfcd */
  if (!C.zf) goto L_1249cfcd;
  /* 1249cfc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249cfc8 jmp 0x1249d381 */
  goto L_1249d381;
L_1249cfcd:;
  /* 1249cfcd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cfd0 mov dword ptr [0x124c61dc], edx */
  w32((uint32_t)(0x124c61dc), (EDX));
  /* 1249cfd6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249cfd9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1249cfdc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1249cfdf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249cfe2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1249cfe4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1249cfe7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249cfeb je 0x1249d010 */
  if (C.zf) goto L_1249d010;
  /* 1249cfed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249cff0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249cff3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249cff6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1249cffa mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249cffd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d000 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1249d003 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1249d00a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1249d00c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249d00e jne 0x1249d045 */
  if (!C.zf) goto L_1249d045;
L_1249d010:;
  /* 1249d010 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1249d017:;
  /* 1249d017 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d01a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d01d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249d020 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1249d024 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d027 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d02a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1249d02d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1249d034 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1249d036 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249d038 jne 0x1249d045 */
  if (!C.zf) goto L_1249d045;
  /* 1249d03a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d03d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d040 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1249d043 jmp 0x1249d017 */
  goto L_1249d017;
L_1249d045:;
  /* 1249d045 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d048 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249d04e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d051 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1249d058 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1249d05b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1249d062 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d065 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d068 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249d06b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1249d06f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1249d072 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d076 jne 0x1249d092 */
  if (!C.zf) goto L_1249d092;
  /* 1249d078 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1249d07f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d082 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d085 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1249d088 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1249d08f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1249d092:;
  /* 1249d092 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d096 jl 0x1249d0ab */
  if ((C.sf!=C.of)) goto L_1249d0ab;
  /* 1249d098 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249d09b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1249d09d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1249d0a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d0a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d0a6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1249d0a9 jmp 0x1249d092 */
  goto L_1249d092;
L_1249d0ab:;
  /* 1249d0ab mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d0ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d0b1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1249d0b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1249d0b8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d0bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1249d0bd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d0c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1249d0c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249d0c6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1249d0c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d0cc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1249d0cf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d0d3 jle 0x1249d0dc */
  if ((C.zf||C.sf!=C.of)) goto L_1249d0dc;
  /* 1249d0d5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1249d0dc:;
  /* 1249d0dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d0df cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d0e2 je 0x1249d300 */
  if (C.zf) goto L_1249d300;
  /* 1249d0e8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d0eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d0ee mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249d0f1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d0f4 jne 0x1249d1ca */
  if (!C.zf) goto L_1249d1ca;
  /* 1249d0fa cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d0fe jge 0x1249d15f */
  if ((C.sf==C.of)) goto L_1249d15f;
  /* 1249d100 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249d105 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d108 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249d10a not eax */
  EAX = (~(EAX));
  /* 1249d10c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d10f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d112 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1249d116 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1249d118 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d11b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d11e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1249d122 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d125 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d128 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1249d12b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1249d12e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d131 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d134 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1249d137 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d13a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d13d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1249d141 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249d143 jne 0x1249d15d */
  if (!C.zf) goto L_1249d15d;
  /* 1249d145 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249d14a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d14d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249d14f not eax */
  EAX = (~(EAX));
  /* 1249d151 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d154 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1249d156 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1249d158 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d15b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1249d15d:;
  /* 1249d15d jmp 0x1249d1ca */
  goto L_1249d1ca;
L_1249d15f:;
  /* 1249d15f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d162 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d165 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249d16a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249d16c not edx */
  EDX = (~(EDX));
  /* 1249d16e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d171 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d174 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1249d17b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1249d17d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d180 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d183 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1249d18a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d18d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d190 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1249d193 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1249d196 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d199 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d19c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1249d19f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d1a2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d1a5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1249d1a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249d1ab jne 0x1249d1ca */
  if (!C.zf) goto L_1249d1ca;
  /* 1249d1ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d1b0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d1b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249d1b8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249d1ba not edx */
  EDX = (~(EDX));
  /* 1249d1bc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d1bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249d1c2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1249d1c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d1c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1249d1ca:;
  /* 1249d1ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d1cd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1249d1d0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d1d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1249d1d6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1249d1d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d1dc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249d1df mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d1e2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1249d1e5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1249d1e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d1ec je 0x1249d300 */
  if (C.zf) goto L_1249d300;
  /* 1249d1f2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d1f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d1f8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1249d1fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1249d1fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d201 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249d204 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249d207 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1249d20a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d20d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249d210 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1249d213 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249d216 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d219 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1249d21c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d21f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249d222 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d225 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1249d228 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d22b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d22e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249d231 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d234 jne 0x1249d300 */
  if (!C.zf) goto L_1249d300;
  /* 1249d23a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d23e jge 0x1249d29a */
  if ((C.sf==C.of)) goto L_1249d29a;
  /* 1249d240 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d243 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d246 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1249d24a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d24d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d250 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1249d253 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1249d255 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d258 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d25b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1249d25e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249d260 jne 0x1249d278 */
  if (!C.zf) goto L_1249d278;
  /* 1249d262 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249d267 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d26a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249d26c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d26f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1249d271 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1249d273 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d276 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1249d278:;
  /* 1249d278 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249d27d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d280 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249d282 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d285 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d288 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1249d28c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1249d28e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d291 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d294 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1249d298 jmp 0x1249d300 */
  goto L_1249d300;
L_1249d29a:;
  /* 1249d29a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d29d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d2a0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1249d2a4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d2a7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d2aa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1249d2ad add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1249d2af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d2b2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d2b5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1249d2b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249d2ba jne 0x1249d2d7 */
  if (!C.zf) goto L_1249d2d7;
  /* 1249d2bc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d2bf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d2c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249d2c7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249d2c9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d2cc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249d2cf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1249d2d1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d2d4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1249d2d7:;
  /* 1249d2d7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d2da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d2dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249d2e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249d2e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d2e7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d2ea mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1249d2f1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1249d2f3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d2f6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d2f9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1249d300:;
  /* 1249d300 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d304 je 0x1249d31a */
  if (C.zf) goto L_1249d31a;
  /* 1249d306 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d309 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249d30c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1249d30e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d311 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d314 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249d317 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1249d31a:;
  /* 1249d31a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d31d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d320 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1249d323 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249d326 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d329 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d32c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1249d32e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249d331 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d334 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d337 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d33a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1249d33d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d340 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1249d342 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d345 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1249d347 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d34a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d34d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1249d34f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249d351 jne 0x1249d373 */
  if (!C.zf) goto L_1249d373;
  /* 1249d353 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d356 cmp eax, dword ptr [0x124c61e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c61e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d35c jne 0x1249d373 */
  if (!C.zf) goto L_1249d373;
  /* 1249d35e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d361 cmp ecx, dword ptr [0x124c61d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c61d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d367 jne 0x1249d373 */
  if (!C.zf) goto L_1249d373;
  /* 1249d369 mov dword ptr [0x124c61e0], 0 */
  w32((uint32_t)(0x124c61e0), (0x0u));
L_1249d373:;
  /* 1249d373 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1249d376 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d379 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1249d37b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d37e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1249d381:;
  /* 1249d381 pop esi */
  ESI = (pop32());
  /* 1249d382 mov esp, ebp */
  ESP = (EBP);
  /* 1249d384 pop ebp */
  EBP = (pop32());
  /* 1249d385 ret  */
  ESPCHK(0x1249ce50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d390 @ 0x1249d390 (271 bytes, 78 insns) */
void f_1249d390(void) {
  FTRACE(0x1249d390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249d390 push ebp */
  push32((uint32_t)(EBP));
  /* 1249d391 mov ebp, esp */
  EBP = (ESP);
  /* 1249d393 push ecx */
  push32((uint32_t)(ECX));
  /* 1249d394 mov eax, dword ptr [0x124c61e4] */
  EAX = (r32((uint32_t)(0x124c61e4)));
  /* 1249d399 cmp eax, dword ptr [0x124c61c8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c61c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d39f jne 0x1249d3eb */
  if (!C.zf) goto L_1249d3eb;
  /* 1249d3a1 mov ecx, dword ptr [0x124c61c8] */
  ECX = (r32((uint32_t)(0x124c61c8)));
  /* 1249d3a7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d3aa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249d3ad push ecx */
  push32((uint32_t)(ECX));
  /* 1249d3ae mov edx, dword ptr [0x124c61e8] */
  EDX = (r32((uint32_t)(0x124c61e8)));
  /* 1249d3b4 push edx */
  push32((uint32_t)(EDX));
  /* 1249d3b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249d3b7 mov eax, dword ptr [0x124c61ec] */
  EAX = (r32((uint32_t)(0x124c61ec)));
  /* 1249d3bc push eax */
  push32((uint32_t)(EAX));
  /* 1249d3bd call dword ptr [0x124c7310] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7310))), 0x1249d3c3u);
  /* 1249d3c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1249d3c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d3ca jne 0x1249d3d3 */
  if (!C.zf) goto L_1249d3d3;
  /* 1249d3cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249d3ce jmp 0x1249d49b */
  goto L_1249d49b;
L_1249d3d3:;
  /* 1249d3d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d3d6 mov dword ptr [0x124c61e8], ecx */
  w32((uint32_t)(0x124c61e8), (ECX));
  /* 1249d3dc mov edx, dword ptr [0x124c61c8] */
  EDX = (r32((uint32_t)(0x124c61c8)));
  /* 1249d3e2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d3e5 mov dword ptr [0x124c61c8], edx */
  w32((uint32_t)(0x124c61c8), (EDX));
L_1249d3eb:;
  /* 1249d3eb mov eax, dword ptr [0x124c61e4] */
  EAX = (r32((uint32_t)(0x124c61e4)));
  /* 1249d3f0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249d3f3 mov ecx, dword ptr [0x124c61e8] */
  ECX = (r32((uint32_t)(0x124c61e8)));
  /* 1249d3f9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d3fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1249d3fe push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1249d403 push 8 */
  push32((uint32_t)(0x8u));
  /* 1249d405 mov edx, dword ptr [0x124c61ec] */
  EDX = (r32((uint32_t)(0x124c61ec)));
  /* 1249d40b push edx */
  push32((uint32_t)(EDX));
  /* 1249d40c call dword ptr [0x124c7314] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7314))), 0x1249d412u);
  /* 1249d412 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d415 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1249d418 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d41b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d41f jne 0x1249d425 */
  if (!C.zf) goto L_1249d425;
  /* 1249d421 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249d423 jmp 0x1249d49b */
  goto L_1249d49b;
L_1249d425:;
  /* 1249d425 push 4 */
  push32((uint32_t)(0x4u));
  /* 1249d427 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1249d42c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1249d431 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249d433 call dword ptr [0x124c730c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c730c))), 0x1249d439u);
  /* 1249d439 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d43c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1249d43f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d442 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d446 jne 0x1249d462 */
  if (!C.zf) goto L_1249d462;
  /* 1249d448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d44b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1249d44e push ecx */
  push32((uint32_t)(ECX));
  /* 1249d44f push 0 */
  push32((uint32_t)(0x0u));
  /* 1249d451 mov edx, dword ptr [0x124c61ec] */
  EDX = (r32((uint32_t)(0x124c61ec)));
  /* 1249d457 push edx */
  push32((uint32_t)(EDX));
  /* 1249d458 call dword ptr [0x124c7334] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7334))), 0x1249d45eu);
  /* 1249d45e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249d460 jmp 0x1249d49b */
  goto L_1249d49b;
L_1249d462:;
  /* 1249d462 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d465 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1249d46b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d46e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1249d475 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d478 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1249d47f mov eax, dword ptr [0x124c61e4] */
  EAX = (r32((uint32_t)(0x124c61e4)));
  /* 1249d484 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d487 mov dword ptr [0x124c61e4], eax */
  w32((uint32_t)(0x124c61e4), (EAX));
  /* 1249d48c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d48f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1249d492 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1249d498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1249d49b:;
  /* 1249d49b mov esp, ebp */
  ESP = (EBP);
  /* 1249d49d pop ebp */
  EBP = (pop32());
  /* 1249d49e ret  */
  ESPCHK(0x1249d390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4a0 @ 0x1249d4a0 (494 bytes, 149 insns) */
void f_1249d4a0(void) {
  FTRACE(0x1249d4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249d4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1249d4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1249d4a3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d4a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d4a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1249d4ac mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1249d4af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d4b2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1249d4b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1249d4b8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1249d4bf:;
  /* 1249d4bf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d4c3 jl 0x1249d4d8 */
  if ((C.sf!=C.of)) goto L_1249d4d8;
  /* 1249d4c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249d4c8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1249d4ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1249d4cd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249d4d0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d4d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1249d4d6 jmp 0x1249d4bf */
  goto L_1249d4bf;
L_1249d4d8:;
  /* 1249d4d8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249d4db imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249d4e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d4e4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1249d4eb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1249d4ee mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1249d4f5 jmp 0x1249d500 */
  goto L_1249d500;
L_1249d4f7:;
  /* 1249d4f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d4fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d4fd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1249d500:;
  /* 1249d500 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d504 jge 0x1249d526 */
  if ((C.sf==C.of)) goto L_1249d526;
  /* 1249d506 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d509 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249d50c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1249d50f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1249d512 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d515 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d518 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1249d51b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d51e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d521 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1249d524 jmp 0x1249d4f7 */
  goto L_1249d4f7;
L_1249d526:;
  /* 1249d526 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249d529 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1249d52c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d52f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1249d532 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d534 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1249d537 push 4 */
  push32((uint32_t)(0x4u));
  /* 1249d539 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1249d53e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1249d543 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d546 push edx */
  push32((uint32_t)(EDX));
  /* 1249d547 call dword ptr [0x124c730c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c730c))), 0x1249d54du);
  /* 1249d54d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249d54f jne 0x1249d559 */
  if (!C.zf) goto L_1249d559;
  /* 1249d551 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1249d554 jmp 0x1249d68a */
  goto L_1249d68a;
L_1249d559:;
  /* 1249d559 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d55c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d561 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1249d564 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d567 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1249d56a jmp 0x1249d578 */
  goto L_1249d578;
L_1249d56c:;
  /* 1249d56c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d56f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d575 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1249d578:;
  /* 1249d578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d57b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d57e ja 0x1249d5dd */
  if ((!C.cf&&!C.zf)) goto L_1249d5dd;
  /* 1249d580 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d583 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1249d58a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d58d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1249d597 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d59a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d59d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1249d5a0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d5a3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1249d5a9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d5ac add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d5b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d5b5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1249d5b8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d5bb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d5c1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d5c4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1249d5c7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d5ca add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d5cf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1249d5d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249d5d5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1249d5db jmp 0x1249d56c */
  goto L_1249d56c;
L_1249d5dd:;
  /* 1249d5dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249d5e0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d5e6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1249d5e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d5ec add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d5ef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d5f2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1249d5f5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d5f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1249d5fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1249d5fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d601 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d604 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1249d607 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249d60a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d60d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d610 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1249d613 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d616 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1249d619 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1249d61c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d61f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d622 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1249d625 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249d628 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d62b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1249d633 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249d636 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d639 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1249d644 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d647 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1249d64b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d64e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1249d651 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1249d654 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d657 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1249d65a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249d65c jne 0x1249d66d */
  if (!C.zf) goto L_1249d66d;
  /* 1249d65e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d661 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249d664 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1249d667 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d66a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1249d66d:;
  /* 1249d66d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249d672 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249d675 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249d677 not edx */
  EDX = (~(EDX));
  /* 1249d679 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d67c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1249d67f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1249d681 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d684 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1249d687 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1249d68a:;
  /* 1249d68a mov esp, ebp */
  ESP = (EBP);
  /* 1249d68c pop ebp */
  EBP = (pop32());
  /* 1249d68d ret  */
  ESPCHK(0x1249d4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d690 @ 0x1249d690 (1515 bytes, 489 insns) */
void f_1249d690(void) {
  FTRACE(0x1249d690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249d690 push ebp */
  push32((uint32_t)(EBP));
  /* 1249d691 mov ebp, esp */
  EBP = (ESP);
  /* 1249d693 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d696 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1249d699 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d69c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1249d69e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1249d6a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d6a4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1249d6a7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1249d6aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d6ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1249d6b0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d6b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1249d6b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249d6b9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1249d6bc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1249d6bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d6c2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249d6c8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d6cb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1249d6d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1249d6d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1249d6d8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d6db mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1249d6de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d6e1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1249d6e3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d6e6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1249d6e9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d6ec add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d6ef mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1249d6f2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d6f5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1249d6f7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1249d6fa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249d6fd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d700 jle 0x1249d9b6 */
  if ((C.zf||C.sf!=C.of)) goto L_1249d9b6;
  /* 1249d706 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d709 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1249d70c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249d70e jne 0x1249d71b */
  if (!C.zf) goto L_1249d71b;
  /* 1249d710 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249d713 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d716 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d719 jle 0x1249d722 */
  if ((C.zf||C.sf!=C.of)) goto L_1249d722;
L_1249d71b:;
  /* 1249d71b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249d71d jmp 0x1249dc77 */
  goto L_1249dc77;
L_1249d722:;
  /* 1249d722 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d725 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1249d728 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d72b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1249d72e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d732 jbe 0x1249d73b */
  if ((C.cf||C.zf)) goto L_1249d73b;
  /* 1249d734 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1249d73b:;
  /* 1249d73b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d73e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d741 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249d744 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d747 jne 0x1249d81d */
  if (!C.zf) goto L_1249d81d;
  /* 1249d74d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d751 jae 0x1249d7b2 */
  if (!C.cf) goto L_1249d7b2;
  /* 1249d753 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249d758 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d75b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249d75d not edx */
  EDX = (~(EDX));
  /* 1249d75f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d762 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d765 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1249d769 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1249d76b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d76e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d771 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1249d775 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d778 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d77b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1249d77e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1249d781 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d784 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d787 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1249d78a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d78d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d790 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1249d794 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249d796 jne 0x1249d7b0 */
  if (!C.zf) goto L_1249d7b0;
  /* 1249d798 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249d79d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d7a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249d7a2 not edx */
  EDX = (~(EDX));
  /* 1249d7a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d7a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1249d7a9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1249d7ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d7ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1249d7b0:;
  /* 1249d7b0 jmp 0x1249d81d */
  goto L_1249d81d;
L_1249d7b2:;
  /* 1249d7b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d7b5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d7b8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249d7bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249d7bf not eax */
  EAX = (~(EAX));
  /* 1249d7c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d7c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d7c7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1249d7ce and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1249d7d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d7d3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d7d6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1249d7dd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d7e0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d7e3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1249d7e6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1249d7e9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d7ec add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d7ef mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1249d7f2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d7f5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d7f8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1249d7fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249d7fe jne 0x1249d81d */
  if (!C.zf) goto L_1249d81d;
  /* 1249d800 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d803 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d806 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249d80b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249d80d not eax */
  EAX = (~(EAX));
  /* 1249d80f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d812 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249d815 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1249d817 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d81a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1249d81d:;
  /* 1249d81d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d820 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1249d823 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d826 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249d829 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1249d82c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d82f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1249d832 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d835 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1249d838 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1249d83b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249d83e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d841 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d844 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1249d847 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d84b jle 0x1249d997 */
  if ((C.zf||C.sf!=C.of)) goto L_1249d997;
  /* 1249d851 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d854 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d857 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1249d85a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d85d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1249d860 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d863 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1249d866 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d86a jbe 0x1249d873 */
  if ((C.cf||C.zf)) goto L_1249d873;
  /* 1249d86c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1249d873:;
  /* 1249d873 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d876 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249d879 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1249d87c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1249d87f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d882 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d885 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249d888 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1249d88b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d88e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d891 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1249d894 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249d897 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d89a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1249d89d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d8a0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249d8a3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d8a6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1249d8a9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d8ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d8af mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249d8b2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d8b5 jne 0x1249d983 */
  if (!C.zf) goto L_1249d983;
  /* 1249d8bb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d8bf jae 0x1249d91c */
  if (!C.cf) goto L_1249d91c;
  /* 1249d8c1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d8c4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d8c7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1249d8cb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d8ce add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d8d1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1249d8d4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1249d8d7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d8da add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d8dd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1249d8e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249d8e2 jne 0x1249d8fa */
  if (!C.zf) goto L_1249d8fa;
  /* 1249d8e4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249d8e9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d8ec shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249d8ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d8f1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1249d8f3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1249d8f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d8f8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1249d8fa:;
  /* 1249d8fa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249d8ff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d902 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249d904 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d907 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d90a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1249d90e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1249d910 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d913 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d916 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1249d91a jmp 0x1249d983 */
  goto L_1249d983;
L_1249d91c:;
  /* 1249d91c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d91f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d922 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1249d926 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d929 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d92c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1249d92f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1249d932 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d935 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d938 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1249d93b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249d93d jne 0x1249d95a */
  if (!C.zf) goto L_1249d95a;
  /* 1249d93f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d942 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d945 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249d94a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249d94c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d94f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249d952 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1249d954 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249d957 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1249d95a:;
  /* 1249d95a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249d95d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d960 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249d965 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249d967 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d96a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d96d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1249d974 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1249d976 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249d979 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249d97c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1249d983:;
  /* 1249d983 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d986 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d989 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1249d98b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249d98e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d991 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249d994 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1249d997:;
  /* 1249d997 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249d99a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d99d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d9a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1249d9a2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249d9a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d9a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d9ab add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d9ae mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1249d9b1 jmp 0x1249dc72 */
  goto L_1249dc72;
L_1249d9b6:;
  /* 1249d9b6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249d9b9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d9bc jge 0x1249dc72 */
  if ((C.sf==C.of)) goto L_1249dc72;
  /* 1249d9c2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249d9c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d9c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d9cb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1249d9cd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1249d9d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d9d3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d9d6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d9d9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1249d9dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249d9df add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249d9e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1249d9e5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249d9e8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d9eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1249d9ee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249d9f1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1249d9f4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249d9f7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1249d9fa cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249d9fe jbe 0x1249da07 */
  if ((C.cf||C.zf)) goto L_1249da07;
  /* 1249da00 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1249da07:;
  /* 1249da07 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249da0a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1249da0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249da0f jne 0x1249db50 */
  if (!C.zf) goto L_1249db50;
  /* 1249da15 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249da18 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1249da1b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249da1e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1249da21 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249da25 jbe 0x1249da2e */
  if ((C.cf||C.zf)) goto L_1249da2e;
  /* 1249da27 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1249da2e:;
  /* 1249da2e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249da31 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249da34 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249da37 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249da3a jne 0x1249db10 */
  if (!C.zf) goto L_1249db10;
  /* 1249da40 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249da44 jae 0x1249daa5 */
  if (!C.cf) goto L_1249daa5;
  /* 1249da46 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249da4b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249da4e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249da50 not edx */
  EDX = (~(EDX));
  /* 1249da52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249da55 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249da58 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1249da5c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1249da5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249da61 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249da64 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1249da68 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249da6b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249da6e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1249da71 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1249da74 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249da77 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249da7a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1249da7d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249da80 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249da83 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1249da87 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249da89 jne 0x1249daa3 */
  if (!C.zf) goto L_1249daa3;
  /* 1249da8b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249da90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249da93 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249da95 not edx */
  EDX = (~(EDX));
  /* 1249da97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249da9a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1249da9c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1249da9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249daa1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1249daa3:;
  /* 1249daa3 jmp 0x1249db10 */
  goto L_1249db10;
L_1249daa5:;
  /* 1249daa5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249daa8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249daab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249dab0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249dab2 not eax */
  EAX = (~(EAX));
  /* 1249dab4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249dab7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249daba mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1249dac1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1249dac3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249dac6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249dac9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1249dad0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249dad3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dad6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1249dad9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1249dadc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249dadf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dae2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1249dae5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249dae8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249daeb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1249daef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249daf1 jne 0x1249db10 */
  if (!C.zf) goto L_1249db10;
  /* 1249daf3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249daf6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249daf9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249dafe shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249db00 not eax */
  EAX = (~(EAX));
  /* 1249db02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249db05 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249db08 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1249db0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249db0d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1249db10:;
  /* 1249db10 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249db13 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1249db16 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249db19 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249db1c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1249db1f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249db22 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1249db25 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249db28 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1249db2b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1249db2e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249db31 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249db34 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1249db37 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249db3a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1249db3d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249db40 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1249db43 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249db47 jbe 0x1249db50 */
  if ((C.cf||C.zf)) goto L_1249db50;
  /* 1249db49 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1249db50:;
  /* 1249db50 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249db53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249db56 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1249db59 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1249db5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249db5f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249db62 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249db65 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1249db68 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249db6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249db6e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1249db71 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249db74 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249db77 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1249db7a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249db7d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249db80 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249db83 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1249db86 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249db89 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249db8c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249db8f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249db92 jne 0x1249dc5e */
  if (!C.zf) goto L_1249dc5e;
  /* 1249db98 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249db9c jae 0x1249dbf8 */
  if (!C.cf) goto L_1249dbf8;
  /* 1249db9e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249dba1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dba4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1249dba8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249dbab add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dbae mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1249dbb1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1249dbb3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249dbb6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dbb9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1249dbbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249dbbe jne 0x1249dbd6 */
  if (!C.zf) goto L_1249dbd6;
  /* 1249dbc0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249dbc5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249dbc8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249dbca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249dbcd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1249dbcf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1249dbd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249dbd4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1249dbd6:;
  /* 1249dbd6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249dbdb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249dbde shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249dbe0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249dbe3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249dbe6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1249dbea or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1249dbec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249dbef mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249dbf2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1249dbf6 jmp 0x1249dc5e */
  goto L_1249dc5e;
L_1249dbf8:;
  /* 1249dbf8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249dbfb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dbfe movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1249dc02 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249dc05 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dc08 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1249dc0b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1249dc0d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249dc10 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dc13 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1249dc16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249dc18 jne 0x1249dc35 */
  if (!C.zf) goto L_1249dc35;
  /* 1249dc1a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249dc1d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249dc20 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1249dc25 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1249dc27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249dc2a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249dc2d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1249dc2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249dc32 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1249dc35:;
  /* 1249dc35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249dc38 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249dc3b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249dc40 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249dc42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249dc45 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249dc48 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1249dc4f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1249dc51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249dc54 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1249dc57 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1249dc5e:;
  /* 1249dc5e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249dc61 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249dc64 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1249dc66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249dc69 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dc6c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249dc6f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1249dc72:;
  /* 1249dc72 mov eax, 1 */
  EAX = (0x1u);
L_1249dc77:;
  /* 1249dc77 mov esp, ebp */
  ESP = (EBP);
  /* 1249dc79 pop ebp */
  EBP = (pop32());
  /* 1249dc7a ret  */
  ESPCHK(0x1249d690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc80 @ 0x1249dc80 (304 bytes, 79 insns) */
void f_1249dc80(void) {
  FTRACE(0x1249dc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249dc80 push ebp */
  push32((uint32_t)(EBP));
  /* 1249dc81 mov ebp, esp */
  EBP = (ESP);
  /* 1249dc83 push ecx */
  push32((uint32_t)(ECX));
  /* 1249dc84 cmp dword ptr [0x124c61e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c61e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249dc8b je 0x1249ddac */
  if (C.zf) goto L_1249ddac;
  /* 1249dc91 mov eax, dword ptr [0x124c61d8] */
  EAX = (r32((uint32_t)(0x124c61d8)));
  /* 1249dc96 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1249dc99 mov ecx, dword ptr [0x124c61e0] */
  ECX = (r32((uint32_t)(0x124c61e0)));
  /* 1249dc9f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1249dca2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dca4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1249dca7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1249dcac push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1249dcb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249dcb4 push eax */
  push32((uint32_t)(EAX));
  /* 1249dcb5 call dword ptr [0x124c7330] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7330))), 0x1249dcbbu);
  /* 1249dcbb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249dcc0 mov ecx, dword ptr [0x124c61d8] */
  ECX = (r32((uint32_t)(0x124c61d8)));
  /* 1249dcc6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249dcc8 mov eax, dword ptr [0x124c61e0] */
  EAX = (r32((uint32_t)(0x124c61e0)));
  /* 1249dccd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1249dcd0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1249dcd2 mov edx, dword ptr [0x124c61e0] */
  EDX = (r32((uint32_t)(0x124c61e0)));
  /* 1249dcd8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1249dcdb mov eax, dword ptr [0x124c61e0] */
  EAX = (r32((uint32_t)(0x124c61e0)));
  /* 1249dce0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1249dce3 mov edx, dword ptr [0x124c61d8] */
  EDX = (r32((uint32_t)(0x124c61d8)));
  /* 1249dce9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1249dcf4 mov eax, dword ptr [0x124c61e0] */
  EAX = (r32((uint32_t)(0x124c61e0)));
  /* 1249dcf9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1249dcfc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1249dcff sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1249dd02 mov eax, dword ptr [0x124c61e0] */
  EAX = (r32((uint32_t)(0x124c61e0)));
  /* 1249dd07 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1249dd0a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1249dd0d mov edx, dword ptr [0x124c61e0] */
  EDX = (r32((uint32_t)(0x124c61e0)));
  /* 1249dd13 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1249dd16 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1249dd1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249dd1c jne 0x1249dd32 */
  if (!C.zf) goto L_1249dd32;
  /* 1249dd1e mov edx, dword ptr [0x124c61e0] */
  EDX = (r32((uint32_t)(0x124c61e0)));
  /* 1249dd24 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1249dd27 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1249dd29 mov ecx, dword ptr [0x124c61e0] */
  ECX = (r32((uint32_t)(0x124c61e0)));
  /* 1249dd2f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1249dd32:;
  /* 1249dd32 mov edx, dword ptr [0x124c61e0] */
  EDX = (r32((uint32_t)(0x124c61e0)));
  /* 1249dd38 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249dd3c jne 0x1249dda2 */
  if (!C.zf) goto L_1249dda2;
  /* 1249dd3e cmp dword ptr [0x124c61e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c61e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249dd45 jle 0x1249dda2 */
  if ((C.zf||C.sf!=C.of)) goto L_1249dda2;
  /* 1249dd47 mov eax, dword ptr [0x124c61e0] */
  EAX = (r32((uint32_t)(0x124c61e0)));
  /* 1249dd4c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1249dd4f push ecx */
  push32((uint32_t)(ECX));
  /* 1249dd50 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249dd52 mov edx, dword ptr [0x124c61ec] */
  EDX = (r32((uint32_t)(0x124c61ec)));
  /* 1249dd58 push edx */
  push32((uint32_t)(EDX));
  /* 1249dd59 call dword ptr [0x124c7334] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7334))), 0x1249dd5fu);
  /* 1249dd5f mov eax, dword ptr [0x124c61e4] */
  EAX = (r32((uint32_t)(0x124c61e4)));
  /* 1249dd64 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249dd67 mov ecx, dword ptr [0x124c61e8] */
  ECX = (r32((uint32_t)(0x124c61e8)));
  /* 1249dd6d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dd6f mov edx, dword ptr [0x124c61e0] */
  EDX = (r32((uint32_t)(0x124c61e0)));
  /* 1249dd75 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dd78 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249dd7a push ecx */
  push32((uint32_t)(ECX));
  /* 1249dd7b mov eax, dword ptr [0x124c61e0] */
  EAX = (r32((uint32_t)(0x124c61e0)));
  /* 1249dd80 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dd83 push eax */
  push32((uint32_t)(EAX));
  /* 1249dd84 mov ecx, dword ptr [0x124c61e0] */
  ECX = (r32((uint32_t)(0x124c61e0)));
  /* 1249dd8a push ecx */
  push32((uint32_t)(ECX));
  /* 1249dd8b call 0x124a03b0 */
  push32(0x1249dd90u); f_124a03b0();
  /* 1249dd90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dd93 mov edx, dword ptr [0x124c61e4] */
  EDX = (r32((uint32_t)(0x124c61e4)));
  /* 1249dd99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249dd9c mov dword ptr [0x124c61e4], edx */
  w32((uint32_t)(0x124c61e4), (EDX));
L_1249dda2:;
  /* 1249dda2 mov dword ptr [0x124c61e0], 0 */
  w32((uint32_t)(0x124c61e0), (0x0u));
L_1249ddac:;
  /* 1249ddac mov esp, ebp */
  ESP = (EBP);
  /* 1249ddae pop ebp */
  EBP = (pop32());
  /* 1249ddaf ret  */
  ESPCHK(0x1249dc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddb0 @ 0x1249ddb0 (1565 bytes, 343 insns) */
void f_1249ddb0(void) {
  FTRACE(0x1249ddb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249ddb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1249ddb1 mov ebp, esp */
  EBP = (ESP);
  /* 1249ddb3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ddb9 mov eax, dword ptr [0x124c61e4] */
  EAX = (r32((uint32_t)(0x124c61e4)));
  /* 1249ddbe imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249ddc1 push eax */
  push32((uint32_t)(EAX));
  /* 1249ddc2 mov ecx, dword ptr [0x124c61e8] */
  ECX = (r32((uint32_t)(0x124c61e8)));
  /* 1249ddc8 push ecx */
  push32((uint32_t)(ECX));
  /* 1249ddc9 call dword ptr [0x124c737c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c737c))), 0x1249ddcfu);
  /* 1249ddcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249ddd1 je 0x1249dddb */
  if (C.zf) goto L_1249dddb;
  /* 1249ddd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1249ddd6 jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249dddb:;
  /* 1249dddb mov edx, dword ptr [0x124c61e8] */
  EDX = (r32((uint32_t)(0x124c61e8)));
  /* 1249dde1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1249dde7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1249ddf1 jmp 0x1249de02 */
  goto L_1249de02;
L_1249ddf3:;
  /* 1249ddf3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1249ddf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ddfc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1249de02:;
  /* 1249de02 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1249de08 cmp ecx, dword ptr [0x124c61e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c61e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249de0e jge 0x1249e3c7 */
  if ((C.sf==C.of)) goto L_1249e3c7;
  /* 1249de14 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1249de1a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1249de1d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1249de23 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1249de28 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1249de2e push ecx */
  push32((uint32_t)(ECX));
  /* 1249de2f call dword ptr [0x124c737c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c737c))), 0x1249de35u);
  /* 1249de35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249de37 je 0x1249de43 */
  if (C.zf) goto L_1249de43;
  /* 1249de39 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1249de3e jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249de43:;
  /* 1249de43 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1249de49 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1249de4c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1249de52 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1249de58 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249de5e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1249de61 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1249de67 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1249de6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1249de6d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1249de77 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1249de81 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1249de88 jmp 0x1249de93 */
  goto L_1249de93;
L_1249de8a:;
  /* 1249de8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249de8d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249de90 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1249de93:;
  /* 1249de93 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249de97 jge 0x1249e38b */
  if ((C.sf==C.of)) goto L_1249e38b;
  /* 1249de9d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1249dea7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1249deb1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1249debb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1249dec5 jmp 0x1249ded6 */
  goto L_1249ded6;
L_1249dec7:;
  /* 1249dec7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1249decd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ded0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1249ded6:;
  /* 1249ded6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249dedd jge 0x1249def2 */
  if ((C.sf==C.of)) goto L_1249def2;
  /* 1249dedf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1249dee5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1249def0 jmp 0x1249dec7 */
  goto L_1249dec7;
L_1249def2:;
  /* 1249def2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249def6 jl 0x1249e32d */
  if ((C.sf!=C.of)) goto L_1249e32d;
  /* 1249defc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1249df01 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1249df07 push ecx */
  push32((uint32_t)(ECX));
  /* 1249df08 call dword ptr [0x124c737c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c737c))), 0x1249df0eu);
  /* 1249df0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249df10 je 0x1249df1c */
  if (C.zf) goto L_1249df1c;
  /* 1249df12 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1249df17 jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249df1c:;
  /* 1249df1c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1249df22 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1249df25 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1249df2f jmp 0x1249df40 */
  goto L_1249df40;
L_1249df31:;
  /* 1249df31 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1249df37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249df3a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1249df40:;
  /* 1249df40 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249df47 jge 0x1249e0c4 */
  if ((C.sf==C.of)) goto L_1249e0c4;
  /* 1249df4d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249df50 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249df53 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1249df59 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1249df5f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249df65 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1249df6b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1249df71 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249df75 jne 0x1249df82 */
  if (!C.zf) goto L_1249df82;
  /* 1249df77 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1249df7d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249df80 je 0x1249df8c */
  if (C.zf) goto L_1249df8c;
L_1249df82:;
  /* 1249df82 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1249df87 jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249df8c:;
  /* 1249df8c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1249df92 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1249df94 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1249df9a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1249dfa0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1249dfa6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1249dfac and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1249dfaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249dfb1 je 0x1249dfe9 */
  if (C.zf) goto L_1249dfe9;
  /* 1249dfb3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1249dfb9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249dfbc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1249dfc2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249dfcc jle 0x1249dfd8 */
  if ((C.zf||C.sf!=C.of)) goto L_1249dfd8;
  /* 1249dfce mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1249dfd3 jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249dfd8:;
  /* 1249dfd8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1249dfde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249dfe1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1249dfe7 jmp 0x1249e02b */
  goto L_1249e02b;
L_1249dfe9:;
  /* 1249dfe9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1249dfef sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1249dff2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249dff5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1249dffb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e002 jle 0x1249e00e */
  if ((C.zf||C.sf!=C.of)) goto L_1249e00e;
  /* 1249e004 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1249e00e:;
  /* 1249e00e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1249e014 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1249e01b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e01e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1249e024 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1249e02b:;
  /* 1249e02b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e032 jl 0x1249e04d */
  if ((C.sf!=C.of)) goto L_1249e04d;
  /* 1249e034 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1249e03a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1249e03d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249e03f jne 0x1249e04d */
  if (!C.zf) goto L_1249e04d;
  /* 1249e041 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e04b jle 0x1249e057 */
  if ((C.zf||C.sf!=C.of)) goto L_1249e057;
L_1249e04d:;
  /* 1249e04d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1249e052 jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249e057:;
  /* 1249e057 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1249e05d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e063 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1249e066 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e06c je 0x1249e078 */
  if (C.zf) goto L_1249e078;
  /* 1249e06e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1249e073 jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249e078:;
  /* 1249e078 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1249e07e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e084 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1249e08a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1249e090 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e096 jb 0x1249df8c */
  if (C.cf) goto L_1249df8c;
  /* 1249e09c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1249e0a2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e0a8 je 0x1249e0b4 */
  if (C.zf) goto L_1249e0b4;
  /* 1249e0aa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1249e0af jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249e0b4:;
  /* 1249e0b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249e0b7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e0bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1249e0bf jmp 0x1249df31 */
  goto L_1249df31;
L_1249e0c4:;
  /* 1249e0c4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249e0c7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1249e0c9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e0cf je 0x1249e0db */
  if (C.zf) goto L_1249e0db;
  /* 1249e0d1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1249e0d6 jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249e0db:;
  /* 1249e0db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249e0de mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1249e0e4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1249e0eb jmp 0x1249e0f6 */
  goto L_1249e0f6;
L_1249e0ed:;
  /* 1249e0ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249e0f0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e0f3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1249e0f6:;
  /* 1249e0f6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e0fa jge 0x1249e32d */
  if ((C.sf==C.of)) goto L_1249e32d;
  /* 1249e100 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1249e10a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1249e110 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1249e116:;
  /* 1249e116 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1249e11c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249e11f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1249e125 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1249e12b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e131 je 0x1249e25a */
  if (C.zf) goto L_1249e25a;
  /* 1249e137 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249e13a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1249e140 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e147 je 0x1249e25a */
  if (C.zf) goto L_1249e25a;
  /* 1249e14d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1249e153 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e159 jb 0x1249e16e */
  if (C.cf) goto L_1249e16e;
  /* 1249e15b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1249e161 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e166 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e16c jb 0x1249e178 */
  if (C.cf) goto L_1249e178;
L_1249e16e:;
  /* 1249e16e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1249e173 jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249e178:;
  /* 1249e178 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1249e17e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1249e184 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1249e18a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1249e190 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e193 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1249e196 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249e199 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e19e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1249e1a4:;
  /* 1249e1a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249e1a7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e1ad je 0x1249e1ce */
  if (C.zf) goto L_1249e1ce;
  /* 1249e1af mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249e1b2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e1b8 jne 0x1249e1bc */
  if (!C.zf) goto L_1249e1bc;
  /* 1249e1ba jmp 0x1249e1ce */
  goto L_1249e1ce;
L_1249e1bc:;
  /* 1249e1bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249e1bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1249e1c1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1249e1c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249e1c7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e1c9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1249e1cc jmp 0x1249e1a4 */
  goto L_1249e1a4;
L_1249e1ce:;
  /* 1249e1ce mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249e1d1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e1d7 jne 0x1249e1e3 */
  if (!C.zf) goto L_1249e1e3;
  /* 1249e1d9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1249e1de jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249e1e3:;
  /* 1249e1e3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1249e1e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1249e1eb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1249e1ee sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249e1f1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1249e1f7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e1fe jle 0x1249e20a */
  if ((C.zf||C.sf!=C.of)) goto L_1249e20a;
  /* 1249e200 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1249e20a:;
  /* 1249e20a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1249e210 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e213 je 0x1249e21f */
  if (C.zf) goto L_1249e21f;
  /* 1249e215 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1249e21a jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249e21f:;
  /* 1249e21f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1249e225 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1249e228 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e22e je 0x1249e23a */
  if (C.zf) goto L_1249e23a;
  /* 1249e230 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1249e235 jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249e23a:;
  /* 1249e23a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1249e240 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1249e246 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1249e24c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e24f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1249e255 jmp 0x1249e116 */
  goto L_1249e116;
L_1249e25a:;
  /* 1249e25a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e261 je 0x1249e2d1 */
  if (C.zf) goto L_1249e2d1;
  /* 1249e263 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e267 jge 0x1249e29b */
  if ((C.sf==C.of)) goto L_1249e29b;
  /* 1249e269 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249e26e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249e271 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249e273 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1249e279 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e27b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1249e281 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249e286 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249e289 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249e28b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1249e291 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e293 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1249e299 jmp 0x1249e2d1 */
  goto L_1249e2d1;
L_1249e29b:;
  /* 1249e29b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249e29e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249e2a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249e2a6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249e2a8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1249e2ae or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e2b0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1249e2b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249e2b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249e2bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1249e2c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1249e2c3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1249e2c9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e2cb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1249e2d1:;
  /* 1249e2d1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1249e2d7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249e2da cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e2e0 jne 0x1249e2f4 */
  if (!C.zf) goto L_1249e2f4;
  /* 1249e2e2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249e2e5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1249e2eb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e2f2 je 0x1249e2fe */
  if (C.zf) goto L_1249e2fe;
L_1249e2f4:;
  /* 1249e2f4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1249e2f9 jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249e2fe:;
  /* 1249e2fe mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1249e304 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1249e307 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e30d je 0x1249e319 */
  if (C.zf) goto L_1249e319;
  /* 1249e30f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1249e314 jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249e319:;
  /* 1249e319 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1249e31f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e322 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1249e328 jmp 0x1249e0ed */
  goto L_1249e0ed;
L_1249e32d:;
  /* 1249e32d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249e330 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1249e336 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1249e33c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e340 jne 0x1249e35a */
  if (!C.zf) goto L_1249e35a;
  /* 1249e342 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249e345 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1249e34b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1249e351 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e358 je 0x1249e361 */
  if (C.zf) goto L_1249e361;
L_1249e35a:;
  /* 1249e35a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1249e35f jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249e361:;
  /* 1249e361 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1249e367 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e36d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1249e373 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249e376 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e37b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1249e37e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249e381 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1249e383 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1249e386 jmp 0x1249de8a */
  goto L_1249de8a;
L_1249e38b:;
  /* 1249e38b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1249e391 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1249e397 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e399 jne 0x1249e3ac */
  if (!C.zf) goto L_1249e3ac;
  /* 1249e39b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1249e3a1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1249e3a7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e3aa je 0x1249e3b3 */
  if (C.zf) goto L_1249e3b3;
L_1249e3ac:;
  /* 1249e3ac mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1249e3b1 jmp 0x1249e3c9 */
  goto L_1249e3c9;
L_1249e3b3:;
  /* 1249e3b3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1249e3b9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e3bc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1249e3c2 jmp 0x1249ddf3 */
  goto L_1249ddf3;
L_1249e3c7:;
  /* 1249e3c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1249e3c9:;
  /* 1249e3c9 mov esp, ebp */
  ESP = (EBP);
  /* 1249e3cb pop ebp */
  EBP = (pop32());
  /* 1249e3cc ret  */
  ESPCHK(0x1249ddb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3d0 @ 0x1249e3d0 (250 bytes, 92 insns) */
void f_1249e3d0(void) {
  FTRACE(0x1249e3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249e3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1249e3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1249e3d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249e3d6 push ebx */
  push32((uint32_t)(EBX));
  /* 1249e3d7 push esi */
  push32((uint32_t)(ESI));
  /* 1249e3d8 push edi */
  push32((uint32_t)(EDI));
  /* 1249e3d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1249e3dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1249e3df lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1249e3e2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1249e3e5:;
  /* 1249e3e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e3e9 jne 0x1249e409 */
  if (!C.zf) goto L_1249e409;
  /* 1249e3eb push 0x124c0740 */
  push32((uint32_t)(0x124c0740u));
  /* 1249e3f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249e3f2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1249e3f4 push 0x124c0734 */
  push32((uint32_t)(0x124c0734u));
  /* 1249e3f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1249e3fb call 0x12497580 */
  push32(0x1249e400u); f_12497580();
  /* 1249e400 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e403 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e406 jne 0x1249e409 */
  if (!C.zf) goto L_1249e409;
  /* 1249e408 int3  */
  x86_unimpl("int3 @ 0x1249e408");
L_1249e409:;
  /* 1249e409 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1249e40b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249e40d jne 0x1249e3e5 */
  if (!C.zf) goto L_1249e3e5;
L_1249e40f:;
  /* 1249e40f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e413 jne 0x1249e433 */
  if (!C.zf) goto L_1249e433;
  /* 1249e415 push 0x124c0724 */
  push32((uint32_t)(0x124c0724u));
  /* 1249e41a push 0 */
  push32((uint32_t)(0x0u));
  /* 1249e41c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1249e41e push 0x124c0734 */
  push32((uint32_t)(0x124c0734u));
  /* 1249e423 push 2 */
  push32((uint32_t)(0x2u));
  /* 1249e425 call 0x12497580 */
  push32(0x1249e42au); f_12497580();
  /* 1249e42a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e42d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e430 jne 0x1249e433 */
  if (!C.zf) goto L_1249e433;
  /* 1249e432 int3  */
  x86_unimpl("int3 @ 0x1249e432");
L_1249e433:;
  /* 1249e433 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249e437 jne 0x1249e40f */
  if (!C.zf) goto L_1249e40f;
  /* 1249e439 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e43c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1249e443 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249e449 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1249e44c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e44f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249e452 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1249e454 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e457 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1249e45e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1249e461 push ecx */
  push32((uint32_t)(ECX));
  /* 1249e462 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1249e465 push edx */
  push32((uint32_t)(EDX));
  /* 1249e466 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e469 push eax */
  push32((uint32_t)(EAX));
  /* 1249e46a call 0x1249f450 */
  push32(0x1249e46fu); f_1249f450();
  /* 1249e46f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e472 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1249e475 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e478 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249e47b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249e47e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e481 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1249e484 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e487 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e48b jl 0x1249e4af */
  if ((C.sf!=C.of)) goto L_1249e4af;
  /* 1249e48d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e490 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1249e492 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1249e495 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1249e497 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1249e49d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1249e4a0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e4a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1249e4a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e4a8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e4ab mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1249e4ad jmp 0x1249e4c0 */
  goto L_1249e4c0;
L_1249e4af:;
  /* 1249e4af mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e4b2 push edx */
  push32((uint32_t)(EDX));
  /* 1249e4b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249e4b5 call 0x1249f1d0 */
  push32(0x1249e4bau); f_1249f1d0();
  /* 1249e4ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e4bd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1249e4c0:;
  /* 1249e4c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249e4c3 pop edi */
  EDI = (pop32());
  /* 1249e4c4 pop esi */
  ESI = (pop32());
  /* 1249e4c5 pop ebx */
  EBX = (pop32());
  /* 1249e4c6 mov esp, ebp */
  ESP = (EBP);
  /* 1249e4c8 pop ebp */
  EBP = (pop32());
  /* 1249e4c9 ret  */
  ESPCHK(0x1249e3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4d0 @ 0x1249e4d0 (183 bytes, 58 insns) */
void f_1249e4d0(void) {
  FTRACE(0x1249e4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249e4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1249e4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1249e4d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249e4d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249e4d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e4dc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e4e1 ja 0x1249e4fa */
  if ((!C.cf&&!C.zf)) goto L_1249e4fa;
  /* 1249e4e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249e4e6 mov edx, dword ptr [0x124c2c98] */
  EDX = (r32((uint32_t)(0x124c2c98)));
  /* 1249e4ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e4ee mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1249e4f2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1249e4f5 jmp 0x1249e583 */
  goto L_1249e583;
L_1249e4fa:;
  /* 1249e4fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249e4fd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1249e500 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1249e506 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1249e50c mov edx, dword ptr [0x124c2c98] */
  EDX = (r32((uint32_t)(0x124c2c98)));
  /* 1249e512 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e514 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1249e518 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1249e51d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249e51f je 0x1249e543 */
  if (C.zf) goto L_1249e543;
  /* 1249e521 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249e524 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1249e527 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1249e52d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1249e530 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1249e533 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1249e536 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1249e53a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1249e541 jmp 0x1249e554 */
  goto L_1249e554;
L_1249e543:;
  /* 1249e543 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1249e546 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1249e549 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1249e54d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1249e554:;
  /* 1249e554 push 1 */
  push32((uint32_t)(0x1u));
  /* 1249e556 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249e558 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249e55a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1249e55d push ecx */
  push32((uint32_t)(ECX));
  /* 1249e55e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249e561 push edx */
  push32((uint32_t)(EDX));
  /* 1249e562 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1249e565 push eax */
  push32((uint32_t)(EAX));
  /* 1249e566 push 1 */
  push32((uint32_t)(0x1u));
  /* 1249e568 call 0x124a06f0 */
  push32(0x1249e56du); f_124a06f0();
  /* 1249e56d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249e572 jne 0x1249e578 */
  if (!C.zf) goto L_1249e578;
  /* 1249e574 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e576 jmp 0x1249e583 */
  goto L_1249e583;
L_1249e578:;
  /* 1249e578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249e57b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1249e580 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1249e583:;
  /* 1249e583 mov esp, ebp */
  ESP = (EBP);
  /* 1249e585 pop ebp */
  EBP = (pop32());
  /* 1249e586 ret  */
  ESPCHK(0x1249e4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e590 @ 0x1249e590 (836 bytes, 238 insns) */
void f_1249e590(void) {
  FTRACE(0x1249e590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249e590 push ebp */
  push32((uint32_t)(EBP));
  /* 1249e591 mov ebp, esp */
  EBP = (ESP);
  /* 1249e593 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249e596 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1249e598 call 0x1249bec0 */
  push32(0x1249e59du); f_1249bec0();
  /* 1249e59d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e5a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249e5a3 push eax */
  push32((uint32_t)(EAX));
  /* 1249e5a4 call 0x1249e8e0 */
  push32(0x1249e5a9u); f_1249e8e0();
  /* 1249e5a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e5ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1249e5af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249e5b2 cmp ecx, dword ptr [0x124c5f24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c5f24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e5b8 jne 0x1249e5cb */
  if (!C.zf) goto L_1249e5cb;
  /* 1249e5ba push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1249e5bc call 0x1249bf60 */
  push32(0x1249e5c1u); f_1249bf60();
  /* 1249e5c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e5c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e5c6 jmp 0x1249e8d0 */
  goto L_1249e8d0;
L_1249e5cb:;
  /* 1249e5cb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e5cf jne 0x1249e5ec */
  if (!C.zf) goto L_1249e5ec;
  /* 1249e5d1 call 0x1249e9c0 */
  push32(0x1249e5d6u); f_1249e9c0();
  /* 1249e5d6 call 0x1249ea40 */
  push32(0x1249e5dbu); f_1249ea40();
  /* 1249e5db push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1249e5dd call 0x1249bf60 */
  push32(0x1249e5e2u); f_1249bf60();
  /* 1249e5e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e5e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e5e7 jmp 0x1249e8d0 */
  goto L_1249e8d0;
L_1249e5ec:;
  /* 1249e5ec mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1249e5f3 jmp 0x1249e5fe */
  goto L_1249e5fe;
L_1249e5f5:;
  /* 1249e5f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249e5f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e5fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1249e5fe:;
  /* 1249e5fe cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e602 jae 0x1249e74f */
  if (!C.cf) goto L_1249e74f;
  /* 1249e608 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249e60b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249e60e mov ecx, dword ptr [eax + 0x124c2eb8] */
  ECX = (r32((uint32_t)(EAX + 0x124c2eb8)));
  /* 1249e614 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e617 jne 0x1249e74a */
  if (!C.zf) goto L_1249e74a;
  /* 1249e61d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1249e624 jmp 0x1249e62f */
  goto L_1249e62f;
L_1249e626:;
  /* 1249e626 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e629 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e62c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1249e62f:;
  /* 1249e62f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e636 jae 0x1249e644 */
  if (!C.cf) goto L_1249e644;
  /* 1249e638 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e63b mov byte ptr [eax + 0x124c60c0], 0 */
  w8((uint32_t)(EAX + 0x124c60c0), (0x0u));
  /* 1249e642 jmp 0x1249e626 */
  goto L_1249e626;
L_1249e644:;
  /* 1249e644 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1249e64b jmp 0x1249e656 */
  goto L_1249e656;
L_1249e64d:;
  /* 1249e64d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249e650 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e653 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1249e656:;
  /* 1249e656 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e65a jae 0x1249e6d7 */
  if (!C.cf) goto L_1249e6d7;
  /* 1249e65c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249e65f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249e662 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249e665 lea ecx, [edx + eax*8 + 0x124c2ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x124c2ec8));
  /* 1249e66c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1249e66f jmp 0x1249e67a */
  goto L_1249e67a;
L_1249e671:;
  /* 1249e671 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249e674 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e677 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1249e67a:;
  /* 1249e67a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249e67d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1249e67f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1249e681 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249e683 je 0x1249e6d2 */
  if (C.zf) goto L_1249e6d2;
  /* 1249e685 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249e688 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e68a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1249e68d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249e68f je 0x1249e6d2 */
  if (C.zf) goto L_1249e6d2;
  /* 1249e691 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249e694 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1249e696 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1249e698 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1249e69b jmp 0x1249e6a6 */
  goto L_1249e6a6;
L_1249e69d:;
  /* 1249e69d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e6a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e6a3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1249e6a6:;
  /* 1249e6a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249e6a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1249e6ab mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1249e6ae cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e6b1 ja 0x1249e6d0 */
  if ((!C.cf&&!C.zf)) goto L_1249e6d0;
  /* 1249e6b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e6b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249e6b9 mov dl, byte ptr [eax + 0x124c60c1] */
  DL = (r8((uint32_t)(EAX + 0x124c60c1)));
  /* 1249e6bf or dl, byte ptr [ecx + 0x124c2eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x124c2eb0))); DL = (_r); fl_logic(_r,8); }
  /* 1249e6c5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e6c8 mov byte ptr [eax + 0x124c60c1], dl */
  w8((uint32_t)(EAX + 0x124c60c1), (DL));
  /* 1249e6ce jmp 0x1249e69d */
  goto L_1249e69d;
L_1249e6d0:;
  /* 1249e6d0 jmp 0x1249e671 */
  goto L_1249e671;
L_1249e6d2:;
  /* 1249e6d2 jmp 0x1249e64d */
  goto L_1249e64d;
L_1249e6d7:;
  /* 1249e6d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249e6da mov dword ptr [0x124c5f24], ecx */
  w32((uint32_t)(0x124c5f24), (ECX));
  /* 1249e6e0 mov dword ptr [0x124c5fac], 1 */
  w32((uint32_t)(0x124c5fac), (0x1u));
  /* 1249e6ea mov edx, dword ptr [0x124c5f24] */
  EDX = (r32((uint32_t)(0x124c5f24)));
  /* 1249e6f0 push edx */
  push32((uint32_t)(EDX));
  /* 1249e6f1 call 0x1249e940 */
  push32(0x1249e6f6u); f_1249e940();
  /* 1249e6f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e6f9 mov dword ptr [0x124c61c4], eax */
  w32((uint32_t)(0x124c61c4), (EAX));
  /* 1249e6fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1249e705 jmp 0x1249e710 */
  goto L_1249e710;
L_1249e707:;
  /* 1249e707 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249e70a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e70d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1249e710:;
  /* 1249e710 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e714 jae 0x1249e734 */
  if (!C.cf) goto L_1249e734;
  /* 1249e716 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249e719 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249e71c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249e71f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249e722 mov cx, word ptr [ecx + eax*2 + 0x124c2ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x124c2ebc)));
  /* 1249e72a mov word ptr [edx*2 + 0x124c5fa0], cx */
  w16((uint32_t)(EDX*2 + 0x124c5fa0), (CX));
  /* 1249e732 jmp 0x1249e707 */
  goto L_1249e707;
L_1249e734:;
  /* 1249e734 call 0x1249ea40 */
  push32(0x1249e739u); f_1249ea40();
  /* 1249e739 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1249e73b call 0x1249bf60 */
  push32(0x1249e740u); f_1249bf60();
  /* 1249e740 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e743 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e745 jmp 0x1249e8d0 */
  goto L_1249e8d0;
L_1249e74a:;
  /* 1249e74a jmp 0x1249e5f5 */
  goto L_1249e5f5;
L_1249e74f:;
  /* 1249e74f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1249e752 push edx */
  push32((uint32_t)(EDX));
  /* 1249e753 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249e756 push eax */
  push32((uint32_t)(EAX));
  /* 1249e757 call dword ptr [0x124c7308] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7308))), 0x1249e75du);
  /* 1249e75d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e760 jne 0x1249e8a2 */
  if (!C.zf) goto L_1249e8a2;
  /* 1249e766 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1249e76d jmp 0x1249e778 */
  goto L_1249e778;
L_1249e76f:;
  /* 1249e76f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e772 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e775 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1249e778:;
  /* 1249e778 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e77f jae 0x1249e78d */
  if (!C.cf) goto L_1249e78d;
  /* 1249e781 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e784 mov byte ptr [edx + 0x124c60c0], 0 */
  w8((uint32_t)(EDX + 0x124c60c0), (0x0u));
  /* 1249e78b jmp 0x1249e76f */
  goto L_1249e76f;
L_1249e78d:;
  /* 1249e78d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249e790 mov dword ptr [0x124c5f24], eax */
  w32((uint32_t)(0x124c5f24), (EAX));
  /* 1249e795 mov dword ptr [0x124c61c4], 0 */
  w32((uint32_t)(0x124c61c4), (0x0u));
  /* 1249e79f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e7a3 jbe 0x1249e85e */
  if ((C.cf||C.zf)) goto L_1249e85e;
  /* 1249e7a9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1249e7ac mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1249e7af jmp 0x1249e7ba */
  goto L_1249e7ba;
L_1249e7b1:;
  /* 1249e7b1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249e7b4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e7b7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1249e7ba:;
  /* 1249e7ba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249e7bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1249e7bf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1249e7c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249e7c3 je 0x1249e80c */
  if (C.zf) goto L_1249e80c;
  /* 1249e7c5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249e7c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e7ca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1249e7cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249e7cf je 0x1249e80c */
  if (C.zf) goto L_1249e80c;
  /* 1249e7d1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249e7d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1249e7d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1249e7d8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1249e7db jmp 0x1249e7e6 */
  goto L_1249e7e6;
L_1249e7dd:;
  /* 1249e7dd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e7e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e7e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1249e7e6:;
  /* 1249e7e6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249e7e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1249e7eb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1249e7ee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e7f1 ja 0x1249e80a */
  if ((!C.cf&&!C.zf)) goto L_1249e80a;
  /* 1249e7f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e7f6 mov cl, byte ptr [eax + 0x124c60c1] */
  CL = (r8((uint32_t)(EAX + 0x124c60c1)));
  /* 1249e7fc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1249e7ff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e802 mov byte ptr [edx + 0x124c60c1], cl */
  w8((uint32_t)(EDX + 0x124c60c1), (CL));
  /* 1249e808 jmp 0x1249e7dd */
  goto L_1249e7dd;
L_1249e80a:;
  /* 1249e80a jmp 0x1249e7b1 */
  goto L_1249e7b1;
L_1249e80c:;
  /* 1249e80c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1249e813 jmp 0x1249e81e */
  goto L_1249e81e;
L_1249e815:;
  /* 1249e815 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e818 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e81b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1249e81e:;
  /* 1249e81e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e825 jae 0x1249e83e */
  if (!C.cf) goto L_1249e83e;
  /* 1249e827 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e82a mov dl, byte ptr [ecx + 0x124c60c1] */
  DL = (r8((uint32_t)(ECX + 0x124c60c1)));
  /* 1249e830 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1249e833 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249e836 mov byte ptr [eax + 0x124c60c1], dl */
  w8((uint32_t)(EAX + 0x124c60c1), (DL));
  /* 1249e83c jmp 0x1249e815 */
  goto L_1249e815;
L_1249e83e:;
  /* 1249e83e mov ecx, dword ptr [0x124c5f24] */
  ECX = (r32((uint32_t)(0x124c5f24)));
  /* 1249e844 push ecx */
  push32((uint32_t)(ECX));
  /* 1249e845 call 0x1249e940 */
  push32(0x1249e84au); f_1249e940();
  /* 1249e84a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e84d mov dword ptr [0x124c61c4], eax */
  w32((uint32_t)(0x124c61c4), (EAX));
  /* 1249e852 mov dword ptr [0x124c5fac], 1 */
  w32((uint32_t)(0x124c5fac), (0x1u));
  /* 1249e85c jmp 0x1249e868 */
  goto L_1249e868;
L_1249e85e:;
  /* 1249e85e mov dword ptr [0x124c5fac], 0 */
  w32((uint32_t)(0x124c5fac), (0x0u));
L_1249e868:;
  /* 1249e868 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1249e86f jmp 0x1249e87a */
  goto L_1249e87a;
L_1249e871:;
  /* 1249e871 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249e874 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e877 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1249e87a:;
  /* 1249e87a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e87e jae 0x1249e88f */
  if (!C.cf) goto L_1249e88f;
  /* 1249e880 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249e883 mov word ptr [eax*2 + 0x124c5fa0], 0 */
  w16((uint32_t)(EAX*2 + 0x124c5fa0), (0x0u));
  /* 1249e88d jmp 0x1249e871 */
  goto L_1249e871;
L_1249e88f:;
  /* 1249e88f call 0x1249ea40 */
  push32(0x1249e894u); f_1249ea40();
  /* 1249e894 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1249e896 call 0x1249bf60 */
  push32(0x1249e89bu); f_1249bf60();
  /* 1249e89b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e89e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e8a0 jmp 0x1249e8d0 */
  goto L_1249e8d0;
L_1249e8a2:;
  /* 1249e8a2 cmp dword ptr [0x124c4a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e8a9 je 0x1249e8c3 */
  if (C.zf) goto L_1249e8c3;
  /* 1249e8ab call 0x1249e9c0 */
  push32(0x1249e8b0u); f_1249e9c0();
  /* 1249e8b0 call 0x1249ea40 */
  push32(0x1249e8b5u); f_1249ea40();
  /* 1249e8b5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1249e8b7 call 0x1249bf60 */
  push32(0x1249e8bcu); f_1249bf60();
  /* 1249e8bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e8bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249e8c1 jmp 0x1249e8d0 */
  goto L_1249e8d0;
L_1249e8c3:;
  /* 1249e8c3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1249e8c5 call 0x1249bf60 */
  push32(0x1249e8cau); f_1249bf60();
  /* 1249e8ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e8cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1249e8d0:;
  /* 1249e8d0 mov esp, ebp */
  ESP = (EBP);
  /* 1249e8d2 pop ebp */
  EBP = (pop32());
  /* 1249e8d3 ret  */
  ESPCHK(0x1249e590u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1249e8e0 (89 bytes, 21 insns) */
void f_1249e8e0(void) {
  FTRACE(0x1249e8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249e8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1249e8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1249e8e3 mov dword ptr [0x124c4a38], 0 */
  w32((uint32_t)(0x124c4a38), (0x0u));
  /* 1249e8ed cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e8f1 jne 0x1249e905 */
  if (!C.zf) goto L_1249e905;
  /* 1249e8f3 mov dword ptr [0x124c4a38], 1 */
  w32((uint32_t)(0x124c4a38), (0x1u));
  /* 1249e8fd call dword ptr [0x124c7300] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7300))), 0x1249e903u);
  /* 1249e903 jmp 0x1249e937 */
  goto L_1249e937;
L_1249e905:;
  /* 1249e905 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e909 jne 0x1249e91d */
  if (!C.zf) goto L_1249e91d;
  /* 1249e90b mov dword ptr [0x124c4a38], 1 */
  w32((uint32_t)(0x124c4a38), (0x1u));
  /* 1249e915 call dword ptr [0x124c7304] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7304))), 0x1249e91bu);
  /* 1249e91b jmp 0x1249e937 */
  goto L_1249e937;
L_1249e91d:;
  /* 1249e91d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e921 jne 0x1249e934 */
  if (!C.zf) goto L_1249e934;
  /* 1249e923 mov dword ptr [0x124c4a38], 1 */
  w32((uint32_t)(0x124c4a38), (0x1u));
  /* 1249e92d mov eax, dword ptr [0x124c4a58] */
  EAX = (r32((uint32_t)(0x124c4a58)));
  /* 1249e932 jmp 0x1249e937 */
  goto L_1249e937;
L_1249e934:;
  /* 1249e934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1249e937:;
  /* 1249e937 pop ebp */
  EBP = (pop32());
  /* 1249e938 ret  */
  ESPCHK(0x1249e8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e940 @ 0x1249e940 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1249e940(void) {
  FTRACE(0x1249e940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249e940 push ebp */
  push32((uint32_t)(EBP));
  /* 1249e941 mov ebp, esp */
  EBP = (ESP);
  /* 1249e943 push ecx */
  push32((uint32_t)(ECX));
  /* 1249e944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249e947 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1249e94a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249e94d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249e953 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1249e956 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e95a ja 0x1249e98a */
  if ((!C.cf&&!C.zf)) goto L_1249e98a;
  /* 1249e95c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249e95f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1249e961 mov dl, byte ptr [eax + 0x1249e9a4] */
  DL = (r8((uint32_t)(EAX + 0x1249e9a4)));
  /* 1249e967 jmp dword ptr [edx*4 + 0x1249e990] */
  switch (EDX) {
    case 0: goto L_1249e96e;
    case 1: goto L_1249e975;
    case 2: goto L_1249e97c;
    case 3: goto L_1249e983;
    case 4: goto L_1249e98a;
    default: x86_unimpl("switch@0x1249e967 out of table"); return;
  }
L_1249e96e:;
  /* 1249e96e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1249e973 jmp 0x1249e98c */
  goto L_1249e98c;
L_1249e975:;
  /* 1249e975 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1249e97a jmp 0x1249e98c */
  goto L_1249e98c;
L_1249e97c:;
  /* 1249e97c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1249e981 jmp 0x1249e98c */
  goto L_1249e98c;
L_1249e983:;
  /* 1249e983 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1249e988 jmp 0x1249e98c */
  goto L_1249e98c;
L_1249e98a:;
  /* 1249e98a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1249e98c:;
  /* 1249e98c mov esp, ebp */
  ESP = (EBP);
  /* 1249e98e pop ebp */
  EBP = (pop32());
  /* 1249e98f ret  */
  ESPCHK(0x1249e940u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1249e9c0 (116 bytes, 29 insns) */
void f_1249e9c0(void) {
  FTRACE(0x1249e9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249e9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1249e9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1249e9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1249e9c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1249e9cb jmp 0x1249e9d6 */
  goto L_1249e9d6;
L_1249e9cd:;
  /* 1249e9cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249e9d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249e9d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1249e9d6:;
  /* 1249e9d6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249e9dd jge 0x1249e9eb */
  if ((C.sf==C.of)) goto L_1249e9eb;
  /* 1249e9df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249e9e2 mov byte ptr [ecx + 0x124c60c0], 0 */
  w8((uint32_t)(ECX + 0x124c60c0), (0x0u));
  /* 1249e9e9 jmp 0x1249e9cd */
  goto L_1249e9cd;
L_1249e9eb:;
  /* 1249e9eb mov dword ptr [0x124c5f24], 0 */
  w32((uint32_t)(0x124c5f24), (0x0u));
  /* 1249e9f5 mov dword ptr [0x124c5fac], 0 */
  w32((uint32_t)(0x124c5fac), (0x0u));
  /* 1249e9ff mov dword ptr [0x124c61c4], 0 */
  w32((uint32_t)(0x124c61c4), (0x0u));
  /* 1249ea09 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1249ea10 jmp 0x1249ea1b */
  goto L_1249ea1b;
L_1249ea12:;
  /* 1249ea12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249ea15 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ea18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1249ea1b:;
  /* 1249ea1b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ea1f jge 0x1249ea30 */
  if ((C.sf==C.of)) goto L_1249ea30;
  /* 1249ea21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249ea24 mov word ptr [eax*2 + 0x124c5fa0], 0 */
  w16((uint32_t)(EAX*2 + 0x124c5fa0), (0x0u));
  /* 1249ea2e jmp 0x1249ea12 */
  goto L_1249ea12;
L_1249ea30:;
  /* 1249ea30 mov esp, ebp */
  ESP = (EBP);
  /* 1249ea32 pop ebp */
  EBP = (pop32());
  /* 1249ea33 ret  */
  ESPCHK(0x1249e9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea40 @ 0x1249ea40 (770 bytes, 175 insns) */
void f_1249ea40(void) {
  FTRACE(0x1249ea40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249ea40 push ebp */
  push32((uint32_t)(EBP));
  /* 1249ea41 mov ebp, esp */
  EBP = (ESP);
  /* 1249ea43 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ea49 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1249ea4f push eax */
  push32((uint32_t)(EAX));
  /* 1249ea50 mov ecx, dword ptr [0x124c5f24] */
  ECX = (r32((uint32_t)(0x124c5f24)));
  /* 1249ea56 push ecx */
  push32((uint32_t)(ECX));
  /* 1249ea57 call dword ptr [0x124c7308] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7308))), 0x1249ea5du);
  /* 1249ea5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ea60 jne 0x1249ec79 */
  if (!C.zf) goto L_1249ec79;
  /* 1249ea66 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1249ea70 jmp 0x1249ea81 */
  goto L_1249ea81;
L_1249ea72:;
  /* 1249ea72 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ea78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ea7b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1249ea81:;
  /* 1249ea81 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ea8b jae 0x1249eaa2 */
  if (!C.cf) goto L_1249eaa2;
  /* 1249ea8d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ea93 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1249ea99 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1249eaa0 jmp 0x1249ea72 */
  goto L_1249ea72;
L_1249eaa2:;
  /* 1249eaa2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1249eaa9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1249eaaf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1249eab2 jmp 0x1249eabd */
  goto L_1249eabd;
L_1249eab4:;
  /* 1249eab4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249eab7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249eaba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1249eabd:;
  /* 1249eabd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249eac0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1249eac2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1249eac4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249eac6 je 0x1249eb08 */
  if (C.zf) goto L_1249eb08;
  /* 1249eac8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249eacb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1249eacd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1249eacf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1249ead5 jmp 0x1249eae6 */
  goto L_1249eae6;
L_1249ead7:;
  /* 1249ead7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249eadd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249eae0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1249eae6:;
  /* 1249eae6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249eae9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1249eaeb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1249eaee cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249eaf4 ja 0x1249eb06 */
  if ((!C.cf&&!C.zf)) goto L_1249eb06;
  /* 1249eaf6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249eafc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1249eb04 jmp 0x1249ead7 */
  goto L_1249ead7;
L_1249eb06:;
  /* 1249eb06 jmp 0x1249eab4 */
  goto L_1249eab4;
L_1249eb08:;
  /* 1249eb08 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249eb0a mov eax, dword ptr [0x124c61c4] */
  EAX = (r32((uint32_t)(0x124c61c4)));
  /* 1249eb0f push eax */
  push32((uint32_t)(EAX));
  /* 1249eb10 mov ecx, dword ptr [0x124c5f24] */
  ECX = (r32((uint32_t)(0x124c5f24)));
  /* 1249eb16 push ecx */
  push32((uint32_t)(ECX));
  /* 1249eb17 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1249eb1d push edx */
  push32((uint32_t)(EDX));
  /* 1249eb1e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1249eb23 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1249eb29 push eax */
  push32((uint32_t)(EAX));
  /* 1249eb2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1249eb2c call 0x124a06f0 */
  push32(0x1249eb31u); f_124a06f0();
  /* 1249eb31 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249eb34 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249eb36 mov ecx, dword ptr [0x124c5f24] */
  ECX = (r32((uint32_t)(0x124c5f24)));
  /* 1249eb3c push ecx */
  push32((uint32_t)(ECX));
  /* 1249eb3d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1249eb42 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1249eb48 push edx */
  push32((uint32_t)(EDX));
  /* 1249eb49 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1249eb4e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1249eb54 push eax */
  push32((uint32_t)(EAX));
  /* 1249eb55 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1249eb5a mov ecx, dword ptr [0x124c61c4] */
  ECX = (r32((uint32_t)(0x124c61c4)));
  /* 1249eb60 push ecx */
  push32((uint32_t)(ECX));
  /* 1249eb61 call 0x124a08b0 */
  push32(0x1249eb66u); f_124a08b0();
  /* 1249eb66 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249eb69 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249eb6b mov edx, dword ptr [0x124c5f24] */
  EDX = (r32((uint32_t)(0x124c5f24)));
  /* 1249eb71 push edx */
  push32((uint32_t)(EDX));
  /* 1249eb72 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1249eb77 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1249eb7d push eax */
  push32((uint32_t)(EAX));
  /* 1249eb7e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1249eb83 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1249eb89 push ecx */
  push32((uint32_t)(ECX));
  /* 1249eb8a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1249eb8f mov edx, dword ptr [0x124c61c4] */
  EDX = (r32((uint32_t)(0x124c61c4)));
  /* 1249eb95 push edx */
  push32((uint32_t)(EDX));
  /* 1249eb96 call 0x124a08b0 */
  push32(0x1249eb9bu); f_124a08b0();
  /* 1249eb9b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249eb9e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1249eba8 jmp 0x1249ebb9 */
  goto L_1249ebb9;
L_1249ebaa:;
  /* 1249ebaa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ebb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ebb3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1249ebb9:;
  /* 1249ebb9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ebc3 jae 0x1249ec74 */
  if (!C.cf) goto L_1249ec74;
  /* 1249ebc9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ebcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1249ebd1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1249ebd9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1249ebdc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249ebde je 0x1249ec16 */
  if (C.zf) goto L_1249ec16;
  /* 1249ebe0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ebe6 mov cl, byte ptr [eax + 0x124c60c1] */
  CL = (r8((uint32_t)(EAX + 0x124c60c1)));
  /* 1249ebec or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1249ebef mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ebf5 mov byte ptr [edx + 0x124c60c1], cl */
  w8((uint32_t)(EDX + 0x124c60c1), (CL));
  /* 1249ebfb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ec01 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ec07 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1249ec0e mov byte ptr [eax + 0x124c5fc0], dl */
  w8((uint32_t)(EAX + 0x124c5fc0), (DL));
  /* 1249ec14 jmp 0x1249ec6f */
  goto L_1249ec6f;
L_1249ec16:;
  /* 1249ec16 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ec1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1249ec1e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1249ec26 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1249ec29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249ec2b je 0x1249ec62 */
  if (C.zf) goto L_1249ec62;
  /* 1249ec2d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ec33 mov al, byte ptr [edx + 0x124c60c1] */
  AL = (r8((uint32_t)(EDX + 0x124c60c1)));
  /* 1249ec39 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1249ec3b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ec41 mov byte ptr [ecx + 0x124c60c1], al */
  w8((uint32_t)(ECX + 0x124c60c1), (AL));
  /* 1249ec47 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ec4d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ec53 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1249ec5a mov byte ptr [edx + 0x124c5fc0], cl */
  w8((uint32_t)(EDX + 0x124c5fc0), (CL));
  /* 1249ec60 jmp 0x1249ec6f */
  goto L_1249ec6f;
L_1249ec62:;
  /* 1249ec62 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ec68 mov byte ptr [edx + 0x124c5fc0], 0 */
  w8((uint32_t)(EDX + 0x124c5fc0), (0x0u));
L_1249ec6f:;
  /* 1249ec6f jmp 0x1249ebaa */
  goto L_1249ebaa;
L_1249ec74:;
  /* 1249ec74 jmp 0x1249ed3e */
  goto L_1249ed3e;
L_1249ec79:;
  /* 1249ec79 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1249ec83 jmp 0x1249ec94 */
  goto L_1249ec94;
L_1249ec85:;
  /* 1249ec85 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ec8b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ec8e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1249ec94:;
  /* 1249ec94 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ec9e jae 0x1249ed3e */
  if (!C.cf) goto L_1249ed3e;
  /* 1249eca4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ecab jb 0x1249ece8 */
  if (C.cf) goto L_1249ece8;
  /* 1249ecad cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ecb4 ja 0x1249ece8 */
  if ((!C.cf&&!C.zf)) goto L_1249ece8;
  /* 1249ecb6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ecbc mov dl, byte ptr [ecx + 0x124c60c1] */
  DL = (r8((uint32_t)(ECX + 0x124c60c1)));
  /* 1249ecc2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1249ecc5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249eccb mov byte ptr [eax + 0x124c60c1], dl */
  w8((uint32_t)(EAX + 0x124c60c1), (DL));
  /* 1249ecd1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ecd7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ecda mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ece0 mov byte ptr [edx + 0x124c5fc0], cl */
  w8((uint32_t)(EDX + 0x124c5fc0), (CL));
  /* 1249ece6 jmp 0x1249ed39 */
  goto L_1249ed39;
L_1249ece8:;
  /* 1249ece8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ecef jb 0x1249ed2c */
  if (C.cf) goto L_1249ed2c;
  /* 1249ecf1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ecf8 ja 0x1249ed2c */
  if ((!C.cf&&!C.zf)) goto L_1249ed2c;
  /* 1249ecfa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ed00 mov cl, byte ptr [eax + 0x124c60c1] */
  CL = (r8((uint32_t)(EAX + 0x124c60c1)));
  /* 1249ed06 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1249ed09 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ed0f mov byte ptr [edx + 0x124c60c1], cl */
  w8((uint32_t)(EDX + 0x124c60c1), (CL));
  /* 1249ed15 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ed1b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ed1e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ed24 mov byte ptr [ecx + 0x124c5fc0], al */
  w8((uint32_t)(ECX + 0x124c5fc0), (AL));
  /* 1249ed2a jmp 0x1249ed39 */
  goto L_1249ed39;
L_1249ed2c:;
  /* 1249ed2c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1249ed32 mov byte ptr [edx + 0x124c5fc0], 0 */
  w8((uint32_t)(EDX + 0x124c5fc0), (0x0u));
L_1249ed39:;
  /* 1249ed39 jmp 0x1249ec85 */
  goto L_1249ec85;
L_1249ed3e:;
  /* 1249ed3e mov esp, ebp */
  ESP = (EBP);
  /* 1249ed40 pop ebp */
  EBP = (pop32());
  /* 1249ed41 ret  */
  ESPCHK(0x1249ea40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed50 @ 0x1249ed50 (23 bytes, 9 insns) */
void f_1249ed50(void) {
  FTRACE(0x1249ed50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249ed50 push ebp */
  push32((uint32_t)(EBP));
  /* 1249ed51 mov ebp, esp */
  EBP = (ESP);
  /* 1249ed53 cmp dword ptr [0x124c5fac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c5fac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ed5a je 0x1249ed63 */
  if (C.zf) goto L_1249ed63;
  /* 1249ed5c mov eax, dword ptr [0x124c5f24] */
  EAX = (r32((uint32_t)(0x124c5f24)));
  /* 1249ed61 jmp 0x1249ed65 */
  goto L_1249ed65;
L_1249ed63:;
  /* 1249ed63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1249ed65:;
  /* 1249ed65 pop ebp */
  EBP = (pop32());
  /* 1249ed66 ret  */
  ESPCHK(0x1249ed50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed70 @ 0x1249ed70 (34 bytes, 10 insns) */
void f_1249ed70(void) {
  FTRACE(0x1249ed70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249ed70 push ebp */
  push32((uint32_t)(EBP));
  /* 1249ed71 mov ebp, esp */
  EBP = (ESP);
  /* 1249ed73 cmp dword ptr [0x124c6370], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c6370))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ed7a jne 0x1249ed90 */
  if (!C.zf) goto L_1249ed90;
  /* 1249ed7c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1249ed7e call 0x1249e590 */
  push32(0x1249ed83u); f_1249e590();
  /* 1249ed83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ed86 mov dword ptr [0x124c6370], 1 */
  w32((uint32_t)(0x124c6370), (0x1u));
L_1249ed90:;
  /* 1249ed90 pop ebp */
  EBP = (pop32());
  /* 1249ed91 ret  */
  ESPCHK(0x1249ed70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eda0 @ 0x1249eda0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_1249eda0(void) {
  FTRACE(0x1249eda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249eda0 push ebp */
  push32((uint32_t)(EBP));
  /* 1249eda1 mov ebp, esp */
  EBP = (ESP);
  /* 1249eda3 push edi */
  push32((uint32_t)(EDI));
  /* 1249eda4 push esi */
  push32((uint32_t)(ESI));
  /* 1249eda5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1249eda8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1249edab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1249edae mov eax, ecx */
  EAX = (ECX);
  /* 1249edb0 mov edx, ecx */
  EDX = (ECX);
  /* 1249edb2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249edb4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249edb6 jbe 0x1249edc0 */
  if ((C.cf||C.zf)) goto L_1249edc0;
  /* 1249edb8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249edba jb 0x1249ef38 */
  if (C.cf) goto L_1249ef38;
L_1249edc0:;
  /* 1249edc0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1249edc6 jne 0x1249eddc */
  if (!C.zf) goto L_1249eddc;
  /* 1249edc8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1249edcb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1249edce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249edd1 jb 0x1249edfc */
  if (C.cf) goto L_1249edfc;
  /* 1249edd3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1249edd5 jmp dword ptr [edx*4 + 0x1249eee8] */
  switch (EDX) {
    case 0: goto L_1249eef8;
    case 1: goto L_1249ef00;
    case 2: goto L_1249ef0c;
    case 3: goto L_1249ef20;
    default: x86_unimpl("switch@0x1249edd5 out of table"); return;
  }
L_1249eddc:;
  /* 1249eddc mov eax, edi */
  EAX = (EDI);
  /* 1249edde mov edx, 3 */
  EDX = (0x3u);
  /* 1249ede3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ede6 jb 0x1249edf4 */
  if (C.cf) goto L_1249edf4;
  /* 1249ede8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1249edeb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249eded jmp dword ptr [eax*4 + 0x1249ee00] */
  switch (EAX) {
    case 1: goto L_1249ee10;
    case 2: goto L_1249ee3c;
    case 3: goto L_1249ee60;
    default: x86_unimpl("switch@0x1249eded out of table"); return;
  }
L_1249edf4:;
  /* 1249edf4 jmp dword ptr [ecx*4 + 0x1249eef8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1249eef8)))); return;
  /* 1249edfb nop  */
  /* nop */
L_1249edfc:;
  /* 1249edfc jmp dword ptr [ecx*4 + 0x1249ee7c] */
  switch (ECX) {
    case 0: goto L_1249eedf;
    case 1: goto L_1249eecc;
    case 2: goto L_1249eec4;
    case 3: goto L_1249eebc;
    case 4: goto L_1249eeb4;
    case 5: goto L_1249eeac;
    case 6: goto L_1249eea4;
    case 7: goto L_1249ee9c;
    default: x86_unimpl("switch@0x1249edfc out of table"); return;
  }
  /* 1249ee03 nop  */
  /* nop */
L_1249ee10:;
  /* 1249ee10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1249ee12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1249ee14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1249ee16 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1249ee19 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1249ee1c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1249ee1f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1249ee22 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1249ee25 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ee28 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ee2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ee2e jb 0x1249edfc */
  if (C.cf) goto L_1249edfc;
  /* 1249ee30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1249ee32 jmp dword ptr [edx*4 + 0x1249eee8] */
  switch (EDX) {
    case 0: goto L_1249eef8;
    case 1: goto L_1249ef00;
    case 2: goto L_1249ef0c;
    case 3: goto L_1249ef20;
    default: x86_unimpl("switch@0x1249ee32 out of table"); return;
  }
  /* 1249ee39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1249ee3c:;
  /* 1249ee3c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1249ee3e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1249ee40 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1249ee42 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1249ee45 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1249ee48 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1249ee4b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ee4e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ee51 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ee54 jb 0x1249edfc */
  if (C.cf) goto L_1249edfc;
  /* 1249ee56 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1249ee58 jmp dword ptr [edx*4 + 0x1249eee8] */
  switch (EDX) {
    case 0: goto L_1249eef8;
    case 1: goto L_1249ef00;
    case 2: goto L_1249ef0c;
    case 3: goto L_1249ef20;
    default: x86_unimpl("switch@0x1249ee58 out of table"); return;
  }
  /* 1249ee5f nop  */
  /* nop */
L_1249ee60:;
  /* 1249ee60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1249ee62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1249ee64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1249ee66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1249ee67 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1249ee6a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1249ee6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ee6e jb 0x1249edfc */
  if (C.cf) goto L_1249edfc;
  /* 1249ee70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1249ee72 jmp dword ptr [edx*4 + 0x1249eee8] */
  switch (EDX) {
    case 0: goto L_1249eef8;
    case 1: goto L_1249ef00;
    case 2: goto L_1249ef0c;
    case 3: goto L_1249ef20;
    default: x86_unimpl("switch@0x1249ee72 out of table"); return;
  }
  /* 1249ee79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1249ee9c:;
  /* 1249ee9c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1249eea0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1249eea4:;
  /* 1249eea4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1249eea8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1249eeac:;
  /* 1249eeac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1249eeb0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1249eeb4:;
  /* 1249eeb4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1249eeb8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1249eebc:;
  /* 1249eebc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1249eec0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1249eec4:;
  /* 1249eec4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1249eec8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1249eecc:;
  /* 1249eecc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1249eed0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1249eed4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1249eedb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1249eedd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1249eedf:;
  /* 1249eedf jmp dword ptr [edx*4 + 0x1249eee8] */
  switch (EDX) {
    case 0: goto L_1249eef8;
    case 1: goto L_1249ef00;
    case 2: goto L_1249ef0c;
    case 3: goto L_1249ef20;
    default: x86_unimpl("switch@0x1249eedf out of table"); return;
  }
  /* 1249eee6 mov edi, edi */
  EDI = (EDI);
L_1249eef8:;
  /* 1249eef8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249eefb pop esi */
  ESI = (pop32());
  /* 1249eefc pop edi */
  EDI = (pop32());
  /* 1249eefd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1249eefe ret  */
  ESPCHK(0x1249eda0u, _esp0);
  ESP += 4; return;
  /* 1249eeff nop  */
  /* nop */
L_1249ef00:;
  /* 1249ef00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1249ef02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1249ef04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249ef07 pop esi */
  ESI = (pop32());
  /* 1249ef08 pop edi */
  EDI = (pop32());
  /* 1249ef09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1249ef0a ret  */
  ESPCHK(0x1249eda0u, _esp0);
  ESP += 4; return;
  /* 1249ef0b nop  */
  /* nop */
L_1249ef0c:;
  /* 1249ef0c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1249ef0e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1249ef10 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1249ef13 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1249ef16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249ef19 pop esi */
  ESI = (pop32());
  /* 1249ef1a pop edi */
  EDI = (pop32());
  /* 1249ef1b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1249ef1c ret  */
  ESPCHK(0x1249eda0u, _esp0);
  ESP += 4; return;
  /* 1249ef1d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1249ef20:;
  /* 1249ef20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1249ef22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1249ef24 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1249ef27 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1249ef2a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1249ef2d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1249ef30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249ef33 pop esi */
  ESI = (pop32());
  /* 1249ef34 pop edi */
  EDI = (pop32());
  /* 1249ef35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1249ef36 ret  */
  ESPCHK(0x1249eda0u, _esp0);
  ESP += 4; return;
  /* 1249ef37 nop  */
  /* nop */
L_1249ef38:;
  /* 1249ef38 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1249ef3c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1249ef40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1249ef46 jne 0x1249ef6c */
  if (!C.zf) goto L_1249ef6c;
  /* 1249ef48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1249ef4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1249ef4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ef51 jb 0x1249ef60 */
  if (C.cf) goto L_1249ef60;
  /* 1249ef53 std  */
  C.df=1;
  /* 1249ef54 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1249ef56 cld  */
  C.df=0;
  /* 1249ef57 jmp dword ptr [edx*4 + 0x1249f080] */
  switch (EDX) {
    case 0: goto L_1249f090;
    case 1: goto L_1249f098;
    case 2: goto L_1249f0a8;
    case 3: goto L_1249f0bc;
    default: x86_unimpl("switch@0x1249ef57 out of table"); return;
  }
  /* 1249ef5e mov edi, edi */
  EDI = (EDI);
L_1249ef60:;
  /* 1249ef60 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1249ef62 jmp dword ptr [ecx*4 + 0x1249f030] */
  switch (ECX) {
    case 0: goto L_1249f077;
    default: x86_unimpl("switch@0x1249ef62 out of table"); return;
  }
  /* 1249ef69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1249ef6c:;
  /* 1249ef6c mov eax, edi */
  EAX = (EDI);
  /* 1249ef6e mov edx, 3 */
  EDX = (0x3u);
  /* 1249ef73 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ef76 jb 0x1249ef84 */
  if (C.cf) goto L_1249ef84;
  /* 1249ef78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1249ef7b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ef7d jmp dword ptr [eax*4 + 0x1249ef88] */
  switch (EAX) {
    case 1: goto L_1249ef98;
    case 2: goto L_1249efb8;
    case 3: goto L_1249efe0;
    default: x86_unimpl("switch@0x1249ef7d out of table"); return;
  }
L_1249ef84:;
  /* 1249ef84 jmp dword ptr [ecx*4 + 0x1249f080] */
  switch (ECX) {
    case 0: goto L_1249f090;
    case 1: goto L_1249f098;
    case 2: goto L_1249f0a8;
    case 3: goto L_1249f0bc;
    default: x86_unimpl("switch@0x1249ef84 out of table"); return;
  }
  /* 1249ef8b nop  */
  /* nop */
L_1249ef98:;
  /* 1249ef98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1249ef9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1249ef9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1249efa0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1249efa1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1249efa4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1249efa5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249efa8 jb 0x1249ef60 */
  if (C.cf) goto L_1249ef60;
  /* 1249efaa std  */
  C.df=1;
  /* 1249efab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1249efad cld  */
  C.df=0;
  /* 1249efae jmp dword ptr [edx*4 + 0x1249f080] */
  switch (EDX) {
    case 0: goto L_1249f090;
    case 1: goto L_1249f098;
    case 2: goto L_1249f0a8;
    case 3: goto L_1249f0bc;
    default: x86_unimpl("switch@0x1249efae out of table"); return;
  }
  /* 1249efb5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1249efb8:;
  /* 1249efb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1249efbb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1249efbd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1249efc0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1249efc3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1249efc6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1249efc9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249efcc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249efcf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249efd2 jb 0x1249ef60 */
  if (C.cf) goto L_1249ef60;
  /* 1249efd4 std  */
  C.df=1;
  /* 1249efd5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1249efd7 cld  */
  C.df=0;
  /* 1249efd8 jmp dword ptr [edx*4 + 0x1249f080] */
  switch (EDX) {
    case 0: goto L_1249f090;
    case 1: goto L_1249f098;
    case 2: goto L_1249f0a8;
    case 3: goto L_1249f0bc;
    default: x86_unimpl("switch@0x1249efd8 out of table"); return;
  }
  /* 1249efdf nop  */
  /* nop */
L_1249efe0:;
  /* 1249efe0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1249efe3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1249efe5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1249efe8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1249efeb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1249efee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1249eff1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1249eff4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1249eff7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249effa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249effd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f000 jb 0x1249ef60 */
  if (C.cf) goto L_1249ef60;
  /* 1249f006 std  */
  C.df=1;
  /* 1249f007 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1249f009 cld  */
  C.df=0;
  /* 1249f00a jmp dword ptr [edx*4 + 0x1249f080] */
  switch (EDX) {
    case 0: goto L_1249f090;
    case 1: goto L_1249f098;
    case 2: goto L_1249f0a8;
    case 3: goto L_1249f0bc;
    default: x86_unimpl("switch@0x1249f00a out of table"); return;
  }
  /* 1249f011 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1249f014 xor al, 0xf0 */
  { uint32_t _r=(AL)^(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1249f016 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1249f017 adc bh, byte ptr [eax + esi*8] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EAX + ESI*8))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1249f01a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1249f01b adc al, byte ptr [eax + esi*8 + 0x49] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EAX + ESI*8 + 0x49))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1249f01f adc cl, byte ptr [eax + esi*8 + 0x49] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX + ESI*8 + 0x49))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1249f023 adc dl, byte ptr [eax + esi*8 + 0x49] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX + ESI*8 + 0x49))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1249f027 adc bl, byte ptr [eax + esi*8 + 0x49] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EAX + ESI*8 + 0x49))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1249f02b adc ah, byte ptr [eax + esi*8 + 0x49] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EAX + ESI*8 + 0x49))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1249f034 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1249f038 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1249f03c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1249f040 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1249f044 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1249f048 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1249f04c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1249f050 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1249f054 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1249f058 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1249f05c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1249f060 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1249f064 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1249f068 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1249f06c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1249f073 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f075 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1249f077:;
  /* 1249f077 jmp dword ptr [edx*4 + 0x1249f080] */
  switch (EDX) {
    case 0: goto L_1249f090;
    case 1: goto L_1249f098;
    case 2: goto L_1249f0a8;
    case 3: goto L_1249f0bc;
    default: x86_unimpl("switch@0x1249f077 out of table"); return;
  }
  /* 1249f07e mov edi, edi */
  EDI = (EDI);
L_1249f090:;
  /* 1249f090 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249f093 pop esi */
  ESI = (pop32());
  /* 1249f094 pop edi */
  EDI = (pop32());
  /* 1249f095 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1249f096 ret  */
  ESPCHK(0x1249eda0u, _esp0);
  ESP += 4; return;
  /* 1249f097 nop  */
  /* nop */
L_1249f098:;
  /* 1249f098 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1249f09b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1249f09e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249f0a1 pop esi */
  ESI = (pop32());
  /* 1249f0a2 pop edi */
  EDI = (pop32());
  /* 1249f0a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1249f0a4 ret  */
  ESPCHK(0x1249eda0u, _esp0);
  ESP += 4; return;
  /* 1249f0a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1249f0a8:;
  /* 1249f0a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1249f0ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1249f0ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1249f0b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1249f0b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249f0b7 pop esi */
  ESI = (pop32());
  /* 1249f0b8 pop edi */
  EDI = (pop32());
  /* 1249f0b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1249f0ba ret  */
  ESPCHK(0x1249eda0u, _esp0);
  ESP += 4; return;
  /* 1249f0bb nop  */
  /* nop */
L_1249f0bc:;
  /* 1249f0bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1249f0bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1249f0c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1249f0c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1249f0c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1249f0cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1249f0ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249f0d1 pop esi */
  ESI = (pop32());
  /* 1249f0d2 pop edi */
  EDI = (pop32());
  /* 1249f0d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1249f0d4 ret  */
  ESPCHK(0x1249eda0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1249f0e0 (104 bytes, 43 insns) */
void f_1249f0e0(void) {
  FTRACE(0x1249f0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249f0e0 push ebx */
  push32((uint32_t)(EBX));
  /* 1249f0e1 push esi */
  push32((uint32_t)(ESI));
  /* 1249f0e2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1249f0e6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249f0e8 jne 0x1249f102 */
  if (!C.zf) goto L_1249f102;
  /* 1249f0ea mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1249f0ee mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1249f0f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1249f0f4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1249f0f6 mov ebx, eax */
  EBX = (EAX);
  /* 1249f0f8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1249f0fc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1249f0fe mov edx, ebx */
  EDX = (EBX);
  /* 1249f100 jmp 0x1249f143 */
  goto L_1249f143;
L_1249f102:;
  /* 1249f102 mov ecx, eax */
  ECX = (EAX);
  /* 1249f104 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1249f108 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1249f10c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1249f110:;
  /* 1249f110 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1249f112 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1249f114 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1249f116 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1249f118 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1249f11a jne 0x1249f110 */
  if (!C.zf) goto L_1249f110;
  /* 1249f11c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1249f11e mov esi, eax */
  ESI = (EAX);
  /* 1249f120 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1249f124 mov ecx, eax */
  ECX = (EAX);
  /* 1249f126 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1249f12a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1249f12c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f12e jb 0x1249f13e */
  if (C.cf) goto L_1249f13e;
  /* 1249f130 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f134 ja 0x1249f13e */
  if ((!C.cf&&!C.zf)) goto L_1249f13e;
  /* 1249f136 jb 0x1249f13f */
  if (C.cf) goto L_1249f13f;
  /* 1249f138 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f13c jbe 0x1249f13f */
  if ((C.cf||C.zf)) goto L_1249f13f;
L_1249f13e:;
  /* 1249f13e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1249f13f:;
  /* 1249f13f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1249f141 mov eax, esi */
  EAX = (ESI);
L_1249f143:;
  /* 1249f143 pop esi */
  ESI = (pop32());
  /* 1249f144 pop ebx */
  EBX = (pop32());
  /* 1249f145 ret 0x10 */
  ESPCHK(0x1249f0e0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1249f150 (117 bytes, 44 insns) */
void f_1249f150(void) {
  FTRACE(0x1249f150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249f150 push ebx */
  push32((uint32_t)(EBX));
  /* 1249f151 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1249f155 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249f157 jne 0x1249f171 */
  if (!C.zf) goto L_1249f171;
  /* 1249f159 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1249f15d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1249f161 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1249f163 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1249f165 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1249f169 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1249f16b mov eax, edx */
  EAX = (EDX);
  /* 1249f16d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1249f16f jmp 0x1249f1c1 */
  goto L_1249f1c1;
L_1249f171:;
  /* 1249f171 mov ecx, eax */
  ECX = (EAX);
  /* 1249f173 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1249f177 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1249f17b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1249f17f:;
  /* 1249f17f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1249f181 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1249f183 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1249f185 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1249f187 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1249f189 jne 0x1249f17f */
  if (!C.zf) goto L_1249f17f;
  /* 1249f18b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1249f18d mov ecx, eax */
  ECX = (EAX);
  /* 1249f18f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1249f193 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1249f194 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1249f198 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f19a jb 0x1249f1aa */
  if (C.cf) goto L_1249f1aa;
  /* 1249f19c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f1a0 ja 0x1249f1aa */
  if ((!C.cf&&!C.zf)) goto L_1249f1aa;
  /* 1249f1a2 jb 0x1249f1b2 */
  if (C.cf) goto L_1249f1b2;
  /* 1249f1a4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f1a8 jbe 0x1249f1b2 */
  if ((C.cf||C.zf)) goto L_1249f1b2;
L_1249f1aa:;
  /* 1249f1aa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249f1ae sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1249f1b2:;
  /* 1249f1b2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249f1b6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249f1ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1249f1bc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1249f1be sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1249f1c1:;
  /* 1249f1c1 pop ebx */
  EBX = (pop32());
  /* 1249f1c2 ret 0x10 */
  ESPCHK(0x1249f150u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f1d0 @ 0x1249f1d0 (628 bytes, 214 insns) */
void f_1249f1d0(void) {
  FTRACE(0x1249f1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249f1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1249f1d1 mov ebp, esp */
  EBP = (ESP);
  /* 1249f1d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249f1d6 push ebx */
  push32((uint32_t)(EBX));
  /* 1249f1d7 push esi */
  push32((uint32_t)(ESI));
  /* 1249f1d8 push edi */
  push32((uint32_t)(EDI));
L_1249f1d9:;
  /* 1249f1d9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f1dd jne 0x1249f1fd */
  if (!C.zf) goto L_1249f1fd;
  /* 1249f1df push 0x124c07ec */
  push32((uint32_t)(0x124c07ecu));
  /* 1249f1e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249f1e6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1249f1e8 push 0x124c07e0 */
  push32((uint32_t)(0x124c07e0u));
  /* 1249f1ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1249f1ef call 0x12497580 */
  push32(0x1249f1f4u); f_12497580();
  /* 1249f1f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f1f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f1fa jne 0x1249f1fd */
  if (!C.zf) goto L_1249f1fd;
  /* 1249f1fc int3  */
  x86_unimpl("int3 @ 0x1249f1fc");
L_1249f1fd:;
  /* 1249f1fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249f1ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249f201 jne 0x1249f1d9 */
  if (!C.zf) goto L_1249f1d9;
  /* 1249f203 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1249f206 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1249f209 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f20c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1249f20f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1249f212 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f215 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1249f218 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1249f21e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249f220 je 0x1249f22f */
  if (C.zf) goto L_1249f22f;
  /* 1249f222 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f225 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1249f228 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1249f22b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249f22d je 0x1249f245 */
  if (C.zf) goto L_1249f245;
L_1249f22f:;
  /* 1249f22f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f232 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1249f235 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1249f237 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f23a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1249f23d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1249f240 jmp 0x1249f43d */
  goto L_1249f43d;
L_1249f245:;
  /* 1249f245 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f248 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1249f24b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1249f24e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249f250 je 0x1249f29c */
  if (C.zf) goto L_1249f29c;
  /* 1249f252 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f255 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1249f25c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f25f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1249f262 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1249f265 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249f267 je 0x1249f285 */
  if (C.zf) goto L_1249f285;
  /* 1249f269 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f26c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f26f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1249f272 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1249f274 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f277 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1249f27a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1249f27d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f280 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1249f283 jmp 0x1249f29c */
  goto L_1249f29c;
L_1249f285:;
  /* 1249f285 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f288 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1249f28b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1249f28e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f291 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1249f294 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1249f297 jmp 0x1249f43d */
  goto L_1249f43d;
L_1249f29c:;
  /* 1249f29c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f29f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1249f2a2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1249f2a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f2a8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1249f2ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f2ae mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1249f2b1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1249f2b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f2b7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1249f2ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f2bd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1249f2c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1249f2cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f2ce mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1249f2d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f2d4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1249f2d7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1249f2dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249f2df jne 0x1249f30f */
  if (!C.zf) goto L_1249f30f;
  /* 1249f2e1 cmp dword ptr [ebp - 8], 0x124c3140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x124c3140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f2e8 je 0x1249f2f3 */
  if (C.zf) goto L_1249f2f3;
  /* 1249f2ea cmp dword ptr [ebp - 8], 0x124c3160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x124c3160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f2f1 jne 0x1249f303 */
  if (!C.zf) goto L_1249f303;
L_1249f2f3:;
  /* 1249f2f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249f2f6 push edx */
  push32((uint32_t)(EDX));
  /* 1249f2f7 call 0x124a1140 */
  push32(0x1249f2fcu); f_124a1140();
  /* 1249f2fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f2ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249f301 jne 0x1249f30f */
  if (!C.zf) goto L_1249f30f;
L_1249f303:;
  /* 1249f303 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f306 push eax */
  push32((uint32_t)(EAX));
  /* 1249f307 call 0x124a1070 */
  push32(0x1249f30cu); f_124a1070();
  /* 1249f30c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1249f30f:;
  /* 1249f30f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f312 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1249f315 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1249f31b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249f31d je 0x1249f3fb */
  if (C.zf) goto L_1249f3fb;
L_1249f323:;
  /* 1249f323 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f326 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f329 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1249f32b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249f32e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249f330 jge 0x1249f353 */
  if ((C.sf==C.of)) goto L_1249f353;
  /* 1249f332 push 0x124c07a0 */
  push32((uint32_t)(0x124c07a0u));
  /* 1249f337 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249f339 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1249f33e push 0x124c07e0 */
  push32((uint32_t)(0x124c07e0u));
  /* 1249f343 push 2 */
  push32((uint32_t)(0x2u));
  /* 1249f345 call 0x12497580 */
  push32(0x1249f34au); f_12497580();
  /* 1249f34a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f34d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f350 jne 0x1249f353 */
  if (!C.zf) goto L_1249f353;
  /* 1249f352 int3  */
  x86_unimpl("int3 @ 0x1249f352");
L_1249f353:;
  /* 1249f353 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249f355 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249f357 jne 0x1249f323 */
  if (!C.zf) goto L_1249f323;
  /* 1249f359 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f35c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f35f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1249f361 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249f364 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1249f367 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f36a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1249f36d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f370 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f373 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1249f375 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f378 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1249f37b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249f37e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f381 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1249f384 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f388 jle 0x1249f3a6 */
  if ((C.zf||C.sf!=C.of)) goto L_1249f3a6;
  /* 1249f38a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f38d push ecx */
  push32((uint32_t)(ECX));
  /* 1249f38e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f391 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1249f394 push eax */
  push32((uint32_t)(EAX));
  /* 1249f395 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249f398 push ecx */
  push32((uint32_t)(ECX));
  /* 1249f399 call 0x124a0d60 */
  push32(0x1249f39eu); f_124a0d60();
  /* 1249f39e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f3a1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1249f3a4 jmp 0x1249f3ee */
  goto L_1249f3ee;
L_1249f3a6:;
  /* 1249f3a6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f3aa je 0x1249f3c9 */
  if (C.zf) goto L_1249f3c9;
  /* 1249f3ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249f3af sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1249f3b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249f3b5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1249f3b8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249f3bb mov ecx, dword ptr [edx*4 + 0x124c6220] */
  ECX = (r32((uint32_t)(EDX*4 + 0x124c6220)));
  /* 1249f3c2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f3c4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1249f3c7 jmp 0x1249f3d0 */
  goto L_1249f3d0;
L_1249f3c9:;
  /* 1249f3c9 mov dword ptr [ebp - 0x14], 0x124c2a60 */
  w32((uint32_t)(EBP + -0x14), (0x124c2a60u));
L_1249f3d0:;
  /* 1249f3d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1249f3d3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1249f3d7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1249f3da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249f3dc je 0x1249f3ee */
  if (C.zf) goto L_1249f3ee;
  /* 1249f3de push 2 */
  push32((uint32_t)(0x2u));
  /* 1249f3e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1249f3e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249f3e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1249f3e6 call 0x124a0c10 */
  push32(0x1249f3ebu); f_124a0c10();
  /* 1249f3eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1249f3ee:;
  /* 1249f3ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f3f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1249f3f4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1249f3f7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1249f3f9 jmp 0x1249f419 */
  goto L_1249f419;
L_1249f3fb:;
  /* 1249f3fb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1249f402 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f405 push edx */
  push32((uint32_t)(EDX));
  /* 1249f406 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1249f409 push eax */
  push32((uint32_t)(EAX));
  /* 1249f40a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249f40d push ecx */
  push32((uint32_t)(ECX));
  /* 1249f40e call 0x124a0d60 */
  push32(0x1249f413u); f_124a0d60();
  /* 1249f413 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f416 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1249f419:;
  /* 1249f419 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249f41c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f41f je 0x1249f435 */
  if (C.zf) goto L_1249f435;
  /* 1249f421 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f424 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1249f427 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1249f42a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f42d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1249f430 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1249f433 jmp 0x1249f43d */
  goto L_1249f43d;
L_1249f435:;
  /* 1249f435 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249f438 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1249f43d:;
  /* 1249f43d pop edi */
  EDI = (pop32());
  /* 1249f43e pop esi */
  ESI = (pop32());
  /* 1249f43f pop ebx */
  EBX = (pop32());
  /* 1249f440 mov esp, ebp */
  ESP = (EBP);
  /* 1249f442 pop ebp */
  EBP = (pop32());
  /* 1249f443 ret  */
  ESPCHK(0x1249f1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f450 @ 0x1249f450 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1249f450(void) {
  FTRACE(0x1249f450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1249f450 push ebp */
  push32((uint32_t)(EBP));
  /* 1249f451 mov ebp, esp */
  EBP = (ESP);
  /* 1249f453 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249f459 push ebx */
  push32((uint32_t)(EBX));
  /* 1249f45a push esi */
  push32((uint32_t)(ESI));
  /* 1249f45b push edi */
  push32((uint32_t)(EDI));
  /* 1249f45c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1249f463 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1249f46d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1249f474:;
  /* 1249f474 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1249f477 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1249f479 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1249f47c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249f480 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1249f483 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f486 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1249f489 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249f48b je 0x124a0067 */
  if (C.zf) goto L_124a0067;
  /* 1249f491 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f498 jl 0x124a0067 */
  if ((C.sf!=C.of)) goto L_124a0067;
  /* 1249f49e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249f4a2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f4a5 jl 0x1249f4c6 */
  if ((C.sf!=C.of)) goto L_1249f4c6;
  /* 1249f4a7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249f4ab cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f4ae jg 0x1249f4c6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1249f4c6;
  /* 1249f4b0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249f4b4 movsx ecx, byte ptr [eax + 0x124c07d8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x124c07d8))));
  /* 1249f4bb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1249f4be mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1249f4c4 jmp 0x1249f4d0 */
  goto L_1249f4d0;
L_1249f4c6:;
  /* 1249f4c6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1249f4d0:;
  /* 1249f4d0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1249f4d6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1249f4d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1249f4dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249f4df movsx edx, byte ptr [ecx + eax*8 + 0x124c07f8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x124c07f8))));
  /* 1249f4e7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1249f4ea mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1249f4ed mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1249f4f0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1249f4f6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f4fd ja 0x124a0062 */
  if ((!C.cf&&!C.zf)) goto L_124a0062;
  /* 1249f503 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1249f509 jmp dword ptr [ecx*4 + 0x124a0074] */
  switch (ECX) {
    case 0: goto L_1249f510;
    case 1: goto L_1249f5aa;
    case 2: goto L_1249f5ec;
    case 3: goto L_1249f65b;
    case 4: goto L_1249f6b3;
    case 5: goto L_1249f6c2;
    case 6: goto L_1249f70e;
    case 7: goto L_1249f7a1;
    case 8: goto L_1249f638;
    case 9: goto L_1249f643;
    case 10: goto L_1249f62e;
    case 11: goto L_1249f623;
    case 12: goto L_1249f64e;
    case 13: goto L_1249f656;
    default: x86_unimpl("switch@0x1249f509 out of table"); return;
  }
L_1249f510:;
  /* 1249f510 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1249f517 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1249f51a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1249f520 mov eax, dword ptr [0x124c2c98] */
  EAX = (r32((uint32_t)(0x124c2c98)));
  /* 1249f525 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1249f527 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1249f52b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1249f531 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249f533 je 0x1249f58d */
  if (C.zf) goto L_1249f58d;
  /* 1249f535 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1249f53b push edx */
  push32((uint32_t)(EDX));
  /* 1249f53c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249f53f push eax */
  push32((uint32_t)(EAX));
  /* 1249f540 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249f544 push ecx */
  push32((uint32_t)(ECX));
  /* 1249f545 call 0x124a0180 */
  push32(0x1249f54au); f_124a0180();
  /* 1249f54a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f54d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1249f550 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1249f552 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1249f555 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1249f558 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f55b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1249f55e:;
  /* 1249f55e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249f562 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249f564 jne 0x1249f587 */
  if (!C.zf) goto L_1249f587;
  /* 1249f566 push 0x124c0878 */
  push32((uint32_t)(0x124c0878u));
  /* 1249f56b push 0 */
  push32((uint32_t)(0x0u));
  /* 1249f56d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1249f572 push 0x124c086c */
  push32((uint32_t)(0x124c086cu));
  /* 1249f577 push 2 */
  push32((uint32_t)(0x2u));
  /* 1249f579 call 0x12497580 */
  push32(0x1249f57eu); f_12497580();
  /* 1249f57e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f581 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f584 jne 0x1249f587 */
  if (!C.zf) goto L_1249f587;
  /* 1249f586 int3  */
  x86_unimpl("int3 @ 0x1249f586");
L_1249f587:;
  /* 1249f587 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249f589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249f58b jne 0x1249f55e */
  if (!C.zf) goto L_1249f55e;
L_1249f58d:;
  /* 1249f58d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1249f593 push ecx */
  push32((uint32_t)(ECX));
  /* 1249f594 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249f597 push edx */
  push32((uint32_t)(EDX));
  /* 1249f598 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249f59c push eax */
  push32((uint32_t)(EAX));
  /* 1249f59d call 0x124a0180 */
  push32(0x1249f5a2u); f_124a0180();
  /* 1249f5a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f5a5 jmp 0x124a0062 */
  goto L_124a0062;
L_1249f5aa:;
  /* 1249f5aa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1249f5b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249f5b4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1249f5ba mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1249f5c0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1249f5c6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1249f5cc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1249f5cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1249f5d6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1249f5e0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1249f5e7 jmp 0x124a0062 */
  goto L_124a0062;
L_1249f5ec:;
  /* 1249f5ec movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249f5f0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1249f5f6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1249f5fc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249f5ff mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1249f605 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f60c ja 0x1249f656 */
  if ((!C.cf&&!C.zf)) goto L_1249f656;
  /* 1249f60e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1249f614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249f616 mov al, byte ptr [ecx + 0x124a00ac] */
  AL = (r8((uint32_t)(ECX + 0x124a00ac)));
  /* 1249f61c jmp dword ptr [eax*4 + 0x124a0094] */
  switch (EAX) {
    case 0: goto L_1249f638;
    case 1: goto L_1249f643;
    case 2: goto L_1249f62e;
    case 3: goto L_1249f623;
    case 4: goto L_1249f64e;
    case 5: goto L_1249f656;
    default: x86_unimpl("switch@0x1249f61c out of table"); return;
  }
L_1249f623:;
  /* 1249f623 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f626 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1249f629 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1249f62c jmp 0x1249f656 */
  goto L_1249f656;
L_1249f62e:;
  /* 1249f62e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f631 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1249f633 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1249f636 jmp 0x1249f656 */
  goto L_1249f656;
L_1249f638:;
  /* 1249f638 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f63b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1249f63e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1249f641 jmp 0x1249f656 */
  goto L_1249f656;
L_1249f643:;
  /* 1249f643 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f646 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1249f649 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1249f64c jmp 0x1249f656 */
  goto L_1249f656;
L_1249f64e:;
  /* 1249f64e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f651 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1249f653 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1249f656:;
  /* 1249f656 jmp 0x124a0062 */
  goto L_124a0062;
L_1249f65b:;
  /* 1249f65b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249f65f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f662 jne 0x1249f697 */
  if (!C.zf) goto L_1249f697;
  /* 1249f664 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1249f667 push edx */
  push32((uint32_t)(EDX));
  /* 1249f668 call 0x124a0290 */
  push32(0x1249f66du); f_124a0290();
  /* 1249f66d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f670 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1249f676 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f67d jge 0x1249f695 */
  if ((C.sf==C.of)) goto L_1249f695;
  /* 1249f67f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f682 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1249f684 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1249f687 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1249f68d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1249f68f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1249f695:;
  /* 1249f695 jmp 0x1249f6ae */
  goto L_1249f6ae;
L_1249f697:;
  /* 1249f697 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1249f69d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249f6a0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249f6a4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1249f6a8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1249f6ae:;
  /* 1249f6ae jmp 0x124a0062 */
  goto L_124a0062;
L_1249f6b3:;
  /* 1249f6b3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1249f6bd jmp 0x124a0062 */
  goto L_124a0062;
L_1249f6c2:;
  /* 1249f6c2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249f6c6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f6c9 jne 0x1249f6f2 */
  if (!C.zf) goto L_1249f6f2;
  /* 1249f6cb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1249f6ce push eax */
  push32((uint32_t)(EAX));
  /* 1249f6cf call 0x124a0290 */
  push32(0x1249f6d4u); f_124a0290();
  /* 1249f6d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f6d7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1249f6dd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f6e4 jge 0x1249f6f0 */
  if ((C.sf==C.of)) goto L_1249f6f0;
  /* 1249f6e6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1249f6f0:;
  /* 1249f6f0 jmp 0x1249f709 */
  goto L_1249f709;
L_1249f6f2:;
  /* 1249f6f2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1249f6f8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1249f6fb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249f6ff lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1249f703 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1249f709:;
  /* 1249f709 jmp 0x124a0062 */
  goto L_124a0062;
L_1249f70e:;
  /* 1249f70e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249f712 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1249f718 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1249f71e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249f721 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1249f727 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f72e ja 0x1249f79c */
  if ((!C.cf&&!C.zf)) goto L_1249f79c;
  /* 1249f730 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1249f736 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249f738 mov al, byte ptr [ecx + 0x124a00d1] */
  AL = (r8((uint32_t)(ECX + 0x124a00d1)));
  /* 1249f73e jmp dword ptr [eax*4 + 0x124a00bd] */
  switch (EAX) {
    case 0: goto L_1249f750;
    case 1: goto L_1249f789;
    case 2: goto L_1249f745;
    case 3: goto L_1249f793;
    case 4: goto L_1249f79c;
    default: x86_unimpl("switch@0x1249f73e out of table"); return;
  }
L_1249f745:;
  /* 1249f745 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f748 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1249f74b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1249f74e jmp 0x1249f79c */
  goto L_1249f79c;
L_1249f750:;
  /* 1249f750 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1249f753 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1249f756 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f759 jne 0x1249f77b */
  if (!C.zf) goto L_1249f77b;
  /* 1249f75b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1249f75e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1249f762 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f765 jne 0x1249f77b */
  if (!C.zf) goto L_1249f77b;
  /* 1249f767 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1249f76a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f76d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1249f770 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f773 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1249f776 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1249f779 jmp 0x1249f787 */
  goto L_1249f787;
L_1249f77b:;
  /* 1249f77b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1249f782 jmp 0x1249f510 */
  goto L_1249f510;
L_1249f787:;
  /* 1249f787 jmp 0x1249f79c */
  goto L_1249f79c;
L_1249f789:;
  /* 1249f789 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f78c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1249f78e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1249f791 jmp 0x1249f79c */
  goto L_1249f79c;
L_1249f793:;
  /* 1249f793 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f796 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1249f799 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1249f79c:;
  /* 1249f79c jmp 0x124a0062 */
  goto L_124a0062;
L_1249f7a1:;
  /* 1249f7a1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249f7a5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1249f7ab mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1249f7b1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249f7b4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1249f7ba cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f7c1 ja 0x1249fe87 */
  if ((!C.cf&&!C.zf)) goto L_1249fe87;
  /* 1249f7c7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1249f7cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1249f7cf mov cl, byte ptr [edx + 0x124a013c] */
  CL = (r8((uint32_t)(EDX + 0x124a013c)));
  /* 1249f7d5 jmp dword ptr [ecx*4 + 0x124a0100] */
  switch (ECX) {
    case 0: goto L_1249f7dc;
    case 1: goto L_1249fa70;
    case 2: goto L_1249f900;
    case 3: goto L_1249fba9;
    case 4: goto L_1249f86b;
    case 5: goto L_1249f7f1;
    case 6: goto L_1249fb7b;
    case 7: goto L_1249fa80;
    case 8: goto L_1249fa25;
    case 9: goto L_1249fbf5;
    case 10: goto L_1249fb9f;
    case 11: goto L_1249f916;
    case 12: goto L_1249fb93;
    case 13: goto L_1249fbb5;
    case 14: goto L_1249fe87;
    default: x86_unimpl("switch@0x1249f7d5 out of table"); return;
  }
L_1249f7dc:;
  /* 1249f7dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f7df and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1249f7e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249f7e6 jne 0x1249f7f1 */
  if (!C.zf) goto L_1249f7f1;
  /* 1249f7e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f7eb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1249f7ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1249f7f1:;
  /* 1249f7f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f7f4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1249f7fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249f7fc je 0x1249f837 */
  if (C.zf) goto L_1249f837;
  /* 1249f7fe lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1249f801 push eax */
  push32((uint32_t)(EAX));
  /* 1249f802 call 0x124a02d0 */
  push32(0x1249f807u); f_124a02d0();
  /* 1249f807 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f80a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1249f80e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1249f812 push ecx */
  push32((uint32_t)(ECX));
  /* 1249f813 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1249f819 push edx */
  push32((uint32_t)(EDX));
  /* 1249f81a call 0x124a13b0 */
  push32(0x1249f81fu); f_124a13b0();
  /* 1249f81f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f822 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1249f825 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f829 jge 0x1249f835 */
  if ((C.sf==C.of)) goto L_1249f835;
  /* 1249f82b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1249f835:;
  /* 1249f835 jmp 0x1249f85d */
  goto L_1249f85d;
L_1249f837:;
  /* 1249f837 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1249f83a push eax */
  push32((uint32_t)(EAX));
  /* 1249f83b call 0x124a0290 */
  push32(0x1249f840u); f_124a0290();
  /* 1249f840 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f843 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1249f84a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1249f850 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1249f856 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1249f85d:;
  /* 1249f85d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1249f863 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1249f866 jmp 0x1249fe87 */
  goto L_1249fe87;
L_1249f86b:;
  /* 1249f86b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1249f86e push eax */
  push32((uint32_t)(EAX));
  /* 1249f86f call 0x124a0290 */
  push32(0x1249f874u); f_124a0290();
  /* 1249f874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f877 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1249f87d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f884 je 0x1249f892 */
  if (C.zf) goto L_1249f892;
  /* 1249f886 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1249f88c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f890 jne 0x1249f8ac */
  if (!C.zf) goto L_1249f8ac;
L_1249f892:;
  /* 1249f892 mov edx, dword ptr [0x124c2fb0] */
  EDX = (r32((uint32_t)(0x124c2fb0)));
  /* 1249f898 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1249f89b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249f89e push eax */
  push32((uint32_t)(EAX));
  /* 1249f89f call 0x1249b2f0 */
  push32(0x1249f8a4u); f_1249b2f0();
  /* 1249f8a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f8a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1249f8aa jmp 0x1249f8fb */
  goto L_1249f8fb;
L_1249f8ac:;
  /* 1249f8ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f8af and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1249f8b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249f8b7 je 0x1249f8dc */
  if (C.zf) goto L_1249f8dc;
  /* 1249f8b9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1249f8bf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1249f8c2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1249f8c5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1249f8cb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1249f8ce shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1249f8d0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1249f8d3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1249f8da jmp 0x1249f8fb */
  goto L_1249f8fb;
L_1249f8dc:;
  /* 1249f8dc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1249f8e3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1249f8e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1249f8ec mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1249f8ef mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1249f8f5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1249f8f8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1249f8fb:;
  /* 1249f8fb jmp 0x1249fe87 */
  goto L_1249fe87;
L_1249f900:;
  /* 1249f900 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f903 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1249f909 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249f90b jne 0x1249f916 */
  if (!C.zf) goto L_1249f916;
  /* 1249f90d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f910 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1249f913 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1249f916:;
  /* 1249f916 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f91d jne 0x1249f92b */
  if (!C.zf) goto L_1249f92b;
  /* 1249f91f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1249f929 jmp 0x1249f937 */
  goto L_1249f937;
L_1249f92b:;
  /* 1249f92b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1249f931 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1249f937:;
  /* 1249f937 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1249f93d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1249f943 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1249f946 push edx */
  push32((uint32_t)(EDX));
  /* 1249f947 call 0x124a0290 */
  push32(0x1249f94cu); f_124a0290();
  /* 1249f94c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f94f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1249f952 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249f955 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1249f95a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249f95c je 0x1249f9c6 */
  if (C.zf) goto L_1249f9c6;
  /* 1249f95e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f962 jne 0x1249f96d */
  if (!C.zf) goto L_1249f96d;
  /* 1249f964 mov ecx, dword ptr [0x124c2fb4] */
  ECX = (r32((uint32_t)(0x124c2fb4)));
  /* 1249f96a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1249f96d:;
  /* 1249f96d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1249f974 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249f977 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1249f97d:;
  /* 1249f97d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1249f983 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1249f989 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249f98c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1249f992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249f994 je 0x1249f9b6 */
  if (C.zf) goto L_1249f9b6;
  /* 1249f996 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1249f99c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1249f99e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1249f9a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249f9a3 je 0x1249f9b6 */
  if (C.zf) goto L_1249f9b6;
  /* 1249f9a5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1249f9ab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249f9ae mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1249f9b4 jmp 0x1249f97d */
  goto L_1249f97d;
L_1249f9b6:;
  /* 1249f9b6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1249f9bc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249f9bf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1249f9c1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1249f9c4 jmp 0x1249fa20 */
  goto L_1249fa20;
L_1249f9c6:;
  /* 1249f9c6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249f9ca jne 0x1249f9d4 */
  if (!C.zf) goto L_1249f9d4;
  /* 1249f9cc mov eax, dword ptr [0x124c2fb0] */
  EAX = (r32((uint32_t)(0x124c2fb0)));
  /* 1249f9d1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1249f9d4:;
  /* 1249f9d4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249f9d7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1249f9dd:;
  /* 1249f9dd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1249f9e3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1249f9e9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249f9ec mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1249f9f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249f9f4 je 0x1249fa14 */
  if (C.zf) goto L_1249fa14;
  /* 1249f9f6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1249f9fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1249f9ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249fa01 je 0x1249fa14 */
  if (C.zf) goto L_1249fa14;
  /* 1249fa03 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1249fa09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fa0c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1249fa12 jmp 0x1249f9dd */
  goto L_1249f9dd;
L_1249fa14:;
  /* 1249fa14 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1249fa1a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249fa1d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1249fa20:;
  /* 1249fa20 jmp 0x1249fe87 */
  goto L_1249fe87;
L_1249fa25:;
  /* 1249fa25 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1249fa28 push edx */
  push32((uint32_t)(EDX));
  /* 1249fa29 call 0x124a0290 */
  push32(0x1249fa2eu); f_124a0290();
  /* 1249fa2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fa31 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1249fa37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fa3a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1249fa3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249fa3f je 0x1249fa53 */
  if (C.zf) goto L_1249fa53;
  /* 1249fa41 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1249fa47 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1249fa4e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1249fa51 jmp 0x1249fa61 */
  goto L_1249fa61;
L_1249fa53:;
  /* 1249fa53 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1249fa59 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1249fa5f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1249fa61:;
  /* 1249fa61 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1249fa6b jmp 0x1249fe87 */
  goto L_1249fe87;
L_1249fa70:;
  /* 1249fa70 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1249fa77 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1249fa7a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1249fa7d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1249fa80:;
  /* 1249fa80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fa83 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1249fa85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1249fa88 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1249fa8e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1249fa91 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249fa98 jge 0x1249faa6 */
  if ((C.sf==C.of)) goto L_1249faa6;
  /* 1249fa9a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1249faa4 jmp 0x1249fac2 */
  goto L_1249fac2;
L_1249faa6:;
  /* 1249faa6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249faad jne 0x1249fac2 */
  if (!C.zf) goto L_1249fac2;
  /* 1249faaf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249fab3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249fab6 jne 0x1249fac2 */
  if (!C.zf) goto L_1249fac2;
  /* 1249fab8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1249fac2:;
  /* 1249fac2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1249fac5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fac8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1249facb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1249face sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249fad1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1249fad3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1249fad6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1249fadc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1249fae2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1249fae5 push ecx */
  push32((uint32_t)(ECX));
  /* 1249fae6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1249faec push edx */
  push32((uint32_t)(EDX));
  /* 1249faed movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249faf1 push eax */
  push32((uint32_t)(EAX));
  /* 1249faf2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249faf5 push ecx */
  push32((uint32_t)(ECX));
  /* 1249faf6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1249fafc push edx */
  push32((uint32_t)(EDX));
  /* 1249fafd call dword ptr [0x124c33a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c33a0))), 0x1249fb03u);
  /* 1249fb03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fb06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fb09 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1249fb0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249fb10 je 0x1249fb28 */
  if (C.zf) goto L_1249fb28;
  /* 1249fb12 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249fb19 jne 0x1249fb28 */
  if (!C.zf) goto L_1249fb28;
  /* 1249fb1b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249fb1e push ecx */
  push32((uint32_t)(ECX));
  /* 1249fb1f call dword ptr [0x124c33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c33ac))), 0x1249fb25u);
  /* 1249fb25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1249fb28:;
  /* 1249fb28 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1249fb2c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249fb2f jne 0x1249fb4a */
  if (!C.zf) goto L_1249fb4a;
  /* 1249fb31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fb34 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1249fb39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249fb3b jne 0x1249fb4a */
  if (!C.zf) goto L_1249fb4a;
  /* 1249fb3d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249fb40 push ecx */
  push32((uint32_t)(ECX));
  /* 1249fb41 call dword ptr [0x124c33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c33a4))), 0x1249fb47u);
  /* 1249fb47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1249fb4a:;
  /* 1249fb4a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249fb4d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1249fb50 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249fb53 jne 0x1249fb67 */
  if (!C.zf) goto L_1249fb67;
  /* 1249fb55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fb58 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1249fb5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1249fb5e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249fb61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fb64 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1249fb67:;
  /* 1249fb67 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249fb6a push eax */
  push32((uint32_t)(EAX));
  /* 1249fb6b call 0x1249b2f0 */
  push32(0x1249fb70u); f_1249b2f0();
  /* 1249fb70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fb73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1249fb76 jmp 0x1249fe87 */
  goto L_1249fe87;
L_1249fb7b:;
  /* 1249fb7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fb7e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1249fb81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1249fb84 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1249fb8e jmp 0x1249fc15 */
  goto L_1249fc15;
L_1249fb93:;
  /* 1249fb93 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1249fb9d jmp 0x1249fc15 */
  goto L_1249fc15;
L_1249fb9f:;
  /* 1249fb9f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1249fba9:;
  /* 1249fba9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1249fbb3 jmp 0x1249fbbf */
  goto L_1249fbbf;
L_1249fbb5:;
  /* 1249fbb5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1249fbbf:;
  /* 1249fbbf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1249fbc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fbcc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1249fbd2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249fbd4 je 0x1249fbf3 */
  if (C.zf) goto L_1249fbf3;
  /* 1249fbd6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1249fbdd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1249fbe3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fbe6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1249fbec mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1249fbf3:;
  /* 1249fbf3 jmp 0x1249fc15 */
  goto L_1249fc15;
L_1249fbf5:;
  /* 1249fbf5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1249fbff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fc02 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1249fc08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249fc0a je 0x1249fc15 */
  if (C.zf) goto L_1249fc15;
  /* 1249fc0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fc0f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1249fc12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1249fc15:;
  /* 1249fc15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fc18 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1249fc1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249fc1f je 0x1249fc3e */
  if (C.zf) goto L_1249fc3e;
  /* 1249fc21 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1249fc24 push ecx */
  push32((uint32_t)(ECX));
  /* 1249fc25 call 0x124a02b0 */
  push32(0x1249fc2au); f_124a02b0();
  /* 1249fc2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fc2d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1249fc33 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1249fc39 jmp 0x1249fccf */
  goto L_1249fccf;
L_1249fc3e:;
  /* 1249fc3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fc41 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1249fc44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249fc46 je 0x1249fc90 */
  if (C.zf) goto L_1249fc90;
  /* 1249fc48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fc4b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1249fc4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249fc50 je 0x1249fc70 */
  if (C.zf) goto L_1249fc70;
  /* 1249fc52 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1249fc55 push ecx */
  push32((uint32_t)(ECX));
  /* 1249fc56 call 0x124a0290 */
  push32(0x1249fc5bu); f_124a0290();
  /* 1249fc5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fc5e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1249fc61 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1249fc62 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1249fc68 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1249fc6e jmp 0x1249fc8e */
  goto L_1249fc8e;
L_1249fc70:;
  /* 1249fc70 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1249fc73 push edx */
  push32((uint32_t)(EDX));
  /* 1249fc74 call 0x124a0290 */
  push32(0x1249fc79u); f_124a0290();
  /* 1249fc79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fc7c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1249fc81 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1249fc82 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1249fc88 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1249fc8e:;
  /* 1249fc8e jmp 0x1249fccf */
  goto L_1249fccf;
L_1249fc90:;
  /* 1249fc90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fc93 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1249fc96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249fc98 je 0x1249fcb5 */
  if (C.zf) goto L_1249fcb5;
  /* 1249fc9a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1249fc9d push ecx */
  push32((uint32_t)(ECX));
  /* 1249fc9e call 0x124a0290 */
  push32(0x1249fca3u); f_124a0290();
  /* 1249fca3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fca6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1249fca7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1249fcad mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1249fcb3 jmp 0x1249fccf */
  goto L_1249fccf;
L_1249fcb5:;
  /* 1249fcb5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1249fcb8 push edx */
  push32((uint32_t)(EDX));
  /* 1249fcb9 call 0x124a0290 */
  push32(0x1249fcbeu); f_124a0290();
  /* 1249fcbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fcc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1249fcc3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1249fcc9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1249fccf:;
  /* 1249fccf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fcd2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1249fcd5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249fcd7 je 0x1249fd17 */
  if (C.zf) goto L_1249fd17;
  /* 1249fcd9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249fce0 jg 0x1249fd17 */
  if ((!C.zf&&C.sf==C.of)) goto L_1249fd17;
  /* 1249fce2 jl 0x1249fced */
  if ((C.sf!=C.of)) goto L_1249fced;
  /* 1249fce4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249fceb jae 0x1249fd17 */
  if (!C.cf) goto L_1249fd17;
L_1249fced:;
  /* 1249fced mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1249fcf3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1249fcf5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1249fcfb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fcfe neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1249fd00 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1249fd06 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1249fd0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fd0f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1249fd12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1249fd15 jmp 0x1249fd2f */
  goto L_1249fd2f;
L_1249fd17:;
  /* 1249fd17 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1249fd1d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1249fd23 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1249fd29 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1249fd2f:;
  /* 1249fd2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fd32 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1249fd38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249fd3a jne 0x1249fd57 */
  if (!C.zf) goto L_1249fd57;
  /* 1249fd3c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1249fd42 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1249fd48 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1249fd4b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1249fd51 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1249fd57:;
  /* 1249fd57 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249fd5e jge 0x1249fd6c */
  if ((C.sf==C.of)) goto L_1249fd6c;
  /* 1249fd60 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1249fd6a jmp 0x1249fd75 */
  goto L_1249fd75;
L_1249fd6c:;
  /* 1249fd6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fd6f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1249fd72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1249fd75:;
  /* 1249fd75 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1249fd7b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1249fd81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249fd83 jne 0x1249fd8c */
  if (!C.zf) goto L_1249fd8c;
  /* 1249fd85 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1249fd8c:;
  /* 1249fd8c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1249fd8f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1249fd92:;
  /* 1249fd92 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1249fd98 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1249fd9e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249fda1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1249fda7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249fda9 jg 0x1249fdbf */
  if ((!C.zf&&C.sf==C.of)) goto L_1249fdbf;
  /* 1249fdab mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1249fdb1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1249fdb7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249fdb9 je 0x1249fe40 */
  if (C.zf) goto L_1249fe40;
L_1249fdbf:;
  /* 1249fdbf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1249fdc5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1249fdc6 push edx */
  push32((uint32_t)(EDX));
  /* 1249fdc7 push eax */
  push32((uint32_t)(EAX));
  /* 1249fdc8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1249fdce push edx */
  push32((uint32_t)(EDX));
  /* 1249fdcf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1249fdd5 push eax */
  push32((uint32_t)(EAX));
  /* 1249fdd6 call 0x1249f150 */
  push32(0x1249fddbu); f_1249f150();
  /* 1249fddb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fdde mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1249fde4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1249fdea cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1249fdeb push edx */
  push32((uint32_t)(EDX));
  /* 1249fdec push eax */
  push32((uint32_t)(EAX));
  /* 1249fded mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1249fdf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1249fdf4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1249fdfa push edx */
  push32((uint32_t)(EDX));
  /* 1249fdfb call 0x1249f0e0 */
  push32(0x1249fe00u); f_1249f0e0();
  /* 1249fe00 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1249fe06 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1249fe0c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249fe13 jle 0x1249fe27 */
  if ((C.zf||C.sf!=C.of)) goto L_1249fe27;
  /* 1249fe15 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1249fe1b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fe21 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1249fe27:;
  /* 1249fe27 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249fe2a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1249fe30 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1249fe32 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249fe35 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249fe38 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1249fe3b jmp 0x1249fd92 */
  goto L_1249fd92;
L_1249fe40:;
  /* 1249fe40 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1249fe43 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249fe46 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1249fe49 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249fe4c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fe4f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1249fe52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fe55 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1249fe5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249fe5c je 0x1249fe87 */
  if (C.zf) goto L_1249fe87;
  /* 1249fe5e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249fe61 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1249fe64 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249fe67 jne 0x1249fe6f */
  if (!C.zf) goto L_1249fe6f;
  /* 1249fe69 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249fe6d jne 0x1249fe87 */
  if (!C.zf) goto L_1249fe87;
L_1249fe6f:;
  /* 1249fe6f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249fe72 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249fe75 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1249fe78 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249fe7b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1249fe7e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249fe81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249fe84 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1249fe87:;
  /* 1249fe87 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249fe8e jne 0x124a0062 */
  if (!C.zf) goto L_124a0062;
  /* 1249fe94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fe97 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1249fe9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249fe9c je 0x1249feed */
  if (C.zf) goto L_1249feed;
  /* 1249fe9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fea1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1249fea7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249fea9 je 0x1249febb */
  if (C.zf) goto L_1249febb;
  /* 1249feab mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1249feb2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1249feb9 jmp 0x1249feed */
  goto L_1249feed;
L_1249febb:;
  /* 1249febb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249febe and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1249fec1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249fec3 je 0x1249fed5 */
  if (C.zf) goto L_1249fed5;
  /* 1249fec5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1249fecc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1249fed3 jmp 0x1249feed */
  goto L_1249feed;
L_1249fed5:;
  /* 1249fed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249fed8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1249fedb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1249fedd je 0x1249feed */
  if (C.zf) goto L_1249feed;
  /* 1249fedf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1249fee6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1249feed:;
  /* 1249feed mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1249fef3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249fef6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249fef9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1249feff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249ff02 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1249ff05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249ff07 jne 0x1249ff25 */
  if (!C.zf) goto L_1249ff25;
  /* 1249ff09 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1249ff0f push eax */
  push32((uint32_t)(EAX));
  /* 1249ff10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249ff13 push ecx */
  push32((uint32_t)(ECX));
  /* 1249ff14 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1249ff1a push edx */
  push32((uint32_t)(EDX));
  /* 1249ff1b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1249ff1d call 0x124a0200 */
  push32(0x1249ff22u); f_124a0200();
  /* 1249ff22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1249ff25:;
  /* 1249ff25 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1249ff2b push eax */
  push32((uint32_t)(EAX));
  /* 1249ff2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249ff2f push ecx */
  push32((uint32_t)(ECX));
  /* 1249ff30 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1249ff33 push edx */
  push32((uint32_t)(EDX));
  /* 1249ff34 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1249ff3a push eax */
  push32((uint32_t)(EAX));
  /* 1249ff3b call 0x124a0240 */
  push32(0x1249ff40u); f_124a0240();
  /* 1249ff40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ff43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249ff46 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1249ff49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1249ff4b je 0x1249ff73 */
  if (C.zf) goto L_1249ff73;
  /* 1249ff4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1249ff50 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1249ff53 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249ff55 jne 0x1249ff73 */
  if (!C.zf) goto L_1249ff73;
  /* 1249ff57 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1249ff5d push eax */
  push32((uint32_t)(EAX));
  /* 1249ff5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1249ff61 push ecx */
  push32((uint32_t)(ECX));
  /* 1249ff62 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1249ff68 push edx */
  push32((uint32_t)(EDX));
  /* 1249ff69 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1249ff6b call 0x124a0200 */
  push32(0x1249ff70u); f_124a0200();
  /* 1249ff70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1249ff73:;
  /* 1249ff73 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ff77 je 0x124a0021 */
  if (C.zf) goto L_124a0021;
  /* 1249ff7d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249ff81 jle 0x124a0021 */
  if ((C.zf||C.sf!=C.of)) goto L_124a0021;
  /* 1249ff87 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1249ff8a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1249ff90 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1249ff93 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1249ff99:;
  /* 1249ff99 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1249ff9f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1249ffa5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1249ffa8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1249ffae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1249ffb0 je 0x124a001f */
  if (C.zf) goto L_124a001f;
  /* 1249ffb2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1249ffb8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1249ffbb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1249ffc2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1249ffc9 push eax */
  push32((uint32_t)(EAX));
  /* 1249ffca lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1249ffd0 push ecx */
  push32((uint32_t)(ECX));
  /* 1249ffd1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1249ffd7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ffda mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1249ffe0 call 0x124a13b0 */
  push32(0x1249ffe5u); f_124a13b0();
  /* 1249ffe5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1249ffe8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1249ffee cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1249fff5 jg 0x1249fff9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1249fff9;
  /* 1249fff7 jmp 0x124a001f */
  goto L_124a001f;
L_1249fff9:;
  /* 1249fff9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1249ffff push eax */
  push32((uint32_t)(EAX));
  /* 124a0000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0003 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0004 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 124a000a push edx */
  push32((uint32_t)(EDX));
  /* 124a000b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 124a0011 push eax */
  push32((uint32_t)(EAX));
  /* 124a0012 call 0x124a0240 */
  push32(0x124a0017u); f_124a0240();
  /* 124a0017 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a001a jmp 0x1249ff99 */
  goto L_1249ff99;
L_124a001f:;
  /* 124a001f jmp 0x124a003c */
  goto L_124a003c;
L_124a0021:;
  /* 124a0021 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 124a0027 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0028 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a002b push edx */
  push32((uint32_t)(EDX));
  /* 124a002c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a002f push eax */
  push32((uint32_t)(EAX));
  /* 124a0030 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a0033 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0034 call 0x124a0240 */
  push32(0x124a0039u); f_124a0240();
  /* 124a0039 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a003c:;
  /* 124a003c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a003f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124a0042 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a0044 je 0x124a0062 */
  if (C.zf) goto L_124a0062;
  /* 124a0046 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 124a004c push eax */
  push32((uint32_t)(EAX));
  /* 124a004d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0050 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0051 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 124a0057 push edx */
  push32((uint32_t)(EDX));
  /* 124a0058 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 124a005a call 0x124a0200 */
  push32(0x124a005fu); f_124a0200();
  /* 124a005f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a0062:;
  /* 124a0062 jmp 0x1249f474 */
  goto L_1249f474;
L_124a0067:;
  /* 124a0067 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 124a006d pop edi */
  EDI = (pop32());
  /* 124a006e pop esi */
  ESI = (pop32());
  /* 124a006f pop ebx */
  EBX = (pop32());
  /* 124a0070 mov esp, ebp */
  ESP = (EBP);
  /* 124a0072 pop ebp */
  EBP = (pop32());
  /* 124a0073 ret  */
  ESPCHK(0x1249f450u, _esp0);
  ESP += 4; return;
}

/* FUN_10010180 @ 0x124a0180 (119 bytes, 44 insns) */
void f_124a0180(void) {
  FTRACE(0x124a0180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a0180 push ebp */
  push32((uint32_t)(EBP));
  /* 124a0181 mov ebp, esp */
  EBP = (ESP);
  /* 124a0183 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0184 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0187 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124a018a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a018d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0190 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 124a0193 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0196 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a019a jl 0x124a01c2 */
  if ((C.sf!=C.of)) goto L_124a01c2;
  /* 124a019c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a019f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a01a1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 124a01a4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 124a01a6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 124a01aa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 124a01b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a01b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a01b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a01b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a01bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a01be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124a01c0 jmp 0x124a01d5 */
  goto L_124a01d5;
L_124a01c2:;
  /* 124a01c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a01c5 push edx */
  push32((uint32_t)(EDX));
  /* 124a01c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a01c9 push eax */
  push32((uint32_t)(EAX));
  /* 124a01ca call 0x1249f1d0 */
  push32(0x124a01cfu); f_1249f1d0();
  /* 124a01cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a01d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124a01d5:;
  /* 124a01d5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a01d9 jne 0x124a01e6 */
  if (!C.zf) goto L_124a01e6;
  /* 124a01db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a01de mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 124a01e4 jmp 0x124a01f3 */
  goto L_124a01f3;
L_124a01e6:;
  /* 124a01e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a01e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a01eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a01ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a01f1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_124a01f3:;
  /* 124a01f3 mov esp, ebp */
  ESP = (EBP);
  /* 124a01f5 pop ebp */
  EBP = (pop32());
  /* 124a01f6 ret  */
  ESPCHK(0x124a0180u, _esp0);
  ESP += 4; return;
}

/* FUN_10010200 @ 0x124a0200 (53 bytes, 23 insns) */
void f_124a0200(void) {
  FTRACE(0x124a0200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a0200 push ebp */
  push32((uint32_t)(EBP));
  /* 124a0201 mov ebp, esp */
  EBP = (ESP);
L_124a0203:;
  /* 124a0203 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0206 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0209 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a020c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 124a020f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a0211 jle 0x124a0233 */
  if ((C.zf||C.sf!=C.of)) goto L_124a0233;
  /* 124a0213 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a0216 push edx */
  push32((uint32_t)(EDX));
  /* 124a0217 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a021a push eax */
  push32((uint32_t)(EAX));
  /* 124a021b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a021e push ecx */
  push32((uint32_t)(ECX));
  /* 124a021f call 0x124a0180 */
  push32(0x124a0224u); f_124a0180();
  /* 124a0224 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0227 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a022a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a022d jne 0x124a0231 */
  if (!C.zf) goto L_124a0231;
  /* 124a022f jmp 0x124a0233 */
  goto L_124a0233;
L_124a0231:;
  /* 124a0231 jmp 0x124a0203 */
  goto L_124a0203;
L_124a0233:;
  /* 124a0233 pop ebp */
  EBP = (pop32());
  /* 124a0234 ret  */
  ESPCHK(0x124a0200u, _esp0);
  ESP += 4; return;
}

/* FUN_10010240 @ 0x124a0240 (74 bytes, 31 insns) */
void f_124a0240(void) {
  FTRACE(0x124a0240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a0240 push ebp */
  push32((uint32_t)(EBP));
  /* 124a0241 mov ebp, esp */
  EBP = (ESP);
  /* 124a0243 push ecx */
  push32((uint32_t)(ECX));
L_124a0244:;
  /* 124a0244 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0247 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a024a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a024d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 124a0250 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a0252 jle 0x124a0286 */
  if ((C.zf||C.sf!=C.of)) goto L_124a0286;
  /* 124a0254 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a0257 push edx */
  push32((uint32_t)(EDX));
  /* 124a0258 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a025b push eax */
  push32((uint32_t)(EAX));
  /* 124a025c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a025f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a0262 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124a0265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a0268 push eax */
  push32((uint32_t)(EAX));
  /* 124a0269 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a026c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a026f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124a0272 call 0x124a0180 */
  push32(0x124a0277u); f_124a0180();
  /* 124a0277 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a027a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a027d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0280 jne 0x124a0284 */
  if (!C.zf) goto L_124a0284;
  /* 124a0282 jmp 0x124a0286 */
  goto L_124a0286;
L_124a0284:;
  /* 124a0284 jmp 0x124a0244 */
  goto L_124a0244;
L_124a0286:;
  /* 124a0286 mov esp, ebp */
  ESP = (EBP);
  /* 124a0288 pop ebp */
  EBP = (pop32());
  /* 124a0289 ret  */
  ESPCHK(0x124a0240u, _esp0);
  ESP += 4; return;
}

/* FUN_10010290 @ 0x124a0290 (26 bytes, 12 insns) */
void f_124a0290(void) {
  FTRACE(0x124a0290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a0290 push ebp */
  push32((uint32_t)(EBP));
  /* 124a0291 mov ebp, esp */
  EBP = (ESP);
  /* 124a0293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0296 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a0298 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a029b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a029e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124a02a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a02a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a02a5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 124a02a8 pop ebp */
  EBP = (pop32());
  /* 124a02a9 ret  */
  ESPCHK(0x124a0290u, _esp0);
  ESP += 4; return;
}

/* FUN_100102b0 @ 0x124a02b0 (31 bytes, 14 insns) */
void f_124a02b0(void) {
  FTRACE(0x124a02b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a02b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a02b1 mov ebp, esp */
  EBP = (ESP);
  /* 124a02b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a02b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a02b8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a02bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a02be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124a02c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a02c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a02c5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a02c8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 124a02ca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124a02cd pop ebp */
  EBP = (pop32());
  /* 124a02ce ret  */
  ESPCHK(0x124a02b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100102d0 @ 0x124a02d0 (27 bytes, 12 insns) */
void f_124a02d0(void) {
  FTRACE(0x124a02d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a02d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a02d1 mov ebp, esp */
  EBP = (ESP);
  /* 124a02d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a02d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a02d8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a02db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a02de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124a02e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a02e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a02e5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 124a02e9 pop ebp */
  EBP = (pop32());
  /* 124a02ea ret  */
  ESPCHK(0x124a02d0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x124a02f0 (145 bytes, 42 insns) */
void f_124a02f0(void) {
  FTRACE(0x124a02f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a02f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a02f1 mov ebp, esp */
  EBP = (ESP);
  /* 124a02f3 push ecx */
  push32((uint32_t)(ECX));
  /* 124a02f4 call 0x124a03a0 */
  push32(0x124a02f9u); f_124a03a0();
  /* 124a02f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a02fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 124a02fe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a0305 jmp 0x124a0310 */
  goto L_124a0310;
L_124a0307:;
  /* 124a0307 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a030a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a030d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124a0310:;
  /* 124a0310 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0314 jae 0x124a033a */
  if (!C.cf) goto L_124a033a;
  /* 124a0316 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a0319 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a031c cmp ecx, dword ptr [eax*8 + 0x124c2fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x124c2fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0323 jne 0x124a0338 */
  if (!C.zf) goto L_124a0338;
  /* 124a0325 call 0x124a0390 */
  push32(0x124a032au); f_124a0390();
  /* 124a032a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a032d mov ecx, dword ptr [edx*8 + 0x124c2fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x124c2fbc)));
  /* 124a0334 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 124a0336 jmp 0x124a037d */
  goto L_124a037d;
L_124a0338:;
  /* 124a0338 jmp 0x124a0307 */
  goto L_124a0307;
L_124a033a:;
  /* 124a033a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a033e jb 0x124a0353 */
  if (C.cf) goto L_124a0353;
  /* 124a0340 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0344 ja 0x124a0353 */
  if ((!C.cf&&!C.zf)) goto L_124a0353;
  /* 124a0346 call 0x124a0390 */
  push32(0x124a034bu); f_124a0390();
  /* 124a034b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 124a0351 jmp 0x124a037d */
  goto L_124a037d;
L_124a0353:;
  /* 124a0353 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a035a jb 0x124a0372 */
  if (C.cf) goto L_124a0372;
  /* 124a035c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0363 ja 0x124a0372 */
  if ((!C.cf&&!C.zf)) goto L_124a0372;
  /* 124a0365 call 0x124a0390 */
  push32(0x124a036au); f_124a0390();
  /* 124a036a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 124a0370 jmp 0x124a037d */
  goto L_124a037d;
L_124a0372:;
  /* 124a0372 call 0x124a0390 */
  push32(0x124a0377u); f_124a0390();
  /* 124a0377 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_124a037d:;
  /* 124a037d mov esp, ebp */
  ESP = (EBP);
  /* 124a037f pop ebp */
  EBP = (pop32());
  /* 124a0380 ret  */
  ESPCHK(0x124a02f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010390 @ 0x124a0390 (13 bytes, 6 insns) */
void f_124a0390(void) {
  FTRACE(0x124a0390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a0390 push ebp */
  push32((uint32_t)(EBP));
  /* 124a0391 mov ebp, esp */
  EBP = (ESP);
  /* 124a0393 call 0x12497f00 */
  push32(0x124a0398u); f_12497f00();
  /* 124a0398 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a039b pop ebp */
  EBP = (pop32());
  /* 124a039c ret  */
  ESPCHK(0x124a0390u, _esp0);
  ESP += 4; return;
}

/* FUN_100103a0 @ 0x124a03a0 (13 bytes, 6 insns) */
void f_124a03a0(void) {
  FTRACE(0x124a03a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a03a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a03a1 mov ebp, esp */
  EBP = (ESP);
  /* 124a03a3 call 0x12497f00 */
  push32(0x124a03a8u); f_12497f00();
  /* 124a03a8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a03ab pop ebp */
  EBP = (pop32());
  /* 124a03ac ret  */
  ESPCHK(0x124a03a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103b0 @ 0x124a03b0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_124a03b0(void) {
  FTRACE(0x124a03b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a03b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a03b1 mov ebp, esp */
  EBP = (ESP);
  /* 124a03b3 push edi */
  push32((uint32_t)(EDI));
  /* 124a03b4 push esi */
  push32((uint32_t)(ESI));
  /* 124a03b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 124a03b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a03bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 124a03be mov eax, ecx */
  EAX = (ECX);
  /* 124a03c0 mov edx, ecx */
  EDX = (ECX);
  /* 124a03c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a03c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a03c6 jbe 0x124a03d0 */
  if ((C.cf||C.zf)) goto L_124a03d0;
  /* 124a03c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a03ca jb 0x124a0548 */
  if (C.cf) goto L_124a0548;
L_124a03d0:;
  /* 124a03d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 124a03d6 jne 0x124a03ec */
  if (!C.zf) goto L_124a03ec;
  /* 124a03d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124a03db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 124a03de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a03e1 jb 0x124a040c */
  if (C.cf) goto L_124a040c;
  /* 124a03e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124a03e5 jmp dword ptr [edx*4 + 0x124a04f8] */
  switch (EDX) {
    case 0: goto L_124a0508;
    case 1: goto L_124a0510;
    case 2: goto L_124a051c;
    case 3: goto L_124a0530;
    default: x86_unimpl("switch@0x124a03e5 out of table"); return;
  }
L_124a03ec:;
  /* 124a03ec mov eax, edi */
  EAX = (EDI);
  /* 124a03ee mov edx, 3 */
  EDX = (0x3u);
  /* 124a03f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a03f6 jb 0x124a0404 */
  if (C.cf) goto L_124a0404;
  /* 124a03f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 124a03fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a03fd jmp dword ptr [eax*4 + 0x124a0410] */
  switch (EAX) {
    case 1: goto L_124a0420;
    case 2: goto L_124a044c;
    case 3: goto L_124a0470;
    default: x86_unimpl("switch@0x124a03fd out of table"); return;
  }
L_124a0404:;
  /* 124a0404 jmp dword ptr [ecx*4 + 0x124a0508] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x124a0508)))); return;
  /* 124a040b nop  */
  /* nop */
L_124a040c:;
  /* 124a040c jmp dword ptr [ecx*4 + 0x124a048c] */
  switch (ECX) {
    case 0: goto L_124a04ef;
    case 1: goto L_124a04dc;
    case 2: goto L_124a04d4;
    case 3: goto L_124a04cc;
    case 4: goto L_124a04c4;
    case 5: goto L_124a04bc;
    case 6: goto L_124a04b4;
    case 7: goto L_124a04ac;
    default: x86_unimpl("switch@0x124a040c out of table"); return;
  }
  /* 124a0413 nop  */
  /* nop */
L_124a0420:;
  /* 124a0420 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124a0422 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124a0424 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124a0426 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124a0429 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124a042c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124a042f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124a0432 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124a0435 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0438 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 124a043b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a043e jb 0x124a040c */
  if (C.cf) goto L_124a040c;
  /* 124a0440 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124a0442 jmp dword ptr [edx*4 + 0x124a04f8] */
  switch (EDX) {
    case 0: goto L_124a0508;
    case 1: goto L_124a0510;
    case 2: goto L_124a051c;
    case 3: goto L_124a0530;
    default: x86_unimpl("switch@0x124a0442 out of table"); return;
  }
  /* 124a0449 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124a044c:;
  /* 124a044c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124a044e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124a0450 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124a0452 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124a0455 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124a0458 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124a045b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124a045e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0461 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0464 jb 0x124a040c */
  if (C.cf) goto L_124a040c;
  /* 124a0466 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124a0468 jmp dword ptr [edx*4 + 0x124a04f8] */
  switch (EDX) {
    case 0: goto L_124a0508;
    case 1: goto L_124a0510;
    case 2: goto L_124a051c;
    case 3: goto L_124a0530;
    default: x86_unimpl("switch@0x124a0468 out of table"); return;
  }
  /* 124a046f nop  */
  /* nop */
L_124a0470:;
  /* 124a0470 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124a0472 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124a0474 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124a0476 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124a0477 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124a047a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 124a047b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a047e jb 0x124a040c */
  if (C.cf) goto L_124a040c;
  /* 124a0480 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124a0482 jmp dword ptr [edx*4 + 0x124a04f8] */
  switch (EDX) {
    case 0: goto L_124a0508;
    case 1: goto L_124a0510;
    case 2: goto L_124a051c;
    case 3: goto L_124a0530;
    default: x86_unimpl("switch@0x124a0482 out of table"); return;
  }
  /* 124a0489 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124a04ac:;
  /* 124a04ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 124a04b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_124a04b4:;
  /* 124a04b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 124a04b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_124a04bc:;
  /* 124a04bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 124a04c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_124a04c4:;
  /* 124a04c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 124a04c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_124a04cc:;
  /* 124a04cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 124a04d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_124a04d4:;
  /* 124a04d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 124a04d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_124a04dc:;
  /* 124a04dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 124a04e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 124a04e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 124a04eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124a04ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_124a04ef:;
  /* 124a04ef jmp dword ptr [edx*4 + 0x124a04f8] */
  switch (EDX) {
    case 0: goto L_124a0508;
    case 1: goto L_124a0510;
    case 2: goto L_124a051c;
    case 3: goto L_124a0530;
    default: x86_unimpl("switch@0x124a04ef out of table"); return;
  }
  /* 124a04f6 mov edi, edi */
  EDI = (EDI);
L_124a0508:;
  /* 124a0508 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a050b pop esi */
  ESI = (pop32());
  /* 124a050c pop edi */
  EDI = (pop32());
  /* 124a050d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124a050e ret  */
  ESPCHK(0x124a03b0u, _esp0);
  ESP += 4; return;
  /* 124a050f nop  */
  /* nop */
L_124a0510:;
  /* 124a0510 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124a0512 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124a0514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0517 pop esi */
  ESI = (pop32());
  /* 124a0518 pop edi */
  EDI = (pop32());
  /* 124a0519 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124a051a ret  */
  ESPCHK(0x124a03b0u, _esp0);
  ESP += 4; return;
  /* 124a051b nop  */
  /* nop */
L_124a051c:;
  /* 124a051c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124a051e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124a0520 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124a0523 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124a0526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0529 pop esi */
  ESI = (pop32());
  /* 124a052a pop edi */
  EDI = (pop32());
  /* 124a052b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124a052c ret  */
  ESPCHK(0x124a03b0u, _esp0);
  ESP += 4; return;
  /* 124a052d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124a0530:;
  /* 124a0530 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124a0532 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124a0534 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124a0537 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124a053a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124a053d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124a0540 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0543 pop esi */
  ESI = (pop32());
  /* 124a0544 pop edi */
  EDI = (pop32());
  /* 124a0545 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124a0546 ret  */
  ESPCHK(0x124a03b0u, _esp0);
  ESP += 4; return;
  /* 124a0547 nop  */
  /* nop */
L_124a0548:;
  /* 124a0548 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 124a054c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 124a0550 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 124a0556 jne 0x124a057c */
  if (!C.zf) goto L_124a057c;
  /* 124a0558 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124a055b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 124a055e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0561 jb 0x124a0570 */
  if (C.cf) goto L_124a0570;
  /* 124a0563 std  */
  C.df=1;
  /* 124a0564 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124a0566 cld  */
  C.df=0;
  /* 124a0567 jmp dword ptr [edx*4 + 0x124a0690] */
  switch (EDX) {
    case 0: goto L_124a06a0;
    case 1: goto L_124a06a8;
    case 2: goto L_124a06b8;
    case 3: goto L_124a06cc;
    default: x86_unimpl("switch@0x124a0567 out of table"); return;
  }
  /* 124a056e mov edi, edi */
  EDI = (EDI);
L_124a0570:;
  /* 124a0570 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a0572 jmp dword ptr [ecx*4 + 0x124a0640] */
  switch (ECX) {
    case 0: goto L_124a0687;
    default: x86_unimpl("switch@0x124a0572 out of table"); return;
  }
  /* 124a0579 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124a057c:;
  /* 124a057c mov eax, edi */
  EAX = (EDI);
  /* 124a057e mov edx, 3 */
  EDX = (0x3u);
  /* 124a0583 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0586 jb 0x124a0594 */
  if (C.cf) goto L_124a0594;
  /* 124a0588 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 124a058b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a058d jmp dword ptr [eax*4 + 0x124a0598] */
  switch (EAX) {
    case 1: goto L_124a05a8;
    case 2: goto L_124a05c8;
    case 3: goto L_124a05f0;
    default: x86_unimpl("switch@0x124a058d out of table"); return;
  }
L_124a0594:;
  /* 124a0594 jmp dword ptr [ecx*4 + 0x124a0690] */
  switch (ECX) {
    case 0: goto L_124a06a0;
    case 1: goto L_124a06a8;
    case 2: goto L_124a06b8;
    case 3: goto L_124a06cc;
    default: x86_unimpl("switch@0x124a0594 out of table"); return;
  }
  /* 124a059b nop  */
  /* nop */
L_124a05a8:;
  /* 124a05a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124a05ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124a05ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124a05b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 124a05b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124a05b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 124a05b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a05b8 jb 0x124a0570 */
  if (C.cf) goto L_124a0570;
  /* 124a05ba std  */
  C.df=1;
  /* 124a05bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124a05bd cld  */
  C.df=0;
  /* 124a05be jmp dword ptr [edx*4 + 0x124a0690] */
  switch (EDX) {
    case 0: goto L_124a06a0;
    case 1: goto L_124a06a8;
    case 2: goto L_124a06b8;
    case 3: goto L_124a06cc;
    default: x86_unimpl("switch@0x124a05be out of table"); return;
  }
  /* 124a05c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124a05c8:;
  /* 124a05c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124a05cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124a05cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124a05d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124a05d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124a05d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124a05d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a05dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a05df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a05e2 jb 0x124a0570 */
  if (C.cf) goto L_124a0570;
  /* 124a05e4 std  */
  C.df=1;
  /* 124a05e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124a05e7 cld  */
  C.df=0;
  /* 124a05e8 jmp dword ptr [edx*4 + 0x124a0690] */
  switch (EDX) {
    case 0: goto L_124a06a0;
    case 1: goto L_124a06a8;
    case 2: goto L_124a06b8;
    case 3: goto L_124a06cc;
    default: x86_unimpl("switch@0x124a05e8 out of table"); return;
  }
  /* 124a05ef nop  */
  /* nop */
L_124a05f0:;
  /* 124a05f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124a05f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124a05f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124a05f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124a05fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124a05fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124a0601 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124a0604 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124a0607 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a060a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a060d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0610 jb 0x124a0570 */
  if (C.cf) goto L_124a0570;
  /* 124a0616 std  */
  C.df=1;
  /* 124a0617 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124a0619 cld  */
  C.df=0;
  /* 124a061a jmp dword ptr [edx*4 + 0x124a0690] */
  switch (EDX) {
    case 0: goto L_124a06a0;
    case 1: goto L_124a06a8;
    case 2: goto L_124a06b8;
    case 3: goto L_124a06cc;
    default: x86_unimpl("switch@0x124a061a out of table"); return;
  }
  /* 124a0621 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 124a0624 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 124a0625 push es */
  push32((uint32_t)(C.seg_es));
  /* 124a0626 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 124a0627 adc cl, byte ptr [esi + eax + 0x4a] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(ESI + EAX*1 + 0x4a))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 124a062b adc dl, byte ptr [esi + eax + 0x4a] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ESI + EAX*1 + 0x4a))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 124a062f adc bl, byte ptr [esi + eax + 0x4a] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(ESI + EAX*1 + 0x4a))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 124a0633 adc ah, byte ptr [esi + eax + 0x4a] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ESI + EAX*1 + 0x4a))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 124a0637 adc ch, byte ptr [esi + eax + 0x4a] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(ESI + EAX*1 + 0x4a))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 124a063b adc dh, byte ptr [esi + eax + 0x4a] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(ESI + EAX*1 + 0x4a))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 124a0644 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 124a0648 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 124a064c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 124a0650 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 124a0654 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 124a0658 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 124a065c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 124a0660 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 124a0664 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 124a0668 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 124a066c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 124a0670 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 124a0674 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 124a0678 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 124a067c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 124a0683 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0685 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_124a0687:;
  /* 124a0687 jmp dword ptr [edx*4 + 0x124a0690] */
  switch (EDX) {
    case 0: goto L_124a06a0;
    case 1: goto L_124a06a8;
    case 2: goto L_124a06b8;
    case 3: goto L_124a06cc;
    default: x86_unimpl("switch@0x124a0687 out of table"); return;
  }
  /* 124a068e mov edi, edi */
  EDI = (EDI);
L_124a06a0:;
  /* 124a06a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a06a3 pop esi */
  ESI = (pop32());
  /* 124a06a4 pop edi */
  EDI = (pop32());
  /* 124a06a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124a06a6 ret  */
  ESPCHK(0x124a03b0u, _esp0);
  ESP += 4; return;
  /* 124a06a7 nop  */
  /* nop */
L_124a06a8:;
  /* 124a06a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124a06ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124a06ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a06b1 pop esi */
  ESI = (pop32());
  /* 124a06b2 pop edi */
  EDI = (pop32());
  /* 124a06b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124a06b4 ret  */
  ESPCHK(0x124a03b0u, _esp0);
  ESP += 4; return;
  /* 124a06b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124a06b8:;
  /* 124a06b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124a06bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124a06be mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124a06c1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124a06c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a06c7 pop esi */
  ESI = (pop32());
  /* 124a06c8 pop edi */
  EDI = (pop32());
  /* 124a06c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124a06ca ret  */
  ESPCHK(0x124a03b0u, _esp0);
  ESP += 4; return;
  /* 124a06cb nop  */
  /* nop */
L_124a06cc:;
  /* 124a06cc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124a06cf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124a06d2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124a06d5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124a06d8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124a06db mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124a06de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a06e1 pop esi */
  ESI = (pop32());
  /* 124a06e2 pop edi */
  EDI = (pop32());
  /* 124a06e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124a06e4 ret  */
  ESPCHK(0x124a03b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100106f0 @ 0x124a06f0 (421 bytes, 148 insns) */
void f_124a06f0(void) {
  FTRACE(0x124a06f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a06f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a06f1 mov ebp, esp */
  EBP = (ESP);
  /* 124a06f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124a06f5 push 0x124c0890 */
  push32((uint32_t)(0x124c0890u));
  /* 124a06fa push 0x124a15c8 */
  push32((uint32_t)(0x124a15c8u));
  /* 124a06ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 124a0705 push eax */
  push32((uint32_t)(EAX));
  /* 124a0706 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 124a070d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0710 push ebx */
  push32((uint32_t)(EBX));
  /* 124a0711 push esi */
  push32((uint32_t)(ESI));
  /* 124a0712 push edi */
  push32((uint32_t)(EDI));
  /* 124a0713 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a0716 cmp dword ptr [0x124c4a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a071d jne 0x124a076e */
  if (!C.zf) goto L_124a076e;
  /* 124a071f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 124a0722 push eax */
  push32((uint32_t)(EAX));
  /* 124a0723 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a0725 push 0x124c088c */
  push32((uint32_t)(0x124c088cu));
  /* 124a072a push 1 */
  push32((uint32_t)(0x1u));
  /* 124a072c call dword ptr [0x124c72f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72f4))), 0x124a0732u);
  /* 124a0732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a0734 je 0x124a0742 */
  if (C.zf) goto L_124a0742;
  /* 124a0736 mov dword ptr [0x124c4a3c], 1 */
  w32((uint32_t)(0x124c4a3c), (0x1u));
  /* 124a0740 jmp 0x124a076e */
  goto L_124a076e;
L_124a0742:;
  /* 124a0742 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 124a0745 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0746 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a0748 push 0x124c0888 */
  push32((uint32_t)(0x124c0888u));
  /* 124a074d push 1 */
  push32((uint32_t)(0x1u));
  /* 124a074f push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0751 call dword ptr [0x124c72f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72f8))), 0x124a0757u);
  /* 124a0757 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a0759 je 0x124a0767 */
  if (C.zf) goto L_124a0767;
  /* 124a075b mov dword ptr [0x124c4a3c], 2 */
  w32((uint32_t)(0x124c4a3c), (0x2u));
  /* 124a0765 jmp 0x124a076e */
  goto L_124a076e;
L_124a0767:;
  /* 124a0767 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a0769 jmp 0x124a0898 */
  goto L_124a0898;
L_124a076e:;
  /* 124a076e cmp dword ptr [0x124c4a3c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0775 jne 0x124a07a5 */
  if (!C.zf) goto L_124a07a5;
  /* 124a0777 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a077b jne 0x124a0786 */
  if (!C.zf) goto L_124a0786;
  /* 124a077d mov edx, dword ptr [0x124c4a48] */
  EDX = (r32((uint32_t)(0x124c4a48)));
  /* 124a0783 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_124a0786:;
  /* 124a0786 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a0789 push eax */
  push32((uint32_t)(EAX));
  /* 124a078a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a078d push ecx */
  push32((uint32_t)(ECX));
  /* 124a078e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0791 push edx */
  push32((uint32_t)(EDX));
  /* 124a0792 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0795 push eax */
  push32((uint32_t)(EAX));
  /* 124a0796 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124a0799 push ecx */
  push32((uint32_t)(ECX));
  /* 124a079a call dword ptr [0x124c72f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72f8))), 0x124a07a0u);
  /* 124a07a0 jmp 0x124a0898 */
  goto L_124a0898;
L_124a07a5:;
  /* 124a07a5 cmp dword ptr [0x124c4a3c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a3c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a07ac jne 0x124a0896 */
  if (!C.zf) goto L_124a0896;
  /* 124a07b2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a07b6 jne 0x124a07c1 */
  if (!C.zf) goto L_124a07c1;
  /* 124a07b8 mov edx, dword ptr [0x124c4a58] */
  EDX = (r32((uint32_t)(0x124c4a58)));
  /* 124a07be mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_124a07c1:;
  /* 124a07c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a07c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a07c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a07c8 push eax */
  push32((uint32_t)(EAX));
  /* 124a07c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a07cc push ecx */
  push32((uint32_t)(ECX));
  /* 124a07cd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 124a07d0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a07d2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a07d4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 124a07d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a07da push edx */
  push32((uint32_t)(EDX));
  /* 124a07db mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a07de push eax */
  push32((uint32_t)(EAX));
  /* 124a07df call dword ptr [0x124c72fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72fc))), 0x124a07e5u);
  /* 124a07e5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124a07e8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a07ec jne 0x124a07f5 */
  if (!C.zf) goto L_124a07f5;
  /* 124a07ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a07f0 jmp 0x124a0898 */
  goto L_124a0898;
L_124a07f5:;
  /* 124a07f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a07fc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a07ff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124a0801 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0804 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124a0806 call 0x1249b660 */
  push32(0x124a080bu); f_1249b660();
  /* 124a080b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 124a080e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a0811 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124a0814 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124a0817 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a081a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 124a081c push edx */
  push32((uint32_t)(EDX));
  /* 124a081d push 0 */
  push32((uint32_t)(0x0u));
  /* 124a081f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a0822 push eax */
  push32((uint32_t)(EAX));
  /* 124a0823 call 0x1249c230 */
  push32(0x124a0828u); f_1249c230();
  /* 124a0828 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a082b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124a0832 jmp 0x124a084b */
  goto L_124a084b;
  /* 124a0834 mov eax, 1 */
  EAX = (0x1u);
  /* 124a0839 ret  */
  ESPCHK(0x124a06f0u, _esp0);
  ESP += 4; return;
  /* 124a083a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124a083d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 124a0844 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124a084b:;
  /* 124a084b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a084f jne 0x124a0855 */
  if (!C.zf) goto L_124a0855;
  /* 124a0851 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a0853 jmp 0x124a0898 */
  goto L_124a0898;
L_124a0855:;
  /* 124a0855 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a0858 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0859 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a085c push edx */
  push32((uint32_t)(EDX));
  /* 124a085d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a0860 push eax */
  push32((uint32_t)(EAX));
  /* 124a0861 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0864 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0865 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a0867 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a086a push edx */
  push32((uint32_t)(EDX));
  /* 124a086b call dword ptr [0x124c72fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72fc))), 0x124a0871u);
  /* 124a0871 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124a0874 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0878 jne 0x124a087e */
  if (!C.zf) goto L_124a087e;
  /* 124a087a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a087c jmp 0x124a0898 */
  goto L_124a0898;
L_124a087e:;
  /* 124a087e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a0881 push eax */
  push32((uint32_t)(EAX));
  /* 124a0882 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a0885 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0886 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a0889 push edx */
  push32((uint32_t)(EDX));
  /* 124a088a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a088d push eax */
  push32((uint32_t)(EAX));
  /* 124a088e call dword ptr [0x124c72f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72f4))), 0x124a0894u);
  /* 124a0894 jmp 0x124a0898 */
  goto L_124a0898;
L_124a0896:;
  /* 124a0896 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a0898:;
  /* 124a0898 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 124a089b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a089e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124a08a5 pop edi */
  EDI = (pop32());
  /* 124a08a6 pop esi */
  ESI = (pop32());
  /* 124a08a7 pop ebx */
  EBX = (pop32());
  /* 124a08a8 mov esp, ebp */
  ESP = (EBP);
  /* 124a08aa pop ebp */
  EBP = (pop32());
  /* 124a08ab ret  */
  ESPCHK(0x124a06f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100108b0 @ 0x124a08b0 (727 bytes, 263 insns) */
void f_124a08b0(void) {
  FTRACE(0x124a08b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a08b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a08b1 mov ebp, esp */
  EBP = (ESP);
  /* 124a08b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124a08b5 push 0x124c08a0 */
  push32((uint32_t)(0x124c08a0u));
  /* 124a08ba push 0x124a15c8 */
  push32((uint32_t)(0x124a15c8u));
  /* 124a08bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 124a08c5 push eax */
  push32((uint32_t)(EAX));
  /* 124a08c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 124a08cd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a08d0 push ebx */
  push32((uint32_t)(EBX));
  /* 124a08d1 push esi */
  push32((uint32_t)(ESI));
  /* 124a08d2 push edi */
  push32((uint32_t)(EDI));
  /* 124a08d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a08d6 cmp dword ptr [0x124c4a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a08dd jne 0x124a0936 */
  if (!C.zf) goto L_124a0936;
  /* 124a08df push 0 */
  push32((uint32_t)(0x0u));
  /* 124a08e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a08e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a08e5 push 0x124c088c */
  push32((uint32_t)(0x124c088cu));
  /* 124a08ea push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124a08ef push 0 */
  push32((uint32_t)(0x0u));
  /* 124a08f1 call dword ptr [0x124c72ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72ec))), 0x124a08f7u);
  /* 124a08f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a08f9 je 0x124a0907 */
  if (C.zf) goto L_124a0907;
  /* 124a08fb mov dword ptr [0x124c4a60], 1 */
  w32((uint32_t)(0x124c4a60), (0x1u));
  /* 124a0905 jmp 0x124a0936 */
  goto L_124a0936;
L_124a0907:;
  /* 124a0907 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0909 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a090b push 1 */
  push32((uint32_t)(0x1u));
  /* 124a090d push 0x124c0888 */
  push32((uint32_t)(0x124c0888u));
  /* 124a0912 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124a0917 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0919 call dword ptr [0x124c72f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72f0))), 0x124a091fu);
  /* 124a091f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a0921 je 0x124a092f */
  if (C.zf) goto L_124a092f;
  /* 124a0923 mov dword ptr [0x124c4a60], 2 */
  w32((uint32_t)(0x124c4a60), (0x2u));
  /* 124a092d jmp 0x124a0936 */
  goto L_124a0936;
L_124a092f:;
  /* 124a092f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a0931 jmp 0x124a0ba1 */
  goto L_124a0ba1;
L_124a0936:;
  /* 124a0936 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a093a jle 0x124a094f */
  if ((C.zf||C.sf!=C.of)) goto L_124a094f;
  /* 124a093c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a093f push eax */
  push32((uint32_t)(EAX));
  /* 124a0940 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a0943 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0944 call 0x124a0bc0 */
  push32(0x124a0949u); f_124a0bc0();
  /* 124a0949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a094c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_124a094f:;
  /* 124a094f cmp dword ptr [0x124c4a60], 2 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a60))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0956 jne 0x124a097b */
  if (!C.zf) goto L_124a097b;
  /* 124a0958 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124a095b push edx */
  push32((uint32_t)(EDX));
  /* 124a095c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a095f push eax */
  push32((uint32_t)(EAX));
  /* 124a0960 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a0963 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0964 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a0967 push edx */
  push32((uint32_t)(EDX));
  /* 124a0968 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a096b push eax */
  push32((uint32_t)(EAX));
  /* 124a096c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a096f push ecx */
  push32((uint32_t)(ECX));
  /* 124a0970 call dword ptr [0x124c72f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72f0))), 0x124a0976u);
  /* 124a0976 jmp 0x124a0ba1 */
  goto L_124a0ba1;
L_124a097b:;
  /* 124a097b cmp dword ptr [0x124c4a60], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a60))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0982 jne 0x124a0b9f */
  if (!C.zf) goto L_124a0b9f;
  /* 124a0988 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a098c jne 0x124a0997 */
  if (!C.zf) goto L_124a0997;
  /* 124a098e mov edx, dword ptr [0x124c4a58] */
  EDX = (r32((uint32_t)(0x124c4a58)));
  /* 124a0994 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_124a0997:;
  /* 124a0997 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0999 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a099b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a099e push eax */
  push32((uint32_t)(EAX));
  /* 124a099f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a09a2 push ecx */
  push32((uint32_t)(ECX));
  /* 124a09a3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 124a09a6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a09a8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a09aa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 124a09ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a09b0 push edx */
  push32((uint32_t)(EDX));
  /* 124a09b1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 124a09b4 push eax */
  push32((uint32_t)(EAX));
  /* 124a09b5 call dword ptr [0x124c72fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72fc))), 0x124a09bbu);
  /* 124a09bb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124a09be cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a09c2 jne 0x124a09cb */
  if (!C.zf) goto L_124a09cb;
  /* 124a09c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a09c6 jmp 0x124a0ba1 */
  goto L_124a0ba1;
L_124a09cb:;
  /* 124a09cb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a09d2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a09d5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124a09d7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a09da and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124a09dc call 0x1249b660 */
  push32(0x124a09e1u); f_1249b660();
  /* 124a09e1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 124a09e4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a09e7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124a09ea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124a09ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124a09f4 jmp 0x124a0a0d */
  goto L_124a0a0d;
  /* 124a09f6 mov eax, 1 */
  EAX = (0x1u);
  /* 124a09fb ret  */
  ESPCHK(0x124a08b0u, _esp0);
  ESP += 4; return;
  /* 124a09fc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124a09ff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 124a0a06 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124a0a0d:;
  /* 124a0a0d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0a11 jne 0x124a0a1a */
  if (!C.zf) goto L_124a0a1a;
  /* 124a0a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a0a15 jmp 0x124a0ba1 */
  goto L_124a0ba1;
L_124a0a1a:;
  /* 124a0a1a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a0a1d push edx */
  push32((uint32_t)(EDX));
  /* 124a0a1e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a0a21 push eax */
  push32((uint32_t)(EAX));
  /* 124a0a22 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a0a25 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0a26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a0a29 push edx */
  push32((uint32_t)(EDX));
  /* 124a0a2a push 1 */
  push32((uint32_t)(0x1u));
  /* 124a0a2c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 124a0a2f push eax */
  push32((uint32_t)(EAX));
  /* 124a0a30 call dword ptr [0x124c72fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72fc))), 0x124a0a36u);
  /* 124a0a36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a0a38 jne 0x124a0a41 */
  if (!C.zf) goto L_124a0a41;
  /* 124a0a3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a0a3c jmp 0x124a0ba1 */
  goto L_124a0ba1;
L_124a0a41:;
  /* 124a0a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0a45 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a0a48 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0a49 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a0a4c push edx */
  push32((uint32_t)(EDX));
  /* 124a0a4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0a50 push eax */
  push32((uint32_t)(EAX));
  /* 124a0a51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0a54 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0a55 call dword ptr [0x124c72ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72ec))), 0x124a0a5bu);
  /* 124a0a5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124a0a5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0a62 jne 0x124a0a6b */
  if (!C.zf) goto L_124a0a6b;
  /* 124a0a64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a0a66 jmp 0x124a0ba1 */
  goto L_124a0ba1;
L_124a0a6b:;
  /* 124a0a6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0a6e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 124a0a74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a0a76 je 0x124a0abb */
  if (C.zf) goto L_124a0abb;
  /* 124a0a78 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0a7c je 0x124a0ab6 */
  if (C.zf) goto L_124a0ab6;
  /* 124a0a7e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a0a81 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0a84 jle 0x124a0a8d */
  if ((C.zf||C.sf!=C.of)) goto L_124a0a8d;
  /* 124a0a86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a0a88 jmp 0x124a0ba1 */
  goto L_124a0ba1;
L_124a0a8d:;
  /* 124a0a8d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124a0a90 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0a91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a0a94 push edx */
  push32((uint32_t)(EDX));
  /* 124a0a95 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a0a98 push eax */
  push32((uint32_t)(EAX));
  /* 124a0a99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a0a9c push ecx */
  push32((uint32_t)(ECX));
  /* 124a0a9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0aa0 push edx */
  push32((uint32_t)(EDX));
  /* 124a0aa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0aa4 push eax */
  push32((uint32_t)(EAX));
  /* 124a0aa5 call dword ptr [0x124c72ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72ec))), 0x124a0aabu);
  /* 124a0aab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a0aad jne 0x124a0ab6 */
  if (!C.zf) goto L_124a0ab6;
  /* 124a0aaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a0ab1 jmp 0x124a0ba1 */
  goto L_124a0ba1;
L_124a0ab6:;
  /* 124a0ab6 jmp 0x124a0b9a */
  goto L_124a0b9a;
L_124a0abb:;
  /* 124a0abb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a0abe mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 124a0ac1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124a0ac8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124a0acb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124a0acd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0ad0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124a0ad2 call 0x1249b660 */
  push32(0x124a0ad7u); f_1249b660();
  /* 124a0ad7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 124a0ada mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124a0add mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 124a0ae0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 124a0ae3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124a0aea jmp 0x124a0b03 */
  goto L_124a0b03;
  /* 124a0aec mov eax, 1 */
  EAX = (0x1u);
  /* 124a0af1 ret  */
  ESPCHK(0x124a08b0u, _esp0);
  ESP += 4; return;
  /* 124a0af2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124a0af5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124a0afc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124a0b03:;
  /* 124a0b03 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0b07 jne 0x124a0b10 */
  if (!C.zf) goto L_124a0b10;
  /* 124a0b09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a0b0b jmp 0x124a0ba1 */
  goto L_124a0ba1;
L_124a0b10:;
  /* 124a0b10 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124a0b13 push eax */
  push32((uint32_t)(EAX));
  /* 124a0b14 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a0b17 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0b18 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a0b1b push edx */
  push32((uint32_t)(EDX));
  /* 124a0b1c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a0b1f push eax */
  push32((uint32_t)(EAX));
  /* 124a0b20 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0b23 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0b24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0b27 push edx */
  push32((uint32_t)(EDX));
  /* 124a0b28 call dword ptr [0x124c72ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72ec))), 0x124a0b2eu);
  /* 124a0b2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a0b30 jne 0x124a0b36 */
  if (!C.zf) goto L_124a0b36;
  /* 124a0b32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a0b34 jmp 0x124a0ba1 */
  goto L_124a0ba1;
L_124a0b36:;
  /* 124a0b36 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0b3a jne 0x124a0b6a */
  if (!C.zf) goto L_124a0b6a;
  /* 124a0b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0b44 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124a0b47 push eax */
  push32((uint32_t)(EAX));
  /* 124a0b48 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a0b4b push ecx */
  push32((uint32_t)(ECX));
  /* 124a0b4c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124a0b51 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 124a0b54 push edx */
  push32((uint32_t)(EDX));
  /* 124a0b55 call dword ptr [0x124c73b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c73b0))), 0x124a0b5bu);
  /* 124a0b5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124a0b5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0b62 jne 0x124a0b68 */
  if (!C.zf) goto L_124a0b68;
  /* 124a0b64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a0b66 jmp 0x124a0ba1 */
  goto L_124a0ba1;
L_124a0b68:;
  /* 124a0b68 jmp 0x124a0b9a */
  goto L_124a0b9a;
L_124a0b6a:;
  /* 124a0b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0b6c push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0b6e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124a0b71 push eax */
  push32((uint32_t)(EAX));
  /* 124a0b72 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124a0b75 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0b76 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124a0b79 push edx */
  push32((uint32_t)(EDX));
  /* 124a0b7a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a0b7d push eax */
  push32((uint32_t)(EAX));
  /* 124a0b7e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124a0b83 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 124a0b86 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0b87 call dword ptr [0x124c73b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c73b0))), 0x124a0b8du);
  /* 124a0b8d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124a0b90 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0b94 jne 0x124a0b9a */
  if (!C.zf) goto L_124a0b9a;
  /* 124a0b96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a0b98 jmp 0x124a0ba1 */
  goto L_124a0ba1;
L_124a0b9a:;
  /* 124a0b9a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a0b9d jmp 0x124a0ba1 */
  goto L_124a0ba1;
L_124a0b9f:;
  /* 124a0b9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a0ba1:;
  /* 124a0ba1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 124a0ba4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a0ba7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124a0bae pop edi */
  EDI = (pop32());
  /* 124a0baf pop esi */
  ESI = (pop32());
  /* 124a0bb0 pop ebx */
  EBX = (pop32());
  /* 124a0bb1 mov esp, ebp */
  ESP = (EBP);
  /* 124a0bb3 pop ebp */
  EBP = (pop32());
  /* 124a0bb4 ret  */
  ESPCHK(0x124a08b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bc0 @ 0x124a0bc0 (80 bytes, 32 insns) */
void f_124a0bc0(void) {
  FTRACE(0x124a0bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a0bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a0bc1 mov ebp, esp */
  EBP = (ESP);
  /* 124a0bc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a0bc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0bc9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a0bcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0bcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124a0bd2:;
  /* 124a0bd2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a0bd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a0bd8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a0bdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a0bde test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a0be0 je 0x124a0bf7 */
  if (C.zf) goto L_124a0bf7;
  /* 124a0be2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a0be5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a0be8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a0bea je 0x124a0bf7 */
  if (C.zf) goto L_124a0bf7;
  /* 124a0bec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a0bef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0bf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a0bf5 jmp 0x124a0bd2 */
  goto L_124a0bd2;
L_124a0bf7:;
  /* 124a0bf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a0bfa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a0bfd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a0bff jne 0x124a0c09 */
  if (!C.zf) goto L_124a0c09;
  /* 124a0c01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a0c04 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a0c07 jmp 0x124a0c0c */
  goto L_124a0c0c;
L_124a0c09:;
  /* 124a0c09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_124a0c0c:;
  /* 124a0c0c mov esp, ebp */
  ESP = (EBP);
  /* 124a0c0e pop ebp */
  EBP = (pop32());
  /* 124a0c0f ret  */
  ESPCHK(0x124a0bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c10 @ 0x124a0c10 (130 bytes, 43 insns) */
void f_124a0c10(void) {
  FTRACE(0x124a0c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a0c10 push ebp */
  push32((uint32_t)(EBP));
  /* 124a0c11 mov ebp, esp */
  EBP = (ESP);
  /* 124a0c13 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0c14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0c17 cmp eax, dword ptr [0x124c635c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c635c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0c1d jae 0x124a0c41 */
  if (!C.cf) goto L_124a0c41;
  /* 124a0c1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0c22 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a0c25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0c28 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124a0c2b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a0c2e mov eax, dword ptr [ecx*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124c6220)));
  /* 124a0c35 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124a0c3a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124a0c3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a0c3f jne 0x124a0c5c */
  if (!C.zf) goto L_124a0c5c;
L_124a0c41:;
  /* 124a0c41 call 0x124a0390 */
  push32(0x124a0c46u); f_124a0390();
  /* 124a0c46 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124a0c4c call 0x124a03a0 */
  push32(0x124a0c51u); f_124a03a0();
  /* 124a0c51 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124a0c57 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a0c5a jmp 0x124a0c8e */
  goto L_124a0c8e;
L_124a0c5c:;
  /* 124a0c5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0c5f push edx */
  push32((uint32_t)(EDX));
  /* 124a0c60 call 0x124a1bb0 */
  push32(0x124a0c65u); f_124a1bb0();
  /* 124a0c65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0c68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a0c6b push eax */
  push32((uint32_t)(EAX));
  /* 124a0c6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0c6f push ecx */
  push32((uint32_t)(ECX));
  /* 124a0c70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0c73 push edx */
  push32((uint32_t)(EDX));
  /* 124a0c74 call 0x124a0ca0 */
  push32(0x124a0c79u); f_124a0ca0();
  /* 124a0c79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0c7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a0c7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0c82 push eax */
  push32((uint32_t)(EAX));
  /* 124a0c83 call 0x124a1c40 */
  push32(0x124a0c88u); f_124a1c40();
  /* 124a0c88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0c8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124a0c8e:;
  /* 124a0c8e mov esp, ebp */
  ESP = (EBP);
  /* 124a0c90 pop ebp */
  EBP = (pop32());
  /* 124a0c91 ret  */
  ESPCHK(0x124a0c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ca0 @ 0x124a0ca0 (178 bytes, 56 insns) */
void f_124a0ca0(void) {
  FTRACE(0x124a0ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a0ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a0ca1 mov ebp, esp */
  EBP = (ESP);
  /* 124a0ca3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a0ca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0ca9 push eax */
  push32((uint32_t)(EAX));
  /* 124a0caa call 0x124a1a30 */
  push32(0x124a0cafu); f_124a1a30();
  /* 124a0caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0cb2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a0cb5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0cb9 jne 0x124a0cce */
  if (!C.zf) goto L_124a0cce;
  /* 124a0cbb call 0x124a0390 */
  push32(0x124a0cc0u); f_124a0390();
  /* 124a0cc0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124a0cc6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a0cc9 jmp 0x124a0d4e */
  goto L_124a0d4e;
L_124a0cce:;
  /* 124a0cce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a0cd1 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0cd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0cd4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0cd7 push edx */
  push32((uint32_t)(EDX));
  /* 124a0cd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a0cdb push eax */
  push32((uint32_t)(EAX));
  /* 124a0cdc call dword ptr [0x124c72e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72e8))), 0x124a0ce2u);
  /* 124a0ce2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a0ce5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0ce9 jne 0x124a0cf6 */
  if (!C.zf) goto L_124a0cf6;
  /* 124a0ceb call dword ptr [0x124c7388] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7388))), 0x124a0cf1u);
  /* 124a0cf1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a0cf4 jmp 0x124a0cfd */
  goto L_124a0cfd;
L_124a0cf6:;
  /* 124a0cf6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124a0cfd:;
  /* 124a0cfd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0d01 je 0x124a0d14 */
  if (C.zf) goto L_124a0d14;
  /* 124a0d03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a0d06 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0d07 call 0x124a02f0 */
  push32(0x124a0d0cu); f_124a02f0();
  /* 124a0d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0d0f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a0d12 jmp 0x124a0d4e */
  goto L_124a0d4e;
L_124a0d14:;
  /* 124a0d14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0d17 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 124a0d1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0d1d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 124a0d20 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a0d23 mov ecx, dword ptr [edx*4 + 0x124c6220] */
  ECX = (r32((uint32_t)(EDX*4 + 0x124c6220)));
  /* 124a0d2a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 124a0d2e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 124a0d31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0d34 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124a0d37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0d3a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124a0d3d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a0d40 mov eax, dword ptr [eax*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(EAX*4 + 0x124c6220)));
  /* 124a0d47 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 124a0d4b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124a0d4e:;
  /* 124a0d4e mov esp, ebp */
  ESP = (EBP);
  /* 124a0d50 pop ebp */
  EBP = (pop32());
  /* 124a0d51 ret  */
  ESPCHK(0x124a0ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d60 @ 0x124a0d60 (130 bytes, 43 insns) */
void f_124a0d60(void) {
  FTRACE(0x124a0d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a0d60 push ebp */
  push32((uint32_t)(EBP));
  /* 124a0d61 mov ebp, esp */
  EBP = (ESP);
  /* 124a0d63 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0d64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0d67 cmp eax, dword ptr [0x124c635c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c635c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0d6d jae 0x124a0d91 */
  if (!C.cf) goto L_124a0d91;
  /* 124a0d6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0d72 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a0d75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0d78 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124a0d7b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a0d7e mov eax, dword ptr [ecx*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124c6220)));
  /* 124a0d85 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124a0d8a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124a0d8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a0d8f jne 0x124a0dac */
  if (!C.zf) goto L_124a0dac;
L_124a0d91:;
  /* 124a0d91 call 0x124a0390 */
  push32(0x124a0d96u); f_124a0390();
  /* 124a0d96 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124a0d9c call 0x124a03a0 */
  push32(0x124a0da1u); f_124a03a0();
  /* 124a0da1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124a0da7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a0daa jmp 0x124a0dde */
  goto L_124a0dde;
L_124a0dac:;
  /* 124a0dac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0daf push edx */
  push32((uint32_t)(EDX));
  /* 124a0db0 call 0x124a1bb0 */
  push32(0x124a0db5u); f_124a1bb0();
  /* 124a0db5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0db8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a0dbb push eax */
  push32((uint32_t)(EAX));
  /* 124a0dbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0dbf push ecx */
  push32((uint32_t)(ECX));
  /* 124a0dc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0dc3 push edx */
  push32((uint32_t)(EDX));
  /* 124a0dc4 call 0x124a0df0 */
  push32(0x124a0dc9u); f_124a0df0();
  /* 124a0dc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0dcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a0dcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0dd2 push eax */
  push32((uint32_t)(EAX));
  /* 124a0dd3 call 0x124a1c40 */
  push32(0x124a0dd8u); f_124a1c40();
  /* 124a0dd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0ddb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124a0dde:;
  /* 124a0dde mov esp, ebp */
  ESP = (EBP);
  /* 124a0de0 pop ebp */
  EBP = (pop32());
  /* 124a0de1 ret  */
  ESPCHK(0x124a0d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010df0 @ 0x124a0df0 (627 bytes, 182 insns) */
void f_124a0df0(void) {
  FTRACE(0x124a0df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a0df0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a0df1 mov ebp, esp */
  EBP = (ESP);
  /* 124a0df3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a0df9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124a0e00 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a0e03 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 124a0e09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0e0d jne 0x124a0e16 */
  if (!C.zf) goto L_124a0e16;
  /* 124a0e0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a0e11 jmp 0x124a105f */
  goto L_124a105f;
L_124a0e16:;
  /* 124a0e16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0e19 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a0e1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0e1f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124a0e22 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a0e25 mov eax, dword ptr [ecx*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124c6220)));
  /* 124a0e2c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124a0e31 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 124a0e34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a0e36 je 0x124a0e48 */
  if (C.zf) goto L_124a0e48;
  /* 124a0e38 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a0e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0e3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0e3f push edx */
  push32((uint32_t)(EDX));
  /* 124a0e40 call 0x124a0ca0 */
  push32(0x124a0e45u); f_124a0ca0();
  /* 124a0e45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a0e48:;
  /* 124a0e48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0e4b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124a0e4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0e51 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124a0e54 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a0e57 mov edx, dword ptr [eax*4 + 0x124c6220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124c6220)));
  /* 124a0e5e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 124a0e63 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 124a0e68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a0e6a je 0x124a0f7c */
  if (C.zf) goto L_124a0f7c;
  /* 124a0e70 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0e73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a0e76 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_124a0e7d:;
  /* 124a0e7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a0e80 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a0e83 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0e86 jae 0x124a0f7a */
  if (!C.cf) goto L_124a0f7a;
  /* 124a0e8c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 124a0e92 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124a0e95:;
  /* 124a0e95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a0e98 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 124a0e9e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a0ea0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0ea6 jge 0x124a0f07 */
  if ((C.sf==C.of)) goto L_124a0f07;
  /* 124a0ea8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a0eab sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a0eae cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0eb1 jae 0x124a0f07 */
  if (!C.cf) goto L_124a0f07;
  /* 124a0eb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a0eb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124a0eb8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 124a0ebe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a0ec1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0ec4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a0ec7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 124a0ece cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0ed1 jne 0x124a0ef1 */
  if (!C.zf) goto L_124a0ef1;
  /* 124a0ed3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 124a0ed9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0edc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 124a0ee2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a0ee5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 124a0ee8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a0eeb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0eee mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_124a0ef1:;
  /* 124a0ef1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a0ef4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 124a0efa mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 124a0efc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a0eff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0f02 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a0f05 jmp 0x124a0e95 */
  goto L_124a0e95;
L_124a0f07:;
  /* 124a0f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0f09 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 124a0f0f push edx */
  push32((uint32_t)(EDX));
  /* 124a0f10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a0f13 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 124a0f19 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a0f1b push eax */
  push32((uint32_t)(EAX));
  /* 124a0f1c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 124a0f22 push edx */
  push32((uint32_t)(EDX));
  /* 124a0f23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0f26 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124a0f29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0f2c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124a0f2f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a0f32 mov edx, dword ptr [eax*4 + 0x124c6220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124c6220)));
  /* 124a0f39 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 124a0f3c push eax */
  push32((uint32_t)(EAX));
  /* 124a0f3d call dword ptr [0x124c7348] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7348))), 0x124a0f43u);
  /* 124a0f43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a0f45 je 0x124a0f6a */
  if (C.zf) goto L_124a0f6a;
  /* 124a0f47 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a0f4a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a0f50 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124a0f53 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a0f56 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 124a0f5c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a0f5e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0f64 jge 0x124a0f68 */
  if ((C.sf==C.of)) goto L_124a0f68;
  /* 124a0f66 jmp 0x124a0f7a */
  goto L_124a0f7a;
L_124a0f68:;
  /* 124a0f68 jmp 0x124a0f75 */
  goto L_124a0f75;
L_124a0f6a:;
  /* 124a0f6a call dword ptr [0x124c7388] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7388))), 0x124a0f70u);
  /* 124a0f70 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a0f73 jmp 0x124a0f7a */
  goto L_124a0f7a;
L_124a0f75:;
  /* 124a0f75 jmp 0x124a0e7d */
  goto L_124a0e7d;
L_124a0f7a:;
  /* 124a0f7a jmp 0x124a0fcc */
  goto L_124a0fcc;
L_124a0f7c:;
  /* 124a0f7c push 0 */
  push32((uint32_t)(0x0u));
  /* 124a0f7e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 124a0f84 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0f85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a0f88 push edx */
  push32((uint32_t)(EDX));
  /* 124a0f89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a0f8c push eax */
  push32((uint32_t)(EAX));
  /* 124a0f8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0f90 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a0f93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a0f96 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124a0f99 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a0f9c mov eax, dword ptr [ecx*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124c6220)));
  /* 124a0fa3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 124a0fa6 push ecx */
  push32((uint32_t)(ECX));
  /* 124a0fa7 call dword ptr [0x124c7348] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7348))), 0x124a0fadu);
  /* 124a0fad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a0faf je 0x124a0fc3 */
  if (C.zf) goto L_124a0fc3;
  /* 124a0fb1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124a0fb8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 124a0fbe mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 124a0fc1 jmp 0x124a0fcc */
  goto L_124a0fcc;
L_124a0fc3:;
  /* 124a0fc3 call dword ptr [0x124c7388] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7388))), 0x124a0fc9u);
  /* 124a0fc9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124a0fcc:;
  /* 124a0fcc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0fd0 jne 0x124a1056 */
  if (!C.zf) goto L_124a1056;
  /* 124a0fd6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0fda je 0x124a100a */
  if (C.zf) goto L_124a100a;
  /* 124a0fdc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a0fe0 jne 0x124a0ff9 */
  if (!C.zf) goto L_124a0ff9;
  /* 124a0fe2 call 0x124a0390 */
  push32(0x124a0fe7u); f_124a0390();
  /* 124a0fe7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124a0fed call 0x124a03a0 */
  push32(0x124a0ff2u); f_124a03a0();
  /* 124a0ff2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a0ff5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 124a0ff7 jmp 0x124a1005 */
  goto L_124a1005;
L_124a0ff9:;
  /* 124a0ff9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a0ffc push edx */
  push32((uint32_t)(EDX));
  /* 124a0ffd call 0x124a02f0 */
  push32(0x124a1002u); f_124a02f0();
  /* 124a1002 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a1005:;
  /* 124a1005 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a1008 jmp 0x124a105f */
  goto L_124a105f;
L_124a100a:;
  /* 124a100a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a100d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124a1010 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1013 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124a1016 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a1019 mov edx, dword ptr [eax*4 + 0x124c6220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124c6220)));
  /* 124a1020 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 124a1025 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 124a1028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a102a je 0x124a103b */
  if (C.zf) goto L_124a103b;
  /* 124a102c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a102f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a1032 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1035 jne 0x124a103b */
  if (!C.zf) goto L_124a103b;
  /* 124a1037 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a1039 jmp 0x124a105f */
  goto L_124a105f;
L_124a103b:;
  /* 124a103b call 0x124a0390 */
  push32(0x124a1040u); f_124a0390();
  /* 124a1040 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 124a1046 call 0x124a03a0 */
  push32(0x124a104bu); f_124a03a0();
  /* 124a104b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124a1051 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a1054 jmp 0x124a105f */
  goto L_124a105f;
L_124a1056:;
  /* 124a1056 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a1059 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_124a105f:;
  /* 124a105f mov esp, ebp */
  ESP = (EBP);
  /* 124a1061 pop ebp */
  EBP = (pop32());
  /* 124a1062 ret  */
  ESPCHK(0x124a0df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011070 @ 0x124a1070 (199 bytes, 68 insns) */
void f_124a1070(void) {
  FTRACE(0x124a1070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1070 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1071 mov ebp, esp */
  EBP = (ESP);
  /* 124a1073 push ecx */
  push32((uint32_t)(ECX));
  /* 124a1074 push ebx */
  push32((uint32_t)(EBX));
  /* 124a1075 push esi */
  push32((uint32_t)(ESI));
  /* 124a1076 push edi */
  push32((uint32_t)(EDI));
L_124a1077:;
  /* 124a1077 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a107b jne 0x124a109b */
  if (!C.zf) goto L_124a109b;
  /* 124a107d push 0x124c07ec */
  push32((uint32_t)(0x124c07ecu));
  /* 124a1082 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a1084 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 124a1086 push 0x124c08b8 */
  push32((uint32_t)(0x124c08b8u));
  /* 124a108b push 2 */
  push32((uint32_t)(0x2u));
  /* 124a108d call 0x12497580 */
  push32(0x124a1092u); f_12497580();
  /* 124a1092 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1095 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1098 jne 0x124a109b */
  if (!C.zf) goto L_124a109b;
  /* 124a109a int3  */
  x86_unimpl("int3 @ 0x124a109a");
L_124a109b:;
  /* 124a109b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a109d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a109f jne 0x124a1077 */
  if (!C.zf) goto L_124a1077;
  /* 124a10a1 mov ecx, dword ptr [0x124c4a64] */
  ECX = (r32((uint32_t)(0x124c4a64)));
  /* 124a10a7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a10aa mov dword ptr [0x124c4a64], ecx */
  w32((uint32_t)(0x124c4a64), (ECX));
  /* 124a10b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a10b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124a10b6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 124a10b8 push 0x124c08b8 */
  push32((uint32_t)(0x124c08b8u));
  /* 124a10bd push 2 */
  push32((uint32_t)(0x2u));
  /* 124a10bf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 124a10c4 call 0x124984c0 */
  push32(0x124a10c9u); f_124984c0();
  /* 124a10c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a10cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a10cf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 124a10d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a10d5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a10d9 je 0x124a10f6 */
  if (C.zf) goto L_124a10f6;
  /* 124a10db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a10de mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124a10e1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 124a10e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a10e7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 124a10ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a10ed mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 124a10f4 jmp 0x124a111b */
  goto L_124a111b;
L_124a10f6:;
  /* 124a10f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a10f9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124a10fc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124a10ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1102 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 124a1105 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1108 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a110b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a110e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 124a1111 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1114 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_124a111b:;
  /* 124a111b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a111e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1121 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124a1124 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124a1126 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1129 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 124a1130 pop edi */
  EDI = (pop32());
  /* 124a1131 pop esi */
  ESI = (pop32());
  /* 124a1132 pop ebx */
  EBX = (pop32());
  /* 124a1133 mov esp, ebp */
  ESP = (EBP);
  /* 124a1135 pop ebp */
  EBP = (pop32());
  /* 124a1136 ret  */
  ESPCHK(0x124a1070u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x124a1140 (50 bytes, 17 insns) */
void f_124a1140(void) {
  FTRACE(0x124a1140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1140 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1141 mov ebp, esp */
  EBP = (ESP);
  /* 124a1143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1146 cmp eax, dword ptr [0x124c635c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c635c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a114c jb 0x124a1152 */
  if (C.cf) goto L_124a1152;
  /* 124a114e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a1150 jmp 0x124a1170 */
  goto L_124a1170;
L_124a1152:;
  /* 124a1152 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1155 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a1158 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a115b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124a115e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a1161 mov eax, dword ptr [ecx*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124c6220)));
  /* 124a1168 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124a116d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_124a1170:;
  /* 124a1170 pop ebp */
  EBP = (pop32());
  /* 124a1171 ret  */
  ESPCHK(0x124a1140u, _esp0);
  ESP += 4; return;
}

/* FUN_10011180 @ 0x124a1180 (300 bytes, 80 insns) */
void f_124a1180(void) {
  FTRACE(0x124a1180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1180 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1181 mov ebp, esp */
  EBP = (ESP);
  /* 124a1183 push ecx */
  push32((uint32_t)(ECX));
  /* 124a1184 cmp dword ptr [0x124c5f20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c5f20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a118b jne 0x124a1199 */
  if (!C.zf) goto L_124a1199;
  /* 124a118d mov dword ptr [0x124c5f20], 0x200 */
  w32((uint32_t)(0x124c5f20), (0x200u));
  /* 124a1197 jmp 0x124a11ac */
  goto L_124a11ac;
L_124a1199:;
  /* 124a1199 cmp dword ptr [0x124c5f20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x124c5f20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a11a0 jge 0x124a11ac */
  if ((C.sf==C.of)) goto L_124a11ac;
  /* 124a11a2 mov dword ptr [0x124c5f20], 0x14 */
  w32((uint32_t)(0x124c5f20), (0x14u));
L_124a11ac:;
  /* 124a11ac push 0x83 */
  push32((uint32_t)(0x83u));
  /* 124a11b1 push 0x124c08c4 */
  push32((uint32_t)(0x124c08c4u));
  /* 124a11b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a11b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 124a11ba mov eax, dword ptr [0x124c5f20] */
  EAX = (r32((uint32_t)(0x124c5f20)));
  /* 124a11bf push eax */
  push32((uint32_t)(EAX));
  /* 124a11c0 call 0x124988d0 */
  push32(0x124a11c5u); f_124988d0();
  /* 124a11c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a11c8 mov dword ptr [0x124c4bd8], eax */
  w32((uint32_t)(0x124c4bd8), (EAX));
  /* 124a11cd cmp dword ptr [0x124c4bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a11d4 jne 0x124a1215 */
  if (!C.zf) goto L_124a1215;
  /* 124a11d6 mov dword ptr [0x124c5f20], 0x14 */
  w32((uint32_t)(0x124c5f20), (0x14u));
  /* 124a11e0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 124a11e5 push 0x124c08c4 */
  push32((uint32_t)(0x124c08c4u));
  /* 124a11ea push 2 */
  push32((uint32_t)(0x2u));
  /* 124a11ec push 4 */
  push32((uint32_t)(0x4u));
  /* 124a11ee mov ecx, dword ptr [0x124c5f20] */
  ECX = (r32((uint32_t)(0x124c5f20)));
  /* 124a11f4 push ecx */
  push32((uint32_t)(ECX));
  /* 124a11f5 call 0x124988d0 */
  push32(0x124a11fau); f_124988d0();
  /* 124a11fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a11fd mov dword ptr [0x124c4bd8], eax */
  w32((uint32_t)(0x124c4bd8), (EAX));
  /* 124a1202 cmp dword ptr [0x124c4bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1209 jne 0x124a1215 */
  if (!C.zf) goto L_124a1215;
  /* 124a120b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 124a120d call 0x12497430 */
  push32(0x124a1212u); f_12497430();
  /* 124a1212 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a1215:;
  /* 124a1215 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a121c jmp 0x124a1227 */
  goto L_124a1227;
L_124a121e:;
  /* 124a121e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1221 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1224 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124a1227:;
  /* 124a1227 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a122b jge 0x124a1246 */
  if ((C.sf==C.of)) goto L_124a1246;
  /* 124a122d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1230 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124a1233 add eax, 0x124c3120 */
  { uint32_t _a=(EAX),_b=(0x124c3120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1238 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a123b mov edx, dword ptr [0x124c4bd8] */
  EDX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1241 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 124a1244 jmp 0x124a121e */
  goto L_124a121e;
L_124a1246:;
  /* 124a1246 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a124d jmp 0x124a1258 */
  goto L_124a1258;
L_124a124f:;
  /* 124a124f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1252 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1255 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124a1258:;
  /* 124a1258 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a125c jge 0x124a12a8 */
  if ((C.sf==C.of)) goto L_124a12a8;
  /* 124a125e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1261 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a1264 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1267 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124a126a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a126d mov eax, dword ptr [ecx*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124c6220)));
  /* 124a1274 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1278 je 0x124a1296 */
  if (C.zf) goto L_124a1296;
  /* 124a127a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a127d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a1280 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1283 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124a1286 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a1289 mov eax, dword ptr [ecx*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124c6220)));
  /* 124a1290 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1294 jne 0x124a12a6 */
  if (!C.zf) goto L_124a12a6;
L_124a1296:;
  /* 124a1296 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1299 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a129c mov dword ptr [ecx + 0x124c3130], 0xffffffff */
  w32((uint32_t)(ECX + 0x124c3130), (0xffffffffu));
L_124a12a6:;
  /* 124a12a6 jmp 0x124a124f */
  goto L_124a124f;
L_124a12a8:;
  /* 124a12a8 mov esp, ebp */
  ESP = (EBP);
  /* 124a12aa pop ebp */
  EBP = (pop32());
  /* 124a12ab ret  */
  ESPCHK(0x124a1180u, _esp0);
  ESP += 4; return;
}

/* FUN_100112b0 @ 0x124a12b0 (26 bytes, 9 insns) */
void f_124a12b0(void) {
  FTRACE(0x124a12b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a12b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a12b1 mov ebp, esp */
  EBP = (ESP);
  /* 124a12b3 call 0x124a1eb0 */
  push32(0x124a12b8u); f_124a1eb0();
  /* 124a12b8 movsx eax, byte ptr [0x124c487c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x124c487c))));
  /* 124a12bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a12c1 je 0x124a12c8 */
  if (C.zf) goto L_124a12c8;
  /* 124a12c3 call 0x124a1c70 */
  push32(0x124a12c8u); f_124a1c70();
L_124a12c8:;
  /* 124a12c8 pop ebp */
  EBP = (pop32());
  /* 124a12c9 ret  */
  ESPCHK(0x124a12b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112d0 @ 0x124a12d0 (61 bytes, 20 insns) */
void f_124a12d0(void) {
  FTRACE(0x124a12d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a12d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a12d1 mov ebp, esp */
  EBP = (ESP);
  /* 124a12d3 cmp dword ptr [ebp + 8], 0x124c3120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x124c3120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a12da jb 0x124a12fe */
  if (C.cf) goto L_124a12fe;
  /* 124a12dc cmp dword ptr [ebp + 8], 0x124c3380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x124c3380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a12e3 ja 0x124a12fe */
  if ((!C.cf&&!C.zf)) goto L_124a12fe;
  /* 124a12e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a12e8 sub eax, 0x124c3120 */
  { uint32_t _a=(EAX),_b=(0x124c3120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a12ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124a12f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a12f3 push eax */
  push32((uint32_t)(EAX));
  /* 124a12f4 call 0x1249bec0 */
  push32(0x124a12f9u); f_1249bec0();
  /* 124a12f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a12fc jmp 0x124a130b */
  goto L_124a130b;
L_124a12fe:;
  /* 124a12fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1301 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1304 push ecx */
  push32((uint32_t)(ECX));
  /* 124a1305 call dword ptr [0x124c7324] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7324))), 0x124a130bu);
L_124a130b:;
  /* 124a130b pop ebp */
  EBP = (pop32());
  /* 124a130c ret  */
  ESPCHK(0x124a12d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011310 @ 0x124a1310 (41 bytes, 16 insns) */
void f_124a1310(void) {
  FTRACE(0x124a1310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1310 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1311 mov ebp, esp */
  EBP = (ESP);
  /* 124a1313 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1317 jge 0x124a132a */
  if ((C.sf==C.of)) goto L_124a132a;
  /* 124a1319 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a131c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a131f push eax */
  push32((uint32_t)(EAX));
  /* 124a1320 call 0x1249bec0 */
  push32(0x124a1325u); f_1249bec0();
  /* 124a1325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1328 jmp 0x124a1337 */
  goto L_124a1337;
L_124a132a:;
  /* 124a132a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a132d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1330 push ecx */
  push32((uint32_t)(ECX));
  /* 124a1331 call dword ptr [0x124c7324] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7324))), 0x124a1337u);
L_124a1337:;
  /* 124a1337 pop ebp */
  EBP = (pop32());
  /* 124a1338 ret  */
  ESPCHK(0x124a1310u, _esp0);
  ESP += 4; return;
}

/* FUN_10011340 @ 0x124a1340 (61 bytes, 20 insns) */
void f_124a1340(void) {
  FTRACE(0x124a1340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1340 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1341 mov ebp, esp */
  EBP = (ESP);
  /* 124a1343 cmp dword ptr [ebp + 8], 0x124c3120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x124c3120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a134a jb 0x124a136e */
  if (C.cf) goto L_124a136e;
  /* 124a134c cmp dword ptr [ebp + 8], 0x124c3380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x124c3380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1353 ja 0x124a136e */
  if ((!C.cf&&!C.zf)) goto L_124a136e;
  /* 124a1355 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1358 sub eax, 0x124c3120 */
  { uint32_t _a=(EAX),_b=(0x124c3120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a135d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124a1360 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1363 push eax */
  push32((uint32_t)(EAX));
  /* 124a1364 call 0x1249bf60 */
  push32(0x124a1369u); f_1249bf60();
  /* 124a1369 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a136c jmp 0x124a137b */
  goto L_124a137b;
L_124a136e:;
  /* 124a136e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1371 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1374 push ecx */
  push32((uint32_t)(ECX));
  /* 124a1375 call dword ptr [0x124c7320] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7320))), 0x124a137bu);
L_124a137b:;
  /* 124a137b pop ebp */
  EBP = (pop32());
  /* 124a137c ret  */
  ESPCHK(0x124a1340u, _esp0);
  ESP += 4; return;
}

/* FUN_10011380 @ 0x124a1380 (41 bytes, 16 insns) */
void f_124a1380(void) {
  FTRACE(0x124a1380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1380 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1381 mov ebp, esp */
  EBP = (ESP);
  /* 124a1383 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1387 jge 0x124a139a */
  if ((C.sf==C.of)) goto L_124a139a;
  /* 124a1389 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a138c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a138f push eax */
  push32((uint32_t)(EAX));
  /* 124a1390 call 0x1249bf60 */
  push32(0x124a1395u); f_1249bf60();
  /* 124a1395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1398 jmp 0x124a13a7 */
  goto L_124a13a7;
L_124a139a:;
  /* 124a139a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a139d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a13a0 push ecx */
  push32((uint32_t)(ECX));
  /* 124a13a1 call dword ptr [0x124c7320] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7320))), 0x124a13a7u);
L_124a13a7:;
  /* 124a13a7 pop ebp */
  EBP = (pop32());
  /* 124a13a8 ret  */
  ESPCHK(0x124a1380u, _esp0);
  ESP += 4; return;
}

/* FUN_100113b0 @ 0x124a13b0 (119 bytes, 34 insns) */
void f_124a13b0(void) {
  FTRACE(0x124a13b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a13b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a13b1 mov ebp, esp */
  EBP = (ESP);
  /* 124a13b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a13b6 push 0x124c4bd4 */
  push32((uint32_t)(0x124c4bd4u));
  /* 124a13bb call dword ptr [0x124c735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c735c))), 0x124a13c1u);
  /* 124a13c1 cmp dword ptr [0x124c4bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a13c8 je 0x124a13e8 */
  if (C.zf) goto L_124a13e8;
  /* 124a13ca push 0x124c4bd4 */
  push32((uint32_t)(0x124c4bd4u));
  /* 124a13cf call dword ptr [0x124c734c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c734c))), 0x124a13d5u);
  /* 124a13d5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124a13d7 call 0x1249bec0 */
  push32(0x124a13dcu); f_1249bec0();
  /* 124a13dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a13df mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124a13e6 jmp 0x124a13ef */
  goto L_124a13ef;
L_124a13e8:;
  /* 124a13e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124a13ef:;
  /* 124a13ef mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 124a13f3 push eax */
  push32((uint32_t)(EAX));
  /* 124a13f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a13f7 push ecx */
  push32((uint32_t)(ECX));
  /* 124a13f8 call 0x124a1430 */
  push32(0x124a13fdu); f_124a1430();
  /* 124a13fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1400 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a1403 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1407 je 0x124a1415 */
  if (C.zf) goto L_124a1415;
  /* 124a1409 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124a140b call 0x1249bf60 */
  push32(0x124a1410u); f_1249bf60();
  /* 124a1410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1413 jmp 0x124a1420 */
  goto L_124a1420;
L_124a1415:;
  /* 124a1415 push 0x124c4bd4 */
  push32((uint32_t)(0x124c4bd4u));
  /* 124a141a call dword ptr [0x124c734c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c734c))), 0x124a1420u);
L_124a1420:;
  /* 124a1420 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1423 mov esp, ebp */
  ESP = (EBP);
  /* 124a1425 pop ebp */
  EBP = (pop32());
  /* 124a1426 ret  */
  ESPCHK(0x124a13b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011430 @ 0x124a1430 (160 bytes, 50 insns) */
void f_124a1430(void) {
  FTRACE(0x124a1430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1430 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1431 mov ebp, esp */
  EBP = (ESP);
  /* 124a1433 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a1436 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a143a jne 0x124a1443 */
  if (!C.zf) goto L_124a1443;
  /* 124a143c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a143e jmp 0x124a14cc */
  goto L_124a14cc;
L_124a1443:;
  /* 124a1443 cmp dword ptr [0x124c4a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a144a jne 0x124a147a */
  if (!C.zf) goto L_124a147a;
  /* 124a144c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a144f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a1454 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1459 jle 0x124a146b */
  if ((C.zf||C.sf!=C.of)) goto L_124a146b;
  /* 124a145b call 0x124a0390 */
  push32(0x124a1460u); f_124a0390();
  /* 124a1460 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 124a1466 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a1469 jmp 0x124a14cc */
  goto L_124a14cc;
L_124a146b:;
  /* 124a146b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a146e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 124a1471 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 124a1473 mov eax, 1 */
  EAX = (0x1u);
  /* 124a1478 jmp 0x124a14cc */
  goto L_124a14cc;
L_124a147a:;
  /* 124a147a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124a1481 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 124a1484 push eax */
  push32((uint32_t)(EAX));
  /* 124a1485 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a1487 mov ecx, dword ptr [0x124c2ea4] */
  ECX = (r32((uint32_t)(0x124c2ea4)));
  /* 124a148d push ecx */
  push32((uint32_t)(ECX));
  /* 124a148e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1491 push edx */
  push32((uint32_t)(EDX));
  /* 124a1492 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a1494 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 124a1497 push eax */
  push32((uint32_t)(EAX));
  /* 124a1498 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124a149d mov ecx, dword ptr [0x124c4a58] */
  ECX = (r32((uint32_t)(0x124c4a58)));
  /* 124a14a3 push ecx */
  push32((uint32_t)(ECX));
  /* 124a14a4 call dword ptr [0x124c73b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c73b0))), 0x124a14aau);
  /* 124a14aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a14ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a14b1 je 0x124a14b9 */
  if (C.zf) goto L_124a14b9;
  /* 124a14b3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a14b7 je 0x124a14c9 */
  if (C.zf) goto L_124a14c9;
L_124a14b9:;
  /* 124a14b9 call 0x124a0390 */
  push32(0x124a14beu); f_124a0390();
  /* 124a14be mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 124a14c4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a14c7 jmp 0x124a14cc */
  goto L_124a14cc;
L_124a14c9:;
  /* 124a14c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124a14cc:;
  /* 124a14cc mov esp, ebp */
  ESP = (EBP);
  /* 124a14ce pop ebp */
  EBP = (pop32());
  /* 124a14cf ret  */
  ESPCHK(0x124a1430u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x124a14d0 (32 bytes, 18 insns) */
void f_124a14d0(void) {
  FTRACE(0x124a14d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a14d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a14d1 mov ebp, esp */
  EBP = (ESP);
  /* 124a14d3 push ebx */
  push32((uint32_t)(EBX));
  /* 124a14d4 push esi */
  push32((uint32_t)(ESI));
  /* 124a14d5 push edi */
  push32((uint32_t)(EDI));
  /* 124a14d6 push ebp */
  push32((uint32_t)(EBP));
  /* 124a14d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a14d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a14db push 0x124a14e8 */
  push32((uint32_t)(0x124a14e8u));
  /* 124a14e0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 124a14e3 call 0x124a8c1c */
  push32(0x124a14e8u); f_124a8c1c();
  /* 124a14e8 pop ebp */
  EBP = (pop32());
  /* 124a14e9 pop edi */
  EDI = (pop32());
  /* 124a14ea pop esi */
  ESI = (pop32());
  /* 124a14eb pop ebx */
  EBX = (pop32());
  /* 124a14ec mov esp, ebp */
  ESP = (EBP);
  /* 124a14ee pop ebp */
  EBP = (pop32());
  /* 124a14ef ret  */
  ESPCHK(0x124a14d0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x124a1512 (104 bytes, 33 insns) */
void f_124a1512(void) {
  FTRACE(0x124a1512u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1512 push ebx */
  push32((uint32_t)(EBX));
  /* 124a1513 push esi */
  push32((uint32_t)(ESI));
  /* 124a1514 push edi */
  push32((uint32_t)(EDI));
  /* 124a1515 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 124a1519 push eax */
  push32((uint32_t)(EAX));
  /* 124a151a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 124a151c push 0x124a14f0 */
  push32((uint32_t)(0x124a14f0u));
  /* 124a1521 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 124a1528 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_124a152f:;
  /* 124a152f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 124a1533 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 124a1536 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 124a1539 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a153c je 0x124a156c */
  if (C.zf) goto L_124a156c;
  /* 124a153e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1542 je 0x124a156c */
  if (C.zf) goto L_124a156c;
  /* 124a1544 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 124a1547 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 124a154a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 124a154e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 124a1551 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1556 jne 0x124a156a */
  if (!C.zf) goto L_124a156a;
  /* 124a1558 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 124a155d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 124a1561 call 0x124a15a6 */
  push32(0x124a1566u); f_124a15a6();
  /* 124a1566 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x124a156au);
L_124a156a:;
  /* 124a156a jmp 0x124a152f */
  goto L_124a152f;
L_124a156c:;
  /* 124a156c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 124a1573 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1576 pop edi */
  EDI = (pop32());
  /* 124a1577 pop esi */
  ESI = (pop32());
  /* 124a1578 pop ebx */
  EBX = (pop32());
  /* 124a1579 ret  */
  ESPCHK(0x124a1512u, _esp0);
  ESP += 4; return;
}

/* FUN_100115a6 @ 0x124a15a6 (24 bytes, 10 insns) */
void f_124a15a6(void) {
  FTRACE(0x124a15a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a15a6 push ebx */
  push32((uint32_t)(EBX));
  /* 124a15a7 push ecx */
  push32((uint32_t)(ECX));
  /* 124a15a8 mov ebx, 0x124c33b8 */
  EBX = (0x124c33b8u);
  /* 124a15ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a15b0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 124a15b3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 124a15b6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 124a15b9 pop ecx */
  ECX = (pop32());
  /* 124a15ba pop ebx */
  EBX = (pop32());
  /* 124a15bb ret 4 */
  ESPCHK(0x124a15a6u, _esp0);
  ESP += 8; return;
}

/* FUN_10011685 @ 0x124a1685 (27 bytes, 11 insns) */
void f_124a1685(void) {
  FTRACE(0x124a1685u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1685 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1686 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 124a168a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 124a168c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 124a168f push eax */
  push32((uint32_t)(EAX));
  /* 124a1690 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 124a1693 push eax */
  push32((uint32_t)(EAX));
  /* 124a1694 call 0x124a1512 */
  push32(0x124a1699u); f_124a1512();
  /* 124a1699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a169c pop ebp */
  EBP = (pop32());
  /* 124a169d ret 4 */
  ESPCHK(0x124a1685u, _esp0);
  ESP += 8; return;
}

/* FUN_100116a0 @ 0x124a16a0 (482 bytes, 138 insns) */
void f_124a16a0(void) {
  FTRACE(0x124a16a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a16a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a16a1 mov ebp, esp */
  EBP = (ESP);
  /* 124a16a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a16a6 push esi */
  push32((uint32_t)(ESI));
  /* 124a16a7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 124a16ae push 0x12 */
  push32((uint32_t)(0x12u));
  /* 124a16b0 call 0x1249bec0 */
  push32(0x124a16b5u); f_1249bec0();
  /* 124a16b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a16b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124a16bf jmp 0x124a16ca */
  goto L_124a16ca;
L_124a16c1:;
  /* 124a16c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a16c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a16c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124a16ca:;
  /* 124a16ca cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a16ce jge 0x124a1870 */
  if ((C.sf==C.of)) goto L_124a1870;
  /* 124a16d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a16d7 cmp dword ptr [ecx*4 + 0x124c6220], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x124c6220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a16df je 0x124a17d6 */
  if (C.zf) goto L_124a17d6;
  /* 124a16e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a16e8 mov eax, dword ptr [edx*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(EDX*4 + 0x124c6220)));
  /* 124a16ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a16f2 jmp 0x124a16fd */
  goto L_124a16fd;
L_124a16f4:;
  /* 124a16f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a16f7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a16fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124a16fd:;
  /* 124a16fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1700 mov eax, dword ptr [edx*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(EDX*4 + 0x124c6220)));
  /* 124a1707 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a170c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a170f jae 0x124a17c6 */
  if (!C.cf) goto L_124a17c6;
  /* 124a1715 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1718 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 124a171c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 124a171f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a1721 jne 0x124a17c1 */
  if (!C.zf) goto L_124a17c1;
  /* 124a1727 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a172a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a172e jne 0x124a1769 */
  if (!C.zf) goto L_124a1769;
  /* 124a1730 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 124a1732 call 0x1249bec0 */
  push32(0x124a1737u); f_1249bec0();
  /* 124a1737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a173a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a173d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1741 jne 0x124a175f */
  if (!C.zf) goto L_124a175f;
  /* 124a1743 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1746 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1749 push edx */
  push32((uint32_t)(EDX));
  /* 124a174a call dword ptr [0x124c7328] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7328))), 0x124a1750u);
  /* 124a1750 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1753 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124a1756 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1759 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a175c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_124a175f:;
  /* 124a175f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 124a1761 call 0x1249bf60 */
  push32(0x124a1766u); f_1249bf60();
  /* 124a1766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a1769:;
  /* 124a1769 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a176c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a176f push eax */
  push32((uint32_t)(EAX));
  /* 124a1770 call dword ptr [0x124c7324] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7324))), 0x124a1776u);
  /* 124a1776 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1779 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 124a177d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 124a1780 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a1782 je 0x124a1796 */
  if (C.zf) goto L_124a1796;
  /* 124a1784 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1787 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a178a push eax */
  push32((uint32_t)(EAX));
  /* 124a178b call dword ptr [0x124c7320] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7320))), 0x124a1791u);
  /* 124a1791 jmp 0x124a16f4 */
  goto L_124a16f4;
L_124a1796:;
  /* 124a1796 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1799 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 124a179f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a17a2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a17a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a17a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a17ab sub eax, dword ptr [edx*4 + 0x124c6220] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x124c6220))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a17b2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a17b3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 124a17b8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124a17ba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a17bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a17bf jmp 0x124a17c6 */
  goto L_124a17c6;
L_124a17c1:;
  /* 124a17c1 jmp 0x124a16f4 */
  goto L_124a16f4;
L_124a17c6:;
  /* 124a17c6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a17ca je 0x124a17d1 */
  if (C.zf) goto L_124a17d1;
  /* 124a17cc jmp 0x124a1870 */
  goto L_124a1870;
L_124a17d1:;
  /* 124a17d1 jmp 0x124a186b */
  goto L_124a186b;
L_124a17d6:;
  /* 124a17d6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 124a17d8 push 0x124c08cc */
  push32((uint32_t)(0x124c08ccu));
  /* 124a17dd push 2 */
  push32((uint32_t)(0x2u));
  /* 124a17df push 0x480 */
  push32((uint32_t)(0x480u));
  /* 124a17e4 call 0x124984c0 */
  push32(0x124a17e9u); f_124984c0();
  /* 124a17e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a17ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a17ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a17f3 je 0x124a1869 */
  if (C.zf) goto L_124a1869;
  /* 124a17f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a17f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a17fb mov dword ptr [eax*4 + 0x124c6220], ecx */
  w32((uint32_t)(EAX*4 + 0x124c6220), (ECX));
  /* 124a1802 mov edx, dword ptr [0x124c635c] */
  EDX = (r32((uint32_t)(0x124c635c)));
  /* 124a1808 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a180b mov dword ptr [0x124c635c], edx */
  w32((uint32_t)(0x124c635c), (EDX));
  /* 124a1811 jmp 0x124a181c */
  goto L_124a181c;
L_124a1813:;
  /* 124a1813 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1816 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1819 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124a181c:;
  /* 124a181c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a181f mov edx, dword ptr [ecx*4 + 0x124c6220] */
  EDX = (r32((uint32_t)(ECX*4 + 0x124c6220)));
  /* 124a1826 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a182c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a182f jae 0x124a1854 */
  if (!C.cf) goto L_124a1854;
  /* 124a1831 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1834 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 124a1838 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a183b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 124a1841 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1844 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 124a1848 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a184b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 124a1852 jmp 0x124a1813 */
  goto L_124a1813;
L_124a1854:;
  /* 124a1854 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1857 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a185a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a185d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1860 push edx */
  push32((uint32_t)(EDX));
  /* 124a1861 call 0x124a1bb0 */
  push32(0x124a1866u); f_124a1bb0();
  /* 124a1866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a1869:;
  /* 124a1869 jmp 0x124a1870 */
  goto L_124a1870;
L_124a186b:;
  /* 124a186b jmp 0x124a16c1 */
  goto L_124a16c1;
L_124a1870:;
  /* 124a1870 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 124a1872 call 0x1249bf60 */
  push32(0x124a1877u); f_1249bf60();
  /* 124a1877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a187a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a187d pop esi */
  ESI = (pop32());
  /* 124a187e mov esp, ebp */
  ESP = (EBP);
  /* 124a1880 pop ebp */
  EBP = (pop32());
  /* 124a1881 ret  */
  ESPCHK(0x124a16a0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x124a1890 (183 bytes, 57 insns) */
void f_124a1890(void) {
  FTRACE(0x124a1890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1890 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1891 mov ebp, esp */
  EBP = (ESP);
  /* 124a1893 push ecx */
  push32((uint32_t)(ECX));
  /* 124a1894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1897 cmp eax, dword ptr [0x124c635c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c635c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a189d jae 0x124a192a */
  if (!C.cf) goto L_124a192a;
  /* 124a18a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a18a6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a18a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a18ac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124a18af imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a18b2 mov eax, dword ptr [ecx*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124c6220)));
  /* 124a18b9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a18bd jne 0x124a192a */
  if (!C.zf) goto L_124a192a;
  /* 124a18bf cmp dword ptr [0x124c483c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c483c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a18c6 jne 0x124a190a */
  if (!C.zf) goto L_124a190a;
  /* 124a18c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a18cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a18ce cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a18d2 je 0x124a18e2 */
  if (C.zf) goto L_124a18e2;
  /* 124a18d4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a18d8 je 0x124a18f0 */
  if (C.zf) goto L_124a18f0;
  /* 124a18da cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a18de je 0x124a18fe */
  if (C.zf) goto L_124a18fe;
  /* 124a18e0 jmp 0x124a190a */
  goto L_124a190a;
L_124a18e2:;
  /* 124a18e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a18e5 push edx */
  push32((uint32_t)(EDX));
  /* 124a18e6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 124a18e8 call dword ptr [0x124c72e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72e0))), 0x124a18eeu);
  /* 124a18ee jmp 0x124a190a */
  goto L_124a190a;
L_124a18f0:;
  /* 124a18f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a18f3 push eax */
  push32((uint32_t)(EAX));
  /* 124a18f4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 124a18f6 call dword ptr [0x124c72e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72e0))), 0x124a18fcu);
  /* 124a18fc jmp 0x124a190a */
  goto L_124a190a;
L_124a18fe:;
  /* 124a18fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a1901 push ecx */
  push32((uint32_t)(ECX));
  /* 124a1902 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 124a1904 call dword ptr [0x124c72e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72e0))), 0x124a190au);
L_124a190a:;
  /* 124a190a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a190d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 124a1910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1913 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 124a1916 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a1919 mov ecx, dword ptr [edx*4 + 0x124c6220] */
  ECX = (r32((uint32_t)(EDX*4 + 0x124c6220)));
  /* 124a1920 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a1923 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 124a1926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a1928 jmp 0x124a1943 */
  goto L_124a1943;
L_124a192a:;
  /* 124a192a call 0x124a0390 */
  push32(0x124a192fu); f_124a0390();
  /* 124a192f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124a1935 call 0x124a03a0 */
  push32(0x124a193au); f_124a03a0();
  /* 124a193a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124a1940 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_124a1943:;
  /* 124a1943 mov esp, ebp */
  ESP = (EBP);
  /* 124a1945 pop ebp */
  EBP = (pop32());
  /* 124a1946 ret  */
  ESPCHK(0x124a1890u, _esp0);
  ESP += 4; return;
}

/* FUN_10011950 @ 0x124a1950 (216 bytes, 63 insns) */
void f_124a1950(void) {
  FTRACE(0x124a1950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1950 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1951 mov ebp, esp */
  EBP = (ESP);
  /* 124a1953 push ecx */
  push32((uint32_t)(ECX));
  /* 124a1954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1957 cmp eax, dword ptr [0x124c635c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c635c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a195d jae 0x124a1a0b */
  if (!C.cf) goto L_124a1a0b;
  /* 124a1963 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1966 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a1969 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a196c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124a196f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a1972 mov eax, dword ptr [ecx*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124c6220)));
  /* 124a1979 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124a197e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124a1981 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a1983 je 0x124a1a0b */
  if (C.zf) goto L_124a1a0b;
  /* 124a1989 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a198c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 124a198f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1992 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 124a1995 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a1998 mov ecx, dword ptr [edx*4 + 0x124c6220] */
  ECX = (r32((uint32_t)(EDX*4 + 0x124c6220)));
  /* 124a199f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a19a3 je 0x124a1a0b */
  if (C.zf) goto L_124a1a0b;
  /* 124a19a5 cmp dword ptr [0x124c483c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c483c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a19ac jne 0x124a19ea */
  if (!C.zf) goto L_124a19ea;
  /* 124a19ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a19b1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124a19b4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a19b8 je 0x124a19c8 */
  if (C.zf) goto L_124a19c8;
  /* 124a19ba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a19be je 0x124a19d4 */
  if (C.zf) goto L_124a19d4;
  /* 124a19c0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a19c4 je 0x124a19e0 */
  if (C.zf) goto L_124a19e0;
  /* 124a19c6 jmp 0x124a19ea */
  goto L_124a19ea;
L_124a19c8:;
  /* 124a19c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a19ca push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 124a19cc call dword ptr [0x124c72e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72e0))), 0x124a19d2u);
  /* 124a19d2 jmp 0x124a19ea */
  goto L_124a19ea;
L_124a19d4:;
  /* 124a19d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a19d6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 124a19d8 call dword ptr [0x124c72e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72e0))), 0x124a19deu);
  /* 124a19de jmp 0x124a19ea */
  goto L_124a19ea;
L_124a19e0:;
  /* 124a19e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a19e2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 124a19e4 call dword ptr [0x124c72e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72e0))), 0x124a19eau);
L_124a19ea:;
  /* 124a19ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a19ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124a19f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a19f3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124a19f6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a19f9 mov edx, dword ptr [eax*4 + 0x124c6220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124c6220)));
  /* 124a1a00 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 124a1a07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a1a09 jmp 0x124a1a24 */
  goto L_124a1a24;
L_124a1a0b:;
  /* 124a1a0b call 0x124a0390 */
  push32(0x124a1a10u); f_124a0390();
  /* 124a1a10 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124a1a16 call 0x124a03a0 */
  push32(0x124a1a1bu); f_124a03a0();
  /* 124a1a1b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124a1a21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_124a1a24:;
  /* 124a1a24 mov esp, ebp */
  ESP = (EBP);
  /* 124a1a26 pop ebp */
  EBP = (pop32());
  /* 124a1a27 ret  */
  ESPCHK(0x124a1950u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a30 @ 0x124a1a30 (102 bytes, 30 insns) */
void f_124a1a30(void) {
  FTRACE(0x124a1a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1a30 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1a31 mov ebp, esp */
  EBP = (ESP);
  /* 124a1a33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1a36 cmp eax, dword ptr [0x124c635c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c635c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1a3c jae 0x124a1a7b */
  if (!C.cf) goto L_124a1a7b;
  /* 124a1a3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1a41 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a1a44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1a47 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124a1a4a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a1a4d mov eax, dword ptr [ecx*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124c6220)));
  /* 124a1a54 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124a1a59 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124a1a5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a1a5e je 0x124a1a7b */
  if (C.zf) goto L_124a1a7b;
  /* 124a1a60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1a63 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 124a1a66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1a69 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 124a1a6c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a1a6f mov ecx, dword ptr [edx*4 + 0x124c6220] */
  ECX = (r32((uint32_t)(EDX*4 + 0x124c6220)));
  /* 124a1a76 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 124a1a79 jmp 0x124a1a94 */
  goto L_124a1a94;
L_124a1a7b:;
  /* 124a1a7b call 0x124a0390 */
  push32(0x124a1a80u); f_124a0390();
  /* 124a1a80 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124a1a86 call 0x124a03a0 */
  push32(0x124a1a8bu); f_124a03a0();
  /* 124a1a8b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124a1a91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_124a1a94:;
  /* 124a1a94 pop ebp */
  EBP = (pop32());
  /* 124a1a95 ret  */
  ESPCHK(0x124a1a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011aa0 @ 0x124a1aa0 (260 bytes, 83 insns) */
void f_124a1aa0(void) {
  FTRACE(0x124a1aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1aa1 mov ebp, esp */
  EBP = (ESP);
  /* 124a1aa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a1aa6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 124a1aaa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a1aad and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 124a1ab0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a1ab2 je 0x124a1abd */
  if (C.zf) goto L_124a1abd;
  /* 124a1ab4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 124a1ab7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 124a1aba mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_124a1abd:;
  /* 124a1abd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a1ac0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 124a1ac6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a1ac8 je 0x124a1ad2 */
  if (C.zf) goto L_124a1ad2;
  /* 124a1aca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 124a1acd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 124a1acf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_124a1ad2:;
  /* 124a1ad2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a1ad5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 124a1adb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a1add je 0x124a1ae8 */
  if (C.zf) goto L_124a1ae8;
  /* 124a1adf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 124a1ae2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 124a1ae5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_124a1ae8:;
  /* 124a1ae8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1aeb push eax */
  push32((uint32_t)(EAX));
  /* 124a1aec call dword ptr [0x124c7394] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7394))), 0x124a1af2u);
  /* 124a1af2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a1af5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1af9 jne 0x124a1b12 */
  if (!C.zf) goto L_124a1b12;
  /* 124a1afb call dword ptr [0x124c7388] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7388))), 0x124a1b01u);
  /* 124a1b01 push eax */
  push32((uint32_t)(EAX));
  /* 124a1b02 call 0x124a02f0 */
  push32(0x124a1b07u); f_124a02f0();
  /* 124a1b07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1b0a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a1b0d jmp 0x124a1ba0 */
  goto L_124a1ba0;
L_124a1b12:;
  /* 124a1b12 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1b16 jne 0x124a1b23 */
  if (!C.zf) goto L_124a1b23;
  /* 124a1b18 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 124a1b1b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 124a1b1e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 124a1b21 jmp 0x124a1b32 */
  goto L_124a1b32;
L_124a1b23:;
  /* 124a1b23 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1b27 jne 0x124a1b32 */
  if (!C.zf) goto L_124a1b32;
  /* 124a1b29 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 124a1b2c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 124a1b2f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_124a1b32:;
  /* 124a1b32 call 0x124a16a0 */
  push32(0x124a1b37u); f_124a16a0();
  /* 124a1b37 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a1b3a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1b3e jne 0x124a1b5b */
  if (!C.zf) goto L_124a1b5b;
  /* 124a1b40 call 0x124a0390 */
  push32(0x124a1b45u); f_124a0390();
  /* 124a1b45 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 124a1b4b call 0x124a03a0 */
  push32(0x124a1b50u); f_124a03a0();
  /* 124a1b50 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124a1b56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a1b59 jmp 0x124a1ba0 */
  goto L_124a1ba0;
L_124a1b5b:;
  /* 124a1b5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1b5e push eax */
  push32((uint32_t)(EAX));
  /* 124a1b5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1b62 push ecx */
  push32((uint32_t)(ECX));
  /* 124a1b63 call 0x124a1890 */
  push32(0x124a1b68u); f_124a1890();
  /* 124a1b68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1b6b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 124a1b6e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 124a1b71 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 124a1b74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1b77 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124a1b7a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1b7d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124a1b80 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a1b83 mov edx, dword ptr [eax*4 + 0x124c6220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124c6220)));
  /* 124a1b8a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 124a1b8d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 124a1b91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1b94 push ecx */
  push32((uint32_t)(ECX));
  /* 124a1b95 call 0x124a1c40 */
  push32(0x124a1b9au); f_124a1c40();
  /* 124a1b9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1b9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124a1ba0:;
  /* 124a1ba0 mov esp, ebp */
  ESP = (EBP);
  /* 124a1ba2 pop ebp */
  EBP = (pop32());
  /* 124a1ba3 ret  */
  ESPCHK(0x124a1aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bb0 @ 0x124a1bb0 (134 bytes, 44 insns) */
void f_124a1bb0(void) {
  FTRACE(0x124a1bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1bb1 mov ebp, esp */
  EBP = (ESP);
  /* 124a1bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 124a1bb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1bb7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124a1bba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1bbd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124a1bc0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a1bc3 mov edx, dword ptr [eax*4 + 0x124c6220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124c6220)));
  /* 124a1bca add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1bcc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124a1bcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1bd2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1bd6 jne 0x124a1c11 */
  if (!C.zf) goto L_124a1c11;
  /* 124a1bd8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 124a1bda call 0x1249bec0 */
  push32(0x124a1bdfu); f_1249bec0();
  /* 124a1bdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1be2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1be5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1be9 jne 0x124a1c07 */
  if (!C.zf) goto L_124a1c07;
  /* 124a1beb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1bee add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1bf1 push edx */
  push32((uint32_t)(EDX));
  /* 124a1bf2 call dword ptr [0x124c7328] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7328))), 0x124a1bf8u);
  /* 124a1bf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1bfb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124a1bfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1c01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1c04 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_124a1c07:;
  /* 124a1c07 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 124a1c09 call 0x1249bf60 */
  push32(0x124a1c0eu); f_1249bf60();
  /* 124a1c0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a1c11:;
  /* 124a1c11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1c14 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124a1c17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1c1a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124a1c1d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a1c20 mov edx, dword ptr [eax*4 + 0x124c6220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124c6220)));
  /* 124a1c27 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 124a1c2b push eax */
  push32((uint32_t)(EAX));
  /* 124a1c2c call dword ptr [0x124c7324] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7324))), 0x124a1c32u);
  /* 124a1c32 mov esp, ebp */
  ESP = (EBP);
  /* 124a1c34 pop ebp */
  EBP = (pop32());
  /* 124a1c35 ret  */
  ESPCHK(0x124a1bb0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x124a1c40 (38 bytes, 13 insns) */
void f_124a1c40(void) {
  FTRACE(0x124a1c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1c40 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1c41 mov ebp, esp */
  EBP = (ESP);
  /* 124a1c43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1c46 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124a1c49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1c4c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124a1c4f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a1c52 mov edx, dword ptr [eax*4 + 0x124c6220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124c6220)));
  /* 124a1c59 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 124a1c5d push eax */
  push32((uint32_t)(EAX));
  /* 124a1c5e call dword ptr [0x124c7320] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7320))), 0x124a1c64u);
  /* 124a1c64 pop ebp */
  EBP = (pop32());
  /* 124a1c65 ret  */
  ESPCHK(0x124a1c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c70 @ 0x124a1c70 (218 bytes, 63 insns) */
void f_124a1c70(void) {
  FTRACE(0x124a1c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1c70 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1c71 mov ebp, esp */
  EBP = (ESP);
  /* 124a1c73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a1c76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a1c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 124a1c7f call 0x1249bec0 */
  push32(0x124a1c84u); f_1249bec0();
  /* 124a1c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1c87 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 124a1c8e jmp 0x124a1c99 */
  goto L_124a1c99;
L_124a1c90:;
  /* 124a1c90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1c93 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1c96 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124a1c99:;
  /* 124a1c99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1c9c cmp ecx, dword ptr [0x124c5f20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c5f20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1ca2 jge 0x124a1d39 */
  if ((C.sf==C.of)) goto L_124a1d39;
  /* 124a1ca8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1cab mov eax, dword ptr [0x124c4bd8] */
  EAX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1cb0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1cb4 je 0x124a1d34 */
  if (C.zf) goto L_124a1d34;
  /* 124a1cb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1cb9 mov edx, dword ptr [0x124c4bd8] */
  EDX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1cbf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 124a1cc2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124a1cc5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 124a1ccb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a1ccd je 0x124a1cf1 */
  if (C.zf) goto L_124a1cf1;
  /* 124a1ccf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1cd2 mov eax, dword ptr [0x124c4bd8] */
  EAX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1cd7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124a1cda push ecx */
  push32((uint32_t)(ECX));
  /* 124a1cdb call 0x124a2a60 */
  push32(0x124a1ce0u); f_124a2a60();
  /* 124a1ce0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1ce3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1ce6 je 0x124a1cf1 */
  if (C.zf) goto L_124a1cf1;
  /* 124a1ce8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1ceb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1cee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124a1cf1:;
  /* 124a1cf1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1cf5 jl 0x124a1d34 */
  if ((C.sf!=C.of)) goto L_124a1d34;
  /* 124a1cf7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1cfa mov ecx, dword ptr [0x124c4bd8] */
  ECX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1d00 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124a1d03 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1d06 push edx */
  push32((uint32_t)(EDX));
  /* 124a1d07 call dword ptr [0x124c739c] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c739c))), 0x124a1d0du);
  /* 124a1d0d push 2 */
  push32((uint32_t)(0x2u));
  /* 124a1d0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1d12 mov ecx, dword ptr [0x124c4bd8] */
  ECX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1d18 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124a1d1b push edx */
  push32((uint32_t)(EDX));
  /* 124a1d1c call 0x12498f50 */
  push32(0x124a1d21u); f_12498f50();
  /* 124a1d21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1d24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1d27 mov ecx, dword ptr [0x124c4bd8] */
  ECX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1d2d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_124a1d34:;
  /* 124a1d34 jmp 0x124a1c90 */
  goto L_124a1c90;
L_124a1d39:;
  /* 124a1d39 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a1d3b call 0x1249bf60 */
  push32(0x124a1d40u); f_1249bf60();
  /* 124a1d40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1d43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1d46 mov esp, ebp */
  ESP = (EBP);
  /* 124a1d48 pop ebp */
  EBP = (pop32());
  /* 124a1d49 ret  */
  ESPCHK(0x124a1c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d50 @ 0x124a1d50 (68 bytes, 26 insns) */
void f_124a1d50(void) {
  FTRACE(0x124a1d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1d50 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1d51 mov ebp, esp */
  EBP = (ESP);
  /* 124a1d53 push ecx */
  push32((uint32_t)(ECX));
  /* 124a1d54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1d58 jne 0x124a1d66 */
  if (!C.zf) goto L_124a1d66;
  /* 124a1d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 124a1d5c call 0x124a1ec0 */
  push32(0x124a1d61u); f_124a1ec0();
  /* 124a1d61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1d64 jmp 0x124a1d90 */
  goto L_124a1d90;
L_124a1d66:;
  /* 124a1d66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1d69 push eax */
  push32((uint32_t)(EAX));
  /* 124a1d6a call 0x124a12d0 */
  push32(0x124a1d6fu); f_124a12d0();
  /* 124a1d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1d72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1d75 push ecx */
  push32((uint32_t)(ECX));
  /* 124a1d76 call 0x124a1da0 */
  push32(0x124a1d7bu); f_124a1da0();
  /* 124a1d7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1d7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a1d81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1d84 push edx */
  push32((uint32_t)(EDX));
  /* 124a1d85 call 0x124a1340 */
  push32(0x124a1d8au); f_124a1340();
  /* 124a1d8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1d8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124a1d90:;
  /* 124a1d90 mov esp, ebp */
  ESP = (EBP);
  /* 124a1d92 pop ebp */
  EBP = (pop32());
  /* 124a1d93 ret  */
  ESPCHK(0x124a1d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011da0 @ 0x124a1da0 (65 bytes, 26 insns) */
void f_124a1da0(void) {
  FTRACE(0x124a1da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1da0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1da1 mov ebp, esp */
  EBP = (ESP);
  /* 124a1da3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1da6 push eax */
  push32((uint32_t)(EAX));
  /* 124a1da7 call 0x124a1df0 */
  push32(0x124a1dacu); f_124a1df0();
  /* 124a1dac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1daf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a1db1 je 0x124a1db8 */
  if (C.zf) goto L_124a1db8;
  /* 124a1db3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a1db6 jmp 0x124a1ddf */
  goto L_124a1ddf;
L_124a1db8:;
  /* 124a1db8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1dbb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124a1dbe and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 124a1dc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a1dc6 je 0x124a1ddd */
  if (C.zf) goto L_124a1ddd;
  /* 124a1dc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1dcb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124a1dce push ecx */
  push32((uint32_t)(ECX));
  /* 124a1dcf call 0x124a2bb0 */
  push32(0x124a1dd4u); f_124a2bb0();
  /* 124a1dd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1dd7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a1dd9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a1ddb jmp 0x124a1ddf */
  goto L_124a1ddf;
L_124a1ddd:;
  /* 124a1ddd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a1ddf:;
  /* 124a1ddf pop ebp */
  EBP = (pop32());
  /* 124a1de0 ret  */
  ESPCHK(0x124a1da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011df0 @ 0x124a1df0 (183 bytes, 62 insns) */
void f_124a1df0(void) {
  FTRACE(0x124a1df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1df0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1df1 mov ebp, esp */
  EBP = (ESP);
  /* 124a1df3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a1df6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a1dfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a1e00 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a1e03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1e06 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124a1e09 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 124a1e0c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1e0f jne 0x124a1e8b */
  if (!C.zf) goto L_124a1e8b;
  /* 124a1e11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1e14 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124a1e17 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 124a1e1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a1e1f je 0x124a1e8b */
  if (C.zf) goto L_124a1e8b;
  /* 124a1e21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1e24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1e27 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 124a1e29 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a1e2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a1e2f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1e33 jle 0x124a1e8b */
  if ((C.zf||C.sf!=C.of)) goto L_124a1e8b;
  /* 124a1e35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1e38 push edx */
  push32((uint32_t)(EDX));
  /* 124a1e39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1e3c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124a1e3f push ecx */
  push32((uint32_t)(ECX));
  /* 124a1e40 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1e43 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 124a1e46 push eax */
  push32((uint32_t)(EAX));
  /* 124a1e47 call 0x124a0d60 */
  push32(0x124a1e4cu); f_124a0d60();
  /* 124a1e4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1e4f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1e52 jne 0x124a1e75 */
  if (!C.zf) goto L_124a1e75;
  /* 124a1e54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1e57 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124a1e5a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 124a1e60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a1e62 je 0x124a1e73 */
  if (C.zf) goto L_124a1e73;
  /* 124a1e64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1e67 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124a1e6a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 124a1e6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1e70 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_124a1e73:;
  /* 124a1e73 jmp 0x124a1e8b */
  goto L_124a1e8b;
L_124a1e75:;
  /* 124a1e75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1e78 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124a1e7b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 124a1e7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1e81 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 124a1e84 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124a1e8b:;
  /* 124a1e8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1e8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1e91 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 124a1e94 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124a1e96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a1e99 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 124a1ea0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1ea3 mov esp, ebp */
  ESP = (EBP);
  /* 124a1ea5 pop ebp */
  EBP = (pop32());
  /* 124a1ea6 ret  */
  ESPCHK(0x124a1df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011eb0 @ 0x124a1eb0 (15 bytes, 7 insns) */
void f_124a1eb0(void) {
  FTRACE(0x124a1eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1eb1 mov ebp, esp */
  EBP = (ESP);
  /* 124a1eb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a1eb5 call 0x124a1ec0 */
  push32(0x124a1ebau); f_124a1ec0();
  /* 124a1eba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1ebd pop ebp */
  EBP = (pop32());
  /* 124a1ebe ret  */
  ESPCHK(0x124a1eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ec0 @ 0x124a1ec0 (319 bytes, 94 insns) */
void f_124a1ec0(void) {
  FTRACE(0x124a1ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a1ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a1ec1 mov ebp, esp */
  EBP = (ESP);
  /* 124a1ec3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a1ec6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a1ecd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124a1ed4 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a1ed6 call 0x1249bec0 */
  push32(0x124a1edbu); f_1249bec0();
  /* 124a1edb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1ede mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124a1ee5 jmp 0x124a1ef0 */
  goto L_124a1ef0;
L_124a1ee7:;
  /* 124a1ee7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1eea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1eed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124a1ef0:;
  /* 124a1ef0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1ef3 cmp ecx, dword ptr [0x124c5f20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124c5f20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1ef9 jge 0x124a1fe3 */
  if ((C.sf==C.of)) goto L_124a1fe3;
  /* 124a1eff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1f02 mov eax, dword ptr [0x124c4bd8] */
  EAX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1f07 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1f0b je 0x124a1fde */
  if (C.zf) goto L_124a1fde;
  /* 124a1f11 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1f14 mov edx, dword ptr [0x124c4bd8] */
  EDX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1f1a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 124a1f1d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124a1f20 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 124a1f26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a1f28 je 0x124a1fde */
  if (C.zf) goto L_124a1fde;
  /* 124a1f2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1f31 mov eax, dword ptr [0x124c4bd8] */
  EAX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1f36 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124a1f39 push ecx */
  push32((uint32_t)(ECX));
  /* 124a1f3a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1f3d push edx */
  push32((uint32_t)(EDX));
  /* 124a1f3e call 0x124a1310 */
  push32(0x124a1f43u); f_124a1310();
  /* 124a1f43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1f46 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1f49 mov ecx, dword ptr [0x124c4bd8] */
  ECX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1f4f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124a1f52 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 124a1f55 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 124a1f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a1f5c je 0x124a1fc5 */
  if (C.zf) goto L_124a1fc5;
  /* 124a1f5e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1f62 jne 0x124a1f89 */
  if (!C.zf) goto L_124a1f89;
  /* 124a1f64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1f67 mov edx, dword ptr [0x124c4bd8] */
  EDX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1f6d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 124a1f70 push eax */
  push32((uint32_t)(EAX));
  /* 124a1f71 call 0x124a1da0 */
  push32(0x124a1f76u); f_124a1da0();
  /* 124a1f76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1f79 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1f7c je 0x124a1f87 */
  if (C.zf) goto L_124a1f87;
  /* 124a1f7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1f81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1f84 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124a1f87:;
  /* 124a1f87 jmp 0x124a1fc5 */
  goto L_124a1fc5;
L_124a1f89:;
  /* 124a1f89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1f8d jne 0x124a1fc5 */
  if (!C.zf) goto L_124a1fc5;
  /* 124a1f8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1f92 mov eax, dword ptr [0x124c4bd8] */
  EAX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1f97 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124a1f9a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124a1f9d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 124a1fa0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a1fa2 je 0x124a1fc5 */
  if (C.zf) goto L_124a1fc5;
  /* 124a1fa4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1fa7 mov ecx, dword ptr [0x124c4bd8] */
  ECX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1fad mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124a1fb0 push edx */
  push32((uint32_t)(EDX));
  /* 124a1fb1 call 0x124a1da0 */
  push32(0x124a1fb6u); f_124a1da0();
  /* 124a1fb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1fb9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1fbc jne 0x124a1fc5 */
  if (!C.zf) goto L_124a1fc5;
  /* 124a1fbe mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_124a1fc5:;
  /* 124a1fc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1fc8 mov ecx, dword ptr [0x124c4bd8] */
  ECX = (r32((uint32_t)(0x124c4bd8)));
  /* 124a1fce mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124a1fd1 push edx */
  push32((uint32_t)(EDX));
  /* 124a1fd2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a1fd5 push eax */
  push32((uint32_t)(EAX));
  /* 124a1fd6 call 0x124a1380 */
  push32(0x124a1fdbu); f_124a1380();
  /* 124a1fdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a1fde:;
  /* 124a1fde jmp 0x124a1ee7 */
  goto L_124a1ee7;
L_124a1fe3:;
  /* 124a1fe3 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a1fe5 call 0x1249bf60 */
  push32(0x124a1feau); f_1249bf60();
  /* 124a1fea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a1fed cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a1ff1 jne 0x124a1ff8 */
  if (!C.zf) goto L_124a1ff8;
  /* 124a1ff3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a1ff6 jmp 0x124a1ffb */
  goto L_124a1ffb;
L_124a1ff8:;
  /* 124a1ff8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124a1ffb:;
  /* 124a1ffb mov esp, ebp */
  ESP = (EBP);
  /* 124a1ffd pop ebp */
  EBP = (pop32());
  /* 124a1ffe ret  */
  ESPCHK(0x124a1ec0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x124a2000 (15 bytes, 7 insns) */
void f_124a2000(void) {
  FTRACE(0x124a2000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a2000 push ebp */
  push32((uint32_t)(EBP));
  /* 124a2001 mov ebp, esp */
  EBP = (ESP);
  /* 124a2003 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2005 call 0x12497430 */
  push32(0x124a200au); f_12497430();
  /* 124a200a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a200d pop ebp */
  EBP = (pop32());
  /* 124a200e ret  */
  ESPCHK(0x124a2000u, _esp0);
  ESP += 4; return;
}

/* FUN_10012010 @ 0x124a2010 (1007 bytes, 269 insns) */
void f_124a2010(void) {
  FTRACE(0x124a2010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a2010 push ebp */
  push32((uint32_t)(EBP));
  /* 124a2011 mov ebp, esp */
  EBP = (ESP);
  /* 124a2013 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a2019 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a201d jl 0x124a2025 */
  if ((C.sf!=C.of)) goto L_124a2025;
  /* 124a201f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2023 jle 0x124a202c */
  if ((C.zf||C.sf!=C.of)) goto L_124a202c;
L_124a2025:;
  /* 124a2025 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a2027 jmp 0x124a23fb */
  goto L_124a23fb;
L_124a202c:;
  /* 124a202c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124a202e call 0x1249bec0 */
  push32(0x124a2033u); f_1249bec0();
  /* 124a2033 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2036 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124a203d mov eax, dword ptr [0x124c4bc4] */
  EAX = (r32((uint32_t)(0x124c4bc4)));
  /* 124a2042 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2045 mov dword ptr [0x124c4bc4], eax */
  w32((uint32_t)(0x124c4bc4), (EAX));
L_124a204a:;
  /* 124a204a cmp dword ptr [0x124c4bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2051 je 0x124a205d */
  if (C.zf) goto L_124a205d;
  /* 124a2053 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2055 call dword ptr [0x124c72dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72dc))), 0x124a205bu);
  /* 124a205b jmp 0x124a204a */
  goto L_124a204a;
L_124a205d:;
  /* 124a205d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2061 je 0x124a20a1 */
  if (C.zf) goto L_124a20a1;
  /* 124a2063 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2067 je 0x124a2081 */
  if (C.zf) goto L_124a2081;
  /* 124a2069 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a206c push ecx */
  push32((uint32_t)(ECX));
  /* 124a206d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2070 push edx */
  push32((uint32_t)(EDX));
  /* 124a2071 call 0x124a2400 */
  push32(0x124a2076u); f_124a2400();
  /* 124a2076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2079 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 124a207f jmp 0x124a2093 */
  goto L_124a2093;
L_124a2081:;
  /* 124a2081 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2084 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a2087 mov ecx, dword ptr [eax + 0x124c34dc] */
  ECX = (r32((uint32_t)(EAX + 0x124c34dc)));
  /* 124a208d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_124a2093:;
  /* 124a2093 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 124a2099 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124a209c jmp 0x124a23db */
  goto L_124a23db;
L_124a20a1:;
  /* 124a20a1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 124a20a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124a20af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a20b3 je 0x124a23d3 */
  if (C.zf) goto L_124a23d3;
  /* 124a20b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a20bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a20bf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a20c2 jne 0x124a22e4 */
  if (!C.zf) goto L_124a22e4;
  /* 124a20c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a20cb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 124a20cf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a20d2 jne 0x124a22e4 */
  if (!C.zf) goto L_124a22e4;
  /* 124a20d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a20db movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 124a20df cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a20e2 jne 0x124a22e4 */
  if (!C.zf) goto L_124a22e4;
  /* 124a20e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a20eb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_124a20f1:;
  /* 124a20f1 push 0x124c091c */
  push32((uint32_t)(0x124c091cu));
  /* 124a20f6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124a20fc push ecx */
  push32((uint32_t)(ECX));
  /* 124a20fd call 0x124a4260 */
  push32(0x124a2102u); f_124a4260();
  /* 124a2102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2105 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 124a210b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2112 je 0x124a213d */
  if (C.zf) goto L_124a213d;
  /* 124a2114 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124a211a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a2120 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 124a2126 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a212d je 0x124a213d */
  if (C.zf) goto L_124a213d;
  /* 124a212f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124a2135 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a2138 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a213b jne 0x124a2163 */
  if (!C.zf) goto L_124a2163;
L_124a213d:;
  /* 124a213d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2141 je 0x124a215c */
  if (C.zf) goto L_124a215c;
  /* 124a2143 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124a2145 call 0x1249bf60 */
  push32(0x124a214au); f_1249bf60();
  /* 124a214a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a214d mov edx, dword ptr [0x124c4bc4] */
  EDX = (r32((uint32_t)(0x124c4bc4)));
  /* 124a2153 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a2156 mov dword ptr [0x124c4bc4], edx */
  w32((uint32_t)(0x124c4bc4), (EDX));
L_124a215c:;
  /* 124a215c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a215e jmp 0x124a23fb */
  goto L_124a23fb;
L_124a2163:;
  /* 124a2163 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 124a216a jmp 0x124a2175 */
  goto L_124a2175;
L_124a216c:;
  /* 124a216c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a216f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2172 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_124a2175:;
  /* 124a2175 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2179 jg 0x124a21c3 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a21c3;
  /* 124a217b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 124a2181 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2182 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124a2188 push edx */
  push32((uint32_t)(EDX));
  /* 124a2189 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a218c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a218f mov ecx, dword ptr [eax + 0x124c34d8] */
  ECX = (r32((uint32_t)(EAX + 0x124c34d8)));
  /* 124a2195 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2196 call 0x124a4220 */
  push32(0x124a219bu); f_124a4220();
  /* 124a219b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a219e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a21a0 jne 0x124a21c1 */
  if (!C.zf) goto L_124a21c1;
  /* 124a21a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a21a5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a21a8 mov eax, dword ptr [edx + 0x124c34d8] */
  EAX = (r32((uint32_t)(EDX + 0x124c34d8)));
  /* 124a21ae push eax */
  push32((uint32_t)(EAX));
  /* 124a21af call 0x1249b2f0 */
  push32(0x124a21b4u); f_1249b2f0();
  /* 124a21b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a21b7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a21bd jne 0x124a21c1 */
  if (!C.zf) goto L_124a21c1;
  /* 124a21bf jmp 0x124a21c3 */
  goto L_124a21c3;
L_124a21c1:;
  /* 124a21c1 jmp 0x124a216c */
  goto L_124a216c;
L_124a21c3:;
  /* 124a21c3 push 0x124c0918 */
  push32((uint32_t)(0x124c0918u));
  /* 124a21c8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124a21ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a21d1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 124a21d7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124a21dd push edx */
  push32((uint32_t)(EDX));
  /* 124a21de call 0x124a41e0 */
  push32(0x124a21e3u); f_124a41e0();
  /* 124a21e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a21e6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 124a21ec cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a21f3 jne 0x124a2229 */
  if (!C.zf) goto L_124a2229;
  /* 124a21f5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124a21fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a21fe cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2201 je 0x124a2229 */
  if (C.zf) goto L_124a2229;
  /* 124a2203 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2207 je 0x124a2222 */
  if (C.zf) goto L_124a2222;
  /* 124a2209 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124a220b call 0x1249bf60 */
  push32(0x124a2210u); f_1249bf60();
  /* 124a2210 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2213 mov edx, dword ptr [0x124c4bc4] */
  EDX = (r32((uint32_t)(0x124c4bc4)));
  /* 124a2219 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a221c mov dword ptr [0x124c4bc4], edx */
  w32((uint32_t)(0x124c4bc4), (EDX));
L_124a2222:;
  /* 124a2222 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a2224 jmp 0x124a23fb */
  goto L_124a23fb;
L_124a2229:;
  /* 124a2229 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a222d jg 0x124a227a */
  if ((!C.zf&&C.sf==C.of)) goto L_124a227a;
  /* 124a222f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 124a2235 push eax */
  push32((uint32_t)(EAX));
  /* 124a2236 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124a223c push ecx */
  push32((uint32_t)(ECX));
  /* 124a223d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 124a2243 push edx */
  push32((uint32_t)(EDX));
  /* 124a2244 call 0x1249bce0 */
  push32(0x124a2249u); f_1249bce0();
  /* 124a2249 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a224c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 124a2252 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 124a225a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 124a2260 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2261 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a2264 push edx */
  push32((uint32_t)(EDX));
  /* 124a2265 call 0x124a2400 */
  push32(0x124a226au); f_124a2400();
  /* 124a226a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a226d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a226f je 0x124a227a */
  if (C.zf) goto L_124a227a;
  /* 124a2271 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2274 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2277 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124a227a:;
  /* 124a227a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124a2280 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2286 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 124a228c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124a2292 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124a2295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a2297 je 0x124a22a8 */
  if (C.zf) goto L_124a22a8;
  /* 124a2299 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124a229f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a22a2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_124a22a8:;
  /* 124a22a8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124a22ae movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124a22b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a22b3 jne 0x124a20f1 */
  if (!C.zf) goto L_124a20f1;
  /* 124a22b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a22bd je 0x124a22cc */
  if (C.zf) goto L_124a22cc;
  /* 124a22bf call 0x124a25a0 */
  push32(0x124a22c4u); f_124a25a0();
  /* 124a22c4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 124a22ca jmp 0x124a22d6 */
  goto L_124a22d6;
L_124a22cc:;
  /* 124a22cc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_124a22d6:;
  /* 124a22d6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 124a22dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a22df jmp 0x124a23d1 */
  goto L_124a23d1;
L_124a22e4:;
  /* 124a22e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a22e7 push edx */
  push32((uint32_t)(EDX));
  /* 124a22e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a22ea push 0 */
  push32((uint32_t)(0x0u));
  /* 124a22ec lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 124a22f2 push eax */
  push32((uint32_t)(EAX));
  /* 124a22f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a22f6 push ecx */
  push32((uint32_t)(ECX));
  /* 124a22f7 call 0x124a26a0 */
  push32(0x124a22fcu); f_124a26a0();
  /* 124a22fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a22ff mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a2302 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2306 je 0x124a23d1 */
  if (C.zf) goto L_124a23d1;
  /* 124a230c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124a2313 jmp 0x124a231e */
  goto L_124a231e;
L_124a2315:;
  /* 124a2315 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a2318 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a231b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124a231e:;
  /* 124a231e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2322 jg 0x124a2380 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a2380;
  /* 124a2324 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2328 je 0x124a237e */
  if (C.zf) goto L_124a237e;
  /* 124a232a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a232d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a2330 mov ecx, dword ptr [eax + 0x124c34dc] */
  ECX = (r32((uint32_t)(EAX + 0x124c34dc)));
  /* 124a2336 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2337 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 124a233d push edx */
  push32((uint32_t)(EDX));
  /* 124a233e call 0x124a4150 */
  push32(0x124a2343u); f_124a4150();
  /* 124a2343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2346 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a2348 je 0x124a2375 */
  if (C.zf) goto L_124a2375;
  /* 124a234a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 124a2350 push eax */
  push32((uint32_t)(EAX));
  /* 124a2351 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a2354 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2355 call 0x124a2400 */
  push32(0x124a235au); f_124a2400();
  /* 124a235a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a235d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a235f je 0x124a236c */
  if (C.zf) goto L_124a236c;
  /* 124a2361 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2364 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2367 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 124a236a jmp 0x124a2373 */
  goto L_124a2373;
L_124a236c:;
  /* 124a236c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_124a2373:;
  /* 124a2373 jmp 0x124a237e */
  goto L_124a237e;
L_124a2375:;
  /* 124a2375 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2378 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a237b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124a237e:;
  /* 124a237e jmp 0x124a2315 */
  goto L_124a2315;
L_124a2380:;
  /* 124a2380 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2384 je 0x124a23ab */
  if (C.zf) goto L_124a23ab;
  /* 124a2386 call 0x124a25a0 */
  push32(0x124a238bu); f_124a25a0();
  /* 124a238b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a238e push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2390 mov ecx, dword ptr [0x124c34dc] */
  ECX = (r32((uint32_t)(0x124c34dc)));
  /* 124a2396 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2397 call 0x12498f50 */
  push32(0x124a239cu); f_12498f50();
  /* 124a239c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a239f mov dword ptr [0x124c34dc], 0 */
  w32((uint32_t)(0x124c34dc), (0x0u));
  /* 124a23a9 jmp 0x124a23d1 */
  goto L_124a23d1;
L_124a23ab:;
  /* 124a23ab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a23af je 0x124a23be */
  if (C.zf) goto L_124a23be;
  /* 124a23b1 call 0x124a25a0 */
  push32(0x124a23b6u); f_124a25a0();
  /* 124a23b6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 124a23bc jmp 0x124a23c8 */
  goto L_124a23c8;
L_124a23be:;
  /* 124a23be mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_124a23c8:;
  /* 124a23c8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 124a23ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_124a23d1:;
  /* 124a23d1 jmp 0x124a23db */
  goto L_124a23db;
L_124a23d3:;
  /* 124a23d3 call 0x124a25a0 */
  push32(0x124a23d8u); f_124a25a0();
  /* 124a23d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124a23db:;
  /* 124a23db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a23df je 0x124a23f8 */
  if (C.zf) goto L_124a23f8;
  /* 124a23e1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124a23e3 call 0x1249bf60 */
  push32(0x124a23e8u); f_1249bf60();
  /* 124a23e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a23eb mov eax, dword ptr [0x124c4bc4] */
  EAX = (r32((uint32_t)(0x124c4bc4)));
  /* 124a23f0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a23f3 mov dword ptr [0x124c4bc4], eax */
  w32((uint32_t)(0x124c4bc4), (EAX));
L_124a23f8:;
  /* 124a23f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124a23fb:;
  /* 124a23fb mov esp, ebp */
  ESP = (EBP);
  /* 124a23fd pop ebp */
  EBP = (pop32());
  /* 124a23fe ret  */
  ESPCHK(0x124a2010u, _esp0);
  ESP += 4; return;
}

/* FUN_10012400 @ 0x124a2400 (403 bytes, 117 insns) */
void f_124a2400(void) {
  FTRACE(0x124a2400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a2400 push ebp */
  push32((uint32_t)(EBP));
  /* 124a2401 mov ebp, esp */
  EBP = (ESP);
  /* 124a2403 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a2409 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a240c push eax */
  push32((uint32_t)(EAX));
  /* 124a240d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 124a2413 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2414 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 124a241a push edx */
  push32((uint32_t)(EDX));
  /* 124a241b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 124a2421 push eax */
  push32((uint32_t)(EAX));
  /* 124a2422 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a2425 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2426 call 0x124a26a0 */
  push32(0x124a242bu); f_124a26a0();
  /* 124a242b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a242e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a2430 jne 0x124a2439 */
  if (!C.zf) goto L_124a2439;
  /* 124a2432 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a2434 jmp 0x124a258f */
  goto L_124a258f;
L_124a2439:;
  /* 124a2439 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 124a243e push 0x124c0920 */
  push32((uint32_t)(0x124c0920u));
  /* 124a2443 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2445 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 124a244b push edx */
  push32((uint32_t)(EDX));
  /* 124a244c call 0x1249b2f0 */
  push32(0x124a2451u); f_1249b2f0();
  /* 124a2451 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2454 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2457 push eax */
  push32((uint32_t)(EAX));
  /* 124a2458 call 0x124984c0 */
  push32(0x124a245du); f_124984c0();
  /* 124a245d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2460 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a2463 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2467 jne 0x124a2470 */
  if (!C.zf) goto L_124a2470;
  /* 124a2469 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a246b jmp 0x124a258f */
  goto L_124a258f;
L_124a2470:;
  /* 124a2470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2473 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a2476 mov ecx, dword ptr [eax + 0x124c34dc] */
  ECX = (r32((uint32_t)(EAX + 0x124c34dc)));
  /* 124a247c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a247f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2482 mov eax, dword ptr [edx*4 + 0x124c4a40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x124c4a40)));
  /* 124a2489 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a248c push 6 */
  push32((uint32_t)(0x6u));
  /* 124a248e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2491 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a2494 add ecx, 0x124c4a90 */
  { uint32_t _a=(ECX),_b=(0x124c4a90u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a249a push ecx */
  push32((uint32_t)(ECX));
  /* 124a249b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 124a249e push edx */
  push32((uint32_t)(EDX));
  /* 124a249f call 0x1249eda0 */
  push32(0x124a24a4u); f_1249eda0();
  /* 124a24a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a24a7 mov eax, dword ptr [0x124c4a58] */
  EAX = (r32((uint32_t)(0x124c4a58)));
  /* 124a24ac mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124a24af lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 124a24b5 push ecx */
  push32((uint32_t)(ECX));
  /* 124a24b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a24b9 push edx */
  push32((uint32_t)(EDX));
  /* 124a24ba call 0x1249b470 */
  push32(0x124a24bfu); f_1249b470();
  /* 124a24bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a24c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a24c5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a24c8 mov dword ptr [ecx + 0x124c34dc], eax */
  w32((uint32_t)(ECX + 0x124c34dc), (EAX));
  /* 124a24ce mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 124a24d4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124a24da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a24dd mov dword ptr [eax*4 + 0x124c4a40], edx */
  w32((uint32_t)(EAX*4 + 0x124c4a40), (EDX));
  /* 124a24e4 push 6 */
  push32((uint32_t)(0x6u));
  /* 124a24e6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 124a24ec push ecx */
  push32((uint32_t)(ECX));
  /* 124a24ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a24f0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a24f3 add edx, 0x124c4a90 */
  { uint32_t _a=(EDX),_b=(0x124c4a90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a24f9 push edx */
  push32((uint32_t)(EDX));
  /* 124a24fa call 0x1249eda0 */
  push32(0x124a24ffu); f_1249eda0();
  /* 124a24ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2502 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2506 jne 0x124a2513 */
  if (!C.zf) goto L_124a2513;
  /* 124a2508 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124a250e mov dword ptr [0x124c4a58], eax */
  w32((uint32_t)(0x124c4a58), (EAX));
L_124a2513:;
  /* 124a2513 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2517 jne 0x124a2525 */
  if (!C.zf) goto L_124a2525;
  /* 124a2519 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124a251f mov dword ptr [0x124c4a5c], ecx */
  w32((uint32_t)(0x124c4a5c), (ECX));
L_124a2525:;
  /* 124a2525 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2528 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a252b call dword ptr [edx + 0x124c34e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x124c34e0))), 0x124a2531u);
  /* 124a2531 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a2533 je 0x124a256c */
  if (C.zf) goto L_124a256c;
  /* 124a2535 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2538 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a253b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a253e mov dword ptr [eax + 0x124c34dc], ecx */
  w32((uint32_t)(EAX + 0x124c34dc), (ECX));
  /* 124a2544 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2546 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a2549 push edx */
  push32((uint32_t)(EDX));
  /* 124a254a call 0x12498f50 */
  push32(0x124a254fu); f_12498f50();
  /* 124a254f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2552 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2558 mov dword ptr [eax*4 + 0x124c4a40], ecx */
  w32((uint32_t)(EAX*4 + 0x124c4a40), (ECX));
  /* 124a255f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a2562 mov dword ptr [0x124c4a58], edx */
  w32((uint32_t)(0x124c4a58), (EDX));
  /* 124a2568 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a256a jmp 0x124a258f */
  goto L_124a258f;
L_124a256c:;
  /* 124a256c cmp dword ptr [ebp - 0xc], 0x124c33c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x124c33c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2573 je 0x124a2583 */
  if (C.zf) goto L_124a2583;
  /* 124a2575 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2577 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a257a push eax */
  push32((uint32_t)(EAX));
  /* 124a257b call 0x12498f50 */
  push32(0x124a2580u); f_12498f50();
  /* 124a2580 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a2583:;
  /* 124a2583 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2586 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a2589 mov eax, dword ptr [ecx + 0x124c34dc] */
  EAX = (r32((uint32_t)(ECX + 0x124c34dc)));
L_124a258f:;
  /* 124a258f mov esp, ebp */
  ESP = (EBP);
  /* 124a2591 pop ebp */
  EBP = (pop32());
  /* 124a2592 ret  */
  ESPCHK(0x124a2400u, _esp0);
  ESP += 4; return;
}

/* FUN_100125a0 @ 0x124a25a0 (256 bytes, 72 insns) */
void f_124a25a0(void) {
  FTRACE(0x124a25a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a25a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a25a1 mov ebp, esp */
  EBP = (ESP);
  /* 124a25a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a25a6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 124a25ad cmp dword ptr [0x124c34dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c34dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a25b4 jne 0x124a25d4 */
  if (!C.zf) goto L_124a25d4;
  /* 124a25b6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 124a25bb push 0x124c0920 */
  push32((uint32_t)(0x124c0920u));
  /* 124a25c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a25c2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 124a25c7 call 0x124984c0 */
  push32(0x124a25ccu); f_124984c0();
  /* 124a25cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a25cf mov dword ptr [0x124c34dc], eax */
  w32((uint32_t)(0x124c34dc), (EAX));
L_124a25d4:;
  /* 124a25d4 mov eax, dword ptr [0x124c34dc] */
  EAX = (r32((uint32_t)(0x124c34dc)));
  /* 124a25d9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 124a25dc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124a25e3 jmp 0x124a25ee */
  goto L_124a25ee;
L_124a25e5:;
  /* 124a25e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a25e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a25eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124a25ee:;
  /* 124a25ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a25f1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a25f4 mov eax, dword ptr [edx + 0x124c34dc] */
  EAX = (r32((uint32_t)(EDX + 0x124c34dc)));
  /* 124a25fa push eax */
  push32((uint32_t)(EAX));
  /* 124a25fb push 0x124c092c */
  push32((uint32_t)(0x124c092cu));
  /* 124a2600 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2603 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a2606 mov edx, dword ptr [ecx + 0x124c34d8] */
  EDX = (r32((uint32_t)(ECX + 0x124c34d8)));
  /* 124a260c push edx */
  push32((uint32_t)(EDX));
  /* 124a260d push 3 */
  push32((uint32_t)(0x3u));
  /* 124a260f mov eax, dword ptr [0x124c34dc] */
  EAX = (r32((uint32_t)(0x124c34dc)));
  /* 124a2614 push eax */
  push32((uint32_t)(EAX));
  /* 124a2615 call 0x124a2840 */
  push32(0x124a261au); f_124a2840();
  /* 124a261a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a261d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2621 jge 0x124a2669 */
  if ((C.sf==C.of)) goto L_124a2669;
  /* 124a2623 push 0x124c0918 */
  push32((uint32_t)(0x124c0918u));
  /* 124a2628 mov ecx, dword ptr [0x124c34dc] */
  ECX = (r32((uint32_t)(0x124c34dc)));
  /* 124a262e push ecx */
  push32((uint32_t)(ECX));
  /* 124a262f call 0x1249b480 */
  push32(0x124a2634u); f_1249b480();
  /* 124a2634 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2637 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a263a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a263d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a2640 mov eax, dword ptr [edx + 0x124c34dc] */
  EAX = (r32((uint32_t)(EDX + 0x124c34dc)));
  /* 124a2646 push eax */
  push32((uint32_t)(EAX));
  /* 124a2647 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a264a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a264d mov edx, dword ptr [ecx + 0x124c34dc] */
  EDX = (r32((uint32_t)(ECX + 0x124c34dc)));
  /* 124a2653 push edx */
  push32((uint32_t)(EDX));
  /* 124a2654 call 0x124a4150 */
  push32(0x124a2659u); f_124a4150();
  /* 124a2659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a265c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a265e je 0x124a2667 */
  if (C.zf) goto L_124a2667;
  /* 124a2660 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_124a2667:;
  /* 124a2667 jmp 0x124a2697 */
  goto L_124a2697;
L_124a2669:;
  /* 124a2669 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a266d jne 0x124a2676 */
  if (!C.zf) goto L_124a2676;
  /* 124a266f mov eax, dword ptr [0x124c34dc] */
  EAX = (r32((uint32_t)(0x124c34dc)));
  /* 124a2674 jmp 0x124a269c */
  goto L_124a269c;
L_124a2676:;
  /* 124a2676 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2678 mov eax, dword ptr [0x124c34dc] */
  EAX = (r32((uint32_t)(0x124c34dc)));
  /* 124a267d push eax */
  push32((uint32_t)(EAX));
  /* 124a267e call 0x12498f50 */
  push32(0x124a2683u); f_12498f50();
  /* 124a2683 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2686 mov dword ptr [0x124c34dc], 0 */
  w32((uint32_t)(0x124c34dc), (0x0u));
  /* 124a2690 mov eax, dword ptr [0x124c34f4] */
  EAX = (r32((uint32_t)(0x124c34f4)));
  /* 124a2695 jmp 0x124a269c */
  goto L_124a269c;
L_124a2697:;
  /* 124a2697 jmp 0x124a25e5 */
  goto L_124a25e5;
L_124a269c:;
  /* 124a269c mov esp, ebp */
  ESP = (EBP);
  /* 124a269e pop ebp */
  EBP = (pop32());
  /* 124a269f ret  */
  ESPCHK(0x124a25a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126a0 @ 0x124a26a0 (388 bytes, 115 insns) */
void f_124a26a0(void) {
  FTRACE(0x124a26a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a26a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a26a1 mov ebp, esp */
  EBP = (ESP);
  /* 124a26a3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a26a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a26ad jne 0x124a26b6 */
  if (!C.zf) goto L_124a26b6;
  /* 124a26af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a26b1 jmp 0x124a2820 */
  goto L_124a2820;
L_124a26b6:;
  /* 124a26b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a26b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a26bc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a26bf jne 0x124a2710 */
  if (!C.zf) goto L_124a2710;
  /* 124a26c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a26c4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 124a26c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a26ca jne 0x124a2710 */
  if (!C.zf) goto L_124a2710;
  /* 124a26cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a26cf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 124a26d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a26d5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 124a26d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a26dd je 0x124a26f9 */
  if (C.zf) goto L_124a26f9;
  /* 124a26df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a26e2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 124a26e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a26ea mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 124a26f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a26f3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_124a26f9:;
  /* 124a26f9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a26fd je 0x124a2708 */
  if (C.zf) goto L_124a2708;
  /* 124a26ff mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a2702 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_124a2708:;
  /* 124a2708 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a270b jmp 0x124a2820 */
  goto L_124a2820;
L_124a2710:;
  /* 124a2710 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2713 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2714 push 0x124c3450 */
  push32((uint32_t)(0x124c3450u));
  /* 124a2719 call 0x124a4150 */
  push32(0x124a271eu); f_124a4150();
  /* 124a271e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2721 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a2723 je 0x124a27d8 */
  if (C.zf) goto L_124a27d8;
  /* 124a2729 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a272c push edx */
  push32((uint32_t)(EDX));
  /* 124a272d push 0x124c33cc */
  push32((uint32_t)(0x124c33ccu));
  /* 124a2732 call 0x124a4150 */
  push32(0x124a2737u); f_124a4150();
  /* 124a2737 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a273a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a273c je 0x124a27d8 */
  if (C.zf) goto L_124a27d8;
  /* 124a2742 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2745 push eax */
  push32((uint32_t)(EAX));
  /* 124a2746 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 124a274c push ecx */
  push32((uint32_t)(ECX));
  /* 124a274d call 0x124a2890 */
  push32(0x124a2752u); f_124a2890();
  /* 124a2752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2755 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a2757 je 0x124a2760 */
  if (C.zf) goto L_124a2760;
  /* 124a2759 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a275b jmp 0x124a2820 */
  goto L_124a2820;
L_124a2760:;
  /* 124a2760 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 124a2766 push edx */
  push32((uint32_t)(EDX));
  /* 124a2767 push 0x124c4a68 */
  push32((uint32_t)(0x124c4a68u));
  /* 124a276c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 124a2772 push eax */
  push32((uint32_t)(EAX));
  /* 124a2773 call 0x124a42a0 */
  push32(0x124a2778u); f_124a42a0();
  /* 124a2778 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a277b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a277d jne 0x124a2786 */
  if (!C.zf) goto L_124a2786;
  /* 124a277f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a2781 jmp 0x124a2820 */
  goto L_124a2820;
L_124a2786:;
  /* 124a2786 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2788 mov cx, word ptr [0x124c4a6c] */
  CX = (r16((uint32_t)(0x124c4a6c)));
  /* 124a278f mov dword ptr [0x124c4a70], ecx */
  w32((uint32_t)(0x124c4a70), (ECX));
  /* 124a2795 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 124a279b push edx */
  push32((uint32_t)(EDX));
  /* 124a279c push 0x124c3450 */
  push32((uint32_t)(0x124c3450u));
  /* 124a27a1 call 0x124a29f0 */
  push32(0x124a27a6u); f_124a29f0();
  /* 124a27a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a27a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a27ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a27af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a27b1 je 0x124a27c6 */
  if (C.zf) goto L_124a27c6;
  /* 124a27b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a27b6 push edx */
  push32((uint32_t)(EDX));
  /* 124a27b7 push 0x124c33cc */
  push32((uint32_t)(0x124c33ccu));
  /* 124a27bc call 0x1249b470 */
  push32(0x124a27c1u); f_1249b470();
  /* 124a27c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a27c4 jmp 0x124a27d8 */
  goto L_124a27d8;
L_124a27c6:;
  /* 124a27c6 push 0x124c3450 */
  push32((uint32_t)(0x124c3450u));
  /* 124a27cb push 0x124c33cc */
  push32((uint32_t)(0x124c33ccu));
  /* 124a27d0 call 0x1249b470 */
  push32(0x124a27d5u); f_1249b470();
  /* 124a27d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a27d8:;
  /* 124a27d8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a27dc je 0x124a27f1 */
  if (C.zf) goto L_124a27f1;
  /* 124a27de push 6 */
  push32((uint32_t)(0x6u));
  /* 124a27e0 push 0x124c4a68 */
  push32((uint32_t)(0x124c4a68u));
  /* 124a27e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a27e8 push eax */
  push32((uint32_t)(EAX));
  /* 124a27e9 call 0x1249eda0 */
  push32(0x124a27eeu); f_1249eda0();
  /* 124a27ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a27f1:;
  /* 124a27f1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a27f5 je 0x124a280a */
  if (C.zf) goto L_124a280a;
  /* 124a27f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 124a27f9 push 0x124c4a70 */
  push32((uint32_t)(0x124c4a70u));
  /* 124a27fe mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a2801 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2802 call 0x1249eda0 */
  push32(0x124a2807u); f_1249eda0();
  /* 124a2807 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a280a:;
  /* 124a280a push 0x124c3450 */
  push32((uint32_t)(0x124c3450u));
  /* 124a280f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a2812 push edx */
  push32((uint32_t)(EDX));
  /* 124a2813 call 0x1249b470 */
  push32(0x124a2818u); f_1249b470();
  /* 124a2818 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a281b mov eax, 0x124c3450 */
  EAX = (0x124c3450u);
L_124a2820:;
  /* 124a2820 mov esp, ebp */
  ESP = (EBP);
  /* 124a2822 pop ebp */
  EBP = (pop32());
  /* 124a2823 ret  */
  ESPCHK(0x124a26a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012830 @ 0x124a2830 (7 bytes, 5 insns) */
void f_124a2830(void) {
  FTRACE(0x124a2830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a2830 push ebp */
  push32((uint32_t)(EBP));
  /* 124a2831 mov ebp, esp */
  EBP = (ESP);
  /* 124a2833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a2835 pop ebp */
  EBP = (pop32());
  /* 124a2836 ret  */
  ESPCHK(0x124a2830u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x124a2840 (79 bytes, 28 insns) */
void f_124a2840(void) {
  FTRACE(0x124a2840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a2840 push ebp */
  push32((uint32_t)(EBP));
  /* 124a2841 mov ebp, esp */
  EBP = (ESP);
  /* 124a2843 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a2846 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 124a2849 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a284c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124a2853 jmp 0x124a285e */
  goto L_124a285e;
L_124a2855:;
  /* 124a2855 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a2858 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a285b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_124a285e:;
  /* 124a285e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a2861 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2864 jge 0x124a2884 */
  if ((C.sf==C.of)) goto L_124a2884;
  /* 124a2866 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2869 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a286c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a286f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2872 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 124a2875 push edx */
  push32((uint32_t)(EDX));
  /* 124a2876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2879 push eax */
  push32((uint32_t)(EAX));
  /* 124a287a call 0x1249b480 */
  push32(0x124a287fu); f_1249b480();
  /* 124a287f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2882 jmp 0x124a2855 */
  goto L_124a2855;
L_124a2884:;
  /* 124a2884 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a288b mov esp, ebp */
  ESP = (EBP);
  /* 124a288d pop ebp */
  EBP = (pop32());
  /* 124a288e ret  */
  ESPCHK(0x124a2840u, _esp0);
  ESP += 4; return;
}

/* FUN_10012890 @ 0x124a2890 (349 bytes, 122 insns) */
void f_124a2890(void) {
  FTRACE(0x124a2890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a2890 push ebp */
  push32((uint32_t)(EBP));
  /* 124a2891 mov ebp, esp */
  EBP = (ESP);
  /* 124a2893 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a2896 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 124a289b push 0 */
  push32((uint32_t)(0x0u));
  /* 124a289d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a28a0 push eax */
  push32((uint32_t)(EAX));
  /* 124a28a1 call 0x1249c230 */
  push32(0x124a28a6u); f_1249c230();
  /* 124a28a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a28a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a28ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a28af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a28b1 jne 0x124a28ba */
  if (!C.zf) goto L_124a28ba;
  /* 124a28b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a28b5 jmp 0x124a29e9 */
  goto L_124a29e9;
L_124a28ba:;
  /* 124a28ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a28bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a28c0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a28c3 jne 0x124a28f0 */
  if (!C.zf) goto L_124a28f0;
  /* 124a28c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a28c8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 124a28cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a28ce je 0x124a28f0 */
  if (C.zf) goto L_124a28f0;
  /* 124a28d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a28d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a28d6 push ecx */
  push32((uint32_t)(ECX));
  /* 124a28d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a28da add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a28e0 push edx */
  push32((uint32_t)(EDX));
  /* 124a28e1 call 0x1249b470 */
  push32(0x124a28e6u); f_1249b470();
  /* 124a28e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a28e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a28eb jmp 0x124a29e9 */
  goto L_124a29e9;
L_124a28f0:;
  /* 124a28f0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a28f7 jmp 0x124a2902 */
  goto L_124a2902;
L_124a28f9:;
  /* 124a28f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a28fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a28ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124a2902:;
  /* 124a2902 push 0x124c0930 */
  push32((uint32_t)(0x124c0930u));
  /* 124a2907 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a290a push ecx */
  push32((uint32_t)(ECX));
  /* 124a290b call 0x124a41e0 */
  push32(0x124a2910u); f_124a41e0();
  /* 124a2910 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2913 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a2916 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a291a jne 0x124a2924 */
  if (!C.zf) goto L_124a2924;
  /* 124a291c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a291f jmp 0x124a29e9 */
  goto L_124a29e9;
L_124a2924:;
  /* 124a2924 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a2927 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a292a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a292c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 124a292f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2933 jne 0x124a295a */
  if (!C.zf) goto L_124a295a;
  /* 124a2935 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2939 jge 0x124a295a */
  if ((C.sf==C.of)) goto L_124a295a;
  /* 124a293b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124a293f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2942 je 0x124a295a */
  if (C.zf) goto L_124a295a;
  /* 124a2944 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2947 push edx */
  push32((uint32_t)(EDX));
  /* 124a2948 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a294b push eax */
  push32((uint32_t)(EAX));
  /* 124a294c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a294f push ecx */
  push32((uint32_t)(ECX));
  /* 124a2950 call 0x1249bce0 */
  push32(0x124a2955u); f_1249bce0();
  /* 124a2955 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2958 jmp 0x124a29c0 */
  goto L_124a29c0;
L_124a295a:;
  /* 124a295a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a295e jne 0x124a2988 */
  if (!C.zf) goto L_124a2988;
  /* 124a2960 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2964 jge 0x124a2988 */
  if ((C.sf==C.of)) goto L_124a2988;
  /* 124a2966 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124a296a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a296d je 0x124a2988 */
  if (C.zf) goto L_124a2988;
  /* 124a296f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2972 push eax */
  push32((uint32_t)(EAX));
  /* 124a2973 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a2976 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2977 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a297a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a297d push edx */
  push32((uint32_t)(EDX));
  /* 124a297e call 0x1249bce0 */
  push32(0x124a2983u); f_1249bce0();
  /* 124a2983 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2986 jmp 0x124a29c0 */
  goto L_124a29c0;
L_124a2988:;
  /* 124a2988 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a298c jne 0x124a29bb */
  if (!C.zf) goto L_124a29bb;
  /* 124a298e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124a2992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a2994 je 0x124a299f */
  if (C.zf) goto L_124a299f;
  /* 124a2996 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124a299a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a299d jne 0x124a29bb */
  if (!C.zf) goto L_124a29bb;
L_124a299f:;
  /* 124a299f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a29a2 push edx */
  push32((uint32_t)(EDX));
  /* 124a29a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a29a6 push eax */
  push32((uint32_t)(EAX));
  /* 124a29a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a29aa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a29b0 push ecx */
  push32((uint32_t)(ECX));
  /* 124a29b1 call 0x1249bce0 */
  push32(0x124a29b6u); f_1249bce0();
  /* 124a29b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a29b9 jmp 0x124a29c0 */
  goto L_124a29c0;
L_124a29bb:;
  /* 124a29bb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a29be jmp 0x124a29e9 */
  goto L_124a29e9;
L_124a29c0:;
  /* 124a29c0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124a29c4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a29c7 jne 0x124a29cb */
  if (!C.zf) goto L_124a29cb;
  /* 124a29c9 jmp 0x124a29e7 */
  goto L_124a29e7;
L_124a29cb:;
  /* 124a29cb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124a29cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a29d1 jne 0x124a29d5 */
  if (!C.zf) goto L_124a29d5;
  /* 124a29d3 jmp 0x124a29e7 */
  goto L_124a29e7;
L_124a29d5:;
  /* 124a29d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a29d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a29db lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 124a29df mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 124a29e2 jmp 0x124a28f9 */
  goto L_124a28f9;
L_124a29e7:;
  /* 124a29e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a29e9:;
  /* 124a29e9 mov esp, ebp */
  ESP = (EBP);
  /* 124a29eb pop ebp */
  EBP = (pop32());
  /* 124a29ec ret  */
  ESPCHK(0x124a2890u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x124a29f0 (101 bytes, 36 insns) */
void f_124a29f0(void) {
  FTRACE(0x124a29f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a29f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a29f1 mov ebp, esp */
  EBP = (ESP);
  /* 124a29f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a29f6 push eax */
  push32((uint32_t)(EAX));
  /* 124a29f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a29fa push ecx */
  push32((uint32_t)(ECX));
  /* 124a29fb call 0x1249b470 */
  push32(0x124a2a00u); f_1249b470();
  /* 124a2a00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2a03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a2a06 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 124a2a0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a2a0c je 0x124a2a28 */
  if (C.zf) goto L_124a2a28;
  /* 124a2a0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a2a11 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2a14 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2a15 push 0x124c0938 */
  push32((uint32_t)(0x124c0938u));
  /* 124a2a1a push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2a1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2a1f push edx */
  push32((uint32_t)(EDX));
  /* 124a2a20 call 0x124a2840 */
  push32(0x124a2a25u); f_124a2840();
  /* 124a2a25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a2a28:;
  /* 124a2a28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a2a2b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 124a2a32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a2a34 je 0x124a2a53 */
  if (C.zf) goto L_124a2a53;
  /* 124a2a36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a2a39 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2a3f push edx */
  push32((uint32_t)(EDX));
  /* 124a2a40 push 0x124c0934 */
  push32((uint32_t)(0x124c0934u));
  /* 124a2a45 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2a47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2a4a push eax */
  push32((uint32_t)(EAX));
  /* 124a2a4b call 0x124a2840 */
  push32(0x124a2a50u); f_124a2840();
  /* 124a2a50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a2a53:;
  /* 124a2a53 pop ebp */
  EBP = (pop32());
  /* 124a2a54 ret  */
  ESPCHK(0x124a29f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a60 @ 0x124a2a60 (130 bytes, 50 insns) */
void f_124a2a60(void) {
  FTRACE(0x124a2a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a2a60 push ebp */
  push32((uint32_t)(EBP));
  /* 124a2a61 mov ebp, esp */
  EBP = (ESP);
  /* 124a2a63 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2a64 push ebx */
  push32((uint32_t)(EBX));
  /* 124a2a65 push esi */
  push32((uint32_t)(ESI));
  /* 124a2a66 push edi */
  push32((uint32_t)(EDI));
  /* 124a2a67 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124a2a6e:;
  /* 124a2a6e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2a72 jne 0x124a2a92 */
  if (!C.zf) goto L_124a2a92;
  /* 124a2a74 push 0x124c0948 */
  push32((uint32_t)(0x124c0948u));
  /* 124a2a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a2a7b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 124a2a7d push 0x124c093c */
  push32((uint32_t)(0x124c093cu));
  /* 124a2a82 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2a84 call 0x12497580 */
  push32(0x124a2a89u); f_12497580();
  /* 124a2a89 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2a8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2a8f jne 0x124a2a92 */
  if (!C.zf) goto L_124a2a92;
  /* 124a2a91 int3  */
  x86_unimpl("int3 @ 0x124a2a91");
L_124a2a92:;
  /* 124a2a92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a2a94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a2a96 jne 0x124a2a6e */
  if (!C.zf) goto L_124a2a6e;
  /* 124a2a98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2a9b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124a2a9e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 124a2aa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a2aa3 je 0x124a2ab1 */
  if (C.zf) goto L_124a2ab1;
  /* 124a2aa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2aa8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 124a2aaf jmp 0x124a2ad8 */
  goto L_124a2ad8;
L_124a2ab1:;
  /* 124a2ab1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2ab4 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2ab5 call 0x124a12d0 */
  push32(0x124a2abau); f_124a12d0();
  /* 124a2aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2abd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2ac0 push edx */
  push32((uint32_t)(EDX));
  /* 124a2ac1 call 0x124a2af0 */
  push32(0x124a2ac6u); f_124a2af0();
  /* 124a2ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2ac9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a2acc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2acf push eax */
  push32((uint32_t)(EAX));
  /* 124a2ad0 call 0x124a1340 */
  push32(0x124a2ad5u); f_124a1340();
  /* 124a2ad5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a2ad8:;
  /* 124a2ad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2adb pop edi */
  EDI = (pop32());
  /* 124a2adc pop esi */
  ESI = (pop32());
  /* 124a2add pop ebx */
  EBX = (pop32());
  /* 124a2ade mov esp, ebp */
  ESP = (EBP);
  /* 124a2ae0 pop ebp */
  EBP = (pop32());
  /* 124a2ae1 ret  */
  ESPCHK(0x124a2a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012af0 @ 0x124a2af0 (190 bytes, 67 insns) */
void f_124a2af0(void) {
  FTRACE(0x124a2af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a2af0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a2af1 mov ebp, esp */
  EBP = (ESP);
  /* 124a2af3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a2af6 push ebx */
  push32((uint32_t)(EBX));
  /* 124a2af7 push esi */
  push32((uint32_t)(ESI));
  /* 124a2af8 push edi */
  push32((uint32_t)(EDI));
  /* 124a2af9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124a2b00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2b03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124a2b06:;
  /* 124a2b06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2b0a jne 0x124a2b2a */
  if (!C.zf) goto L_124a2b2a;
  /* 124a2b0c push 0x124c07ec */
  push32((uint32_t)(0x124c07ecu));
  /* 124a2b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a2b13 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 124a2b15 push 0x124c093c */
  push32((uint32_t)(0x124c093cu));
  /* 124a2b1a push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2b1c call 0x12497580 */
  push32(0x124a2b21u); f_12497580();
  /* 124a2b21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2b24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2b27 jne 0x124a2b2a */
  if (!C.zf) goto L_124a2b2a;
  /* 124a2b29 int3  */
  x86_unimpl("int3 @ 0x124a2b29");
L_124a2b2a:;
  /* 124a2b2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2b2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a2b2e jne 0x124a2b06 */
  if (!C.zf) goto L_124a2b06;
  /* 124a2b30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a2b33 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 124a2b36 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 124a2b3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a2b3d je 0x124a2b9a */
  if (C.zf) goto L_124a2b9a;
  /* 124a2b3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a2b42 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2b43 call 0x124a1df0 */
  push32(0x124a2b48u); f_124a1df0();
  /* 124a2b48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2b4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a2b4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a2b51 push edx */
  push32((uint32_t)(EDX));
  /* 124a2b52 call 0x124a5170 */
  push32(0x124a2b57u); f_124a5170();
  /* 124a2b57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2b5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a2b5d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124a2b60 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2b61 call 0x124a5040 */
  push32(0x124a2b66u); f_124a5040();
  /* 124a2b66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2b69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a2b6b jge 0x124a2b76 */
  if ((C.sf==C.of)) goto L_124a2b76;
  /* 124a2b6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124a2b74 jmp 0x124a2b9a */
  goto L_124a2b9a;
L_124a2b76:;
  /* 124a2b76 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a2b79 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2b7d je 0x124a2b9a */
  if (C.zf) goto L_124a2b9a;
  /* 124a2b7f push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2b81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a2b84 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124a2b87 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2b88 call 0x12498f50 */
  push32(0x124a2b8du); f_12498f50();
  /* 124a2b8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2b90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a2b93 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_124a2b9a:;
  /* 124a2b9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a2b9d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 124a2ba4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2ba7 pop edi */
  EDI = (pop32());
  /* 124a2ba8 pop esi */
  ESI = (pop32());
  /* 124a2ba9 pop ebx */
  EBX = (pop32());
  /* 124a2baa mov esp, ebp */
  ESP = (EBP);
  /* 124a2bac pop ebp */
  EBP = (pop32());
  /* 124a2bad ret  */
  ESPCHK(0x124a2af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bb0 @ 0x124a2bb0 (210 bytes, 63 insns) */
void f_124a2bb0(void) {
  FTRACE(0x124a2bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a2bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a2bb1 mov ebp, esp */
  EBP = (ESP);
  /* 124a2bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2bb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2bb7 cmp eax, dword ptr [0x124c635c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c635c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2bbd jae 0x124a2be1 */
  if (!C.cf) goto L_124a2be1;
  /* 124a2bbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2bc2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a2bc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2bc8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124a2bcb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a2bce mov eax, dword ptr [ecx*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124c6220)));
  /* 124a2bd5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124a2bda and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124a2bdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a2bdf jne 0x124a2bf4 */
  if (!C.zf) goto L_124a2bf4;
L_124a2be1:;
  /* 124a2be1 call 0x124a0390 */
  push32(0x124a2be6u); f_124a0390();
  /* 124a2be6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124a2bec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a2bef jmp 0x124a2c7e */
  goto L_124a2c7e;
L_124a2bf4:;
  /* 124a2bf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2bf7 push edx */
  push32((uint32_t)(EDX));
  /* 124a2bf8 call 0x124a1bb0 */
  push32(0x124a2bfdu); f_124a1bb0();
  /* 124a2bfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2c00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2c03 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124a2c06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2c09 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124a2c0c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a2c0f mov edx, dword ptr [eax*4 + 0x124c6220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124c6220)));
  /* 124a2c16 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 124a2c1b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 124a2c1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a2c20 je 0x124a2c5d */
  if (C.zf) goto L_124a2c5d;
  /* 124a2c22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2c25 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2c26 call 0x124a1a30 */
  push32(0x124a2c2bu); f_124a1a30();
  /* 124a2c2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2c2e push eax */
  push32((uint32_t)(EAX));
  /* 124a2c2f call dword ptr [0x124c72d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72d8))), 0x124a2c35u);
  /* 124a2c35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a2c37 jne 0x124a2c44 */
  if (!C.zf) goto L_124a2c44;
  /* 124a2c39 call dword ptr [0x124c7388] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7388))), 0x124a2c3fu);
  /* 124a2c3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a2c42 jmp 0x124a2c4b */
  goto L_124a2c4b;
L_124a2c44:;
  /* 124a2c44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124a2c4b:;
  /* 124a2c4b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2c4f jne 0x124a2c53 */
  if (!C.zf) goto L_124a2c53;
  /* 124a2c51 jmp 0x124a2c6f */
  goto L_124a2c6f;
L_124a2c53:;
  /* 124a2c53 call 0x124a03a0 */
  push32(0x124a2c58u); f_124a03a0();
  /* 124a2c58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2c5b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_124a2c5d:;
  /* 124a2c5d call 0x124a0390 */
  push32(0x124a2c62u); f_124a0390();
  /* 124a2c62 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124a2c68 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124a2c6f:;
  /* 124a2c6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2c72 push eax */
  push32((uint32_t)(EAX));
  /* 124a2c73 call 0x124a1c40 */
  push32(0x124a2c78u); f_124a1c40();
  /* 124a2c78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2c7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124a2c7e:;
  /* 124a2c7e mov esp, ebp */
  ESP = (EBP);
  /* 124a2c80 pop ebp */
  EBP = (pop32());
  /* 124a2c81 ret  */
  ESPCHK(0x124a2bb0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x124a2c90 (219 bytes, 64 insns) */
void f_124a2c90(void) {
  FTRACE(0x124a2c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a2c90 push ebp */
  push32((uint32_t)(EBP));
  /* 124a2c91 mov ebp, esp */
  EBP = (ESP);
  /* 124a2c93 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2c94 cmp dword ptr [0x124c4a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2c9b je 0x124a2d31 */
  if (C.zf) goto L_124a2d31;
  /* 124a2ca1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 124a2ca3 push 0x124c0958 */
  push32((uint32_t)(0x124c0958u));
  /* 124a2ca8 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2caa push 0xac */
  push32((uint32_t)(0xacu));
  /* 124a2caf push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2cb1 call 0x124988d0 */
  push32(0x124a2cb6u); f_124988d0();
  /* 124a2cb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2cb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a2cbc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2cc0 jne 0x124a2ccc */
  if (!C.zf) goto L_124a2ccc;
  /* 124a2cc2 mov eax, 1 */
  EAX = (0x1u);
  /* 124a2cc7 jmp 0x124a2d67 */
  goto L_124a2d67;
L_124a2ccc:;
  /* 124a2ccc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2ccf push eax */
  push32((uint32_t)(EAX));
  /* 124a2cd0 call 0x124a2d70 */
  push32(0x124a2cd5u); f_124a2d70();
  /* 124a2cd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2cd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a2cda je 0x124a2cfd */
  if (C.zf) goto L_124a2cfd;
  /* 124a2cdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2cdf push ecx */
  push32((uint32_t)(ECX));
  /* 124a2ce0 call 0x124a3300 */
  push32(0x124a2ce5u); f_124a3300();
  /* 124a2ce5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2ce8 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2cea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2ced push edx */
  push32((uint32_t)(EDX));
  /* 124a2cee call 0x12498f50 */
  push32(0x124a2cf3u); f_12498f50();
  /* 124a2cf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2cf6 mov eax, 1 */
  EAX = (0x1u);
  /* 124a2cfb jmp 0x124a2d67 */
  goto L_124a2d67;
L_124a2cfd:;
  /* 124a2cfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2d00 mov dword ptr [0x124c3c98], eax */
  w32((uint32_t)(0x124c3c98), (EAX));
  /* 124a2d05 mov ecx, dword ptr [0x124c4a74] */
  ECX = (r32((uint32_t)(0x124c4a74)));
  /* 124a2d0b push ecx */
  push32((uint32_t)(ECX));
  /* 124a2d0c call 0x124a3300 */
  push32(0x124a2d11u); f_124a3300();
  /* 124a2d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2d14 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2d16 mov edx, dword ptr [0x124c4a74] */
  EDX = (r32((uint32_t)(0x124c4a74)));
  /* 124a2d1c push edx */
  push32((uint32_t)(EDX));
  /* 124a2d1d call 0x12498f50 */
  push32(0x124a2d22u); f_12498f50();
  /* 124a2d22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2d25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2d28 mov dword ptr [0x124c4a74], eax */
  w32((uint32_t)(0x124c4a74), (EAX));
  /* 124a2d2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a2d2f jmp 0x124a2d67 */
  goto L_124a2d67;
L_124a2d31:;
  /* 124a2d31 mov dword ptr [0x124c3c98], 0x124c3ca0 */
  w32((uint32_t)(0x124c3c98), (0x124c3ca0u));
  /* 124a2d3b mov ecx, dword ptr [0x124c4a74] */
  ECX = (r32((uint32_t)(0x124c4a74)));
  /* 124a2d41 push ecx */
  push32((uint32_t)(ECX));
  /* 124a2d42 call 0x124a3300 */
  push32(0x124a2d47u); f_124a3300();
  /* 124a2d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2d4a push 2 */
  push32((uint32_t)(0x2u));
  /* 124a2d4c mov edx, dword ptr [0x124c4a74] */
  EDX = (r32((uint32_t)(0x124c4a74)));
  /* 124a2d52 push edx */
  push32((uint32_t)(EDX));
  /* 124a2d53 call 0x12498f50 */
  push32(0x124a2d58u); f_12498f50();
  /* 124a2d58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2d5b mov dword ptr [0x124c4a74], 0 */
  w32((uint32_t)(0x124c4a74), (0x0u));
  /* 124a2d65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a2d67:;
  /* 124a2d67 mov esp, ebp */
  ESP = (EBP);
  /* 124a2d69 pop ebp */
  EBP = (pop32());
  /* 124a2d6a ret  */
  ESPCHK(0x124a2c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d70 @ 0x124a2d70 (1423 bytes, 533 insns) */
void f_124a2d70(void) {
  FTRACE(0x124a2d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a2d70 push ebp */
  push32((uint32_t)(EBP));
  /* 124a2d71 mov ebp, esp */
  EBP = (ESP);
  /* 124a2d73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a2d76 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124a2d7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a2d7f mov ax, word ptr [0x124c4aae] */
  AX = (r16((uint32_t)(0x124c4aae)));
  /* 124a2d85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a2d88 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2d8a mov cx, word ptr [0x124c4ab0] */
  CX = (r16((uint32_t)(0x124c4ab0)));
  /* 124a2d91 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a2d94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a2d98 jne 0x124a2da2 */
  if (!C.zf) goto L_124a2da2;
  /* 124a2d9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a2d9d jmp 0x124a32fb */
  goto L_124a32fb;
L_124a2da2:;
  /* 124a2da2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2da5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2da8 push edx */
  push32((uint32_t)(EDX));
  /* 124a2da9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 124a2dab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2dae push eax */
  push32((uint32_t)(EAX));
  /* 124a2daf push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2db1 call 0x124a6680 */
  push32(0x124a2db6u); f_124a6680();
  /* 124a2db6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2db9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2dbc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2dbe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2dc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2dc4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2dc7 push edx */
  push32((uint32_t)(EDX));
  /* 124a2dc8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 124a2dca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2dcd push eax */
  push32((uint32_t)(EAX));
  /* 124a2dce push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2dd0 call 0x124a6680 */
  push32(0x124a2dd5u); f_124a6680();
  /* 124a2dd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2dd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2ddb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2ddd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2de0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2de3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2de6 push edx */
  push32((uint32_t)(EDX));
  /* 124a2de7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 124a2de9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2dec push eax */
  push32((uint32_t)(EAX));
  /* 124a2ded push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2def call 0x124a6680 */
  push32(0x124a2df4u); f_124a6680();
  /* 124a2df4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2df7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2dfa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2dfc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2dff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2e02 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2e05 push edx */
  push32((uint32_t)(EDX));
  /* 124a2e06 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 124a2e08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2e0b push eax */
  push32((uint32_t)(EAX));
  /* 124a2e0c push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2e0e call 0x124a6680 */
  push32(0x124a2e13u); f_124a6680();
  /* 124a2e13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2e16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2e19 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2e1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2e1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2e21 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2e24 push edx */
  push32((uint32_t)(EDX));
  /* 124a2e25 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 124a2e27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2e2a push eax */
  push32((uint32_t)(EAX));
  /* 124a2e2b push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2e2d call 0x124a6680 */
  push32(0x124a2e32u); f_124a6680();
  /* 124a2e32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2e35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2e38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2e3a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2e3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2e40 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2e43 push edx */
  push32((uint32_t)(EDX));
  /* 124a2e44 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 124a2e46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2e49 push eax */
  push32((uint32_t)(EAX));
  /* 124a2e4a push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2e4c call 0x124a6680 */
  push32(0x124a2e51u); f_124a6680();
  /* 124a2e51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2e54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2e57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2e59 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2e5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2e5f push edx */
  push32((uint32_t)(EDX));
  /* 124a2e60 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 124a2e62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2e65 push eax */
  push32((uint32_t)(EAX));
  /* 124a2e66 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2e68 call 0x124a6680 */
  push32(0x124a2e6du); f_124a6680();
  /* 124a2e6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2e70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2e73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2e75 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2e78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2e7b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2e7e push edx */
  push32((uint32_t)(EDX));
  /* 124a2e7f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 124a2e81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2e84 push eax */
  push32((uint32_t)(EAX));
  /* 124a2e85 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2e87 call 0x124a6680 */
  push32(0x124a2e8cu); f_124a6680();
  /* 124a2e8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2e8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2e92 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2e94 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2e97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2e9a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2e9d push edx */
  push32((uint32_t)(EDX));
  /* 124a2e9e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 124a2ea0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2ea3 push eax */
  push32((uint32_t)(EAX));
  /* 124a2ea4 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2ea6 call 0x124a6680 */
  push32(0x124a2eabu); f_124a6680();
  /* 124a2eab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2eae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2eb1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2eb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2eb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2eb9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2ebc push edx */
  push32((uint32_t)(EDX));
  /* 124a2ebd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 124a2ebf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2ec2 push eax */
  push32((uint32_t)(EAX));
  /* 124a2ec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2ec5 call 0x124a6680 */
  push32(0x124a2ecau); f_124a6680();
  /* 124a2eca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2ecd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2ed0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2ed2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2ed5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2ed8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2edb push edx */
  push32((uint32_t)(EDX));
  /* 124a2edc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 124a2ede mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2ee1 push eax */
  push32((uint32_t)(EAX));
  /* 124a2ee2 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2ee4 call 0x124a6680 */
  push32(0x124a2ee9u); f_124a6680();
  /* 124a2ee9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2eec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2eef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2ef1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2ef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2ef7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2efa push edx */
  push32((uint32_t)(EDX));
  /* 124a2efb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 124a2efd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2f00 push eax */
  push32((uint32_t)(EAX));
  /* 124a2f01 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2f03 call 0x124a6680 */
  push32(0x124a2f08u); f_124a6680();
  /* 124a2f08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2f0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2f0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2f10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2f13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2f16 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2f19 push edx */
  push32((uint32_t)(EDX));
  /* 124a2f1a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 124a2f1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2f1f push eax */
  push32((uint32_t)(EAX));
  /* 124a2f20 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2f22 call 0x124a6680 */
  push32(0x124a2f27u); f_124a6680();
  /* 124a2f27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2f2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2f2d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2f2f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2f32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2f35 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2f38 push edx */
  push32((uint32_t)(EDX));
  /* 124a2f39 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 124a2f3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2f3e push eax */
  push32((uint32_t)(EAX));
  /* 124a2f3f push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2f41 call 0x124a6680 */
  push32(0x124a2f46u); f_124a6680();
  /* 124a2f46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2f49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2f4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2f4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2f51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2f54 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2f57 push edx */
  push32((uint32_t)(EDX));
  /* 124a2f58 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 124a2f5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2f5d push eax */
  push32((uint32_t)(EAX));
  /* 124a2f5e push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2f60 call 0x124a6680 */
  push32(0x124a2f65u); f_124a6680();
  /* 124a2f65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2f68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2f6b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2f6d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2f70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2f73 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2f76 push edx */
  push32((uint32_t)(EDX));
  /* 124a2f77 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 124a2f79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2f7c push eax */
  push32((uint32_t)(EAX));
  /* 124a2f7d push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2f7f call 0x124a6680 */
  push32(0x124a2f84u); f_124a6680();
  /* 124a2f84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2f87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2f8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2f8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2f8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2f92 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2f95 push edx */
  push32((uint32_t)(EDX));
  /* 124a2f96 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 124a2f98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2f9b push eax */
  push32((uint32_t)(EAX));
  /* 124a2f9c push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2f9e call 0x124a6680 */
  push32(0x124a2fa3u); f_124a6680();
  /* 124a2fa3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2fa6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2fa9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2fab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2fae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2fb1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2fb4 push edx */
  push32((uint32_t)(EDX));
  /* 124a2fb5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 124a2fb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2fba push eax */
  push32((uint32_t)(EAX));
  /* 124a2fbb push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2fbd call 0x124a6680 */
  push32(0x124a2fc2u); f_124a6680();
  /* 124a2fc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2fc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2fc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2fca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2fcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2fd0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2fd3 push edx */
  push32((uint32_t)(EDX));
  /* 124a2fd4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 124a2fd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2fd9 push eax */
  push32((uint32_t)(EAX));
  /* 124a2fda push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2fdc call 0x124a6680 */
  push32(0x124a2fe1u); f_124a6680();
  /* 124a2fe1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2fe4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a2fe7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a2fe9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a2fec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a2fef add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a2ff2 push edx */
  push32((uint32_t)(EDX));
  /* 124a2ff3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 124a2ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a2ff8 push eax */
  push32((uint32_t)(EAX));
  /* 124a2ff9 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a2ffb call 0x124a6680 */
  push32(0x124a3000u); f_124a6680();
  /* 124a3000 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3003 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a3006 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3008 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a300b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a300e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3011 push edx */
  push32((uint32_t)(EDX));
  /* 124a3012 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 124a3014 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3017 push eax */
  push32((uint32_t)(EAX));
  /* 124a3018 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a301a call 0x124a6680 */
  push32(0x124a301fu); f_124a6680();
  /* 124a301f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3022 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a3025 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3027 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a302a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a302d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3030 push edx */
  push32((uint32_t)(EDX));
  /* 124a3031 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 124a3033 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3036 push eax */
  push32((uint32_t)(EAX));
  /* 124a3037 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3039 call 0x124a6680 */
  push32(0x124a303eu); f_124a6680();
  /* 124a303e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3041 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a3044 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3046 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a3049 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a304c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a304f push edx */
  push32((uint32_t)(EDX));
  /* 124a3050 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 124a3052 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3055 push eax */
  push32((uint32_t)(EAX));
  /* 124a3056 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3058 call 0x124a6680 */
  push32(0x124a305du); f_124a6680();
  /* 124a305d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3060 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a3063 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3065 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a3068 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a306b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a306e push edx */
  push32((uint32_t)(EDX));
  /* 124a306f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 124a3071 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3074 push eax */
  push32((uint32_t)(EAX));
  /* 124a3075 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3077 call 0x124a6680 */
  push32(0x124a307cu); f_124a6680();
  /* 124a307c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a307f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a3082 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3084 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a3087 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a308a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a308d push edx */
  push32((uint32_t)(EDX));
  /* 124a308e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 124a3090 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3093 push eax */
  push32((uint32_t)(EAX));
  /* 124a3094 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3096 call 0x124a6680 */
  push32(0x124a309bu); f_124a6680();
  /* 124a309b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a309e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a30a1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a30a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a30a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a30a9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a30ac push edx */
  push32((uint32_t)(EDX));
  /* 124a30ad push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 124a30af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a30b2 push eax */
  push32((uint32_t)(EAX));
  /* 124a30b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a30b5 call 0x124a6680 */
  push32(0x124a30bau); f_124a6680();
  /* 124a30ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a30bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a30c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a30c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a30c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a30c8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a30cb push edx */
  push32((uint32_t)(EDX));
  /* 124a30cc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 124a30ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a30d1 push eax */
  push32((uint32_t)(EAX));
  /* 124a30d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a30d4 call 0x124a6680 */
  push32(0x124a30d9u); f_124a6680();
  /* 124a30d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a30dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a30df or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a30e1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a30e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a30e7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a30ea push edx */
  push32((uint32_t)(EDX));
  /* 124a30eb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 124a30ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a30f0 push eax */
  push32((uint32_t)(EAX));
  /* 124a30f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a30f3 call 0x124a6680 */
  push32(0x124a30f8u); f_124a6680();
  /* 124a30f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a30fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a30fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3100 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a3103 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3106 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3109 push edx */
  push32((uint32_t)(EDX));
  /* 124a310a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 124a310c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a310f push eax */
  push32((uint32_t)(EAX));
  /* 124a3110 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3112 call 0x124a6680 */
  push32(0x124a3117u); f_124a6680();
  /* 124a3117 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a311a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a311d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a311f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a3122 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3125 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3128 push edx */
  push32((uint32_t)(EDX));
  /* 124a3129 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 124a312b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a312e push eax */
  push32((uint32_t)(EAX));
  /* 124a312f push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3131 call 0x124a6680 */
  push32(0x124a3136u); f_124a6680();
  /* 124a3136 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3139 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a313c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a313e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a3141 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3144 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3147 push edx */
  push32((uint32_t)(EDX));
  /* 124a3148 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 124a314a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a314d push eax */
  push32((uint32_t)(EAX));
  /* 124a314e push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3150 call 0x124a6680 */
  push32(0x124a3155u); f_124a6680();
  /* 124a3155 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3158 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a315b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a315d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a3160 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3163 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3166 push edx */
  push32((uint32_t)(EDX));
  /* 124a3167 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 124a3169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a316c push eax */
  push32((uint32_t)(EAX));
  /* 124a316d push 1 */
  push32((uint32_t)(0x1u));
  /* 124a316f call 0x124a6680 */
  push32(0x124a3174u); f_124a6680();
  /* 124a3174 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3177 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a317a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a317c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a317f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3182 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3188 push edx */
  push32((uint32_t)(EDX));
  /* 124a3189 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 124a318b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a318e push eax */
  push32((uint32_t)(EAX));
  /* 124a318f push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3191 call 0x124a6680 */
  push32(0x124a3196u); f_124a6680();
  /* 124a3196 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3199 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a319c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a319e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a31a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a31a4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a31aa push edx */
  push32((uint32_t)(EDX));
  /* 124a31ab push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 124a31ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a31b0 push eax */
  push32((uint32_t)(EAX));
  /* 124a31b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a31b3 call 0x124a6680 */
  push32(0x124a31b8u); f_124a6680();
  /* 124a31b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a31bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a31be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a31c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a31c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a31c6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a31cc push edx */
  push32((uint32_t)(EDX));
  /* 124a31cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 124a31cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a31d2 push eax */
  push32((uint32_t)(EAX));
  /* 124a31d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a31d5 call 0x124a6680 */
  push32(0x124a31dau); f_124a6680();
  /* 124a31da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a31dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a31e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a31e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a31e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a31e8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a31ee push edx */
  push32((uint32_t)(EDX));
  /* 124a31ef push 0x41 */
  push32((uint32_t)(0x41u));
  /* 124a31f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a31f4 push eax */
  push32((uint32_t)(EAX));
  /* 124a31f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a31f7 call 0x124a6680 */
  push32(0x124a31fcu); f_124a6680();
  /* 124a31fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a31ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a3202 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3204 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a3207 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a320a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3210 push edx */
  push32((uint32_t)(EDX));
  /* 124a3211 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 124a3213 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3216 push eax */
  push32((uint32_t)(EAX));
  /* 124a3217 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3219 call 0x124a6680 */
  push32(0x124a321eu); f_124a6680();
  /* 124a321e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3221 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a3224 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3226 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a3229 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a322c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3232 push edx */
  push32((uint32_t)(EDX));
  /* 124a3233 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 124a3235 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3238 push eax */
  push32((uint32_t)(EAX));
  /* 124a3239 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a323b call 0x124a6680 */
  push32(0x124a3240u); f_124a6680();
  /* 124a3240 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3243 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a3246 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3248 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a324b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a324e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3254 push edx */
  push32((uint32_t)(EDX));
  /* 124a3255 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 124a3257 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a325a push eax */
  push32((uint32_t)(EAX));
  /* 124a325b push 1 */
  push32((uint32_t)(0x1u));
  /* 124a325d call 0x124a6680 */
  push32(0x124a3262u); f_124a6680();
  /* 124a3262 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3265 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a3268 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a326a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a326d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3270 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3276 push edx */
  push32((uint32_t)(EDX));
  /* 124a3277 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 124a3279 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a327c push eax */
  push32((uint32_t)(EAX));
  /* 124a327d push 1 */
  push32((uint32_t)(0x1u));
  /* 124a327f call 0x124a6680 */
  push32(0x124a3284u); f_124a6680();
  /* 124a3284 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3287 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a328a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a328c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a328f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3292 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3298 push edx */
  push32((uint32_t)(EDX));
  /* 124a3299 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 124a329b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a329e push eax */
  push32((uint32_t)(EAX));
  /* 124a329f push 1 */
  push32((uint32_t)(0x1u));
  /* 124a32a1 call 0x124a6680 */
  push32(0x124a32a6u); f_124a6680();
  /* 124a32a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a32a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a32ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a32ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a32b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a32b4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a32ba push edx */
  push32((uint32_t)(EDX));
  /* 124a32bb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 124a32bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a32c0 push eax */
  push32((uint32_t)(EAX));
  /* 124a32c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a32c3 call 0x124a6680 */
  push32(0x124a32c8u); f_124a6680();
  /* 124a32c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a32cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a32ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a32d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a32d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a32d6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a32dc push edx */
  push32((uint32_t)(EDX));
  /* 124a32dd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 124a32e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a32e5 push eax */
  push32((uint32_t)(EAX));
  /* 124a32e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a32e8 call 0x124a6680 */
  push32(0x124a32edu); f_124a6680();
  /* 124a32ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a32f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a32f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a32f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124a32f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_124a32fb:;
  /* 124a32fb mov esp, ebp */
  ESP = (EBP);
  /* 124a32fd pop ebp */
  EBP = (pop32());
  /* 124a32fe ret  */
  ESPCHK(0x124a2d70u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x124a3300 (779 bytes, 265 insns) */
void f_124a3300(void) {
  FTRACE(0x124a3300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a3300 push ebp */
  push32((uint32_t)(EBP));
  /* 124a3301 mov ebp, esp */
  EBP = (ESP);
  /* 124a3303 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3307 jne 0x124a330e */
  if (!C.zf) goto L_124a330e;
  /* 124a3309 jmp 0x124a3609 */
  goto L_124a3609;
L_124a330e:;
  /* 124a330e push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3310 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3313 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124a3316 push ecx */
  push32((uint32_t)(ECX));
  /* 124a3317 call 0x12498f50 */
  push32(0x124a331cu); f_12498f50();
  /* 124a331c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a331f push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3324 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124a3327 push eax */
  push32((uint32_t)(EAX));
  /* 124a3328 call 0x12498f50 */
  push32(0x124a332du); f_12498f50();
  /* 124a332d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3330 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3332 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3335 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124a3338 push edx */
  push32((uint32_t)(EDX));
  /* 124a3339 call 0x12498f50 */
  push32(0x124a333eu); f_12498f50();
  /* 124a333e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3341 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3346 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124a3349 push ecx */
  push32((uint32_t)(ECX));
  /* 124a334a call 0x12498f50 */
  push32(0x124a334fu); f_12498f50();
  /* 124a334f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3352 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3354 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3357 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124a335a push eax */
  push32((uint32_t)(EAX));
  /* 124a335b call 0x12498f50 */
  push32(0x124a3360u); f_12498f50();
  /* 124a3360 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3363 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3365 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3368 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 124a336b push edx */
  push32((uint32_t)(EDX));
  /* 124a336c call 0x12498f50 */
  push32(0x124a3371u); f_12498f50();
  /* 124a3371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3374 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3379 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a337b push ecx */
  push32((uint32_t)(ECX));
  /* 124a337c call 0x12498f50 */
  push32(0x124a3381u); f_12498f50();
  /* 124a3381 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3384 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3386 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3389 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 124a338c push eax */
  push32((uint32_t)(EAX));
  /* 124a338d call 0x12498f50 */
  push32(0x124a3392u); f_12498f50();
  /* 124a3392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3395 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3397 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a339a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 124a339d push edx */
  push32((uint32_t)(EDX));
  /* 124a339e call 0x12498f50 */
  push32(0x124a33a3u); f_12498f50();
  /* 124a33a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a33a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a33a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a33ab mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 124a33ae push ecx */
  push32((uint32_t)(ECX));
  /* 124a33af call 0x12498f50 */
  push32(0x124a33b4u); f_12498f50();
  /* 124a33b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a33b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a33b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a33bc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 124a33bf push eax */
  push32((uint32_t)(EAX));
  /* 124a33c0 call 0x12498f50 */
  push32(0x124a33c5u); f_12498f50();
  /* 124a33c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a33c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a33ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a33cd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 124a33d0 push edx */
  push32((uint32_t)(EDX));
  /* 124a33d1 call 0x12498f50 */
  push32(0x124a33d6u); f_12498f50();
  /* 124a33d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a33d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a33db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a33de mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 124a33e1 push ecx */
  push32((uint32_t)(ECX));
  /* 124a33e2 call 0x12498f50 */
  push32(0x124a33e7u); f_12498f50();
  /* 124a33e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a33ea push 2 */
  push32((uint32_t)(0x2u));
  /* 124a33ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a33ef mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124a33f2 push eax */
  push32((uint32_t)(EAX));
  /* 124a33f3 call 0x12498f50 */
  push32(0x124a33f8u); f_12498f50();
  /* 124a33f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a33fb push 2 */
  push32((uint32_t)(0x2u));
  /* 124a33fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3400 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 124a3403 push edx */
  push32((uint32_t)(EDX));
  /* 124a3404 call 0x12498f50 */
  push32(0x124a3409u); f_12498f50();
  /* 124a3409 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a340c push 2 */
  push32((uint32_t)(0x2u));
  /* 124a340e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3411 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 124a3414 push ecx */
  push32((uint32_t)(ECX));
  /* 124a3415 call 0x12498f50 */
  push32(0x124a341au); f_12498f50();
  /* 124a341a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a341d push 2 */
  push32((uint32_t)(0x2u));
  /* 124a341f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3422 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 124a3425 push eax */
  push32((uint32_t)(EAX));
  /* 124a3426 call 0x12498f50 */
  push32(0x124a342bu); f_12498f50();
  /* 124a342b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a342e push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3430 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3433 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 124a3436 push edx */
  push32((uint32_t)(EDX));
  /* 124a3437 call 0x12498f50 */
  push32(0x124a343cu); f_12498f50();
  /* 124a343c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a343f push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3441 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3444 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 124a3447 push ecx */
  push32((uint32_t)(ECX));
  /* 124a3448 call 0x12498f50 */
  push32(0x124a344du); f_12498f50();
  /* 124a344d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3450 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3452 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3455 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 124a3458 push eax */
  push32((uint32_t)(EAX));
  /* 124a3459 call 0x12498f50 */
  push32(0x124a345eu); f_12498f50();
  /* 124a345e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3461 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3463 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3466 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 124a3469 push edx */
  push32((uint32_t)(EDX));
  /* 124a346a call 0x12498f50 */
  push32(0x124a346fu); f_12498f50();
  /* 124a346f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3472 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3477 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 124a347a push ecx */
  push32((uint32_t)(ECX));
  /* 124a347b call 0x12498f50 */
  push32(0x124a3480u); f_12498f50();
  /* 124a3480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3483 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3485 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3488 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 124a348b push eax */
  push32((uint32_t)(EAX));
  /* 124a348c call 0x12498f50 */
  push32(0x124a3491u); f_12498f50();
  /* 124a3491 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3494 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3499 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 124a349c push edx */
  push32((uint32_t)(EDX));
  /* 124a349d call 0x12498f50 */
  push32(0x124a34a2u); f_12498f50();
  /* 124a34a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a34a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a34a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a34aa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 124a34ad push ecx */
  push32((uint32_t)(ECX));
  /* 124a34ae call 0x12498f50 */
  push32(0x124a34b3u); f_12498f50();
  /* 124a34b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a34b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a34b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a34bb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 124a34be push eax */
  push32((uint32_t)(EAX));
  /* 124a34bf call 0x12498f50 */
  push32(0x124a34c4u); f_12498f50();
  /* 124a34c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a34c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a34c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a34cc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 124a34cf push edx */
  push32((uint32_t)(EDX));
  /* 124a34d0 call 0x12498f50 */
  push32(0x124a34d5u); f_12498f50();
  /* 124a34d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a34d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a34da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a34dd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 124a34e0 push ecx */
  push32((uint32_t)(ECX));
  /* 124a34e1 call 0x12498f50 */
  push32(0x124a34e6u); f_12498f50();
  /* 124a34e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a34e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a34eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a34ee mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 124a34f1 push eax */
  push32((uint32_t)(EAX));
  /* 124a34f2 call 0x12498f50 */
  push32(0x124a34f7u); f_12498f50();
  /* 124a34f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a34fa push 2 */
  push32((uint32_t)(0x2u));
  /* 124a34fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a34ff mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 124a3502 push edx */
  push32((uint32_t)(EDX));
  /* 124a3503 call 0x12498f50 */
  push32(0x124a3508u); f_12498f50();
  /* 124a3508 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a350b push 2 */
  push32((uint32_t)(0x2u));
  /* 124a350d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3510 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 124a3513 push ecx */
  push32((uint32_t)(ECX));
  /* 124a3514 call 0x12498f50 */
  push32(0x124a3519u); f_12498f50();
  /* 124a3519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a351c push 2 */
  push32((uint32_t)(0x2u));
  /* 124a351e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3521 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 124a3524 push eax */
  push32((uint32_t)(EAX));
  /* 124a3525 call 0x12498f50 */
  push32(0x124a352au); f_12498f50();
  /* 124a352a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a352d push 2 */
  push32((uint32_t)(0x2u));
  /* 124a352f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3532 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 124a3538 push edx */
  push32((uint32_t)(EDX));
  /* 124a3539 call 0x12498f50 */
  push32(0x124a353eu); f_12498f50();
  /* 124a353e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3541 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3543 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3546 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 124a354c push ecx */
  push32((uint32_t)(ECX));
  /* 124a354d call 0x12498f50 */
  push32(0x124a3552u); f_12498f50();
  /* 124a3552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3555 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3557 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a355a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 124a3560 push eax */
  push32((uint32_t)(EAX));
  /* 124a3561 call 0x12498f50 */
  push32(0x124a3566u); f_12498f50();
  /* 124a3566 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3569 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a356b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a356e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 124a3574 push edx */
  push32((uint32_t)(EDX));
  /* 124a3575 call 0x12498f50 */
  push32(0x124a357au); f_12498f50();
  /* 124a357a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a357d push 2 */
  push32((uint32_t)(0x2u));
  /* 124a357f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3582 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 124a3588 push ecx */
  push32((uint32_t)(ECX));
  /* 124a3589 call 0x12498f50 */
  push32(0x124a358eu); f_12498f50();
  /* 124a358e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3591 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3593 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3596 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 124a359c push eax */
  push32((uint32_t)(EAX));
  /* 124a359d call 0x12498f50 */
  push32(0x124a35a2u); f_12498f50();
  /* 124a35a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a35a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a35a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a35aa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 124a35b0 push edx */
  push32((uint32_t)(EDX));
  /* 124a35b1 call 0x12498f50 */
  push32(0x124a35b6u); f_12498f50();
  /* 124a35b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a35b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a35bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a35be mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 124a35c4 push ecx */
  push32((uint32_t)(ECX));
  /* 124a35c5 call 0x12498f50 */
  push32(0x124a35cau); f_12498f50();
  /* 124a35ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a35cd push 2 */
  push32((uint32_t)(0x2u));
  /* 124a35cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a35d2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 124a35d8 push eax */
  push32((uint32_t)(EAX));
  /* 124a35d9 call 0x12498f50 */
  push32(0x124a35deu); f_12498f50();
  /* 124a35de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a35e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a35e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a35e6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 124a35ec push edx */
  push32((uint32_t)(EDX));
  /* 124a35ed call 0x12498f50 */
  push32(0x124a35f2u); f_12498f50();
  /* 124a35f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a35f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a35f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a35fa mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 124a3600 push ecx */
  push32((uint32_t)(ECX));
  /* 124a3601 call 0x12498f50 */
  push32(0x124a3606u); f_12498f50();
  /* 124a3606 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a3609:;
  /* 124a3609 pop ebp */
  EBP = (pop32());
  /* 124a360a ret  */
  ESPCHK(0x124a3300u, _esp0);
  ESP += 4; return;
}

/* FUN_10013610 @ 0x124a3610 (678 bytes, 180 insns) */
void f_124a3610(void) {
  FTRACE(0x124a3610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a3610 push ebp */
  push32((uint32_t)(EBP));
  /* 124a3611 mov ebp, esp */
  EBP = (ESP);
  /* 124a3613 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a3616 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124a361d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a361f mov ax, word ptr [0x124c4aaa] */
  AX = (r16((uint32_t)(0x124c4aaa)));
  /* 124a3625 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a3628 cmp dword ptr [0x124c4a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a362f je 0x124a378a */
  if (C.zf) goto L_124a378a;
  /* 124a3635 push 0x124c4a78 */
  push32((uint32_t)(0x124c4a78u));
  /* 124a363a push 0xe */
  push32((uint32_t)(0xeu));
  /* 124a363c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a363f push ecx */
  push32((uint32_t)(ECX));
  /* 124a3640 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3642 call 0x124a6680 */
  push32(0x124a3647u); f_124a6680();
  /* 124a3647 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a364a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a364d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 124a364f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124a3652 push 0x124c4a7c */
  push32((uint32_t)(0x124c4a7cu));
  /* 124a3657 push 0xf */
  push32((uint32_t)(0xfu));
  /* 124a3659 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a365c push eax */
  push32((uint32_t)(EAX));
  /* 124a365d push 1 */
  push32((uint32_t)(0x1u));
  /* 124a365f call 0x124a6680 */
  push32(0x124a3664u); f_124a6680();
  /* 124a3664 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3667 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a366a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a366c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a366f push 0x124c4a80 */
  push32((uint32_t)(0x124c4a80u));
  /* 124a3674 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 124a3676 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3679 push edx */
  push32((uint32_t)(EDX));
  /* 124a367a push 1 */
  push32((uint32_t)(0x1u));
  /* 124a367c call 0x124a6680 */
  push32(0x124a3681u); f_124a6680();
  /* 124a3681 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3684 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3687 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3689 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a368c mov edx, dword ptr [0x124c4a80] */
  EDX = (r32((uint32_t)(0x124c4a80)));
  /* 124a3692 push edx */
  push32((uint32_t)(EDX));
  /* 124a3693 call 0x124a38c0 */
  push32(0x124a3698u); f_124a38c0();
  /* 124a3698 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a369b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a369f je 0x124a36f9 */
  if (C.zf) goto L_124a36f9;
  /* 124a36a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a36a3 mov eax, dword ptr [0x124c4a78] */
  EAX = (r32((uint32_t)(0x124c4a78)));
  /* 124a36a8 push eax */
  push32((uint32_t)(EAX));
  /* 124a36a9 call 0x12498f50 */
  push32(0x124a36aeu); f_12498f50();
  /* 124a36ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a36b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a36b3 mov ecx, dword ptr [0x124c4a7c] */
  ECX = (r32((uint32_t)(0x124c4a7c)));
  /* 124a36b9 push ecx */
  push32((uint32_t)(ECX));
  /* 124a36ba call 0x12498f50 */
  push32(0x124a36bfu); f_12498f50();
  /* 124a36bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a36c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a36c4 mov edx, dword ptr [0x124c4a80] */
  EDX = (r32((uint32_t)(0x124c4a80)));
  /* 124a36ca push edx */
  push32((uint32_t)(EDX));
  /* 124a36cb call 0x12498f50 */
  push32(0x124a36d0u); f_12498f50();
  /* 124a36d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a36d3 mov dword ptr [0x124c4a78], 0 */
  w32((uint32_t)(0x124c4a78), (0x0u));
  /* 124a36dd mov dword ptr [0x124c4a7c], 0 */
  w32((uint32_t)(0x124c4a7c), (0x0u));
  /* 124a36e7 mov dword ptr [0x124c4a80], 0 */
  w32((uint32_t)(0x124c4a80), (0x0u));
  /* 124a36f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a36f4 jmp 0x124a38b2 */
  goto L_124a38b2;
L_124a36f9:;
  /* 124a36f9 mov eax, dword ptr [0x124c3d88] */
  EAX = (r32((uint32_t)(0x124c3d88)));
  /* 124a36fe cmp dword ptr [eax], 0x124c3d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x124c3d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3704 je 0x124a3740 */
  if (C.zf) goto L_124a3740;
  /* 124a3706 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3708 mov ecx, dword ptr [0x124c3d88] */
  ECX = (r32((uint32_t)(0x124c3d88)));
  /* 124a370e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a3710 push edx */
  push32((uint32_t)(EDX));
  /* 124a3711 call 0x12498f50 */
  push32(0x124a3716u); f_12498f50();
  /* 124a3716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3719 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a371b mov eax, dword ptr [0x124c3d88] */
  EAX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3720 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124a3723 push ecx */
  push32((uint32_t)(ECX));
  /* 124a3724 call 0x12498f50 */
  push32(0x124a3729u); f_12498f50();
  /* 124a3729 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a372c push 2 */
  push32((uint32_t)(0x2u));
  /* 124a372e mov edx, dword ptr [0x124c3d88] */
  EDX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3734 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124a3737 push eax */
  push32((uint32_t)(EAX));
  /* 124a3738 call 0x12498f50 */
  push32(0x124a373du); f_12498f50();
  /* 124a373d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a3740:;
  /* 124a3740 mov ecx, dword ptr [0x124c3d88] */
  ECX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3746 mov edx, dword ptr [0x124c4a78] */
  EDX = (r32((uint32_t)(0x124c4a78)));
  /* 124a374c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 124a374e mov eax, dword ptr [0x124c3d88] */
  EAX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3753 mov ecx, dword ptr [0x124c4a7c] */
  ECX = (r32((uint32_t)(0x124c4a7c)));
  /* 124a3759 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 124a375c mov edx, dword ptr [0x124c3d88] */
  EDX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3762 mov eax, dword ptr [0x124c4a80] */
  EAX = (r32((uint32_t)(0x124c4a80)));
  /* 124a3767 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 124a376a mov ecx, dword ptr [0x124c3d88] */
  ECX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3770 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a3772 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a3774 mov byte ptr [0x124c2ea8], al */
  w8((uint32_t)(0x124c2ea8), (AL));
  /* 124a3779 mov dword ptr [0x124c2eac], 1 */
  w32((uint32_t)(0x124c2eac), (0x1u));
  /* 124a3783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a3785 jmp 0x124a38b2 */
  goto L_124a38b2;
L_124a378a:;
  /* 124a378a push 2 */
  push32((uint32_t)(0x2u));
  /* 124a378c mov ecx, dword ptr [0x124c4a78] */
  ECX = (r32((uint32_t)(0x124c4a78)));
  /* 124a3792 push ecx */
  push32((uint32_t)(ECX));
  /* 124a3793 call 0x12498f50 */
  push32(0x124a3798u); f_12498f50();
  /* 124a3798 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a379b push 2 */
  push32((uint32_t)(0x2u));
  /* 124a379d mov edx, dword ptr [0x124c4a7c] */
  EDX = (r32((uint32_t)(0x124c4a7c)));
  /* 124a37a3 push edx */
  push32((uint32_t)(EDX));
  /* 124a37a4 call 0x12498f50 */
  push32(0x124a37a9u); f_12498f50();
  /* 124a37a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a37ac push 2 */
  push32((uint32_t)(0x2u));
  /* 124a37ae mov eax, dword ptr [0x124c4a80] */
  EAX = (r32((uint32_t)(0x124c4a80)));
  /* 124a37b3 push eax */
  push32((uint32_t)(EAX));
  /* 124a37b4 call 0x12498f50 */
  push32(0x124a37b9u); f_12498f50();
  /* 124a37b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a37bc mov dword ptr [0x124c4a78], 0 */
  w32((uint32_t)(0x124c4a78), (0x0u));
  /* 124a37c6 mov dword ptr [0x124c4a7c], 0 */
  w32((uint32_t)(0x124c4a7c), (0x0u));
  /* 124a37d0 mov dword ptr [0x124c4a80], 0 */
  w32((uint32_t)(0x124c4a80), (0x0u));
  /* 124a37da push 0x88 */
  push32((uint32_t)(0x88u));
  /* 124a37df push 0x124c0964 */
  push32((uint32_t)(0x124c0964u));
  /* 124a37e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a37e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a37e8 call 0x124984c0 */
  push32(0x124a37edu); f_124984c0();
  /* 124a37ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a37f0 mov ecx, dword ptr [0x124c3d88] */
  ECX = (r32((uint32_t)(0x124c3d88)));
  /* 124a37f6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124a37f8 mov edx, dword ptr [0x124c3d88] */
  EDX = (r32((uint32_t)(0x124c3d88)));
  /* 124a37fe cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3801 jne 0x124a380b */
  if (!C.zf) goto L_124a380b;
  /* 124a3803 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a3806 jmp 0x124a38b2 */
  goto L_124a38b2;
L_124a380b:;
  /* 124a380b push 0x124c0934 */
  push32((uint32_t)(0x124c0934u));
  /* 124a3810 mov eax, dword ptr [0x124c3d88] */
  EAX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3815 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124a3817 push ecx */
  push32((uint32_t)(ECX));
  /* 124a3818 call 0x1249b470 */
  push32(0x124a381du); f_1249b470();
  /* 124a381d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3820 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 124a3825 push 0x124c0964 */
  push32((uint32_t)(0x124c0964u));
  /* 124a382a push 2 */
  push32((uint32_t)(0x2u));
  /* 124a382c push 2 */
  push32((uint32_t)(0x2u));
  /* 124a382e call 0x124984c0 */
  push32(0x124a3833u); f_124984c0();
  /* 124a3833 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3836 mov edx, dword ptr [0x124c3d88] */
  EDX = (r32((uint32_t)(0x124c3d88)));
  /* 124a383c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 124a383f mov eax, dword ptr [0x124c3d88] */
  EAX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3844 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3848 jne 0x124a384f */
  if (!C.zf) goto L_124a384f;
  /* 124a384a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a384d jmp 0x124a38b2 */
  goto L_124a38b2;
L_124a384f:;
  /* 124a384f mov ecx, dword ptr [0x124c3d88] */
  ECX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3855 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124a3858 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 124a385b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 124a3860 push 0x124c0964 */
  push32((uint32_t)(0x124c0964u));
  /* 124a3865 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3867 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3869 call 0x124984c0 */
  push32(0x124a386eu); f_124984c0();
  /* 124a386e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3871 mov ecx, dword ptr [0x124c3d88] */
  ECX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3877 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 124a387a mov edx, dword ptr [0x124c3d88] */
  EDX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3880 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3884 jne 0x124a388b */
  if (!C.zf) goto L_124a388b;
  /* 124a3886 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a3889 jmp 0x124a38b2 */
  goto L_124a38b2;
L_124a388b:;
  /* 124a388b mov eax, dword ptr [0x124c3d88] */
  EAX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3890 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124a3893 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 124a3896 mov edx, dword ptr [0x124c3d88] */
  EDX = (r32((uint32_t)(0x124c3d88)));
  /* 124a389c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a389e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124a38a0 mov byte ptr [0x124c2ea8], cl */
  w8((uint32_t)(0x124c2ea8), (CL));
  /* 124a38a6 mov dword ptr [0x124c2eac], 1 */
  w32((uint32_t)(0x124c2eac), (0x1u));
  /* 124a38b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a38b2:;
  /* 124a38b2 mov esp, ebp */
  ESP = (EBP);
  /* 124a38b4 pop ebp */
  EBP = (pop32());
  /* 124a38b5 ret  */
  ESPCHK(0x124a3610u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x124a38c0 (125 bytes, 49 insns) */
void f_124a38c0(void) {
  FTRACE(0x124a38c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a38c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a38c1 mov ebp, esp */
  EBP = (ESP);
  /* 124a38c3 push ecx */
  push32((uint32_t)(ECX));
L_124a38c4:;
  /* 124a38c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a38c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a38ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a38cc je 0x124a3939 */
  if (C.zf) goto L_124a3939;
  /* 124a38ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a38d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124a38d4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a38d7 jl 0x124a38fd */
  if ((C.sf!=C.of)) goto L_124a38fd;
  /* 124a38d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a38dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a38df cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a38e2 jg 0x124a38fd */
  if ((!C.zf&&C.sf==C.of)) goto L_124a38fd;
  /* 124a38e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a38e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a38ea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a38ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a38f0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 124a38f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a38f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a38f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a38fb jmp 0x124a3937 */
  goto L_124a3937;
L_124a38fd:;
  /* 124a38fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3900 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a3903 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3906 jne 0x124a392e */
  if (!C.zf) goto L_124a392e;
  /* 124a3908 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a390b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124a390e:;
  /* 124a390e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3911 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3914 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 124a3917 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124a3919 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a391c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a391f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a3922 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3925 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124a3928 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a392a jne 0x124a390e */
  if (!C.zf) goto L_124a390e;
  /* 124a392c jmp 0x124a3937 */
  goto L_124a3937;
L_124a392e:;
  /* 124a392e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3931 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3934 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_124a3937:;
  /* 124a3937 jmp 0x124a38c4 */
  goto L_124a38c4;
L_124a3939:;
  /* 124a3939 mov esp, ebp */
  ESP = (EBP);
  /* 124a393b pop ebp */
  EBP = (pop32());
  /* 124a393c ret  */
  ESPCHK(0x124a38c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013940 @ 0x124a3940 (304 bytes, 85 insns) */
void f_124a3940(void) {
  FTRACE(0x124a3940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a3940 push ebp */
  push32((uint32_t)(EBP));
  /* 124a3941 mov ebp, esp */
  EBP = (ESP);
  /* 124a3943 push ecx */
  push32((uint32_t)(ECX));
  /* 124a3944 cmp dword ptr [0x124c4a4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a394b je 0x124a3a0c */
  if (C.zf) goto L_124a3a0c;
  /* 124a3951 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 124a3953 push 0x124c0970 */
  push32((uint32_t)(0x124c0970u));
  /* 124a3958 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a395a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 124a395c push 1 */
  push32((uint32_t)(0x1u));
  /* 124a395e call 0x124988d0 */
  push32(0x124a3963u); f_124988d0();
  /* 124a3963 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3966 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a3969 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a396d jne 0x124a3979 */
  if (!C.zf) goto L_124a3979;
  /* 124a396f mov eax, 1 */
  EAX = (0x1u);
  /* 124a3974 jmp 0x124a3a6c */
  goto L_124a3a6c;
L_124a3979:;
  /* 124a3979 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a397c push eax */
  push32((uint32_t)(EAX));
  /* 124a397d call 0x124a3a70 */
  push32(0x124a3982u); f_124a3a70();
  /* 124a3982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3985 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a3987 je 0x124a39ad */
  if (C.zf) goto L_124a39ad;
  /* 124a3989 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a398c push ecx */
  push32((uint32_t)(ECX));
  /* 124a398d call 0x124a3d00 */
  push32(0x124a3992u); f_124a3d00();
  /* 124a3992 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3995 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3997 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a399a push edx */
  push32((uint32_t)(EDX));
  /* 124a399b call 0x12498f50 */
  push32(0x124a39a0u); f_12498f50();
  /* 124a39a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a39a3 mov eax, 1 */
  EAX = (0x1u);
  /* 124a39a8 jmp 0x124a3a6c */
  goto L_124a3a6c;
L_124a39ad:;
  /* 124a39ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a39b0 mov ecx, dword ptr [0x124c3d88] */
  ECX = (r32((uint32_t)(0x124c3d88)));
  /* 124a39b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a39b8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124a39ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a39bd mov ecx, dword ptr [0x124c3d88] */
  ECX = (r32((uint32_t)(0x124c3d88)));
  /* 124a39c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124a39c6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 124a39c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a39cc mov ecx, dword ptr [0x124c3d88] */
  ECX = (r32((uint32_t)(0x124c3d88)));
  /* 124a39d2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 124a39d5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 124a39d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a39db mov dword ptr [0x124c3d88], eax */
  w32((uint32_t)(0x124c3d88), (EAX));
  /* 124a39e0 mov ecx, dword ptr [0x124c4a84] */
  ECX = (r32((uint32_t)(0x124c4a84)));
  /* 124a39e6 push ecx */
  push32((uint32_t)(ECX));
  /* 124a39e7 call 0x124a3d00 */
  push32(0x124a39ecu); f_124a3d00();
  /* 124a39ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a39ef push 2 */
  push32((uint32_t)(0x2u));
  /* 124a39f1 mov edx, dword ptr [0x124c4a84] */
  EDX = (r32((uint32_t)(0x124c4a84)));
  /* 124a39f7 push edx */
  push32((uint32_t)(EDX));
  /* 124a39f8 call 0x12498f50 */
  push32(0x124a39fdu); f_12498f50();
  /* 124a39fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3a00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3a03 mov dword ptr [0x124c4a84], eax */
  w32((uint32_t)(0x124c4a84), (EAX));
  /* 124a3a08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a3a0a jmp 0x124a3a6c */
  goto L_124a3a6c;
L_124a3a0c:;
  /* 124a3a0c mov ecx, dword ptr [0x124c3d88] */
  ECX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3a12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a3a14 mov dword ptr [0x124c3d58], edx */
  w32((uint32_t)(0x124c3d58), (EDX));
  /* 124a3a1a mov eax, dword ptr [0x124c3d88] */
  EAX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3a1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124a3a22 mov dword ptr [0x124c3d5c], ecx */
  w32((uint32_t)(0x124c3d5c), (ECX));
  /* 124a3a28 mov edx, dword ptr [0x124c3d88] */
  EDX = (r32((uint32_t)(0x124c3d88)));
  /* 124a3a2e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124a3a31 mov dword ptr [0x124c3d60], eax */
  w32((uint32_t)(0x124c3d60), (EAX));
  /* 124a3a36 mov dword ptr [0x124c3d88], 0x124c3d58 */
  w32((uint32_t)(0x124c3d88), (0x124c3d58u));
  /* 124a3a40 mov ecx, dword ptr [0x124c4a84] */
  ECX = (r32((uint32_t)(0x124c4a84)));
  /* 124a3a46 push ecx */
  push32((uint32_t)(ECX));
  /* 124a3a47 call 0x124a3d00 */
  push32(0x124a3a4cu); f_124a3d00();
  /* 124a3a4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3a4f push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3a51 mov edx, dword ptr [0x124c4a84] */
  EDX = (r32((uint32_t)(0x124c4a84)));
  /* 124a3a57 push edx */
  push32((uint32_t)(EDX));
  /* 124a3a58 call 0x12498f50 */
  push32(0x124a3a5du); f_12498f50();
  /* 124a3a5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3a60 mov dword ptr [0x124c4a84], 0 */
  w32((uint32_t)(0x124c4a84), (0x0u));
  /* 124a3a6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a3a6c:;
  /* 124a3a6c mov esp, ebp */
  ESP = (EBP);
  /* 124a3a6e pop ebp */
  EBP = (pop32());
  /* 124a3a6f ret  */
  ESPCHK(0x124a3940u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a70 @ 0x124a3a70 (525 bytes, 200 insns) */
void f_124a3a70(void) {
  FTRACE(0x124a3a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a3a70 push ebp */
  push32((uint32_t)(EBP));
  /* 124a3a71 mov ebp, esp */
  EBP = (ESP);
  /* 124a3a73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a3a76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124a3a7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a3a7f mov ax, word ptr [0x124c4aa4] */
  AX = (r16((uint32_t)(0x124c4aa4)));
  /* 124a3a85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a3a88 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3a8c jne 0x124a3a96 */
  if (!C.zf) goto L_124a3a96;
  /* 124a3a8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a3a91 jmp 0x124a3c79 */
  goto L_124a3c79;
L_124a3a96:;
  /* 124a3a96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3a99 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3a9c push ecx */
  push32((uint32_t)(ECX));
  /* 124a3a9d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 124a3a9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3aa2 push edx */
  push32((uint32_t)(EDX));
  /* 124a3aa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3aa5 call 0x124a6680 */
  push32(0x124a3aaau); f_124a6680();
  /* 124a3aaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3aad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3ab0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3ab2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3ab5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3ab8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3abb push edx */
  push32((uint32_t)(EDX));
  /* 124a3abc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 124a3abe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3ac1 push eax */
  push32((uint32_t)(EAX));
  /* 124a3ac2 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3ac4 call 0x124a6680 */
  push32(0x124a3ac9u); f_124a6680();
  /* 124a3ac9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3acc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3acf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3ad1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3ad4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3ad7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3ada push edx */
  push32((uint32_t)(EDX));
  /* 124a3adb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 124a3add mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3ae0 push eax */
  push32((uint32_t)(EAX));
  /* 124a3ae1 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3ae3 call 0x124a6680 */
  push32(0x124a3ae8u); f_124a6680();
  /* 124a3ae8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3aeb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3aee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3af0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3af3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3af6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3af9 push edx */
  push32((uint32_t)(EDX));
  /* 124a3afa push 0x17 */
  push32((uint32_t)(0x17u));
  /* 124a3afc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3aff push eax */
  push32((uint32_t)(EAX));
  /* 124a3b00 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3b02 call 0x124a6680 */
  push32(0x124a3b07u); f_124a6680();
  /* 124a3b07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3b0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3b0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3b0f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3b12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3b15 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3b18 push edx */
  push32((uint32_t)(EDX));
  /* 124a3b19 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 124a3b1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3b1e push eax */
  push32((uint32_t)(EAX));
  /* 124a3b1f push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3b21 call 0x124a6680 */
  push32(0x124a3b26u); f_124a6680();
  /* 124a3b26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3b29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3b2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3b2e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3b31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3b34 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124a3b37 push eax */
  push32((uint32_t)(EAX));
  /* 124a3b38 call 0x124a3c80 */
  push32(0x124a3b3du); f_124a3c80();
  /* 124a3b3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3b40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3b43 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3b46 push ecx */
  push32((uint32_t)(ECX));
  /* 124a3b47 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 124a3b49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3b4c push edx */
  push32((uint32_t)(EDX));
  /* 124a3b4d push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3b4f call 0x124a6680 */
  push32(0x124a3b54u); f_124a6680();
  /* 124a3b54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3b57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3b5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3b5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3b5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3b62 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3b65 push edx */
  push32((uint32_t)(EDX));
  /* 124a3b66 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 124a3b68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3b6b push eax */
  push32((uint32_t)(EAX));
  /* 124a3b6c push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3b6e call 0x124a6680 */
  push32(0x124a3b73u); f_124a6680();
  /* 124a3b73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3b76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3b79 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3b7b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3b7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3b81 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3b84 push edx */
  push32((uint32_t)(EDX));
  /* 124a3b85 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 124a3b87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3b8a push eax */
  push32((uint32_t)(EAX));
  /* 124a3b8b push 0 */
  push32((uint32_t)(0x0u));
  /* 124a3b8d call 0x124a6680 */
  push32(0x124a3b92u); f_124a6680();
  /* 124a3b92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3b95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3b98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3b9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3b9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3ba0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3ba3 push edx */
  push32((uint32_t)(EDX));
  /* 124a3ba4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124a3ba6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3ba9 push eax */
  push32((uint32_t)(EAX));
  /* 124a3baa push 0 */
  push32((uint32_t)(0x0u));
  /* 124a3bac call 0x124a6680 */
  push32(0x124a3bb1u); f_124a6680();
  /* 124a3bb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3bb4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3bb7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3bb9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3bbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3bbf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3bc2 push edx */
  push32((uint32_t)(EDX));
  /* 124a3bc3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 124a3bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3bc8 push eax */
  push32((uint32_t)(EAX));
  /* 124a3bc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a3bcb call 0x124a6680 */
  push32(0x124a3bd0u); f_124a6680();
  /* 124a3bd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3bd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3bd6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3bd8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3bdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3bde add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3be1 push edx */
  push32((uint32_t)(EDX));
  /* 124a3be2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 124a3be4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3be7 push eax */
  push32((uint32_t)(EAX));
  /* 124a3be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a3bea call 0x124a6680 */
  push32(0x124a3befu); f_124a6680();
  /* 124a3bef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3bf2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3bf5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3bf7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3bfa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3bfd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3c00 push edx */
  push32((uint32_t)(EDX));
  /* 124a3c01 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 124a3c03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3c06 push eax */
  push32((uint32_t)(EAX));
  /* 124a3c07 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a3c09 call 0x124a6680 */
  push32(0x124a3c0eu); f_124a6680();
  /* 124a3c0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3c11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3c14 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3c16 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3c19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3c1c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3c1f push edx */
  push32((uint32_t)(EDX));
  /* 124a3c20 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 124a3c22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3c25 push eax */
  push32((uint32_t)(EAX));
  /* 124a3c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a3c28 call 0x124a6680 */
  push32(0x124a3c2du); f_124a6680();
  /* 124a3c2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3c30 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3c33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3c35 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3c38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3c3b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3c3e push edx */
  push32((uint32_t)(EDX));
  /* 124a3c3f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 124a3c41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3c44 push eax */
  push32((uint32_t)(EAX));
  /* 124a3c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a3c47 call 0x124a6680 */
  push32(0x124a3c4cu); f_124a6680();
  /* 124a3c4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3c4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3c52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3c54 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3c57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3c5a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3c5d push edx */
  push32((uint32_t)(EDX));
  /* 124a3c5e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 124a3c60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3c63 push eax */
  push32((uint32_t)(EAX));
  /* 124a3c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a3c66 call 0x124a6680 */
  push32(0x124a3c6bu); f_124a6680();
  /* 124a3c6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3c6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a3c71 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3c73 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a3c76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124a3c79:;
  /* 124a3c79 mov esp, ebp */
  ESP = (EBP);
  /* 124a3c7b pop ebp */
  EBP = (pop32());
  /* 124a3c7c ret  */
  ESPCHK(0x124a3a70u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x124a3c80 (125 bytes, 49 insns) */
void f_124a3c80(void) {
  FTRACE(0x124a3c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a3c80 push ebp */
  push32((uint32_t)(EBP));
  /* 124a3c81 mov ebp, esp */
  EBP = (ESP);
  /* 124a3c83 push ecx */
  push32((uint32_t)(ECX));
L_124a3c84:;
  /* 124a3c84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3c87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a3c8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a3c8c je 0x124a3cf9 */
  if (C.zf) goto L_124a3cf9;
  /* 124a3c8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3c91 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124a3c94 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3c97 jl 0x124a3cbd */
  if ((C.sf!=C.of)) goto L_124a3cbd;
  /* 124a3c99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3c9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a3c9f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3ca2 jg 0x124a3cbd */
  if ((!C.zf&&C.sf==C.of)) goto L_124a3cbd;
  /* 124a3ca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3ca7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a3caa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a3cad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3cb0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 124a3cb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3cb5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3cb8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a3cbb jmp 0x124a3cf7 */
  goto L_124a3cf7;
L_124a3cbd:;
  /* 124a3cbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3cc0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a3cc3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3cc6 jne 0x124a3cee */
  if (!C.zf) goto L_124a3cee;
  /* 124a3cc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3ccb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124a3cce:;
  /* 124a3cce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3cd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3cd4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 124a3cd7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124a3cd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3cdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3cdf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a3ce2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a3ce5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124a3ce8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a3cea jne 0x124a3cce */
  if (!C.zf) goto L_124a3cce;
  /* 124a3cec jmp 0x124a3cf7 */
  goto L_124a3cf7;
L_124a3cee:;
  /* 124a3cee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3cf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3cf4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_124a3cf7:;
  /* 124a3cf7 jmp 0x124a3c84 */
  goto L_124a3c84;
L_124a3cf9:;
  /* 124a3cf9 mov esp, ebp */
  ESP = (EBP);
  /* 124a3cfb pop ebp */
  EBP = (pop32());
  /* 124a3cfc ret  */
  ESPCHK(0x124a3c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d00 @ 0x124a3d00 (147 bytes, 52 insns) */
void f_124a3d00(void) {
  FTRACE(0x124a3d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a3d00 push ebp */
  push32((uint32_t)(EBP));
  /* 124a3d01 mov ebp, esp */
  EBP = (ESP);
  /* 124a3d03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3d07 jne 0x124a3d0e */
  if (!C.zf) goto L_124a3d0e;
  /* 124a3d09 jmp 0x124a3d91 */
  goto L_124a3d91;
L_124a3d0e:;
  /* 124a3d0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3d11 cmp dword ptr [eax + 0xc], 0x124c4ae0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x124c4ae0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3d18 je 0x124a3d91 */
  if (C.zf) goto L_124a3d91;
  /* 124a3d1a push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3d1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3d1f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124a3d22 push edx */
  push32((uint32_t)(EDX));
  /* 124a3d23 call 0x12498f50 */
  push32(0x124a3d28u); f_12498f50();
  /* 124a3d28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3d2b push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3d2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3d30 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124a3d33 push ecx */
  push32((uint32_t)(ECX));
  /* 124a3d34 call 0x12498f50 */
  push32(0x124a3d39u); f_12498f50();
  /* 124a3d39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3d3c push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3d3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3d41 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124a3d44 push eax */
  push32((uint32_t)(EAX));
  /* 124a3d45 call 0x12498f50 */
  push32(0x124a3d4au); f_12498f50();
  /* 124a3d4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3d4d push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3d4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3d52 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 124a3d55 push edx */
  push32((uint32_t)(EDX));
  /* 124a3d56 call 0x12498f50 */
  push32(0x124a3d5bu); f_12498f50();
  /* 124a3d5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3d5e push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3d60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3d63 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124a3d66 push ecx */
  push32((uint32_t)(ECX));
  /* 124a3d67 call 0x12498f50 */
  push32(0x124a3d6cu); f_12498f50();
  /* 124a3d6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3d6f push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3d71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3d74 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 124a3d77 push eax */
  push32((uint32_t)(EAX));
  /* 124a3d78 call 0x12498f50 */
  push32(0x124a3d7du); f_12498f50();
  /* 124a3d7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3d80 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3d82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a3d85 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 124a3d88 push edx */
  push32((uint32_t)(EDX));
  /* 124a3d89 call 0x12498f50 */
  push32(0x124a3d8eu); f_12498f50();
  /* 124a3d8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a3d91:;
  /* 124a3d91 pop ebp */
  EBP = (pop32());
  /* 124a3d92 ret  */
  ESPCHK(0x124a3d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013da0 @ 0x124a3da0 (928 bytes, 284 insns) */
void f_124a3da0(void) {
  FTRACE(0x124a3da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a3da0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a3da1 mov ebp, esp */
  EBP = (ESP);
  /* 124a3da3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a3da6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 124a3dad mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 124a3db4 cmp dword ptr [0x124c4a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3dbb je 0x124a40f1 */
  if (C.zf) goto L_124a40f1;
  /* 124a3dc1 cmp dword ptr [0x124c4a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3dc8 jne 0x124a3df0 */
  if (!C.zf) goto L_124a3df0;
  /* 124a3dca push 0x124c4a58 */
  push32((uint32_t)(0x124c4a58u));
  /* 124a3dcf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 124a3dd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a3dd6 mov ax, word ptr [0x124c4a9c] */
  AX = (r16((uint32_t)(0x124c4a9c)));
  /* 124a3ddc push eax */
  push32((uint32_t)(EAX));
  /* 124a3ddd push 0 */
  push32((uint32_t)(0x0u));
  /* 124a3ddf call 0x124a6680 */
  push32(0x124a3de4u); f_124a6680();
  /* 124a3de4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3de7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a3de9 je 0x124a3df0 */
  if (C.zf) goto L_124a3df0;
  /* 124a3deb jmp 0x124a40b2 */
  goto L_124a40b2;
L_124a3df0:;
  /* 124a3df0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 124a3df2 push 0x124c097c */
  push32((uint32_t)(0x124c097cu));
  /* 124a3df7 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3df9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 124a3dfe call 0x124984c0 */
  push32(0x124a3e03u); f_124984c0();
  /* 124a3e03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3e06 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 124a3e09 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 124a3e0b push 0x124c097c */
  push32((uint32_t)(0x124c097cu));
  /* 124a3e10 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3e12 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 124a3e17 call 0x124984c0 */
  push32(0x124a3e1cu); f_124984c0();
  /* 124a3e1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3e1f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124a3e22 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 124a3e24 push 0x124c097c */
  push32((uint32_t)(0x124c097cu));
  /* 124a3e29 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3e2b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 124a3e30 call 0x124984c0 */
  push32(0x124a3e35u); f_124984c0();
  /* 124a3e35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3e38 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 124a3e3b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 124a3e3d push 0x124c097c */
  push32((uint32_t)(0x124c097cu));
  /* 124a3e42 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a3e44 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 124a3e49 call 0x124984c0 */
  push32(0x124a3e4eu); f_124984c0();
  /* 124a3e4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3e51 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124a3e54 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3e58 je 0x124a3e6c */
  if (C.zf) goto L_124a3e6c;
  /* 124a3e5a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3e5e je 0x124a3e6c */
  if (C.zf) goto L_124a3e6c;
  /* 124a3e60 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3e64 je 0x124a3e6c */
  if (C.zf) goto L_124a3e6c;
  /* 124a3e66 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3e6a jne 0x124a3e71 */
  if (!C.zf) goto L_124a3e71;
L_124a3e6c:;
  /* 124a3e6c jmp 0x124a40b2 */
  goto L_124a40b2;
L_124a3e71:;
  /* 124a3e71 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124a3e74 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 124a3e77 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124a3e7e jmp 0x124a3e89 */
  goto L_124a3e89;
L_124a3e80:;
  /* 124a3e80 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a3e83 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3e86 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_124a3e89:;
  /* 124a3e89 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3e90 jge 0x124a3ea5 */
  if ((C.sf==C.of)) goto L_124a3ea5;
  /* 124a3e92 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a3e95 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 124a3e98 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 124a3e9a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a3e9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3ea0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 124a3ea3 jmp 0x124a3e80 */
  goto L_124a3e80;
L_124a3ea5:;
  /* 124a3ea5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 124a3ea8 push eax */
  push32((uint32_t)(EAX));
  /* 124a3ea9 mov ecx, dword ptr [0x124c4a58] */
  ECX = (r32((uint32_t)(0x124c4a58)));
  /* 124a3eaf push ecx */
  push32((uint32_t)(ECX));
  /* 124a3eb0 call dword ptr [0x124c7308] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7308))), 0x124a3eb6u);
  /* 124a3eb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a3eb8 jne 0x124a3ebf */
  if (!C.zf) goto L_124a3ebf;
  /* 124a3eba jmp 0x124a40b2 */
  goto L_124a40b2;
L_124a3ebf:;
  /* 124a3ebf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3ec3 jbe 0x124a3eca */
  if ((C.cf||C.zf)) goto L_124a3eca;
  /* 124a3ec5 jmp 0x124a40b2 */
  goto L_124a40b2;
L_124a3eca:;
  /* 124a3eca mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a3ecd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124a3ed3 mov dword ptr [0x124c2ea4], edx */
  w32((uint32_t)(0x124c2ea4), (EDX));
  /* 124a3ed9 cmp dword ptr [0x124c2ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c2ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3ee0 jle 0x124a3f39 */
  if ((C.zf||C.sf!=C.of)) goto L_124a3f39;
  /* 124a3ee2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 124a3ee5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124a3ee8 jmp 0x124a3ef3 */
  goto L_124a3ef3;
L_124a3eea:;
  /* 124a3eea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a3eed add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3ef0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_124a3ef3:;
  /* 124a3ef3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a3ef6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a3ef8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a3efa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a3efc je 0x124a3f39 */
  if (C.zf) goto L_124a3f39;
  /* 124a3efe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a3f01 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a3f03 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 124a3f06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a3f08 je 0x124a3f39 */
  if (C.zf) goto L_124a3f39;
  /* 124a3f0a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a3f0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3f0f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124a3f11 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 124a3f14 jmp 0x124a3f1f */
  goto L_124a3f1f;
L_124a3f16:;
  /* 124a3f16 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a3f19 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3f1c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_124a3f1f:;
  /* 124a3f1f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a3f22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3f24 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 124a3f27 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3f2a jg 0x124a3f37 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a3f37;
  /* 124a3f2c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124a3f2f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3f32 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 124a3f35 jmp 0x124a3f16 */
  goto L_124a3f16;
L_124a3f37:;
  /* 124a3f37 jmp 0x124a3eea */
  goto L_124a3eea;
L_124a3f39:;
  /* 124a3f39 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a3f3b push 0 */
  push32((uint32_t)(0x0u));
  /* 124a3f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 124a3f3f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124a3f42 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3f45 push eax */
  push32((uint32_t)(EAX));
  /* 124a3f46 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124a3f4b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124a3f4e push ecx */
  push32((uint32_t)(ECX));
  /* 124a3f4f push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3f51 call 0x124a06f0 */
  push32(0x124a3f56u); f_124a06f0();
  /* 124a3f56 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3f59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a3f5b jne 0x124a3f62 */
  if (!C.zf) goto L_124a3f62;
  /* 124a3f5d jmp 0x124a40b2 */
  goto L_124a40b2;
L_124a3f62:;
  /* 124a3f62 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124a3f65 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 124a3f6a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a3f6d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124a3f70 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124a3f77 jmp 0x124a3f82 */
  goto L_124a3f82;
L_124a3f79:;
  /* 124a3f79 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a3f7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3f7f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_124a3f82:;
  /* 124a3f82 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3f89 jge 0x124a3fa0 */
  if ((C.sf==C.of)) goto L_124a3fa0;
  /* 124a3f8b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a3f8e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 124a3f92 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 124a3f95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124a3f98 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3f9b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124a3f9e jmp 0x124a3f79 */
  goto L_124a3f79;
L_124a3fa0:;
  /* 124a3fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a3fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a3fa4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a3fa7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3faa push edx */
  push32((uint32_t)(EDX));
  /* 124a3fab push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124a3fb0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a3fb3 push eax */
  push32((uint32_t)(EAX));
  /* 124a3fb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a3fb6 call 0x124a6920 */
  push32(0x124a3fbbu); f_124a6920();
  /* 124a3fbb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3fbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a3fc0 jne 0x124a3fc7 */
  if (!C.zf) goto L_124a3fc7;
  /* 124a3fc2 jmp 0x124a40b2 */
  goto L_124a40b2;
L_124a3fc7:;
  /* 124a3fc7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a3fca mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 124a3fcf cmp dword ptr [0x124c2ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124c2ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a3fd6 jle 0x124a4033 */
  if ((C.zf||C.sf!=C.of)) goto L_124a4033;
  /* 124a3fd8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 124a3fdb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 124a3fde jmp 0x124a3fe9 */
  goto L_124a3fe9;
L_124a3fe0:;
  /* 124a3fe0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a3fe3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a3fe6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_124a3fe9:;
  /* 124a3fe9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a3fec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124a3fee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124a3ff0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a3ff2 je 0x124a4033 */
  if (C.zf) goto L_124a4033;
  /* 124a3ff4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a3ff7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a3ff9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 124a3ffc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a3ffe je 0x124a4033 */
  if (C.zf) goto L_124a4033;
  /* 124a4000 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a4003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a4005 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a4007 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124a400a jmp 0x124a4015 */
  goto L_124a4015;
L_124a400c:;
  /* 124a400c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a400f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4012 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_124a4015:;
  /* 124a4015 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124a4018 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a401a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 124a401d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4020 jg 0x124a4031 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a4031;
  /* 124a4022 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124a4025 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124a4028 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 124a402f jmp 0x124a400c */
  goto L_124a400c;
L_124a4031:;
  /* 124a4031 jmp 0x124a3fe0 */
  goto L_124a3fe0;
L_124a4033:;
  /* 124a4033 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124a4036 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4039 mov dword ptr [0x124c2c98], eax */
  w32((uint32_t)(0x124c2c98), (EAX));
  /* 124a403e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a4041 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4044 mov dword ptr [0x124c2c9c], ecx */
  w32((uint32_t)(0x124c2c9c), (ECX));
  /* 124a404a cmp dword ptr [0x124c4a88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4051 je 0x124a4064 */
  if (C.zf) goto L_124a4064;
  /* 124a4053 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a4055 mov edx, dword ptr [0x124c4a88] */
  EDX = (r32((uint32_t)(0x124c4a88)));
  /* 124a405b push edx */
  push32((uint32_t)(EDX));
  /* 124a405c call 0x12498f50 */
  push32(0x124a4061u); f_12498f50();
  /* 124a4061 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a4064:;
  /* 124a4064 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124a4067 mov dword ptr [0x124c4a88], eax */
  w32((uint32_t)(0x124c4a88), (EAX));
  /* 124a406c cmp dword ptr [0x124c4a8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4a8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4073 je 0x124a4086 */
  if (C.zf) goto L_124a4086;
  /* 124a4075 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a4077 mov ecx, dword ptr [0x124c4a8c] */
  ECX = (r32((uint32_t)(0x124c4a8c)));
  /* 124a407d push ecx */
  push32((uint32_t)(ECX));
  /* 124a407e call 0x12498f50 */
  push32(0x124a4083u); f_12498f50();
  /* 124a4083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a4086:;
  /* 124a4086 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a4089 mov dword ptr [0x124c4a8c], edx */
  w32((uint32_t)(0x124c4a8c), (EDX));
  /* 124a408f push 2 */
  push32((uint32_t)(0x2u));
  /* 124a4091 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124a4094 push eax */
  push32((uint32_t)(EAX));
  /* 124a4095 call 0x12498f50 */
  push32(0x124a409au); f_12498f50();
  /* 124a409a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a409d push 2 */
  push32((uint32_t)(0x2u));
  /* 124a409f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a40a2 push ecx */
  push32((uint32_t)(ECX));
  /* 124a40a3 call 0x12498f50 */
  push32(0x124a40a8u); f_12498f50();
  /* 124a40a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a40ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a40ad jmp 0x124a413c */
  goto L_124a413c;
L_124a40b2:;
  /* 124a40b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a40b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124a40b7 push edx */
  push32((uint32_t)(EDX));
  /* 124a40b8 call 0x12498f50 */
  push32(0x124a40bdu); f_12498f50();
  /* 124a40bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a40c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a40c2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124a40c5 push eax */
  push32((uint32_t)(EAX));
  /* 124a40c6 call 0x12498f50 */
  push32(0x124a40cbu); f_12498f50();
  /* 124a40cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a40ce push 2 */
  push32((uint32_t)(0x2u));
  /* 124a40d0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124a40d3 push ecx */
  push32((uint32_t)(ECX));
  /* 124a40d4 call 0x12498f50 */
  push32(0x124a40d9u); f_12498f50();
  /* 124a40d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a40dc push 2 */
  push32((uint32_t)(0x2u));
  /* 124a40de mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124a40e1 push edx */
  push32((uint32_t)(EDX));
  /* 124a40e2 call 0x12498f50 */
  push32(0x124a40e7u); f_12498f50();
  /* 124a40e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a40ea mov eax, 1 */
  EAX = (0x1u);
  /* 124a40ef jmp 0x124a413c */
  goto L_124a413c;
L_124a40f1:;
  /* 124a40f1 mov dword ptr [0x124c2c98], 0x124c2ca2 */
  w32((uint32_t)(0x124c2c98), (0x124c2ca2u));
  /* 124a40fb mov dword ptr [0x124c2c9c], 0x124c2ca2 */
  w32((uint32_t)(0x124c2c9c), (0x124c2ca2u));
  /* 124a4105 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a4107 mov eax, dword ptr [0x124c4a88] */
  EAX = (r32((uint32_t)(0x124c4a88)));
  /* 124a410c push eax */
  push32((uint32_t)(EAX));
  /* 124a410d call 0x12498f50 */
  push32(0x124a4112u); f_12498f50();
  /* 124a4112 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4115 push 2 */
  push32((uint32_t)(0x2u));
  /* 124a4117 mov ecx, dword ptr [0x124c4a8c] */
  ECX = (r32((uint32_t)(0x124c4a8c)));
  /* 124a411d push ecx */
  push32((uint32_t)(ECX));
  /* 124a411e call 0x12498f50 */
  push32(0x124a4123u); f_12498f50();
  /* 124a4123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4126 mov dword ptr [0x124c4a88], 0 */
  w32((uint32_t)(0x124c4a88), (0x0u));
  /* 124a4130 mov dword ptr [0x124c4a8c], 0 */
  w32((uint32_t)(0x124c4a8c), (0x0u));
  /* 124a413a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a413c:;
  /* 124a413c mov esp, ebp */
  ESP = (EBP);
  /* 124a413e pop ebp */
  EBP = (pop32());
  /* 124a413f ret  */
  ESPCHK(0x124a3da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014140 @ 0x124a4140 (7 bytes, 5 insns) */
void f_124a4140(void) {
  FTRACE(0x124a4140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4140 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4141 mov ebp, esp */
  EBP = (ESP);
  /* 124a4143 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a4145 pop ebp */
  EBP = (pop32());
  /* 124a4146 ret  */
  ESPCHK(0x124a4140u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x124a4150 (129 bytes, 56 insns) */
void f_124a4150(void) {
  FTRACE(0x124a4150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4150 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 124a4154 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 124a4158 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 124a415e jne 0x124a419c */
  if (!C.zf) goto L_124a419c;
L_124a4160:;
  /* 124a4160 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124a4162 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a4164 jne 0x124a4194 */
  if (!C.zf) goto L_124a4194;
  /* 124a4166 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124a4168 je 0x124a4190 */
  if (C.zf) goto L_124a4190;
  /* 124a416a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a416d jne 0x124a4194 */
  if (!C.zf) goto L_124a4194;
  /* 124a416f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 124a4171 je 0x124a4190 */
  if (C.zf) goto L_124a4190;
  /* 124a4173 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 124a4176 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a4179 jne 0x124a4194 */
  if (!C.zf) goto L_124a4194;
  /* 124a417b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124a417d je 0x124a4190 */
  if (C.zf) goto L_124a4190;
  /* 124a417f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a4182 jne 0x124a4194 */
  if (!C.zf) goto L_124a4194;
  /* 124a4184 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4187 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a418a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 124a418c jne 0x124a4160 */
  if (!C.zf) goto L_124a4160;
  /* 124a418e mov edi, edi */
  EDI = (EDI);
L_124a4190:;
  /* 124a4190 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a4192 ret  */
  ESPCHK(0x124a4150u, _esp0);
  ESP += 4; return;
  /* 124a4193 nop  */
  /* nop */
L_124a4194:;
  /* 124a4194 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4196 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124a4198 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 124a4199 ret  */
  ESPCHK(0x124a4150u, _esp0);
  ESP += 4; return;
  /* 124a419a mov edi, edi */
  EDI = (EDI);
L_124a419c:;
  /* 124a419c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 124a41a2 je 0x124a41b8 */
  if (C.zf) goto L_124a41b8;
  /* 124a41a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a41a6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 124a41a7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a41a9 jne 0x124a4194 */
  if (!C.zf) goto L_124a4194;
  /* 124a41ab inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 124a41ac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124a41ae je 0x124a4190 */
  if (C.zf) goto L_124a4190;
  /* 124a41b0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 124a41b6 je 0x124a4160 */
  if (C.zf) goto L_124a4160;
L_124a41b8:;
  /* 124a41b8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 124a41bb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a41be cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a41c0 jne 0x124a4194 */
  if (!C.zf) goto L_124a4194;
  /* 124a41c2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124a41c4 je 0x124a4190 */
  if (C.zf) goto L_124a4190;
  /* 124a41c6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a41c9 jne 0x124a4194 */
  if (!C.zf) goto L_124a4194;
  /* 124a41cb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 124a41cd je 0x124a4190 */
  if (C.zf) goto L_124a4190;
  /* 124a41cf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a41d2 jmp 0x124a4160 */
  goto L_124a4160;
}

/* FUN_100141e0 @ 0x124a41e0 (62 bytes, 35 insns) */
void f_124a41e0(void) {
  FTRACE(0x124a41e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a41e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a41e1 mov ebp, esp */
  EBP = (ESP);
  /* 124a41e3 push esi */
  push32((uint32_t)(ESI));
  /* 124a41e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a41e6 push eax */
  push32((uint32_t)(EAX));
  /* 124a41e7 push eax */
  push32((uint32_t)(EAX));
  /* 124a41e8 push eax */
  push32((uint32_t)(EAX));
  /* 124a41e9 push eax */
  push32((uint32_t)(EAX));
  /* 124a41ea push eax */
  push32((uint32_t)(EAX));
  /* 124a41eb push eax */
  push32((uint32_t)(EAX));
  /* 124a41ec push eax */
  push32((uint32_t)(EAX));
  /* 124a41ed push eax */
  push32((uint32_t)(EAX));
  /* 124a41ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a41f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124a41f4:;
  /* 124a41f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a41f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124a41f8 je 0x124a4201 */
  if (C.zf) goto L_124a4201;
  /* 124a41fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 124a41fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x124a41fb");
  /* 124a41ff jmp 0x124a41f4 */
  goto L_124a41f4;
L_124a4201:;
  /* 124a4201 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4204 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 124a4207 nop  */
  /* nop */
L_124a4208:;
  /* 124a4208 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 124a4209 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124a420b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124a420d je 0x124a4216 */
  if (C.zf) goto L_124a4216;
  /* 124a420f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124a4210 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x124a4210");
  /* 124a4214 jae 0x124a4208 */
  if (!C.cf) goto L_124a4208;
L_124a4216:;
  /* 124a4216 mov eax, ecx */
  EAX = (ECX);
  /* 124a4218 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a421b pop esi */
  ESI = (pop32());
  /* 124a421c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124a421d ret  */
  ESPCHK(0x124a41e0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x124a4220 (56 bytes, 31 insns) */
void f_124a4220(void) {
  FTRACE(0x124a4220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4220 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4221 mov ebp, esp */
  EBP = (ESP);
  /* 124a4223 push edi */
  push32((uint32_t)(EDI));
  /* 124a4224 push esi */
  push32((uint32_t)(ESI));
  /* 124a4225 push ebx */
  push32((uint32_t)(EBX));
  /* 124a4226 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a4229 jecxz 0x124a4251 */
  x86_unimpl("jecxz @ 0x124a4229");
  /* 124a422b mov ebx, ecx */
  EBX = (ECX);
  /* 124a422d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4230 mov esi, edi */
  ESI = (EDI);
  /* 124a4232 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a4234 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 124a4236 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a4238 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a423a mov edi, esi */
  EDI = (ESI);
  /* 124a423c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 124a423f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 124a4241 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 124a4244 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a4246 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124a4249 ja 0x124a424f */
  if ((!C.cf&&!C.zf)) goto L_124a424f;
  /* 124a424b je 0x124a4251 */
  if (C.zf) goto L_124a4251;
  /* 124a424d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 124a424e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_124a424f:;
  /* 124a424f not ecx */
  ECX = (~(ECX));
L_124a4251:;
  /* 124a4251 mov eax, ecx */
  EAX = (ECX);
  /* 124a4253 pop ebx */
  EBX = (pop32());
  /* 124a4254 pop esi */
  ESI = (pop32());
  /* 124a4255 pop edi */
  EDI = (pop32());
  /* 124a4256 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124a4257 ret  */
  ESPCHK(0x124a4220u, _esp0);
  ESP += 4; return;
}

/* FUN_10014260 @ 0x124a4260 (58 bytes, 32 insns) */
void f_124a4260(void) {
  FTRACE(0x124a4260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4260 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4261 mov ebp, esp */
  EBP = (ESP);
  /* 124a4263 push esi */
  push32((uint32_t)(ESI));
  /* 124a4264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a4266 push eax */
  push32((uint32_t)(EAX));
  /* 124a4267 push eax */
  push32((uint32_t)(EAX));
  /* 124a4268 push eax */
  push32((uint32_t)(EAX));
  /* 124a4269 push eax */
  push32((uint32_t)(EAX));
  /* 124a426a push eax */
  push32((uint32_t)(EAX));
  /* 124a426b push eax */
  push32((uint32_t)(EAX));
  /* 124a426c push eax */
  push32((uint32_t)(EAX));
  /* 124a426d push eax */
  push32((uint32_t)(EAX));
  /* 124a426e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a4271 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124a4274:;
  /* 124a4274 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a4276 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124a4278 je 0x124a4281 */
  if (C.zf) goto L_124a4281;
  /* 124a427a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 124a427b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x124a427b");
  /* 124a427f jmp 0x124a4274 */
  goto L_124a4274;
L_124a4281:;
  /* 124a4281 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_124a4284:;
  /* 124a4284 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124a4286 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124a4288 je 0x124a4294 */
  if (C.zf) goto L_124a4294;
  /* 124a428a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124a428b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x124a428b");
  /* 124a428f jae 0x124a4284 */
  if (!C.cf) goto L_124a4284;
  /* 124a4291 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_124a4294:;
  /* 124a4294 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4297 pop esi */
  ESI = (pop32());
  /* 124a4298 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124a4299 ret  */
  ESPCHK(0x124a4260u, _esp0);
  ESP += 4; return;
}

/* FUN_100142a0 @ 0x124a42a0 (512 bytes, 147 insns) */
void f_124a42a0(void) {
  FTRACE(0x124a42a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a42a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a42a1 mov ebp, esp */
  EBP = (ESP);
  /* 124a42a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a42a6 cmp dword ptr [0x124c4ad4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ad4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a42ad jne 0x124a42d2 */
  if (!C.zf) goto L_124a42d2;
  /* 124a42af call 0x124a4d70 */
  push32(0x124a42b4u); f_124a4d70();
  /* 124a42b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a42b6 je 0x124a42c2 */
  if (C.zf) goto L_124a42c2;
  /* 124a42b8 mov eax, dword ptr [0x124c72cc] */
  EAX = (r32((uint32_t)(0x124c72cc)));
  /* 124a42bd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a42c0 jmp 0x124a42c9 */
  goto L_124a42c9;
L_124a42c2:;
  /* 124a42c2 mov dword ptr [ebp - 8], 0x124a4dc0 */
  w32((uint32_t)(EBP + -0x8), (0x124a4dc0u));
L_124a42c9:;
  /* 124a42c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a42cc mov dword ptr [0x124c4ad4], ecx */
  w32((uint32_t)(0x124c4ad4), (ECX));
L_124a42d2:;
  /* 124a42d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a42d6 jne 0x124a42e2 */
  if (!C.zf) goto L_124a42e2;
  /* 124a42d8 call 0x124a4bc0 */
  push32(0x124a42ddu); f_124a4bc0();
  /* 124a42dd jmp 0x124a43ae */
  goto L_124a43ae;
L_124a42e2:;
  /* 124a42e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a42e5 mov dword ptr [0x124c4ac4], edx */
  w32((uint32_t)(0x124c4ac4), (EDX));
  /* 124a42eb cmp dword ptr [0x124c4ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a42f2 je 0x124a4314 */
  if (C.zf) goto L_124a4314;
  /* 124a42f4 mov eax, dword ptr [0x124c4ac4] */
  EAX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a42f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a42fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a42fe je 0x124a4314 */
  if (C.zf) goto L_124a4314;
  /* 124a4300 push 0x124c4ac4 */
  push32((uint32_t)(0x124c4ac4u));
  /* 124a4305 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 124a4307 push 0x124c3a90 */
  push32((uint32_t)(0x124c3a90u));
  /* 124a430c call 0x124a44a0 */
  push32(0x124a4311u); f_124a44a0();
  /* 124a4311 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a4314:;
  /* 124a4314 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4317 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a431a mov dword ptr [0x124c4ac8], edx */
  w32((uint32_t)(0x124c4ac8), (EDX));
  /* 124a4320 cmp dword ptr [0x124c4ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4327 je 0x124a4349 */
  if (C.zf) goto L_124a4349;
  /* 124a4329 mov eax, dword ptr [0x124c4ac8] */
  EAX = (r32((uint32_t)(0x124c4ac8)));
  /* 124a432e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a4331 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a4333 je 0x124a4349 */
  if (C.zf) goto L_124a4349;
  /* 124a4335 push 0x124c4ac8 */
  push32((uint32_t)(0x124c4ac8u));
  /* 124a433a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 124a433c push 0x124c39d8 */
  push32((uint32_t)(0x124c39d8u));
  /* 124a4341 call 0x124a44a0 */
  push32(0x124a4346u); f_124a44a0();
  /* 124a4346 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a4349:;
  /* 124a4349 mov dword ptr [0x124c4acc], 0 */
  w32((uint32_t)(0x124c4acc), (0x0u));
  /* 124a4353 cmp dword ptr [0x124c4ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a435a je 0x124a438d */
  if (C.zf) goto L_124a438d;
  /* 124a435c mov edx, dword ptr [0x124c4ac4] */
  EDX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a4362 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124a4365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4367 je 0x124a438d */
  if (C.zf) goto L_124a438d;
  /* 124a4369 cmp dword ptr [0x124c4ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4370 je 0x124a4386 */
  if (C.zf) goto L_124a4386;
  /* 124a4372 mov ecx, dword ptr [0x124c4ac8] */
  ECX = (r32((uint32_t)(0x124c4ac8)));
  /* 124a4378 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124a437b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a437d je 0x124a4386 */
  if (C.zf) goto L_124a4386;
  /* 124a437f call 0x124a4530 */
  push32(0x124a4384u); f_124a4530();
  /* 124a4384 jmp 0x124a438b */
  goto L_124a438b;
L_124a4386:;
  /* 124a4386 call 0x124a4920 */
  push32(0x124a438bu); f_124a4920();
L_124a438b:;
  /* 124a438b jmp 0x124a43ae */
  goto L_124a43ae;
L_124a438d:;
  /* 124a438d cmp dword ptr [0x124c4ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4394 je 0x124a43a9 */
  if (C.zf) goto L_124a43a9;
  /* 124a4396 mov eax, dword ptr [0x124c4ac8] */
  EAX = (r32((uint32_t)(0x124c4ac8)));
  /* 124a439b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a439e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a43a0 je 0x124a43a9 */
  if (C.zf) goto L_124a43a9;
  /* 124a43a2 call 0x124a4ac0 */
  push32(0x124a43a7u); f_124a4ac0();
  /* 124a43a7 jmp 0x124a43ae */
  goto L_124a43ae;
L_124a43a9:;
  /* 124a43a9 call 0x124a4bc0 */
  push32(0x124a43aeu); f_124a4bc0();
L_124a43ae:;
  /* 124a43ae cmp dword ptr [0x124c4acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a43b5 jne 0x124a43be */
  if (!C.zf) goto L_124a43be;
  /* 124a43b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a43b9 jmp 0x124a449c */
  goto L_124a449c;
L_124a43be:;
  /* 124a43be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a43c1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a43c7 push edx */
  push32((uint32_t)(EDX));
  /* 124a43c8 call 0x124a4bf0 */
  push32(0x124a43cdu); f_124a4bf0();
  /* 124a43cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a43d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a43d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a43d7 je 0x124a43ec */
  if (C.zf) goto L_124a43ec;
  /* 124a43d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a43dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a43e1 push eax */
  push32((uint32_t)(EAX));
  /* 124a43e2 call dword ptr [0x124c72d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72d0))), 0x124a43e8u);
  /* 124a43e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a43ea jne 0x124a43f3 */
  if (!C.zf) goto L_124a43f3;
L_124a43ec:;
  /* 124a43ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a43ee jmp 0x124a449c */
  goto L_124a449c;
L_124a43f3:;
  /* 124a43f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a43f5 mov ecx, dword ptr [0x124c4ab4] */
  ECX = (r32((uint32_t)(0x124c4ab4)));
  /* 124a43fb push ecx */
  push32((uint32_t)(ECX));
  /* 124a43fc call dword ptr [0x124c72d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72d4))), 0x124a4402u);
  /* 124a4402 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4404 jne 0x124a440d */
  if (!C.zf) goto L_124a440d;
  /* 124a4406 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a4408 jmp 0x124a449c */
  goto L_124a449c;
L_124a440d:;
  /* 124a440d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4411 je 0x124a4438 */
  if (C.zf) goto L_124a4438;
  /* 124a4413 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a4416 mov ax, word ptr [0x124c4ab4] */
  AX = (r16((uint32_t)(0x124c4ab4)));
  /* 124a441c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 124a441f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a4422 mov dx, word ptr [0x124c4ad0] */
  DX = (r16((uint32_t)(0x124c4ad0)));
  /* 124a4429 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 124a442d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a4430 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 124a4434 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_124a4438:;
  /* 124a4438 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a443c je 0x124a4497 */
  if (C.zf) goto L_124a4497;
  /* 124a443e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 124a4440 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a4443 push edx */
  push32((uint32_t)(EDX));
  /* 124a4444 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 124a4449 mov eax, dword ptr [0x124c4ab4] */
  EAX = (r32((uint32_t)(0x124c4ab4)));
  /* 124a444e push eax */
  push32((uint32_t)(EAX));
  /* 124a444f call dword ptr [0x124c4ad4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c4ad4))), 0x124a4455u);
  /* 124a4455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4457 jne 0x124a445d */
  if (!C.zf) goto L_124a445d;
  /* 124a4459 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a445b jmp 0x124a449c */
  goto L_124a449c;
L_124a445d:;
  /* 124a445d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 124a445f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a4462 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4465 push ecx */
  push32((uint32_t)(ECX));
  /* 124a4466 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 124a446b mov edx, dword ptr [0x124c4ad0] */
  EDX = (r32((uint32_t)(0x124c4ad0)));
  /* 124a4471 push edx */
  push32((uint32_t)(EDX));
  /* 124a4472 call dword ptr [0x124c4ad4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c4ad4))), 0x124a4478u);
  /* 124a4478 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a447a jne 0x124a4480 */
  if (!C.zf) goto L_124a4480;
  /* 124a447c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a447e jmp 0x124a449c */
  goto L_124a449c;
L_124a4480:;
  /* 124a4480 push 0xa */
  push32((uint32_t)(0xau));
  /* 124a4482 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a4485 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a448a push eax */
  push32((uint32_t)(EAX));
  /* 124a448b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a448e push ecx */
  push32((uint32_t)(ECX));
  /* 124a448f call 0x1249b000 */
  push32(0x124a4494u); f_1249b000();
  /* 124a4494 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a4497:;
  /* 124a4497 mov eax, 1 */
  EAX = (0x1u);
L_124a449c:;
  /* 124a449c mov esp, ebp */
  ESP = (EBP);
  /* 124a449e pop ebp */
  EBP = (pop32());
  /* 124a449f ret  */
  ESPCHK(0x124a42a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100144a0 @ 0x124a44a0 (130 bytes, 47 insns) */
void f_124a44a0(void) {
  FTRACE(0x124a44a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a44a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a44a1 mov ebp, esp */
  EBP = (ESP);
  /* 124a44a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a44a6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 124a44ad mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_124a44b4:;
  /* 124a44b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a44b7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a44ba jg 0x124a451e */
  if ((!C.zf&&C.sf==C.of)) goto L_124a451e;
  /* 124a44bc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a44c0 je 0x124a451e */
  if (C.zf) goto L_124a451e;
  /* 124a44c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a44c5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a44c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a44c9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a44cb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124a44cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a44d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a44d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a44d6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 124a44d9 push eax */
  push32((uint32_t)(EAX));
  /* 124a44da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a44dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124a44df push edx */
  push32((uint32_t)(EDX));
  /* 124a44e0 call 0x124a6b90 */
  push32(0x124a44e5u); f_124a6b90();
  /* 124a44e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a44e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a44eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a44ef jne 0x124a4502 */
  if (!C.zf) goto L_124a4502;
  /* 124a44f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a44f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a44f7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 124a44fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a44fe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124a4500 jmp 0x124a451c */
  goto L_124a451c;
L_124a4502:;
  /* 124a4502 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4506 jge 0x124a4513 */
  if ((C.sf==C.of)) goto L_124a4513;
  /* 124a4508 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a450b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a450e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 124a4511 jmp 0x124a451c */
  goto L_124a451c;
L_124a4513:;
  /* 124a4513 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a4516 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4519 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_124a451c:;
  /* 124a451c jmp 0x124a44b4 */
  goto L_124a44b4;
L_124a451e:;
  /* 124a451e mov esp, ebp */
  ESP = (EBP);
  /* 124a4520 pop ebp */
  EBP = (pop32());
  /* 124a4521 ret  */
  ESPCHK(0x124a44a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014530 @ 0x124a4530 (186 bytes, 50 insns) */
void f_124a4530(void) {
  FTRACE(0x124a4530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4530 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4531 mov ebp, esp */
  EBP = (ESP);
  /* 124a4533 push ecx */
  push32((uint32_t)(ECX));
  /* 124a4534 mov eax, dword ptr [0x124c4ac4] */
  EAX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a4539 push eax */
  push32((uint32_t)(EAX));
  /* 124a453a call 0x1249b2f0 */
  push32(0x124a453fu); f_1249b2f0();
  /* 124a453f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4542 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a4544 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4547 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 124a454a mov dword ptr [0x124c4ac0], ecx */
  w32((uint32_t)(0x124c4ac0), (ECX));
  /* 124a4550 mov edx, dword ptr [0x124c4ac8] */
  EDX = (r32((uint32_t)(0x124c4ac8)));
  /* 124a4556 push edx */
  push32((uint32_t)(EDX));
  /* 124a4557 call 0x1249b2f0 */
  push32(0x124a455cu); f_1249b2f0();
  /* 124a455c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a455f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a4561 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4564 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 124a4567 mov dword ptr [0x124c4ab8], ecx */
  w32((uint32_t)(0x124c4ab8), (ECX));
  /* 124a456d mov dword ptr [0x124c4ab4], 0 */
  w32((uint32_t)(0x124c4ab4), (0x0u));
  /* 124a4577 cmp dword ptr [0x124c4ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a457e je 0x124a4589 */
  if (C.zf) goto L_124a4589;
  /* 124a4580 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 124a4587 jmp 0x124a459b */
  goto L_124a459b;
L_124a4589:;
  /* 124a4589 mov edx, dword ptr [0x124c4ac4] */
  EDX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a458f push edx */
  push32((uint32_t)(EDX));
  /* 124a4590 call 0x124a4fd0 */
  push32(0x124a4595u); f_124a4fd0();
  /* 124a4595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4598 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124a459b:;
  /* 124a459b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a459e mov dword ptr [0x124c4abc], eax */
  w32((uint32_t)(0x124c4abc), (EAX));
  /* 124a45a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a45a5 push 0x124a45f0 */
  push32((uint32_t)(0x124a45f0u));
  /* 124a45aa call dword ptr [0x124c72c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72c8))), 0x124a45b0u);
  /* 124a45b0 mov ecx, dword ptr [0x124c4acc] */
  ECX = (r32((uint32_t)(0x124c4acc)));
  /* 124a45b6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 124a45bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a45be je 0x124a45dc */
  if (C.zf) goto L_124a45dc;
  /* 124a45c0 mov edx, dword ptr [0x124c4acc] */
  EDX = (r32((uint32_t)(0x124c4acc)));
  /* 124a45c6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 124a45cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a45ce je 0x124a45dc */
  if (C.zf) goto L_124a45dc;
  /* 124a45d0 mov eax, dword ptr [0x124c4acc] */
  EAX = (r32((uint32_t)(0x124c4acc)));
  /* 124a45d5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 124a45d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a45da jne 0x124a45e6 */
  if (!C.zf) goto L_124a45e6;
L_124a45dc:;
  /* 124a45dc mov dword ptr [0x124c4acc], 0 */
  w32((uint32_t)(0x124c4acc), (0x0u));
L_124a45e6:;
  /* 124a45e6 mov esp, ebp */
  ESP = (EBP);
  /* 124a45e8 pop ebp */
  EBP = (pop32());
  /* 124a45e9 ret  */
  ESPCHK(0x124a4530u, _esp0);
  ESP += 4; return;
}

/* FUN_100145f0 @ 0x124a45f0 (804 bytes, 220 insns) */
void f_124a45f0(void) {
  FTRACE(0x124a45f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a45f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a45f1 mov ebp, esp */
  EBP = (ESP);
  /* 124a45f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a45f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a45f9 push eax */
  push32((uint32_t)(EAX));
  /* 124a45fa call 0x124a4f50 */
  push32(0x124a45ffu); f_124a4f50();
  /* 124a45ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4602 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 124a4605 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 124a4607 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124a460a push ecx */
  push32((uint32_t)(ECX));
  /* 124a460b mov edx, dword ptr [0x124c4ab8] */
  EDX = (r32((uint32_t)(0x124c4ab8)));
  /* 124a4611 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a4613 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4615 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 124a461b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4621 push edx */
  push32((uint32_t)(EDX));
  /* 124a4622 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a4625 push eax */
  push32((uint32_t)(EAX));
  /* 124a4626 call dword ptr [0x124c4ad4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c4ad4))), 0x124a462cu);
  /* 124a462c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a462e jne 0x124a4644 */
  if (!C.zf) goto L_124a4644;
  /* 124a4630 mov dword ptr [0x124c4acc], 0 */
  w32((uint32_t)(0x124c4acc), (0x0u));
  /* 124a463a mov eax, 1 */
  EAX = (0x1u);
  /* 124a463f jmp 0x124a490e */
  goto L_124a490e;
L_124a4644:;
  /* 124a4644 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124a4647 push ecx */
  push32((uint32_t)(ECX));
  /* 124a4648 mov edx, dword ptr [0x124c4ac8] */
  EDX = (r32((uint32_t)(0x124c4ac8)));
  /* 124a464e push edx */
  push32((uint32_t)(EDX));
  /* 124a464f call 0x124a6b90 */
  push32(0x124a4654u); f_124a6b90();
  /* 124a4654 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4659 jne 0x124a477f */
  if (!C.zf) goto L_124a477f;
  /* 124a465f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 124a4661 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 124a4664 push eax */
  push32((uint32_t)(EAX));
  /* 124a4665 mov ecx, dword ptr [0x124c4ac0] */
  ECX = (r32((uint32_t)(0x124c4ac0)));
  /* 124a466b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a466d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a466f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 124a4675 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a467b push ecx */
  push32((uint32_t)(ECX));
  /* 124a467c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a467f push edx */
  push32((uint32_t)(EDX));
  /* 124a4680 call dword ptr [0x124c4ad4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c4ad4))), 0x124a4686u);
  /* 124a4686 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4688 jne 0x124a469e */
  if (!C.zf) goto L_124a469e;
  /* 124a468a mov dword ptr [0x124c4acc], 0 */
  w32((uint32_t)(0x124c4acc), (0x0u));
  /* 124a4694 mov eax, 1 */
  EAX = (0x1u);
  /* 124a4699 jmp 0x124a490e */
  goto L_124a490e;
L_124a469e:;
  /* 124a469e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 124a46a1 push eax */
  push32((uint32_t)(EAX));
  /* 124a46a2 mov ecx, dword ptr [0x124c4ac4] */
  ECX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a46a8 push ecx */
  push32((uint32_t)(ECX));
  /* 124a46a9 call 0x124a6b90 */
  push32(0x124a46aeu); f_124a6b90();
  /* 124a46ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a46b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a46b3 jne 0x124a46e0 */
  if (!C.zf) goto L_124a46e0;
  /* 124a46b5 mov edx, dword ptr [0x124c4acc] */
  EDX = (r32((uint32_t)(0x124c4acc)));
  /* 124a46bb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 124a46c1 mov dword ptr [0x124c4acc], edx */
  w32((uint32_t)(0x124c4acc), (EDX));
  /* 124a46c7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a46ca mov dword ptr [0x124c4ad0], eax */
  w32((uint32_t)(0x124c4ad0), (EAX));
  /* 124a46cf mov ecx, dword ptr [0x124c4ad0] */
  ECX = (r32((uint32_t)(0x124c4ad0)));
  /* 124a46d5 mov dword ptr [0x124c4ab4], ecx */
  w32((uint32_t)(0x124c4ab4), (ECX));
  /* 124a46db jmp 0x124a477f */
  goto L_124a477f;
L_124a46e0:;
  /* 124a46e0 mov edx, dword ptr [0x124c4acc] */
  EDX = (r32((uint32_t)(0x124c4acc)));
  /* 124a46e6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 124a46e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a46eb jne 0x124a477f */
  if (!C.zf) goto L_124a477f;
  /* 124a46f1 cmp dword ptr [0x124c4abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a46f8 je 0x124a474d */
  if (C.zf) goto L_124a474d;
  /* 124a46fa mov eax, dword ptr [0x124c4abc] */
  EAX = (r32((uint32_t)(0x124c4abc)));
  /* 124a46ff push eax */
  push32((uint32_t)(EAX));
  /* 124a4700 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124a4703 push ecx */
  push32((uint32_t)(ECX));
  /* 124a4704 mov edx, dword ptr [0x124c4ac4] */
  EDX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a470a push edx */
  push32((uint32_t)(EDX));
  /* 124a470b call 0x124a6c60 */
  push32(0x124a4710u); f_124a6c60();
  /* 124a4710 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4713 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4715 jne 0x124a474d */
  if (!C.zf) goto L_124a474d;
  /* 124a4717 mov eax, dword ptr [0x124c4acc] */
  EAX = (r32((uint32_t)(0x124c4acc)));
  /* 124a471c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 124a471e mov dword ptr [0x124c4acc], eax */
  w32((uint32_t)(0x124c4acc), (EAX));
  /* 124a4723 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a4726 mov dword ptr [0x124c4ad0], ecx */
  w32((uint32_t)(0x124c4ad0), (ECX));
  /* 124a472c mov edx, dword ptr [0x124c4ac4] */
  EDX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a4732 push edx */
  push32((uint32_t)(EDX));
  /* 124a4733 call 0x1249b2f0 */
  push32(0x124a4738u); f_1249b2f0();
  /* 124a4738 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a473b cmp eax, dword ptr [0x124c4abc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c4abc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4741 jne 0x124a474b */
  if (!C.zf) goto L_124a474b;
  /* 124a4743 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a4746 mov dword ptr [0x124c4ab4], eax */
  w32((uint32_t)(0x124c4ab4), (EAX));
L_124a474b:;
  /* 124a474b jmp 0x124a477f */
  goto L_124a477f;
L_124a474d:;
  /* 124a474d mov ecx, dword ptr [0x124c4acc] */
  ECX = (r32((uint32_t)(0x124c4acc)));
  /* 124a4753 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124a4756 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a4758 jne 0x124a477f */
  if (!C.zf) goto L_124a477f;
  /* 124a475a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a475d push edx */
  push32((uint32_t)(EDX));
  /* 124a475e call 0x124a4c90 */
  push32(0x124a4763u); f_124a4c90();
  /* 124a4763 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4768 je 0x124a477f */
  if (C.zf) goto L_124a477f;
  /* 124a476a mov eax, dword ptr [0x124c4acc] */
  EAX = (r32((uint32_t)(0x124c4acc)));
  /* 124a476f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 124a4771 mov dword ptr [0x124c4acc], eax */
  w32((uint32_t)(0x124c4acc), (EAX));
  /* 124a4776 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a4779 mov dword ptr [0x124c4ad0], ecx */
  w32((uint32_t)(0x124c4ad0), (ECX));
L_124a477f:;
  /* 124a477f mov edx, dword ptr [0x124c4acc] */
  EDX = (r32((uint32_t)(0x124c4acc)));
  /* 124a4785 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 124a478b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4791 je 0x124a4901 */
  if (C.zf) goto L_124a4901;
  /* 124a4797 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 124a4799 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 124a479c push eax */
  push32((uint32_t)(EAX));
  /* 124a479d mov ecx, dword ptr [0x124c4ac0] */
  ECX = (r32((uint32_t)(0x124c4ac0)));
  /* 124a47a3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a47a5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a47a7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 124a47ad add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a47b3 push ecx */
  push32((uint32_t)(ECX));
  /* 124a47b4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a47b7 push edx */
  push32((uint32_t)(EDX));
  /* 124a47b8 call dword ptr [0x124c4ad4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c4ad4))), 0x124a47beu);
  /* 124a47be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a47c0 jne 0x124a47d6 */
  if (!C.zf) goto L_124a47d6;
  /* 124a47c2 mov dword ptr [0x124c4acc], 0 */
  w32((uint32_t)(0x124c4acc), (0x0u));
  /* 124a47cc mov eax, 1 */
  EAX = (0x1u);
  /* 124a47d1 jmp 0x124a490e */
  goto L_124a490e;
L_124a47d6:;
  /* 124a47d6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 124a47d9 push eax */
  push32((uint32_t)(EAX));
  /* 124a47da mov ecx, dword ptr [0x124c4ac4] */
  ECX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a47e0 push ecx */
  push32((uint32_t)(ECX));
  /* 124a47e1 call 0x124a6b90 */
  push32(0x124a47e6u); f_124a6b90();
  /* 124a47e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a47e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a47eb jne 0x124a48a0 */
  if (!C.zf) goto L_124a48a0;
  /* 124a47f1 mov edx, dword ptr [0x124c4acc] */
  EDX = (r32((uint32_t)(0x124c4acc)));
  /* 124a47f7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 124a47fa mov dword ptr [0x124c4acc], edx */
  w32((uint32_t)(0x124c4acc), (EDX));
  /* 124a4800 cmp dword ptr [0x124c4ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4807 je 0x124a482a */
  if (C.zf) goto L_124a482a;
  /* 124a4809 mov eax, dword ptr [0x124c4acc] */
  EAX = (r32((uint32_t)(0x124c4acc)));
  /* 124a480e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 124a4811 mov dword ptr [0x124c4acc], eax */
  w32((uint32_t)(0x124c4acc), (EAX));
  /* 124a4816 cmp dword ptr [0x124c4ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a481d jne 0x124a4828 */
  if (!C.zf) goto L_124a4828;
  /* 124a481f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a4822 mov dword ptr [0x124c4ab4], ecx */
  w32((uint32_t)(0x124c4ab4), (ECX));
L_124a4828:;
  /* 124a4828 jmp 0x124a489e */
  goto L_124a489e;
L_124a482a:;
  /* 124a482a cmp dword ptr [0x124c4abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4831 je 0x124a487f */
  if (C.zf) goto L_124a487f;
  /* 124a4833 mov edx, dword ptr [0x124c4ac4] */
  EDX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a4839 push edx */
  push32((uint32_t)(EDX));
  /* 124a483a call 0x1249b2f0 */
  push32(0x124a483fu); f_1249b2f0();
  /* 124a483f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4842 cmp eax, dword ptr [0x124c4abc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c4abc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4848 jne 0x124a487f */
  if (!C.zf) goto L_124a487f;
  /* 124a484a push 1 */
  push32((uint32_t)(0x1u));
  /* 124a484c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a484f push eax */
  push32((uint32_t)(EAX));
  /* 124a4850 call 0x124a4ce0 */
  push32(0x124a4855u); f_124a4ce0();
  /* 124a4855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a485a je 0x124a487d */
  if (C.zf) goto L_124a487d;
  /* 124a485c mov ecx, dword ptr [0x124c4acc] */
  ECX = (r32((uint32_t)(0x124c4acc)));
  /* 124a4862 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 124a4865 mov dword ptr [0x124c4acc], ecx */
  w32((uint32_t)(0x124c4acc), (ECX));
  /* 124a486b cmp dword ptr [0x124c4ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4872 jne 0x124a487d */
  if (!C.zf) goto L_124a487d;
  /* 124a4874 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a4877 mov dword ptr [0x124c4ab4], edx */
  w32((uint32_t)(0x124c4ab4), (EDX));
L_124a487d:;
  /* 124a487d jmp 0x124a489e */
  goto L_124a489e;
L_124a487f:;
  /* 124a487f mov eax, dword ptr [0x124c4acc] */
  EAX = (r32((uint32_t)(0x124c4acc)));
  /* 124a4884 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 124a4887 mov dword ptr [0x124c4acc], eax */
  w32((uint32_t)(0x124c4acc), (EAX));
  /* 124a488c cmp dword ptr [0x124c4ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4893 jne 0x124a489e */
  if (!C.zf) goto L_124a489e;
  /* 124a4895 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a4898 mov dword ptr [0x124c4ab4], ecx */
  w32((uint32_t)(0x124c4ab4), (ECX));
L_124a489e:;
  /* 124a489e jmp 0x124a4901 */
  goto L_124a4901;
L_124a48a0:;
  /* 124a48a0 cmp dword ptr [0x124c4ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a48a7 jne 0x124a4901 */
  if (!C.zf) goto L_124a4901;
  /* 124a48a9 cmp dword ptr [0x124c4abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a48b0 je 0x124a4901 */
  if (C.zf) goto L_124a4901;
  /* 124a48b2 mov edx, dword ptr [0x124c4abc] */
  EDX = (r32((uint32_t)(0x124c4abc)));
  /* 124a48b8 push edx */
  push32((uint32_t)(EDX));
  /* 124a48b9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 124a48bc push eax */
  push32((uint32_t)(EAX));
  /* 124a48bd mov ecx, dword ptr [0x124c4ac4] */
  ECX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a48c3 push ecx */
  push32((uint32_t)(ECX));
  /* 124a48c4 call 0x124a6c60 */
  push32(0x124a48c9u); f_124a6c60();
  /* 124a48c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a48cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a48ce jne 0x124a4901 */
  if (!C.zf) goto L_124a4901;
  /* 124a48d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a48d2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a48d5 push edx */
  push32((uint32_t)(EDX));
  /* 124a48d6 call 0x124a4ce0 */
  push32(0x124a48dbu); f_124a4ce0();
  /* 124a48db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a48de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a48e0 je 0x124a4901 */
  if (C.zf) goto L_124a4901;
  /* 124a48e2 mov eax, dword ptr [0x124c4acc] */
  EAX = (r32((uint32_t)(0x124c4acc)));
  /* 124a48e7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 124a48ea mov dword ptr [0x124c4acc], eax */
  w32((uint32_t)(0x124c4acc), (EAX));
  /* 124a48ef cmp dword ptr [0x124c4ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a48f6 jne 0x124a4901 */
  if (!C.zf) goto L_124a4901;
  /* 124a48f8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a48fb mov dword ptr [0x124c4ab4], ecx */
  w32((uint32_t)(0x124c4ab4), (ECX));
L_124a4901:;
  /* 124a4901 mov eax, dword ptr [0x124c4acc] */
  EAX = (r32((uint32_t)(0x124c4acc)));
  /* 124a4906 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 124a4909 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a490b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a490d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_124a490e:;
  /* 124a490e mov esp, ebp */
  ESP = (EBP);
  /* 124a4910 pop ebp */
  EBP = (pop32());
  /* 124a4911 ret 4 */
  ESPCHK(0x124a45f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10014920 @ 0x124a4920 (116 bytes, 33 insns) */
void f_124a4920(void) {
  FTRACE(0x124a4920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4920 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4921 mov ebp, esp */
  EBP = (ESP);
  /* 124a4923 push ecx */
  push32((uint32_t)(ECX));
  /* 124a4924 mov eax, dword ptr [0x124c4ac4] */
  EAX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a4929 push eax */
  push32((uint32_t)(EAX));
  /* 124a492a call 0x1249b2f0 */
  push32(0x124a492fu); f_1249b2f0();
  /* 124a492f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4932 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a4934 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4937 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 124a493a mov dword ptr [0x124c4ac0], ecx */
  w32((uint32_t)(0x124c4ac0), (ECX));
  /* 124a4940 cmp dword ptr [0x124c4ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4947 je 0x124a4952 */
  if (C.zf) goto L_124a4952;
  /* 124a4949 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 124a4950 jmp 0x124a4964 */
  goto L_124a4964;
L_124a4952:;
  /* 124a4952 mov edx, dword ptr [0x124c4ac4] */
  EDX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a4958 push edx */
  push32((uint32_t)(EDX));
  /* 124a4959 call 0x124a4fd0 */
  push32(0x124a495eu); f_124a4fd0();
  /* 124a495e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4961 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124a4964:;
  /* 124a4964 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a4967 mov dword ptr [0x124c4abc], eax */
  w32((uint32_t)(0x124c4abc), (EAX));
  /* 124a496c push 1 */
  push32((uint32_t)(0x1u));
  /* 124a496e push 0x124a49a0 */
  push32((uint32_t)(0x124a49a0u));
  /* 124a4973 call dword ptr [0x124c72c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72c8))), 0x124a4979u);
  /* 124a4979 mov ecx, dword ptr [0x124c4acc] */
  ECX = (r32((uint32_t)(0x124c4acc)));
  /* 124a497f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 124a4982 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a4984 jne 0x124a4990 */
  if (!C.zf) goto L_124a4990;
  /* 124a4986 mov dword ptr [0x124c4acc], 0 */
  w32((uint32_t)(0x124c4acc), (0x0u));
L_124a4990:;
  /* 124a4990 mov esp, ebp */
  ESP = (EBP);
  /* 124a4992 pop ebp */
  EBP = (pop32());
  /* 124a4993 ret  */
  ESPCHK(0x124a4920u, _esp0);
  ESP += 4; return;
}

/* FUN_100149a0 @ 0x124a49a0 (287 bytes, 86 insns) */
void f_124a49a0(void) {
  FTRACE(0x124a49a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a49a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a49a1 mov ebp, esp */
  EBP = (ESP);
  /* 124a49a3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a49a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a49a9 push eax */
  push32((uint32_t)(EAX));
  /* 124a49aa call 0x124a4f50 */
  push32(0x124a49afu); f_124a4f50();
  /* 124a49af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a49b2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 124a49b5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 124a49b7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124a49ba push ecx */
  push32((uint32_t)(ECX));
  /* 124a49bb mov edx, dword ptr [0x124c4ac0] */
  EDX = (r32((uint32_t)(0x124c4ac0)));
  /* 124a49c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a49c3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a49c5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 124a49cb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a49d1 push edx */
  push32((uint32_t)(EDX));
  /* 124a49d2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a49d5 push eax */
  push32((uint32_t)(EAX));
  /* 124a49d6 call dword ptr [0x124c4ad4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c4ad4))), 0x124a49dcu);
  /* 124a49dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a49de jne 0x124a49f4 */
  if (!C.zf) goto L_124a49f4;
  /* 124a49e0 mov dword ptr [0x124c4acc], 0 */
  w32((uint32_t)(0x124c4acc), (0x0u));
  /* 124a49ea mov eax, 1 */
  EAX = (0x1u);
  /* 124a49ef jmp 0x124a4ab9 */
  goto L_124a4ab9;
L_124a49f4:;
  /* 124a49f4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124a49f7 push ecx */
  push32((uint32_t)(ECX));
  /* 124a49f8 mov edx, dword ptr [0x124c4ac4] */
  EDX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a49fe push edx */
  push32((uint32_t)(EDX));
  /* 124a49ff call 0x124a6b90 */
  push32(0x124a4a04u); f_124a6b90();
  /* 124a4a04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4a07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4a09 jne 0x124a4a49 */
  if (!C.zf) goto L_124a4a49;
  /* 124a4a0b cmp dword ptr [0x124c4ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4a12 jne 0x124a4a26 */
  if (!C.zf) goto L_124a4a26;
  /* 124a4a14 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a4a16 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a4a19 push eax */
  push32((uint32_t)(EAX));
  /* 124a4a1a call 0x124a4ce0 */
  push32(0x124a4a1fu); f_124a4ce0();
  /* 124a4a1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4a22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4a24 je 0x124a4a47 */
  if (C.zf) goto L_124a4a47;
L_124a4a26:;
  /* 124a4a26 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a4a29 mov dword ptr [0x124c4ad0], ecx */
  w32((uint32_t)(0x124c4ad0), (ECX));
  /* 124a4a2f mov edx, dword ptr [0x124c4ad0] */
  EDX = (r32((uint32_t)(0x124c4ad0)));
  /* 124a4a35 mov dword ptr [0x124c4ab4], edx */
  w32((uint32_t)(0x124c4ab4), (EDX));
  /* 124a4a3b mov eax, dword ptr [0x124c4acc] */
  EAX = (r32((uint32_t)(0x124c4acc)));
  /* 124a4a40 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 124a4a42 mov dword ptr [0x124c4acc], eax */
  w32((uint32_t)(0x124c4acc), (EAX));
L_124a4a47:;
  /* 124a4a47 jmp 0x124a4aac */
  goto L_124a4aac;
L_124a4a49:;
  /* 124a4a49 cmp dword ptr [0x124c4ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4a50 jne 0x124a4aac */
  if (!C.zf) goto L_124a4aac;
  /* 124a4a52 cmp dword ptr [0x124c4abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124c4abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4a59 je 0x124a4aac */
  if (C.zf) goto L_124a4aac;
  /* 124a4a5b mov ecx, dword ptr [0x124c4abc] */
  ECX = (r32((uint32_t)(0x124c4abc)));
  /* 124a4a61 push ecx */
  push32((uint32_t)(ECX));
  /* 124a4a62 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 124a4a65 push edx */
  push32((uint32_t)(EDX));
  /* 124a4a66 mov eax, dword ptr [0x124c4ac4] */
  EAX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a4a6b push eax */
  push32((uint32_t)(EAX));
  /* 124a4a6c call 0x124a6c60 */
  push32(0x124a4a71u); f_124a6c60();
  /* 124a4a71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4a76 jne 0x124a4aac */
  if (!C.zf) goto L_124a4aac;
  /* 124a4a78 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a4a7a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a4a7d push ecx */
  push32((uint32_t)(ECX));
  /* 124a4a7e call 0x124a4ce0 */
  push32(0x124a4a83u); f_124a4ce0();
  /* 124a4a83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4a86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4a88 je 0x124a4aac */
  if (C.zf) goto L_124a4aac;
  /* 124a4a8a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a4a8d mov dword ptr [0x124c4ad0], edx */
  w32((uint32_t)(0x124c4ad0), (EDX));
  /* 124a4a93 mov eax, dword ptr [0x124c4ad0] */
  EAX = (r32((uint32_t)(0x124c4ad0)));
  /* 124a4a98 mov dword ptr [0x124c4ab4], eax */
  w32((uint32_t)(0x124c4ab4), (EAX));
  /* 124a4a9d mov ecx, dword ptr [0x124c4acc] */
  ECX = (r32((uint32_t)(0x124c4acc)));
  /* 124a4aa3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 124a4aa6 mov dword ptr [0x124c4acc], ecx */
  w32((uint32_t)(0x124c4acc), (ECX));
L_124a4aac:;
  /* 124a4aac mov eax, dword ptr [0x124c4acc] */
  EAX = (r32((uint32_t)(0x124c4acc)));
  /* 124a4ab1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 124a4ab4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a4ab6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4ab8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_124a4ab9:;
  /* 124a4ab9 mov esp, ebp */
  ESP = (EBP);
  /* 124a4abb pop ebp */
  EBP = (pop32());
  /* 124a4abc ret 4 */
  ESPCHK(0x124a49a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10014ac0 @ 0x124a4ac0 (69 bytes, 20 insns) */
void f_124a4ac0(void) {
  FTRACE(0x124a4ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4ac1 mov ebp, esp */
  EBP = (ESP);
  /* 124a4ac3 mov eax, dword ptr [0x124c4ac8] */
  EAX = (r32((uint32_t)(0x124c4ac8)));
  /* 124a4ac8 push eax */
  push32((uint32_t)(EAX));
  /* 124a4ac9 call 0x1249b2f0 */
  push32(0x124a4aceu); f_1249b2f0();
  /* 124a4ace add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4ad1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a4ad3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4ad6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 124a4ad9 mov dword ptr [0x124c4ab8], ecx */
  w32((uint32_t)(0x124c4ab8), (ECX));
  /* 124a4adf push 1 */
  push32((uint32_t)(0x1u));
  /* 124a4ae1 push 0x124a4b10 */
  push32((uint32_t)(0x124a4b10u));
  /* 124a4ae6 call dword ptr [0x124c72c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72c8))), 0x124a4aecu);
  /* 124a4aec mov edx, dword ptr [0x124c4acc] */
  EDX = (r32((uint32_t)(0x124c4acc)));
  /* 124a4af2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124a4af5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a4af7 jne 0x124a4b03 */
  if (!C.zf) goto L_124a4b03;
  /* 124a4af9 mov dword ptr [0x124c4acc], 0 */
  w32((uint32_t)(0x124c4acc), (0x0u));
L_124a4b03:;
  /* 124a4b03 pop ebp */
  EBP = (pop32());
  /* 124a4b04 ret  */
  ESPCHK(0x124a4ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b10 @ 0x124a4b10 (172 bytes, 54 insns) */
void f_124a4b10(void) {
  FTRACE(0x124a4b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4b10 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4b11 mov ebp, esp */
  EBP = (ESP);
  /* 124a4b13 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4b19 push eax */
  push32((uint32_t)(EAX));
  /* 124a4b1a call 0x124a4f50 */
  push32(0x124a4b1fu); f_124a4f50();
  /* 124a4b1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4b22 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 124a4b25 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 124a4b27 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124a4b2a push ecx */
  push32((uint32_t)(ECX));
  /* 124a4b2b mov edx, dword ptr [0x124c4ab8] */
  EDX = (r32((uint32_t)(0x124c4ab8)));
  /* 124a4b31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a4b33 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4b35 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 124a4b3b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4b41 push edx */
  push32((uint32_t)(EDX));
  /* 124a4b42 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a4b45 push eax */
  push32((uint32_t)(EAX));
  /* 124a4b46 call dword ptr [0x124c4ad4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c4ad4))), 0x124a4b4cu);
  /* 124a4b4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4b4e jne 0x124a4b61 */
  if (!C.zf) goto L_124a4b61;
  /* 124a4b50 mov dword ptr [0x124c4acc], 0 */
  w32((uint32_t)(0x124c4acc), (0x0u));
  /* 124a4b5a mov eax, 1 */
  EAX = (0x1u);
  /* 124a4b5f jmp 0x124a4bb6 */
  goto L_124a4bb6;
L_124a4b61:;
  /* 124a4b61 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124a4b64 push ecx */
  push32((uint32_t)(ECX));
  /* 124a4b65 mov edx, dword ptr [0x124c4ac8] */
  EDX = (r32((uint32_t)(0x124c4ac8)));
  /* 124a4b6b push edx */
  push32((uint32_t)(EDX));
  /* 124a4b6c call 0x124a6b90 */
  push32(0x124a4b71u); f_124a6b90();
  /* 124a4b71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4b74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4b76 jne 0x124a4ba9 */
  if (!C.zf) goto L_124a4ba9;
  /* 124a4b78 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a4b7b push eax */
  push32((uint32_t)(EAX));
  /* 124a4b7c call 0x124a4c90 */
  push32(0x124a4b81u); f_124a4c90();
  /* 124a4b81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4b86 je 0x124a4ba9 */
  if (C.zf) goto L_124a4ba9;
  /* 124a4b88 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124a4b8b mov dword ptr [0x124c4ad0], ecx */
  w32((uint32_t)(0x124c4ad0), (ECX));
  /* 124a4b91 mov edx, dword ptr [0x124c4ad0] */
  EDX = (r32((uint32_t)(0x124c4ad0)));
  /* 124a4b97 mov dword ptr [0x124c4ab4], edx */
  w32((uint32_t)(0x124c4ab4), (EDX));
  /* 124a4b9d mov eax, dword ptr [0x124c4acc] */
  EAX = (r32((uint32_t)(0x124c4acc)));
  /* 124a4ba2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 124a4ba4 mov dword ptr [0x124c4acc], eax */
  w32((uint32_t)(0x124c4acc), (EAX));
L_124a4ba9:;
  /* 124a4ba9 mov eax, dword ptr [0x124c4acc] */
  EAX = (r32((uint32_t)(0x124c4acc)));
  /* 124a4bae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 124a4bb1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124a4bb3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4bb5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_124a4bb6:;
  /* 124a4bb6 mov esp, ebp */
  ESP = (EBP);
  /* 124a4bb8 pop ebp */
  EBP = (pop32());
  /* 124a4bb9 ret 4 */
  ESPCHK(0x124a4b10u, _esp0);
  ESP += 8; return;
}

/* FUN_10014bc0 @ 0x124a4bc0 (43 bytes, 11 insns) */
void f_124a4bc0(void) {
  FTRACE(0x124a4bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4bc1 mov ebp, esp */
  EBP = (ESP);
  /* 124a4bc3 mov eax, dword ptr [0x124c4acc] */
  EAX = (r32((uint32_t)(0x124c4acc)));
  /* 124a4bc8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 124a4bcd mov dword ptr [0x124c4acc], eax */
  w32((uint32_t)(0x124c4acc), (EAX));
  /* 124a4bd2 call dword ptr [0x124c72c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72c4))), 0x124a4bd8u);
  /* 124a4bd8 mov dword ptr [0x124c4ad0], eax */
  w32((uint32_t)(0x124c4ad0), (EAX));
  /* 124a4bdd mov ecx, dword ptr [0x124c4ad0] */
  ECX = (r32((uint32_t)(0x124c4ad0)));
  /* 124a4be3 mov dword ptr [0x124c4ab4], ecx */
  w32((uint32_t)(0x124c4ab4), (ECX));
  /* 124a4be9 pop ebp */
  EBP = (pop32());
  /* 124a4bea ret  */
  ESPCHK(0x124a4bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014bf0 @ 0x124a4bf0 (155 bytes, 57 insns) */
void f_124a4bf0(void) {
  FTRACE(0x124a4bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4bf1 mov ebp, esp */
  EBP = (ESP);
  /* 124a4bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4bf6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4bfa je 0x124a4c1b */
  if (C.zf) goto L_124a4c1b;
  /* 124a4bfc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4bff movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124a4c02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a4c04 je 0x124a4c1b */
  if (C.zf) goto L_124a4c1b;
  /* 124a4c06 push 0x124c100c */
  push32((uint32_t)(0x124c100cu));
  /* 124a4c0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4c0e push edx */
  push32((uint32_t)(EDX));
  /* 124a4c0f call 0x124a4150 */
  push32(0x124a4c14u); f_124a4150();
  /* 124a4c14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4c19 jne 0x124a4c43 */
  if (!C.zf) goto L_124a4c43;
L_124a4c1b:;
  /* 124a4c1b push 8 */
  push32((uint32_t)(0x8u));
  /* 124a4c1d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 124a4c20 push eax */
  push32((uint32_t)(EAX));
  /* 124a4c21 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 124a4c26 mov ecx, dword ptr [0x124c4ad0] */
  ECX = (r32((uint32_t)(0x124c4ad0)));
  /* 124a4c2c push ecx */
  push32((uint32_t)(ECX));
  /* 124a4c2d call dword ptr [0x124c4ad4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c4ad4))), 0x124a4c33u);
  /* 124a4c33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4c35 jne 0x124a4c3b */
  if (!C.zf) goto L_124a4c3b;
  /* 124a4c37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a4c39 jmp 0x124a4c87 */
  goto L_124a4c87;
L_124a4c3b:;
  /* 124a4c3b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 124a4c3e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 124a4c41 jmp 0x124a4c7b */
  goto L_124a4c7b;
L_124a4c43:;
  /* 124a4c43 push 0x124c1008 */
  push32((uint32_t)(0x124c1008u));
  /* 124a4c48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4c4b push eax */
  push32((uint32_t)(EAX));
  /* 124a4c4c call 0x124a4150 */
  push32(0x124a4c51u); f_124a4150();
  /* 124a4c51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4c54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4c56 jne 0x124a4c7b */
  if (!C.zf) goto L_124a4c7b;
  /* 124a4c58 push 8 */
  push32((uint32_t)(0x8u));
  /* 124a4c5a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 124a4c5d push ecx */
  push32((uint32_t)(ECX));
  /* 124a4c5e push 0xb */
  push32((uint32_t)(0xbu));
  /* 124a4c60 mov edx, dword ptr [0x124c4ad0] */
  EDX = (r32((uint32_t)(0x124c4ad0)));
  /* 124a4c66 push edx */
  push32((uint32_t)(EDX));
  /* 124a4c67 call dword ptr [0x124c4ad4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c4ad4))), 0x124a4c6du);
  /* 124a4c6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4c6f jne 0x124a4c75 */
  if (!C.zf) goto L_124a4c75;
  /* 124a4c71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a4c73 jmp 0x124a4c87 */
  goto L_124a4c87;
L_124a4c75:;
  /* 124a4c75 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 124a4c78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_124a4c7b:;
  /* 124a4c7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4c7e push ecx */
  push32((uint32_t)(ECX));
  /* 124a4c7f call 0x124a6d70 */
  push32(0x124a4c84u); f_124a6d70();
  /* 124a4c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124a4c87:;
  /* 124a4c87 mov esp, ebp */
  ESP = (EBP);
  /* 124a4c89 pop ebp */
  EBP = (pop32());
  /* 124a4c8a ret  */
  ESPCHK(0x124a4bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c90 @ 0x124a4c90 (79 bytes, 26 insns) */
void f_124a4c90(void) {
  FTRACE(0x124a4c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4c90 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4c91 mov ebp, esp */
  EBP = (ESP);
  /* 124a4c93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4c96 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 124a4c9a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 124a4c9e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124a4ca5 jmp 0x124a4cb0 */
  goto L_124a4cb0;
L_124a4ca7:;
  /* 124a4ca7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a4caa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4cad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_124a4cb0:;
  /* 124a4cb0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4cb4 jae 0x124a4cd6 */
  if (!C.cf) goto L_124a4cd6;
  /* 124a4cb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a4cb9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124a4cbf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a4cc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124a4cc4 mov cx, word ptr [eax*2 + 0x124c39c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x124c39c4)));
  /* 124a4ccc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4cce jne 0x124a4cd4 */
  if (!C.zf) goto L_124a4cd4;
  /* 124a4cd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a4cd2 jmp 0x124a4cdb */
  goto L_124a4cdb;
L_124a4cd4:;
  /* 124a4cd4 jmp 0x124a4ca7 */
  goto L_124a4ca7;
L_124a4cd6:;
  /* 124a4cd6 mov eax, 1 */
  EAX = (0x1u);
L_124a4cdb:;
  /* 124a4cdb mov esp, ebp */
  ESP = (EBP);
  /* 124a4cdd pop ebp */
  EBP = (pop32());
  /* 124a4cde ret  */
  ESPCHK(0x124a4c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ce0 @ 0x124a4ce0 (135 bytes, 48 insns) */
void f_124a4ce0(void) {
  FTRACE(0x124a4ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4ce1 mov ebp, esp */
  EBP = (ESP);
  /* 124a4ce3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4ce6 push esi */
  push32((uint32_t)(ESI));
  /* 124a4ce7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4cea and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a4cef and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a4cf4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a4cf9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 124a4cfc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a4d01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a4d04 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 124a4d06 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 124a4d09 push ecx */
  push32((uint32_t)(ECX));
  /* 124a4d0a push 1 */
  push32((uint32_t)(0x1u));
  /* 124a4d0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a4d0f push edx */
  push32((uint32_t)(EDX));
  /* 124a4d10 call dword ptr [0x124c4ad4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c4ad4))), 0x124a4d16u);
  /* 124a4d16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4d18 jne 0x124a4d1e */
  if (!C.zf) goto L_124a4d1e;
  /* 124a4d1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a4d1c jmp 0x124a4d62 */
  goto L_124a4d62;
L_124a4d1e:;
  /* 124a4d1e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 124a4d21 push eax */
  push32((uint32_t)(EAX));
  /* 124a4d22 call 0x124a4f50 */
  push32(0x124a4d27u); f_124a4f50();
  /* 124a4d27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4d2a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4d2d je 0x124a4d5d */
  if (C.zf) goto L_124a4d5d;
  /* 124a4d2f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4d33 je 0x124a4d5d */
  if (C.zf) goto L_124a4d5d;
  /* 124a4d35 mov ecx, dword ptr [0x124c4ac4] */
  ECX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a4d3b push ecx */
  push32((uint32_t)(ECX));
  /* 124a4d3c call 0x124a4fd0 */
  push32(0x124a4d41u); f_124a4fd0();
  /* 124a4d41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4d44 mov esi, eax */
  ESI = (EAX);
  /* 124a4d46 mov edx, dword ptr [0x124c4ac4] */
  EDX = (r32((uint32_t)(0x124c4ac4)));
  /* 124a4d4c push edx */
  push32((uint32_t)(EDX));
  /* 124a4d4d call 0x1249b2f0 */
  push32(0x124a4d52u); f_1249b2f0();
  /* 124a4d52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4d55 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4d57 jne 0x124a4d5d */
  if (!C.zf) goto L_124a4d5d;
  /* 124a4d59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a4d5b jmp 0x124a4d62 */
  goto L_124a4d62;
L_124a4d5d:;
  /* 124a4d5d mov eax, 1 */
  EAX = (0x1u);
L_124a4d62:;
  /* 124a4d62 pop esi */
  ESI = (pop32());
  /* 124a4d63 mov esp, ebp */
  ESP = (EBP);
  /* 124a4d65 pop ebp */
  EBP = (pop32());
  /* 124a4d66 ret  */
  ESPCHK(0x124a4ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d70 @ 0x124a4d70 (77 bytes, 18 insns) */
void f_124a4d70(void) {
  FTRACE(0x124a4d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4d70 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4d71 mov ebp, esp */
  EBP = (ESP);
  /* 124a4d73 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4d79 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 124a4d83 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 124a4d89 push eax */
  push32((uint32_t)(EAX));
  /* 124a4d8a call dword ptr [0x124c72c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72c0))), 0x124a4d90u);
  /* 124a4d90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a4d92 je 0x124a4da9 */
  if (C.zf) goto L_124a4da9;
  /* 124a4d94 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4d9b jne 0x124a4da9 */
  if (!C.zf) goto L_124a4da9;
  /* 124a4d9d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 124a4da7 jmp 0x124a4db3 */
  goto L_124a4db3;
L_124a4da9:;
  /* 124a4da9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_124a4db3:;
  /* 124a4db3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 124a4db9 mov esp, ebp */
  ESP = (EBP);
  /* 124a4dbb pop ebp */
  EBP = (pop32());
  /* 124a4dbc ret  */
  ESPCHK(0x124a4d70u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x124a4dc0 (388 bytes, 118 insns) */
void f_124a4dc0(void) {
  FTRACE(0x124a4dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4dc1 mov ebp, esp */
  EBP = (ESP);
  /* 124a4dc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4dc6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124a4dcd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 124a4dd4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_124a4ddb:;
  /* 124a4ddb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a4dde cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4de1 jg 0x124a4f28 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a4f28;
  /* 124a4de7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a4dea add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4ded cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124a4dee sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4df0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124a4df2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a4df5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a4df8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a4dfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4dfe cmp edx, dword ptr [ecx + 0x124c3520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x124c3520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4e04 jne 0x124a4efe */
  if (!C.zf) goto L_124a4efe;
  /* 124a4e0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a4e0d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124a4e10 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4e14 ja 0x124a4e37 */
  if ((!C.cf&&!C.zf)) goto L_124a4e37;
  /* 124a4e16 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4e1a je 0x124a4ea9 */
  if (C.zf) goto L_124a4ea9;
  /* 124a4e20 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4e24 je 0x124a4e54 */
  if (C.zf) goto L_124a4e54;
  /* 124a4e26 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4e2a je 0x124a4e76 */
  if (C.zf) goto L_124a4e76;
  /* 124a4e2c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4e30 je 0x124a4e98 */
  if (C.zf) goto L_124a4e98;
  /* 124a4e32 jmp 0x124a4ec8 */
  goto L_124a4ec8;
L_124a4e37:;
  /* 124a4e37 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4e3e je 0x124a4e65 */
  if (C.zf) goto L_124a4e65;
  /* 124a4e40 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4e47 je 0x124a4e87 */
  if (C.zf) goto L_124a4e87;
  /* 124a4e49 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4e50 je 0x124a4eba */
  if (C.zf) goto L_124a4eba;
  /* 124a4e52 jmp 0x124a4ec8 */
  goto L_124a4ec8;
L_124a4e54:;
  /* 124a4e54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a4e57 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a4e5a add ecx, 0x124c3524 */
  { uint32_t _a=(ECX),_b=(0x124c3524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4e60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a4e63 jmp 0x124a4ec8 */
  goto L_124a4ec8;
L_124a4e65:;
  /* 124a4e65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a4e68 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a4e6b mov eax, dword ptr [edx + 0x124c352c] */
  EAX = (r32((uint32_t)(EDX + 0x124c352c)));
  /* 124a4e71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a4e74 jmp 0x124a4ec8 */
  goto L_124a4ec8;
L_124a4e76:;
  /* 124a4e76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a4e79 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a4e7c add ecx, 0x124c3530 */
  { uint32_t _a=(ECX),_b=(0x124c3530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4e82 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a4e85 jmp 0x124a4ec8 */
  goto L_124a4ec8;
L_124a4e87:;
  /* 124a4e87 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a4e8a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a4e8d mov eax, dword ptr [edx + 0x124c3534] */
  EAX = (r32((uint32_t)(EDX + 0x124c3534)));
  /* 124a4e93 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124a4e96 jmp 0x124a4ec8 */
  goto L_124a4ec8;
L_124a4e98:;
  /* 124a4e98 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a4e9b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a4e9e add ecx, 0x124c3538 */
  { uint32_t _a=(ECX),_b=(0x124c3538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4ea4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a4ea7 jmp 0x124a4ec8 */
  goto L_124a4ec8;
L_124a4ea9:;
  /* 124a4ea9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a4eac imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a4eaf add edx, 0x124c353c */
  { uint32_t _a=(EDX),_b=(0x124c353cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4eb5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124a4eb8 jmp 0x124a4ec8 */
  goto L_124a4ec8;
L_124a4eba:;
  /* 124a4eba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a4ebd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a4ec0 add eax, 0x124c3544 */
  { uint32_t _a=(EAX),_b=(0x124c3544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4ec5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124a4ec8:;
  /* 124a4ec8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4ecc je 0x124a4ed4 */
  if (C.zf) goto L_124a4ed4;
  /* 124a4ece cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4ed2 jge 0x124a4ed6 */
  if ((C.sf==C.of)) goto L_124a4ed6;
L_124a4ed4:;
  /* 124a4ed4 jmp 0x124a4f28 */
  goto L_124a4f28;
L_124a4ed6:;
  /* 124a4ed6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a4ed9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4edc push ecx */
  push32((uint32_t)(ECX));
  /* 124a4edd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a4ee0 push edx */
  push32((uint32_t)(EDX));
  /* 124a4ee1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a4ee4 push eax */
  push32((uint32_t)(EAX));
  /* 124a4ee5 call 0x1249bce0 */
  push32(0x124a4eeau); f_1249bce0();
  /* 124a4eea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4eed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a4ef0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4ef3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 124a4ef7 mov eax, 1 */
  EAX = (0x1u);
  /* 124a4efc jmp 0x124a4f3e */
  goto L_124a4f3e;
L_124a4efe:;
  /* 124a4efe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a4f01 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a4f04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4f07 cmp eax, dword ptr [edx + 0x124c3520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x124c3520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4f0d jae 0x124a4f1a */
  if (!C.cf) goto L_124a4f1a;
  /* 124a4f0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a4f12 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4f15 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124a4f18 jmp 0x124a4f23 */
  goto L_124a4f23;
L_124a4f1a:;
  /* 124a4f1a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a4f1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4f20 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124a4f23:;
  /* 124a4f23 jmp 0x124a4ddb */
  goto L_124a4ddb;
L_124a4f28:;
  /* 124a4f28 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124a4f2b push eax */
  push32((uint32_t)(EAX));
  /* 124a4f2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124a4f2f push ecx */
  push32((uint32_t)(ECX));
  /* 124a4f30 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124a4f33 push edx */
  push32((uint32_t)(EDX));
  /* 124a4f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4f37 push eax */
  push32((uint32_t)(EAX));
  /* 124a4f38 call dword ptr [0x124c72cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72cc))), 0x124a4f3eu);
L_124a4f3e:;
  /* 124a4f3e mov esp, ebp */
  ESP = (EBP);
  /* 124a4f40 pop ebp */
  EBP = (pop32());
  /* 124a4f41 ret 0x10 */
  ESPCHK(0x124a4dc0u, _esp0);
  ESP += 20; return;
}

/* FUN_10014f50 @ 0x124a4f50 (118 bytes, 42 insns) */
void f_124a4f50(void) {
  FTRACE(0x124a4f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4f50 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4f51 mov ebp, esp */
  EBP = (ESP);
  /* 124a4f53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4f56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124a4f5d:;
  /* 124a4f5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4f60 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124a4f62 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 124a4f65 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124a4f69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4f6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4f6f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124a4f72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a4f74 je 0x124a4fbf */
  if (C.zf) goto L_124a4fbf;
  /* 124a4f76 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124a4f7a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4f7d jl 0x124a4f92 */
  if ((C.sf!=C.of)) goto L_124a4f92;
  /* 124a4f7f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124a4f83 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4f86 jg 0x124a4f92 */
  if ((!C.zf&&C.sf==C.of)) goto L_124a4f92;
  /* 124a4f88 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 124a4f8b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124a4f8d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 124a4f90 jmp 0x124a4fac */
  goto L_124a4fac;
L_124a4f92:;
  /* 124a4f92 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124a4f96 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4f99 jl 0x124a4fac */
  if ((C.sf!=C.of)) goto L_124a4fac;
  /* 124a4f9b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124a4f9f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4fa2 jg 0x124a4fac */
  if ((!C.zf&&C.sf==C.of)) goto L_124a4fac;
  /* 124a4fa4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 124a4fa7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124a4fa9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_124a4fac:;
  /* 124a4fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a4faf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 124a4fb2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124a4fb6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 124a4fba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a4fbd jmp 0x124a4f5d */
  goto L_124a4f5d;
L_124a4fbf:;
  /* 124a4fbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a4fc2 mov esp, ebp */
  ESP = (EBP);
  /* 124a4fc4 pop ebp */
  EBP = (pop32());
  /* 124a4fc5 ret  */
  ESPCHK(0x124a4f50u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x124a4fd0 (101 bytes, 36 insns) */
void f_124a4fd0(void) {
  FTRACE(0x124a4fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a4fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a4fd1 mov ebp, esp */
  EBP = (ESP);
  /* 124a4fd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a4fd6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124a4fdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4fe0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124a4fe2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 124a4fe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a4fe8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a4feb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_124a4fee:;
  /* 124a4fee movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 124a4ff2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4ff5 jl 0x124a5000 */
  if ((C.sf!=C.of)) goto L_124a5000;
  /* 124a4ff7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 124a4ffb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a4ffe jle 0x124a5012 */
  if ((C.zf||C.sf!=C.of)) goto L_124a5012;
L_124a5000:;
  /* 124a5000 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 124a5004 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5007 jl 0x124a502e */
  if ((C.sf!=C.of)) goto L_124a502e;
  /* 124a5009 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 124a500d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5010 jg 0x124a502e */
  if ((!C.zf&&C.sf==C.of)) goto L_124a502e;
L_124a5012:;
  /* 124a5012 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a5015 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5018 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124a501b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a501e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124a5020 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 124a5023 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a5026 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5029 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124a502c jmp 0x124a4fee */
  goto L_124a4fee;
L_124a502e:;
  /* 124a502e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a5031 mov esp, ebp */
  ESP = (EBP);
  /* 124a5033 pop ebp */
  EBP = (pop32());
  /* 124a5034 ret  */
  ESPCHK(0x124a4fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015040 @ 0x124a5040 (122 bytes, 39 insns) */
void f_124a5040(void) {
  FTRACE(0x124a5040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a5040 push ebp */
  push32((uint32_t)(EBP));
  /* 124a5041 mov ebp, esp */
  EBP = (ESP);
  /* 124a5043 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a5047 cmp eax, dword ptr [0x124c635c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124c635c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a504d jae 0x124a5071 */
  if (!C.cf) goto L_124a5071;
  /* 124a504f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a5052 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124a5055 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a5058 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124a505b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a505e mov eax, dword ptr [ecx*4 + 0x124c6220] */
  EAX = (r32((uint32_t)(ECX*4 + 0x124c6220)));
  /* 124a5065 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124a506a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124a506d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a506f jne 0x124a508c */
  if (!C.zf) goto L_124a508c;
L_124a5071:;
  /* 124a5071 call 0x124a0390 */
  push32(0x124a5076u); f_124a0390();
  /* 124a5076 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124a507c call 0x124a03a0 */
  push32(0x124a5081u); f_124a03a0();
  /* 124a5081 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124a5087 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a508a jmp 0x124a50b6 */
  goto L_124a50b6;
L_124a508c:;
  /* 124a508c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a508f push edx */
  push32((uint32_t)(EDX));
  /* 124a5090 call 0x124a1bb0 */
  push32(0x124a5095u); f_124a1bb0();
  /* 124a5095 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5098 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a509b push eax */
  push32((uint32_t)(EAX));
  /* 124a509c call 0x124a50c0 */
  push32(0x124a50a1u); f_124a50c0();
  /* 124a50a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a50a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a50a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a50aa push ecx */
  push32((uint32_t)(ECX));
  /* 124a50ab call 0x124a1c40 */
  push32(0x124a50b0u); f_124a1c40();
  /* 124a50b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a50b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124a50b6:;
  /* 124a50b6 mov esp, ebp */
  ESP = (EBP);
  /* 124a50b8 pop ebp */
  EBP = (pop32());
  /* 124a50b9 ret  */
  ESPCHK(0x124a5040u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x124a50c0 (170 bytes, 59 insns) */
void f_124a50c0(void) {
  FTRACE(0x124a50c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a50c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124a50c1 mov ebp, esp */
  EBP = (ESP);
  /* 124a50c3 push ecx */
  push32((uint32_t)(ECX));
  /* 124a50c4 push esi */
  push32((uint32_t)(ESI));
  /* 124a50c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a50c8 push eax */
  push32((uint32_t)(EAX));
  /* 124a50c9 call 0x124a1a30 */
  push32(0x124a50ceu); f_124a1a30();
  /* 124a50ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a50d1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a50d4 je 0x124a5113 */
  if (C.zf) goto L_124a5113;
  /* 124a50d6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a50da je 0x124a50e2 */
  if (C.zf) goto L_124a50e2;
  /* 124a50dc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a50e0 jne 0x124a50fc */
  if (!C.zf) goto L_124a50fc;
L_124a50e2:;
  /* 124a50e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 124a50e4 call 0x124a1a30 */
  push32(0x124a50e9u); f_124a1a30();
  /* 124a50e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a50ec mov esi, eax */
  ESI = (EAX);
  /* 124a50ee push 2 */
  push32((uint32_t)(0x2u));
  /* 124a50f0 call 0x124a1a30 */
  push32(0x124a50f5u); f_124a1a30();
  /* 124a50f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a50f8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a50fa je 0x124a5113 */
  if (C.zf) goto L_124a5113;
L_124a50fc:;
  /* 124a50fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a50ff push ecx */
  push32((uint32_t)(ECX));
  /* 124a5100 call 0x124a1a30 */
  push32(0x124a5105u); f_124a1a30();
  /* 124a5105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5108 push eax */
  push32((uint32_t)(EAX));
  /* 124a5109 call dword ptr [0x124c72bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c72bc))), 0x124a510fu);
  /* 124a510f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a5111 je 0x124a511c */
  if (C.zf) goto L_124a511c;
L_124a5113:;
  /* 124a5113 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124a511a jmp 0x124a5125 */
  goto L_124a5125;
L_124a511c:;
  /* 124a511c call dword ptr [0x124c7388] */
  call_ind((uint32_t)(r32((uint32_t)(0x124c7388))), 0x124a5122u);
  /* 124a5122 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124a5125:;
  /* 124a5125 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a5128 push edx */
  push32((uint32_t)(EDX));
  /* 124a5129 call 0x124a1950 */
  push32(0x124a512eu); f_124a1950();
  /* 124a512e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a5134 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124a5137 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a513a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124a513d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124a5140 mov edx, dword ptr [eax*4 + 0x124c6220] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124c6220)));
  /* 124a5147 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 124a514c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5150 je 0x124a5163 */
  if (C.zf) goto L_124a5163;
  /* 124a5152 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a5155 push eax */
  push32((uint32_t)(EAX));
  /* 124a5156 call 0x124a02f0 */
  push32(0x124a515bu); f_124a02f0();
  /* 124a515b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a515e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124a5161 jmp 0x124a5165 */
  goto L_124a5165;
L_124a5163:;
  /* 124a5163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124a5165:;
  /* 124a5165 pop esi */
  ESI = (pop32());
  /* 124a5166 mov esp, ebp */
  ESP = (EBP);
  /* 124a5168 pop ebp */
  EBP = (pop32());
  /* 124a5169 ret  */
  ESPCHK(0x124a50c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015170 @ 0x124a5170 (146 bytes, 52 insns) */
void f_124a5170(void) {
  FTRACE(0x124a5170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a5170 push ebp */
  push32((uint32_t)(EBP));
  /* 124a5171 mov ebp, esp */
  EBP = (ESP);
  /* 124a5173 push ebx */
  push32((uint32_t)(EBX));
  /* 124a5174 push esi */
  push32((uint32_t)(ESI));
  /* 124a5175 push edi */
  push32((uint32_t)(EDI));
L_124a5176:;
  /* 124a5176 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a517a jne 0x124a519a */
  if (!C.zf) goto L_124a519a;
  /* 124a517c push 0x124c0948 */
  push32((uint32_t)(0x124c0948u));
  /* 124a5181 push 0 */
  push32((uint32_t)(0x0u));
  /* 124a5183 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 124a5185 push 0x124c1010 */
  push32((uint32_t)(0x124c1010u));
  /* 124a518a push 2 */
  push32((uint32_t)(0x2u));
  /* 124a518c call 0x12497580 */
  push32(0x124a5191u); f_12497580();
  /* 124a5191 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5194 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5197 jne 0x124a519a */
  if (!C.zf) goto L_124a519a;
  /* 124a5199 int3  */
  x86_unimpl("int3 @ 0x124a5199");
L_124a519a:;
  /* 124a519a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124a519c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124a519e jne 0x124a5176 */
  if (!C.zf) goto L_124a5176;
  /* 124a51a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a51a3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124a51a6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 124a51ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124a51ae je 0x124a51fd */
  if (C.zf) goto L_124a51fd;
  /* 124a51b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a51b3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124a51b6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 124a51b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124a51bb je 0x124a51fd */
  if (C.zf) goto L_124a51fd;
  /* 124a51bd push 2 */
  push32((uint32_t)(0x2u));
  /* 124a51bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a51c2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124a51c5 push eax */
  push32((uint32_t)(EAX));
  /* 124a51c6 call 0x12498f50 */
  push32(0x124a51cbu); f_12498f50();
  /* 124a51cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a51ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a51d1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124a51d4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 124a51da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a51dd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 124a51e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a51e3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 124a51e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a51ec mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 124a51f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124a51f6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_124a51fd:;
  /* 124a51fd pop edi */
  EDI = (pop32());
  /* 124a51fe pop esi */
  ESI = (pop32());
  /* 124a51ff pop ebx */
  EBX = (pop32());
  /* 124a5200 pop ebp */
  EBP = (pop32());
  /* 124a5201 ret  */
  ESPCHK(0x124a5170u, _esp0);
  ESP += 4; return;
}

/* FUN_10015210 @ 0x124a5210 (289 bytes, 97 insns) */
void f_124a5210(void) {
  FTRACE(0x124a5210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a5210 push ebp */
  push32((uint32_t)(EBP));
  /* 124a5211 mov ebp, esp */
  EBP = (ESP);
  /* 124a5213 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a5216 push esi */
  push32((uint32_t)(ESI));
  /* 124a5217 mov eax, dword ptr [0x124c3c98] */
  EAX = (r32((uint32_t)(0x124c3c98)));
  /* 124a521c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a521f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124a5226 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124a522d jmp 0x124a5238 */
  goto L_124a5238;
L_124a522f:;
  /* 124a522f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a5232 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5235 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124a5238:;
  /* 124a5238 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a523c jae 0x124a5271 */
  if (!C.cf) goto L_124a5271;
  /* 124a523e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a5241 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5244 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124a5247 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5248 call 0x1249b2f0 */
  push32(0x124a524du); f_1249b2f0();
  /* 124a524d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5250 mov esi, eax */
  ESI = (EAX);
  /* 124a5252 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a5255 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5258 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 124a525c push ecx */
  push32((uint32_t)(ECX));
  /* 124a525d call 0x1249b2f0 */
  push32(0x124a5262u); f_1249b2f0();
  /* 124a5262 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5265 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5268 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 124a526c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124a526f jmp 0x124a522f */
  goto L_124a522f;
L_124a5271:;
  /* 124a5271 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a5274 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5277 push eax */
  push32((uint32_t)(EAX));
  /* 124a5278 call 0x124984a0 */
  push32(0x124a527du); f_124984a0();
  /* 124a527d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5280 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a5283 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a5287 je 0x124a5329 */
  if (C.zf) goto L_124a5329;
  /* 124a528d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a5290 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124a5293 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124a529a jmp 0x124a52a5 */
  goto L_124a52a5;
L_124a529c:;
  /* 124a529c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a529f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a52a2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124a52a5:;
  /* 124a52a5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a52a9 jae 0x124a531a */
  if (!C.cf) goto L_124a531a;
  /* 124a52ab mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a52ae mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 124a52b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a52b4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a52b7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124a52ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a52bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a52c0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124a52c3 push ecx */
  push32((uint32_t)(ECX));
  /* 124a52c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a52c7 push edx */
  push32((uint32_t)(EDX));
  /* 124a52c8 call 0x1249b470 */
  push32(0x124a52cdu); f_1249b470();
  /* 124a52cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a52d0 push eax */
  push32((uint32_t)(EAX));
  /* 124a52d1 call 0x1249b2f0 */
  push32(0x124a52d6u); f_1249b2f0();
  /* 124a52d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a52d9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a52dc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a52de mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124a52e1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a52e4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 124a52e7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a52ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a52ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124a52f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a52f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a52f6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 124a52fa push eax */
  push32((uint32_t)(EAX));
  /* 124a52fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a52fe push ecx */
  push32((uint32_t)(ECX));
  /* 124a52ff call 0x1249b470 */
  push32(0x124a5304u); f_1249b470();
  /* 124a5304 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5307 push eax */
  push32((uint32_t)(EAX));
  /* 124a5308 call 0x1249b2f0 */
  push32(0x124a530du); f_1249b2f0();
  /* 124a530d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5310 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5313 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5315 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124a5318 jmp 0x124a529c */
  goto L_124a529c;
L_124a531a:;
  /* 124a531a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a531d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 124a5320 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5323 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5326 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_124a5329:;
  /* 124a5329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a532c pop esi */
  ESI = (pop32());
  /* 124a532d mov esp, ebp */
  ESP = (EBP);
  /* 124a532f pop ebp */
  EBP = (pop32());
  /* 124a5330 ret  */
  ESPCHK(0x124a5210u, _esp0);
  ESP += 4; return;
}

/* FUN_10015340 @ 0x124a5340 (291 bytes, 97 insns) */
void f_124a5340(void) {
  FTRACE(0x124a5340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124a5340 push ebp */
  push32((uint32_t)(EBP));
  /* 124a5341 mov ebp, esp */
  EBP = (ESP);
  /* 124a5343 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124a5346 push esi */
  push32((uint32_t)(ESI));
  /* 124a5347 mov eax, dword ptr [0x124c3c98] */
  EAX = (r32((uint32_t)(0x124c3c98)));
  /* 124a534c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124a534f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124a5356 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124a535d jmp 0x124a5368 */
  goto L_124a5368;
L_124a535f:;
  /* 124a535f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a5362 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5365 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124a5368:;
  /* 124a5368 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a536c jae 0x124a53a2 */
  if (!C.cf) goto L_124a53a2;
  /* 124a536e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a5371 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5374 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 124a5378 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5379 call 0x1249b2f0 */
  push32(0x124a537eu); f_1249b2f0();
  /* 124a537e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5381 mov esi, eax */
  ESI = (EAX);
  /* 124a5383 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a5386 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5389 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 124a538d push ecx */
  push32((uint32_t)(ECX));
  /* 124a538e call 0x1249b2f0 */
  push32(0x124a5393u); f_1249b2f0();
  /* 124a5393 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5396 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5399 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 124a539d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124a53a0 jmp 0x124a535f */
  goto L_124a535f;
L_124a53a2:;
  /* 124a53a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124a53a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a53a8 push eax */
  push32((uint32_t)(EAX));
  /* 124a53a9 call 0x124984a0 */
  push32(0x124a53aeu); f_124984a0();
  /* 124a53ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a53b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124a53b4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a53b8 je 0x124a545b */
  if (C.zf) goto L_124a545b;
  /* 124a53be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a53c1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124a53c4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124a53cb jmp 0x124a53d6 */
  goto L_124a53d6;
L_124a53cd:;
  /* 124a53cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a53d0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a53d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124a53d6:;
  /* 124a53d6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124a53da jae 0x124a544c */
  if (!C.cf) goto L_124a544c;
  /* 124a53dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a53df mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 124a53e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a53e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a53e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124a53eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a53ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a53f1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 124a53f5 push ecx */
  push32((uint32_t)(ECX));
  /* 124a53f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a53f9 push edx */
  push32((uint32_t)(EDX));
  /* 124a53fa call 0x1249b470 */
  push32(0x124a53ffu); f_1249b470();
  /* 124a53ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5402 push eax */
  push32((uint32_t)(EAX));
  /* 124a5403 call 0x1249b2f0 */
  push32(0x124a5408u); f_1249b2f0();
  /* 124a5408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a540b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a540e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5410 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124a5413 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5416 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 124a5419 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a541c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a541f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124a5422 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124a5425 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124a5428 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 124a542c push eax */
  push32((uint32_t)(EAX));
  /* 124a542d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5430 push ecx */
  push32((uint32_t)(ECX));
  /* 124a5431 call 0x1249b470 */
  push32(0x124a5436u); f_1249b470();
  /* 124a5436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5439 push eax */
  push32((uint32_t)(EAX));
  /* 124a543a call 0x1249b2f0 */
  push32(0x124a543fu); f_1249b2f0();
  /* 124a543f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5442 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5445 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5447 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124a544a jmp 0x124a53cd */
  goto L_124a53cd;
L_124a544c:;
  /* 124a544c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a544f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 124a5452 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124a5455 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124a5458 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_124a545b:;
  /* 124a545b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124a545e pop esi */
  ESI = (pop32());
  /* 124a545f mov esp, ebp */
  ESP = (EBP);
  /* 124a5461 pop ebp */
  EBP = (pop32());
  /* 124a5462 ret  */
  ESPCHK(0x124a5340u, _esp0);
  ESP += 4; return;
}

