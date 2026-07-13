#include "recomp.h"

/* FUN_1000a6a0 @ 0x11eba6a0 (10 bytes, 5 insns) */
void f_11eba6a0(void) {
  FTRACE(0x11eba6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba6a1 mov ebp, esp */
  EBP = (ESP);
  /* 11eba6a3 mov eax, dword ptr [0x11ee0c94] */
  EAX = (r32((uint32_t)(0x11ee0c94)));
  /* 11eba6a8 pop ebp */
  EBP = (pop32());
  /* 11eba6a9 ret  */
  ESPCHK(0x11eba6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6b0 @ 0x11eba6b0 (31 bytes, 11 insns) */
void f_11eba6b0(void) {
  FTRACE(0x11eba6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba6b1 mov ebp, esp */
  EBP = (ESP);
  /* 11eba6b3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba6ba jbe 0x11eba6c0 */
  if ((C.cf||C.zf)) goto L_11eba6c0;
  /* 11eba6bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eba6be jmp 0x11eba6cd */
  goto L_11eba6cd;
L_11eba6c0:;
  /* 11eba6c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba6c3 mov dword ptr [0x11ee0c94], eax */
  w32((uint32_t)(0x11ee0c94), (EAX));
  /* 11eba6c8 mov eax, 1 */
  EAX = (0x1u);
L_11eba6cd:;
  /* 11eba6cd pop ebp */
  EBP = (pop32());
  /* 11eba6ce ret  */
  ESPCHK(0x11eba6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6d0 @ 0x11eba6d0 (89 bytes, 20 insns) */
void f_11eba6d0(void) {
  FTRACE(0x11eba6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba6d1 mov ebp, esp */
  EBP = (ESP);
  /* 11eba6d3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11eba6d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eba6da mov eax, dword ptr [0x11ee412c] */
  EAX = (r32((uint32_t)(0x11ee412c)));
  /* 11eba6df push eax */
  push32((uint32_t)(EAX));
  /* 11eba6e0 call dword ptr [0x11ee533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee533c))), 0x11eba6e6u);
  /* 11eba6e6 mov dword ptr [0x11ee4128], eax */
  w32((uint32_t)(0x11ee4128), (EAX));
  /* 11eba6eb cmp dword ptr [0x11ee4128], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee4128))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba6f2 jne 0x11eba6f8 */
  if (!C.zf) goto L_11eba6f8;
  /* 11eba6f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eba6f6 jmp 0x11eba727 */
  goto L_11eba727;
L_11eba6f8:;
  /* 11eba6f8 mov ecx, dword ptr [0x11ee4128] */
  ECX = (r32((uint32_t)(0x11ee4128)));
  /* 11eba6fe mov dword ptr [0x11ee411c], ecx */
  w32((uint32_t)(0x11ee411c), (ECX));
  /* 11eba704 mov dword ptr [0x11ee4120], 0 */
  w32((uint32_t)(0x11ee4120), (0x0u));
  /* 11eba70e mov dword ptr [0x11ee4124], 0 */
  w32((uint32_t)(0x11ee4124), (0x0u));
  /* 11eba718 mov dword ptr [0x11ee4108], 0x10 */
  w32((uint32_t)(0x11ee4108), (0x10u));
  /* 11eba722 mov eax, 1 */
  EAX = (0x1u);
L_11eba727:;
  /* 11eba727 pop ebp */
  EBP = (pop32());
  /* 11eba728 ret  */
  ESPCHK(0x11eba6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a730 @ 0x11eba730 (85 bytes, 29 insns) */
void f_11eba730(void) {
  FTRACE(0x11eba730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba730 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba731 mov ebp, esp */
  EBP = (ESP);
  /* 11eba733 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba736 mov eax, dword ptr [0x11ee4124] */
  EAX = (r32((uint32_t)(0x11ee4124)));
  /* 11eba73b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eba73e mov ecx, dword ptr [0x11ee4128] */
  ECX = (r32((uint32_t)(0x11ee4128)));
  /* 11eba744 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba746 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11eba749 mov edx, dword ptr [0x11ee4128] */
  EDX = (r32((uint32_t)(0x11ee4128)));
  /* 11eba74f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11eba752:;
  /* 11eba752 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba755 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba758 jae 0x11eba77f */
  if (!C.cf) goto L_11eba77f;
  /* 11eba75a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba75d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba760 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba763 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eba766 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba76d jae 0x11eba774 */
  if (!C.cf) goto L_11eba774;
  /* 11eba76f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba772 jmp 0x11eba781 */
  goto L_11eba781;
L_11eba774:;
  /* 11eba774 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba777 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba77a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eba77d jmp 0x11eba752 */
  goto L_11eba752;
L_11eba77f:;
  /* 11eba77f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11eba781:;
  /* 11eba781 mov esp, ebp */
  ESP = (EBP);
  /* 11eba783 pop ebp */
  EBP = (pop32());
  /* 11eba784 ret  */
  ESPCHK(0x11eba730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a790 @ 0x11eba790 (95 bytes, 33 insns) */
void f_11eba790(void) {
  FTRACE(0x11eba790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba790 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba791 mov ebp, esp */
  EBP = (ESP);
  /* 11eba793 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba799 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba79c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba79f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11eba7a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba7a5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11eba7a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eba7ab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11eba7b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba7b3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11eba7b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba7b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11eba7bb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11eba7bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eba7bf jne 0x11eba7e1 */
  if (!C.zf) goto L_11eba7e1;
  /* 11eba7c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba7c4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11eba7c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eba7c9 jne 0x11eba7e1 */
  if (!C.zf) goto L_11eba7e1;
  /* 11eba7cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba7ce and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eba7d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eba7d6 je 0x11eba7e1 */
  if (C.zf) goto L_11eba7e1;
  /* 11eba7d8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11eba7df jmp 0x11eba7e8 */
  goto L_11eba7e8;
L_11eba7e1:;
  /* 11eba7e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11eba7e8:;
  /* 11eba7e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eba7eb mov esp, ebp */
  ESP = (EBP);
  /* 11eba7ed pop ebp */
  EBP = (pop32());
  /* 11eba7ee ret  */
  ESPCHK(0x11eba790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7f0 @ 0x11eba7f0 (1485 bytes, 453 insns) */
void f_11eba7f0(void) {
  FTRACE(0x11eba7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba7f1 mov ebp, esp */
  EBP = (ESP);
  /* 11eba7f3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba7f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba7f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11eba7fc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11eba7ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba802 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba805 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba808 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11eba80b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eba80e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11eba811 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11eba814 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba817 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eba81d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11eba820 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11eba827 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11eba82a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba82d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba830 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11eba833 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11eba836 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eba838 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba83b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11eba83e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11eba841 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba844 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11eba847 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11eba84a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eba84c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11eba84f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11eba852 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11eba855 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eba858 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eba85b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11eba85e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eba860 jne 0x11eba988 */
  if (!C.zf) goto L_11eba988;
  /* 11eba866 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eba869 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11eba86c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba86f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11eba872 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba876 jbe 0x11eba87f */
  if ((C.cf||C.zf)) goto L_11eba87f;
  /* 11eba878 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11eba87f:;
  /* 11eba87f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11eba882 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11eba885 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11eba888 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba88b jne 0x11eba961 */
  if (!C.zf) goto L_11eba961;
  /* 11eba891 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba895 jae 0x11eba8f6 */
  if (!C.cf) goto L_11eba8f6;
  /* 11eba897 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11eba89c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eba89f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11eba8a1 not eax */
  EAX = (~(EAX));
  /* 11eba8a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba8a6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11eba8a9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11eba8ad and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11eba8af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba8b2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11eba8b5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11eba8b9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11eba8bc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba8bf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11eba8c2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11eba8c5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11eba8c8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba8cb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11eba8ce mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11eba8d1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba8d4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11eba8d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eba8da jne 0x11eba8f4 */
  if (!C.zf) goto L_11eba8f4;
  /* 11eba8dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11eba8e1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eba8e4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11eba8e6 not eax */
  EAX = (~(EAX));
  /* 11eba8e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba8eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eba8ed and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11eba8ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba8f2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11eba8f4:;
  /* 11eba8f4 jmp 0x11eba961 */
  goto L_11eba961;
L_11eba8f6:;
  /* 11eba8f6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eba8f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba8fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11eba901 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11eba903 not edx */
  EDX = (~(EDX));
  /* 11eba905 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba908 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11eba90b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11eba912 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11eba914 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba917 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11eba91a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11eba921 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11eba924 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba927 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11eba92a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11eba92d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11eba930 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba933 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11eba936 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11eba939 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba93c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11eba940 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eba942 jne 0x11eba961 */
  if (!C.zf) goto L_11eba961;
  /* 11eba944 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eba947 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba94a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11eba94f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11eba951 not edx */
  EDX = (~(EDX));
  /* 11eba953 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba956 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11eba959 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11eba95b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba95e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11eba961:;
  /* 11eba961 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11eba964 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11eba967 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11eba96a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11eba96d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11eba970 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11eba973 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11eba976 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11eba979 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11eba97c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11eba97f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11eba982 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba985 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11eba988:;
  /* 11eba988 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11eba98b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11eba98e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba991 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11eba994 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba998 jbe 0x11eba9a1 */
  if ((C.cf||C.zf)) goto L_11eba9a1;
  /* 11eba99a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11eba9a1:;
  /* 11eba9a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eba9a4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11eba9a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eba9a9 jne 0x11ebab05 */
  if (!C.zf) goto L_11ebab05;
  /* 11eba9af mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11eba9b2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba9b5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11eba9b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eba9bb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11eba9be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba9c1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11eba9c4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba9c8 jbe 0x11eba9d1 */
  if ((C.cf||C.zf)) goto L_11eba9d1;
  /* 11eba9ca mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11eba9d1:;
  /* 11eba9d1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11eba9d4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba9d7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11eba9da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11eba9dd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11eba9e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba9e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11eba9e6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba9ea jbe 0x11eba9f3 */
  if ((C.cf||C.zf)) goto L_11eba9f3;
  /* 11eba9ec mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11eba9f3:;
  /* 11eba9f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11eba9f6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba9f9 je 0x11ebaaff */
  if (C.zf) goto L_11ebaaff;
  /* 11eba9ff mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ebaa02 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ebaa05 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebaa08 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebaa0b jne 0x11ebaae1 */
  if (!C.zf) goto L_11ebaae1;
  /* 11ebaa11 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebaa15 jae 0x11ebaa76 */
  if (!C.cf) goto L_11ebaa76;
  /* 11ebaa17 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebaa1c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebaa1f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebaa21 not edx */
  EDX = (~(EDX));
  /* 11ebaa23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebaa26 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebaa29 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11ebaa2d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebaa2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebaa32 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebaa35 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11ebaa39 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebaa3c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebaa3f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ebaa42 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ebaa45 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebaa48 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebaa4b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11ebaa4e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebaa51 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebaa54 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ebaa58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebaa5a jne 0x11ebaa74 */
  if (!C.zf) goto L_11ebaa74;
  /* 11ebaa5c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebaa61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebaa64 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebaa66 not edx */
  EDX = (~(EDX));
  /* 11ebaa68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebaa6b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ebaa6d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebaa6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebaa72 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ebaa74:;
  /* 11ebaa74 jmp 0x11ebaae1 */
  goto L_11ebaae1;
L_11ebaa76:;
  /* 11ebaa76 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebaa79 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebaa7c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebaa81 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebaa83 not eax */
  EAX = (~(EAX));
  /* 11ebaa85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebaa88 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebaa8b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11ebaa92 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebaa94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebaa97 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebaa9a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11ebaaa1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebaaa4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebaaa7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11ebaaaa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ebaaad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebaab0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebaab3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11ebaab6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebaab9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebaabc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ebaac0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebaac2 jne 0x11ebaae1 */
  if (!C.zf) goto L_11ebaae1;
  /* 11ebaac4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebaac7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebaaca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebaacf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebaad1 not eax */
  EAX = (~(EAX));
  /* 11ebaad3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebaad6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebaad9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebaadb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebaade mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ebaae1:;
  /* 11ebaae1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ebaae4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ebaae7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ebaaea mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebaaed mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ebaaf0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ebaaf3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ebaaf6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ebaaf9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ebaafc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11ebaaff:;
  /* 11ebaaff mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ebab02 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11ebab05:;
  /* 11ebab05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebab08 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebab0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebab0d jne 0x11ebab1b */
  if (!C.zf) goto L_11ebab1b;
  /* 11ebab0f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebab12 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebab15 je 0x11ebac2b */
  if (C.zf) goto L_11ebac2b;
L_11ebab1b:;
  /* 11ebab1b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebab1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebab21 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11ebab24 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ebab27 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebab2a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebab2d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebab30 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ebab33 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebab36 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebab39 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11ebab3c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebab3f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebab42 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11ebab45 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebab48 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebab4b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebab4e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ebab51 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebab54 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebab57 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebab5a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebab5d jne 0x11ebac2b */
  if (!C.zf) goto L_11ebac2b;
  /* 11ebab63 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebab67 jae 0x11ebabc4 */
  if (!C.cf) goto L_11ebabc4;
  /* 11ebab69 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebab6c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebab6f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ebab73 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebab76 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebab79 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ebab7c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ebab7f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebab82 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebab85 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11ebab88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebab8a jne 0x11ebaba2 */
  if (!C.zf) goto L_11ebaba2;
  /* 11ebab8c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebab91 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebab94 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebab96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebab99 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ebab9b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebab9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebaba0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ebaba2:;
  /* 11ebaba2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebaba7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebabaa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebabac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebabaf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebabb2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11ebabb6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebabb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebabbb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebabbe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11ebabc2 jmp 0x11ebac2b */
  goto L_11ebac2b;
L_11ebabc4:;
  /* 11ebabc4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebabc7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebabca movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ebabce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebabd1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebabd4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ebabd7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ebabda mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebabdd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebabe0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11ebabe3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebabe5 jne 0x11ebac02 */
  if (!C.zf) goto L_11ebac02;
  /* 11ebabe7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebabea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebabed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebabf2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebabf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebabf7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebabfa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebabfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebabff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11ebac02:;
  /* 11ebac02 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebac05 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebac08 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebac0d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebac0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebac12 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebac15 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11ebac1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebac1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebac21 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ebac24 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11ebac2b:;
  /* 11ebac2b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebac2e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebac31 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ebac33 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebac36 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebac39 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebac3c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11ebac3f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebac42 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ebac44 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebac47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebac4a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ebac4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebac4f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebac52 jne 0x11ebadb9 */
  if (!C.zf) goto L_11ebadb9;
  /* 11ebac58 cmp dword ptr [0x11ee4120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee4120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebac5f je 0x11ebada8 */
  if (C.zf) goto L_11ebada8;
  /* 11ebac65 mov eax, dword ptr [0x11ee4118] */
  EAX = (r32((uint32_t)(0x11ee4118)));
  /* 11ebac6a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11ebac6d mov ecx, dword ptr [0x11ee4120] */
  ECX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebac73 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ebac76 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebac78 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ebac7b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11ebac80 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ebac85 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebac88 push eax */
  push32((uint32_t)(EAX));
  /* 11ebac89 call dword ptr [0x11ee5358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5358))), 0x11ebac8fu);
  /* 11ebac8f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebac94 mov ecx, dword ptr [0x11ee4118] */
  ECX = (r32((uint32_t)(0x11ee4118)));
  /* 11ebac9a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebac9c mov eax, dword ptr [0x11ee4120] */
  EAX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebaca1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ebaca4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebaca6 mov edx, dword ptr [0x11ee4120] */
  EDX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebacac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ebacaf mov eax, dword ptr [0x11ee4120] */
  EAX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebacb4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ebacb7 mov edx, dword ptr [0x11ee4118] */
  EDX = (r32((uint32_t)(0x11ee4118)));
  /* 11ebacbd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11ebacc8 mov eax, dword ptr [0x11ee4120] */
  EAX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebaccd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ebacd0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11ebacd3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ebacd6 mov eax, dword ptr [0x11ee4120] */
  EAX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebacdb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ebacde mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11ebace1 mov edx, dword ptr [0x11ee4120] */
  EDX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebace7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ebacea movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11ebacee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebacf0 jne 0x11ebad06 */
  if (!C.zf) goto L_11ebad06;
  /* 11ebacf2 mov edx, dword ptr [0x11ee4120] */
  EDX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebacf8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ebacfb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11ebacfd mov ecx, dword ptr [0x11ee4120] */
  ECX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebad03 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11ebad06:;
  /* 11ebad06 mov edx, dword ptr [0x11ee4120] */
  EDX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebad0c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebad10 jne 0x11ebada8 */
  if (!C.zf) goto L_11ebada8;
  /* 11ebad16 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ebad1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebad1d mov eax, dword ptr [0x11ee4120] */
  EAX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebad22 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ebad25 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebad26 call dword ptr [0x11ee5358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5358))), 0x11ebad2cu);
  /* 11ebad2c mov edx, dword ptr [0x11ee4120] */
  EDX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebad32 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ebad35 push eax */
  push32((uint32_t)(EAX));
  /* 11ebad36 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebad38 mov ecx, dword ptr [0x11ee412c] */
  ECX = (r32((uint32_t)(0x11ee412c)));
  /* 11ebad3e push ecx */
  push32((uint32_t)(ECX));
  /* 11ebad3f call dword ptr [0x11ee535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee535c))), 0x11ebad45u);
  /* 11ebad45 mov edx, dword ptr [0x11ee4124] */
  EDX = (r32((uint32_t)(0x11ee4124)));
  /* 11ebad4b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebad4e mov eax, dword ptr [0x11ee4128] */
  EAX = (r32((uint32_t)(0x11ee4128)));
  /* 11ebad53 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebad55 mov ecx, dword ptr [0x11ee4120] */
  ECX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebad5b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebad5e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebad60 push eax */
  push32((uint32_t)(EAX));
  /* 11ebad61 mov edx, dword ptr [0x11ee4120] */
  EDX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebad67 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebad6a push edx */
  push32((uint32_t)(EDX));
  /* 11ebad6b mov eax, dword ptr [0x11ee4120] */
  EAX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebad70 push eax */
  push32((uint32_t)(EAX));
  /* 11ebad71 call 0x11ebe320 */
  push32(0x11ebad76u); f_11ebe320();
  /* 11ebad76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebad79 mov ecx, dword ptr [0x11ee4124] */
  ECX = (r32((uint32_t)(0x11ee4124)));
  /* 11ebad7f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebad82 mov dword ptr [0x11ee4124], ecx */
  w32((uint32_t)(0x11ee4124), (ECX));
  /* 11ebad88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebad8b cmp edx, dword ptr [0x11ee4120] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ee4120))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebad91 jbe 0x11ebad9c */
  if ((C.cf||C.zf)) goto L_11ebad9c;
  /* 11ebad93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebad96 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebad99 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ebad9c:;
  /* 11ebad9c mov ecx, dword ptr [0x11ee4128] */
  ECX = (r32((uint32_t)(0x11ee4128)));
  /* 11ebada2 mov dword ptr [0x11ee411c], ecx */
  w32((uint32_t)(0x11ee411c), (ECX));
L_11ebada8:;
  /* 11ebada8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebadab mov dword ptr [0x11ee4120], edx */
  w32((uint32_t)(0x11ee4120), (EDX));
  /* 11ebadb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebadb4 mov dword ptr [0x11ee4118], eax */
  w32((uint32_t)(0x11ee4118), (EAX));
L_11ebadb9:;
  /* 11ebadb9 mov esp, ebp */
  ESP = (EBP);
  /* 11ebadbb pop ebp */
  EBP = (pop32());
  /* 11ebadbc ret  */
  ESPCHK(0x11eba7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000adc0 @ 0x11ebadc0 (1334 bytes, 427 insns) */
void f_11ebadc0(void) {
  FTRACE(0x11ebadc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebadc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebadc1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebadc3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebadc6 push esi */
  push32((uint32_t)(ESI));
  /* 11ebadc7 mov eax, dword ptr [0x11ee4124] */
  EAX = (r32((uint32_t)(0x11ee4124)));
  /* 11ebadcc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebadcf mov ecx, dword ptr [0x11ee4128] */
  ECX = (r32((uint32_t)(0x11ee4128)));
  /* 11ebadd5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebadd7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ebadda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebaddd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebade0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebade3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11ebade6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebade9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ebadec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebadef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ebadf2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebadf6 jge 0x11ebae0c */
  if ((C.sf==C.of)) goto L_11ebae0c;
  /* 11ebadf8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebadfb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebadfe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebae00 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ebae03 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11ebae0a jmp 0x11ebae21 */
  goto L_11ebae21;
L_11ebae0c:;
  /* 11ebae0c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ebae13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebae16 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebae19 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebae1c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebae1e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11ebae21:;
  /* 11ebae21 mov ecx, dword ptr [0x11ee411c] */
  ECX = (r32((uint32_t)(0x11ee411c)));
  /* 11ebae27 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11ebae2a:;
  /* 11ebae2a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebae2d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebae30 jae 0x11ebae56 */
  if (!C.cf) goto L_11ebae56;
  /* 11ebae32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebae35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebae38 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11ebae3a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebae3d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ebae40 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11ebae43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebae45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebae47 je 0x11ebae4b */
  if (C.zf) goto L_11ebae4b;
  /* 11ebae49 jmp 0x11ebae56 */
  goto L_11ebae56;
L_11ebae4b:;
  /* 11ebae4b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebae4e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebae51 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ebae54 jmp 0x11ebae2a */
  goto L_11ebae2a;
L_11ebae56:;
  /* 11ebae56 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebae59 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebae5c jne 0x11ebaf3d */
  if (!C.zf) goto L_11ebaf3d;
  /* 11ebae62 mov eax, dword ptr [0x11ee4128] */
  EAX = (r32((uint32_t)(0x11ee4128)));
  /* 11ebae67 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11ebae6a:;
  /* 11ebae6a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebae6d cmp ecx, dword ptr [0x11ee411c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee411c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebae73 jae 0x11ebae99 */
  if (!C.cf) goto L_11ebae99;
  /* 11ebae75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebae78 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebae7b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11ebae7d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebae80 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ebae83 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11ebae86 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebae88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebae8a je 0x11ebae8e */
  if (C.zf) goto L_11ebae8e;
  /* 11ebae8c jmp 0x11ebae99 */
  goto L_11ebae99;
L_11ebae8e:;
  /* 11ebae8e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebae91 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebae94 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ebae97 jmp 0x11ebae6a */
  goto L_11ebae6a;
L_11ebae99:;
  /* 11ebae99 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebae9c cmp ecx, dword ptr [0x11ee411c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee411c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebaea2 jne 0x11ebaf3d */
  if (!C.zf) goto L_11ebaf3d;
L_11ebaea8:;
  /* 11ebaea8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebaeab cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebaeae jae 0x11ebaec6 */
  if (!C.cf) goto L_11ebaec6;
  /* 11ebaeb0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebaeb3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebaeb7 je 0x11ebaebb */
  if (C.zf) goto L_11ebaebb;
  /* 11ebaeb9 jmp 0x11ebaec6 */
  goto L_11ebaec6;
L_11ebaebb:;
  /* 11ebaebb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebaebe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebaec1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ebaec4 jmp 0x11ebaea8 */
  goto L_11ebaea8;
L_11ebaec6:;
  /* 11ebaec6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebaec9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebaecc jne 0x11ebaf17 */
  if (!C.zf) goto L_11ebaf17;
  /* 11ebaece mov eax, dword ptr [0x11ee4128] */
  EAX = (r32((uint32_t)(0x11ee4128)));
  /* 11ebaed3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11ebaed6:;
  /* 11ebaed6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebaed9 cmp ecx, dword ptr [0x11ee411c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee411c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebaedf jae 0x11ebaef7 */
  if (!C.cf) goto L_11ebaef7;
  /* 11ebaee1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebaee4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebaee8 je 0x11ebaeec */
  if (C.zf) goto L_11ebaeec;
  /* 11ebaeea jmp 0x11ebaef7 */
  goto L_11ebaef7;
L_11ebaeec:;
  /* 11ebaeec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebaeef add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebaef2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ebaef5 jmp 0x11ebaed6 */
  goto L_11ebaed6;
L_11ebaef7:;
  /* 11ebaef7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebaefa cmp ecx, dword ptr [0x11ee411c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee411c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebaf00 jne 0x11ebaf17 */
  if (!C.zf) goto L_11ebaf17;
  /* 11ebaf02 call 0x11ebb300 */
  push32(0x11ebaf07u); f_11ebb300();
  /* 11ebaf07 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ebaf0a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebaf0e jne 0x11ebaf17 */
  if (!C.zf) goto L_11ebaf17;
  /* 11ebaf10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebaf12 jmp 0x11ebb2f1 */
  goto L_11ebb2f1;
L_11ebaf17:;
  /* 11ebaf17 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebaf1a push edx */
  push32((uint32_t)(EDX));
  /* 11ebaf1b call 0x11ebb410 */
  push32(0x11ebaf20u); f_11ebb410();
  /* 11ebaf20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebaf23 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebaf26 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ebaf29 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ebaf2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebaf2e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ebaf31 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebaf34 jne 0x11ebaf3d */
  if (!C.zf) goto L_11ebaf3d;
  /* 11ebaf36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebaf38 jmp 0x11ebb2f1 */
  goto L_11ebb2f1;
L_11ebaf3d:;
  /* 11ebaf3d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebaf40 mov dword ptr [0x11ee411c], edx */
  w32((uint32_t)(0x11ee411c), (EDX));
  /* 11ebaf46 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebaf49 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ebaf4c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11ebaf4f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebaf52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ebaf54 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11ebaf57 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebaf5b je 0x11ebaf80 */
  if (C.zf) goto L_11ebaf80;
  /* 11ebaf5d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebaf60 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebaf63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebaf66 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11ebaf6a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebaf6d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebaf70 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11ebaf73 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11ebaf7a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11ebaf7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebaf7e jne 0x11ebafb5 */
  if (!C.zf) goto L_11ebafb5;
L_11ebaf80:;
  /* 11ebaf80 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11ebaf87:;
  /* 11ebaf87 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebaf8a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebaf8d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebaf90 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11ebaf94 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebaf97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebaf9a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11ebaf9d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11ebafa4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11ebafa6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebafa8 jne 0x11ebafb5 */
  if (!C.zf) goto L_11ebafb5;
  /* 11ebafaa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebafad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebafb0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11ebafb3 jmp 0x11ebaf87 */
  goto L_11ebaf87;
L_11ebafb5:;
  /* 11ebafb5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebafb8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebafbe mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebafc1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11ebafc8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ebafcb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ebafd2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebafd5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebafd8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebafdb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11ebafdf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ebafe2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebafe6 jne 0x11ebb002 */
  if (!C.zf) goto L_11ebb002;
  /* 11ebafe8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11ebafef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebaff2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebaff5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ebaff8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11ebafff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11ebb002:;
  /* 11ebb002 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb006 jl 0x11ebb01b */
  if ((C.sf!=C.of)) goto L_11ebb01b;
  /* 11ebb008 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebb00b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ebb00d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ebb010 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb013 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb016 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ebb019 jmp 0x11ebb002 */
  goto L_11ebb002;
L_11ebb01b:;
  /* 11ebb01b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb01e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb021 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11ebb025 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ebb028 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb02b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ebb02d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb030 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ebb033 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebb036 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ebb039 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb03c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ebb03f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb043 jle 0x11ebb04c */
  if ((C.zf||C.sf!=C.of)) goto L_11ebb04c;
  /* 11ebb045 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11ebb04c:;
  /* 11ebb04c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb04f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb052 je 0x11ebb270 */
  if (C.zf) goto L_11ebb270;
  /* 11ebb058 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb05b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb05e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebb061 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb064 jne 0x11ebb13a */
  if (!C.zf) goto L_11ebb13a;
  /* 11ebb06a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb06e jge 0x11ebb0cf */
  if ((C.sf==C.of)) goto L_11ebb0cf;
  /* 11ebb070 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebb075 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb078 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebb07a not eax */
  EAX = (~(EAX));
  /* 11ebb07c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb07f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb082 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11ebb086 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebb088 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb08b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb08e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11ebb092 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb095 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb098 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11ebb09b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ebb09e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb0a1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb0a4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11ebb0a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb0aa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb0ad movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ebb0b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebb0b3 jne 0x11ebb0cd */
  if (!C.zf) goto L_11ebb0cd;
  /* 11ebb0b5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebb0ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb0bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebb0bf not eax */
  EAX = (~(EAX));
  /* 11ebb0c1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb0c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ebb0c6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebb0c8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb0cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ebb0cd:;
  /* 11ebb0cd jmp 0x11ebb13a */
  goto L_11ebb13a;
L_11ebb0cf:;
  /* 11ebb0cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb0d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb0d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebb0da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebb0dc not edx */
  EDX = (~(EDX));
  /* 11ebb0de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb0e1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb0e4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11ebb0eb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebb0ed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb0f0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb0f3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11ebb0fa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb0fd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb100 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ebb103 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ebb106 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb109 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb10c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11ebb10f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb112 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb115 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ebb119 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebb11b jne 0x11ebb13a */
  if (!C.zf) goto L_11ebb13a;
  /* 11ebb11d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb120 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb123 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebb128 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebb12a not edx */
  EDX = (~(EDX));
  /* 11ebb12c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb12f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebb132 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebb134 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb137 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11ebb13a:;
  /* 11ebb13a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb13d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ebb140 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb143 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ebb146 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ebb149 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb14c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebb14f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb152 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ebb155 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ebb158 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb15c je 0x11ebb270 */
  if (C.zf) goto L_11ebb270;
  /* 11ebb162 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb165 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb168 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11ebb16b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ebb16e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb171 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebb174 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebb177 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ebb17a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb17d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebb180 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ebb183 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebb186 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb189 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ebb18c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb18f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebb192 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb195 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ebb198 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb19b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb19e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebb1a1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb1a4 jne 0x11ebb270 */
  if (!C.zf) goto L_11ebb270;
  /* 11ebb1aa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb1ae jge 0x11ebb20a */
  if ((C.sf==C.of)) goto L_11ebb20a;
  /* 11ebb1b0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb1b3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb1b6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ebb1ba mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb1bd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb1c0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11ebb1c3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ebb1c5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb1c8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb1cb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11ebb1ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebb1d0 jne 0x11ebb1e8 */
  if (!C.zf) goto L_11ebb1e8;
  /* 11ebb1d2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebb1d7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb1da shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebb1dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb1df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ebb1e1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebb1e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb1e6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ebb1e8:;
  /* 11ebb1e8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebb1ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb1f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebb1f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb1f5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb1f8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11ebb1fc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebb1fe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb201 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb204 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11ebb208 jmp 0x11ebb270 */
  goto L_11ebb270;
L_11ebb20a:;
  /* 11ebb20a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb20d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb210 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ebb214 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb217 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb21a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11ebb21d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ebb21f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb222 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb225 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11ebb228 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebb22a jne 0x11ebb247 */
  if (!C.zf) goto L_11ebb247;
  /* 11ebb22c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb22f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb232 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebb237 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebb239 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb23c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebb23f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebb241 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb244 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ebb247:;
  /* 11ebb247 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb24a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb24d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebb252 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebb254 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb257 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb25a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11ebb261 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebb263 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb266 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb269 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11ebb270:;
  /* 11ebb270 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb274 je 0x11ebb28a */
  if (C.zf) goto L_11ebb28a;
  /* 11ebb276 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb279 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebb27c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ebb27e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb281 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb284 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebb287 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11ebb28a:;
  /* 11ebb28a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb28d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb290 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ebb293 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebb296 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb299 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb29c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ebb29e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebb2a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb2a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb2a7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb2aa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11ebb2ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb2b0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ebb2b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb2b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ebb2b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb2ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb2bd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ebb2bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebb2c1 jne 0x11ebb2e3 */
  if (!C.zf) goto L_11ebb2e3;
  /* 11ebb2c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb2c6 cmp eax, dword ptr [0x11ee4120] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee4120))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb2cc jne 0x11ebb2e3 */
  if (!C.zf) goto L_11ebb2e3;
  /* 11ebb2ce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb2d1 cmp ecx, dword ptr [0x11ee4118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee4118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb2d7 jne 0x11ebb2e3 */
  if (!C.zf) goto L_11ebb2e3;
  /* 11ebb2d9 mov dword ptr [0x11ee4120], 0 */
  w32((uint32_t)(0x11ee4120), (0x0u));
L_11ebb2e3:;
  /* 11ebb2e3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ebb2e6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb2e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ebb2eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb2ee add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11ebb2f1:;
  /* 11ebb2f1 pop esi */
  ESI = (pop32());
  /* 11ebb2f2 mov esp, ebp */
  ESP = (EBP);
  /* 11ebb2f4 pop ebp */
  EBP = (pop32());
  /* 11ebb2f5 ret  */
  ESPCHK(0x11ebadc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b300 @ 0x11ebb300 (271 bytes, 78 insns) */
void f_11ebb300(void) {
  FTRACE(0x11ebb300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebb300 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebb301 mov ebp, esp */
  EBP = (ESP);
  /* 11ebb303 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebb304 mov eax, dword ptr [0x11ee4124] */
  EAX = (r32((uint32_t)(0x11ee4124)));
  /* 11ebb309 cmp eax, dword ptr [0x11ee4108] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee4108))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb30f jne 0x11ebb35b */
  if (!C.zf) goto L_11ebb35b;
  /* 11ebb311 mov ecx, dword ptr [0x11ee4108] */
  ECX = (r32((uint32_t)(0x11ee4108)));
  /* 11ebb317 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb31a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebb31d push ecx */
  push32((uint32_t)(ECX));
  /* 11ebb31e mov edx, dword ptr [0x11ee4128] */
  EDX = (r32((uint32_t)(0x11ee4128)));
  /* 11ebb324 push edx */
  push32((uint32_t)(EDX));
  /* 11ebb325 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebb327 mov eax, dword ptr [0x11ee412c] */
  EAX = (r32((uint32_t)(0x11ee412c)));
  /* 11ebb32c push eax */
  push32((uint32_t)(EAX));
  /* 11ebb32d call dword ptr [0x11ee5338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5338))), 0x11ebb333u);
  /* 11ebb333 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebb336 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb33a jne 0x11ebb343 */
  if (!C.zf) goto L_11ebb343;
  /* 11ebb33c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebb33e jmp 0x11ebb40b */
  goto L_11ebb40b;
L_11ebb343:;
  /* 11ebb343 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb346 mov dword ptr [0x11ee4128], ecx */
  w32((uint32_t)(0x11ee4128), (ECX));
  /* 11ebb34c mov edx, dword ptr [0x11ee4108] */
  EDX = (r32((uint32_t)(0x11ee4108)));
  /* 11ebb352 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb355 mov dword ptr [0x11ee4108], edx */
  w32((uint32_t)(0x11ee4108), (EDX));
L_11ebb35b:;
  /* 11ebb35b mov eax, dword ptr [0x11ee4124] */
  EAX = (r32((uint32_t)(0x11ee4124)));
  /* 11ebb360 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebb363 mov ecx, dword ptr [0x11ee4128] */
  ECX = (r32((uint32_t)(0x11ee4128)));
  /* 11ebb369 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb36b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ebb36e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11ebb373 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ebb375 mov edx, dword ptr [0x11ee412c] */
  EDX = (r32((uint32_t)(0x11ee412c)));
  /* 11ebb37b push edx */
  push32((uint32_t)(EDX));
  /* 11ebb37c call dword ptr [0x11ee533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee533c))), 0x11ebb382u);
  /* 11ebb382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb385 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11ebb388 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb38b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb38f jne 0x11ebb395 */
  if (!C.zf) goto L_11ebb395;
  /* 11ebb391 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebb393 jmp 0x11ebb40b */
  goto L_11ebb40b;
L_11ebb395:;
  /* 11ebb395 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ebb397 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11ebb39c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11ebb3a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebb3a3 call dword ptr [0x11ee5334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5334))), 0x11ebb3a9u);
  /* 11ebb3a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb3ac mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11ebb3af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb3b2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb3b6 jne 0x11ebb3d2 */
  if (!C.zf) goto L_11ebb3d2;
  /* 11ebb3b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb3bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ebb3be push ecx */
  push32((uint32_t)(ECX));
  /* 11ebb3bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebb3c1 mov edx, dword ptr [0x11ee412c] */
  EDX = (r32((uint32_t)(0x11ee412c)));
  /* 11ebb3c7 push edx */
  push32((uint32_t)(EDX));
  /* 11ebb3c8 call dword ptr [0x11ee535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee535c))), 0x11ebb3ceu);
  /* 11ebb3ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebb3d0 jmp 0x11ebb40b */
  goto L_11ebb40b;
L_11ebb3d2:;
  /* 11ebb3d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb3d5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ebb3db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb3de mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ebb3e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb3e8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11ebb3ef mov eax, dword ptr [0x11ee4124] */
  EAX = (r32((uint32_t)(0x11ee4124)));
  /* 11ebb3f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb3f7 mov dword ptr [0x11ee4124], eax */
  w32((uint32_t)(0x11ee4124), (EAX));
  /* 11ebb3fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb3ff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ebb402 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11ebb408 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ebb40b:;
  /* 11ebb40b mov esp, ebp */
  ESP = (EBP);
  /* 11ebb40d pop ebp */
  EBP = (pop32());
  /* 11ebb40e ret  */
  ESPCHK(0x11ebb300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b410 @ 0x11ebb410 (494 bytes, 149 insns) */
void f_11ebb410(void) {
  FTRACE(0x11ebb410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebb410 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebb411 mov ebp, esp */
  EBP = (ESP);
  /* 11ebb413 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb419 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ebb41c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ebb41f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb422 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ebb425 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ebb428 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11ebb42f:;
  /* 11ebb42f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb433 jl 0x11ebb448 */
  if ((C.sf!=C.of)) goto L_11ebb448;
  /* 11ebb435 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebb438 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ebb43a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ebb43d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebb440 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb443 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11ebb446 jmp 0x11ebb42f */
  goto L_11ebb42f;
L_11ebb448:;
  /* 11ebb448 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebb44b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebb451 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb454 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11ebb45b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ebb45e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ebb465 jmp 0x11ebb470 */
  goto L_11ebb470;
L_11ebb467:;
  /* 11ebb467 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb46a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb46d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11ebb470:;
  /* 11ebb470 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb474 jge 0x11ebb496 */
  if ((C.sf==C.of)) goto L_11ebb496;
  /* 11ebb476 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb479 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebb47c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11ebb47f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ebb482 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb485 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb488 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ebb48b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb48e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb491 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ebb494 jmp 0x11ebb467 */
  goto L_11ebb467;
L_11ebb496:;
  /* 11ebb496 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebb499 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11ebb49c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb49f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ebb4a2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb4a4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ebb4a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ebb4a9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11ebb4ae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ebb4b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb4b6 push edx */
  push32((uint32_t)(EDX));
  /* 11ebb4b7 call dword ptr [0x11ee5334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5334))), 0x11ebb4bdu);
  /* 11ebb4bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebb4bf jne 0x11ebb4c9 */
  if (!C.zf) goto L_11ebb4c9;
  /* 11ebb4c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebb4c4 jmp 0x11ebb5fa */
  goto L_11ebb5fa;
L_11ebb4c9:;
  /* 11ebb4c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb4cc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb4d1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ebb4d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb4d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ebb4da jmp 0x11ebb4e8 */
  goto L_11ebb4e8;
L_11ebb4dc:;
  /* 11ebb4dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb4df add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb4e5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ebb4e8:;
  /* 11ebb4e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb4eb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb4ee ja 0x11ebb54d */
  if ((!C.cf&&!C.zf)) goto L_11ebb54d;
  /* 11ebb4f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb4f3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11ebb4fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb4fd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11ebb507 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb50a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb50d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ebb510 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb513 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11ebb519 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb51c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb522 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb525 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ebb528 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb52b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb531 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb534 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ebb537 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb53a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb53f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ebb542 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebb545 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11ebb54b jmp 0x11ebb4dc */
  goto L_11ebb4dc;
L_11ebb54d:;
  /* 11ebb54d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebb550 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb556 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ebb559 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb55c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb55f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb562 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ebb565 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb568 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ebb56b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ebb56e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb571 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb574 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ebb577 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebb57a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb57d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb580 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11ebb583 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb586 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ebb589 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ebb58c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb58f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb592 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ebb595 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebb598 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb59b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11ebb5a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebb5a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb5a9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11ebb5b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb5b7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11ebb5bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb5be mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11ebb5c1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ebb5c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb5c7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11ebb5ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebb5cc jne 0x11ebb5dd */
  if (!C.zf) goto L_11ebb5dd;
  /* 11ebb5ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb5d1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebb5d4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebb5d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb5da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ebb5dd:;
  /* 11ebb5dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebb5e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebb5e5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebb5e7 not edx */
  EDX = (~(EDX));
  /* 11ebb5e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb5ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ebb5ef and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebb5f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb5f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ebb5f7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11ebb5fa:;
  /* 11ebb5fa mov esp, ebp */
  ESP = (EBP);
  /* 11ebb5fc pop ebp */
  EBP = (pop32());
  /* 11ebb5fd ret  */
  ESPCHK(0x11ebb410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b600 @ 0x11ebb600 (1515 bytes, 489 insns) */
void f_11ebb600(void) {
  FTRACE(0x11ebb600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebb600 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebb601 mov ebp, esp */
  EBP = (ESP);
  /* 11ebb603 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb606 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebb609 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb60c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11ebb60e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ebb611 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb614 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ebb617 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11ebb61a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb61d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebb620 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb623 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ebb626 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebb629 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11ebb62c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ebb62f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb632 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebb638 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb63b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11ebb642 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ebb645 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebb648 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb64b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ebb64e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb651 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ebb653 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb656 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11ebb659 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb65c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb65f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11ebb662 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb665 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ebb667 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ebb66a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebb66d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb670 jle 0x11ebb926 */
  if ((C.zf||C.sf!=C.of)) goto L_11ebb926;
  /* 11ebb676 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb679 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebb67c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebb67e jne 0x11ebb68b */
  if (!C.zf) goto L_11ebb68b;
  /* 11ebb680 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebb683 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb686 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb689 jle 0x11ebb692 */
  if ((C.zf||C.sf!=C.of)) goto L_11ebb692;
L_11ebb68b:;
  /* 11ebb68b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebb68d jmp 0x11ebbbe7 */
  goto L_11ebbbe7;
L_11ebb692:;
  /* 11ebb692 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb695 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ebb698 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb69b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ebb69e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb6a2 jbe 0x11ebb6ab */
  if ((C.cf||C.zf)) goto L_11ebb6ab;
  /* 11ebb6a4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11ebb6ab:;
  /* 11ebb6ab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb6ae mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb6b1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebb6b4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb6b7 jne 0x11ebb78d */
  if (!C.zf) goto L_11ebb78d;
  /* 11ebb6bd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb6c1 jae 0x11ebb722 */
  if (!C.cf) goto L_11ebb722;
  /* 11ebb6c3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebb6c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb6cb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebb6cd not edx */
  EDX = (~(EDX));
  /* 11ebb6cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb6d2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb6d5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11ebb6d9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebb6db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb6de mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb6e1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11ebb6e5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb6e8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb6eb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ebb6ee sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ebb6f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb6f4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb6f7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11ebb6fa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb6fd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb700 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ebb704 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebb706 jne 0x11ebb720 */
  if (!C.zf) goto L_11ebb720;
  /* 11ebb708 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebb70d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb710 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebb712 not edx */
  EDX = (~(EDX));
  /* 11ebb714 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb717 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ebb719 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebb71b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb71e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ebb720:;
  /* 11ebb720 jmp 0x11ebb78d */
  goto L_11ebb78d;
L_11ebb722:;
  /* 11ebb722 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb725 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb728 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebb72d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebb72f not eax */
  EAX = (~(EAX));
  /* 11ebb731 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb734 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb737 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11ebb73e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebb740 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb743 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb746 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11ebb74d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb750 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb753 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11ebb756 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ebb759 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb75c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb75f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11ebb762 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb765 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb768 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ebb76c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebb76e jne 0x11ebb78d */
  if (!C.zf) goto L_11ebb78d;
  /* 11ebb770 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb773 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb776 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebb77b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebb77d not eax */
  EAX = (~(EAX));
  /* 11ebb77f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb782 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebb785 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebb787 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb78a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ebb78d:;
  /* 11ebb78d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb790 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ebb793 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb796 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebb799 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ebb79c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb79f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ebb7a2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb7a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ebb7a8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ebb7ab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebb7ae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb7b1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb7b4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ebb7b7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb7bb jle 0x11ebb907 */
  if ((C.zf||C.sf!=C.of)) goto L_11ebb907;
  /* 11ebb7c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb7c4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb7c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ebb7ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb7cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ebb7d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb7d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ebb7d6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb7da jbe 0x11ebb7e3 */
  if ((C.cf||C.zf)) goto L_11ebb7e3;
  /* 11ebb7dc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11ebb7e3:;
  /* 11ebb7e3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb7e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebb7e9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11ebb7ec mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ebb7ef mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb7f2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb7f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebb7f8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ebb7fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb7fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb801 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11ebb804 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebb807 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb80a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11ebb80d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb810 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebb813 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb816 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ebb819 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb81c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb81f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebb822 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb825 jne 0x11ebb8f3 */
  if (!C.zf) goto L_11ebb8f3;
  /* 11ebb82b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb82f jae 0x11ebb88c */
  if (!C.cf) goto L_11ebb88c;
  /* 11ebb831 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb834 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb837 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ebb83b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb83e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb841 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ebb844 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ebb847 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb84a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb84d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11ebb850 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebb852 jne 0x11ebb86a */
  if (!C.zf) goto L_11ebb86a;
  /* 11ebb854 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebb859 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb85c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebb85e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb861 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ebb863 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebb865 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb868 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ebb86a:;
  /* 11ebb86a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebb86f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb872 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebb874 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb877 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb87a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11ebb87e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebb880 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb883 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb886 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11ebb88a jmp 0x11ebb8f3 */
  goto L_11ebb8f3;
L_11ebb88c:;
  /* 11ebb88c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb88f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb892 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ebb896 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb899 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb89c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ebb89f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ebb8a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb8a5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb8a8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11ebb8ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebb8ad jne 0x11ebb8ca */
  if (!C.zf) goto L_11ebb8ca;
  /* 11ebb8af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb8b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb8b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebb8ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebb8bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb8bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebb8c2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebb8c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebb8c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11ebb8ca:;
  /* 11ebb8ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb8cd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb8d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebb8d5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebb8d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb8da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb8dd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11ebb8e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebb8e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb8e9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb8ec mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11ebb8f3:;
  /* 11ebb8f3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb8f6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb8f9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ebb8fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb8fe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb901 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb904 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11ebb907:;
  /* 11ebb907 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebb90a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb90d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb910 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ebb912 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebb915 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb918 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb91b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb91e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11ebb921 jmp 0x11ebbbe2 */
  goto L_11ebbbe2;
L_11ebb926:;
  /* 11ebb926 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebb929 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb92c jge 0x11ebbbe2 */
  if ((C.sf==C.of)) goto L_11ebbbe2;
  /* 11ebb932 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebb935 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb938 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb93b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ebb93d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebb940 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb943 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb946 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb949 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11ebb94c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebb94f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb952 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ebb955 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebb958 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb95b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ebb95e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebb961 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ebb964 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb967 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ebb96a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb96e jbe 0x11ebb977 */
  if ((C.cf||C.zf)) goto L_11ebb977;
  /* 11ebb970 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11ebb977:;
  /* 11ebb977 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb97a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebb97d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebb97f jne 0x11ebbac0 */
  if (!C.zf) goto L_11ebbac0;
  /* 11ebb985 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebb988 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ebb98b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebb98e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ebb991 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb995 jbe 0x11ebb99e */
  if ((C.cf||C.zf)) goto L_11ebb99e;
  /* 11ebb997 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11ebb99e:;
  /* 11ebb99e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb9a1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebb9a4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebb9a7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb9aa jne 0x11ebba80 */
  if (!C.zf) goto L_11ebba80;
  /* 11ebb9b0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebb9b4 jae 0x11ebba15 */
  if (!C.cf) goto L_11ebba15;
  /* 11ebb9b6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebb9bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebb9be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebb9c0 not edx */
  EDX = (~(EDX));
  /* 11ebb9c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb9c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb9c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11ebb9cc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebb9ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebb9d1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb9d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11ebb9d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb9db add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb9de mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ebb9e1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ebb9e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb9e7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb9ea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11ebb9ed mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebb9f0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebb9f3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ebb9f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebb9f9 jne 0x11ebba13 */
  if (!C.zf) goto L_11ebba13;
  /* 11ebb9fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebba00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebba03 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebba05 not edx */
  EDX = (~(EDX));
  /* 11ebba07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebba0a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ebba0c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebba0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebba11 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ebba13:;
  /* 11ebba13 jmp 0x11ebba80 */
  goto L_11ebba80;
L_11ebba15:;
  /* 11ebba15 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebba18 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebba1b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebba20 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebba22 not eax */
  EAX = (~(EAX));
  /* 11ebba24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebba27 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebba2a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11ebba31 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebba33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebba36 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebba39 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11ebba40 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebba43 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebba46 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11ebba49 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ebba4c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebba4f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebba52 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11ebba55 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebba58 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebba5b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ebba5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebba61 jne 0x11ebba80 */
  if (!C.zf) goto L_11ebba80;
  /* 11ebba63 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebba66 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebba69 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebba6e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebba70 not eax */
  EAX = (~(EAX));
  /* 11ebba72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebba75 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebba78 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebba7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebba7d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ebba80:;
  /* 11ebba80 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebba83 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ebba86 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebba89 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebba8c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ebba8f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebba92 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ebba95 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebba98 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ebba9b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ebba9e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebbaa1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbaa4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ebbaa7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebbaaa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ebbaad sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebbab0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ebbab3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbab7 jbe 0x11ebbac0 */
  if ((C.cf||C.zf)) goto L_11ebbac0;
  /* 11ebbab9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11ebbac0:;
  /* 11ebbac0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebbac3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebbac6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11ebbac9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ebbacc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebbacf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebbad2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebbad5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ebbad8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebbadb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebbade mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ebbae1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebbae4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebbae7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ebbaea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebbaed mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebbaf0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebbaf3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ebbaf6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebbaf9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebbafc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebbaff cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbb02 jne 0x11ebbbce */
  if (!C.zf) goto L_11ebbbce;
  /* 11ebbb08 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbb0c jae 0x11ebbb68 */
  if (!C.cf) goto L_11ebbb68;
  /* 11ebbb0e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebbb11 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbb14 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ebbb18 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebbb1b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbb1e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11ebbb21 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ebbb23 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebbb26 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbb29 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11ebbb2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebbb2e jne 0x11ebbb46 */
  if (!C.zf) goto L_11ebbb46;
  /* 11ebbb30 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebbb35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebbb38 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebbb3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebbb3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ebbb3f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebbb41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebbb44 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ebbb46:;
  /* 11ebbb46 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebbb4b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebbb4e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebbb50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebbb53 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebbb56 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11ebbb5a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebbb5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebbb5f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebbb62 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11ebbb66 jmp 0x11ebbbce */
  goto L_11ebbbce;
L_11ebbb68:;
  /* 11ebbb68 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebbb6b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbb6e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ebbb72 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebbb75 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbb78 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11ebbb7b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ebbb7d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebbb80 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbb83 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11ebbb86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebbb88 jne 0x11ebbba5 */
  if (!C.zf) goto L_11ebbba5;
  /* 11ebbb8a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebbb8d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebbb90 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ebbb95 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ebbb97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebbb9a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebbb9d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebbb9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebbba2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ebbba5:;
  /* 11ebbba5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebbba8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebbbab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebbbb0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebbbb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebbbb5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebbbb8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11ebbbbf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebbbc1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebbbc4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebbbc7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11ebbbce:;
  /* 11ebbbce mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebbbd1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebbbd4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ebbbd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebbbd9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbbdc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebbbdf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11ebbbe2:;
  /* 11ebbbe2 mov eax, 1 */
  EAX = (0x1u);
L_11ebbbe7:;
  /* 11ebbbe7 mov esp, ebp */
  ESP = (EBP);
  /* 11ebbbe9 pop ebp */
  EBP = (pop32());
  /* 11ebbbea ret  */
  ESPCHK(0x11ebb600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbf0 @ 0x11ebbbf0 (304 bytes, 79 insns) */
void f_11ebbbf0(void) {
  FTRACE(0x11ebbbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebbbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebbbf1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebbbf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebbbf4 cmp dword ptr [0x11ee4120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee4120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbbfb je 0x11ebbd1c */
  if (C.zf) goto L_11ebbd1c;
  /* 11ebbc01 mov eax, dword ptr [0x11ee4118] */
  EAX = (r32((uint32_t)(0x11ee4118)));
  /* 11ebbc06 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11ebbc09 mov ecx, dword ptr [0x11ee4120] */
  ECX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebbc0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ebbc12 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbc14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ebbc17 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11ebbc1c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ebbc21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebbc24 push eax */
  push32((uint32_t)(EAX));
  /* 11ebbc25 call dword ptr [0x11ee5358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5358))), 0x11ebbc2bu);
  /* 11ebbc2b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebbc30 mov ecx, dword ptr [0x11ee4118] */
  ECX = (r32((uint32_t)(0x11ee4118)));
  /* 11ebbc36 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebbc38 mov eax, dword ptr [0x11ee4120] */
  EAX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebbc3d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ebbc40 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebbc42 mov edx, dword ptr [0x11ee4120] */
  EDX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebbc48 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ebbc4b mov eax, dword ptr [0x11ee4120] */
  EAX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebbc50 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ebbc53 mov edx, dword ptr [0x11ee4118] */
  EDX = (r32((uint32_t)(0x11ee4118)));
  /* 11ebbc59 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11ebbc64 mov eax, dword ptr [0x11ee4120] */
  EAX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebbc69 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ebbc6c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11ebbc6f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ebbc72 mov eax, dword ptr [0x11ee4120] */
  EAX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebbc77 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ebbc7a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11ebbc7d mov edx, dword ptr [0x11ee4120] */
  EDX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebbc83 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ebbc86 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11ebbc8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebbc8c jne 0x11ebbca2 */
  if (!C.zf) goto L_11ebbca2;
  /* 11ebbc8e mov edx, dword ptr [0x11ee4120] */
  EDX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebbc94 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ebbc97 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11ebbc99 mov ecx, dword ptr [0x11ee4120] */
  ECX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebbc9f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11ebbca2:;
  /* 11ebbca2 mov edx, dword ptr [0x11ee4120] */
  EDX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebbca8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbcac jne 0x11ebbd12 */
  if (!C.zf) goto L_11ebbd12;
  /* 11ebbcae cmp dword ptr [0x11ee4124], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee4124))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbcb5 jle 0x11ebbd12 */
  if ((C.zf||C.sf!=C.of)) goto L_11ebbd12;
  /* 11ebbcb7 mov eax, dword ptr [0x11ee4120] */
  EAX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebbcbc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ebbcbf push ecx */
  push32((uint32_t)(ECX));
  /* 11ebbcc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebbcc2 mov edx, dword ptr [0x11ee412c] */
  EDX = (r32((uint32_t)(0x11ee412c)));
  /* 11ebbcc8 push edx */
  push32((uint32_t)(EDX));
  /* 11ebbcc9 call dword ptr [0x11ee535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee535c))), 0x11ebbccfu);
  /* 11ebbccf mov eax, dword ptr [0x11ee4124] */
  EAX = (r32((uint32_t)(0x11ee4124)));
  /* 11ebbcd4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebbcd7 mov ecx, dword ptr [0x11ee4128] */
  ECX = (r32((uint32_t)(0x11ee4128)));
  /* 11ebbcdd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbcdf mov edx, dword ptr [0x11ee4120] */
  EDX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebbce5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbce8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebbcea push ecx */
  push32((uint32_t)(ECX));
  /* 11ebbceb mov eax, dword ptr [0x11ee4120] */
  EAX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebbcf0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbcf3 push eax */
  push32((uint32_t)(EAX));
  /* 11ebbcf4 mov ecx, dword ptr [0x11ee4120] */
  ECX = (r32((uint32_t)(0x11ee4120)));
  /* 11ebbcfa push ecx */
  push32((uint32_t)(ECX));
  /* 11ebbcfb call 0x11ebe320 */
  push32(0x11ebbd00u); f_11ebe320();
  /* 11ebbd00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbd03 mov edx, dword ptr [0x11ee4124] */
  EDX = (r32((uint32_t)(0x11ee4124)));
  /* 11ebbd09 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebbd0c mov dword ptr [0x11ee4124], edx */
  w32((uint32_t)(0x11ee4124), (EDX));
L_11ebbd12:;
  /* 11ebbd12 mov dword ptr [0x11ee4120], 0 */
  w32((uint32_t)(0x11ee4120), (0x0u));
L_11ebbd1c:;
  /* 11ebbd1c mov esp, ebp */
  ESP = (EBP);
  /* 11ebbd1e pop ebp */
  EBP = (pop32());
  /* 11ebbd1f ret  */
  ESPCHK(0x11ebbbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd20 @ 0x11ebbd20 (1565 bytes, 343 insns) */
void f_11ebbd20(void) {
  FTRACE(0x11ebbd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebbd20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebbd21 mov ebp, esp */
  EBP = (ESP);
  /* 11ebbd23 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebbd29 mov eax, dword ptr [0x11ee4124] */
  EAX = (r32((uint32_t)(0x11ee4124)));
  /* 11ebbd2e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebbd31 push eax */
  push32((uint32_t)(EAX));
  /* 11ebbd32 mov ecx, dword ptr [0x11ee4128] */
  ECX = (r32((uint32_t)(0x11ee4128)));
  /* 11ebbd38 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebbd39 call dword ptr [0x11ee53e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53e4))), 0x11ebbd3fu);
  /* 11ebbd3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebbd41 je 0x11ebbd4b */
  if (C.zf) goto L_11ebbd4b;
  /* 11ebbd43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebbd46 jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebbd4b:;
  /* 11ebbd4b mov edx, dword ptr [0x11ee4128] */
  EDX = (r32((uint32_t)(0x11ee4128)));
  /* 11ebbd51 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11ebbd57 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11ebbd61 jmp 0x11ebbd72 */
  goto L_11ebbd72;
L_11ebbd63:;
  /* 11ebbd63 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11ebbd69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbd6c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11ebbd72:;
  /* 11ebbd72 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11ebbd78 cmp ecx, dword ptr [0x11ee4124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee4124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbd7e jge 0x11ebc337 */
  if ((C.sf==C.of)) goto L_11ebc337;
  /* 11ebbd84 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ebbd8a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ebbd8d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11ebbd93 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11ebbd98 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11ebbd9e push ecx */
  push32((uint32_t)(ECX));
  /* 11ebbd9f call dword ptr [0x11ee53e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53e4))), 0x11ebbda5u);
  /* 11ebbda5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebbda7 je 0x11ebbdb3 */
  if (C.zf) goto L_11ebbdb3;
  /* 11ebbda9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11ebbdae jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebbdb3:;
  /* 11ebbdb3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ebbdb9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ebbdbc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11ebbdc2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11ebbdc8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbdce mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ebbdd1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ebbdd7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ebbdda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebbddd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11ebbde7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11ebbdf1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ebbdf8 jmp 0x11ebbe03 */
  goto L_11ebbe03;
L_11ebbdfa:;
  /* 11ebbdfa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebbdfd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbe00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11ebbe03:;
  /* 11ebbe03 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbe07 jge 0x11ebc2fb */
  if ((C.sf==C.of)) goto L_11ebc2fb;
  /* 11ebbe0d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11ebbe17 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11ebbe21 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11ebbe2b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11ebbe35 jmp 0x11ebbe46 */
  goto L_11ebbe46;
L_11ebbe37:;
  /* 11ebbe37 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ebbe3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbe40 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11ebbe46:;
  /* 11ebbe46 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbe4d jge 0x11ebbe62 */
  if ((C.sf==C.of)) goto L_11ebbe62;
  /* 11ebbe4f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ebbe55 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11ebbe60 jmp 0x11ebbe37 */
  goto L_11ebbe37;
L_11ebbe62:;
  /* 11ebbe62 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbe66 jl 0x11ebc29d */
  if ((C.sf!=C.of)) goto L_11ebc29d;
  /* 11ebbe6c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ebbe71 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11ebbe77 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebbe78 call dword ptr [0x11ee53e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53e4))), 0x11ebbe7eu);
  /* 11ebbe7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebbe80 je 0x11ebbe8c */
  if (C.zf) goto L_11ebbe8c;
  /* 11ebbe82 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11ebbe87 jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebbe8c:;
  /* 11ebbe8c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11ebbe92 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ebbe95 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11ebbe9f jmp 0x11ebbeb0 */
  goto L_11ebbeb0;
L_11ebbea1:;
  /* 11ebbea1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11ebbea7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbeaa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11ebbeb0:;
  /* 11ebbeb0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbeb7 jge 0x11ebc034 */
  if ((C.sf==C.of)) goto L_11ebc034;
  /* 11ebbebd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebbec0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbec3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11ebbec9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ebbecf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbed5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11ebbedb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ebbee1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbee5 jne 0x11ebbef2 */
  if (!C.zf) goto L_11ebbef2;
  /* 11ebbee7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11ebbeed cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbef0 je 0x11ebbefc */
  if (C.zf) goto L_11ebbefc;
L_11ebbef2:;
  /* 11ebbef2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11ebbef7 jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebbefc:;
  /* 11ebbefc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ebbf02 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ebbf04 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11ebbf0a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11ebbf10 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11ebbf16 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11ebbf1c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebbf1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebbf21 je 0x11ebbf59 */
  if (C.zf) goto L_11ebbf59;
  /* 11ebbf23 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11ebbf29 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebbf2c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11ebbf32 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbf3c jle 0x11ebbf48 */
  if ((C.zf||C.sf!=C.of)) goto L_11ebbf48;
  /* 11ebbf3e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11ebbf43 jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebbf48:;
  /* 11ebbf48 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11ebbf4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbf51 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11ebbf57 jmp 0x11ebbf9b */
  goto L_11ebbf9b;
L_11ebbf59:;
  /* 11ebbf59 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11ebbf5f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ebbf62 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebbf65 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11ebbf6b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbf72 jle 0x11ebbf7e */
  if ((C.zf||C.sf!=C.of)) goto L_11ebbf7e;
  /* 11ebbf74 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11ebbf7e:;
  /* 11ebbf7e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ebbf84 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11ebbf8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbf8e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ebbf94 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11ebbf9b:;
  /* 11ebbf9b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbfa2 jl 0x11ebbfbd */
  if ((C.sf!=C.of)) goto L_11ebbfbd;
  /* 11ebbfa4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11ebbfaa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebbfad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebbfaf jne 0x11ebbfbd */
  if (!C.zf) goto L_11ebbfbd;
  /* 11ebbfb1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbfbb jle 0x11ebbfc7 */
  if ((C.zf||C.sf!=C.of)) goto L_11ebbfc7;
L_11ebbfbd:;
  /* 11ebbfbd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11ebbfc2 jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebbfc7:;
  /* 11ebbfc7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ebbfcd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbfd3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ebbfd6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebbfdc je 0x11ebbfe8 */
  if (C.zf) goto L_11ebbfe8;
  /* 11ebbfde mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11ebbfe3 jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebbfe8:;
  /* 11ebbfe8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ebbfee add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebbff4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11ebbffa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ebc000 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc006 jb 0x11ebbefc */
  if (C.cf) goto L_11ebbefc;
  /* 11ebc00c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ebc012 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc018 je 0x11ebc024 */
  if (C.zf) goto L_11ebc024;
  /* 11ebc01a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11ebc01f jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebc024:;
  /* 11ebc024 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebc027 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc02c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ebc02f jmp 0x11ebbea1 */
  goto L_11ebbea1;
L_11ebc034:;
  /* 11ebc034 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebc037 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ebc039 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc03f je 0x11ebc04b */
  if (C.zf) goto L_11ebc04b;
  /* 11ebc041 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11ebc046 jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebc04b:;
  /* 11ebc04b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebc04e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11ebc054 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11ebc05b jmp 0x11ebc066 */
  goto L_11ebc066;
L_11ebc05d:;
  /* 11ebc05d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebc060 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc063 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11ebc066:;
  /* 11ebc066 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc06a jge 0x11ebc29d */
  if ((C.sf==C.of)) goto L_11ebc29d;
  /* 11ebc070 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11ebc07a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11ebc080 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11ebc086:;
  /* 11ebc086 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ebc08c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebc08f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11ebc095 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ebc09b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc0a1 je 0x11ebc1ca */
  if (C.zf) goto L_11ebc1ca;
  /* 11ebc0a7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebc0aa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11ebc0b0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc0b7 je 0x11ebc1ca */
  if (C.zf) goto L_11ebc1ca;
  /* 11ebc0bd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ebc0c3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc0c9 jb 0x11ebc0de */
  if (C.cf) goto L_11ebc0de;
  /* 11ebc0cb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11ebc0d1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc0d6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc0dc jb 0x11ebc0e8 */
  if (C.cf) goto L_11ebc0e8;
L_11ebc0de:;
  /* 11ebc0de mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11ebc0e3 jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebc0e8:;
  /* 11ebc0e8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ebc0ee and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebc0f4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11ebc0fa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11ebc100 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc103 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ebc106 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebc109 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc10e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11ebc114:;
  /* 11ebc114 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebc117 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc11d je 0x11ebc13e */
  if (C.zf) goto L_11ebc13e;
  /* 11ebc11f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebc122 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc128 jne 0x11ebc12c */
  if (!C.zf) goto L_11ebc12c;
  /* 11ebc12a jmp 0x11ebc13e */
  goto L_11ebc13e;
L_11ebc12c:;
  /* 11ebc12c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebc12f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ebc131 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebc134 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebc137 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc139 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ebc13c jmp 0x11ebc114 */
  goto L_11ebc114;
L_11ebc13e:;
  /* 11ebc13e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebc141 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc147 jne 0x11ebc153 */
  if (!C.zf) goto L_11ebc153;
  /* 11ebc149 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11ebc14e jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebc153:;
  /* 11ebc153 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ebc159 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ebc15b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ebc15e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebc161 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11ebc167 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc16e jle 0x11ebc17a */
  if ((C.zf||C.sf!=C.of)) goto L_11ebc17a;
  /* 11ebc170 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11ebc17a:;
  /* 11ebc17a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ebc180 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc183 je 0x11ebc18f */
  if (C.zf) goto L_11ebc18f;
  /* 11ebc185 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11ebc18a jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebc18f:;
  /* 11ebc18f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ebc195 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ebc198 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc19e je 0x11ebc1aa */
  if (C.zf) goto L_11ebc1aa;
  /* 11ebc1a0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11ebc1a5 jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebc1aa:;
  /* 11ebc1aa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ebc1b0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11ebc1b6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11ebc1bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc1bf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11ebc1c5 jmp 0x11ebc086 */
  goto L_11ebc086;
L_11ebc1ca:;
  /* 11ebc1ca cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc1d1 je 0x11ebc241 */
  if (C.zf) goto L_11ebc241;
  /* 11ebc1d3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc1d7 jge 0x11ebc20b */
  if ((C.sf==C.of)) goto L_11ebc20b;
  /* 11ebc1d9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebc1de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebc1e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebc1e3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11ebc1e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc1eb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11ebc1f1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebc1f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebc1f9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebc1fb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11ebc201 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc203 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11ebc209 jmp 0x11ebc241 */
  goto L_11ebc241;
L_11ebc20b:;
  /* 11ebc20b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebc20e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebc211 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebc216 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebc218 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 11ebc21e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc220 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11ebc226 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebc229 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebc22c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ebc231 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ebc233 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11ebc239 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc23b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11ebc241:;
  /* 11ebc241 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ebc247 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebc24a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc250 jne 0x11ebc264 */
  if (!C.zf) goto L_11ebc264;
  /* 11ebc252 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebc255 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11ebc25b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc262 je 0x11ebc26e */
  if (C.zf) goto L_11ebc26e;
L_11ebc264:;
  /* 11ebc264 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11ebc269 jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebc26e:;
  /* 11ebc26e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11ebc274 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ebc277 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc27d je 0x11ebc289 */
  if (C.zf) goto L_11ebc289;
  /* 11ebc27f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11ebc284 jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebc289:;
  /* 11ebc289 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 11ebc28f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc292 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11ebc298 jmp 0x11ebc05d */
  goto L_11ebc05d;
L_11ebc29d:;
  /* 11ebc29d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebc2a0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11ebc2a6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11ebc2ac cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc2b0 jne 0x11ebc2ca */
  if (!C.zf) goto L_11ebc2ca;
  /* 11ebc2b2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebc2b5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11ebc2bb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11ebc2c1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc2c8 je 0x11ebc2d1 */
  if (C.zf) goto L_11ebc2d1;
L_11ebc2ca:;
  /* 11ebc2ca mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 11ebc2cf jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebc2d1:;
  /* 11ebc2d1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11ebc2d7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc2dd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11ebc2e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebc2e6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc2eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ebc2ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebc2f1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ebc2f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ebc2f6 jmp 0x11ebbdfa */
  goto L_11ebbdfa;
L_11ebc2fb:;
  /* 11ebc2fb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ebc301 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11ebc307 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc309 jne 0x11ebc31c */
  if (!C.zf) goto L_11ebc31c;
  /* 11ebc30b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ebc311 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11ebc317 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc31a je 0x11ebc323 */
  if (C.zf) goto L_11ebc323;
L_11ebc31c:;
  /* 11ebc31c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11ebc321 jmp 0x11ebc339 */
  goto L_11ebc339;
L_11ebc323:;
  /* 11ebc323 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ebc329 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc32c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11ebc332 jmp 0x11ebbd63 */
  goto L_11ebbd63;
L_11ebc337:;
  /* 11ebc337 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ebc339:;
  /* 11ebc339 mov esp, ebp */
  ESP = (EBP);
  /* 11ebc33b pop ebp */
  EBP = (pop32());
  /* 11ebc33c ret  */
  ESPCHK(0x11ebbd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c340 @ 0x11ebc340 (250 bytes, 92 insns) */
void f_11ebc340(void) {
  FTRACE(0x11ebc340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebc340 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebc341 mov ebp, esp */
  EBP = (ESP);
  /* 11ebc343 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebc346 push ebx */
  push32((uint32_t)(EBX));
  /* 11ebc347 push esi */
  push32((uint32_t)(ESI));
  /* 11ebc348 push edi */
  push32((uint32_t)(EDI));
  /* 11ebc349 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11ebc34c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ebc34f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11ebc352 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11ebc355:;
  /* 11ebc355 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc359 jne 0x11ebc379 */
  if (!C.zf) goto L_11ebc379;
  /* 11ebc35b push 0x11ede1c8 */
  push32((uint32_t)(0x11ede1c8u));
  /* 11ebc360 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebc362 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11ebc364 push 0x11ede1bc */
  push32((uint32_t)(0x11ede1bcu));
  /* 11ebc369 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebc36b call 0x11eb54f0 */
  push32(0x11ebc370u); f_11eb54f0();
  /* 11ebc370 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc373 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc376 jne 0x11ebc379 */
  if (!C.zf) goto L_11ebc379;
  /* 11ebc378 int3  */
  x86_unimpl("int3 @ 0x11ebc378");
L_11ebc379:;
  /* 11ebc379 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebc37b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebc37d jne 0x11ebc355 */
  if (!C.zf) goto L_11ebc355;
L_11ebc37f:;
  /* 11ebc37f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc383 jne 0x11ebc3a3 */
  if (!C.zf) goto L_11ebc3a3;
  /* 11ebc385 push 0x11ede1ac */
  push32((uint32_t)(0x11ede1acu));
  /* 11ebc38a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebc38c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11ebc38e push 0x11ede1bc */
  push32((uint32_t)(0x11ede1bcu));
  /* 11ebc393 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebc395 call 0x11eb54f0 */
  push32(0x11ebc39au); f_11eb54f0();
  /* 11ebc39a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc39d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc3a0 jne 0x11ebc3a3 */
  if (!C.zf) goto L_11ebc3a3;
  /* 11ebc3a2 int3  */
  x86_unimpl("int3 @ 0x11ebc3a2");
L_11ebc3a3:;
  /* 11ebc3a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc3a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebc3a7 jne 0x11ebc37f */
  if (!C.zf) goto L_11ebc37f;
  /* 11ebc3a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc3ac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11ebc3b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc3b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebc3b9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ebc3bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc3bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebc3c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ebc3c4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc3c7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 11ebc3ce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebc3d1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebc3d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebc3d5 push edx */
  push32((uint32_t)(EDX));
  /* 11ebc3d6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc3d9 push eax */
  push32((uint32_t)(EAX));
  /* 11ebc3da call 0x11ebd3c0 */
  push32(0x11ebc3dfu); f_11ebd3c0();
  /* 11ebc3df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc3e2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ebc3e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc3e8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebc3eb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebc3ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc3f1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ebc3f4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc3f7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc3fb jl 0x11ebc41f */
  if ((C.sf!=C.of)) goto L_11ebc41f;
  /* 11ebc3fd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc400 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ebc402 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11ebc405 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebc407 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebc40d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11ebc410 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc413 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ebc415 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc418 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc41b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ebc41d jmp 0x11ebc430 */
  goto L_11ebc430;
L_11ebc41f:;
  /* 11ebc41f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc422 push edx */
  push32((uint32_t)(EDX));
  /* 11ebc423 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebc425 call 0x11ebd140 */
  push32(0x11ebc42au); f_11ebd140();
  /* 11ebc42a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc42d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11ebc430:;
  /* 11ebc430 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebc433 pop edi */
  EDI = (pop32());
  /* 11ebc434 pop esi */
  ESI = (pop32());
  /* 11ebc435 pop ebx */
  EBX = (pop32());
  /* 11ebc436 mov esp, ebp */
  ESP = (EBP);
  /* 11ebc438 pop ebp */
  EBP = (pop32());
  /* 11ebc439 ret  */
  ESPCHK(0x11ebc340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c440 @ 0x11ebc440 (183 bytes, 58 insns) */
void f_11ebc440(void) {
  FTRACE(0x11ebc440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebc440 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebc441 mov ebp, esp */
  EBP = (ESP);
  /* 11ebc443 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebc446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebc449 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc44c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc451 ja 0x11ebc46a */
  if ((!C.cf&&!C.zf)) goto L_11ebc46a;
  /* 11ebc453 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebc456 mov edx, dword ptr [0x11ee0c98] */
  EDX = (r32((uint32_t)(0x11ee0c98)));
  /* 11ebc45c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc45e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11ebc462 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc465 jmp 0x11ebc4f3 */
  goto L_11ebc4f3;
L_11ebc46a:;
  /* 11ebc46a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebc46d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11ebc470 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebc476 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebc47c mov edx, dword ptr [0x11ee0c98] */
  EDX = (r32((uint32_t)(0x11ee0c98)));
  /* 11ebc482 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc484 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11ebc488 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc48d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebc48f je 0x11ebc4b3 */
  if (C.zf) goto L_11ebc4b3;
  /* 11ebc491 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebc494 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11ebc497 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebc49d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11ebc4a0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ebc4a3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11ebc4a6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11ebc4aa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11ebc4b1 jmp 0x11ebc4c4 */
  goto L_11ebc4c4;
L_11ebc4b3:;
  /* 11ebc4b3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ebc4b6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11ebc4b9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11ebc4bd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11ebc4c4:;
  /* 11ebc4c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ebc4c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebc4c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebc4ca lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11ebc4cd push ecx */
  push32((uint32_t)(ECX));
  /* 11ebc4ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebc4d1 push edx */
  push32((uint32_t)(EDX));
  /* 11ebc4d2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11ebc4d5 push eax */
  push32((uint32_t)(EAX));
  /* 11ebc4d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ebc4d8 call 0x11ebe660 */
  push32(0x11ebc4ddu); f_11ebe660();
  /* 11ebc4dd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc4e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebc4e2 jne 0x11ebc4e8 */
  if (!C.zf) goto L_11ebc4e8;
  /* 11ebc4e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc4e6 jmp 0x11ebc4f3 */
  goto L_11ebc4f3;
L_11ebc4e8:;
  /* 11ebc4e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebc4eb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc4f0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11ebc4f3:;
  /* 11ebc4f3 mov esp, ebp */
  ESP = (EBP);
  /* 11ebc4f5 pop ebp */
  EBP = (pop32());
  /* 11ebc4f6 ret  */
  ESPCHK(0x11ebc440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c500 @ 0x11ebc500 (836 bytes, 238 insns) */
void f_11ebc500(void) {
  FTRACE(0x11ebc500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebc500 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebc501 mov ebp, esp */
  EBP = (ESP);
  /* 11ebc503 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebc506 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ebc508 call 0x11eb9e30 */
  push32(0x11ebc50du); f_11eb9e30();
  /* 11ebc50d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc510 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebc513 push eax */
  push32((uint32_t)(EAX));
  /* 11ebc514 call 0x11ebc850 */
  push32(0x11ebc519u); f_11ebc850();
  /* 11ebc519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc51c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ebc51f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebc522 cmp ecx, dword ptr [0x11ee3e64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee3e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc528 jne 0x11ebc53b */
  if (!C.zf) goto L_11ebc53b;
  /* 11ebc52a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ebc52c call 0x11eb9ed0 */
  push32(0x11ebc531u); f_11eb9ed0();
  /* 11ebc531 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc536 jmp 0x11ebc840 */
  goto L_11ebc840;
L_11ebc53b:;
  /* 11ebc53b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc53f jne 0x11ebc55c */
  if (!C.zf) goto L_11ebc55c;
  /* 11ebc541 call 0x11ebc930 */
  push32(0x11ebc546u); f_11ebc930();
  /* 11ebc546 call 0x11ebc9b0 */
  push32(0x11ebc54bu); f_11ebc9b0();
  /* 11ebc54b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ebc54d call 0x11eb9ed0 */
  push32(0x11ebc552u); f_11eb9ed0();
  /* 11ebc552 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc555 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc557 jmp 0x11ebc840 */
  goto L_11ebc840;
L_11ebc55c:;
  /* 11ebc55c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ebc563 jmp 0x11ebc56e */
  goto L_11ebc56e;
L_11ebc565:;
  /* 11ebc565 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebc568 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc56b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ebc56e:;
  /* 11ebc56e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc572 jae 0x11ebc6bf */
  if (!C.cf) goto L_11ebc6bf;
  /* 11ebc578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebc57b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebc57e mov ecx, dword ptr [eax + 0x11ee0eb8] */
  ECX = (r32((uint32_t)(EAX + 0x11ee0eb8)));
  /* 11ebc584 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc587 jne 0x11ebc6ba */
  if (!C.zf) goto L_11ebc6ba;
  /* 11ebc58d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ebc594 jmp 0x11ebc59f */
  goto L_11ebc59f;
L_11ebc596:;
  /* 11ebc596 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc599 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc59c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11ebc59f:;
  /* 11ebc59f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc5a6 jae 0x11ebc5b4 */
  if (!C.cf) goto L_11ebc5b4;
  /* 11ebc5a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc5ab mov byte ptr [eax + 0x11ee4000], 0 */
  w8((uint32_t)(EAX + 0x11ee4000), (0x0u));
  /* 11ebc5b2 jmp 0x11ebc596 */
  goto L_11ebc596;
L_11ebc5b4:;
  /* 11ebc5b4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ebc5bb jmp 0x11ebc5c6 */
  goto L_11ebc5c6;
L_11ebc5bd:;
  /* 11ebc5bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebc5c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc5c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11ebc5c6:;
  /* 11ebc5c6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc5ca jae 0x11ebc647 */
  if (!C.cf) goto L_11ebc647;
  /* 11ebc5cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebc5cf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebc5d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebc5d5 lea ecx, [edx + eax*8 + 0x11ee0ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11ee0ec8));
  /* 11ebc5dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ebc5df jmp 0x11ebc5ea */
  goto L_11ebc5ea;
L_11ebc5e1:;
  /* 11ebc5e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebc5e4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc5e7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ebc5ea:;
  /* 11ebc5ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebc5ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebc5ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ebc5f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebc5f3 je 0x11ebc642 */
  if (C.zf) goto L_11ebc642;
  /* 11ebc5f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebc5f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc5fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ebc5fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebc5ff je 0x11ebc642 */
  if (C.zf) goto L_11ebc642;
  /* 11ebc601 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebc604 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebc606 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ebc608 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ebc60b jmp 0x11ebc616 */
  goto L_11ebc616;
L_11ebc60d:;
  /* 11ebc60d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc610 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc613 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ebc616:;
  /* 11ebc616 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebc619 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebc61b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11ebc61e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc621 ja 0x11ebc640 */
  if ((!C.cf&&!C.zf)) goto L_11ebc640;
  /* 11ebc623 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc626 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebc629 mov dl, byte ptr [eax + 0x11ee4001] */
  DL = (r8((uint32_t)(EAX + 0x11ee4001)));
  /* 11ebc62f or dl, byte ptr [ecx + 0x11ee0eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11ee0eb0))); DL = (_r); fl_logic(_r,8); }
  /* 11ebc635 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc638 mov byte ptr [eax + 0x11ee4001], dl */
  w8((uint32_t)(EAX + 0x11ee4001), (DL));
  /* 11ebc63e jmp 0x11ebc60d */
  goto L_11ebc60d;
L_11ebc640:;
  /* 11ebc640 jmp 0x11ebc5e1 */
  goto L_11ebc5e1;
L_11ebc642:;
  /* 11ebc642 jmp 0x11ebc5bd */
  goto L_11ebc5bd;
L_11ebc647:;
  /* 11ebc647 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebc64a mov dword ptr [0x11ee3e64], ecx */
  w32((uint32_t)(0x11ee3e64), (ECX));
  /* 11ebc650 mov dword ptr [0x11ee3eec], 1 */
  w32((uint32_t)(0x11ee3eec), (0x1u));
  /* 11ebc65a mov edx, dword ptr [0x11ee3e64] */
  EDX = (r32((uint32_t)(0x11ee3e64)));
  /* 11ebc660 push edx */
  push32((uint32_t)(EDX));
  /* 11ebc661 call 0x11ebc8b0 */
  push32(0x11ebc666u); f_11ebc8b0();
  /* 11ebc666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc669 mov dword ptr [0x11ee4104], eax */
  w32((uint32_t)(0x11ee4104), (EAX));
  /* 11ebc66e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ebc675 jmp 0x11ebc680 */
  goto L_11ebc680;
L_11ebc677:;
  /* 11ebc677 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebc67a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc67d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ebc680:;
  /* 11ebc680 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc684 jae 0x11ebc6a4 */
  if (!C.cf) goto L_11ebc6a4;
  /* 11ebc686 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebc689 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebc68c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebc68f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebc692 mov cx, word ptr [ecx + eax*2 + 0x11ee0ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11ee0ebc)));
  /* 11ebc69a mov word ptr [edx*2 + 0x11ee3ee0], cx */
  w16((uint32_t)(EDX*2 + 0x11ee3ee0), (CX));
  /* 11ebc6a2 jmp 0x11ebc677 */
  goto L_11ebc677;
L_11ebc6a4:;
  /* 11ebc6a4 call 0x11ebc9b0 */
  push32(0x11ebc6a9u); f_11ebc9b0();
  /* 11ebc6a9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ebc6ab call 0x11eb9ed0 */
  push32(0x11ebc6b0u); f_11eb9ed0();
  /* 11ebc6b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc6b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc6b5 jmp 0x11ebc840 */
  goto L_11ebc840;
L_11ebc6ba:;
  /* 11ebc6ba jmp 0x11ebc565 */
  goto L_11ebc565;
L_11ebc6bf:;
  /* 11ebc6bf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11ebc6c2 push edx */
  push32((uint32_t)(EDX));
  /* 11ebc6c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebc6c6 push eax */
  push32((uint32_t)(EAX));
  /* 11ebc6c7 call dword ptr [0x11ee5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5330))), 0x11ebc6cdu);
  /* 11ebc6cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc6d0 jne 0x11ebc812 */
  if (!C.zf) goto L_11ebc812;
  /* 11ebc6d6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ebc6dd jmp 0x11ebc6e8 */
  goto L_11ebc6e8;
L_11ebc6df:;
  /* 11ebc6df mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc6e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc6e5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11ebc6e8:;
  /* 11ebc6e8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc6ef jae 0x11ebc6fd */
  if (!C.cf) goto L_11ebc6fd;
  /* 11ebc6f1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc6f4 mov byte ptr [edx + 0x11ee4000], 0 */
  w8((uint32_t)(EDX + 0x11ee4000), (0x0u));
  /* 11ebc6fb jmp 0x11ebc6df */
  goto L_11ebc6df;
L_11ebc6fd:;
  /* 11ebc6fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebc700 mov dword ptr [0x11ee3e64], eax */
  w32((uint32_t)(0x11ee3e64), (EAX));
  /* 11ebc705 mov dword ptr [0x11ee4104], 0 */
  w32((uint32_t)(0x11ee4104), (0x0u));
  /* 11ebc70f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc713 jbe 0x11ebc7ce */
  if ((C.cf||C.zf)) goto L_11ebc7ce;
  /* 11ebc719 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 11ebc71c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11ebc71f jmp 0x11ebc72a */
  goto L_11ebc72a;
L_11ebc721:;
  /* 11ebc721 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebc724 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc727 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_11ebc72a:;
  /* 11ebc72a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebc72d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebc72f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ebc731 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebc733 je 0x11ebc77c */
  if (C.zf) goto L_11ebc77c;
  /* 11ebc735 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebc738 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc73a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ebc73d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebc73f je 0x11ebc77c */
  if (C.zf) goto L_11ebc77c;
  /* 11ebc741 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebc744 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebc746 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ebc748 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ebc74b jmp 0x11ebc756 */
  goto L_11ebc756;
L_11ebc74d:;
  /* 11ebc74d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc750 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc753 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ebc756:;
  /* 11ebc756 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebc759 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebc75b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11ebc75e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc761 ja 0x11ebc77a */
  if ((!C.cf&&!C.zf)) goto L_11ebc77a;
  /* 11ebc763 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc766 mov cl, byte ptr [eax + 0x11ee4001] */
  CL = (r8((uint32_t)(EAX + 0x11ee4001)));
  /* 11ebc76c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 11ebc76f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc772 mov byte ptr [edx + 0x11ee4001], cl */
  w8((uint32_t)(EDX + 0x11ee4001), (CL));
  /* 11ebc778 jmp 0x11ebc74d */
  goto L_11ebc74d;
L_11ebc77a:;
  /* 11ebc77a jmp 0x11ebc721 */
  goto L_11ebc721;
L_11ebc77c:;
  /* 11ebc77c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11ebc783 jmp 0x11ebc78e */
  goto L_11ebc78e;
L_11ebc785:;
  /* 11ebc785 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc788 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc78b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ebc78e:;
  /* 11ebc78e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc795 jae 0x11ebc7ae */
  if (!C.cf) goto L_11ebc7ae;
  /* 11ebc797 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc79a mov dl, byte ptr [ecx + 0x11ee4001] */
  DL = (r8((uint32_t)(ECX + 0x11ee4001)));
  /* 11ebc7a0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11ebc7a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebc7a6 mov byte ptr [eax + 0x11ee4001], dl */
  w8((uint32_t)(EAX + 0x11ee4001), (DL));
  /* 11ebc7ac jmp 0x11ebc785 */
  goto L_11ebc785;
L_11ebc7ae:;
  /* 11ebc7ae mov ecx, dword ptr [0x11ee3e64] */
  ECX = (r32((uint32_t)(0x11ee3e64)));
  /* 11ebc7b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebc7b5 call 0x11ebc8b0 */
  push32(0x11ebc7bau); f_11ebc8b0();
  /* 11ebc7ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc7bd mov dword ptr [0x11ee4104], eax */
  w32((uint32_t)(0x11ee4104), (EAX));
  /* 11ebc7c2 mov dword ptr [0x11ee3eec], 1 */
  w32((uint32_t)(0x11ee3eec), (0x1u));
  /* 11ebc7cc jmp 0x11ebc7d8 */
  goto L_11ebc7d8;
L_11ebc7ce:;
  /* 11ebc7ce mov dword ptr [0x11ee3eec], 0 */
  w32((uint32_t)(0x11ee3eec), (0x0u));
L_11ebc7d8:;
  /* 11ebc7d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ebc7df jmp 0x11ebc7ea */
  goto L_11ebc7ea;
L_11ebc7e1:;
  /* 11ebc7e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebc7e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc7e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ebc7ea:;
  /* 11ebc7ea cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc7ee jae 0x11ebc7ff */
  if (!C.cf) goto L_11ebc7ff;
  /* 11ebc7f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebc7f3 mov word ptr [eax*2 + 0x11ee3ee0], 0 */
  w16((uint32_t)(EAX*2 + 0x11ee3ee0), (0x0u));
  /* 11ebc7fd jmp 0x11ebc7e1 */
  goto L_11ebc7e1;
L_11ebc7ff:;
  /* 11ebc7ff call 0x11ebc9b0 */
  push32(0x11ebc804u); f_11ebc9b0();
  /* 11ebc804 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ebc806 call 0x11eb9ed0 */
  push32(0x11ebc80bu); f_11eb9ed0();
  /* 11ebc80b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc80e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc810 jmp 0x11ebc840 */
  goto L_11ebc840;
L_11ebc812:;
  /* 11ebc812 cmp dword ptr [0x11ee2978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc819 je 0x11ebc833 */
  if (C.zf) goto L_11ebc833;
  /* 11ebc81b call 0x11ebc930 */
  push32(0x11ebc820u); f_11ebc930();
  /* 11ebc820 call 0x11ebc9b0 */
  push32(0x11ebc825u); f_11ebc9b0();
  /* 11ebc825 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ebc827 call 0x11eb9ed0 */
  push32(0x11ebc82cu); f_11eb9ed0();
  /* 11ebc82c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc82f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebc831 jmp 0x11ebc840 */
  goto L_11ebc840;
L_11ebc833:;
  /* 11ebc833 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ebc835 call 0x11eb9ed0 */
  push32(0x11ebc83au); f_11eb9ed0();
  /* 11ebc83a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc83d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ebc840:;
  /* 11ebc840 mov esp, ebp */
  ESP = (EBP);
  /* 11ebc842 pop ebp */
  EBP = (pop32());
  /* 11ebc843 ret  */
  ESPCHK(0x11ebc500u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11ebc850 (89 bytes, 21 insns) */
void f_11ebc850(void) {
  FTRACE(0x11ebc850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebc850 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebc851 mov ebp, esp */
  EBP = (ESP);
  /* 11ebc853 mov dword ptr [0x11ee2978], 0 */
  w32((uint32_t)(0x11ee2978), (0x0u));
  /* 11ebc85d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc861 jne 0x11ebc875 */
  if (!C.zf) goto L_11ebc875;
  /* 11ebc863 mov dword ptr [0x11ee2978], 1 */
  w32((uint32_t)(0x11ee2978), (0x1u));
  /* 11ebc86d call dword ptr [0x11ee5328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5328))), 0x11ebc873u);
  /* 11ebc873 jmp 0x11ebc8a7 */
  goto L_11ebc8a7;
L_11ebc875:;
  /* 11ebc875 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc879 jne 0x11ebc88d */
  if (!C.zf) goto L_11ebc88d;
  /* 11ebc87b mov dword ptr [0x11ee2978], 1 */
  w32((uint32_t)(0x11ee2978), (0x1u));
  /* 11ebc885 call dword ptr [0x11ee532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee532c))), 0x11ebc88bu);
  /* 11ebc88b jmp 0x11ebc8a7 */
  goto L_11ebc8a7;
L_11ebc88d:;
  /* 11ebc88d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc891 jne 0x11ebc8a4 */
  if (!C.zf) goto L_11ebc8a4;
  /* 11ebc893 mov dword ptr [0x11ee2978], 1 */
  w32((uint32_t)(0x11ee2978), (0x1u));
  /* 11ebc89d mov eax, dword ptr [0x11ee2998] */
  EAX = (r32((uint32_t)(0x11ee2998)));
  /* 11ebc8a2 jmp 0x11ebc8a7 */
  goto L_11ebc8a7;
L_11ebc8a4:;
  /* 11ebc8a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11ebc8a7:;
  /* 11ebc8a7 pop ebp */
  EBP = (pop32());
  /* 11ebc8a8 ret  */
  ESPCHK(0x11ebc850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8b0 @ 0x11ebc8b0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11ebc8b0(void) {
  FTRACE(0x11ebc8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebc8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebc8b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebc8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebc8b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebc8b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebc8ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebc8bd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebc8c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ebc8c6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc8ca ja 0x11ebc8fa */
  if ((!C.cf&&!C.zf)) goto L_11ebc8fa;
  /* 11ebc8cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebc8cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebc8d1 mov dl, byte ptr [eax + 0x11ebc914] */
  DL = (r8((uint32_t)(EAX + 0x11ebc914)));
  /* 11ebc8d7 jmp dword ptr [edx*4 + 0x11ebc900] */
  switch (EDX) {
    case 0: goto L_11ebc8de;
    case 1: goto L_11ebc8e5;
    case 2: goto L_11ebc8ec;
    case 3: goto L_11ebc8f3;
    case 4: goto L_11ebc8fa;
    default: x86_unimpl("switch@0x11ebc8d7 out of table"); return;
  }
L_11ebc8de:;
  /* 11ebc8de mov eax, 0x411 */
  EAX = (0x411u);
  /* 11ebc8e3 jmp 0x11ebc8fc */
  goto L_11ebc8fc;
L_11ebc8e5:;
  /* 11ebc8e5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11ebc8ea jmp 0x11ebc8fc */
  goto L_11ebc8fc;
L_11ebc8ec:;
  /* 11ebc8ec mov eax, 0x412 */
  EAX = (0x412u);
  /* 11ebc8f1 jmp 0x11ebc8fc */
  goto L_11ebc8fc;
L_11ebc8f3:;
  /* 11ebc8f3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11ebc8f8 jmp 0x11ebc8fc */
  goto L_11ebc8fc;
L_11ebc8fa:;
  /* 11ebc8fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ebc8fc:;
  /* 11ebc8fc mov esp, ebp */
  ESP = (EBP);
  /* 11ebc8fe pop ebp */
  EBP = (pop32());
  /* 11ebc8ff ret  */
  ESPCHK(0x11ebc8b0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11ebc930 (116 bytes, 29 insns) */
void f_11ebc930(void) {
  FTRACE(0x11ebc930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebc930 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebc931 mov ebp, esp */
  EBP = (ESP);
  /* 11ebc933 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebc934 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ebc93b jmp 0x11ebc946 */
  goto L_11ebc946;
L_11ebc93d:;
  /* 11ebc93d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebc940 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc943 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ebc946:;
  /* 11ebc946 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc94d jge 0x11ebc95b */
  if ((C.sf==C.of)) goto L_11ebc95b;
  /* 11ebc94f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebc952 mov byte ptr [ecx + 0x11ee4000], 0 */
  w8((uint32_t)(ECX + 0x11ee4000), (0x0u));
  /* 11ebc959 jmp 0x11ebc93d */
  goto L_11ebc93d;
L_11ebc95b:;
  /* 11ebc95b mov dword ptr [0x11ee3e64], 0 */
  w32((uint32_t)(0x11ee3e64), (0x0u));
  /* 11ebc965 mov dword ptr [0x11ee3eec], 0 */
  w32((uint32_t)(0x11ee3eec), (0x0u));
  /* 11ebc96f mov dword ptr [0x11ee4104], 0 */
  w32((uint32_t)(0x11ee4104), (0x0u));
  /* 11ebc979 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ebc980 jmp 0x11ebc98b */
  goto L_11ebc98b;
L_11ebc982:;
  /* 11ebc982 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebc985 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc988 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ebc98b:;
  /* 11ebc98b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc98f jge 0x11ebc9a0 */
  if ((C.sf==C.of)) goto L_11ebc9a0;
  /* 11ebc991 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebc994 mov word ptr [eax*2 + 0x11ee3ee0], 0 */
  w16((uint32_t)(EAX*2 + 0x11ee3ee0), (0x0u));
  /* 11ebc99e jmp 0x11ebc982 */
  goto L_11ebc982;
L_11ebc9a0:;
  /* 11ebc9a0 mov esp, ebp */
  ESP = (EBP);
  /* 11ebc9a2 pop ebp */
  EBP = (pop32());
  /* 11ebc9a3 ret  */
  ESPCHK(0x11ebc930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9b0 @ 0x11ebc9b0 (770 bytes, 175 insns) */
void f_11ebc9b0(void) {
  FTRACE(0x11ebc9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebc9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebc9b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebc9b3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebc9b9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11ebc9bf push eax */
  push32((uint32_t)(EAX));
  /* 11ebc9c0 mov ecx, dword ptr [0x11ee3e64] */
  ECX = (r32((uint32_t)(0x11ee3e64)));
  /* 11ebc9c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebc9c7 call dword ptr [0x11ee5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5330))), 0x11ebc9cdu);
  /* 11ebc9cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc9d0 jne 0x11ebcbe9 */
  if (!C.zf) goto L_11ebcbe9;
  /* 11ebc9d6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11ebc9e0 jmp 0x11ebc9f1 */
  goto L_11ebc9f1;
L_11ebc9e2:;
  /* 11ebc9e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebc9e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebc9eb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11ebc9f1:;
  /* 11ebc9f1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebc9fb jae 0x11ebca12 */
  if (!C.cf) goto L_11ebca12;
  /* 11ebc9fd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebca03 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11ebca09 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11ebca10 jmp 0x11ebc9e2 */
  goto L_11ebc9e2;
L_11ebca12:;
  /* 11ebca12 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11ebca19 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11ebca1f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ebca22 jmp 0x11ebca2d */
  goto L_11ebca2d;
L_11ebca24:;
  /* 11ebca24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebca27 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebca2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ebca2d:;
  /* 11ebca2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebca30 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebca32 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ebca34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebca36 je 0x11ebca78 */
  if (C.zf) goto L_11ebca78;
  /* 11ebca38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebca3b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebca3d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ebca3f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11ebca45 jmp 0x11ebca56 */
  goto L_11ebca56;
L_11ebca47:;
  /* 11ebca47 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebca4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebca50 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11ebca56:;
  /* 11ebca56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebca59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebca5b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ebca5e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebca64 ja 0x11ebca76 */
  if ((!C.cf&&!C.zf)) goto L_11ebca76;
  /* 11ebca66 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebca6c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11ebca74 jmp 0x11ebca47 */
  goto L_11ebca47;
L_11ebca76:;
  /* 11ebca76 jmp 0x11ebca24 */
  goto L_11ebca24;
L_11ebca78:;
  /* 11ebca78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebca7a mov eax, dword ptr [0x11ee4104] */
  EAX = (r32((uint32_t)(0x11ee4104)));
  /* 11ebca7f push eax */
  push32((uint32_t)(EAX));
  /* 11ebca80 mov ecx, dword ptr [0x11ee3e64] */
  ECX = (r32((uint32_t)(0x11ee3e64)));
  /* 11ebca86 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebca87 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11ebca8d push edx */
  push32((uint32_t)(EDX));
  /* 11ebca8e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ebca93 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11ebca99 push eax */
  push32((uint32_t)(EAX));
  /* 11ebca9a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ebca9c call 0x11ebe660 */
  push32(0x11ebcaa1u); f_11ebe660();
  /* 11ebcaa1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebcaa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebcaa6 mov ecx, dword ptr [0x11ee3e64] */
  ECX = (r32((uint32_t)(0x11ee3e64)));
  /* 11ebcaac push ecx */
  push32((uint32_t)(ECX));
  /* 11ebcaad push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ebcab2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11ebcab8 push edx */
  push32((uint32_t)(EDX));
  /* 11ebcab9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ebcabe lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11ebcac4 push eax */
  push32((uint32_t)(EAX));
  /* 11ebcac5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ebcaca mov ecx, dword ptr [0x11ee4104] */
  ECX = (r32((uint32_t)(0x11ee4104)));
  /* 11ebcad0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebcad1 call 0x11ebe820 */
  push32(0x11ebcad6u); f_11ebe820();
  /* 11ebcad6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebcad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebcadb mov edx, dword ptr [0x11ee3e64] */
  EDX = (r32((uint32_t)(0x11ee3e64)));
  /* 11ebcae1 push edx */
  push32((uint32_t)(EDX));
  /* 11ebcae2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ebcae7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11ebcaed push eax */
  push32((uint32_t)(EAX));
  /* 11ebcaee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ebcaf3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11ebcaf9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebcafa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11ebcaff mov edx, dword ptr [0x11ee4104] */
  EDX = (r32((uint32_t)(0x11ee4104)));
  /* 11ebcb05 push edx */
  push32((uint32_t)(EDX));
  /* 11ebcb06 call 0x11ebe820 */
  push32(0x11ebcb0bu); f_11ebe820();
  /* 11ebcb0b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebcb0e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11ebcb18 jmp 0x11ebcb29 */
  goto L_11ebcb29;
L_11ebcb1a:;
  /* 11ebcb1a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcb20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebcb23 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11ebcb29:;
  /* 11ebcb29 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcb33 jae 0x11ebcbe4 */
  if (!C.cf) goto L_11ebcbe4;
  /* 11ebcb39 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcb3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebcb41 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11ebcb49 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebcb4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebcb4e je 0x11ebcb86 */
  if (C.zf) goto L_11ebcb86;
  /* 11ebcb50 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcb56 mov cl, byte ptr [eax + 0x11ee4001] */
  CL = (r8((uint32_t)(EAX + 0x11ee4001)));
  /* 11ebcb5c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11ebcb5f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcb65 mov byte ptr [edx + 0x11ee4001], cl */
  w8((uint32_t)(EDX + 0x11ee4001), (CL));
  /* 11ebcb6b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcb71 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcb77 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11ebcb7e mov byte ptr [eax + 0x11ee3f00], dl */
  w8((uint32_t)(EAX + 0x11ee3f00), (DL));
  /* 11ebcb84 jmp 0x11ebcbdf */
  goto L_11ebcbdf;
L_11ebcb86:;
  /* 11ebcb86 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcb8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebcb8e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11ebcb96 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebcb99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebcb9b je 0x11ebcbd2 */
  if (C.zf) goto L_11ebcbd2;
  /* 11ebcb9d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcba3 mov al, byte ptr [edx + 0x11ee4001] */
  AL = (r8((uint32_t)(EDX + 0x11ee4001)));
  /* 11ebcba9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11ebcbab mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcbb1 mov byte ptr [ecx + 0x11ee4001], al */
  w8((uint32_t)(ECX + 0x11ee4001), (AL));
  /* 11ebcbb7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcbbd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcbc3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11ebcbca mov byte ptr [edx + 0x11ee3f00], cl */
  w8((uint32_t)(EDX + 0x11ee3f00), (CL));
  /* 11ebcbd0 jmp 0x11ebcbdf */
  goto L_11ebcbdf;
L_11ebcbd2:;
  /* 11ebcbd2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcbd8 mov byte ptr [edx + 0x11ee3f00], 0 */
  w8((uint32_t)(EDX + 0x11ee3f00), (0x0u));
L_11ebcbdf:;
  /* 11ebcbdf jmp 0x11ebcb1a */
  goto L_11ebcb1a;
L_11ebcbe4:;
  /* 11ebcbe4 jmp 0x11ebccae */
  goto L_11ebccae;
L_11ebcbe9:;
  /* 11ebcbe9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11ebcbf3 jmp 0x11ebcc04 */
  goto L_11ebcc04;
L_11ebcbf5:;
  /* 11ebcbf5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcbfb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebcbfe mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11ebcc04:;
  /* 11ebcc04 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcc0e jae 0x11ebccae */
  if (!C.cf) goto L_11ebccae;
  /* 11ebcc14 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcc1b jb 0x11ebcc58 */
  if (C.cf) goto L_11ebcc58;
  /* 11ebcc1d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcc24 ja 0x11ebcc58 */
  if ((!C.cf&&!C.zf)) goto L_11ebcc58;
  /* 11ebcc26 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcc2c mov dl, byte ptr [ecx + 0x11ee4001] */
  DL = (r8((uint32_t)(ECX + 0x11ee4001)));
  /* 11ebcc32 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11ebcc35 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcc3b mov byte ptr [eax + 0x11ee4001], dl */
  w8((uint32_t)(EAX + 0x11ee4001), (DL));
  /* 11ebcc41 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcc47 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebcc4a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcc50 mov byte ptr [edx + 0x11ee3f00], cl */
  w8((uint32_t)(EDX + 0x11ee3f00), (CL));
  /* 11ebcc56 jmp 0x11ebcca9 */
  goto L_11ebcca9;
L_11ebcc58:;
  /* 11ebcc58 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcc5f jb 0x11ebcc9c */
  if (C.cf) goto L_11ebcc9c;
  /* 11ebcc61 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcc68 ja 0x11ebcc9c */
  if ((!C.cf&&!C.zf)) goto L_11ebcc9c;
  /* 11ebcc6a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcc70 mov cl, byte ptr [eax + 0x11ee4001] */
  CL = (r8((uint32_t)(EAX + 0x11ee4001)));
  /* 11ebcc76 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11ebcc79 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcc7f mov byte ptr [edx + 0x11ee4001], cl */
  w8((uint32_t)(EDX + 0x11ee4001), (CL));
  /* 11ebcc85 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcc8b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebcc8e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcc94 mov byte ptr [ecx + 0x11ee3f00], al */
  w8((uint32_t)(ECX + 0x11ee3f00), (AL));
  /* 11ebcc9a jmp 0x11ebcca9 */
  goto L_11ebcca9;
L_11ebcc9c:;
  /* 11ebcc9c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ebcca2 mov byte ptr [edx + 0x11ee3f00], 0 */
  w8((uint32_t)(EDX + 0x11ee3f00), (0x0u));
L_11ebcca9:;
  /* 11ebcca9 jmp 0x11ebcbf5 */
  goto L_11ebcbf5;
L_11ebccae:;
  /* 11ebccae mov esp, ebp */
  ESP = (EBP);
  /* 11ebccb0 pop ebp */
  EBP = (pop32());
  /* 11ebccb1 ret  */
  ESPCHK(0x11ebc9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccc0 @ 0x11ebccc0 (23 bytes, 9 insns) */
void f_11ebccc0(void) {
  FTRACE(0x11ebccc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebccc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebccc1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebccc3 cmp dword ptr [0x11ee3eec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee3eec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebccca je 0x11ebccd3 */
  if (C.zf) goto L_11ebccd3;
  /* 11ebcccc mov eax, dword ptr [0x11ee3e64] */
  EAX = (r32((uint32_t)(0x11ee3e64)));
  /* 11ebccd1 jmp 0x11ebccd5 */
  goto L_11ebccd5;
L_11ebccd3:;
  /* 11ebccd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ebccd5:;
  /* 11ebccd5 pop ebp */
  EBP = (pop32());
  /* 11ebccd6 ret  */
  ESPCHK(0x11ebccc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cce0 @ 0x11ebcce0 (34 bytes, 10 insns) */
void f_11ebcce0(void) {
  FTRACE(0x11ebcce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebcce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebcce1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebcce3 cmp dword ptr [0x11ee42b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee42b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebccea jne 0x11ebcd00 */
  if (!C.zf) goto L_11ebcd00;
  /* 11ebccec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11ebccee call 0x11ebc500 */
  push32(0x11ebccf3u); f_11ebc500();
  /* 11ebccf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebccf6 mov dword ptr [0x11ee42b0], 1 */
  w32((uint32_t)(0x11ee42b0), (0x1u));
L_11ebcd00:;
  /* 11ebcd00 pop ebp */
  EBP = (pop32());
  /* 11ebcd01 ret  */
  ESPCHK(0x11ebcce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd10 @ 0x11ebcd10 (664 bytes, 267 insns) [15 switch table(s)] */
void f_11ebcd10(void) {
  FTRACE(0x11ebcd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebcd10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebcd11 mov ebp, esp */
  EBP = (ESP);
  /* 11ebcd13 push edi */
  push32((uint32_t)(EDI));
  /* 11ebcd14 push esi */
  push32((uint32_t)(ESI));
  /* 11ebcd15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebcd18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebcd1b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebcd1e mov eax, ecx */
  EAX = (ECX);
  /* 11ebcd20 mov edx, ecx */
  EDX = (ECX);
  /* 11ebcd22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebcd24 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcd26 jbe 0x11ebcd30 */
  if ((C.cf||C.zf)) goto L_11ebcd30;
  /* 11ebcd28 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcd2a jb 0x11ebcea8 */
  if (C.cf) goto L_11ebcea8;
L_11ebcd30:;
  /* 11ebcd30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ebcd36 jne 0x11ebcd4c */
  if (!C.zf) goto L_11ebcd4c;
  /* 11ebcd38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebcd3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebcd3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcd41 jb 0x11ebcd6c */
  if (C.cf) goto L_11ebcd6c;
  /* 11ebcd43 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebcd45 jmp dword ptr [edx*4 + 0x11ebce58] */
  switch (EDX) {
    case 0: goto L_11ebce68;
    case 1: goto L_11ebce70;
    case 2: goto L_11ebce7c;
    case 3: goto L_11ebce90;
    default: x86_unimpl("switch@0x11ebcd45 out of table"); return;
  }
L_11ebcd4c:;
  /* 11ebcd4c mov eax, edi */
  EAX = (EDI);
  /* 11ebcd4e mov edx, 3 */
  EDX = (0x3u);
  /* 11ebcd53 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebcd56 jb 0x11ebcd64 */
  if (C.cf) goto L_11ebcd64;
  /* 11ebcd58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebcd5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebcd5d jmp dword ptr [eax*4 + 0x11ebcd70] */
  switch (EAX) {
    case 1: goto L_11ebcd80;
    case 2: goto L_11ebcdac;
    case 3: goto L_11ebcdd0;
    default: x86_unimpl("switch@0x11ebcd5d out of table"); return;
  }
L_11ebcd64:;
  /* 11ebcd64 jmp dword ptr [ecx*4 + 0x11ebce68] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11ebce68)))); return;
  /* 11ebcd6b nop  */
  /* nop */
L_11ebcd6c:;
  /* 11ebcd6c jmp dword ptr [ecx*4 + 0x11ebcdec] */
  switch (ECX) {
    case 0: goto L_11ebce4f;
    case 1: goto L_11ebce3c;
    case 2: goto L_11ebce34;
    case 3: goto L_11ebce2c;
    case 4: goto L_11ebce24;
    case 5: goto L_11ebce1c;
    case 6: goto L_11ebce14;
    case 7: goto L_11ebce0c;
    default: x86_unimpl("switch@0x11ebcd6c out of table"); return;
  }
  /* 11ebcd73 nop  */
  /* nop */
L_11ebcd80:;
  /* 11ebcd80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebcd82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ebcd84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ebcd86 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ebcd89 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ebcd8c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ebcd8f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebcd92 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ebcd95 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebcd98 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebcd9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcd9e jb 0x11ebcd6c */
  if (C.cf) goto L_11ebcd6c;
  /* 11ebcda0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebcda2 jmp dword ptr [edx*4 + 0x11ebce58] */
  switch (EDX) {
    case 0: goto L_11ebce68;
    case 1: goto L_11ebce70;
    case 2: goto L_11ebce7c;
    case 3: goto L_11ebce90;
    default: x86_unimpl("switch@0x11ebcda2 out of table"); return;
  }
  /* 11ebcda9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ebcdac:;
  /* 11ebcdac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebcdae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ebcdb0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ebcdb2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ebcdb5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebcdb8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ebcdbb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebcdbe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebcdc1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcdc4 jb 0x11ebcd6c */
  if (C.cf) goto L_11ebcd6c;
  /* 11ebcdc6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebcdc8 jmp dword ptr [edx*4 + 0x11ebce58] */
  switch (EDX) {
    case 0: goto L_11ebce68;
    case 1: goto L_11ebce70;
    case 2: goto L_11ebce7c;
    case 3: goto L_11ebce90;
    default: x86_unimpl("switch@0x11ebcdc8 out of table"); return;
  }
  /* 11ebcdcf nop  */
  /* nop */
L_11ebcdd0:;
  /* 11ebcdd0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebcdd2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ebcdd4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ebcdd6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ebcdd7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebcdda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ebcddb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcdde jb 0x11ebcd6c */
  if (C.cf) goto L_11ebcd6c;
  /* 11ebcde0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebcde2 jmp dword ptr [edx*4 + 0x11ebce58] */
  switch (EDX) {
    case 0: goto L_11ebce68;
    case 1: goto L_11ebce70;
    case 2: goto L_11ebce7c;
    case 3: goto L_11ebce90;
    default: x86_unimpl("switch@0x11ebcde2 out of table"); return;
  }
  /* 11ebcde9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ebce0c:;
  /* 11ebce0c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11ebce10 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11ebce14:;
  /* 11ebce14 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11ebce18 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11ebce1c:;
  /* 11ebce1c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11ebce20 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11ebce24:;
  /* 11ebce24 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11ebce28 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11ebce2c:;
  /* 11ebce2c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11ebce30 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11ebce34:;
  /* 11ebce34 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11ebce38 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11ebce3c:;
  /* 11ebce3c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11ebce40 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11ebce44 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ebce4b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebce4d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ebce4f:;
  /* 11ebce4f jmp dword ptr [edx*4 + 0x11ebce58] */
  switch (EDX) {
    case 0: goto L_11ebce68;
    case 1: goto L_11ebce70;
    case 2: goto L_11ebce7c;
    case 3: goto L_11ebce90;
    default: x86_unimpl("switch@0x11ebce4f out of table"); return;
  }
  /* 11ebce56 mov edi, edi */
  EDI = (EDI);
L_11ebce68:;
  /* 11ebce68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebce6b pop esi */
  ESI = (pop32());
  /* 11ebce6c pop edi */
  EDI = (pop32());
  /* 11ebce6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebce6e ret  */
  ESPCHK(0x11ebcd10u, _esp0);
  ESP += 4; return;
  /* 11ebce6f nop  */
  /* nop */
L_11ebce70:;
  /* 11ebce70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ebce72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ebce74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebce77 pop esi */
  ESI = (pop32());
  /* 11ebce78 pop edi */
  EDI = (pop32());
  /* 11ebce79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebce7a ret  */
  ESPCHK(0x11ebcd10u, _esp0);
  ESP += 4; return;
  /* 11ebce7b nop  */
  /* nop */
L_11ebce7c:;
  /* 11ebce7c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ebce7e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ebce80 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ebce83 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ebce86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebce89 pop esi */
  ESI = (pop32());
  /* 11ebce8a pop edi */
  EDI = (pop32());
  /* 11ebce8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebce8c ret  */
  ESPCHK(0x11ebcd10u, _esp0);
  ESP += 4; return;
  /* 11ebce8d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ebce90:;
  /* 11ebce90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ebce92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ebce94 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ebce97 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ebce9a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ebce9d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ebcea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebcea3 pop esi */
  ESI = (pop32());
  /* 11ebcea4 pop edi */
  EDI = (pop32());
  /* 11ebcea5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebcea6 ret  */
  ESPCHK(0x11ebcd10u, _esp0);
  ESP += 4; return;
  /* 11ebcea7 nop  */
  /* nop */
L_11ebcea8:;
  /* 11ebcea8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11ebceac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11ebceb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ebceb6 jne 0x11ebcedc */
  if (!C.zf) goto L_11ebcedc;
  /* 11ebceb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebcebb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebcebe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcec1 jb 0x11ebced0 */
  if (C.cf) goto L_11ebced0;
  /* 11ebcec3 std  */
  C.df=1;
  /* 11ebcec4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebcec6 cld  */
  C.df=0;
  /* 11ebcec7 jmp dword ptr [edx*4 + 0x11ebcff0] */
  switch (EDX) {
    case 0: goto L_11ebd000;
    case 1: goto L_11ebd008;
    case 2: goto L_11ebd018;
    case 3: goto L_11ebd02c;
    default: x86_unimpl("switch@0x11ebcec7 out of table"); return;
  }
  /* 11ebcece mov edi, edi */
  EDI = (EDI);
L_11ebced0:;
  /* 11ebced0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ebced2 jmp dword ptr [ecx*4 + 0x11ebcfa0] */
  switch (ECX) {
    case 0: goto L_11ebcfe7;
    default: x86_unimpl("switch@0x11ebced2 out of table"); return;
  }
  /* 11ebced9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ebcedc:;
  /* 11ebcedc mov eax, edi */
  EAX = (EDI);
  /* 11ebcede mov edx, 3 */
  EDX = (0x3u);
  /* 11ebcee3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcee6 jb 0x11ebcef4 */
  if (C.cf) goto L_11ebcef4;
  /* 11ebcee8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebceeb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebceed jmp dword ptr [eax*4 + 0x11ebcef8] */
  switch (EAX) {
    case 1: goto L_11ebcf08;
    case 2: goto L_11ebcf28;
    case 3: goto L_11ebcf50;
    default: x86_unimpl("switch@0x11ebceed out of table"); return;
  }
L_11ebcef4:;
  /* 11ebcef4 jmp dword ptr [ecx*4 + 0x11ebcff0] */
  switch (ECX) {
    case 0: goto L_11ebd000;
    case 1: goto L_11ebd008;
    case 2: goto L_11ebd018;
    case 3: goto L_11ebd02c;
    default: x86_unimpl("switch@0x11ebcef4 out of table"); return;
  }
  /* 11ebcefb nop  */
  /* nop */
L_11ebcf08:;
  /* 11ebcf08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ebcf0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebcf0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ebcf10 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ebcf11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebcf14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11ebcf15 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcf18 jb 0x11ebced0 */
  if (C.cf) goto L_11ebced0;
  /* 11ebcf1a std  */
  C.df=1;
  /* 11ebcf1b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebcf1d cld  */
  C.df=0;
  /* 11ebcf1e jmp dword ptr [edx*4 + 0x11ebcff0] */
  switch (EDX) {
    case 0: goto L_11ebd000;
    case 1: goto L_11ebd008;
    case 2: goto L_11ebd018;
    case 3: goto L_11ebd02c;
    default: x86_unimpl("switch@0x11ebcf1e out of table"); return;
  }
  /* 11ebcf25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ebcf28:;
  /* 11ebcf28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ebcf2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebcf2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ebcf30 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ebcf33 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebcf36 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ebcf39 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebcf3c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebcf3f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcf42 jb 0x11ebced0 */
  if (C.cf) goto L_11ebced0;
  /* 11ebcf44 std  */
  C.df=1;
  /* 11ebcf45 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebcf47 cld  */
  C.df=0;
  /* 11ebcf48 jmp dword ptr [edx*4 + 0x11ebcff0] */
  switch (EDX) {
    case 0: goto L_11ebd000;
    case 1: goto L_11ebd008;
    case 2: goto L_11ebd018;
    case 3: goto L_11ebd02c;
    default: x86_unimpl("switch@0x11ebcf48 out of table"); return;
  }
  /* 11ebcf4f nop  */
  /* nop */
L_11ebcf50:;
  /* 11ebcf50 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ebcf53 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebcf55 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ebcf58 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ebcf5b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ebcf5e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ebcf61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebcf64 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ebcf67 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebcf6a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebcf6d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebcf70 jb 0x11ebced0 */
  if (C.cf) goto L_11ebced0;
  /* 11ebcf76 std  */
  C.df=1;
  /* 11ebcf77 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebcf79 cld  */
  C.df=0;
  /* 11ebcf7a jmp dword ptr [edx*4 + 0x11ebcff0] */
  switch (EDX) {
    case 0: goto L_11ebd000;
    case 1: goto L_11ebd008;
    case 2: goto L_11ebd018;
    case 3: goto L_11ebd02c;
    default: x86_unimpl("switch@0x11ebcf7a out of table"); return;
  }
  /* 11ebcf81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11ebcf84 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11ebcf85 iretd  */
  x86_unimpl("iretd @ 0x11ebcf85");
  /* 11ebcf86 jmp 0x11ebcf99 */
  goto L_11ebcf99;
  /* 11ebcf88 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 11ebcf89 iretd  */
  x86_unimpl("iretd @ 0x11ebcf89");
  /* 11ebcf8a jmp 0x11ebcf9d */
  goto L_11ebcf9d;
  /* 11ebcf8c mov ah, 0xcf */
  AH = (0xcfu);
  /* 11ebcf8e jmp 0x11ebcfa1 */
  goto L_11ebcfa1;
  /* 11ebcf90 mov esp, 0xc411ebcf */
  ESP = (0xc411ebcfu);
  /* 11ebcf95 iretd  */
  x86_unimpl("iretd @ 0x11ebcf95");
  /* 11ebcf96 jmp 0x11ebcfa9 */
  goto L_11ebcfa9;
  /* 11ebcf98 int3  */
  x86_unimpl("int3 @ 0x11ebcf98");
L_11ebcf99:;
  /* 11ebcf99 iretd  */
  x86_unimpl("iretd @ 0x11ebcf99");
  /* 11ebcf9a jmp 0x11ebcfad */
  goto L_11ebcfad;
  /* 11ebcf9c aam 0xcf */
  x86_unimpl("aam @ 0x11ebcf9c");
  /* 11ebcf9e jmp 0x11ebcfb1 */
  goto L_11ebcfb1;
  /* 11ebcfa4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11ebcfa8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11ebcfac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11ebcfb0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11ebcfb4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11ebcfb8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11ebcfbc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11ebcfc0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11ebcfc4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11ebcfc8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11ebcfcc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11ebcfd0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11ebcfd4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11ebcfd8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11ebcfdc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ebcfe3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebcfe5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ebcfe7:;
  /* 11ebcfe7 jmp dword ptr [edx*4 + 0x11ebcff0] */
  switch (EDX) {
    case 0: goto L_11ebd000;
    case 1: goto L_11ebd008;
    case 2: goto L_11ebd018;
    case 3: goto L_11ebd02c;
    default: x86_unimpl("switch@0x11ebcfe7 out of table"); return;
  }
  /* 11ebcfee mov edi, edi */
  EDI = (EDI);
L_11ebd000:;
  /* 11ebd000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebd003 pop esi */
  ESI = (pop32());
  /* 11ebd004 pop edi */
  EDI = (pop32());
  /* 11ebd005 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebd006 ret  */
  ESPCHK(0x11ebcd10u, _esp0);
  ESP += 4; return;
  /* 11ebd007 nop  */
  /* nop */
L_11ebd008:;
  /* 11ebd008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ebd00b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ebd00e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebd011 pop esi */
  ESI = (pop32());
  /* 11ebd012 pop edi */
  EDI = (pop32());
  /* 11ebd013 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebd014 ret  */
  ESPCHK(0x11ebcd10u, _esp0);
  ESP += 4; return;
  /* 11ebd015 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ebd018:;
  /* 11ebd018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ebd01b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ebd01e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ebd021 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ebd024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebd027 pop esi */
  ESI = (pop32());
  /* 11ebd028 pop edi */
  EDI = (pop32());
  /* 11ebd029 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebd02a ret  */
  ESPCHK(0x11ebcd10u, _esp0);
  ESP += 4; return;
  /* 11ebd02b nop  */
  /* nop */
L_11ebd02c:;
  /* 11ebd02c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ebd02f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ebd032 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ebd035 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ebd038 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ebd03b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ebd03e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebd041 pop esi */
  ESI = (pop32());
  /* 11ebd042 pop edi */
  EDI = (pop32());
  /* 11ebd043 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebd044 ret  */
  ESPCHK(0x11ebcd10u, _esp0);
  ESP += 4; return;
L_11ebcf9d: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11ebcf9d (unresolved jump table)"); return;
L_11ebcfa1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11ebcfa1 (unresolved jump table)"); return;
L_11ebcfa9: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11ebcfa9 (unresolved jump table)"); return;
L_11ebcfad: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11ebcfad (unresolved jump table)"); return;
L_11ebcfb1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11ebcfb1 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x11ebd050 (104 bytes, 43 insns) */
void f_11ebd050(void) {
  FTRACE(0x11ebd050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebd050 push ebx */
  push32((uint32_t)(EBX));
  /* 11ebd051 push esi */
  push32((uint32_t)(ESI));
  /* 11ebd052 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11ebd056 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd058 jne 0x11ebd072 */
  if (!C.zf) goto L_11ebd072;
  /* 11ebd05a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11ebd05e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ebd062 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebd064 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ebd066 mov ebx, eax */
  EBX = (EAX);
  /* 11ebd068 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ebd06c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ebd06e mov edx, ebx */
  EDX = (EBX);
  /* 11ebd070 jmp 0x11ebd0b3 */
  goto L_11ebd0b3;
L_11ebd072:;
  /* 11ebd072 mov ecx, eax */
  ECX = (EAX);
  /* 11ebd074 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11ebd078 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ebd07c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11ebd080:;
  /* 11ebd080 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ebd082 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11ebd084 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ebd086 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11ebd088 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebd08a jne 0x11ebd080 */
  if (!C.zf) goto L_11ebd080;
  /* 11ebd08c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ebd08e mov esi, eax */
  ESI = (EAX);
  /* 11ebd090 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11ebd094 mov ecx, eax */
  ECX = (EAX);
  /* 11ebd096 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11ebd09a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11ebd09c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd09e jb 0x11ebd0ae */
  if (C.cf) goto L_11ebd0ae;
  /* 11ebd0a0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd0a4 ja 0x11ebd0ae */
  if ((!C.cf&&!C.zf)) goto L_11ebd0ae;
  /* 11ebd0a6 jb 0x11ebd0af */
  if (C.cf) goto L_11ebd0af;
  /* 11ebd0a8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd0ac jbe 0x11ebd0af */
  if ((C.cf||C.zf)) goto L_11ebd0af;
L_11ebd0ae:;
  /* 11ebd0ae dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11ebd0af:;
  /* 11ebd0af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebd0b1 mov eax, esi */
  EAX = (ESI);
L_11ebd0b3:;
  /* 11ebd0b3 pop esi */
  ESI = (pop32());
  /* 11ebd0b4 pop ebx */
  EBX = (pop32());
  /* 11ebd0b5 ret 0x10 */
  ESPCHK(0x11ebd050u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11ebd0c0 (117 bytes, 44 insns) */
void f_11ebd0c0(void) {
  FTRACE(0x11ebd0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebd0c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11ebd0c1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11ebd0c5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd0c7 jne 0x11ebd0e1 */
  if (!C.zf) goto L_11ebd0e1;
  /* 11ebd0c9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ebd0cd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ebd0d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebd0d3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ebd0d5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ebd0d9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ebd0db mov eax, edx */
  EAX = (EDX);
  /* 11ebd0dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebd0df jmp 0x11ebd131 */
  goto L_11ebd131;
L_11ebd0e1:;
  /* 11ebd0e1 mov ecx, eax */
  ECX = (EAX);
  /* 11ebd0e3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ebd0e7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ebd0eb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11ebd0ef:;
  /* 11ebd0ef shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ebd0f1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11ebd0f3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ebd0f5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11ebd0f7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebd0f9 jne 0x11ebd0ef */
  if (!C.zf) goto L_11ebd0ef;
  /* 11ebd0fb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ebd0fd mov ecx, eax */
  ECX = (EAX);
  /* 11ebd0ff mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11ebd103 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11ebd104 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11ebd108 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd10a jb 0x11ebd11a */
  if (C.cf) goto L_11ebd11a;
  /* 11ebd10c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd110 ja 0x11ebd11a */
  if ((!C.cf&&!C.zf)) goto L_11ebd11a;
  /* 11ebd112 jb 0x11ebd122 */
  if (C.cf) goto L_11ebd122;
  /* 11ebd114 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd118 jbe 0x11ebd122 */
  if ((C.cf||C.zf)) goto L_11ebd122;
L_11ebd11a:;
  /* 11ebd11a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd11e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11ebd122:;
  /* 11ebd122 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd126 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd12a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ebd12c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ebd12e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11ebd131:;
  /* 11ebd131 pop ebx */
  EBX = (pop32());
  /* 11ebd132 ret 0x10 */
  ESPCHK(0x11ebd0c0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000d140 @ 0x11ebd140 (628 bytes, 214 insns) */
void f_11ebd140(void) {
  FTRACE(0x11ebd140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebd140 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebd141 mov ebp, esp */
  EBP = (ESP);
  /* 11ebd143 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd146 push ebx */
  push32((uint32_t)(EBX));
  /* 11ebd147 push esi */
  push32((uint32_t)(ESI));
  /* 11ebd148 push edi */
  push32((uint32_t)(EDI));
L_11ebd149:;
  /* 11ebd149 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd14d jne 0x11ebd16d */
  if (!C.zf) goto L_11ebd16d;
  /* 11ebd14f push 0x11ede274 */
  push32((uint32_t)(0x11ede274u));
  /* 11ebd154 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebd156 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11ebd158 push 0x11ede268 */
  push32((uint32_t)(0x11ede268u));
  /* 11ebd15d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebd15f call 0x11eb54f0 */
  push32(0x11ebd164u); f_11eb54f0();
  /* 11ebd164 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd167 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd16a jne 0x11ebd16d */
  if (!C.zf) goto L_11ebd16d;
  /* 11ebd16c int3  */
  x86_unimpl("int3 @ 0x11ebd16c");
L_11ebd16d:;
  /* 11ebd16d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd16f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebd171 jne 0x11ebd149 */
  if (!C.zf) goto L_11ebd149;
  /* 11ebd173 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebd176 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ebd179 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd17c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ebd17f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ebd182 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd185 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ebd188 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebd18e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebd190 je 0x11ebd19f */
  if (C.zf) goto L_11ebd19f;
  /* 11ebd192 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd195 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ebd198 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebd19b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebd19d je 0x11ebd1b5 */
  if (C.zf) goto L_11ebd1b5;
L_11ebd19f:;
  /* 11ebd19f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd1a2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ebd1a5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11ebd1a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd1aa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11ebd1ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd1b0 jmp 0x11ebd3ad */
  goto L_11ebd3ad;
L_11ebd1b5:;
  /* 11ebd1b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd1b8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ebd1bb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd1be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebd1c0 je 0x11ebd20c */
  if (C.zf) goto L_11ebd20c;
  /* 11ebd1c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd1c5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ebd1cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd1cf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ebd1d2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd1d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebd1d7 je 0x11ebd1f5 */
  if (C.zf) goto L_11ebd1f5;
  /* 11ebd1d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd1dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd1df mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ebd1e2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ebd1e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd1e7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ebd1ea and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebd1ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd1f0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11ebd1f3 jmp 0x11ebd20c */
  goto L_11ebd20c;
L_11ebd1f5:;
  /* 11ebd1f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd1f8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ebd1fb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebd1fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd201 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11ebd204 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd207 jmp 0x11ebd3ad */
  goto L_11ebd3ad;
L_11ebd20c:;
  /* 11ebd20c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd20f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ebd212 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebd215 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd218 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11ebd21b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd21e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ebd221 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebd224 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd227 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11ebd22a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd22d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ebd234 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ebd23b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd23e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ebd241 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd244 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ebd247 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebd24d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebd24f jne 0x11ebd27f */
  if (!C.zf) goto L_11ebd27f;
  /* 11ebd251 cmp dword ptr [ebp - 8], 0x11ee1140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11ee1140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd258 je 0x11ebd263 */
  if (C.zf) goto L_11ebd263;
  /* 11ebd25a cmp dword ptr [ebp - 8], 0x11ee1160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11ee1160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd261 jne 0x11ebd273 */
  if (!C.zf) goto L_11ebd273;
L_11ebd263:;
  /* 11ebd263 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebd266 push edx */
  push32((uint32_t)(EDX));
  /* 11ebd267 call 0x11ebf0b0 */
  push32(0x11ebd26cu); f_11ebf0b0();
  /* 11ebd26c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd26f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebd271 jne 0x11ebd27f */
  if (!C.zf) goto L_11ebd27f;
L_11ebd273:;
  /* 11ebd273 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd276 push eax */
  push32((uint32_t)(EAX));
  /* 11ebd277 call 0x11ebefe0 */
  push32(0x11ebd27cu); f_11ebefe0();
  /* 11ebd27c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebd27f:;
  /* 11ebd27f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd282 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ebd285 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebd28b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebd28d je 0x11ebd36b */
  if (C.zf) goto L_11ebd36b;
L_11ebd293:;
  /* 11ebd293 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd296 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd299 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11ebd29b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd29e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebd2a0 jge 0x11ebd2c3 */
  if ((C.sf==C.of)) goto L_11ebd2c3;
  /* 11ebd2a2 push 0x11ede228 */
  push32((uint32_t)(0x11ede228u));
  /* 11ebd2a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebd2a9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11ebd2ae push 0x11ede268 */
  push32((uint32_t)(0x11ede268u));
  /* 11ebd2b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebd2b5 call 0x11eb54f0 */
  push32(0x11ebd2bau); f_11eb54f0();
  /* 11ebd2ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd2bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd2c0 jne 0x11ebd2c3 */
  if (!C.zf) goto L_11ebd2c3;
  /* 11ebd2c2 int3  */
  x86_unimpl("int3 @ 0x11ebd2c2");
L_11ebd2c3:;
  /* 11ebd2c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd2c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebd2c7 jne 0x11ebd293 */
  if (!C.zf) goto L_11ebd293;
  /* 11ebd2c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd2cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd2cf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ebd2d1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd2d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebd2d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd2da mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ebd2dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd2e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd2e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ebd2e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd2e8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ebd2eb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd2ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd2f1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ebd2f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd2f8 jle 0x11ebd316 */
  if ((C.zf||C.sf!=C.of)) goto L_11ebd316;
  /* 11ebd2fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd2fd push ecx */
  push32((uint32_t)(ECX));
  /* 11ebd2fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd301 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ebd304 push eax */
  push32((uint32_t)(EAX));
  /* 11ebd305 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebd308 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebd309 call 0x11ebecd0 */
  push32(0x11ebd30eu); f_11ebecd0();
  /* 11ebd30e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd311 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ebd314 jmp 0x11ebd35e */
  goto L_11ebd35e;
L_11ebd316:;
  /* 11ebd316 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd31a je 0x11ebd339 */
  if (C.zf) goto L_11ebd339;
  /* 11ebd31c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebd31f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11ebd322 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebd325 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd328 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebd32b mov ecx, dword ptr [edx*4 + 0x11ee4160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11ee4160)));
  /* 11ebd332 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd334 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ebd337 jmp 0x11ebd340 */
  goto L_11ebd340;
L_11ebd339:;
  /* 11ebd339 mov dword ptr [ebp - 0x14], 0x11ee0a60 */
  w32((uint32_t)(EBP + -0x14), (0x11ee0a60u));
L_11ebd340:;
  /* 11ebd340 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ebd343 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11ebd347 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd34a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebd34c je 0x11ebd35e */
  if (C.zf) goto L_11ebd35e;
  /* 11ebd34e push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebd350 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebd352 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebd355 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebd356 call 0x11ebeb80 */
  push32(0x11ebd35bu); f_11ebeb80();
  /* 11ebd35b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebd35e:;
  /* 11ebd35e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd361 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ebd364 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ebd367 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11ebd369 jmp 0x11ebd389 */
  goto L_11ebd389;
L_11ebd36b:;
  /* 11ebd36b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ebd372 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd375 push edx */
  push32((uint32_t)(EDX));
  /* 11ebd376 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11ebd379 push eax */
  push32((uint32_t)(EAX));
  /* 11ebd37a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebd37d push ecx */
  push32((uint32_t)(ECX));
  /* 11ebd37e call 0x11ebecd0 */
  push32(0x11ebd383u); f_11ebecd0();
  /* 11ebd383 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd386 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ebd389:;
  /* 11ebd389 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebd38c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd38f je 0x11ebd3a5 */
  if (C.zf) goto L_11ebd3a5;
  /* 11ebd391 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd394 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ebd397 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebd39a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd39d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11ebd3a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd3a3 jmp 0x11ebd3ad */
  goto L_11ebd3ad;
L_11ebd3a5:;
  /* 11ebd3a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebd3a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11ebd3ad:;
  /* 11ebd3ad pop edi */
  EDI = (pop32());
  /* 11ebd3ae pop esi */
  ESI = (pop32());
  /* 11ebd3af pop ebx */
  EBX = (pop32());
  /* 11ebd3b0 mov esp, ebp */
  ESP = (EBP);
  /* 11ebd3b2 pop ebp */
  EBP = (pop32());
  /* 11ebd3b3 ret  */
  ESPCHK(0x11ebd140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c0 @ 0x11ebd3c0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11ebd3c0(void) {
  FTRACE(0x11ebd3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebd3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebd3c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebd3c3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd3c9 push ebx */
  push32((uint32_t)(EBX));
  /* 11ebd3ca push esi */
  push32((uint32_t)(ESI));
  /* 11ebd3cb push edi */
  push32((uint32_t)(EDI));
  /* 11ebd3cc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ebd3d3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11ebd3dd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11ebd3e4:;
  /* 11ebd3e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebd3e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ebd3e9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11ebd3ec movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebd3f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebd3f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd3f6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11ebd3f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebd3fb je 0x11ebdfd7 */
  if (C.zf) goto L_11ebdfd7;
  /* 11ebd401 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd408 jl 0x11ebdfd7 */
  if ((C.sf!=C.of)) goto L_11ebdfd7;
  /* 11ebd40e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebd412 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd415 jl 0x11ebd436 */
  if ((C.sf!=C.of)) goto L_11ebd436;
  /* 11ebd417 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebd41b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd41e jg 0x11ebd436 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ebd436;
  /* 11ebd420 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebd424 movsx ecx, byte ptr [eax + 0x11ede260] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11ede260))));
  /* 11ebd42b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebd42e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11ebd434 jmp 0x11ebd440 */
  goto L_11ebd440;
L_11ebd436:;
  /* 11ebd436 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11ebd440:;
  /* 11ebd440 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11ebd446 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ebd449 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebd44c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebd44f movsx edx, byte ptr [ecx + eax*8 + 0x11ede280] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11ede280))));
  /* 11ebd457 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ebd45a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ebd45d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebd460 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11ebd466 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd46d ja 0x11ebdfd2 */
  if ((!C.cf&&!C.zf)) goto L_11ebdfd2;
  /* 11ebd473 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11ebd479 jmp dword ptr [ecx*4 + 0x11ebdfe4] */
  switch (ECX) {
    case 0: goto L_11ebd480;
    case 1: goto L_11ebd51a;
    case 2: goto L_11ebd55c;
    case 3: goto L_11ebd5cb;
    case 4: goto L_11ebd623;
    case 5: goto L_11ebd632;
    case 6: goto L_11ebd67e;
    case 7: goto L_11ebd711;
    case 8: goto L_11ebd5a8;
    case 9: goto L_11ebd5b3;
    case 10: goto L_11ebd59e;
    case 11: goto L_11ebd593;
    case 12: goto L_11ebd5be;
    case 13: goto L_11ebd5c6;
    default: x86_unimpl("switch@0x11ebd479 out of table"); return;
  }
L_11ebd480:;
  /* 11ebd480 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ebd487 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebd48a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebd490 mov eax, dword ptr [0x11ee0c98] */
  EAX = (r32((uint32_t)(0x11ee0c98)));
  /* 11ebd495 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebd497 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ebd49b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebd4a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebd4a3 je 0x11ebd4fd */
  if (C.zf) goto L_11ebd4fd;
  /* 11ebd4a5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 11ebd4ab push edx */
  push32((uint32_t)(EDX));
  /* 11ebd4ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebd4af push eax */
  push32((uint32_t)(EAX));
  /* 11ebd4b0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebd4b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebd4b5 call 0x11ebe0f0 */
  push32(0x11ebd4bau); f_11ebe0f0();
  /* 11ebd4ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd4bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebd4c0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ebd4c2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11ebd4c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebd4c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd4cb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11ebd4ce:;
  /* 11ebd4ce movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebd4d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebd4d4 jne 0x11ebd4f7 */
  if (!C.zf) goto L_11ebd4f7;
  /* 11ebd4d6 push 0x11ede300 */
  push32((uint32_t)(0x11ede300u));
  /* 11ebd4db push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebd4dd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11ebd4e2 push 0x11ede2f4 */
  push32((uint32_t)(0x11ede2f4u));
  /* 11ebd4e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebd4e9 call 0x11eb54f0 */
  push32(0x11ebd4eeu); f_11eb54f0();
  /* 11ebd4ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd4f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd4f4 jne 0x11ebd4f7 */
  if (!C.zf) goto L_11ebd4f7;
  /* 11ebd4f6 int3  */
  x86_unimpl("int3 @ 0x11ebd4f6");
L_11ebd4f7:;
  /* 11ebd4f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd4f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebd4fb jne 0x11ebd4ce */
  if (!C.zf) goto L_11ebd4ce;
L_11ebd4fd:;
  /* 11ebd4fd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11ebd503 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebd504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebd507 push edx */
  push32((uint32_t)(EDX));
  /* 11ebd508 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebd50c push eax */
  push32((uint32_t)(EAX));
  /* 11ebd50d call 0x11ebe0f0 */
  push32(0x11ebd512u); f_11ebe0f0();
  /* 11ebd512 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd515 jmp 0x11ebdfd2 */
  goto L_11ebdfd2;
L_11ebd51a:;
  /* 11ebd51a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ebd521 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebd524 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 11ebd52a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11ebd530 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11ebd536 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 11ebd53c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ebd53f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ebd546 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11ebd550 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ebd557 jmp 0x11ebdfd2 */
  goto L_11ebdfd2;
L_11ebd55c:;
  /* 11ebd55c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebd560 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11ebd566 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 11ebd56c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd56f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11ebd575 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd57c ja 0x11ebd5c6 */
  if ((!C.cf&&!C.zf)) goto L_11ebd5c6;
  /* 11ebd57e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11ebd584 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd586 mov al, byte ptr [ecx + 0x11ebe01c] */
  AL = (r8((uint32_t)(ECX + 0x11ebe01c)));
  /* 11ebd58c jmp dword ptr [eax*4 + 0x11ebe004] */
  switch (EAX) {
    case 0: goto L_11ebd5a8;
    case 1: goto L_11ebd5b3;
    case 2: goto L_11ebd59e;
    case 3: goto L_11ebd593;
    case 4: goto L_11ebd5be;
    case 5: goto L_11ebd5c6;
    default: x86_unimpl("switch@0x11ebd58c out of table"); return;
  }
L_11ebd593:;
  /* 11ebd593 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd596 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebd599 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ebd59c jmp 0x11ebd5c6 */
  goto L_11ebd5c6;
L_11ebd59e:;
  /* 11ebd59e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd5a1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11ebd5a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebd5a6 jmp 0x11ebd5c6 */
  goto L_11ebd5c6;
L_11ebd5a8:;
  /* 11ebd5a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd5ab or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebd5ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ebd5b1 jmp 0x11ebd5c6 */
  goto L_11ebd5c6;
L_11ebd5b3:;
  /* 11ebd5b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd5b6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11ebd5b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ebd5bc jmp 0x11ebd5c6 */
  goto L_11ebd5c6;
L_11ebd5be:;
  /* 11ebd5be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd5c1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11ebd5c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ebd5c6:;
  /* 11ebd5c6 jmp 0x11ebdfd2 */
  goto L_11ebdfd2;
L_11ebd5cb:;
  /* 11ebd5cb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebd5cf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd5d2 jne 0x11ebd607 */
  if (!C.zf) goto L_11ebd607;
  /* 11ebd5d4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ebd5d7 push edx */
  push32((uint32_t)(EDX));
  /* 11ebd5d8 call 0x11ebe200 */
  push32(0x11ebd5ddu); f_11ebe200();
  /* 11ebd5dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd5e0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11ebd5e6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd5ed jge 0x11ebd605 */
  if ((C.sf==C.of)) goto L_11ebd605;
  /* 11ebd5ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd5f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11ebd5f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebd5f7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11ebd5fd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ebd5ff mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11ebd605:;
  /* 11ebd605 jmp 0x11ebd61e */
  goto L_11ebd61e;
L_11ebd607:;
  /* 11ebd607 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 11ebd60d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebd610 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebd614 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 11ebd618 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11ebd61e:;
  /* 11ebd61e jmp 0x11ebdfd2 */
  goto L_11ebdfd2;
L_11ebd623:;
  /* 11ebd623 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 11ebd62d jmp 0x11ebdfd2 */
  goto L_11ebdfd2;
L_11ebd632:;
  /* 11ebd632 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebd636 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd639 jne 0x11ebd662 */
  if (!C.zf) goto L_11ebd662;
  /* 11ebd63b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11ebd63e push eax */
  push32((uint32_t)(EAX));
  /* 11ebd63f call 0x11ebe200 */
  push32(0x11ebd644u); f_11ebe200();
  /* 11ebd644 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd647 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11ebd64d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd654 jge 0x11ebd660 */
  if ((C.sf==C.of)) goto L_11ebd660;
  /* 11ebd656 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11ebd660:;
  /* 11ebd660 jmp 0x11ebd679 */
  goto L_11ebd679;
L_11ebd662:;
  /* 11ebd662 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ebd668 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebd66b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebd66f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11ebd673 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11ebd679:;
  /* 11ebd679 jmp 0x11ebdfd2 */
  goto L_11ebdfd2;
L_11ebd67e:;
  /* 11ebd67e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebd682 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11ebd688 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11ebd68e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd691 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11ebd697 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd69e ja 0x11ebd70c */
  if ((!C.cf&&!C.zf)) goto L_11ebd70c;
  /* 11ebd6a0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11ebd6a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd6a8 mov al, byte ptr [ecx + 0x11ebe041] */
  AL = (r8((uint32_t)(ECX + 0x11ebe041)));
  /* 11ebd6ae jmp dword ptr [eax*4 + 0x11ebe02d] */
  switch (EAX) {
    case 0: goto L_11ebd6c0;
    case 1: goto L_11ebd6f9;
    case 2: goto L_11ebd6b5;
    case 3: goto L_11ebd703;
    case 4: goto L_11ebd70c;
    default: x86_unimpl("switch@0x11ebd6ae out of table"); return;
  }
L_11ebd6b5:;
  /* 11ebd6b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd6b8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebd6bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ebd6be jmp 0x11ebd70c */
  goto L_11ebd70c;
L_11ebd6c0:;
  /* 11ebd6c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebd6c3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ebd6c6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd6c9 jne 0x11ebd6eb */
  if (!C.zf) goto L_11ebd6eb;
  /* 11ebd6cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebd6ce movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11ebd6d2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd6d5 jne 0x11ebd6eb */
  if (!C.zf) goto L_11ebd6eb;
  /* 11ebd6d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebd6da add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd6dd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ebd6e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd6e3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ebd6e6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ebd6e9 jmp 0x11ebd6f7 */
  goto L_11ebd6f7;
L_11ebd6eb:;
  /* 11ebd6eb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11ebd6f2 jmp 0x11ebd480 */
  goto L_11ebd480;
L_11ebd6f7:;
  /* 11ebd6f7 jmp 0x11ebd70c */
  goto L_11ebd70c;
L_11ebd6f9:;
  /* 11ebd6f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd6fc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11ebd6fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebd701 jmp 0x11ebd70c */
  goto L_11ebd70c;
L_11ebd703:;
  /* 11ebd703 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd706 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ebd709 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ebd70c:;
  /* 11ebd70c jmp 0x11ebdfd2 */
  goto L_11ebdfd2;
L_11ebd711:;
  /* 11ebd711 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebd715 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 11ebd71b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11ebd721 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd724 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 11ebd72a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd731 ja 0x11ebddf7 */
  if ((!C.cf&&!C.zf)) goto L_11ebddf7;
  /* 11ebd737 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11ebd73d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebd73f mov cl, byte ptr [edx + 0x11ebe0ac] */
  CL = (r8((uint32_t)(EDX + 0x11ebe0ac)));
  /* 11ebd745 jmp dword ptr [ecx*4 + 0x11ebe070] */
  switch (ECX) {
    case 0: goto L_11ebd74c;
    case 1: goto L_11ebd9e0;
    case 2: goto L_11ebd870;
    case 3: goto L_11ebdb19;
    case 4: goto L_11ebd7db;
    case 5: goto L_11ebd761;
    case 6: goto L_11ebdaeb;
    case 7: goto L_11ebd9f0;
    case 8: goto L_11ebd995;
    case 9: goto L_11ebdb65;
    case 10: goto L_11ebdb0f;
    case 11: goto L_11ebd886;
    case 12: goto L_11ebdb03;
    case 13: goto L_11ebdb25;
    case 14: goto L_11ebddf7;
    default: x86_unimpl("switch@0x11ebd745 out of table"); return;
  }
L_11ebd74c:;
  /* 11ebd74c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd74f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd754 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebd756 jne 0x11ebd761 */
  if (!C.zf) goto L_11ebd761;
  /* 11ebd758 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd75b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ebd75e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ebd761:;
  /* 11ebd761 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd764 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebd76a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebd76c je 0x11ebd7a7 */
  if (C.zf) goto L_11ebd7a7;
  /* 11ebd76e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11ebd771 push eax */
  push32((uint32_t)(EAX));
  /* 11ebd772 call 0x11ebe240 */
  push32(0x11ebd777u); f_11ebe240();
  /* 11ebd777 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd77a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 11ebd77e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11ebd782 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebd783 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11ebd789 push edx */
  push32((uint32_t)(EDX));
  /* 11ebd78a call 0x11ebf320 */
  push32(0x11ebd78fu); f_11ebf320();
  /* 11ebd78f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd792 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ebd795 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd799 jge 0x11ebd7a5 */
  if ((C.sf==C.of)) goto L_11ebd7a5;
  /* 11ebd79b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11ebd7a5:;
  /* 11ebd7a5 jmp 0x11ebd7cd */
  goto L_11ebd7cd;
L_11ebd7a7:;
  /* 11ebd7a7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11ebd7aa push eax */
  push32((uint32_t)(EAX));
  /* 11ebd7ab call 0x11ebe200 */
  push32(0x11ebd7b0u); f_11ebe200();
  /* 11ebd7b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd7b3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 11ebd7ba mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11ebd7c0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11ebd7c6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_11ebd7cd:;
  /* 11ebd7cd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11ebd7d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ebd7d6 jmp 0x11ebddf7 */
  goto L_11ebddf7;
L_11ebd7db:;
  /* 11ebd7db lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11ebd7de push eax */
  push32((uint32_t)(EAX));
  /* 11ebd7df call 0x11ebe200 */
  push32(0x11ebd7e4u); f_11ebe200();
  /* 11ebd7e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd7e7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 11ebd7ed cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd7f4 je 0x11ebd802 */
  if (C.zf) goto L_11ebd802;
  /* 11ebd7f6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11ebd7fc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd800 jne 0x11ebd81c */
  if (!C.zf) goto L_11ebd81c;
L_11ebd802:;
  /* 11ebd802 mov edx, dword ptr [0x11ee0fb0] */
  EDX = (r32((uint32_t)(0x11ee0fb0)));
  /* 11ebd808 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ebd80b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebd80e push eax */
  push32((uint32_t)(EAX));
  /* 11ebd80f call 0x11eb9260 */
  push32(0x11ebd814u); f_11eb9260();
  /* 11ebd814 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd817 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ebd81a jmp 0x11ebd86b */
  goto L_11ebd86b;
L_11ebd81c:;
  /* 11ebd81c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd81f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebd825 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebd827 je 0x11ebd84c */
  if (C.zf) goto L_11ebd84c;
  /* 11ebd829 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11ebd82f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ebd832 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ebd835 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11ebd83b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11ebd83e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ebd840 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ebd843 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11ebd84a jmp 0x11ebd86b */
  goto L_11ebd86b;
L_11ebd84c:;
  /* 11ebd84c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ebd853 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11ebd859 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebd85c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ebd85f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11ebd865 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11ebd868 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ebd86b:;
  /* 11ebd86b jmp 0x11ebddf7 */
  goto L_11ebddf7;
L_11ebd870:;
  /* 11ebd870 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd873 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebd879 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebd87b jne 0x11ebd886 */
  if (!C.zf) goto L_11ebd886;
  /* 11ebd87d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd880 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ebd883 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ebd886:;
  /* 11ebd886 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd88d jne 0x11ebd89b */
  if (!C.zf) goto L_11ebd89b;
  /* 11ebd88f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11ebd899 jmp 0x11ebd8a7 */
  goto L_11ebd8a7;
L_11ebd89b:;
  /* 11ebd89b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ebd8a1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11ebd8a7:;
  /* 11ebd8a7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11ebd8ad mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11ebd8b3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ebd8b6 push edx */
  push32((uint32_t)(EDX));
  /* 11ebd8b7 call 0x11ebe200 */
  push32(0x11ebd8bcu); f_11ebe200();
  /* 11ebd8bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd8bf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ebd8c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd8c5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd8ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebd8cc je 0x11ebd936 */
  if (C.zf) goto L_11ebd936;
  /* 11ebd8ce cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd8d2 jne 0x11ebd8dd */
  if (!C.zf) goto L_11ebd8dd;
  /* 11ebd8d4 mov ecx, dword ptr [0x11ee0fb4] */
  ECX = (r32((uint32_t)(0x11ee0fb4)));
  /* 11ebd8da mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11ebd8dd:;
  /* 11ebd8dd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11ebd8e4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebd8e7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11ebd8ed:;
  /* 11ebd8ed mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11ebd8f3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11ebd8f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd8fc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11ebd902 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebd904 je 0x11ebd926 */
  if (C.zf) goto L_11ebd926;
  /* 11ebd906 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11ebd90c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd90e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ebd911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebd913 je 0x11ebd926 */
  if (C.zf) goto L_11ebd926;
  /* 11ebd915 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11ebd91b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd91e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11ebd924 jmp 0x11ebd8ed */
  goto L_11ebd8ed;
L_11ebd926:;
  /* 11ebd926 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11ebd92c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd92f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ebd931 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ebd934 jmp 0x11ebd990 */
  goto L_11ebd990;
L_11ebd936:;
  /* 11ebd936 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebd93a jne 0x11ebd944 */
  if (!C.zf) goto L_11ebd944;
  /* 11ebd93c mov eax, dword ptr [0x11ee0fb0] */
  EAX = (r32((uint32_t)(0x11ee0fb0)));
  /* 11ebd941 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11ebd944:;
  /* 11ebd944 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebd947 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11ebd94d:;
  /* 11ebd94d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11ebd953 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11ebd959 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd95c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11ebd962 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebd964 je 0x11ebd984 */
  if (C.zf) goto L_11ebd984;
  /* 11ebd966 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11ebd96c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ebd96f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebd971 je 0x11ebd984 */
  if (C.zf) goto L_11ebd984;
  /* 11ebd973 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11ebd979 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd97c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11ebd982 jmp 0x11ebd94d */
  goto L_11ebd94d;
L_11ebd984:;
  /* 11ebd984 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11ebd98a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebd98d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11ebd990:;
  /* 11ebd990 jmp 0x11ebddf7 */
  goto L_11ebddf7;
L_11ebd995:;
  /* 11ebd995 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ebd998 push edx */
  push32((uint32_t)(EDX));
  /* 11ebd999 call 0x11ebe200 */
  push32(0x11ebd99eu); f_11ebe200();
  /* 11ebd99e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebd9a1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11ebd9a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd9aa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebd9ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebd9af je 0x11ebd9c3 */
  if (C.zf) goto L_11ebd9c3;
  /* 11ebd9b1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11ebd9b7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11ebd9be mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11ebd9c1 jmp 0x11ebd9d1 */
  goto L_11ebd9d1;
L_11ebd9c3:;
  /* 11ebd9c3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11ebd9c9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11ebd9cf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11ebd9d1:;
  /* 11ebd9d1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11ebd9db jmp 0x11ebddf7 */
  goto L_11ebddf7;
L_11ebd9e0:;
  /* 11ebd9e0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11ebd9e7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11ebd9ea add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ebd9ed mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11ebd9f0:;
  /* 11ebd9f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebd9f3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11ebd9f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebd9f8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11ebd9fe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ebda01 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebda08 jge 0x11ebda16 */
  if ((C.sf==C.of)) goto L_11ebda16;
  /* 11ebda0a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11ebda14 jmp 0x11ebda32 */
  goto L_11ebda32;
L_11ebda16:;
  /* 11ebda16 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebda1d jne 0x11ebda32 */
  if (!C.zf) goto L_11ebda32;
  /* 11ebda1f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebda23 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebda26 jne 0x11ebda32 */
  if (!C.zf) goto L_11ebda32;
  /* 11ebda28 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11ebda32:;
  /* 11ebda32 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebda35 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebda38 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11ebda3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebda3e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebda41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ebda43 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebda46 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11ebda4c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11ebda52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebda55 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebda56 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ebda5c push edx */
  push32((uint32_t)(EDX));
  /* 11ebda5d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebda61 push eax */
  push32((uint32_t)(EAX));
  /* 11ebda62 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebda65 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebda66 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11ebda6c push edx */
  push32((uint32_t)(EDX));
  /* 11ebda6d call dword ptr [0x11ee13a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee13a0))), 0x11ebda73u);
  /* 11ebda73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebda76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebda79 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebda7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebda80 je 0x11ebda98 */
  if (C.zf) goto L_11ebda98;
  /* 11ebda82 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebda89 jne 0x11ebda98 */
  if (!C.zf) goto L_11ebda98;
  /* 11ebda8b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebda8e push ecx */
  push32((uint32_t)(ECX));
  /* 11ebda8f call dword ptr [0x11ee13ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee13ac))), 0x11ebda95u);
  /* 11ebda95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebda98:;
  /* 11ebda98 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ebda9c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebda9f jne 0x11ebdaba */
  if (!C.zf) goto L_11ebdaba;
  /* 11ebdaa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdaa4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebdaa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebdaab jne 0x11ebdaba */
  if (!C.zf) goto L_11ebdaba;
  /* 11ebdaad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebdab0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebdab1 call dword ptr [0x11ee13a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee13a4))), 0x11ebdab7u);
  /* 11ebdab7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebdaba:;
  /* 11ebdaba mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebdabd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ebdac0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebdac3 jne 0x11ebdad7 */
  if (!C.zf) goto L_11ebdad7;
  /* 11ebdac5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdac8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ebdacb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ebdace mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebdad1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdad4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11ebdad7:;
  /* 11ebdad7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebdada push eax */
  push32((uint32_t)(EAX));
  /* 11ebdadb call 0x11eb9260 */
  push32(0x11ebdae0u); f_11eb9260();
  /* 11ebdae0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdae3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ebdae6 jmp 0x11ebddf7 */
  goto L_11ebddf7;
L_11ebdaeb:;
  /* 11ebdaeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdaee or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebdaf1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ebdaf4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11ebdafe jmp 0x11ebdb85 */
  goto L_11ebdb85;
L_11ebdb03:;
  /* 11ebdb03 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11ebdb0d jmp 0x11ebdb85 */
  goto L_11ebdb85;
L_11ebdb0f:;
  /* 11ebdb0f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11ebdb19:;
  /* 11ebdb19 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11ebdb23 jmp 0x11ebdb2f */
  goto L_11ebdb2f;
L_11ebdb25:;
  /* 11ebdb25 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11ebdb2f:;
  /* 11ebdb2f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11ebdb39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdb3c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebdb42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebdb44 je 0x11ebdb63 */
  if (C.zf) goto L_11ebdb63;
  /* 11ebdb46 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11ebdb4d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11ebdb53 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdb56 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11ebdb5c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11ebdb63:;
  /* 11ebdb63 jmp 0x11ebdb85 */
  goto L_11ebdb85;
L_11ebdb65:;
  /* 11ebdb65 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11ebdb6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdb72 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebdb78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebdb7a je 0x11ebdb85 */
  if (C.zf) goto L_11ebdb85;
  /* 11ebdb7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdb7f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ebdb82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ebdb85:;
  /* 11ebdb85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdb88 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebdb8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebdb8f je 0x11ebdbae */
  if (C.zf) goto L_11ebdbae;
  /* 11ebdb91 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11ebdb94 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebdb95 call 0x11ebe220 */
  push32(0x11ebdb9au); f_11ebe220();
  /* 11ebdb9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdb9d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ebdba3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11ebdba9 jmp 0x11ebdc3f */
  goto L_11ebdc3f;
L_11ebdbae:;
  /* 11ebdbae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdbb1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebdbb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebdbb6 je 0x11ebdc00 */
  if (C.zf) goto L_11ebdc00;
  /* 11ebdbb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdbbb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebdbbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebdbc0 je 0x11ebdbe0 */
  if (C.zf) goto L_11ebdbe0;
  /* 11ebdbc2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11ebdbc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebdbc6 call 0x11ebe200 */
  push32(0x11ebdbcbu); f_11ebe200();
  /* 11ebdbcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdbce movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11ebdbd1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ebdbd2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ebdbd8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11ebdbde jmp 0x11ebdbfe */
  goto L_11ebdbfe;
L_11ebdbe0:;
  /* 11ebdbe0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ebdbe3 push edx */
  push32((uint32_t)(EDX));
  /* 11ebdbe4 call 0x11ebe200 */
  push32(0x11ebdbe9u); f_11ebe200();
  /* 11ebdbe9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdbec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebdbf1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ebdbf2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ebdbf8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11ebdbfe:;
  /* 11ebdbfe jmp 0x11ebdc3f */
  goto L_11ebdc3f;
L_11ebdc00:;
  /* 11ebdc00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdc03 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebdc06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebdc08 je 0x11ebdc25 */
  if (C.zf) goto L_11ebdc25;
  /* 11ebdc0a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11ebdc0d push ecx */
  push32((uint32_t)(ECX));
  /* 11ebdc0e call 0x11ebe200 */
  push32(0x11ebdc13u); f_11ebe200();
  /* 11ebdc13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdc16 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ebdc17 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ebdc1d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11ebdc23 jmp 0x11ebdc3f */
  goto L_11ebdc3f;
L_11ebdc25:;
  /* 11ebdc25 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ebdc28 push edx */
  push32((uint32_t)(EDX));
  /* 11ebdc29 call 0x11ebe200 */
  push32(0x11ebdc2eu); f_11ebe200();
  /* 11ebdc2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdc31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ebdc33 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ebdc39 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11ebdc3f:;
  /* 11ebdc3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdc42 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebdc45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebdc47 je 0x11ebdc87 */
  if (C.zf) goto L_11ebdc87;
  /* 11ebdc49 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebdc50 jg 0x11ebdc87 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ebdc87;
  /* 11ebdc52 jl 0x11ebdc5d */
  if ((C.sf!=C.of)) goto L_11ebdc5d;
  /* 11ebdc54 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebdc5b jae 0x11ebdc87 */
  if (!C.cf) goto L_11ebdc87;
L_11ebdc5d:;
  /* 11ebdc5d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11ebdc63 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ebdc65 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11ebdc6b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdc6e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ebdc70 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11ebdc76 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11ebdc7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdc7f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ebdc82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ebdc85 jmp 0x11ebdc9f */
  goto L_11ebdc9f;
L_11ebdc87:;
  /* 11ebdc87 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11ebdc8d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11ebdc93 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11ebdc99 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11ebdc9f:;
  /* 11ebdc9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdca2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebdca8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebdcaa jne 0x11ebdcc7 */
  if (!C.zf) goto L_11ebdcc7;
  /* 11ebdcac mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ebdcb2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11ebdcb8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebdcbb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11ebdcc1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11ebdcc7:;
  /* 11ebdcc7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebdcce jge 0x11ebdcdc */
  if ((C.sf==C.of)) goto L_11ebdcdc;
  /* 11ebdcd0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11ebdcda jmp 0x11ebdce5 */
  goto L_11ebdce5;
L_11ebdcdc:;
  /* 11ebdcdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdcdf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebdce2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ebdce5:;
  /* 11ebdce5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ebdceb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11ebdcf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebdcf3 jne 0x11ebdcfc */
  if (!C.zf) goto L_11ebdcfc;
  /* 11ebdcf5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11ebdcfc:;
  /* 11ebdcfc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11ebdcff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11ebdd02:;
  /* 11ebdd02 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ebdd08 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ebdd0e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebdd11 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11ebdd17 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebdd19 jg 0x11ebdd2f */
  if ((!C.zf&&C.sf==C.of)) goto L_11ebdd2f;
  /* 11ebdd1b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ebdd21 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11ebdd27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebdd29 je 0x11ebddb0 */
  if (C.zf) goto L_11ebddb0;
L_11ebdd2f:;
  /* 11ebdd2f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11ebdd35 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ebdd36 push edx */
  push32((uint32_t)(EDX));
  /* 11ebdd37 push eax */
  push32((uint32_t)(EAX));
  /* 11ebdd38 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11ebdd3e push edx */
  push32((uint32_t)(EDX));
  /* 11ebdd3f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ebdd45 push eax */
  push32((uint32_t)(EAX));
  /* 11ebdd46 call 0x11ebd0c0 */
  push32(0x11ebdd4bu); f_11ebd0c0();
  /* 11ebdd4b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdd4e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11ebdd54 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11ebdd5a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ebdd5b push edx */
  push32((uint32_t)(EDX));
  /* 11ebdd5c push eax */
  push32((uint32_t)(EAX));
  /* 11ebdd5d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11ebdd63 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebdd64 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ebdd6a push edx */
  push32((uint32_t)(EDX));
  /* 11ebdd6b call 0x11ebd050 */
  push32(0x11ebdd70u); f_11ebd050();
  /* 11ebdd70 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11ebdd76 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11ebdd7c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebdd83 jle 0x11ebdd97 */
  if ((C.zf||C.sf!=C.of)) goto L_11ebdd97;
  /* 11ebdd85 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11ebdd8b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdd91 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11ebdd97:;
  /* 11ebdd97 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebdd9a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11ebdda0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11ebdda2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebdda5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebdda8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ebddab jmp 0x11ebdd02 */
  goto L_11ebdd02;
L_11ebddb0:;
  /* 11ebddb0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11ebddb3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebddb6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ebddb9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebddbc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebddbf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ebddc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebddc5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebddca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebddcc je 0x11ebddf7 */
  if (C.zf) goto L_11ebddf7;
  /* 11ebddce mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebddd1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ebddd4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebddd7 jne 0x11ebdddf */
  if (!C.zf) goto L_11ebdddf;
  /* 11ebddd9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebdddd jne 0x11ebddf7 */
  if (!C.zf) goto L_11ebddf7;
L_11ebdddf:;
  /* 11ebdddf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebdde2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebdde5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ebdde8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebddeb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11ebddee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebddf1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebddf4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11ebddf7:;
  /* 11ebddf7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebddfe jne 0x11ebdfd2 */
  if (!C.zf) goto L_11ebdfd2;
  /* 11ebde04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebde07 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebde0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebde0c je 0x11ebde5d */
  if (C.zf) goto L_11ebde5d;
  /* 11ebde0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebde11 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebde17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebde19 je 0x11ebde2b */
  if (C.zf) goto L_11ebde2b;
  /* 11ebde1b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11ebde22 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11ebde29 jmp 0x11ebde5d */
  goto L_11ebde5d;
L_11ebde2b:;
  /* 11ebde2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebde2e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebde31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebde33 je 0x11ebde45 */
  if (C.zf) goto L_11ebde45;
  /* 11ebde35 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11ebde3c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11ebde43 jmp 0x11ebde5d */
  goto L_11ebde5d;
L_11ebde45:;
  /* 11ebde45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebde48 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebde4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebde4d je 0x11ebde5d */
  if (C.zf) goto L_11ebde5d;
  /* 11ebde4f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11ebde56 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11ebde5d:;
  /* 11ebde5d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11ebde63 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebde66 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebde69 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11ebde6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebde72 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebde75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebde77 jne 0x11ebde95 */
  if (!C.zf) goto L_11ebde95;
  /* 11ebde79 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ebde7f push eax */
  push32((uint32_t)(EAX));
  /* 11ebde80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebde83 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebde84 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11ebde8a push edx */
  push32((uint32_t)(EDX));
  /* 11ebde8b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11ebde8d call 0x11ebe170 */
  push32(0x11ebde92u); f_11ebe170();
  /* 11ebde92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebde95:;
  /* 11ebde95 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ebde9b push eax */
  push32((uint32_t)(EAX));
  /* 11ebde9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebde9f push ecx */
  push32((uint32_t)(ECX));
  /* 11ebdea0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebdea3 push edx */
  push32((uint32_t)(EDX));
  /* 11ebdea4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11ebdeaa push eax */
  push32((uint32_t)(EAX));
  /* 11ebdeab call 0x11ebe1b0 */
  push32(0x11ebdeb0u); f_11ebe1b0();
  /* 11ebdeb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdeb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdeb6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebdeb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebdebb je 0x11ebdee3 */
  if (C.zf) goto L_11ebdee3;
  /* 11ebdebd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdec0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebdec3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebdec5 jne 0x11ebdee3 */
  if (!C.zf) goto L_11ebdee3;
  /* 11ebdec7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ebdecd push eax */
  push32((uint32_t)(EAX));
  /* 11ebdece mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebded1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebded2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11ebded8 push edx */
  push32((uint32_t)(EDX));
  /* 11ebded9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11ebdedb call 0x11ebe170 */
  push32(0x11ebdee0u); f_11ebe170();
  /* 11ebdee0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebdee3:;
  /* 11ebdee3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebdee7 je 0x11ebdf91 */
  if (C.zf) goto L_11ebdf91;
  /* 11ebdeed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebdef1 jle 0x11ebdf91 */
  if ((C.zf||C.sf!=C.of)) goto L_11ebdf91;
  /* 11ebdef7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebdefa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11ebdf00 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebdf03 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11ebdf09:;
  /* 11ebdf09 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11ebdf0f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11ebdf15 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebdf18 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11ebdf1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebdf20 je 0x11ebdf8f */
  if (C.zf) goto L_11ebdf8f;
  /* 11ebdf22 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11ebdf28 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11ebdf2b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11ebdf32 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11ebdf39 push eax */
  push32((uint32_t)(EAX));
  /* 11ebdf3a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11ebdf40 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebdf41 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11ebdf47 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdf4a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11ebdf50 call 0x11ebf320 */
  push32(0x11ebdf55u); f_11ebf320();
  /* 11ebdf55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdf58 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11ebdf5e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebdf65 jg 0x11ebdf69 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ebdf69;
  /* 11ebdf67 jmp 0x11ebdf8f */
  goto L_11ebdf8f;
L_11ebdf69:;
  /* 11ebdf69 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ebdf6f push eax */
  push32((uint32_t)(EAX));
  /* 11ebdf70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebdf73 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebdf74 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11ebdf7a push edx */
  push32((uint32_t)(EDX));
  /* 11ebdf7b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11ebdf81 push eax */
  push32((uint32_t)(EAX));
  /* 11ebdf82 call 0x11ebe1b0 */
  push32(0x11ebdf87u); f_11ebe1b0();
  /* 11ebdf87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebdf8a jmp 0x11ebdf09 */
  goto L_11ebdf09;
L_11ebdf8f:;
  /* 11ebdf8f jmp 0x11ebdfac */
  goto L_11ebdfac;
L_11ebdf91:;
  /* 11ebdf91 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11ebdf97 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebdf98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebdf9b push edx */
  push32((uint32_t)(EDX));
  /* 11ebdf9c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebdf9f push eax */
  push32((uint32_t)(EAX));
  /* 11ebdfa0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebdfa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebdfa4 call 0x11ebe1b0 */
  push32(0x11ebdfa9u); f_11ebe1b0();
  /* 11ebdfa9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebdfac:;
  /* 11ebdfac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebdfaf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebdfb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebdfb4 je 0x11ebdfd2 */
  if (C.zf) goto L_11ebdfd2;
  /* 11ebdfb6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ebdfbc push eax */
  push32((uint32_t)(EAX));
  /* 11ebdfbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebdfc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebdfc1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11ebdfc7 push edx */
  push32((uint32_t)(EDX));
  /* 11ebdfc8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11ebdfca call 0x11ebe170 */
  push32(0x11ebdfcfu); f_11ebe170();
  /* 11ebdfcf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebdfd2:;
  /* 11ebdfd2 jmp 0x11ebd3e4 */
  goto L_11ebd3e4;
L_11ebdfd7:;
  /* 11ebdfd7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11ebdfdd pop edi */
  EDI = (pop32());
  /* 11ebdfde pop esi */
  ESI = (pop32());
  /* 11ebdfdf pop ebx */
  EBX = (pop32());
  /* 11ebdfe0 mov esp, ebp */
  ESP = (EBP);
  /* 11ebdfe2 pop ebp */
  EBP = (pop32());
  /* 11ebdfe3 ret  */
  ESPCHK(0x11ebd3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0f0 @ 0x11ebe0f0 (119 bytes, 44 insns) */
void f_11ebe0f0(void) {
  FTRACE(0x11ebe0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebe0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebe0f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebe0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe0f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe0f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ebe0fa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebe0fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe100 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ebe103 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe106 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe10a jl 0x11ebe132 */
  if ((C.sf!=C.of)) goto L_11ebe132;
  /* 11ebe10c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe10f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ebe111 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ebe114 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11ebe116 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11ebe11a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebe120 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ebe123 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe126 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ebe128 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe12b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe12e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ebe130 jmp 0x11ebe145 */
  goto L_11ebe145;
L_11ebe132:;
  /* 11ebe132 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe135 push edx */
  push32((uint32_t)(EDX));
  /* 11ebe136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe139 push eax */
  push32((uint32_t)(EAX));
  /* 11ebe13a call 0x11ebd140 */
  push32(0x11ebe13fu); f_11ebd140();
  /* 11ebe13f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe142 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ebe145:;
  /* 11ebe145 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe149 jne 0x11ebe156 */
  if (!C.zf) goto L_11ebe156;
  /* 11ebe14b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebe14e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11ebe154 jmp 0x11ebe163 */
  goto L_11ebe163;
L_11ebe156:;
  /* 11ebe156 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebe159 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ebe15b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe15e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebe161 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ebe163:;
  /* 11ebe163 mov esp, ebp */
  ESP = (EBP);
  /* 11ebe165 pop ebp */
  EBP = (pop32());
  /* 11ebe166 ret  */
  ESPCHK(0x11ebe0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e170 @ 0x11ebe170 (53 bytes, 23 insns) */
void f_11ebe170(void) {
  FTRACE(0x11ebe170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebe170 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebe171 mov ebp, esp */
  EBP = (ESP);
L_11ebe173:;
  /* 11ebe173 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe176 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe179 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebe17c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ebe17f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebe181 jle 0x11ebe1a3 */
  if ((C.zf||C.sf!=C.of)) goto L_11ebe1a3;
  /* 11ebe183 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ebe186 push edx */
  push32((uint32_t)(EDX));
  /* 11ebe187 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebe18a push eax */
  push32((uint32_t)(EAX));
  /* 11ebe18b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe18e push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe18f call 0x11ebe0f0 */
  push32(0x11ebe194u); f_11ebe0f0();
  /* 11ebe194 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe197 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ebe19a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe19d jne 0x11ebe1a1 */
  if (!C.zf) goto L_11ebe1a1;
  /* 11ebe19f jmp 0x11ebe1a3 */
  goto L_11ebe1a3;
L_11ebe1a1:;
  /* 11ebe1a1 jmp 0x11ebe173 */
  goto L_11ebe173;
L_11ebe1a3:;
  /* 11ebe1a3 pop ebp */
  EBP = (pop32());
  /* 11ebe1a4 ret  */
  ESPCHK(0x11ebe170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1b0 @ 0x11ebe1b0 (74 bytes, 31 insns) */
void f_11ebe1b0(void) {
  FTRACE(0x11ebe1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebe1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebe1b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebe1b3 push ecx */
  push32((uint32_t)(ECX));
L_11ebe1b4:;
  /* 11ebe1b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe1b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe1ba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebe1bd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ebe1c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebe1c2 jle 0x11ebe1f6 */
  if ((C.zf||C.sf!=C.of)) goto L_11ebe1f6;
  /* 11ebe1c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ebe1c7 push edx */
  push32((uint32_t)(EDX));
  /* 11ebe1c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebe1cb push eax */
  push32((uint32_t)(EAX));
  /* 11ebe1cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe1cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ebe1d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ebe1d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebe1d8 push eax */
  push32((uint32_t)(EAX));
  /* 11ebe1d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe1dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe1df mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ebe1e2 call 0x11ebe0f0 */
  push32(0x11ebe1e7u); f_11ebe0f0();
  /* 11ebe1e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe1ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ebe1ed cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe1f0 jne 0x11ebe1f4 */
  if (!C.zf) goto L_11ebe1f4;
  /* 11ebe1f2 jmp 0x11ebe1f6 */
  goto L_11ebe1f6;
L_11ebe1f4:;
  /* 11ebe1f4 jmp 0x11ebe1b4 */
  goto L_11ebe1b4;
L_11ebe1f6:;
  /* 11ebe1f6 mov esp, ebp */
  ESP = (EBP);
  /* 11ebe1f8 pop ebp */
  EBP = (pop32());
  /* 11ebe1f9 ret  */
  ESPCHK(0x11ebe1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e200 @ 0x11ebe200 (26 bytes, 12 insns) */
void f_11ebe200(void) {
  FTRACE(0x11ebe200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebe200 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebe201 mov ebp, esp */
  EBP = (ESP);
  /* 11ebe203 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe206 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ebe208 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe20b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe20e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ebe210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe213 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ebe215 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ebe218 pop ebp */
  EBP = (pop32());
  /* 11ebe219 ret  */
  ESPCHK(0x11ebe200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e220 @ 0x11ebe220 (31 bytes, 14 insns) */
void f_11ebe220(void) {
  FTRACE(0x11ebe220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebe220 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebe221 mov ebp, esp */
  EBP = (ESP);
  /* 11ebe223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe226 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ebe228 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe22b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe22e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ebe230 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe233 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ebe235 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebe238 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ebe23a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ebe23d pop ebp */
  EBP = (pop32());
  /* 11ebe23e ret  */
  ESPCHK(0x11ebe220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e240 @ 0x11ebe240 (27 bytes, 12 insns) */
void f_11ebe240(void) {
  FTRACE(0x11ebe240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebe240 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebe241 mov ebp, esp */
  EBP = (ESP);
  /* 11ebe243 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe246 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ebe248 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe24b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe24e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ebe250 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe253 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ebe255 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11ebe259 pop ebp */
  EBP = (pop32());
  /* 11ebe25a ret  */
  ESPCHK(0x11ebe240u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11ebe260 (145 bytes, 42 insns) */
void f_11ebe260(void) {
  FTRACE(0x11ebe260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebe260 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebe261 mov ebp, esp */
  EBP = (ESP);
  /* 11ebe263 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe264 call 0x11ebe310 */
  push32(0x11ebe269u); f_11ebe310();
  /* 11ebe269 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe26c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ebe26e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ebe275 jmp 0x11ebe280 */
  goto L_11ebe280;
L_11ebe277:;
  /* 11ebe277 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebe27a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe27d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ebe280:;
  /* 11ebe280 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe284 jae 0x11ebe2aa */
  if (!C.cf) goto L_11ebe2aa;
  /* 11ebe286 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebe289 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe28c cmp ecx, dword ptr [eax*8 + 0x11ee0fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11ee0fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe293 jne 0x11ebe2a8 */
  if (!C.zf) goto L_11ebe2a8;
  /* 11ebe295 call 0x11ebe300 */
  push32(0x11ebe29au); f_11ebe300();
  /* 11ebe29a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebe29d mov ecx, dword ptr [edx*8 + 0x11ee0fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11ee0fbc)));
  /* 11ebe2a4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ebe2a6 jmp 0x11ebe2ed */
  goto L_11ebe2ed;
L_11ebe2a8:;
  /* 11ebe2a8 jmp 0x11ebe277 */
  goto L_11ebe277;
L_11ebe2aa:;
  /* 11ebe2aa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe2ae jb 0x11ebe2c3 */
  if (C.cf) goto L_11ebe2c3;
  /* 11ebe2b0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe2b4 ja 0x11ebe2c3 */
  if ((!C.cf&&!C.zf)) goto L_11ebe2c3;
  /* 11ebe2b6 call 0x11ebe300 */
  push32(0x11ebe2bbu); f_11ebe300();
  /* 11ebe2bb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11ebe2c1 jmp 0x11ebe2ed */
  goto L_11ebe2ed;
L_11ebe2c3:;
  /* 11ebe2c3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe2ca jb 0x11ebe2e2 */
  if (C.cf) goto L_11ebe2e2;
  /* 11ebe2cc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe2d3 ja 0x11ebe2e2 */
  if ((!C.cf&&!C.zf)) goto L_11ebe2e2;
  /* 11ebe2d5 call 0x11ebe300 */
  push32(0x11ebe2dau); f_11ebe300();
  /* 11ebe2da mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11ebe2e0 jmp 0x11ebe2ed */
  goto L_11ebe2ed;
L_11ebe2e2:;
  /* 11ebe2e2 call 0x11ebe300 */
  push32(0x11ebe2e7u); f_11ebe300();
  /* 11ebe2e7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11ebe2ed:;
  /* 11ebe2ed mov esp, ebp */
  ESP = (EBP);
  /* 11ebe2ef pop ebp */
  EBP = (pop32());
  /* 11ebe2f0 ret  */
  ESPCHK(0x11ebe260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e300 @ 0x11ebe300 (13 bytes, 6 insns) */
void f_11ebe300(void) {
  FTRACE(0x11ebe300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebe300 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebe301 mov ebp, esp */
  EBP = (ESP);
  /* 11ebe303 call 0x11eb5e70 */
  push32(0x11ebe308u); f_11eb5e70();
  /* 11ebe308 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe30b pop ebp */
  EBP = (pop32());
  /* 11ebe30c ret  */
  ESPCHK(0x11ebe300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e310 @ 0x11ebe310 (13 bytes, 6 insns) */
void f_11ebe310(void) {
  FTRACE(0x11ebe310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebe310 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebe311 mov ebp, esp */
  EBP = (ESP);
  /* 11ebe313 call 0x11eb5e70 */
  push32(0x11ebe318u); f_11eb5e70();
  /* 11ebe318 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe31b pop ebp */
  EBP = (pop32());
  /* 11ebe31c ret  */
  ESPCHK(0x11ebe310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e320 @ 0x11ebe320 (664 bytes, 263 insns) [15 switch table(s)] */
void f_11ebe320(void) {
  FTRACE(0x11ebe320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebe320 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebe321 mov ebp, esp */
  EBP = (ESP);
  /* 11ebe323 push edi */
  push32((uint32_t)(EDI));
  /* 11ebe324 push esi */
  push32((uint32_t)(ESI));
  /* 11ebe325 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe328 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebe32b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe32e mov eax, ecx */
  EAX = (ECX);
  /* 11ebe330 mov edx, ecx */
  EDX = (ECX);
  /* 11ebe332 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe334 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe336 jbe 0x11ebe340 */
  if ((C.cf||C.zf)) goto L_11ebe340;
  /* 11ebe338 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe33a jb 0x11ebe4b8 */
  if (C.cf) goto L_11ebe4b8;
L_11ebe340:;
  /* 11ebe340 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ebe346 jne 0x11ebe35c */
  if (!C.zf) goto L_11ebe35c;
  /* 11ebe348 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebe34b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebe34e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe351 jb 0x11ebe37c */
  if (C.cf) goto L_11ebe37c;
  /* 11ebe353 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebe355 jmp dword ptr [edx*4 + 0x11ebe468] */
  switch (EDX) {
    case 0: goto L_11ebe478;
    case 1: goto L_11ebe480;
    case 2: goto L_11ebe48c;
    case 3: goto L_11ebe4a0;
    default: x86_unimpl("switch@0x11ebe355 out of table"); return;
  }
L_11ebe35c:;
  /* 11ebe35c mov eax, edi */
  EAX = (EDI);
  /* 11ebe35e mov edx, 3 */
  EDX = (0x3u);
  /* 11ebe363 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebe366 jb 0x11ebe374 */
  if (C.cf) goto L_11ebe374;
  /* 11ebe368 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebe36b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe36d jmp dword ptr [eax*4 + 0x11ebe380] */
  switch (EAX) {
    case 1: goto L_11ebe390;
    case 2: goto L_11ebe3bc;
    case 3: goto L_11ebe3e0;
    default: x86_unimpl("switch@0x11ebe36d out of table"); return;
  }
L_11ebe374:;
  /* 11ebe374 jmp dword ptr [ecx*4 + 0x11ebe478] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11ebe478)))); return;
  /* 11ebe37b nop  */
  /* nop */
L_11ebe37c:;
  /* 11ebe37c jmp dword ptr [ecx*4 + 0x11ebe3fc] */
  switch (ECX) {
    case 0: goto L_11ebe45f;
    case 1: goto L_11ebe44c;
    case 2: goto L_11ebe444;
    case 3: goto L_11ebe43c;
    case 4: goto L_11ebe434;
    case 5: goto L_11ebe42c;
    case 6: goto L_11ebe424;
    case 7: goto L_11ebe41c;
    default: x86_unimpl("switch@0x11ebe37c out of table"); return;
  }
  /* 11ebe383 nop  */
  /* nop */
L_11ebe390:;
  /* 11ebe390 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebe392 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ebe394 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ebe396 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ebe399 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ebe39c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ebe39f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebe3a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ebe3a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe3a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe3ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe3ae jb 0x11ebe37c */
  if (C.cf) goto L_11ebe37c;
  /* 11ebe3b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebe3b2 jmp dword ptr [edx*4 + 0x11ebe468] */
  switch (EDX) {
    case 0: goto L_11ebe478;
    case 1: goto L_11ebe480;
    case 2: goto L_11ebe48c;
    case 3: goto L_11ebe4a0;
    default: x86_unimpl("switch@0x11ebe3b2 out of table"); return;
  }
  /* 11ebe3b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ebe3bc:;
  /* 11ebe3bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebe3be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ebe3c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ebe3c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ebe3c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebe3c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ebe3cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe3ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe3d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe3d4 jb 0x11ebe37c */
  if (C.cf) goto L_11ebe37c;
  /* 11ebe3d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebe3d8 jmp dword ptr [edx*4 + 0x11ebe468] */
  switch (EDX) {
    case 0: goto L_11ebe478;
    case 1: goto L_11ebe480;
    case 2: goto L_11ebe48c;
    case 3: goto L_11ebe4a0;
    default: x86_unimpl("switch@0x11ebe3d8 out of table"); return;
  }
  /* 11ebe3df nop  */
  /* nop */
L_11ebe3e0:;
  /* 11ebe3e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebe3e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ebe3e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ebe3e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ebe3e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebe3ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ebe3eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe3ee jb 0x11ebe37c */
  if (C.cf) goto L_11ebe37c;
  /* 11ebe3f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebe3f2 jmp dword ptr [edx*4 + 0x11ebe468] */
  switch (EDX) {
    case 0: goto L_11ebe478;
    case 1: goto L_11ebe480;
    case 2: goto L_11ebe48c;
    case 3: goto L_11ebe4a0;
    default: x86_unimpl("switch@0x11ebe3f2 out of table"); return;
  }
  /* 11ebe3f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ebe41c:;
  /* 11ebe41c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11ebe420 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11ebe424:;
  /* 11ebe424 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11ebe428 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11ebe42c:;
  /* 11ebe42c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11ebe430 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11ebe434:;
  /* 11ebe434 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11ebe438 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11ebe43c:;
  /* 11ebe43c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11ebe440 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11ebe444:;
  /* 11ebe444 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11ebe448 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11ebe44c:;
  /* 11ebe44c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11ebe450 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11ebe454 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ebe45b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe45d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ebe45f:;
  /* 11ebe45f jmp dword ptr [edx*4 + 0x11ebe468] */
  switch (EDX) {
    case 0: goto L_11ebe478;
    case 1: goto L_11ebe480;
    case 2: goto L_11ebe48c;
    case 3: goto L_11ebe4a0;
    default: x86_unimpl("switch@0x11ebe45f out of table"); return;
  }
  /* 11ebe466 mov edi, edi */
  EDI = (EDI);
L_11ebe478:;
  /* 11ebe478 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe47b pop esi */
  ESI = (pop32());
  /* 11ebe47c pop edi */
  EDI = (pop32());
  /* 11ebe47d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebe47e ret  */
  ESPCHK(0x11ebe320u, _esp0);
  ESP += 4; return;
  /* 11ebe47f nop  */
  /* nop */
L_11ebe480:;
  /* 11ebe480 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ebe482 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ebe484 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe487 pop esi */
  ESI = (pop32());
  /* 11ebe488 pop edi */
  EDI = (pop32());
  /* 11ebe489 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebe48a ret  */
  ESPCHK(0x11ebe320u, _esp0);
  ESP += 4; return;
  /* 11ebe48b nop  */
  /* nop */
L_11ebe48c:;
  /* 11ebe48c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ebe48e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ebe490 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ebe493 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ebe496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe499 pop esi */
  ESI = (pop32());
  /* 11ebe49a pop edi */
  EDI = (pop32());
  /* 11ebe49b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebe49c ret  */
  ESPCHK(0x11ebe320u, _esp0);
  ESP += 4; return;
  /* 11ebe49d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ebe4a0:;
  /* 11ebe4a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ebe4a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ebe4a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ebe4a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ebe4aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ebe4ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ebe4b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe4b3 pop esi */
  ESI = (pop32());
  /* 11ebe4b4 pop edi */
  EDI = (pop32());
  /* 11ebe4b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebe4b6 ret  */
  ESPCHK(0x11ebe320u, _esp0);
  ESP += 4; return;
  /* 11ebe4b7 nop  */
  /* nop */
L_11ebe4b8:;
  /* 11ebe4b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11ebe4bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11ebe4c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ebe4c6 jne 0x11ebe4ec */
  if (!C.zf) goto L_11ebe4ec;
  /* 11ebe4c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebe4cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebe4ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe4d1 jb 0x11ebe4e0 */
  if (C.cf) goto L_11ebe4e0;
  /* 11ebe4d3 std  */
  C.df=1;
  /* 11ebe4d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebe4d6 cld  */
  C.df=0;
  /* 11ebe4d7 jmp dword ptr [edx*4 + 0x11ebe600] */
  switch (EDX) {
    case 0: goto L_11ebe610;
    case 1: goto L_11ebe618;
    case 2: goto L_11ebe628;
    case 3: goto L_11ebe63c;
    default: x86_unimpl("switch@0x11ebe4d7 out of table"); return;
  }
  /* 11ebe4de mov edi, edi */
  EDI = (EDI);
L_11ebe4e0:;
  /* 11ebe4e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ebe4e2 jmp dword ptr [ecx*4 + 0x11ebe5b0] */
  switch (ECX) {
    case 0: goto L_11ebe5f7;
    default: x86_unimpl("switch@0x11ebe4e2 out of table"); return;
  }
  /* 11ebe4e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ebe4ec:;
  /* 11ebe4ec mov eax, edi */
  EAX = (EDI);
  /* 11ebe4ee mov edx, 3 */
  EDX = (0x3u);
  /* 11ebe4f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe4f6 jb 0x11ebe504 */
  if (C.cf) goto L_11ebe504;
  /* 11ebe4f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebe4fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebe4fd jmp dword ptr [eax*4 + 0x11ebe508] */
  switch (EAX) {
    case 1: goto L_11ebe518;
    case 2: goto L_11ebe538;
    case 3: goto L_11ebe560;
    default: x86_unimpl("switch@0x11ebe4fd out of table"); return;
  }
L_11ebe504:;
  /* 11ebe504 jmp dword ptr [ecx*4 + 0x11ebe600] */
  switch (ECX) {
    case 0: goto L_11ebe610;
    case 1: goto L_11ebe618;
    case 2: goto L_11ebe628;
    case 3: goto L_11ebe63c;
    default: x86_unimpl("switch@0x11ebe504 out of table"); return;
  }
  /* 11ebe50b nop  */
  /* nop */
L_11ebe518:;
  /* 11ebe518 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ebe51b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebe51d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ebe520 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ebe521 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebe524 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11ebe525 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe528 jb 0x11ebe4e0 */
  if (C.cf) goto L_11ebe4e0;
  /* 11ebe52a std  */
  C.df=1;
  /* 11ebe52b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebe52d cld  */
  C.df=0;
  /* 11ebe52e jmp dword ptr [edx*4 + 0x11ebe600] */
  switch (EDX) {
    case 0: goto L_11ebe610;
    case 1: goto L_11ebe618;
    case 2: goto L_11ebe628;
    case 3: goto L_11ebe63c;
    default: x86_unimpl("switch@0x11ebe52e out of table"); return;
  }
  /* 11ebe535 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ebe538:;
  /* 11ebe538 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ebe53b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebe53d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ebe540 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ebe543 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebe546 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ebe549 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebe54c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebe54f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe552 jb 0x11ebe4e0 */
  if (C.cf) goto L_11ebe4e0;
  /* 11ebe554 std  */
  C.df=1;
  /* 11ebe555 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebe557 cld  */
  C.df=0;
  /* 11ebe558 jmp dword ptr [edx*4 + 0x11ebe600] */
  switch (EDX) {
    case 0: goto L_11ebe610;
    case 1: goto L_11ebe618;
    case 2: goto L_11ebe628;
    case 3: goto L_11ebe63c;
    default: x86_unimpl("switch@0x11ebe558 out of table"); return;
  }
  /* 11ebe55f nop  */
  /* nop */
L_11ebe560:;
  /* 11ebe560 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ebe563 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ebe565 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ebe568 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ebe56b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ebe56e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ebe571 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ebe574 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ebe577 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebe57a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebe57d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe580 jb 0x11ebe4e0 */
  if (C.cf) goto L_11ebe4e0;
  /* 11ebe586 std  */
  C.df=1;
  /* 11ebe587 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ebe589 cld  */
  C.df=0;
  /* 11ebe58a jmp dword ptr [edx*4 + 0x11ebe600] */
  switch (EDX) {
    case 0: goto L_11ebe610;
    case 1: goto L_11ebe618;
    case 2: goto L_11ebe628;
    case 3: goto L_11ebe63c;
    default: x86_unimpl("switch@0x11ebe58a out of table"); return;
  }
  /* 11ebe591 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11ebe594 mov ah, 0xe5 */
  AH = (0xe5u);
  /* 11ebe596 jmp 0x11ebe5a9 */
  goto L_11ebe5a9;
  /* 11ebe598 mov esp, 0xc411ebe5 */
  ESP = (0xc411ebe5u);
  /* 11ebe59d in eax, 0xeb */
  x86_unimpl("in @ 0x11ebe59d");
  /* 11ebe59f adc esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe5a1 in eax, 0xeb */
  x86_unimpl("in @ 0x11ebe5a1");
  /* 11ebe5a3 adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe5a5 in eax, 0xeb */
  x86_unimpl("in @ 0x11ebe5a5");
  /* 11ebe5a7 adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebe5a9:;
  /* 11ebe5a9 in eax, 0xeb */
  x86_unimpl("in @ 0x11ebe5a9");
  /* 11ebe5ab adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe5ad in eax, 0xeb */
  x86_unimpl("in @ 0x11ebe5ad");
  /* 11ebe5b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11ebe5b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11ebe5bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11ebe5c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11ebe5c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11ebe5c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11ebe5cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11ebe5d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11ebe5d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11ebe5d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11ebe5dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11ebe5e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11ebe5e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11ebe5e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11ebe5ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ebe5f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe5f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ebe5f7:;
  /* 11ebe5f7 jmp dword ptr [edx*4 + 0x11ebe600] */
  switch (EDX) {
    case 0: goto L_11ebe610;
    case 1: goto L_11ebe618;
    case 2: goto L_11ebe628;
    case 3: goto L_11ebe63c;
    default: x86_unimpl("switch@0x11ebe5f7 out of table"); return;
  }
  /* 11ebe5fe mov edi, edi */
  EDI = (EDI);
L_11ebe610:;
  /* 11ebe610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe613 pop esi */
  ESI = (pop32());
  /* 11ebe614 pop edi */
  EDI = (pop32());
  /* 11ebe615 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebe616 ret  */
  ESPCHK(0x11ebe320u, _esp0);
  ESP += 4; return;
  /* 11ebe617 nop  */
  /* nop */
L_11ebe618:;
  /* 11ebe618 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ebe61b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ebe61e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe621 pop esi */
  ESI = (pop32());
  /* 11ebe622 pop edi */
  EDI = (pop32());
  /* 11ebe623 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebe624 ret  */
  ESPCHK(0x11ebe320u, _esp0);
  ESP += 4; return;
  /* 11ebe625 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ebe628:;
  /* 11ebe628 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ebe62b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ebe62e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ebe631 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ebe634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe637 pop esi */
  ESI = (pop32());
  /* 11ebe638 pop edi */
  EDI = (pop32());
  /* 11ebe639 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebe63a ret  */
  ESPCHK(0x11ebe320u, _esp0);
  ESP += 4; return;
  /* 11ebe63b nop  */
  /* nop */
L_11ebe63c:;
  /* 11ebe63c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ebe63f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ebe642 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ebe645 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ebe648 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ebe64b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ebe64e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe651 pop esi */
  ESI = (pop32());
  /* 11ebe652 pop edi */
  EDI = (pop32());
  /* 11ebe653 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ebe654 ret  */
  ESPCHK(0x11ebe320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e660 @ 0x11ebe660 (421 bytes, 148 insns) */
void f_11ebe660(void) {
  FTRACE(0x11ebe660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebe660 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebe661 mov ebp, esp */
  EBP = (ESP);
  /* 11ebe663 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ebe665 push 0x11ede318 */
  push32((uint32_t)(0x11ede318u));
  /* 11ebe66a push 0x11ebf538 */
  push32((uint32_t)(0x11ebf538u));
  /* 11ebe66f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ebe675 push eax */
  push32((uint32_t)(EAX));
  /* 11ebe676 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ebe67d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe680 push ebx */
  push32((uint32_t)(EBX));
  /* 11ebe681 push esi */
  push32((uint32_t)(ESI));
  /* 11ebe682 push edi */
  push32((uint32_t)(EDI));
  /* 11ebe683 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ebe686 cmp dword ptr [0x11ee297c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee297c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe68d jne 0x11ebe6de */
  if (!C.zf) goto L_11ebe6de;
  /* 11ebe68f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11ebe692 push eax */
  push32((uint32_t)(EAX));
  /* 11ebe693 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ebe695 push 0x11ede314 */
  push32((uint32_t)(0x11ede314u));
  /* 11ebe69a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ebe69c call dword ptr [0x11ee531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee531c))), 0x11ebe6a2u);
  /* 11ebe6a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebe6a4 je 0x11ebe6b2 */
  if (C.zf) goto L_11ebe6b2;
  /* 11ebe6a6 mov dword ptr [0x11ee297c], 1 */
  w32((uint32_t)(0x11ee297c), (0x1u));
  /* 11ebe6b0 jmp 0x11ebe6de */
  goto L_11ebe6de;
L_11ebe6b2:;
  /* 11ebe6b2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11ebe6b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe6b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ebe6b8 push 0x11ede310 */
  push32((uint32_t)(0x11ede310u));
  /* 11ebe6bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11ebe6bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebe6c1 call dword ptr [0x11ee5320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5320))), 0x11ebe6c7u);
  /* 11ebe6c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebe6c9 je 0x11ebe6d7 */
  if (C.zf) goto L_11ebe6d7;
  /* 11ebe6cb mov dword ptr [0x11ee297c], 2 */
  w32((uint32_t)(0x11ee297c), (0x2u));
  /* 11ebe6d5 jmp 0x11ebe6de */
  goto L_11ebe6de;
L_11ebe6d7:;
  /* 11ebe6d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebe6d9 jmp 0x11ebe808 */
  goto L_11ebe808;
L_11ebe6de:;
  /* 11ebe6de cmp dword ptr [0x11ee297c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11ee297c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe6e5 jne 0x11ebe715 */
  if (!C.zf) goto L_11ebe715;
  /* 11ebe6e7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe6eb jne 0x11ebe6f6 */
  if (!C.zf) goto L_11ebe6f6;
  /* 11ebe6ed mov edx, dword ptr [0x11ee2988] */
  EDX = (r32((uint32_t)(0x11ee2988)));
  /* 11ebe6f3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11ebe6f6:;
  /* 11ebe6f6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ebe6f9 push eax */
  push32((uint32_t)(EAX));
  /* 11ebe6fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebe6fd push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe6fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe701 push edx */
  push32((uint32_t)(EDX));
  /* 11ebe702 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe705 push eax */
  push32((uint32_t)(EAX));
  /* 11ebe706 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ebe709 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe70a call dword ptr [0x11ee5320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5320))), 0x11ebe710u);
  /* 11ebe710 jmp 0x11ebe808 */
  goto L_11ebe808;
L_11ebe715:;
  /* 11ebe715 cmp dword ptr [0x11ee297c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee297c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe71c jne 0x11ebe806 */
  if (!C.zf) goto L_11ebe806;
  /* 11ebe722 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe726 jne 0x11ebe731 */
  if (!C.zf) goto L_11ebe731;
  /* 11ebe728 mov edx, dword ptr [0x11ee2998] */
  EDX = (r32((uint32_t)(0x11ee2998)));
  /* 11ebe72e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11ebe731:;
  /* 11ebe731 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebe733 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebe735 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebe738 push eax */
  push32((uint32_t)(EAX));
  /* 11ebe739 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe73c push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe73d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ebe740 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ebe742 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebe744 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebe747 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe74a push edx */
  push32((uint32_t)(EDX));
  /* 11ebe74b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ebe74e push eax */
  push32((uint32_t)(EAX));
  /* 11ebe74f call dword ptr [0x11ee5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5324))), 0x11ebe755u);
  /* 11ebe755 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ebe758 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe75c jne 0x11ebe765 */
  if (!C.zf) goto L_11ebe765;
  /* 11ebe75e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebe760 jmp 0x11ebe808 */
  goto L_11ebe808;
L_11ebe765:;
  /* 11ebe765 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ebe76c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebe76f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ebe771 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe774 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ebe776 call 0x11eb95d0 */
  push32(0x11ebe77bu); f_11eb95d0();
  /* 11ebe77b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11ebe77e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ebe781 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebe784 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ebe787 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebe78a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ebe78c push edx */
  push32((uint32_t)(EDX));
  /* 11ebe78d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebe78f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebe792 push eax */
  push32((uint32_t)(EAX));
  /* 11ebe793 call 0x11eba1a0 */
  push32(0x11ebe798u); f_11eba1a0();
  /* 11ebe798 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe79b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ebe7a2 jmp 0x11ebe7bb */
  goto L_11ebe7bb;
  /* 11ebe7a4 mov eax, 1 */
  EAX = (0x1u);
  /* 11ebe7a9 ret  */
  ESPCHK(0x11ebe660u, _esp0);
  ESP += 4; return;
  /* 11ebe7aa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebe7ad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ebe7b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ebe7bb:;
  /* 11ebe7bb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe7bf jne 0x11ebe7c5 */
  if (!C.zf) goto L_11ebe7c5;
  /* 11ebe7c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebe7c3 jmp 0x11ebe808 */
  goto L_11ebe808;
L_11ebe7c5:;
  /* 11ebe7c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebe7c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe7c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebe7cc push edx */
  push32((uint32_t)(EDX));
  /* 11ebe7cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebe7d0 push eax */
  push32((uint32_t)(EAX));
  /* 11ebe7d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe7d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe7d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ebe7d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ebe7da push edx */
  push32((uint32_t)(EDX));
  /* 11ebe7db call dword ptr [0x11ee5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5324))), 0x11ebe7e1u);
  /* 11ebe7e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ebe7e4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe7e8 jne 0x11ebe7ee */
  if (!C.zf) goto L_11ebe7ee;
  /* 11ebe7ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebe7ec jmp 0x11ebe808 */
  goto L_11ebe808;
L_11ebe7ee:;
  /* 11ebe7ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ebe7f1 push eax */
  push32((uint32_t)(EAX));
  /* 11ebe7f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebe7f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe7f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebe7f9 push edx */
  push32((uint32_t)(EDX));
  /* 11ebe7fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe7fd push eax */
  push32((uint32_t)(EAX));
  /* 11ebe7fe call dword ptr [0x11ee531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee531c))), 0x11ebe804u);
  /* 11ebe804 jmp 0x11ebe808 */
  goto L_11ebe808;
L_11ebe806:;
  /* 11ebe806 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ebe808:;
  /* 11ebe808 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11ebe80b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebe80e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ebe815 pop edi */
  EDI = (pop32());
  /* 11ebe816 pop esi */
  ESI = (pop32());
  /* 11ebe817 pop ebx */
  EBX = (pop32());
  /* 11ebe818 mov esp, ebp */
  ESP = (EBP);
  /* 11ebe81a pop ebp */
  EBP = (pop32());
  /* 11ebe81b ret  */
  ESPCHK(0x11ebe660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e820 @ 0x11ebe820 (727 bytes, 263 insns) */
void f_11ebe820(void) {
  FTRACE(0x11ebe820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebe820 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebe821 mov ebp, esp */
  EBP = (ESP);
  /* 11ebe823 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ebe825 push 0x11ede328 */
  push32((uint32_t)(0x11ede328u));
  /* 11ebe82a push 0x11ebf538 */
  push32((uint32_t)(0x11ebf538u));
  /* 11ebe82f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ebe835 push eax */
  push32((uint32_t)(EAX));
  /* 11ebe836 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11ebe83d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe840 push ebx */
  push32((uint32_t)(EBX));
  /* 11ebe841 push esi */
  push32((uint32_t)(ESI));
  /* 11ebe842 push edi */
  push32((uint32_t)(EDI));
  /* 11ebe843 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ebe846 cmp dword ptr [0x11ee29a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee29a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe84d jne 0x11ebe8a6 */
  if (!C.zf) goto L_11ebe8a6;
  /* 11ebe84f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebe851 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebe853 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ebe855 push 0x11ede314 */
  push32((uint32_t)(0x11ede314u));
  /* 11ebe85a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ebe85f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebe861 call dword ptr [0x11ee5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5314))), 0x11ebe867u);
  /* 11ebe867 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebe869 je 0x11ebe877 */
  if (C.zf) goto L_11ebe877;
  /* 11ebe86b mov dword ptr [0x11ee29a0], 1 */
  w32((uint32_t)(0x11ee29a0), (0x1u));
  /* 11ebe875 jmp 0x11ebe8a6 */
  goto L_11ebe8a6;
L_11ebe877:;
  /* 11ebe877 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebe879 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebe87b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ebe87d push 0x11ede310 */
  push32((uint32_t)(0x11ede310u));
  /* 11ebe882 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ebe887 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebe889 call dword ptr [0x11ee5318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5318))), 0x11ebe88fu);
  /* 11ebe88f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebe891 je 0x11ebe89f */
  if (C.zf) goto L_11ebe89f;
  /* 11ebe893 mov dword ptr [0x11ee29a0], 2 */
  w32((uint32_t)(0x11ee29a0), (0x2u));
  /* 11ebe89d jmp 0x11ebe8a6 */
  goto L_11ebe8a6;
L_11ebe89f:;
  /* 11ebe89f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebe8a1 jmp 0x11ebeb11 */
  goto L_11ebeb11;
L_11ebe8a6:;
  /* 11ebe8a6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe8aa jle 0x11ebe8bf */
  if ((C.zf||C.sf!=C.of)) goto L_11ebe8bf;
  /* 11ebe8ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ebe8af push eax */
  push32((uint32_t)(EAX));
  /* 11ebe8b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebe8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe8b4 call 0x11ebeb30 */
  push32(0x11ebe8b9u); f_11ebeb30();
  /* 11ebe8b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe8bc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11ebe8bf:;
  /* 11ebe8bf cmp dword ptr [0x11ee29a0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11ee29a0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe8c6 jne 0x11ebe8eb */
  if (!C.zf) goto L_11ebe8eb;
  /* 11ebe8c8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ebe8cb push edx */
  push32((uint32_t)(EDX));
  /* 11ebe8cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ebe8cf push eax */
  push32((uint32_t)(EAX));
  /* 11ebe8d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ebe8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe8d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebe8d7 push edx */
  push32((uint32_t)(EDX));
  /* 11ebe8d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe8db push eax */
  push32((uint32_t)(EAX));
  /* 11ebe8dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe8df push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe8e0 call dword ptr [0x11ee5318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5318))), 0x11ebe8e6u);
  /* 11ebe8e6 jmp 0x11ebeb11 */
  goto L_11ebeb11;
L_11ebe8eb:;
  /* 11ebe8eb cmp dword ptr [0x11ee29a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee29a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe8f2 jne 0x11ebeb0f */
  if (!C.zf) goto L_11ebeb0f;
  /* 11ebe8f8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe8fc jne 0x11ebe907 */
  if (!C.zf) goto L_11ebe907;
  /* 11ebe8fe mov edx, dword ptr [0x11ee2998] */
  EDX = (r32((uint32_t)(0x11ee2998)));
  /* 11ebe904 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11ebe907:;
  /* 11ebe907 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebe909 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebe90b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ebe90e push eax */
  push32((uint32_t)(EAX));
  /* 11ebe90f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebe912 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe913 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ebe916 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ebe918 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebe91a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebe91d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe920 push edx */
  push32((uint32_t)(EDX));
  /* 11ebe921 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ebe924 push eax */
  push32((uint32_t)(EAX));
  /* 11ebe925 call dword ptr [0x11ee5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5324))), 0x11ebe92bu);
  /* 11ebe92b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ebe92e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe932 jne 0x11ebe93b */
  if (!C.zf) goto L_11ebe93b;
  /* 11ebe934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebe936 jmp 0x11ebeb11 */
  goto L_11ebeb11;
L_11ebe93b:;
  /* 11ebe93b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ebe942 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebe945 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ebe947 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebe94a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ebe94c call 0x11eb95d0 */
  push32(0x11ebe951u); f_11eb95d0();
  /* 11ebe951 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11ebe954 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ebe957 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ebe95a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ebe95d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ebe964 jmp 0x11ebe97d */
  goto L_11ebe97d;
  /* 11ebe966 mov eax, 1 */
  EAX = (0x1u);
  /* 11ebe96b ret  */
  ESPCHK(0x11ebe820u, _esp0);
  ESP += 4; return;
  /* 11ebe96c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebe96f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ebe976 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ebe97d:;
  /* 11ebe97d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe981 jne 0x11ebe98a */
  if (!C.zf) goto L_11ebe98a;
  /* 11ebe983 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebe985 jmp 0x11ebeb11 */
  goto L_11ebeb11;
L_11ebe98a:;
  /* 11ebe98a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebe98d push edx */
  push32((uint32_t)(EDX));
  /* 11ebe98e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebe991 push eax */
  push32((uint32_t)(EAX));
  /* 11ebe992 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ebe995 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe996 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebe999 push edx */
  push32((uint32_t)(EDX));
  /* 11ebe99a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ebe99c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ebe99f push eax */
  push32((uint32_t)(EAX));
  /* 11ebe9a0 call dword ptr [0x11ee5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5324))), 0x11ebe9a6u);
  /* 11ebe9a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebe9a8 jne 0x11ebe9b1 */
  if (!C.zf) goto L_11ebe9b1;
  /* 11ebe9aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebe9ac jmp 0x11ebeb11 */
  goto L_11ebeb11;
L_11ebe9b1:;
  /* 11ebe9b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebe9b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebe9b5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebe9b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe9b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebe9bc push edx */
  push32((uint32_t)(EDX));
  /* 11ebe9bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe9c0 push eax */
  push32((uint32_t)(EAX));
  /* 11ebe9c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebe9c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebe9c5 call dword ptr [0x11ee5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5314))), 0x11ebe9cbu);
  /* 11ebe9cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ebe9ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe9d2 jne 0x11ebe9db */
  if (!C.zf) goto L_11ebe9db;
  /* 11ebe9d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebe9d6 jmp 0x11ebeb11 */
  goto L_11ebeb11;
L_11ebe9db:;
  /* 11ebe9db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebe9de and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebe9e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebe9e6 je 0x11ebea2b */
  if (C.zf) goto L_11ebea2b;
  /* 11ebe9e8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe9ec je 0x11ebea26 */
  if (C.zf) goto L_11ebea26;
  /* 11ebe9ee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebe9f1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebe9f4 jle 0x11ebe9fd */
  if ((C.zf||C.sf!=C.of)) goto L_11ebe9fd;
  /* 11ebe9f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebe9f8 jmp 0x11ebeb11 */
  goto L_11ebeb11;
L_11ebe9fd:;
  /* 11ebe9fd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ebea00 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebea01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ebea04 push edx */
  push32((uint32_t)(EDX));
  /* 11ebea05 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebea08 push eax */
  push32((uint32_t)(EAX));
  /* 11ebea09 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebea0c push ecx */
  push32((uint32_t)(ECX));
  /* 11ebea0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebea10 push edx */
  push32((uint32_t)(EDX));
  /* 11ebea11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebea14 push eax */
  push32((uint32_t)(EAX));
  /* 11ebea15 call dword ptr [0x11ee5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5314))), 0x11ebea1bu);
  /* 11ebea1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebea1d jne 0x11ebea26 */
  if (!C.zf) goto L_11ebea26;
  /* 11ebea1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebea21 jmp 0x11ebeb11 */
  goto L_11ebeb11;
L_11ebea26:;
  /* 11ebea26 jmp 0x11ebeb0a */
  goto L_11ebeb0a;
L_11ebea2b:;
  /* 11ebea2b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebea2e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ebea31 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ebea38 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebea3b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ebea3d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebea40 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ebea42 call 0x11eb95d0 */
  push32(0x11ebea47u); f_11eb95d0();
  /* 11ebea47 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11ebea4a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ebea4d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ebea50 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ebea53 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ebea5a jmp 0x11ebea73 */
  goto L_11ebea73;
  /* 11ebea5c mov eax, 1 */
  EAX = (0x1u);
  /* 11ebea61 ret  */
  ESPCHK(0x11ebe820u, _esp0);
  ESP += 4; return;
  /* 11ebea62 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ebea65 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ebea6c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ebea73:;
  /* 11ebea73 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebea77 jne 0x11ebea80 */
  if (!C.zf) goto L_11ebea80;
  /* 11ebea79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebea7b jmp 0x11ebeb11 */
  goto L_11ebeb11;
L_11ebea80:;
  /* 11ebea80 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebea83 push eax */
  push32((uint32_t)(EAX));
  /* 11ebea84 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebea87 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebea88 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ebea8b push edx */
  push32((uint32_t)(EDX));
  /* 11ebea8c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ebea8f push eax */
  push32((uint32_t)(EAX));
  /* 11ebea90 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebea93 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebea94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebea97 push edx */
  push32((uint32_t)(EDX));
  /* 11ebea98 call dword ptr [0x11ee5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5314))), 0x11ebea9eu);
  /* 11ebea9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebeaa0 jne 0x11ebeaa6 */
  if (!C.zf) goto L_11ebeaa6;
  /* 11ebeaa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebeaa4 jmp 0x11ebeb11 */
  goto L_11ebeb11;
L_11ebeaa6:;
  /* 11ebeaa6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebeaaa jne 0x11ebeada */
  if (!C.zf) goto L_11ebeada;
  /* 11ebeaac push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebeaae push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebeab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebeab2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebeab4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebeab7 push eax */
  push32((uint32_t)(EAX));
  /* 11ebeab8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebeabb push ecx */
  push32((uint32_t)(ECX));
  /* 11ebeabc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ebeac1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ebeac4 push edx */
  push32((uint32_t)(EDX));
  /* 11ebeac5 call dword ptr [0x11ee5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5370))), 0x11ebeacbu);
  /* 11ebeacb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ebeace cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebead2 jne 0x11ebead8 */
  if (!C.zf) goto L_11ebead8;
  /* 11ebead4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebead6 jmp 0x11ebeb11 */
  goto L_11ebeb11;
L_11ebead8:;
  /* 11ebead8 jmp 0x11ebeb0a */
  goto L_11ebeb0a;
L_11ebeada:;
  /* 11ebeada push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebeadc push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebeade mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ebeae1 push eax */
  push32((uint32_t)(EAX));
  /* 11ebeae2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ebeae5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebeae6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ebeae9 push edx */
  push32((uint32_t)(EDX));
  /* 11ebeaea mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ebeaed push eax */
  push32((uint32_t)(EAX));
  /* 11ebeaee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ebeaf3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ebeaf6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebeaf7 call dword ptr [0x11ee5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5370))), 0x11ebeafdu);
  /* 11ebeafd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ebeb00 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebeb04 jne 0x11ebeb0a */
  if (!C.zf) goto L_11ebeb0a;
  /* 11ebeb06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebeb08 jmp 0x11ebeb11 */
  goto L_11ebeb11;
L_11ebeb0a:;
  /* 11ebeb0a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ebeb0d jmp 0x11ebeb11 */
  goto L_11ebeb11;
L_11ebeb0f:;
  /* 11ebeb0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ebeb11:;
  /* 11ebeb11 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11ebeb14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebeb17 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ebeb1e pop edi */
  EDI = (pop32());
  /* 11ebeb1f pop esi */
  ESI = (pop32());
  /* 11ebeb20 pop ebx */
  EBX = (pop32());
  /* 11ebeb21 mov esp, ebp */
  ESP = (EBP);
  /* 11ebeb23 pop ebp */
  EBP = (pop32());
  /* 11ebeb24 ret  */
  ESPCHK(0x11ebe820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb30 @ 0x11ebeb30 (80 bytes, 32 insns) */
void f_11ebeb30(void) {
  FTRACE(0x11ebeb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebeb30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebeb31 mov ebp, esp */
  EBP = (ESP);
  /* 11ebeb33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebeb36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebeb39 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ebeb3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebeb3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ebeb42:;
  /* 11ebeb42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebeb45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebeb48 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebeb4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ebeb4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebeb50 je 0x11ebeb67 */
  if (C.zf) goto L_11ebeb67;
  /* 11ebeb52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebeb55 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ebeb58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebeb5a je 0x11ebeb67 */
  if (C.zf) goto L_11ebeb67;
  /* 11ebeb5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebeb5f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebeb62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebeb65 jmp 0x11ebeb42 */
  goto L_11ebeb42;
L_11ebeb67:;
  /* 11ebeb67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebeb6a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ebeb6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebeb6f jne 0x11ebeb79 */
  if (!C.zf) goto L_11ebeb79;
  /* 11ebeb71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebeb74 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebeb77 jmp 0x11ebeb7c */
  goto L_11ebeb7c;
L_11ebeb79:;
  /* 11ebeb79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11ebeb7c:;
  /* 11ebeb7c mov esp, ebp */
  ESP = (EBP);
  /* 11ebeb7e pop ebp */
  EBP = (pop32());
  /* 11ebeb7f ret  */
  ESPCHK(0x11ebeb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb80 @ 0x11ebeb80 (130 bytes, 43 insns) */
void f_11ebeb80(void) {
  FTRACE(0x11ebeb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebeb80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebeb81 mov ebp, esp */
  EBP = (ESP);
  /* 11ebeb83 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebeb84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebeb87 cmp eax, dword ptr [0x11ee429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebeb8d jae 0x11ebebb1 */
  if (!C.cf) goto L_11ebebb1;
  /* 11ebeb8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebeb92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ebeb95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebeb98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebeb9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebeb9e mov eax, dword ptr [ecx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11ee4160)));
  /* 11ebeba5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ebebaa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebebad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebebaf jne 0x11ebebcc */
  if (!C.zf) goto L_11ebebcc;
L_11ebebb1:;
  /* 11ebebb1 call 0x11ebe300 */
  push32(0x11ebebb6u); f_11ebe300();
  /* 11ebebb6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ebebbc call 0x11ebe310 */
  push32(0x11ebebc1u); f_11ebe310();
  /* 11ebebc1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ebebc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebebca jmp 0x11ebebfe */
  goto L_11ebebfe;
L_11ebebcc:;
  /* 11ebebcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebebcf push edx */
  push32((uint32_t)(EDX));
  /* 11ebebd0 call 0x11ebfb20 */
  push32(0x11ebebd5u); f_11ebfb20();
  /* 11ebebd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebebd8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebebdb push eax */
  push32((uint32_t)(EAX));
  /* 11ebebdc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebebdf push ecx */
  push32((uint32_t)(ECX));
  /* 11ebebe0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebebe3 push edx */
  push32((uint32_t)(EDX));
  /* 11ebebe4 call 0x11ebec10 */
  push32(0x11ebebe9u); f_11ebec10();
  /* 11ebebe9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebebec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebebef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebebf2 push eax */
  push32((uint32_t)(EAX));
  /* 11ebebf3 call 0x11ebfbb0 */
  push32(0x11ebebf8u); f_11ebfbb0();
  /* 11ebebf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebebfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ebebfe:;
  /* 11ebebfe mov esp, ebp */
  ESP = (EBP);
  /* 11ebec00 pop ebp */
  EBP = (pop32());
  /* 11ebec01 ret  */
  ESPCHK(0x11ebeb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec10 @ 0x11ebec10 (178 bytes, 56 insns) */
void f_11ebec10(void) {
  FTRACE(0x11ebec10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebec10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebec11 mov ebp, esp */
  EBP = (ESP);
  /* 11ebec13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebec16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebec19 push eax */
  push32((uint32_t)(EAX));
  /* 11ebec1a call 0x11ebf9a0 */
  push32(0x11ebec1fu); f_11ebf9a0();
  /* 11ebec1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebec22 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ebec25 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebec29 jne 0x11ebec3e */
  if (!C.zf) goto L_11ebec3e;
  /* 11ebec2b call 0x11ebe300 */
  push32(0x11ebec30u); f_11ebe300();
  /* 11ebec30 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ebec36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebec39 jmp 0x11ebecbe */
  goto L_11ebecbe;
L_11ebec3e:;
  /* 11ebec3e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebec41 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebec42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebec44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebec47 push edx */
  push32((uint32_t)(EDX));
  /* 11ebec48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebec4b push eax */
  push32((uint32_t)(EAX));
  /* 11ebec4c call dword ptr [0x11ee5310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5310))), 0x11ebec52u);
  /* 11ebec52 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ebec55 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebec59 jne 0x11ebec66 */
  if (!C.zf) goto L_11ebec66;
  /* 11ebec5b call dword ptr [0x11ee53b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53b4))), 0x11ebec61u);
  /* 11ebec61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebec64 jmp 0x11ebec6d */
  goto L_11ebec6d;
L_11ebec66:;
  /* 11ebec66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ebec6d:;
  /* 11ebec6d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebec71 je 0x11ebec84 */
  if (C.zf) goto L_11ebec84;
  /* 11ebec73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebec76 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebec77 call 0x11ebe260 */
  push32(0x11ebec7cu); f_11ebe260();
  /* 11ebec7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebec7f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebec82 jmp 0x11ebecbe */
  goto L_11ebecbe;
L_11ebec84:;
  /* 11ebec84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebec87 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11ebec8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebec8d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebec90 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebec93 mov ecx, dword ptr [edx*4 + 0x11ee4160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11ee4160)));
  /* 11ebec9a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11ebec9e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11ebeca1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebeca4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ebeca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebecaa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebecad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebecb0 mov eax, dword ptr [eax*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11ee4160)));
  /* 11ebecb7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11ebecbb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ebecbe:;
  /* 11ebecbe mov esp, ebp */
  ESP = (EBP);
  /* 11ebecc0 pop ebp */
  EBP = (pop32());
  /* 11ebecc1 ret  */
  ESPCHK(0x11ebec10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecd0 @ 0x11ebecd0 (130 bytes, 43 insns) */
void f_11ebecd0(void) {
  FTRACE(0x11ebecd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebecd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebecd1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebecd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebecd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebecd7 cmp eax, dword ptr [0x11ee429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebecdd jae 0x11ebed01 */
  if (!C.cf) goto L_11ebed01;
  /* 11ebecdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebece2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ebece5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebece8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebeceb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebecee mov eax, dword ptr [ecx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11ee4160)));
  /* 11ebecf5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ebecfa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebecfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebecff jne 0x11ebed1c */
  if (!C.zf) goto L_11ebed1c;
L_11ebed01:;
  /* 11ebed01 call 0x11ebe300 */
  push32(0x11ebed06u); f_11ebe300();
  /* 11ebed06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ebed0c call 0x11ebe310 */
  push32(0x11ebed11u); f_11ebe310();
  /* 11ebed11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ebed17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebed1a jmp 0x11ebed4e */
  goto L_11ebed4e;
L_11ebed1c:;
  /* 11ebed1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebed1f push edx */
  push32((uint32_t)(EDX));
  /* 11ebed20 call 0x11ebfb20 */
  push32(0x11ebed25u); f_11ebfb20();
  /* 11ebed25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebed28 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebed2b push eax */
  push32((uint32_t)(EAX));
  /* 11ebed2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebed2f push ecx */
  push32((uint32_t)(ECX));
  /* 11ebed30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebed33 push edx */
  push32((uint32_t)(EDX));
  /* 11ebed34 call 0x11ebed60 */
  push32(0x11ebed39u); f_11ebed60();
  /* 11ebed39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebed3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebed3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebed42 push eax */
  push32((uint32_t)(EAX));
  /* 11ebed43 call 0x11ebfbb0 */
  push32(0x11ebed48u); f_11ebfbb0();
  /* 11ebed48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebed4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ebed4e:;
  /* 11ebed4e mov esp, ebp */
  ESP = (EBP);
  /* 11ebed50 pop ebp */
  EBP = (pop32());
  /* 11ebed51 ret  */
  ESPCHK(0x11ebecd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed60 @ 0x11ebed60 (627 bytes, 182 insns) */
void f_11ebed60(void) {
  FTRACE(0x11ebed60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebed60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebed61 mov ebp, esp */
  EBP = (ESP);
  /* 11ebed63 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebed69 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ebed70 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebed73 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11ebed79 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebed7d jne 0x11ebed86 */
  if (!C.zf) goto L_11ebed86;
  /* 11ebed7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebed81 jmp 0x11ebefcf */
  goto L_11ebefcf;
L_11ebed86:;
  /* 11ebed86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebed89 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ebed8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebed8f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebed92 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebed95 mov eax, dword ptr [ecx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11ee4160)));
  /* 11ebed9c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ebeda1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebeda4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebeda6 je 0x11ebedb8 */
  if (C.zf) goto L_11ebedb8;
  /* 11ebeda8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebedaa push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebedac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebedaf push edx */
  push32((uint32_t)(EDX));
  /* 11ebedb0 call 0x11ebec10 */
  push32(0x11ebedb5u); f_11ebec10();
  /* 11ebedb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebedb8:;
  /* 11ebedb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebedbb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ebedbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebedc1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebedc4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebedc7 mov edx, dword ptr [eax*4 + 0x11ee4160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11ee4160)));
  /* 11ebedce movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11ebedd3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebedd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebedda je 0x11ebeeec */
  if (C.zf) goto L_11ebeeec;
  /* 11ebede0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebede3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ebede6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11ebeded:;
  /* 11ebeded mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebedf0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebedf3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebedf6 jae 0x11ebeeea */
  if (!C.cf) goto L_11ebeeea;
  /* 11ebedfc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11ebee02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ebee05:;
  /* 11ebee05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebee08 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11ebee0e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebee10 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebee16 jge 0x11ebee77 */
  if ((C.sf==C.of)) goto L_11ebee77;
  /* 11ebee18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebee1b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebee1e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebee21 jae 0x11ebee77 */
  if (!C.cf) goto L_11ebee77;
  /* 11ebee23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebee26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ebee28 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11ebee2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebee31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebee34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebee37 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11ebee3e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebee41 jne 0x11ebee61 */
  if (!C.zf) goto L_11ebee61;
  /* 11ebee43 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11ebee49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebee4c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11ebee52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebee55 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11ebee58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebee5b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebee5e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ebee61:;
  /* 11ebee61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebee64 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11ebee6a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11ebee6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebee6f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebee72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ebee75 jmp 0x11ebee05 */
  goto L_11ebee05;
L_11ebee77:;
  /* 11ebee77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebee79 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11ebee7f push edx */
  push32((uint32_t)(EDX));
  /* 11ebee80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebee83 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11ebee89 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebee8b push eax */
  push32((uint32_t)(EAX));
  /* 11ebee8c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11ebee92 push edx */
  push32((uint32_t)(EDX));
  /* 11ebee93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebee96 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ebee99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebee9c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebee9f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebeea2 mov edx, dword ptr [eax*4 + 0x11ee4160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11ee4160)));
  /* 11ebeea9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11ebeeac push eax */
  push32((uint32_t)(EAX));
  /* 11ebeead call dword ptr [0x11ee5390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5390))), 0x11ebeeb3u);
  /* 11ebeeb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebeeb5 je 0x11ebeeda */
  if (C.zf) goto L_11ebeeda;
  /* 11ebeeb7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebeeba add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebeec0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ebeec3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebeec6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11ebeecc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebeece cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebeed4 jge 0x11ebeed8 */
  if ((C.sf==C.of)) goto L_11ebeed8;
  /* 11ebeed6 jmp 0x11ebeeea */
  goto L_11ebeeea;
L_11ebeed8:;
  /* 11ebeed8 jmp 0x11ebeee5 */
  goto L_11ebeee5;
L_11ebeeda:;
  /* 11ebeeda call dword ptr [0x11ee53b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53b4))), 0x11ebeee0u);
  /* 11ebeee0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ebeee3 jmp 0x11ebeeea */
  goto L_11ebeeea;
L_11ebeee5:;
  /* 11ebeee5 jmp 0x11ebeded */
  goto L_11ebeded;
L_11ebeeea:;
  /* 11ebeeea jmp 0x11ebef3c */
  goto L_11ebef3c;
L_11ebeeec:;
  /* 11ebeeec push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebeeee lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11ebeef4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebeef5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ebeef8 push edx */
  push32((uint32_t)(EDX));
  /* 11ebeef9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebeefc push eax */
  push32((uint32_t)(EAX));
  /* 11ebeefd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebef00 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ebef03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebef06 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebef09 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebef0c mov eax, dword ptr [ecx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11ee4160)));
  /* 11ebef13 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11ebef16 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebef17 call dword ptr [0x11ee5390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5390))), 0x11ebef1du);
  /* 11ebef1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebef1f je 0x11ebef33 */
  if (C.zf) goto L_11ebef33;
  /* 11ebef21 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ebef28 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11ebef2e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ebef31 jmp 0x11ebef3c */
  goto L_11ebef3c;
L_11ebef33:;
  /* 11ebef33 call dword ptr [0x11ee53b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53b4))), 0x11ebef39u);
  /* 11ebef39 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ebef3c:;
  /* 11ebef3c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebef40 jne 0x11ebefc6 */
  if (!C.zf) goto L_11ebefc6;
  /* 11ebef46 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebef4a je 0x11ebef7a */
  if (C.zf) goto L_11ebef7a;
  /* 11ebef4c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebef50 jne 0x11ebef69 */
  if (!C.zf) goto L_11ebef69;
  /* 11ebef52 call 0x11ebe300 */
  push32(0x11ebef57u); f_11ebe300();
  /* 11ebef57 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ebef5d call 0x11ebe310 */
  push32(0x11ebef62u); f_11ebe310();
  /* 11ebef62 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebef65 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ebef67 jmp 0x11ebef75 */
  goto L_11ebef75;
L_11ebef69:;
  /* 11ebef69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebef6c push edx */
  push32((uint32_t)(EDX));
  /* 11ebef6d call 0x11ebe260 */
  push32(0x11ebef72u); f_11ebe260();
  /* 11ebef72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebef75:;
  /* 11ebef75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebef78 jmp 0x11ebefcf */
  goto L_11ebefcf;
L_11ebef7a:;
  /* 11ebef7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebef7d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ebef80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebef83 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebef86 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebef89 mov edx, dword ptr [eax*4 + 0x11ee4160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11ee4160)));
  /* 11ebef90 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11ebef95 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebef98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebef9a je 0x11ebefab */
  if (C.zf) goto L_11ebefab;
  /* 11ebef9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebef9f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ebefa2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebefa5 jne 0x11ebefab */
  if (!C.zf) goto L_11ebefab;
  /* 11ebefa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebefa9 jmp 0x11ebefcf */
  goto L_11ebefcf;
L_11ebefab:;
  /* 11ebefab call 0x11ebe300 */
  push32(0x11ebefb0u); f_11ebe300();
  /* 11ebefb0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11ebefb6 call 0x11ebe310 */
  push32(0x11ebefbbu); f_11ebe310();
  /* 11ebefbb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ebefc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebefc4 jmp 0x11ebefcf */
  goto L_11ebefcf;
L_11ebefc6:;
  /* 11ebefc6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ebefc9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11ebefcf:;
  /* 11ebefcf mov esp, ebp */
  ESP = (EBP);
  /* 11ebefd1 pop ebp */
  EBP = (pop32());
  /* 11ebefd2 ret  */
  ESPCHK(0x11ebed60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efe0 @ 0x11ebefe0 (199 bytes, 68 insns) */
void f_11ebefe0(void) {
  FTRACE(0x11ebefe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebefe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebefe1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebefe3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebefe4 push ebx */
  push32((uint32_t)(EBX));
  /* 11ebefe5 push esi */
  push32((uint32_t)(ESI));
  /* 11ebefe6 push edi */
  push32((uint32_t)(EDI));
L_11ebefe7:;
  /* 11ebefe7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebefeb jne 0x11ebf00b */
  if (!C.zf) goto L_11ebf00b;
  /* 11ebefed push 0x11ede274 */
  push32((uint32_t)(0x11ede274u));
  /* 11ebeff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebeff4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11ebeff6 push 0x11ede340 */
  push32((uint32_t)(0x11ede340u));
  /* 11ebeffb push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebeffd call 0x11eb54f0 */
  push32(0x11ebf002u); f_11eb54f0();
  /* 11ebf002 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf005 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf008 jne 0x11ebf00b */
  if (!C.zf) goto L_11ebf00b;
  /* 11ebf00a int3  */
  x86_unimpl("int3 @ 0x11ebf00a");
L_11ebf00b:;
  /* 11ebf00b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebf00d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebf00f jne 0x11ebefe7 */
  if (!C.zf) goto L_11ebefe7;
  /* 11ebf011 mov ecx, dword ptr [0x11ee29a4] */
  ECX = (r32((uint32_t)(0x11ee29a4)));
  /* 11ebf017 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf01a mov dword ptr [0x11ee29a4], ecx */
  w32((uint32_t)(0x11ee29a4), (ECX));
  /* 11ebf020 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf023 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ebf026 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11ebf028 push 0x11ede340 */
  push32((uint32_t)(0x11ede340u));
  /* 11ebf02d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebf02f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11ebf034 call 0x11eb6430 */
  push32(0x11ebf039u); f_11eb6430();
  /* 11ebf039 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf03c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf03f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11ebf042 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf045 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf049 je 0x11ebf066 */
  if (C.zf) goto L_11ebf066;
  /* 11ebf04b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf04e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ebf051 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebf054 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf057 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11ebf05a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf05d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11ebf064 jmp 0x11ebf08b */
  goto L_11ebf08b;
L_11ebf066:;
  /* 11ebf066 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf069 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ebf06c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebf06f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf072 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11ebf075 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf078 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf07b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf07e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ebf081 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf084 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_11ebf08b:;
  /* 11ebf08b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf08e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf091 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ebf094 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ebf096 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf099 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ebf0a0 pop edi */
  EDI = (pop32());
  /* 11ebf0a1 pop esi */
  ESI = (pop32());
  /* 11ebf0a2 pop ebx */
  EBX = (pop32());
  /* 11ebf0a3 mov esp, ebp */
  ESP = (EBP);
  /* 11ebf0a5 pop ebp */
  EBP = (pop32());
  /* 11ebf0a6 ret  */
  ESPCHK(0x11ebefe0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11ebf0b0 (50 bytes, 17 insns) */
void f_11ebf0b0(void) {
  FTRACE(0x11ebf0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf0b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebf0b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf0b6 cmp eax, dword ptr [0x11ee429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf0bc jb 0x11ebf0c2 */
  if (C.cf) goto L_11ebf0c2;
  /* 11ebf0be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebf0c0 jmp 0x11ebf0e0 */
  goto L_11ebf0e0;
L_11ebf0c2:;
  /* 11ebf0c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf0c5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ebf0c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf0cb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebf0ce imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebf0d1 mov eax, dword ptr [ecx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11ee4160)));
  /* 11ebf0d8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ebf0dd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11ebf0e0:;
  /* 11ebf0e0 pop ebp */
  EBP = (pop32());
  /* 11ebf0e1 ret  */
  ESPCHK(0x11ebf0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0f0 @ 0x11ebf0f0 (300 bytes, 80 insns) */
void f_11ebf0f0(void) {
  FTRACE(0x11ebf0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf0f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebf0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebf0f4 cmp dword ptr [0x11ee3e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee3e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf0fb jne 0x11ebf109 */
  if (!C.zf) goto L_11ebf109;
  /* 11ebf0fd mov dword ptr [0x11ee3e60], 0x200 */
  w32((uint32_t)(0x11ee3e60), (0x200u));
  /* 11ebf107 jmp 0x11ebf11c */
  goto L_11ebf11c;
L_11ebf109:;
  /* 11ebf109 cmp dword ptr [0x11ee3e60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11ee3e60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf110 jge 0x11ebf11c */
  if ((C.sf==C.of)) goto L_11ebf11c;
  /* 11ebf112 mov dword ptr [0x11ee3e60], 0x14 */
  w32((uint32_t)(0x11ee3e60), (0x14u));
L_11ebf11c:;
  /* 11ebf11c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11ebf121 push 0x11ede34c */
  push32((uint32_t)(0x11ede34cu));
  /* 11ebf126 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebf128 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ebf12a mov eax, dword ptr [0x11ee3e60] */
  EAX = (r32((uint32_t)(0x11ee3e60)));
  /* 11ebf12f push eax */
  push32((uint32_t)(EAX));
  /* 11ebf130 call 0x11eb6840 */
  push32(0x11ebf135u); f_11eb6840();
  /* 11ebf135 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf138 mov dword ptr [0x11ee2b18], eax */
  w32((uint32_t)(0x11ee2b18), (EAX));
  /* 11ebf13d cmp dword ptr [0x11ee2b18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2b18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf144 jne 0x11ebf185 */
  if (!C.zf) goto L_11ebf185;
  /* 11ebf146 mov dword ptr [0x11ee3e60], 0x14 */
  w32((uint32_t)(0x11ee3e60), (0x14u));
  /* 11ebf150 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11ebf155 push 0x11ede34c */
  push32((uint32_t)(0x11ede34cu));
  /* 11ebf15a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebf15c push 4 */
  push32((uint32_t)(0x4u));
  /* 11ebf15e mov ecx, dword ptr [0x11ee3e60] */
  ECX = (r32((uint32_t)(0x11ee3e60)));
  /* 11ebf164 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebf165 call 0x11eb6840 */
  push32(0x11ebf16au); f_11eb6840();
  /* 11ebf16a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf16d mov dword ptr [0x11ee2b18], eax */
  w32((uint32_t)(0x11ee2b18), (EAX));
  /* 11ebf172 cmp dword ptr [0x11ee2b18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2b18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf179 jne 0x11ebf185 */
  if (!C.zf) goto L_11ebf185;
  /* 11ebf17b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11ebf17d call 0x11eb53a0 */
  push32(0x11ebf182u); f_11eb53a0();
  /* 11ebf182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebf185:;
  /* 11ebf185 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ebf18c jmp 0x11ebf197 */
  goto L_11ebf197;
L_11ebf18e:;
  /* 11ebf18e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf191 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf194 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ebf197:;
  /* 11ebf197 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf19b jge 0x11ebf1b6 */
  if ((C.sf==C.of)) goto L_11ebf1b6;
  /* 11ebf19d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf1a0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ebf1a3 add eax, 0x11ee1120 */
  { uint32_t _a=(EAX),_b=(0x11ee1120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf1a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf1ab mov edx, dword ptr [0x11ee2b18] */
  EDX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebf1b1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11ebf1b4 jmp 0x11ebf18e */
  goto L_11ebf18e;
L_11ebf1b6:;
  /* 11ebf1b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ebf1bd jmp 0x11ebf1c8 */
  goto L_11ebf1c8;
L_11ebf1bf:;
  /* 11ebf1bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf1c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf1c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ebf1c8:;
  /* 11ebf1c8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf1cc jge 0x11ebf218 */
  if ((C.sf==C.of)) goto L_11ebf218;
  /* 11ebf1ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf1d1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ebf1d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf1d7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebf1da imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebf1dd mov eax, dword ptr [ecx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11ee4160)));
  /* 11ebf1e4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf1e8 je 0x11ebf206 */
  if (C.zf) goto L_11ebf206;
  /* 11ebf1ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf1ed sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ebf1f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf1f3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebf1f6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebf1f9 mov eax, dword ptr [ecx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11ee4160)));
  /* 11ebf200 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf204 jne 0x11ebf216 */
  if (!C.zf) goto L_11ebf216;
L_11ebf206:;
  /* 11ebf206 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf209 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ebf20c mov dword ptr [ecx + 0x11ee1130], 0xffffffff */
  w32((uint32_t)(ECX + 0x11ee1130), (0xffffffffu));
L_11ebf216:;
  /* 11ebf216 jmp 0x11ebf1bf */
  goto L_11ebf1bf;
L_11ebf218:;
  /* 11ebf218 mov esp, ebp */
  ESP = (EBP);
  /* 11ebf21a pop ebp */
  EBP = (pop32());
  /* 11ebf21b ret  */
  ESPCHK(0x11ebf0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f220 @ 0x11ebf220 (26 bytes, 9 insns) */
void f_11ebf220(void) {
  FTRACE(0x11ebf220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf220 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf221 mov ebp, esp */
  EBP = (ESP);
  /* 11ebf223 call 0x11ebfe20 */
  push32(0x11ebf228u); f_11ebfe20();
  /* 11ebf228 movsx eax, byte ptr [0x11ee27bc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11ee27bc))));
  /* 11ebf22f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebf231 je 0x11ebf238 */
  if (C.zf) goto L_11ebf238;
  /* 11ebf233 call 0x11ebfbe0 */
  push32(0x11ebf238u); f_11ebfbe0();
L_11ebf238:;
  /* 11ebf238 pop ebp */
  EBP = (pop32());
  /* 11ebf239 ret  */
  ESPCHK(0x11ebf220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f240 @ 0x11ebf240 (61 bytes, 20 insns) */
void f_11ebf240(void) {
  FTRACE(0x11ebf240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf240 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf241 mov ebp, esp */
  EBP = (ESP);
  /* 11ebf243 cmp dword ptr [ebp + 8], 0x11ee1120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11ee1120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf24a jb 0x11ebf26e */
  if (C.cf) goto L_11ebf26e;
  /* 11ebf24c cmp dword ptr [ebp + 8], 0x11ee1380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11ee1380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf253 ja 0x11ebf26e */
  if ((!C.cf&&!C.zf)) goto L_11ebf26e;
  /* 11ebf255 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf258 sub eax, 0x11ee1120 */
  { uint32_t _a=(EAX),_b=(0x11ee1120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebf25d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ebf260 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf263 push eax */
  push32((uint32_t)(EAX));
  /* 11ebf264 call 0x11eb9e30 */
  push32(0x11ebf269u); f_11eb9e30();
  /* 11ebf269 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf26c jmp 0x11ebf27b */
  goto L_11ebf27b;
L_11ebf26e:;
  /* 11ebf26e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf271 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf274 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebf275 call dword ptr [0x11ee534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee534c))), 0x11ebf27bu);
L_11ebf27b:;
  /* 11ebf27b pop ebp */
  EBP = (pop32());
  /* 11ebf27c ret  */
  ESPCHK(0x11ebf240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f280 @ 0x11ebf280 (41 bytes, 16 insns) */
void f_11ebf280(void) {
  FTRACE(0x11ebf280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf280 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf281 mov ebp, esp */
  EBP = (ESP);
  /* 11ebf283 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf287 jge 0x11ebf29a */
  if ((C.sf==C.of)) goto L_11ebf29a;
  /* 11ebf289 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf28c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf28f push eax */
  push32((uint32_t)(EAX));
  /* 11ebf290 call 0x11eb9e30 */
  push32(0x11ebf295u); f_11eb9e30();
  /* 11ebf295 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf298 jmp 0x11ebf2a7 */
  goto L_11ebf2a7;
L_11ebf29a:;
  /* 11ebf29a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebf29d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf2a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebf2a1 call dword ptr [0x11ee534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee534c))), 0x11ebf2a7u);
L_11ebf2a7:;
  /* 11ebf2a7 pop ebp */
  EBP = (pop32());
  /* 11ebf2a8 ret  */
  ESPCHK(0x11ebf280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2b0 @ 0x11ebf2b0 (61 bytes, 20 insns) */
void f_11ebf2b0(void) {
  FTRACE(0x11ebf2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf2b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebf2b3 cmp dword ptr [ebp + 8], 0x11ee1120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11ee1120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf2ba jb 0x11ebf2de */
  if (C.cf) goto L_11ebf2de;
  /* 11ebf2bc cmp dword ptr [ebp + 8], 0x11ee1380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11ee1380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf2c3 ja 0x11ebf2de */
  if ((!C.cf&&!C.zf)) goto L_11ebf2de;
  /* 11ebf2c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf2c8 sub eax, 0x11ee1120 */
  { uint32_t _a=(EAX),_b=(0x11ee1120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebf2cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ebf2d0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf2d3 push eax */
  push32((uint32_t)(EAX));
  /* 11ebf2d4 call 0x11eb9ed0 */
  push32(0x11ebf2d9u); f_11eb9ed0();
  /* 11ebf2d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf2dc jmp 0x11ebf2eb */
  goto L_11ebf2eb;
L_11ebf2de:;
  /* 11ebf2de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf2e1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf2e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebf2e5 call dword ptr [0x11ee5348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5348))), 0x11ebf2ebu);
L_11ebf2eb:;
  /* 11ebf2eb pop ebp */
  EBP = (pop32());
  /* 11ebf2ec ret  */
  ESPCHK(0x11ebf2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2f0 @ 0x11ebf2f0 (41 bytes, 16 insns) */
void f_11ebf2f0(void) {
  FTRACE(0x11ebf2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf2f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebf2f3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf2f7 jge 0x11ebf30a */
  if ((C.sf==C.of)) goto L_11ebf30a;
  /* 11ebf2f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf2fc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf2ff push eax */
  push32((uint32_t)(EAX));
  /* 11ebf300 call 0x11eb9ed0 */
  push32(0x11ebf305u); f_11eb9ed0();
  /* 11ebf305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf308 jmp 0x11ebf317 */
  goto L_11ebf317;
L_11ebf30a:;
  /* 11ebf30a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebf30d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf310 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebf311 call dword ptr [0x11ee5348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5348))), 0x11ebf317u);
L_11ebf317:;
  /* 11ebf317 pop ebp */
  EBP = (pop32());
  /* 11ebf318 ret  */
  ESPCHK(0x11ebf2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f320 @ 0x11ebf320 (119 bytes, 34 insns) */
void f_11ebf320(void) {
  FTRACE(0x11ebf320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf320 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf321 mov ebp, esp */
  EBP = (ESP);
  /* 11ebf323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebf326 push 0x11ee2b14 */
  push32((uint32_t)(0x11ee2b14u));
  /* 11ebf32b call dword ptr [0x11ee53a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53a4))), 0x11ebf331u);
  /* 11ebf331 cmp dword ptr [0x11ee2b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf338 je 0x11ebf358 */
  if (C.zf) goto L_11ebf358;
  /* 11ebf33a push 0x11ee2b14 */
  push32((uint32_t)(0x11ee2b14u));
  /* 11ebf33f call dword ptr [0x11ee5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5394))), 0x11ebf345u);
  /* 11ebf345 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ebf347 call 0x11eb9e30 */
  push32(0x11ebf34cu); f_11eb9e30();
  /* 11ebf34c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf34f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ebf356 jmp 0x11ebf35f */
  goto L_11ebf35f;
L_11ebf358:;
  /* 11ebf358 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ebf35f:;
  /* 11ebf35f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11ebf363 push eax */
  push32((uint32_t)(EAX));
  /* 11ebf364 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf367 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebf368 call 0x11ebf3a0 */
  push32(0x11ebf36du); f_11ebf3a0();
  /* 11ebf36d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf370 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ebf373 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf377 je 0x11ebf385 */
  if (C.zf) goto L_11ebf385;
  /* 11ebf379 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ebf37b call 0x11eb9ed0 */
  push32(0x11ebf380u); f_11eb9ed0();
  /* 11ebf380 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf383 jmp 0x11ebf390 */
  goto L_11ebf390;
L_11ebf385:;
  /* 11ebf385 push 0x11ee2b14 */
  push32((uint32_t)(0x11ee2b14u));
  /* 11ebf38a call dword ptr [0x11ee5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5394))), 0x11ebf390u);
L_11ebf390:;
  /* 11ebf390 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebf393 mov esp, ebp */
  ESP = (EBP);
  /* 11ebf395 pop ebp */
  EBP = (pop32());
  /* 11ebf396 ret  */
  ESPCHK(0x11ebf320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3a0 @ 0x11ebf3a0 (160 bytes, 50 insns) */
void f_11ebf3a0(void) {
  FTRACE(0x11ebf3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf3a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebf3a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebf3a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf3aa jne 0x11ebf3b3 */
  if (!C.zf) goto L_11ebf3b3;
  /* 11ebf3ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebf3ae jmp 0x11ebf43c */
  goto L_11ebf43c;
L_11ebf3b3:;
  /* 11ebf3b3 cmp dword ptr [0x11ee2988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf3ba jne 0x11ebf3ea */
  if (!C.zf) goto L_11ebf3ea;
  /* 11ebf3bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebf3bf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebf3c4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf3c9 jle 0x11ebf3db */
  if ((C.zf||C.sf!=C.of)) goto L_11ebf3db;
  /* 11ebf3cb call 0x11ebe300 */
  push32(0x11ebf3d0u); f_11ebe300();
  /* 11ebf3d0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11ebf3d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebf3d9 jmp 0x11ebf43c */
  goto L_11ebf43c;
L_11ebf3db:;
  /* 11ebf3db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf3de mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11ebf3e1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11ebf3e3 mov eax, 1 */
  EAX = (0x1u);
  /* 11ebf3e8 jmp 0x11ebf43c */
  goto L_11ebf43c;
L_11ebf3ea:;
  /* 11ebf3ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ebf3f1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11ebf3f4 push eax */
  push32((uint32_t)(EAX));
  /* 11ebf3f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebf3f7 mov ecx, dword ptr [0x11ee0ea4] */
  ECX = (r32((uint32_t)(0x11ee0ea4)));
  /* 11ebf3fd push ecx */
  push32((uint32_t)(ECX));
  /* 11ebf3fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf401 push edx */
  push32((uint32_t)(EDX));
  /* 11ebf402 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ebf404 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11ebf407 push eax */
  push32((uint32_t)(EAX));
  /* 11ebf408 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ebf40d mov ecx, dword ptr [0x11ee2998] */
  ECX = (r32((uint32_t)(0x11ee2998)));
  /* 11ebf413 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebf414 call dword ptr [0x11ee5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5370))), 0x11ebf41au);
  /* 11ebf41a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebf41d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf421 je 0x11ebf429 */
  if (C.zf) goto L_11ebf429;
  /* 11ebf423 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf427 je 0x11ebf439 */
  if (C.zf) goto L_11ebf439;
L_11ebf429:;
  /* 11ebf429 call 0x11ebe300 */
  push32(0x11ebf42eu); f_11ebe300();
  /* 11ebf42e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11ebf434 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebf437 jmp 0x11ebf43c */
  goto L_11ebf43c;
L_11ebf439:;
  /* 11ebf439 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ebf43c:;
  /* 11ebf43c mov esp, ebp */
  ESP = (EBP);
  /* 11ebf43e pop ebp */
  EBP = (pop32());
  /* 11ebf43f ret  */
  ESPCHK(0x11ebf3a0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11ebf440 (32 bytes, 18 insns) */
void f_11ebf440(void) {
  FTRACE(0x11ebf440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf440 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf441 mov ebp, esp */
  EBP = (ESP);
  /* 11ebf443 push ebx */
  push32((uint32_t)(EBX));
  /* 11ebf444 push esi */
  push32((uint32_t)(ESI));
  /* 11ebf445 push edi */
  push32((uint32_t)(EDI));
  /* 11ebf446 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf447 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebf449 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebf44b push 0x11ebf458 */
  push32((uint32_t)(0x11ebf458u));
  /* 11ebf450 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ebf453 call 0x11ec6b8c */
  push32(0x11ebf458u); f_11ec6b8c();
  /* 11ebf458 pop ebp */
  EBP = (pop32());
  /* 11ebf459 pop edi */
  EDI = (pop32());
  /* 11ebf45a pop esi */
  ESI = (pop32());
  /* 11ebf45b pop ebx */
  EBX = (pop32());
  /* 11ebf45c mov esp, ebp */
  ESP = (EBP);
  /* 11ebf45e pop ebp */
  EBP = (pop32());
  /* 11ebf45f ret  */
  ESPCHK(0x11ebf440u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11ebf482 (104 bytes, 33 insns) */
void f_11ebf482(void) {
  FTRACE(0x11ebf482u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf482 push ebx */
  push32((uint32_t)(EBX));
  /* 11ebf483 push esi */
  push32((uint32_t)(ESI));
  /* 11ebf484 push edi */
  push32((uint32_t)(EDI));
  /* 11ebf485 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ebf489 push eax */
  push32((uint32_t)(EAX));
  /* 11ebf48a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11ebf48c push 0x11ebf460 */
  push32((uint32_t)(0x11ebf460u));
  /* 11ebf491 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11ebf498 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11ebf49f:;
  /* 11ebf49f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11ebf4a3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ebf4a6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11ebf4a9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf4ac je 0x11ebf4dc */
  if (C.zf) goto L_11ebf4dc;
  /* 11ebf4ae cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf4b2 je 0x11ebf4dc */
  if (C.zf) goto L_11ebf4dc;
  /* 11ebf4b4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11ebf4b7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11ebf4ba mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11ebf4be mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11ebf4c1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf4c6 jne 0x11ebf4da */
  if (!C.zf) goto L_11ebf4da;
  /* 11ebf4c8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11ebf4cd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11ebf4d1 call 0x11ebf516 */
  push32(0x11ebf4d6u); f_11ebf516();
  /* 11ebf4d6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11ebf4dau);
L_11ebf4da:;
  /* 11ebf4da jmp 0x11ebf49f */
  goto L_11ebf49f;
L_11ebf4dc:;
  /* 11ebf4dc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11ebf4e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf4e6 pop edi */
  EDI = (pop32());
  /* 11ebf4e7 pop esi */
  ESI = (pop32());
  /* 11ebf4e8 pop ebx */
  EBX = (pop32());
  /* 11ebf4e9 ret  */
  ESPCHK(0x11ebf482u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f516 @ 0x11ebf516 (24 bytes, 10 insns) */
void f_11ebf516(void) {
  FTRACE(0x11ebf516u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf516 push ebx */
  push32((uint32_t)(EBX));
  /* 11ebf517 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebf518 mov ebx, 0x11ee13b8 */
  EBX = (0x11ee13b8u);
  /* 11ebf51d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf520 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11ebf523 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11ebf526 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11ebf529 pop ecx */
  ECX = (pop32());
  /* 11ebf52a pop ebx */
  EBX = (pop32());
  /* 11ebf52b ret 4 */
  ESPCHK(0x11ebf516u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f5f5 @ 0x11ebf5f5 (27 bytes, 11 insns) */
void f_11ebf5f5(void) {
  FTRACE(0x11ebf5f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf5f5 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf5f6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ebf5fa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11ebf5fc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ebf5ff push eax */
  push32((uint32_t)(EAX));
  /* 11ebf600 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ebf603 push eax */
  push32((uint32_t)(EAX));
  /* 11ebf604 call 0x11ebf482 */
  push32(0x11ebf609u); f_11ebf482();
  /* 11ebf609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf60c pop ebp */
  EBP = (pop32());
  /* 11ebf60d ret 4 */
  ESPCHK(0x11ebf5f5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f610 @ 0x11ebf610 (482 bytes, 138 insns) */
void f_11ebf610(void) {
  FTRACE(0x11ebf610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf610 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf611 mov ebp, esp */
  EBP = (ESP);
  /* 11ebf613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebf616 push esi */
  push32((uint32_t)(ESI));
  /* 11ebf617 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11ebf61e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11ebf620 call 0x11eb9e30 */
  push32(0x11ebf625u); f_11eb9e30();
  /* 11ebf625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf628 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ebf62f jmp 0x11ebf63a */
  goto L_11ebf63a;
L_11ebf631:;
  /* 11ebf631 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebf634 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf637 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ebf63a:;
  /* 11ebf63a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf63e jge 0x11ebf7e0 */
  if ((C.sf==C.of)) goto L_11ebf7e0;
  /* 11ebf644 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebf647 cmp dword ptr [ecx*4 + 0x11ee4160], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11ee4160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf64f je 0x11ebf746 */
  if (C.zf) goto L_11ebf746;
  /* 11ebf655 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebf658 mov eax, dword ptr [edx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ee4160)));
  /* 11ebf65f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebf662 jmp 0x11ebf66d */
  goto L_11ebf66d;
L_11ebf664:;
  /* 11ebf664 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf667 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf66a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ebf66d:;
  /* 11ebf66d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebf670 mov eax, dword ptr [edx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ee4160)));
  /* 11ebf677 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf67c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf67f jae 0x11ebf736 */
  if (!C.cf) goto L_11ebf736;
  /* 11ebf685 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf688 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ebf68c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebf68f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebf691 jne 0x11ebf731 */
  if (!C.zf) goto L_11ebf731;
  /* 11ebf697 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf69a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf69e jne 0x11ebf6d9 */
  if (!C.zf) goto L_11ebf6d9;
  /* 11ebf6a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ebf6a2 call 0x11eb9e30 */
  push32(0x11ebf6a7u); f_11eb9e30();
  /* 11ebf6a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf6aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf6ad cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf6b1 jne 0x11ebf6cf */
  if (!C.zf) goto L_11ebf6cf;
  /* 11ebf6b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf6b6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf6b9 push edx */
  push32((uint32_t)(EDX));
  /* 11ebf6ba call dword ptr [0x11ee5350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5350))), 0x11ebf6c0u);
  /* 11ebf6c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf6c3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ebf6c6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf6c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf6cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11ebf6cf:;
  /* 11ebf6cf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ebf6d1 call 0x11eb9ed0 */
  push32(0x11ebf6d6u); f_11eb9ed0();
  /* 11ebf6d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebf6d9:;
  /* 11ebf6d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf6dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf6df push eax */
  push32((uint32_t)(EAX));
  /* 11ebf6e0 call dword ptr [0x11ee534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee534c))), 0x11ebf6e6u);
  /* 11ebf6e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf6e9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ebf6ed and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebf6f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebf6f2 je 0x11ebf706 */
  if (C.zf) goto L_11ebf706;
  /* 11ebf6f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf6f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf6fa push eax */
  push32((uint32_t)(EAX));
  /* 11ebf6fb call dword ptr [0x11ee5348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5348))), 0x11ebf701u);
  /* 11ebf701 jmp 0x11ebf664 */
  goto L_11ebf664;
L_11ebf706:;
  /* 11ebf706 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf709 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11ebf70f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebf712 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ebf715 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebf718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf71b sub eax, dword ptr [edx*4 + 0x11ee4160] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11ee4160))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebf722 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ebf723 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11ebf728 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ebf72a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf72c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ebf72f jmp 0x11ebf736 */
  goto L_11ebf736;
L_11ebf731:;
  /* 11ebf731 jmp 0x11ebf664 */
  goto L_11ebf664;
L_11ebf736:;
  /* 11ebf736 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf73a je 0x11ebf741 */
  if (C.zf) goto L_11ebf741;
  /* 11ebf73c jmp 0x11ebf7e0 */
  goto L_11ebf7e0;
L_11ebf741:;
  /* 11ebf741 jmp 0x11ebf7db */
  goto L_11ebf7db;
L_11ebf746:;
  /* 11ebf746 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11ebf748 push 0x11ede354 */
  push32((uint32_t)(0x11ede354u));
  /* 11ebf74d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebf74f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11ebf754 call 0x11eb6430 */
  push32(0x11ebf759u); f_11eb6430();
  /* 11ebf759 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf75c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebf75f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf763 je 0x11ebf7d9 */
  if (C.zf) goto L_11ebf7d9;
  /* 11ebf765 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebf768 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf76b mov dword ptr [eax*4 + 0x11ee4160], ecx */
  w32((uint32_t)(EAX*4 + 0x11ee4160), (ECX));
  /* 11ebf772 mov edx, dword ptr [0x11ee429c] */
  EDX = (r32((uint32_t)(0x11ee429c)));
  /* 11ebf778 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf77b mov dword ptr [0x11ee429c], edx */
  w32((uint32_t)(0x11ee429c), (EDX));
  /* 11ebf781 jmp 0x11ebf78c */
  goto L_11ebf78c;
L_11ebf783:;
  /* 11ebf783 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf786 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf789 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ebf78c:;
  /* 11ebf78c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebf78f mov edx, dword ptr [ecx*4 + 0x11ee4160] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ee4160)));
  /* 11ebf796 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf79c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf79f jae 0x11ebf7c4 */
  if (!C.cf) goto L_11ebf7c4;
  /* 11ebf7a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf7a4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ebf7a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf7ab mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11ebf7b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf7b4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11ebf7b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebf7bb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11ebf7c2 jmp 0x11ebf783 */
  goto L_11ebf783;
L_11ebf7c4:;
  /* 11ebf7c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebf7c7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ebf7ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ebf7cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebf7d0 push edx */
  push32((uint32_t)(EDX));
  /* 11ebf7d1 call 0x11ebfb20 */
  push32(0x11ebf7d6u); f_11ebfb20();
  /* 11ebf7d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebf7d9:;
  /* 11ebf7d9 jmp 0x11ebf7e0 */
  goto L_11ebf7e0;
L_11ebf7db:;
  /* 11ebf7db jmp 0x11ebf631 */
  goto L_11ebf631;
L_11ebf7e0:;
  /* 11ebf7e0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11ebf7e2 call 0x11eb9ed0 */
  push32(0x11ebf7e7u); f_11eb9ed0();
  /* 11ebf7e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebf7ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebf7ed pop esi */
  ESI = (pop32());
  /* 11ebf7ee mov esp, ebp */
  ESP = (EBP);
  /* 11ebf7f0 pop ebp */
  EBP = (pop32());
  /* 11ebf7f1 ret  */
  ESPCHK(0x11ebf610u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11ebf800 (183 bytes, 57 insns) */
void f_11ebf800(void) {
  FTRACE(0x11ebf800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf800 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf801 mov ebp, esp */
  EBP = (ESP);
  /* 11ebf803 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebf804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf807 cmp eax, dword ptr [0x11ee429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf80d jae 0x11ebf89a */
  if (!C.cf) goto L_11ebf89a;
  /* 11ebf813 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf816 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ebf819 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf81c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebf81f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebf822 mov eax, dword ptr [ecx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11ee4160)));
  /* 11ebf829 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf82d jne 0x11ebf89a */
  if (!C.zf) goto L_11ebf89a;
  /* 11ebf82f cmp dword ptr [0x11ee277c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee277c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf836 jne 0x11ebf87a */
  if (!C.zf) goto L_11ebf87a;
  /* 11ebf838 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf83b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ebf83e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf842 je 0x11ebf852 */
  if (C.zf) goto L_11ebf852;
  /* 11ebf844 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf848 je 0x11ebf860 */
  if (C.zf) goto L_11ebf860;
  /* 11ebf84a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf84e je 0x11ebf86e */
  if (C.zf) goto L_11ebf86e;
  /* 11ebf850 jmp 0x11ebf87a */
  goto L_11ebf87a;
L_11ebf852:;
  /* 11ebf852 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebf855 push edx */
  push32((uint32_t)(EDX));
  /* 11ebf856 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11ebf858 call dword ptr [0x11ee5308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5308))), 0x11ebf85eu);
  /* 11ebf85e jmp 0x11ebf87a */
  goto L_11ebf87a;
L_11ebf860:;
  /* 11ebf860 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebf863 push eax */
  push32((uint32_t)(EAX));
  /* 11ebf864 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11ebf866 call dword ptr [0x11ee5308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5308))), 0x11ebf86cu);
  /* 11ebf86c jmp 0x11ebf87a */
  goto L_11ebf87a;
L_11ebf86e:;
  /* 11ebf86e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebf871 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebf872 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11ebf874 call dword ptr [0x11ee5308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5308))), 0x11ebf87au);
L_11ebf87a:;
  /* 11ebf87a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf87d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11ebf880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf883 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebf886 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebf889 mov ecx, dword ptr [edx*4 + 0x11ee4160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11ee4160)));
  /* 11ebf890 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebf893 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11ebf896 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebf898 jmp 0x11ebf8b3 */
  goto L_11ebf8b3;
L_11ebf89a:;
  /* 11ebf89a call 0x11ebe300 */
  push32(0x11ebf89fu); f_11ebe300();
  /* 11ebf89f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ebf8a5 call 0x11ebe310 */
  push32(0x11ebf8aau); f_11ebe310();
  /* 11ebf8aa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ebf8b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ebf8b3:;
  /* 11ebf8b3 mov esp, ebp */
  ESP = (EBP);
  /* 11ebf8b5 pop ebp */
  EBP = (pop32());
  /* 11ebf8b6 ret  */
  ESPCHK(0x11ebf800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8c0 @ 0x11ebf8c0 (216 bytes, 63 insns) */
void f_11ebf8c0(void) {
  FTRACE(0x11ebf8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf8c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebf8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebf8c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf8c7 cmp eax, dword ptr [0x11ee429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf8cd jae 0x11ebf97b */
  if (!C.cf) goto L_11ebf97b;
  /* 11ebf8d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf8d6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ebf8d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf8dc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebf8df imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebf8e2 mov eax, dword ptr [ecx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11ee4160)));
  /* 11ebf8e9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ebf8ee and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebf8f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebf8f3 je 0x11ebf97b */
  if (C.zf) goto L_11ebf97b;
  /* 11ebf8f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf8fc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11ebf8ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf902 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebf905 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebf908 mov ecx, dword ptr [edx*4 + 0x11ee4160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11ee4160)));
  /* 11ebf90f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf913 je 0x11ebf97b */
  if (C.zf) goto L_11ebf97b;
  /* 11ebf915 cmp dword ptr [0x11ee277c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee277c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf91c jne 0x11ebf95a */
  if (!C.zf) goto L_11ebf95a;
  /* 11ebf91e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf921 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ebf924 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf928 je 0x11ebf938 */
  if (C.zf) goto L_11ebf938;
  /* 11ebf92a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf92e je 0x11ebf944 */
  if (C.zf) goto L_11ebf944;
  /* 11ebf930 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf934 je 0x11ebf950 */
  if (C.zf) goto L_11ebf950;
  /* 11ebf936 jmp 0x11ebf95a */
  goto L_11ebf95a;
L_11ebf938:;
  /* 11ebf938 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebf93a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11ebf93c call dword ptr [0x11ee5308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5308))), 0x11ebf942u);
  /* 11ebf942 jmp 0x11ebf95a */
  goto L_11ebf95a;
L_11ebf944:;
  /* 11ebf944 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebf946 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11ebf948 call dword ptr [0x11ee5308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5308))), 0x11ebf94eu);
  /* 11ebf94e jmp 0x11ebf95a */
  goto L_11ebf95a;
L_11ebf950:;
  /* 11ebf950 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebf952 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11ebf954 call dword ptr [0x11ee5308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5308))), 0x11ebf95au);
L_11ebf95a:;
  /* 11ebf95a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf95d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ebf960 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf963 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebf966 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebf969 mov edx, dword ptr [eax*4 + 0x11ee4160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11ee4160)));
  /* 11ebf970 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11ebf977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebf979 jmp 0x11ebf994 */
  goto L_11ebf994;
L_11ebf97b:;
  /* 11ebf97b call 0x11ebe300 */
  push32(0x11ebf980u); f_11ebe300();
  /* 11ebf980 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ebf986 call 0x11ebe310 */
  push32(0x11ebf98bu); f_11ebe310();
  /* 11ebf98b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ebf991 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ebf994:;
  /* 11ebf994 mov esp, ebp */
  ESP = (EBP);
  /* 11ebf996 pop ebp */
  EBP = (pop32());
  /* 11ebf997 ret  */
  ESPCHK(0x11ebf8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9a0 @ 0x11ebf9a0 (102 bytes, 30 insns) */
void f_11ebf9a0(void) {
  FTRACE(0x11ebf9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebf9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebf9a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebf9a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf9a6 cmp eax, dword ptr [0x11ee429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebf9ac jae 0x11ebf9eb */
  if (!C.cf) goto L_11ebf9eb;
  /* 11ebf9ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf9b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ebf9b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf9b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ebf9ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebf9bd mov eax, dword ptr [ecx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11ee4160)));
  /* 11ebf9c4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ebf9c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebf9cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebf9ce je 0x11ebf9eb */
  if (C.zf) goto L_11ebf9eb;
  /* 11ebf9d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf9d3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11ebf9d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebf9d9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebf9dc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebf9df mov ecx, dword ptr [edx*4 + 0x11ee4160] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11ee4160)));
  /* 11ebf9e6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11ebf9e9 jmp 0x11ebfa04 */
  goto L_11ebfa04;
L_11ebf9eb:;
  /* 11ebf9eb call 0x11ebe300 */
  push32(0x11ebf9f0u); f_11ebe300();
  /* 11ebf9f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ebf9f6 call 0x11ebe310 */
  push32(0x11ebf9fbu); f_11ebe310();
  /* 11ebf9fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ebfa01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ebfa04:;
  /* 11ebfa04 pop ebp */
  EBP = (pop32());
  /* 11ebfa05 ret  */
  ESPCHK(0x11ebf9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa10 @ 0x11ebfa10 (260 bytes, 83 insns) */
void f_11ebfa10(void) {
  FTRACE(0x11ebfa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebfa10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebfa11 mov ebp, esp */
  EBP = (ESP);
  /* 11ebfa13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebfa16 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ebfa1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebfa1d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebfa20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebfa22 je 0x11ebfa2d */
  if (C.zf) goto L_11ebfa2d;
  /* 11ebfa24 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ebfa27 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11ebfa2a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11ebfa2d:;
  /* 11ebfa2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebfa30 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebfa36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebfa38 je 0x11ebfa42 */
  if (C.zf) goto L_11ebfa42;
  /* 11ebfa3a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ebfa3d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11ebfa3f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11ebfa42:;
  /* 11ebfa42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebfa45 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebfa4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebfa4d je 0x11ebfa58 */
  if (C.zf) goto L_11ebfa58;
  /* 11ebfa4f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ebfa52 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11ebfa55 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11ebfa58:;
  /* 11ebfa58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfa5b push eax */
  push32((uint32_t)(EAX));
  /* 11ebfa5c call dword ptr [0x11ee53d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53d8))), 0x11ebfa62u);
  /* 11ebfa62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebfa65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfa69 jne 0x11ebfa82 */
  if (!C.zf) goto L_11ebfa82;
  /* 11ebfa6b call dword ptr [0x11ee53b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53b4))), 0x11ebfa71u);
  /* 11ebfa71 push eax */
  push32((uint32_t)(EAX));
  /* 11ebfa72 call 0x11ebe260 */
  push32(0x11ebfa77u); f_11ebe260();
  /* 11ebfa77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfa7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebfa7d jmp 0x11ebfb10 */
  goto L_11ebfb10;
L_11ebfa82:;
  /* 11ebfa82 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfa86 jne 0x11ebfa93 */
  if (!C.zf) goto L_11ebfa93;
  /* 11ebfa88 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ebfa8b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11ebfa8e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11ebfa91 jmp 0x11ebfaa2 */
  goto L_11ebfaa2;
L_11ebfa93:;
  /* 11ebfa93 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfa97 jne 0x11ebfaa2 */
  if (!C.zf) goto L_11ebfaa2;
  /* 11ebfa99 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ebfa9c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11ebfa9f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11ebfaa2:;
  /* 11ebfaa2 call 0x11ebf610 */
  push32(0x11ebfaa7u); f_11ebf610();
  /* 11ebfaa7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ebfaaa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfaae jne 0x11ebfacb */
  if (!C.zf) goto L_11ebfacb;
  /* 11ebfab0 call 0x11ebe300 */
  push32(0x11ebfab5u); f_11ebe300();
  /* 11ebfab5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11ebfabb call 0x11ebe310 */
  push32(0x11ebfac0u); f_11ebe310();
  /* 11ebfac0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ebfac6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebfac9 jmp 0x11ebfb10 */
  goto L_11ebfb10;
L_11ebfacb:;
  /* 11ebfacb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebface push eax */
  push32((uint32_t)(EAX));
  /* 11ebfacf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfad2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebfad3 call 0x11ebf800 */
  push32(0x11ebfad8u); f_11ebf800();
  /* 11ebfad8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfadb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ebfade or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11ebfae1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11ebfae4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfae7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ebfaea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfaed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebfaf0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebfaf3 mov edx, dword ptr [eax*4 + 0x11ee4160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11ee4160)));
  /* 11ebfafa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ebfafd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11ebfb01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfb04 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebfb05 call 0x11ebfbb0 */
  push32(0x11ebfb0au); f_11ebfbb0();
  /* 11ebfb0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfb0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ebfb10:;
  /* 11ebfb10 mov esp, ebp */
  ESP = (EBP);
  /* 11ebfb12 pop ebp */
  EBP = (pop32());
  /* 11ebfb13 ret  */
  ESPCHK(0x11ebfa10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb20 @ 0x11ebfb20 (134 bytes, 44 insns) */
void f_11ebfb20(void) {
  FTRACE(0x11ebfb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebfb20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebfb21 mov ebp, esp */
  EBP = (ESP);
  /* 11ebfb23 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebfb24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfb27 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ebfb2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfb2d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebfb30 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebfb33 mov edx, dword ptr [eax*4 + 0x11ee4160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11ee4160)));
  /* 11ebfb3a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfb3c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ebfb3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebfb42 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfb46 jne 0x11ebfb81 */
  if (!C.zf) goto L_11ebfb81;
  /* 11ebfb48 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ebfb4a call 0x11eb9e30 */
  push32(0x11ebfb4fu); f_11eb9e30();
  /* 11ebfb4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfb52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebfb55 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfb59 jne 0x11ebfb77 */
  if (!C.zf) goto L_11ebfb77;
  /* 11ebfb5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebfb5e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfb61 push edx */
  push32((uint32_t)(EDX));
  /* 11ebfb62 call dword ptr [0x11ee5350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5350))), 0x11ebfb68u);
  /* 11ebfb68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebfb6b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ebfb6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfb71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebfb74 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11ebfb77:;
  /* 11ebfb77 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ebfb79 call 0x11eb9ed0 */
  push32(0x11ebfb7eu); f_11eb9ed0();
  /* 11ebfb7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebfb81:;
  /* 11ebfb81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfb84 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ebfb87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfb8a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebfb8d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebfb90 mov edx, dword ptr [eax*4 + 0x11ee4160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11ee4160)));
  /* 11ebfb97 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11ebfb9b push eax */
  push32((uint32_t)(EAX));
  /* 11ebfb9c call dword ptr [0x11ee534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee534c))), 0x11ebfba2u);
  /* 11ebfba2 mov esp, ebp */
  ESP = (EBP);
  /* 11ebfba4 pop ebp */
  EBP = (pop32());
  /* 11ebfba5 ret  */
  ESPCHK(0x11ebfb20u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11ebfbb0 (38 bytes, 13 insns) */
void f_11ebfbb0(void) {
  FTRACE(0x11ebfbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebfbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebfbb1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebfbb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfbb6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ebfbb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfbbc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebfbbf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebfbc2 mov edx, dword ptr [eax*4 + 0x11ee4160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11ee4160)));
  /* 11ebfbc9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11ebfbcd push eax */
  push32((uint32_t)(EAX));
  /* 11ebfbce call dword ptr [0x11ee5348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5348))), 0x11ebfbd4u);
  /* 11ebfbd4 pop ebp */
  EBP = (pop32());
  /* 11ebfbd5 ret  */
  ESPCHK(0x11ebfbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbe0 @ 0x11ebfbe0 (218 bytes, 63 insns) */
void f_11ebfbe0(void) {
  FTRACE(0x11ebfbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebfbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebfbe1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebfbe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebfbe6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ebfbed push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebfbef call 0x11eb9e30 */
  push32(0x11ebfbf4u); f_11eb9e30();
  /* 11ebfbf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfbf7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11ebfbfe jmp 0x11ebfc09 */
  goto L_11ebfc09;
L_11ebfc00:;
  /* 11ebfc00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfc03 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfc06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ebfc09:;
  /* 11ebfc09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfc0c cmp ecx, dword ptr [0x11ee3e60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee3e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfc12 jge 0x11ebfca9 */
  if ((C.sf==C.of)) goto L_11ebfca9;
  /* 11ebfc18 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfc1b mov eax, dword ptr [0x11ee2b18] */
  EAX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebfc20 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfc24 je 0x11ebfca4 */
  if (C.zf) goto L_11ebfca4;
  /* 11ebfc26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfc29 mov edx, dword ptr [0x11ee2b18] */
  EDX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebfc2f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11ebfc32 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ebfc35 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebfc3b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebfc3d je 0x11ebfc61 */
  if (C.zf) goto L_11ebfc61;
  /* 11ebfc3f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfc42 mov eax, dword ptr [0x11ee2b18] */
  EAX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebfc47 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11ebfc4a push ecx */
  push32((uint32_t)(ECX));
  /* 11ebfc4b call 0x11ec09d0 */
  push32(0x11ebfc50u); f_11ec09d0();
  /* 11ebfc50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfc53 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfc56 je 0x11ebfc61 */
  if (C.zf) goto L_11ebfc61;
  /* 11ebfc58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebfc5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfc5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ebfc61:;
  /* 11ebfc61 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfc65 jl 0x11ebfca4 */
  if ((C.sf!=C.of)) goto L_11ebfca4;
  /* 11ebfc67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfc6a mov ecx, dword ptr [0x11ee2b18] */
  ECX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebfc70 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ebfc73 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfc76 push edx */
  push32((uint32_t)(EDX));
  /* 11ebfc77 call dword ptr [0x11ee53e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53e0))), 0x11ebfc7du);
  /* 11ebfc7d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebfc7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfc82 mov ecx, dword ptr [0x11ee2b18] */
  ECX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebfc88 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ebfc8b push edx */
  push32((uint32_t)(EDX));
  /* 11ebfc8c call 0x11eb6ec0 */
  push32(0x11ebfc91u); f_11eb6ec0();
  /* 11ebfc91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfc94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfc97 mov ecx, dword ptr [0x11ee2b18] */
  ECX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebfc9d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11ebfca4:;
  /* 11ebfca4 jmp 0x11ebfc00 */
  goto L_11ebfc00;
L_11ebfca9:;
  /* 11ebfca9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebfcab call 0x11eb9ed0 */
  push32(0x11ebfcb0u); f_11eb9ed0();
  /* 11ebfcb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfcb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebfcb6 mov esp, ebp */
  ESP = (EBP);
  /* 11ebfcb8 pop ebp */
  EBP = (pop32());
  /* 11ebfcb9 ret  */
  ESPCHK(0x11ebfbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcc0 @ 0x11ebfcc0 (68 bytes, 26 insns) */
void f_11ebfcc0(void) {
  FTRACE(0x11ebfcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebfcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebfcc1 mov ebp, esp */
  EBP = (ESP);
  /* 11ebfcc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebfcc4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfcc8 jne 0x11ebfcd6 */
  if (!C.zf) goto L_11ebfcd6;
  /* 11ebfcca push 0 */
  push32((uint32_t)(0x0u));
  /* 11ebfccc call 0x11ebfe30 */
  push32(0x11ebfcd1u); f_11ebfe30();
  /* 11ebfcd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfcd4 jmp 0x11ebfd00 */
  goto L_11ebfd00;
L_11ebfcd6:;
  /* 11ebfcd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfcd9 push eax */
  push32((uint32_t)(EAX));
  /* 11ebfcda call 0x11ebf240 */
  push32(0x11ebfcdfu); f_11ebf240();
  /* 11ebfcdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfce2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfce5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebfce6 call 0x11ebfd10 */
  push32(0x11ebfcebu); f_11ebfd10();
  /* 11ebfceb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfcee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ebfcf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfcf4 push edx */
  push32((uint32_t)(EDX));
  /* 11ebfcf5 call 0x11ebf2b0 */
  push32(0x11ebfcfau); f_11ebf2b0();
  /* 11ebfcfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfcfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ebfd00:;
  /* 11ebfd00 mov esp, ebp */
  ESP = (EBP);
  /* 11ebfd02 pop ebp */
  EBP = (pop32());
  /* 11ebfd03 ret  */
  ESPCHK(0x11ebfcc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd10 @ 0x11ebfd10 (65 bytes, 26 insns) */
void f_11ebfd10(void) {
  FTRACE(0x11ebfd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebfd10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebfd11 mov ebp, esp */
  EBP = (ESP);
  /* 11ebfd13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfd16 push eax */
  push32((uint32_t)(EAX));
  /* 11ebfd17 call 0x11ebfd60 */
  push32(0x11ebfd1cu); f_11ebfd60();
  /* 11ebfd1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfd1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebfd21 je 0x11ebfd28 */
  if (C.zf) goto L_11ebfd28;
  /* 11ebfd23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ebfd26 jmp 0x11ebfd4f */
  goto L_11ebfd4f;
L_11ebfd28:;
  /* 11ebfd28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfd2b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ebfd2e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebfd34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebfd36 je 0x11ebfd4d */
  if (C.zf) goto L_11ebfd4d;
  /* 11ebfd38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfd3b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ebfd3e push ecx */
  push32((uint32_t)(ECX));
  /* 11ebfd3f call 0x11ec0b20 */
  push32(0x11ebfd44u); f_11ec0b20();
  /* 11ebfd44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfd47 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ebfd49 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebfd4b jmp 0x11ebfd4f */
  goto L_11ebfd4f;
L_11ebfd4d:;
  /* 11ebfd4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ebfd4f:;
  /* 11ebfd4f pop ebp */
  EBP = (pop32());
  /* 11ebfd50 ret  */
  ESPCHK(0x11ebfd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd60 @ 0x11ebfd60 (183 bytes, 62 insns) */
void f_11ebfd60(void) {
  FTRACE(0x11ebfd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebfd60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebfd61 mov ebp, esp */
  EBP = (ESP);
  /* 11ebfd63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebfd66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ebfd6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfd70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ebfd73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfd76 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ebfd79 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebfd7c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfd7f jne 0x11ebfdfb */
  if (!C.zf) goto L_11ebfdfb;
  /* 11ebfd81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfd84 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ebfd87 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebfd8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebfd8f je 0x11ebfdfb */
  if (C.zf) goto L_11ebfdfb;
  /* 11ebfd91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfd94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfd97 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11ebfd99 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebfd9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ebfd9f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfda3 jle 0x11ebfdfb */
  if ((C.zf||C.sf!=C.of)) goto L_11ebfdfb;
  /* 11ebfda5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebfda8 push edx */
  push32((uint32_t)(EDX));
  /* 11ebfda9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfdac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ebfdaf push ecx */
  push32((uint32_t)(ECX));
  /* 11ebfdb0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfdb3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ebfdb6 push eax */
  push32((uint32_t)(EAX));
  /* 11ebfdb7 call 0x11ebecd0 */
  push32(0x11ebfdbcu); f_11ebecd0();
  /* 11ebfdbc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfdbf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfdc2 jne 0x11ebfde5 */
  if (!C.zf) goto L_11ebfde5;
  /* 11ebfdc4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfdc7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ebfdca and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebfdd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebfdd2 je 0x11ebfde3 */
  if (C.zf) goto L_11ebfde3;
  /* 11ebfdd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfdd7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ebfdda and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11ebfddd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfde0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11ebfde3:;
  /* 11ebfde3 jmp 0x11ebfdfb */
  goto L_11ebfdfb;
L_11ebfde5:;
  /* 11ebfde5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfde8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ebfdeb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebfdee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfdf1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11ebfdf4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ebfdfb:;
  /* 11ebfdfb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfdfe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfe01 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ebfe04 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ebfe06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ebfe09 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ebfe10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebfe13 mov esp, ebp */
  ESP = (EBP);
  /* 11ebfe15 pop ebp */
  EBP = (pop32());
  /* 11ebfe16 ret  */
  ESPCHK(0x11ebfd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe20 @ 0x11ebfe20 (15 bytes, 7 insns) */
void f_11ebfe20(void) {
  FTRACE(0x11ebfe20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebfe20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebfe21 mov ebp, esp */
  EBP = (ESP);
  /* 11ebfe23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ebfe25 call 0x11ebfe30 */
  push32(0x11ebfe2au); f_11ebfe30();
  /* 11ebfe2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfe2d pop ebp */
  EBP = (pop32());
  /* 11ebfe2e ret  */
  ESPCHK(0x11ebfe20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe30 @ 0x11ebfe30 (319 bytes, 94 insns) */
void f_11ebfe30(void) {
  FTRACE(0x11ebfe30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebfe30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebfe31 mov ebp, esp */
  EBP = (ESP);
  /* 11ebfe33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebfe36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ebfe3d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ebfe44 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebfe46 call 0x11eb9e30 */
  push32(0x11ebfe4bu); f_11eb9e30();
  /* 11ebfe4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfe4e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ebfe55 jmp 0x11ebfe60 */
  goto L_11ebfe60;
L_11ebfe57:;
  /* 11ebfe57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebfe5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfe5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ebfe60:;
  /* 11ebfe60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebfe63 cmp ecx, dword ptr [0x11ee3e60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee3e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfe69 jge 0x11ebff53 */
  if ((C.sf==C.of)) goto L_11ebff53;
  /* 11ebfe6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebfe72 mov eax, dword ptr [0x11ee2b18] */
  EAX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebfe77 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfe7b je 0x11ebff4e */
  if (C.zf) goto L_11ebff4e;
  /* 11ebfe81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebfe84 mov edx, dword ptr [0x11ee2b18] */
  EDX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebfe8a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11ebfe8d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ebfe90 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11ebfe96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ebfe98 je 0x11ebff4e */
  if (C.zf) goto L_11ebff4e;
  /* 11ebfe9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebfea1 mov eax, dword ptr [0x11ee2b18] */
  EAX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebfea6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11ebfea9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ebfeaa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebfead push edx */
  push32((uint32_t)(EDX));
  /* 11ebfeae call 0x11ebf280 */
  push32(0x11ebfeb3u); f_11ebf280();
  /* 11ebfeb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfeb6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebfeb9 mov ecx, dword ptr [0x11ee2b18] */
  ECX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebfebf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ebfec2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ebfec5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11ebfeca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ebfecc je 0x11ebff35 */
  if (C.zf) goto L_11ebff35;
  /* 11ebfece cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfed2 jne 0x11ebfef9 */
  if (!C.zf) goto L_11ebfef9;
  /* 11ebfed4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebfed7 mov edx, dword ptr [0x11ee2b18] */
  EDX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebfedd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11ebfee0 push eax */
  push32((uint32_t)(EAX));
  /* 11ebfee1 call 0x11ebfd10 */
  push32(0x11ebfee6u); f_11ebfd10();
  /* 11ebfee6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfee9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfeec je 0x11ebfef7 */
  if (C.zf) goto L_11ebfef7;
  /* 11ebfeee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebfef1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebfef4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ebfef7:;
  /* 11ebfef7 jmp 0x11ebff35 */
  goto L_11ebff35;
L_11ebfef9:;
  /* 11ebfef9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebfefd jne 0x11ebff35 */
  if (!C.zf) goto L_11ebff35;
  /* 11ebfeff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebff02 mov eax, dword ptr [0x11ee2b18] */
  EAX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebff07 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11ebff0a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ebff0d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ebff10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ebff12 je 0x11ebff35 */
  if (C.zf) goto L_11ebff35;
  /* 11ebff14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebff17 mov ecx, dword ptr [0x11ee2b18] */
  ECX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebff1d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ebff20 push edx */
  push32((uint32_t)(EDX));
  /* 11ebff21 call 0x11ebfd10 */
  push32(0x11ebff26u); f_11ebfd10();
  /* 11ebff26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebff29 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebff2c jne 0x11ebff35 */
  if (!C.zf) goto L_11ebff35;
  /* 11ebff2e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11ebff35:;
  /* 11ebff35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebff38 mov ecx, dword ptr [0x11ee2b18] */
  ECX = (r32((uint32_t)(0x11ee2b18)));
  /* 11ebff3e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ebff41 push edx */
  push32((uint32_t)(EDX));
  /* 11ebff42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ebff45 push eax */
  push32((uint32_t)(EAX));
  /* 11ebff46 call 0x11ebf2f0 */
  push32(0x11ebff4bu); f_11ebf2f0();
  /* 11ebff4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ebff4e:;
  /* 11ebff4e jmp 0x11ebfe57 */
  goto L_11ebfe57;
L_11ebff53:;
  /* 11ebff53 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebff55 call 0x11eb9ed0 */
  push32(0x11ebff5au); f_11eb9ed0();
  /* 11ebff5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebff5d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebff61 jne 0x11ebff68 */
  if (!C.zf) goto L_11ebff68;
  /* 11ebff63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ebff66 jmp 0x11ebff6b */
  goto L_11ebff6b;
L_11ebff68:;
  /* 11ebff68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ebff6b:;
  /* 11ebff6b mov esp, ebp */
  ESP = (EBP);
  /* 11ebff6d pop ebp */
  EBP = (pop32());
  /* 11ebff6e ret  */
  ESPCHK(0x11ebfe30u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11ebff70 (15 bytes, 7 insns) */
void f_11ebff70(void) {
  FTRACE(0x11ebff70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebff70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebff71 mov ebp, esp */
  EBP = (ESP);
  /* 11ebff73 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ebff75 call 0x11eb53a0 */
  push32(0x11ebff7au); f_11eb53a0();
  /* 11ebff7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebff7d pop ebp */
  EBP = (pop32());
  /* 11ebff7e ret  */
  ESPCHK(0x11ebff70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff80 @ 0x11ebff80 (1007 bytes, 269 insns) */
void f_11ebff80(void) {
  FTRACE(0x11ebff80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ebff80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ebff81 mov ebp, esp */
  EBP = (ESP);
  /* 11ebff83 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ebff89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebff8d jl 0x11ebff95 */
  if ((C.sf!=C.of)) goto L_11ebff95;
  /* 11ebff8f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebff93 jle 0x11ebff9c */
  if ((C.zf||C.sf!=C.of)) goto L_11ebff9c;
L_11ebff95:;
  /* 11ebff95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ebff97 jmp 0x11ec036b */
  goto L_11ec036b;
L_11ebff9c:;
  /* 11ebff9c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ebff9e call 0x11eb9e30 */
  push32(0x11ebffa3u); f_11eb9e30();
  /* 11ebffa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebffa6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ebffad mov eax, dword ptr [0x11ee2b04] */
  EAX = (r32((uint32_t)(0x11ee2b04)));
  /* 11ebffb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebffb5 mov dword ptr [0x11ee2b04], eax */
  w32((uint32_t)(0x11ee2b04), (EAX));
L_11ebffba:;
  /* 11ebffba cmp dword ptr [0x11ee2b14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2b14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebffc1 je 0x11ebffcd */
  if (C.zf) goto L_11ebffcd;
  /* 11ebffc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ebffc5 call dword ptr [0x11ee5304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5304))), 0x11ebffcbu);
  /* 11ebffcb jmp 0x11ebffba */
  goto L_11ebffba;
L_11ebffcd:;
  /* 11ebffcd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebffd1 je 0x11ec0011 */
  if (C.zf) goto L_11ec0011;
  /* 11ebffd3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ebffd7 je 0x11ebfff1 */
  if (C.zf) goto L_11ebfff1;
  /* 11ebffd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ebffdc push ecx */
  push32((uint32_t)(ECX));
  /* 11ebffdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebffe0 push edx */
  push32((uint32_t)(EDX));
  /* 11ebffe1 call 0x11ec0370 */
  push32(0x11ebffe6u); f_11ec0370();
  /* 11ebffe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ebffe9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11ebffef jmp 0x11ec0003 */
  goto L_11ec0003;
L_11ebfff1:;
  /* 11ebfff1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ebfff4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ebfff7 mov ecx, dword ptr [eax + 0x11ee14dc] */
  ECX = (r32((uint32_t)(EAX + 0x11ee14dc)));
  /* 11ebfffd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11ec0003:;
  /* 11ec0003 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11ec0009 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ec000c jmp 0x11ec034b */
  goto L_11ec034b;
L_11ec0011:;
  /* 11ec0011 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11ec0018 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ec001f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0023 je 0x11ec0343 */
  if (C.zf) goto L_11ec0343;
  /* 11ec0029 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec002c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec002f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0032 jne 0x11ec0254 */
  if (!C.zf) goto L_11ec0254;
  /* 11ec0038 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec003b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11ec003f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0042 jne 0x11ec0254 */
  if (!C.zf) goto L_11ec0254;
  /* 11ec0048 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec004b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11ec004f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0052 jne 0x11ec0254 */
  if (!C.zf) goto L_11ec0254;
  /* 11ec0058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec005b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11ec0061:;
  /* 11ec0061 push 0x11ede3a4 */
  push32((uint32_t)(0x11ede3a4u));
  /* 11ec0066 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ec006c push ecx */
  push32((uint32_t)(ECX));
  /* 11ec006d call 0x11ec21d0 */
  push32(0x11ec0072u); f_11ec21d0();
  /* 11ec0072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0075 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11ec007b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0082 je 0x11ec00ad */
  if (C.zf) goto L_11ec00ad;
  /* 11ec0084 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ec008a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec0090 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11ec0096 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec009d je 0x11ec00ad */
  if (C.zf) goto L_11ec00ad;
  /* 11ec009f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ec00a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec00a8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec00ab jne 0x11ec00d3 */
  if (!C.zf) goto L_11ec00d3;
L_11ec00ad:;
  /* 11ec00ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec00b1 je 0x11ec00cc */
  if (C.zf) goto L_11ec00cc;
  /* 11ec00b3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ec00b5 call 0x11eb9ed0 */
  push32(0x11ec00bau); f_11eb9ed0();
  /* 11ec00ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec00bd mov edx, dword ptr [0x11ee2b04] */
  EDX = (r32((uint32_t)(0x11ee2b04)));
  /* 11ec00c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec00c6 mov dword ptr [0x11ee2b04], edx */
  w32((uint32_t)(0x11ee2b04), (EDX));
L_11ec00cc:;
  /* 11ec00cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec00ce jmp 0x11ec036b */
  goto L_11ec036b;
L_11ec00d3:;
  /* 11ec00d3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11ec00da jmp 0x11ec00e5 */
  goto L_11ec00e5;
L_11ec00dc:;
  /* 11ec00dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec00df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec00e2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11ec00e5:;
  /* 11ec00e5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec00e9 jg 0x11ec0133 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec0133;
  /* 11ec00eb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11ec00f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec00f2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ec00f8 push edx */
  push32((uint32_t)(EDX));
  /* 11ec00f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec00fc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec00ff mov ecx, dword ptr [eax + 0x11ee14d8] */
  ECX = (r32((uint32_t)(EAX + 0x11ee14d8)));
  /* 11ec0105 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0106 call 0x11ec2190 */
  push32(0x11ec010bu); f_11ec2190();
  /* 11ec010b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec010e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec0110 jne 0x11ec0131 */
  if (!C.zf) goto L_11ec0131;
  /* 11ec0112 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec0115 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec0118 mov eax, dword ptr [edx + 0x11ee14d8] */
  EAX = (r32((uint32_t)(EDX + 0x11ee14d8)));
  /* 11ec011e push eax */
  push32((uint32_t)(EAX));
  /* 11ec011f call 0x11eb9260 */
  push32(0x11ec0124u); f_11eb9260();
  /* 11ec0124 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0127 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec012d jne 0x11ec0131 */
  if (!C.zf) goto L_11ec0131;
  /* 11ec012f jmp 0x11ec0133 */
  goto L_11ec0133;
L_11ec0131:;
  /* 11ec0131 jmp 0x11ec00dc */
  goto L_11ec00dc;
L_11ec0133:;
  /* 11ec0133 push 0x11ede3a0 */
  push32((uint32_t)(0x11ede3a0u));
  /* 11ec0138 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ec013e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0141 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11ec0147 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ec014d push edx */
  push32((uint32_t)(EDX));
  /* 11ec014e call 0x11ec2150 */
  push32(0x11ec0153u); f_11ec2150();
  /* 11ec0153 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0156 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11ec015c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0163 jne 0x11ec0199 */
  if (!C.zf) goto L_11ec0199;
  /* 11ec0165 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ec016b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec016e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0171 je 0x11ec0199 */
  if (C.zf) goto L_11ec0199;
  /* 11ec0173 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0177 je 0x11ec0192 */
  if (C.zf) goto L_11ec0192;
  /* 11ec0179 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ec017b call 0x11eb9ed0 */
  push32(0x11ec0180u); f_11eb9ed0();
  /* 11ec0180 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0183 mov edx, dword ptr [0x11ee2b04] */
  EDX = (r32((uint32_t)(0x11ee2b04)));
  /* 11ec0189 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec018c mov dword ptr [0x11ee2b04], edx */
  w32((uint32_t)(0x11ee2b04), (EDX));
L_11ec0192:;
  /* 11ec0192 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec0194 jmp 0x11ec036b */
  goto L_11ec036b;
L_11ec0199:;
  /* 11ec0199 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec019d jg 0x11ec01ea */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec01ea;
  /* 11ec019f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11ec01a5 push eax */
  push32((uint32_t)(EAX));
  /* 11ec01a6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ec01ac push ecx */
  push32((uint32_t)(ECX));
  /* 11ec01ad lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11ec01b3 push edx */
  push32((uint32_t)(EDX));
  /* 11ec01b4 call 0x11eb9c50 */
  push32(0x11ec01b9u); f_11eb9c50();
  /* 11ec01b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec01bc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11ec01c2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11ec01ca lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11ec01d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec01d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec01d4 push edx */
  push32((uint32_t)(EDX));
  /* 11ec01d5 call 0x11ec0370 */
  push32(0x11ec01dau); f_11ec0370();
  /* 11ec01da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec01dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec01df je 0x11ec01ea */
  if (C.zf) goto L_11ec01ea;
  /* 11ec01e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec01e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec01e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ec01ea:;
  /* 11ec01ea mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ec01f0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec01f6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11ec01fc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ec0202 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ec0205 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec0207 je 0x11ec0218 */
  if (C.zf) goto L_11ec0218;
  /* 11ec0209 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ec020f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0212 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11ec0218:;
  /* 11ec0218 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11ec021e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ec0221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec0223 jne 0x11ec0061 */
  if (!C.zf) goto L_11ec0061;
  /* 11ec0229 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec022d je 0x11ec023c */
  if (C.zf) goto L_11ec023c;
  /* 11ec022f call 0x11ec0510 */
  push32(0x11ec0234u); f_11ec0510();
  /* 11ec0234 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11ec023a jmp 0x11ec0246 */
  goto L_11ec0246;
L_11ec023c:;
  /* 11ec023c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11ec0246:;
  /* 11ec0246 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11ec024c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec024f jmp 0x11ec0341 */
  goto L_11ec0341;
L_11ec0254:;
  /* 11ec0254 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0257 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0258 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec025a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec025c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11ec0262 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0263 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec0266 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0267 call 0x11ec0610 */
  push32(0x11ec026cu); f_11ec0610();
  /* 11ec026c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec026f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec0272 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0276 je 0x11ec0341 */
  if (C.zf) goto L_11ec0341;
  /* 11ec027c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ec0283 jmp 0x11ec028e */
  goto L_11ec028e;
L_11ec0285:;
  /* 11ec0285 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec0288 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec028b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ec028e:;
  /* 11ec028e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0292 jg 0x11ec02f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec02f0;
  /* 11ec0294 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0298 je 0x11ec02ee */
  if (C.zf) goto L_11ec02ee;
  /* 11ec029a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec029d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec02a0 mov ecx, dword ptr [eax + 0x11ee14dc] */
  ECX = (r32((uint32_t)(EAX + 0x11ee14dc)));
  /* 11ec02a6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec02a7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11ec02ad push edx */
  push32((uint32_t)(EDX));
  /* 11ec02ae call 0x11ec20c0 */
  push32(0x11ec02b3u); f_11ec20c0();
  /* 11ec02b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec02b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec02b8 je 0x11ec02e5 */
  if (C.zf) goto L_11ec02e5;
  /* 11ec02ba lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11ec02c0 push eax */
  push32((uint32_t)(EAX));
  /* 11ec02c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec02c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec02c5 call 0x11ec0370 */
  push32(0x11ec02cau); f_11ec0370();
  /* 11ec02ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec02cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec02cf je 0x11ec02dc */
  if (C.zf) goto L_11ec02dc;
  /* 11ec02d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec02d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec02d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ec02da jmp 0x11ec02e3 */
  goto L_11ec02e3;
L_11ec02dc:;
  /* 11ec02dc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11ec02e3:;
  /* 11ec02e3 jmp 0x11ec02ee */
  goto L_11ec02ee;
L_11ec02e5:;
  /* 11ec02e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec02e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec02eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ec02ee:;
  /* 11ec02ee jmp 0x11ec0285 */
  goto L_11ec0285;
L_11ec02f0:;
  /* 11ec02f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec02f4 je 0x11ec031b */
  if (C.zf) goto L_11ec031b;
  /* 11ec02f6 call 0x11ec0510 */
  push32(0x11ec02fbu); f_11ec0510();
  /* 11ec02fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec02fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec0300 mov ecx, dword ptr [0x11ee14dc] */
  ECX = (r32((uint32_t)(0x11ee14dc)));
  /* 11ec0306 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0307 call 0x11eb6ec0 */
  push32(0x11ec030cu); f_11eb6ec0();
  /* 11ec030c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec030f mov dword ptr [0x11ee14dc], 0 */
  w32((uint32_t)(0x11ee14dc), (0x0u));
  /* 11ec0319 jmp 0x11ec0341 */
  goto L_11ec0341;
L_11ec031b:;
  /* 11ec031b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec031f je 0x11ec032e */
  if (C.zf) goto L_11ec032e;
  /* 11ec0321 call 0x11ec0510 */
  push32(0x11ec0326u); f_11ec0510();
  /* 11ec0326 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11ec032c jmp 0x11ec0338 */
  goto L_11ec0338;
L_11ec032e:;
  /* 11ec032e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11ec0338:;
  /* 11ec0338 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11ec033e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ec0341:;
  /* 11ec0341 jmp 0x11ec034b */
  goto L_11ec034b;
L_11ec0343:;
  /* 11ec0343 call 0x11ec0510 */
  push32(0x11ec0348u); f_11ec0510();
  /* 11ec0348 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ec034b:;
  /* 11ec034b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec034f je 0x11ec0368 */
  if (C.zf) goto L_11ec0368;
  /* 11ec0351 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ec0353 call 0x11eb9ed0 */
  push32(0x11ec0358u); f_11eb9ed0();
  /* 11ec0358 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec035b mov eax, dword ptr [0x11ee2b04] */
  EAX = (r32((uint32_t)(0x11ee2b04)));
  /* 11ec0360 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec0363 mov dword ptr [0x11ee2b04], eax */
  w32((uint32_t)(0x11ee2b04), (EAX));
L_11ec0368:;
  /* 11ec0368 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ec036b:;
  /* 11ec036b mov esp, ebp */
  ESP = (EBP);
  /* 11ec036d pop ebp */
  EBP = (pop32());
  /* 11ec036e ret  */
  ESPCHK(0x11ebff80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010370 @ 0x11ec0370 (403 bytes, 117 insns) */
void f_11ec0370(void) {
  FTRACE(0x11ec0370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec0370 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec0371 mov ebp, esp */
  EBP = (ESP);
  /* 11ec0373 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec0379 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec037c push eax */
  push32((uint32_t)(EAX));
  /* 11ec037d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11ec0383 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0384 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11ec038a push edx */
  push32((uint32_t)(EDX));
  /* 11ec038b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11ec0391 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0392 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec0395 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0396 call 0x11ec0610 */
  push32(0x11ec039bu); f_11ec0610();
  /* 11ec039b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec039e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec03a0 jne 0x11ec03a9 */
  if (!C.zf) goto L_11ec03a9;
  /* 11ec03a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec03a4 jmp 0x11ec04ff */
  goto L_11ec04ff;
L_11ec03a9:;
  /* 11ec03a9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11ec03ae push 0x11ede3a8 */
  push32((uint32_t)(0x11ede3a8u));
  /* 11ec03b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec03b5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11ec03bb push edx */
  push32((uint32_t)(EDX));
  /* 11ec03bc call 0x11eb9260 */
  push32(0x11ec03c1u); f_11eb9260();
  /* 11ec03c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec03c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec03c7 push eax */
  push32((uint32_t)(EAX));
  /* 11ec03c8 call 0x11eb6430 */
  push32(0x11ec03cdu); f_11eb6430();
  /* 11ec03cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec03d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec03d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec03d7 jne 0x11ec03e0 */
  if (!C.zf) goto L_11ec03e0;
  /* 11ec03d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec03db jmp 0x11ec04ff */
  goto L_11ec04ff;
L_11ec03e0:;
  /* 11ec03e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec03e3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec03e6 mov ecx, dword ptr [eax + 0x11ee14dc] */
  ECX = (r32((uint32_t)(EAX + 0x11ee14dc)));
  /* 11ec03ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec03ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec03f2 mov eax, dword ptr [edx*4 + 0x11ee2980] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ee2980)));
  /* 11ec03f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec03fc push 6 */
  push32((uint32_t)(0x6u));
  /* 11ec03fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0401 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec0404 add ecx, 0x11ee29d0 */
  { uint32_t _a=(ECX),_b=(0x11ee29d0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec040a push ecx */
  push32((uint32_t)(ECX));
  /* 11ec040b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11ec040e push edx */
  push32((uint32_t)(EDX));
  /* 11ec040f call 0x11ebcd10 */
  push32(0x11ec0414u); f_11ebcd10();
  /* 11ec0414 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0417 mov eax, dword ptr [0x11ee2998] */
  EAX = (r32((uint32_t)(0x11ee2998)));
  /* 11ec041c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ec041f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11ec0425 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0426 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec0429 push edx */
  push32((uint32_t)(EDX));
  /* 11ec042a call 0x11eb93e0 */
  push32(0x11ec042fu); f_11eb93e0();
  /* 11ec042f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0432 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0435 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec0438 mov dword ptr [ecx + 0x11ee14dc], eax */
  w32((uint32_t)(ECX + 0x11ee14dc), (EAX));
  /* 11ec043e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11ec0444 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ec044a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec044d mov dword ptr [eax*4 + 0x11ee2980], edx */
  w32((uint32_t)(EAX*4 + 0x11ee2980), (EDX));
  /* 11ec0454 push 6 */
  push32((uint32_t)(0x6u));
  /* 11ec0456 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11ec045c push ecx */
  push32((uint32_t)(ECX));
  /* 11ec045d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0460 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec0463 add edx, 0x11ee29d0 */
  { uint32_t _a=(EDX),_b=(0x11ee29d0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0469 push edx */
  push32((uint32_t)(EDX));
  /* 11ec046a call 0x11ebcd10 */
  push32(0x11ec046fu); f_11ebcd10();
  /* 11ec046f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0472 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0476 jne 0x11ec0483 */
  if (!C.zf) goto L_11ec0483;
  /* 11ec0478 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ec047e mov dword ptr [0x11ee2998], eax */
  w32((uint32_t)(0x11ee2998), (EAX));
L_11ec0483:;
  /* 11ec0483 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0487 jne 0x11ec0495 */
  if (!C.zf) goto L_11ec0495;
  /* 11ec0489 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11ec048f mov dword ptr [0x11ee299c], ecx */
  w32((uint32_t)(0x11ee299c), (ECX));
L_11ec0495:;
  /* 11ec0495 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0498 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec049b call dword ptr [edx + 0x11ee14e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x11ee14e0))), 0x11ec04a1u);
  /* 11ec04a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec04a3 je 0x11ec04dc */
  if (C.zf) goto L_11ec04dc;
  /* 11ec04a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec04a8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec04ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec04ae mov dword ptr [eax + 0x11ee14dc], ecx */
  w32((uint32_t)(EAX + 0x11ee14dc), (ECX));
  /* 11ec04b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec04b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec04b9 push edx */
  push32((uint32_t)(EDX));
  /* 11ec04ba call 0x11eb6ec0 */
  push32(0x11ec04bfu); f_11eb6ec0();
  /* 11ec04bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec04c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec04c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec04c8 mov dword ptr [eax*4 + 0x11ee2980], ecx */
  w32((uint32_t)(EAX*4 + 0x11ee2980), (ECX));
  /* 11ec04cf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec04d2 mov dword ptr [0x11ee2998], edx */
  w32((uint32_t)(0x11ee2998), (EDX));
  /* 11ec04d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec04da jmp 0x11ec04ff */
  goto L_11ec04ff;
L_11ec04dc:;
  /* 11ec04dc cmp dword ptr [ebp - 0xc], 0x11ee13c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x11ee13c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec04e3 je 0x11ec04f3 */
  if (C.zf) goto L_11ec04f3;
  /* 11ec04e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec04e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec04ea push eax */
  push32((uint32_t)(EAX));
  /* 11ec04eb call 0x11eb6ec0 */
  push32(0x11ec04f0u); f_11eb6ec0();
  /* 11ec04f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec04f3:;
  /* 11ec04f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec04f6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec04f9 mov eax, dword ptr [ecx + 0x11ee14dc] */
  EAX = (r32((uint32_t)(ECX + 0x11ee14dc)));
L_11ec04ff:;
  /* 11ec04ff mov esp, ebp */
  ESP = (EBP);
  /* 11ec0501 pop ebp */
  EBP = (pop32());
  /* 11ec0502 ret  */
  ESPCHK(0x11ec0370u, _esp0);
  ESP += 4; return;
}

/* FUN_10010510 @ 0x11ec0510 (256 bytes, 72 insns) */
void f_11ec0510(void) {
  FTRACE(0x11ec0510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec0510 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec0511 mov ebp, esp */
  EBP = (ESP);
  /* 11ec0513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec0516 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11ec051d cmp dword ptr [0x11ee14dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee14dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0524 jne 0x11ec0544 */
  if (!C.zf) goto L_11ec0544;
  /* 11ec0526 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11ec052b push 0x11ede3a8 */
  push32((uint32_t)(0x11ede3a8u));
  /* 11ec0530 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec0532 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11ec0537 call 0x11eb6430 */
  push32(0x11ec053cu); f_11eb6430();
  /* 11ec053c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec053f mov dword ptr [0x11ee14dc], eax */
  w32((uint32_t)(0x11ee14dc), (EAX));
L_11ec0544:;
  /* 11ec0544 mov eax, dword ptr [0x11ee14dc] */
  EAX = (r32((uint32_t)(0x11ee14dc)));
  /* 11ec0549 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11ec054c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ec0553 jmp 0x11ec055e */
  goto L_11ec055e;
L_11ec0555:;
  /* 11ec0555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0558 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec055b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ec055e:;
  /* 11ec055e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0561 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec0564 mov eax, dword ptr [edx + 0x11ee14dc] */
  EAX = (r32((uint32_t)(EDX + 0x11ee14dc)));
  /* 11ec056a push eax */
  push32((uint32_t)(EAX));
  /* 11ec056b push 0x11ede3b4 */
  push32((uint32_t)(0x11ede3b4u));
  /* 11ec0570 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0573 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec0576 mov edx, dword ptr [ecx + 0x11ee14d8] */
  EDX = (r32((uint32_t)(ECX + 0x11ee14d8)));
  /* 11ec057c push edx */
  push32((uint32_t)(EDX));
  /* 11ec057d push 3 */
  push32((uint32_t)(0x3u));
  /* 11ec057f mov eax, dword ptr [0x11ee14dc] */
  EAX = (r32((uint32_t)(0x11ee14dc)));
  /* 11ec0584 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0585 call 0x11ec07b0 */
  push32(0x11ec058au); f_11ec07b0();
  /* 11ec058a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec058d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0591 jge 0x11ec05d9 */
  if ((C.sf==C.of)) goto L_11ec05d9;
  /* 11ec0593 push 0x11ede3a0 */
  push32((uint32_t)(0x11ede3a0u));
  /* 11ec0598 mov ecx, dword ptr [0x11ee14dc] */
  ECX = (r32((uint32_t)(0x11ee14dc)));
  /* 11ec059e push ecx */
  push32((uint32_t)(ECX));
  /* 11ec059f call 0x11eb93f0 */
  push32(0x11ec05a4u); f_11eb93f0();
  /* 11ec05a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec05a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec05aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec05ad imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec05b0 mov eax, dword ptr [edx + 0x11ee14dc] */
  EAX = (r32((uint32_t)(EDX + 0x11ee14dc)));
  /* 11ec05b6 push eax */
  push32((uint32_t)(EAX));
  /* 11ec05b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec05ba imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec05bd mov edx, dword ptr [ecx + 0x11ee14dc] */
  EDX = (r32((uint32_t)(ECX + 0x11ee14dc)));
  /* 11ec05c3 push edx */
  push32((uint32_t)(EDX));
  /* 11ec05c4 call 0x11ec20c0 */
  push32(0x11ec05c9u); f_11ec20c0();
  /* 11ec05c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec05cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec05ce je 0x11ec05d7 */
  if (C.zf) goto L_11ec05d7;
  /* 11ec05d0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11ec05d7:;
  /* 11ec05d7 jmp 0x11ec0607 */
  goto L_11ec0607;
L_11ec05d9:;
  /* 11ec05d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec05dd jne 0x11ec05e6 */
  if (!C.zf) goto L_11ec05e6;
  /* 11ec05df mov eax, dword ptr [0x11ee14dc] */
  EAX = (r32((uint32_t)(0x11ee14dc)));
  /* 11ec05e4 jmp 0x11ec060c */
  goto L_11ec060c;
L_11ec05e6:;
  /* 11ec05e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec05e8 mov eax, dword ptr [0x11ee14dc] */
  EAX = (r32((uint32_t)(0x11ee14dc)));
  /* 11ec05ed push eax */
  push32((uint32_t)(EAX));
  /* 11ec05ee call 0x11eb6ec0 */
  push32(0x11ec05f3u); f_11eb6ec0();
  /* 11ec05f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec05f6 mov dword ptr [0x11ee14dc], 0 */
  w32((uint32_t)(0x11ee14dc), (0x0u));
  /* 11ec0600 mov eax, dword ptr [0x11ee14f4] */
  EAX = (r32((uint32_t)(0x11ee14f4)));
  /* 11ec0605 jmp 0x11ec060c */
  goto L_11ec060c;
L_11ec0607:;
  /* 11ec0607 jmp 0x11ec0555 */
  goto L_11ec0555;
L_11ec060c:;
  /* 11ec060c mov esp, ebp */
  ESP = (EBP);
  /* 11ec060e pop ebp */
  EBP = (pop32());
  /* 11ec060f ret  */
  ESPCHK(0x11ec0510u, _esp0);
  ESP += 4; return;
}

/* FUN_10010610 @ 0x11ec0610 (388 bytes, 115 insns) */
void f_11ec0610(void) {
  FTRACE(0x11ec0610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec0610 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec0611 mov ebp, esp */
  EBP = (ESP);
  /* 11ec0613 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec0619 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec061d jne 0x11ec0626 */
  if (!C.zf) goto L_11ec0626;
  /* 11ec061f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec0621 jmp 0x11ec0790 */
  goto L_11ec0790;
L_11ec0626:;
  /* 11ec0626 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0629 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec062c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec062f jne 0x11ec0680 */
  if (!C.zf) goto L_11ec0680;
  /* 11ec0631 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0634 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11ec0638 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec063a jne 0x11ec0680 */
  if (!C.zf) goto L_11ec0680;
  /* 11ec063c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec063f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11ec0642 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec0645 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11ec0649 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec064d je 0x11ec0669 */
  if (C.zf) goto L_11ec0669;
  /* 11ec064f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec0652 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11ec0657 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec065a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11ec0660 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec0663 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11ec0669:;
  /* 11ec0669 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec066d je 0x11ec0678 */
  if (C.zf) goto L_11ec0678;
  /* 11ec066f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec0672 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11ec0678:;
  /* 11ec0678 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec067b jmp 0x11ec0790 */
  goto L_11ec0790;
L_11ec0680:;
  /* 11ec0680 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0683 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0684 push 0x11ee1450 */
  push32((uint32_t)(0x11ee1450u));
  /* 11ec0689 call 0x11ec20c0 */
  push32(0x11ec068eu); f_11ec20c0();
  /* 11ec068e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0691 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec0693 je 0x11ec0748 */
  if (C.zf) goto L_11ec0748;
  /* 11ec0699 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec069c push edx */
  push32((uint32_t)(EDX));
  /* 11ec069d push 0x11ee13cc */
  push32((uint32_t)(0x11ee13ccu));
  /* 11ec06a2 call 0x11ec20c0 */
  push32(0x11ec06a7u); f_11ec20c0();
  /* 11ec06a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec06aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec06ac je 0x11ec0748 */
  if (C.zf) goto L_11ec0748;
  /* 11ec06b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec06b5 push eax */
  push32((uint32_t)(EAX));
  /* 11ec06b6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11ec06bc push ecx */
  push32((uint32_t)(ECX));
  /* 11ec06bd call 0x11ec0800 */
  push32(0x11ec06c2u); f_11ec0800();
  /* 11ec06c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec06c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec06c7 je 0x11ec06d0 */
  if (C.zf) goto L_11ec06d0;
  /* 11ec06c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec06cb jmp 0x11ec0790 */
  goto L_11ec0790;
L_11ec06d0:;
  /* 11ec06d0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11ec06d6 push edx */
  push32((uint32_t)(EDX));
  /* 11ec06d7 push 0x11ee29a8 */
  push32((uint32_t)(0x11ee29a8u));
  /* 11ec06dc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11ec06e2 push eax */
  push32((uint32_t)(EAX));
  /* 11ec06e3 call 0x11ec2210 */
  push32(0x11ec06e8u); f_11ec2210();
  /* 11ec06e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec06eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec06ed jne 0x11ec06f6 */
  if (!C.zf) goto L_11ec06f6;
  /* 11ec06ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec06f1 jmp 0x11ec0790 */
  goto L_11ec0790;
L_11ec06f6:;
  /* 11ec06f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec06f8 mov cx, word ptr [0x11ee29ac] */
  CX = (r16((uint32_t)(0x11ee29ac)));
  /* 11ec06ff mov dword ptr [0x11ee29b0], ecx */
  w32((uint32_t)(0x11ee29b0), (ECX));
  /* 11ec0705 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11ec070b push edx */
  push32((uint32_t)(EDX));
  /* 11ec070c push 0x11ee1450 */
  push32((uint32_t)(0x11ee1450u));
  /* 11ec0711 call 0x11ec0960 */
  push32(0x11ec0716u); f_11ec0960();
  /* 11ec0716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0719 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec071c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec071f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec0721 je 0x11ec0736 */
  if (C.zf) goto L_11ec0736;
  /* 11ec0723 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0726 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0727 push 0x11ee13cc */
  push32((uint32_t)(0x11ee13ccu));
  /* 11ec072c call 0x11eb93e0 */
  push32(0x11ec0731u); f_11eb93e0();
  /* 11ec0731 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0734 jmp 0x11ec0748 */
  goto L_11ec0748;
L_11ec0736:;
  /* 11ec0736 push 0x11ee1450 */
  push32((uint32_t)(0x11ee1450u));
  /* 11ec073b push 0x11ee13cc */
  push32((uint32_t)(0x11ee13ccu));
  /* 11ec0740 call 0x11eb93e0 */
  push32(0x11ec0745u); f_11eb93e0();
  /* 11ec0745 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec0748:;
  /* 11ec0748 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec074c je 0x11ec0761 */
  if (C.zf) goto L_11ec0761;
  /* 11ec074e push 6 */
  push32((uint32_t)(0x6u));
  /* 11ec0750 push 0x11ee29a8 */
  push32((uint32_t)(0x11ee29a8u));
  /* 11ec0755 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec0758 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0759 call 0x11ebcd10 */
  push32(0x11ec075eu); f_11ebcd10();
  /* 11ec075e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec0761:;
  /* 11ec0761 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0765 je 0x11ec077a */
  if (C.zf) goto L_11ec077a;
  /* 11ec0767 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ec0769 push 0x11ee29b0 */
  push32((uint32_t)(0x11ee29b0u));
  /* 11ec076e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec0771 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0772 call 0x11ebcd10 */
  push32(0x11ec0777u); f_11ebcd10();
  /* 11ec0777 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec077a:;
  /* 11ec077a push 0x11ee1450 */
  push32((uint32_t)(0x11ee1450u));
  /* 11ec077f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec0782 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0783 call 0x11eb93e0 */
  push32(0x11ec0788u); f_11eb93e0();
  /* 11ec0788 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec078b mov eax, 0x11ee1450 */
  EAX = (0x11ee1450u);
L_11ec0790:;
  /* 11ec0790 mov esp, ebp */
  ESP = (EBP);
  /* 11ec0792 pop ebp */
  EBP = (pop32());
  /* 11ec0793 ret  */
  ESPCHK(0x11ec0610u, _esp0);
  ESP += 4; return;
}

/* FUN_100107a0 @ 0x11ec07a0 (7 bytes, 5 insns) */
void f_11ec07a0(void) {
  FTRACE(0x11ec07a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec07a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec07a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec07a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec07a5 pop ebp */
  EBP = (pop32());
  /* 11ec07a6 ret  */
  ESPCHK(0x11ec07a0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11ec07b0 (79 bytes, 28 insns) */
void f_11ec07b0(void) {
  FTRACE(0x11ec07b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec07b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec07b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec07b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec07b6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11ec07b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec07bc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ec07c3 jmp 0x11ec07ce */
  goto L_11ec07ce;
L_11ec07c5:;
  /* 11ec07c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec07c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec07cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ec07ce:;
  /* 11ec07ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec07d1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec07d4 jge 0x11ec07f4 */
  if ((C.sf==C.of)) goto L_11ec07f4;
  /* 11ec07d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec07d9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec07dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec07df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec07e2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ec07e5 push edx */
  push32((uint32_t)(EDX));
  /* 11ec07e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec07e9 push eax */
  push32((uint32_t)(EAX));
  /* 11ec07ea call 0x11eb93f0 */
  push32(0x11ec07efu); f_11eb93f0();
  /* 11ec07ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec07f2 jmp 0x11ec07c5 */
  goto L_11ec07c5;
L_11ec07f4:;
  /* 11ec07f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ec07fb mov esp, ebp */
  ESP = (EBP);
  /* 11ec07fd pop ebp */
  EBP = (pop32());
  /* 11ec07fe ret  */
  ESPCHK(0x11ec07b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010800 @ 0x11ec0800 (349 bytes, 122 insns) */
void f_11ec0800(void) {
  FTRACE(0x11ec0800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec0800 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec0801 mov ebp, esp */
  EBP = (ESP);
  /* 11ec0803 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec0806 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11ec080b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec080d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0810 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0811 call 0x11eba1a0 */
  push32(0x11ec0816u); f_11eba1a0();
  /* 11ec0816 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0819 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec081c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ec081f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec0821 jne 0x11ec082a */
  if (!C.zf) goto L_11ec082a;
  /* 11ec0823 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec0825 jmp 0x11ec0959 */
  goto L_11ec0959;
L_11ec082a:;
  /* 11ec082a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec082d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec0830 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0833 jne 0x11ec0860 */
  if (!C.zf) goto L_11ec0860;
  /* 11ec0835 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec0838 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11ec083c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec083e je 0x11ec0860 */
  if (C.zf) goto L_11ec0860;
  /* 11ec0840 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec0843 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0846 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0847 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec084a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0850 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0851 call 0x11eb93e0 */
  push32(0x11ec0856u); f_11eb93e0();
  /* 11ec0856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0859 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec085b jmp 0x11ec0959 */
  goto L_11ec0959;
L_11ec0860:;
  /* 11ec0860 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ec0867 jmp 0x11ec0872 */
  goto L_11ec0872;
L_11ec0869:;
  /* 11ec0869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec086c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec086f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ec0872:;
  /* 11ec0872 push 0x11ede3b8 */
  push32((uint32_t)(0x11ede3b8u));
  /* 11ec0877 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec087a push ecx */
  push32((uint32_t)(ECX));
  /* 11ec087b call 0x11ec2150 */
  push32(0x11ec0880u); f_11ec2150();
  /* 11ec0880 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0883 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec0886 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec088a jne 0x11ec0894 */
  if (!C.zf) goto L_11ec0894;
  /* 11ec088c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec088f jmp 0x11ec0959 */
  goto L_11ec0959;
L_11ec0894:;
  /* 11ec0894 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec0897 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec089a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec089c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11ec089f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec08a3 jne 0x11ec08ca */
  if (!C.zf) goto L_11ec08ca;
  /* 11ec08a5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec08a9 jge 0x11ec08ca */
  if ((C.sf==C.of)) goto L_11ec08ca;
  /* 11ec08ab movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ec08af cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec08b2 je 0x11ec08ca */
  if (C.zf) goto L_11ec08ca;
  /* 11ec08b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec08b7 push edx */
  push32((uint32_t)(EDX));
  /* 11ec08b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec08bb push eax */
  push32((uint32_t)(EAX));
  /* 11ec08bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec08bf push ecx */
  push32((uint32_t)(ECX));
  /* 11ec08c0 call 0x11eb9c50 */
  push32(0x11ec08c5u); f_11eb9c50();
  /* 11ec08c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec08c8 jmp 0x11ec0930 */
  goto L_11ec0930;
L_11ec08ca:;
  /* 11ec08ca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec08ce jne 0x11ec08f8 */
  if (!C.zf) goto L_11ec08f8;
  /* 11ec08d0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec08d4 jge 0x11ec08f8 */
  if ((C.sf==C.of)) goto L_11ec08f8;
  /* 11ec08d6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ec08da cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec08dd je 0x11ec08f8 */
  if (C.zf) goto L_11ec08f8;
  /* 11ec08df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec08e2 push eax */
  push32((uint32_t)(EAX));
  /* 11ec08e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec08e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec08e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec08ea add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec08ed push edx */
  push32((uint32_t)(EDX));
  /* 11ec08ee call 0x11eb9c50 */
  push32(0x11ec08f3u); f_11eb9c50();
  /* 11ec08f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec08f6 jmp 0x11ec0930 */
  goto L_11ec0930;
L_11ec08f8:;
  /* 11ec08f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec08fc jne 0x11ec092b */
  if (!C.zf) goto L_11ec092b;
  /* 11ec08fe movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ec0902 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec0904 je 0x11ec090f */
  if (C.zf) goto L_11ec090f;
  /* 11ec0906 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ec090a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec090d jne 0x11ec092b */
  if (!C.zf) goto L_11ec092b;
L_11ec090f:;
  /* 11ec090f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0912 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0913 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec0916 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0917 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec091a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0920 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0921 call 0x11eb9c50 */
  push32(0x11ec0926u); f_11eb9c50();
  /* 11ec0926 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0929 jmp 0x11ec0930 */
  goto L_11ec0930;
L_11ec092b:;
  /* 11ec092b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec092e jmp 0x11ec0959 */
  goto L_11ec0959;
L_11ec0930:;
  /* 11ec0930 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ec0934 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0937 jne 0x11ec093b */
  if (!C.zf) goto L_11ec093b;
  /* 11ec0939 jmp 0x11ec0957 */
  goto L_11ec0957;
L_11ec093b:;
  /* 11ec093b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ec093f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec0941 jne 0x11ec0945 */
  if (!C.zf) goto L_11ec0945;
  /* 11ec0943 jmp 0x11ec0957 */
  goto L_11ec0957;
L_11ec0945:;
  /* 11ec0945 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0948 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec094b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11ec094f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11ec0952 jmp 0x11ec0869 */
  goto L_11ec0869;
L_11ec0957:;
  /* 11ec0957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec0959:;
  /* 11ec0959 mov esp, ebp */
  ESP = (EBP);
  /* 11ec095b pop ebp */
  EBP = (pop32());
  /* 11ec095c ret  */
  ESPCHK(0x11ec0800u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11ec0960 (101 bytes, 36 insns) */
void f_11ec0960(void) {
  FTRACE(0x11ec0960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec0960 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec0961 mov ebp, esp */
  EBP = (ESP);
  /* 11ec0963 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec0966 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0967 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec096a push ecx */
  push32((uint32_t)(ECX));
  /* 11ec096b call 0x11eb93e0 */
  push32(0x11ec0970u); f_11eb93e0();
  /* 11ec0970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0973 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec0976 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11ec097a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec097c je 0x11ec0998 */
  if (C.zf) goto L_11ec0998;
  /* 11ec097e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec0981 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0984 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0985 push 0x11ede3c0 */
  push32((uint32_t)(0x11ede3c0u));
  /* 11ec098a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec098c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec098f push edx */
  push32((uint32_t)(EDX));
  /* 11ec0990 call 0x11ec07b0 */
  push32(0x11ec0995u); f_11ec07b0();
  /* 11ec0995 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec0998:;
  /* 11ec0998 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec099b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11ec09a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec09a4 je 0x11ec09c3 */
  if (C.zf) goto L_11ec09c3;
  /* 11ec09a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec09a9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec09af push edx */
  push32((uint32_t)(EDX));
  /* 11ec09b0 push 0x11ede3bc */
  push32((uint32_t)(0x11ede3bcu));
  /* 11ec09b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec09b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec09ba push eax */
  push32((uint32_t)(EAX));
  /* 11ec09bb call 0x11ec07b0 */
  push32(0x11ec09c0u); f_11ec07b0();
  /* 11ec09c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec09c3:;
  /* 11ec09c3 pop ebp */
  EBP = (pop32());
  /* 11ec09c4 ret  */
  ESPCHK(0x11ec0960u, _esp0);
  ESP += 4; return;
}

/* FUN_100109d0 @ 0x11ec09d0 (130 bytes, 50 insns) */
void f_11ec09d0(void) {
  FTRACE(0x11ec09d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec09d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec09d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec09d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec09d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11ec09d5 push esi */
  push32((uint32_t)(ESI));
  /* 11ec09d6 push edi */
  push32((uint32_t)(EDI));
  /* 11ec09d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ec09de:;
  /* 11ec09de cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec09e2 jne 0x11ec0a02 */
  if (!C.zf) goto L_11ec0a02;
  /* 11ec09e4 push 0x11ede3d0 */
  push32((uint32_t)(0x11ede3d0u));
  /* 11ec09e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec09eb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11ec09ed push 0x11ede3c4 */
  push32((uint32_t)(0x11ede3c4u));
  /* 11ec09f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec09f4 call 0x11eb54f0 */
  push32(0x11ec09f9u); f_11eb54f0();
  /* 11ec09f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec09fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec09ff jne 0x11ec0a02 */
  if (!C.zf) goto L_11ec0a02;
  /* 11ec0a01 int3  */
  x86_unimpl("int3 @ 0x11ec0a01");
L_11ec0a02:;
  /* 11ec0a02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec0a04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec0a06 jne 0x11ec09de */
  if (!C.zf) goto L_11ec09de;
  /* 11ec0a08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0a0b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ec0a0e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec0a11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec0a13 je 0x11ec0a21 */
  if (C.zf) goto L_11ec0a21;
  /* 11ec0a15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0a18 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11ec0a1f jmp 0x11ec0a48 */
  goto L_11ec0a48;
L_11ec0a21:;
  /* 11ec0a21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0a24 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0a25 call 0x11ebf240 */
  push32(0x11ec0a2au); f_11ebf240();
  /* 11ec0a2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0a2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0a30 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0a31 call 0x11ec0a60 */
  push32(0x11ec0a36u); f_11ec0a60();
  /* 11ec0a36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0a39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec0a3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0a3f push eax */
  push32((uint32_t)(EAX));
  /* 11ec0a40 call 0x11ebf2b0 */
  push32(0x11ec0a45u); f_11ebf2b0();
  /* 11ec0a45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec0a48:;
  /* 11ec0a48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0a4b pop edi */
  EDI = (pop32());
  /* 11ec0a4c pop esi */
  ESI = (pop32());
  /* 11ec0a4d pop ebx */
  EBX = (pop32());
  /* 11ec0a4e mov esp, ebp */
  ESP = (EBP);
  /* 11ec0a50 pop ebp */
  EBP = (pop32());
  /* 11ec0a51 ret  */
  ESPCHK(0x11ec09d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a60 @ 0x11ec0a60 (190 bytes, 67 insns) */
void f_11ec0a60(void) {
  FTRACE(0x11ec0a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec0a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec0a61 mov ebp, esp */
  EBP = (ESP);
  /* 11ec0a63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec0a66 push ebx */
  push32((uint32_t)(EBX));
  /* 11ec0a67 push esi */
  push32((uint32_t)(ESI));
  /* 11ec0a68 push edi */
  push32((uint32_t)(EDI));
  /* 11ec0a69 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ec0a70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0a73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ec0a76:;
  /* 11ec0a76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0a7a jne 0x11ec0a9a */
  if (!C.zf) goto L_11ec0a9a;
  /* 11ec0a7c push 0x11ede274 */
  push32((uint32_t)(0x11ede274u));
  /* 11ec0a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec0a83 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11ec0a85 push 0x11ede3c4 */
  push32((uint32_t)(0x11ede3c4u));
  /* 11ec0a8a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec0a8c call 0x11eb54f0 */
  push32(0x11ec0a91u); f_11eb54f0();
  /* 11ec0a91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0a94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0a97 jne 0x11ec0a9a */
  if (!C.zf) goto L_11ec0a9a;
  /* 11ec0a99 int3  */
  x86_unimpl("int3 @ 0x11ec0a99");
L_11ec0a9a:;
  /* 11ec0a9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0a9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec0a9e jne 0x11ec0a76 */
  if (!C.zf) goto L_11ec0a76;
  /* 11ec0aa0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec0aa3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ec0aa6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11ec0aab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec0aad je 0x11ec0b0a */
  if (C.zf) goto L_11ec0b0a;
  /* 11ec0aaf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec0ab2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0ab3 call 0x11ebfd60 */
  push32(0x11ec0ab8u); f_11ebfd60();
  /* 11ec0ab8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0abb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec0abe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec0ac1 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0ac2 call 0x11ec30e0 */
  push32(0x11ec0ac7u); f_11ec30e0();
  /* 11ec0ac7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0aca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec0acd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ec0ad0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0ad1 call 0x11ec2fb0 */
  push32(0x11ec0ad6u); f_11ec2fb0();
  /* 11ec0ad6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0ad9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec0adb jge 0x11ec0ae6 */
  if ((C.sf==C.of)) goto L_11ec0ae6;
  /* 11ec0add mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ec0ae4 jmp 0x11ec0b0a */
  goto L_11ec0b0a;
L_11ec0ae6:;
  /* 11ec0ae6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec0ae9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0aed je 0x11ec0b0a */
  if (C.zf) goto L_11ec0b0a;
  /* 11ec0aef push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec0af1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec0af4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ec0af7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0af8 call 0x11eb6ec0 */
  push32(0x11ec0afdu); f_11eb6ec0();
  /* 11ec0afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0b00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec0b03 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11ec0b0a:;
  /* 11ec0b0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec0b0d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11ec0b14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0b17 pop edi */
  EDI = (pop32());
  /* 11ec0b18 pop esi */
  ESI = (pop32());
  /* 11ec0b19 pop ebx */
  EBX = (pop32());
  /* 11ec0b1a mov esp, ebp */
  ESP = (EBP);
  /* 11ec0b1c pop ebp */
  EBP = (pop32());
  /* 11ec0b1d ret  */
  ESPCHK(0x11ec0a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b20 @ 0x11ec0b20 (210 bytes, 63 insns) */
void f_11ec0b20(void) {
  FTRACE(0x11ec0b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec0b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec0b21 mov ebp, esp */
  EBP = (ESP);
  /* 11ec0b23 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0b24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0b27 cmp eax, dword ptr [0x11ee429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0b2d jae 0x11ec0b51 */
  if (!C.cf) goto L_11ec0b51;
  /* 11ec0b2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0b32 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ec0b35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0b38 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ec0b3b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec0b3e mov eax, dword ptr [ecx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11ee4160)));
  /* 11ec0b45 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ec0b4a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0b4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec0b4f jne 0x11ec0b64 */
  if (!C.zf) goto L_11ec0b64;
L_11ec0b51:;
  /* 11ec0b51 call 0x11ebe300 */
  push32(0x11ec0b56u); f_11ebe300();
  /* 11ec0b56 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ec0b5c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec0b5f jmp 0x11ec0bee */
  goto L_11ec0bee;
L_11ec0b64:;
  /* 11ec0b64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0b67 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0b68 call 0x11ebfb20 */
  push32(0x11ec0b6du); f_11ebfb20();
  /* 11ec0b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0b70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0b73 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ec0b76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0b79 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0b7c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec0b7f mov edx, dword ptr [eax*4 + 0x11ee4160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11ee4160)));
  /* 11ec0b86 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11ec0b8b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ec0b8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec0b90 je 0x11ec0bcd */
  if (C.zf) goto L_11ec0bcd;
  /* 11ec0b92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0b95 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0b96 call 0x11ebf9a0 */
  push32(0x11ec0b9bu); f_11ebf9a0();
  /* 11ec0b9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0b9e push eax */
  push32((uint32_t)(EAX));
  /* 11ec0b9f call dword ptr [0x11ee5300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5300))), 0x11ec0ba5u);
  /* 11ec0ba5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec0ba7 jne 0x11ec0bb4 */
  if (!C.zf) goto L_11ec0bb4;
  /* 11ec0ba9 call dword ptr [0x11ee53b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53b4))), 0x11ec0bafu);
  /* 11ec0baf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec0bb2 jmp 0x11ec0bbb */
  goto L_11ec0bbb;
L_11ec0bb4:;
  /* 11ec0bb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ec0bbb:;
  /* 11ec0bbb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0bbf jne 0x11ec0bc3 */
  if (!C.zf) goto L_11ec0bc3;
  /* 11ec0bc1 jmp 0x11ec0bdf */
  goto L_11ec0bdf;
L_11ec0bc3:;
  /* 11ec0bc3 call 0x11ebe310 */
  push32(0x11ec0bc8u); f_11ebe310();
  /* 11ec0bc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0bcb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ec0bcd:;
  /* 11ec0bcd call 0x11ebe300 */
  push32(0x11ec0bd2u); f_11ebe300();
  /* 11ec0bd2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ec0bd8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ec0bdf:;
  /* 11ec0bdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0be2 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0be3 call 0x11ebfbb0 */
  push32(0x11ec0be8u); f_11ebfbb0();
  /* 11ec0be8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0beb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ec0bee:;
  /* 11ec0bee mov esp, ebp */
  ESP = (EBP);
  /* 11ec0bf0 pop ebp */
  EBP = (pop32());
  /* 11ec0bf1 ret  */
  ESPCHK(0x11ec0b20u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11ec0c00 (219 bytes, 64 insns) */
void f_11ec0c00(void) {
  FTRACE(0x11ec0c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec0c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec0c01 mov ebp, esp */
  EBP = (ESP);
  /* 11ec0c03 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0c04 cmp dword ptr [0x11ee2994], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2994))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0c0b je 0x11ec0ca1 */
  if (C.zf) goto L_11ec0ca1;
  /* 11ec0c11 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11ec0c13 push 0x11ede3e0 */
  push32((uint32_t)(0x11ede3e0u));
  /* 11ec0c18 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec0c1a push 0xac */
  push32((uint32_t)(0xacu));
  /* 11ec0c1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0c21 call 0x11eb6840 */
  push32(0x11ec0c26u); f_11eb6840();
  /* 11ec0c26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0c29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec0c2c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0c30 jne 0x11ec0c3c */
  if (!C.zf) goto L_11ec0c3c;
  /* 11ec0c32 mov eax, 1 */
  EAX = (0x1u);
  /* 11ec0c37 jmp 0x11ec0cd7 */
  goto L_11ec0cd7;
L_11ec0c3c:;
  /* 11ec0c3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0c3f push eax */
  push32((uint32_t)(EAX));
  /* 11ec0c40 call 0x11ec0ce0 */
  push32(0x11ec0c45u); f_11ec0ce0();
  /* 11ec0c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0c48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec0c4a je 0x11ec0c6d */
  if (C.zf) goto L_11ec0c6d;
  /* 11ec0c4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0c4f push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0c50 call 0x11ec1270 */
  push32(0x11ec0c55u); f_11ec1270();
  /* 11ec0c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0c58 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec0c5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0c5d push edx */
  push32((uint32_t)(EDX));
  /* 11ec0c5e call 0x11eb6ec0 */
  push32(0x11ec0c63u); f_11eb6ec0();
  /* 11ec0c63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0c66 mov eax, 1 */
  EAX = (0x1u);
  /* 11ec0c6b jmp 0x11ec0cd7 */
  goto L_11ec0cd7;
L_11ec0c6d:;
  /* 11ec0c6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0c70 mov dword ptr [0x11ee1c98], eax */
  w32((uint32_t)(0x11ee1c98), (EAX));
  /* 11ec0c75 mov ecx, dword ptr [0x11ee29b4] */
  ECX = (r32((uint32_t)(0x11ee29b4)));
  /* 11ec0c7b push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0c7c call 0x11ec1270 */
  push32(0x11ec0c81u); f_11ec1270();
  /* 11ec0c81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0c84 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec0c86 mov edx, dword ptr [0x11ee29b4] */
  EDX = (r32((uint32_t)(0x11ee29b4)));
  /* 11ec0c8c push edx */
  push32((uint32_t)(EDX));
  /* 11ec0c8d call 0x11eb6ec0 */
  push32(0x11ec0c92u); f_11eb6ec0();
  /* 11ec0c92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0c95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0c98 mov dword ptr [0x11ee29b4], eax */
  w32((uint32_t)(0x11ee29b4), (EAX));
  /* 11ec0c9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec0c9f jmp 0x11ec0cd7 */
  goto L_11ec0cd7;
L_11ec0ca1:;
  /* 11ec0ca1 mov dword ptr [0x11ee1c98], 0x11ee1ca0 */
  w32((uint32_t)(0x11ee1c98), (0x11ee1ca0u));
  /* 11ec0cab mov ecx, dword ptr [0x11ee29b4] */
  ECX = (r32((uint32_t)(0x11ee29b4)));
  /* 11ec0cb1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec0cb2 call 0x11ec1270 */
  push32(0x11ec0cb7u); f_11ec1270();
  /* 11ec0cb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0cba push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec0cbc mov edx, dword ptr [0x11ee29b4] */
  EDX = (r32((uint32_t)(0x11ee29b4)));
  /* 11ec0cc2 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0cc3 call 0x11eb6ec0 */
  push32(0x11ec0cc8u); f_11eb6ec0();
  /* 11ec0cc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0ccb mov dword ptr [0x11ee29b4], 0 */
  w32((uint32_t)(0x11ee29b4), (0x0u));
  /* 11ec0cd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec0cd7:;
  /* 11ec0cd7 mov esp, ebp */
  ESP = (EBP);
  /* 11ec0cd9 pop ebp */
  EBP = (pop32());
  /* 11ec0cda ret  */
  ESPCHK(0x11ec0c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ce0 @ 0x11ec0ce0 (1423 bytes, 533 insns) */
void f_11ec0ce0(void) {
  FTRACE(0x11ec0ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec0ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec0ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec0ce3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec0ce6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ec0ced xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec0cef mov ax, word ptr [0x11ee29ee] */
  AX = (r16((uint32_t)(0x11ee29ee)));
  /* 11ec0cf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec0cf8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0cfa mov cx, word ptr [0x11ee29f0] */
  CX = (r16((uint32_t)(0x11ee29f0)));
  /* 11ec0d01 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec0d04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec0d08 jne 0x11ec0d12 */
  if (!C.zf) goto L_11ec0d12;
  /* 11ec0d0a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec0d0d jmp 0x11ec126b */
  goto L_11ec126b;
L_11ec0d12:;
  /* 11ec0d12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0d15 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0d18 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0d19 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11ec0d1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0d1e push eax */
  push32((uint32_t)(EAX));
  /* 11ec0d1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0d21 call 0x11ec45f0 */
  push32(0x11ec0d26u); f_11ec45f0();
  /* 11ec0d26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0d29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0d2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0d2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0d31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0d34 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0d37 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0d38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11ec0d3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0d3d push eax */
  push32((uint32_t)(EAX));
  /* 11ec0d3e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0d40 call 0x11ec45f0 */
  push32(0x11ec0d45u); f_11ec45f0();
  /* 11ec0d45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0d48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0d4b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0d4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0d50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0d53 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0d56 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0d57 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11ec0d59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0d5c push eax */
  push32((uint32_t)(EAX));
  /* 11ec0d5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0d5f call 0x11ec45f0 */
  push32(0x11ec0d64u); f_11ec45f0();
  /* 11ec0d64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0d67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0d6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0d6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0d6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0d72 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0d75 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0d76 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11ec0d78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0d7b push eax */
  push32((uint32_t)(EAX));
  /* 11ec0d7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0d7e call 0x11ec45f0 */
  push32(0x11ec0d83u); f_11ec45f0();
  /* 11ec0d83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0d86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0d89 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0d8b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0d8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0d91 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0d94 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0d95 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11ec0d97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0d9a push eax */
  push32((uint32_t)(EAX));
  /* 11ec0d9b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0d9d call 0x11ec45f0 */
  push32(0x11ec0da2u); f_11ec45f0();
  /* 11ec0da2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0da5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0da8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0daa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0dad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0db0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0db3 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0db4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11ec0db6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0db9 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0dba push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0dbc call 0x11ec45f0 */
  push32(0x11ec0dc1u); f_11ec45f0();
  /* 11ec0dc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0dc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0dc7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0dc9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0dcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0dcf push edx */
  push32((uint32_t)(EDX));
  /* 11ec0dd0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11ec0dd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0dd5 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0dd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0dd8 call 0x11ec45f0 */
  push32(0x11ec0dddu); f_11ec45f0();
  /* 11ec0ddd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0de0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0de3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0de5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0de8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0deb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0dee push edx */
  push32((uint32_t)(EDX));
  /* 11ec0def push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11ec0df1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0df4 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0df5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0df7 call 0x11ec45f0 */
  push32(0x11ec0dfcu); f_11ec45f0();
  /* 11ec0dfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0dff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0e02 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0e04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0e07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0e0a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0e0d push edx */
  push32((uint32_t)(EDX));
  /* 11ec0e0e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11ec0e10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0e13 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0e14 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0e16 call 0x11ec45f0 */
  push32(0x11ec0e1bu); f_11ec45f0();
  /* 11ec0e1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0e1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0e21 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0e23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0e26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0e29 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0e2c push edx */
  push32((uint32_t)(EDX));
  /* 11ec0e2d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11ec0e2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0e32 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0e33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0e35 call 0x11ec45f0 */
  push32(0x11ec0e3au); f_11ec45f0();
  /* 11ec0e3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0e3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0e40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0e42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0e45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0e48 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0e4b push edx */
  push32((uint32_t)(EDX));
  /* 11ec0e4c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11ec0e4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0e51 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0e52 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0e54 call 0x11ec45f0 */
  push32(0x11ec0e59u); f_11ec45f0();
  /* 11ec0e59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0e5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0e5f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0e61 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0e64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0e67 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0e6a push edx */
  push32((uint32_t)(EDX));
  /* 11ec0e6b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11ec0e6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0e70 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0e71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0e73 call 0x11ec45f0 */
  push32(0x11ec0e78u); f_11ec45f0();
  /* 11ec0e78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0e7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0e7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0e80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0e83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0e86 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0e89 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0e8a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11ec0e8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0e8f push eax */
  push32((uint32_t)(EAX));
  /* 11ec0e90 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0e92 call 0x11ec45f0 */
  push32(0x11ec0e97u); f_11ec45f0();
  /* 11ec0e97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0e9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0e9d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0e9f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0ea2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0ea5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0ea8 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0ea9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11ec0eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0eae push eax */
  push32((uint32_t)(EAX));
  /* 11ec0eaf push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0eb1 call 0x11ec45f0 */
  push32(0x11ec0eb6u); f_11ec45f0();
  /* 11ec0eb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0eb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0ebc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0ebe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0ec1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0ec4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0ec7 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0ec8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11ec0eca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0ecd push eax */
  push32((uint32_t)(EAX));
  /* 11ec0ece push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0ed0 call 0x11ec45f0 */
  push32(0x11ec0ed5u); f_11ec45f0();
  /* 11ec0ed5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0ed8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0edb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0edd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0ee0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0ee3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0ee6 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0ee7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11ec0ee9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0eec push eax */
  push32((uint32_t)(EAX));
  /* 11ec0eed push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0eef call 0x11ec45f0 */
  push32(0x11ec0ef4u); f_11ec45f0();
  /* 11ec0ef4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0ef7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0efa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0efc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0eff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0f02 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0f05 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0f06 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11ec0f08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0f0b push eax */
  push32((uint32_t)(EAX));
  /* 11ec0f0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0f0e call 0x11ec45f0 */
  push32(0x11ec0f13u); f_11ec45f0();
  /* 11ec0f13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0f16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0f19 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0f1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0f1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0f21 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0f24 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0f25 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11ec0f27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0f2a push eax */
  push32((uint32_t)(EAX));
  /* 11ec0f2b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0f2d call 0x11ec45f0 */
  push32(0x11ec0f32u); f_11ec45f0();
  /* 11ec0f32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0f35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0f38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0f3a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0f3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0f40 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0f43 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0f44 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11ec0f46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0f49 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0f4a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0f4c call 0x11ec45f0 */
  push32(0x11ec0f51u); f_11ec45f0();
  /* 11ec0f51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0f54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0f57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0f59 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0f5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0f5f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0f62 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0f63 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11ec0f65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0f68 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0f69 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0f6b call 0x11ec45f0 */
  push32(0x11ec0f70u); f_11ec45f0();
  /* 11ec0f70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0f73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0f76 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0f78 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0f7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0f7e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0f81 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0f82 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11ec0f84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0f87 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0f88 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0f8a call 0x11ec45f0 */
  push32(0x11ec0f8fu); f_11ec45f0();
  /* 11ec0f8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0f92 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0f95 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0f97 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0f9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0f9d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0fa0 push edx */
  push32((uint32_t)(EDX));
  /* 11ec0fa1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11ec0fa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0fa6 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0fa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0fa9 call 0x11ec45f0 */
  push32(0x11ec0faeu); f_11ec45f0();
  /* 11ec0fae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0fb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0fb4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0fb6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0fb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0fbc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0fbf push edx */
  push32((uint32_t)(EDX));
  /* 11ec0fc0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11ec0fc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0fc5 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0fc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0fc8 call 0x11ec45f0 */
  push32(0x11ec0fcdu); f_11ec45f0();
  /* 11ec0fcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0fd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0fd3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0fd5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0fd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0fdb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0fde push edx */
  push32((uint32_t)(EDX));
  /* 11ec0fdf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11ec0fe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec0fe4 push eax */
  push32((uint32_t)(EAX));
  /* 11ec0fe5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec0fe7 call 0x11ec45f0 */
  push32(0x11ec0fecu); f_11ec45f0();
  /* 11ec0fec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0fef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec0ff2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec0ff4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec0ff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec0ffa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec0ffd push edx */
  push32((uint32_t)(EDX));
  /* 11ec0ffe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11ec1000 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1003 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1004 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1006 call 0x11ec45f0 */
  push32(0x11ec100bu); f_11ec45f0();
  /* 11ec100b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec100e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec1011 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1013 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec1016 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1019 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec101c push edx */
  push32((uint32_t)(EDX));
  /* 11ec101d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11ec101f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1022 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1023 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1025 call 0x11ec45f0 */
  push32(0x11ec102au); f_11ec45f0();
  /* 11ec102a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec102d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec1030 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1032 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec1035 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1038 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec103b push edx */
  push32((uint32_t)(EDX));
  /* 11ec103c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11ec103e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1041 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1042 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1044 call 0x11ec45f0 */
  push32(0x11ec1049u); f_11ec45f0();
  /* 11ec1049 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec104c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec104f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1051 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec1054 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1057 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec105a push edx */
  push32((uint32_t)(EDX));
  /* 11ec105b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11ec105d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1060 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1061 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1063 call 0x11ec45f0 */
  push32(0x11ec1068u); f_11ec45f0();
  /* 11ec1068 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec106b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec106e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1070 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec1073 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1076 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1079 push edx */
  push32((uint32_t)(EDX));
  /* 11ec107a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11ec107c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec107f push eax */
  push32((uint32_t)(EAX));
  /* 11ec1080 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1082 call 0x11ec45f0 */
  push32(0x11ec1087u); f_11ec45f0();
  /* 11ec1087 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec108a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec108d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec108f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec1092 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1095 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1098 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1099 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11ec109b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec109e push eax */
  push32((uint32_t)(EAX));
  /* 11ec109f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec10a1 call 0x11ec45f0 */
  push32(0x11ec10a6u); f_11ec45f0();
  /* 11ec10a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec10a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec10ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec10ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec10b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec10b4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec10b7 push edx */
  push32((uint32_t)(EDX));
  /* 11ec10b8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11ec10ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec10bd push eax */
  push32((uint32_t)(EAX));
  /* 11ec10be push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec10c0 call 0x11ec45f0 */
  push32(0x11ec10c5u); f_11ec45f0();
  /* 11ec10c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec10c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec10cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec10cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec10d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec10d3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec10d6 push edx */
  push32((uint32_t)(EDX));
  /* 11ec10d7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11ec10d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec10dc push eax */
  push32((uint32_t)(EAX));
  /* 11ec10dd push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec10df call 0x11ec45f0 */
  push32(0x11ec10e4u); f_11ec45f0();
  /* 11ec10e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec10e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec10ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec10ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec10ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec10f2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec10f8 push edx */
  push32((uint32_t)(EDX));
  /* 11ec10f9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11ec10fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec10fe push eax */
  push32((uint32_t)(EAX));
  /* 11ec10ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1101 call 0x11ec45f0 */
  push32(0x11ec1106u); f_11ec45f0();
  /* 11ec1106 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1109 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec110c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec110e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec1111 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1114 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec111a push edx */
  push32((uint32_t)(EDX));
  /* 11ec111b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ec111d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1120 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1121 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1123 call 0x11ec45f0 */
  push32(0x11ec1128u); f_11ec45f0();
  /* 11ec1128 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec112b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec112e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1130 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec1133 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1136 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec113c push edx */
  push32((uint32_t)(EDX));
  /* 11ec113d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ec113f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1142 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1143 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1145 call 0x11ec45f0 */
  push32(0x11ec114au); f_11ec45f0();
  /* 11ec114a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec114d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec1150 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1152 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec1155 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1158 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec115e push edx */
  push32((uint32_t)(EDX));
  /* 11ec115f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11ec1161 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1164 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1165 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1167 call 0x11ec45f0 */
  push32(0x11ec116cu); f_11ec45f0();
  /* 11ec116c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec116f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec1172 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1174 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec1177 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec117a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1180 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1181 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11ec1183 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1186 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1187 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1189 call 0x11ec45f0 */
  push32(0x11ec118eu); f_11ec45f0();
  /* 11ec118e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1191 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec1194 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1196 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec1199 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec119c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec11a2 push edx */
  push32((uint32_t)(EDX));
  /* 11ec11a3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11ec11a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec11a8 push eax */
  push32((uint32_t)(EAX));
  /* 11ec11a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec11ab call 0x11ec45f0 */
  push32(0x11ec11b0u); f_11ec45f0();
  /* 11ec11b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec11b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec11b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec11b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec11bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec11be add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec11c4 push edx */
  push32((uint32_t)(EDX));
  /* 11ec11c5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11ec11c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec11ca push eax */
  push32((uint32_t)(EAX));
  /* 11ec11cb push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec11cd call 0x11ec45f0 */
  push32(0x11ec11d2u); f_11ec45f0();
  /* 11ec11d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec11d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec11d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec11da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec11dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec11e0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec11e6 push edx */
  push32((uint32_t)(EDX));
  /* 11ec11e7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11ec11e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec11ec push eax */
  push32((uint32_t)(EAX));
  /* 11ec11ed push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec11ef call 0x11ec45f0 */
  push32(0x11ec11f4u); f_11ec45f0();
  /* 11ec11f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec11f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec11fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec11fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec11ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1202 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1208 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1209 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11ec120b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec120e push eax */
  push32((uint32_t)(EAX));
  /* 11ec120f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1211 call 0x11ec45f0 */
  push32(0x11ec1216u); f_11ec45f0();
  /* 11ec1216 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1219 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec121c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec121e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec1221 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1224 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec122a push edx */
  push32((uint32_t)(EDX));
  /* 11ec122b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11ec122d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1230 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1231 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1233 call 0x11ec45f0 */
  push32(0x11ec1238u); f_11ec45f0();
  /* 11ec1238 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec123b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec123e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1240 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec1243 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1246 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec124c push edx */
  push32((uint32_t)(EDX));
  /* 11ec124d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11ec1252 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1255 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1256 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1258 call 0x11ec45f0 */
  push32(0x11ec125du); f_11ec45f0();
  /* 11ec125d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1260 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec1263 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1265 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ec1268 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11ec126b:;
  /* 11ec126b mov esp, ebp */
  ESP = (EBP);
  /* 11ec126d pop ebp */
  EBP = (pop32());
  /* 11ec126e ret  */
  ESPCHK(0x11ec0ce0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11ec1270 (779 bytes, 265 insns) */
void f_11ec1270(void) {
  FTRACE(0x11ec1270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec1270 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec1271 mov ebp, esp */
  EBP = (ESP);
  /* 11ec1273 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1277 jne 0x11ec127e */
  if (!C.zf) goto L_11ec127e;
  /* 11ec1279 jmp 0x11ec1579 */
  goto L_11ec1579;
L_11ec127e:;
  /* 11ec127e push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1283 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ec1286 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1287 call 0x11eb6ec0 */
  push32(0x11ec128cu); f_11eb6ec0();
  /* 11ec128c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec128f push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1291 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1294 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ec1297 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1298 call 0x11eb6ec0 */
  push32(0x11ec129du); f_11eb6ec0();
  /* 11ec129d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec12a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec12a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec12a5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ec12a8 push edx */
  push32((uint32_t)(EDX));
  /* 11ec12a9 call 0x11eb6ec0 */
  push32(0x11ec12aeu); f_11eb6ec0();
  /* 11ec12ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec12b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec12b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec12b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ec12b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec12ba call 0x11eb6ec0 */
  push32(0x11ec12bfu); f_11eb6ec0();
  /* 11ec12bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec12c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec12c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec12c7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ec12ca push eax */
  push32((uint32_t)(EAX));
  /* 11ec12cb call 0x11eb6ec0 */
  push32(0x11ec12d0u); f_11eb6ec0();
  /* 11ec12d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec12d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec12d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec12d8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ec12db push edx */
  push32((uint32_t)(EDX));
  /* 11ec12dc call 0x11eb6ec0 */
  push32(0x11ec12e1u); f_11eb6ec0();
  /* 11ec12e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec12e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec12e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec12e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec12eb push ecx */
  push32((uint32_t)(ECX));
  /* 11ec12ec call 0x11eb6ec0 */
  push32(0x11ec12f1u); f_11eb6ec0();
  /* 11ec12f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec12f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec12f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec12f9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11ec12fc push eax */
  push32((uint32_t)(EAX));
  /* 11ec12fd call 0x11eb6ec0 */
  push32(0x11ec1302u); f_11eb6ec0();
  /* 11ec1302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1305 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec130a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11ec130d push edx */
  push32((uint32_t)(EDX));
  /* 11ec130e call 0x11eb6ec0 */
  push32(0x11ec1313u); f_11eb6ec0();
  /* 11ec1313 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1316 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1318 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec131b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11ec131e push ecx */
  push32((uint32_t)(ECX));
  /* 11ec131f call 0x11eb6ec0 */
  push32(0x11ec1324u); f_11eb6ec0();
  /* 11ec1324 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1327 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1329 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec132c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11ec132f push eax */
  push32((uint32_t)(EAX));
  /* 11ec1330 call 0x11eb6ec0 */
  push32(0x11ec1335u); f_11eb6ec0();
  /* 11ec1335 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1338 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec133a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec133d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11ec1340 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1341 call 0x11eb6ec0 */
  push32(0x11ec1346u); f_11eb6ec0();
  /* 11ec1346 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1349 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec134b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec134e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11ec1351 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1352 call 0x11eb6ec0 */
  push32(0x11ec1357u); f_11eb6ec0();
  /* 11ec1357 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec135a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec135c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec135f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ec1362 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1363 call 0x11eb6ec0 */
  push32(0x11ec1368u); f_11eb6ec0();
  /* 11ec1368 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec136b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec136d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1370 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11ec1373 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1374 call 0x11eb6ec0 */
  push32(0x11ec1379u); f_11eb6ec0();
  /* 11ec1379 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec137c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec137e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1381 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11ec1384 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1385 call 0x11eb6ec0 */
  push32(0x11ec138au); f_11eb6ec0();
  /* 11ec138a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec138d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec138f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1392 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11ec1395 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1396 call 0x11eb6ec0 */
  push32(0x11ec139bu); f_11eb6ec0();
  /* 11ec139b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec139e push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec13a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec13a3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11ec13a6 push edx */
  push32((uint32_t)(EDX));
  /* 11ec13a7 call 0x11eb6ec0 */
  push32(0x11ec13acu); f_11eb6ec0();
  /* 11ec13ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec13af push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec13b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec13b4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11ec13b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec13b8 call 0x11eb6ec0 */
  push32(0x11ec13bdu); f_11eb6ec0();
  /* 11ec13bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec13c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec13c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec13c5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11ec13c8 push eax */
  push32((uint32_t)(EAX));
  /* 11ec13c9 call 0x11eb6ec0 */
  push32(0x11ec13ceu); f_11eb6ec0();
  /* 11ec13ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec13d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec13d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec13d6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11ec13d9 push edx */
  push32((uint32_t)(EDX));
  /* 11ec13da call 0x11eb6ec0 */
  push32(0x11ec13dfu); f_11eb6ec0();
  /* 11ec13df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec13e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec13e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec13e7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11ec13ea push ecx */
  push32((uint32_t)(ECX));
  /* 11ec13eb call 0x11eb6ec0 */
  push32(0x11ec13f0u); f_11eb6ec0();
  /* 11ec13f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec13f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec13f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec13f8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11ec13fb push eax */
  push32((uint32_t)(EAX));
  /* 11ec13fc call 0x11eb6ec0 */
  push32(0x11ec1401u); f_11eb6ec0();
  /* 11ec1401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1404 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1406 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1409 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11ec140c push edx */
  push32((uint32_t)(EDX));
  /* 11ec140d call 0x11eb6ec0 */
  push32(0x11ec1412u); f_11eb6ec0();
  /* 11ec1412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1415 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1417 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec141a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11ec141d push ecx */
  push32((uint32_t)(ECX));
  /* 11ec141e call 0x11eb6ec0 */
  push32(0x11ec1423u); f_11eb6ec0();
  /* 11ec1423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1426 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1428 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec142b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11ec142e push eax */
  push32((uint32_t)(EAX));
  /* 11ec142f call 0x11eb6ec0 */
  push32(0x11ec1434u); f_11eb6ec0();
  /* 11ec1434 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1437 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1439 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec143c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11ec143f push edx */
  push32((uint32_t)(EDX));
  /* 11ec1440 call 0x11eb6ec0 */
  push32(0x11ec1445u); f_11eb6ec0();
  /* 11ec1445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1448 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec144a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec144d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11ec1450 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1451 call 0x11eb6ec0 */
  push32(0x11ec1456u); f_11eb6ec0();
  /* 11ec1456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1459 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec145b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec145e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11ec1461 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1462 call 0x11eb6ec0 */
  push32(0x11ec1467u); f_11eb6ec0();
  /* 11ec1467 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec146a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec146c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec146f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11ec1472 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1473 call 0x11eb6ec0 */
  push32(0x11ec1478u); f_11eb6ec0();
  /* 11ec1478 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec147b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec147d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1480 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11ec1483 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1484 call 0x11eb6ec0 */
  push32(0x11ec1489u); f_11eb6ec0();
  /* 11ec1489 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec148c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec148e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1491 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11ec1494 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1495 call 0x11eb6ec0 */
  push32(0x11ec149au); f_11eb6ec0();
  /* 11ec149a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec149d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec149f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec14a2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11ec14a8 push edx */
  push32((uint32_t)(EDX));
  /* 11ec14a9 call 0x11eb6ec0 */
  push32(0x11ec14aeu); f_11eb6ec0();
  /* 11ec14ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec14b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec14b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec14b6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11ec14bc push ecx */
  push32((uint32_t)(ECX));
  /* 11ec14bd call 0x11eb6ec0 */
  push32(0x11ec14c2u); f_11eb6ec0();
  /* 11ec14c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec14c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec14c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec14ca mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11ec14d0 push eax */
  push32((uint32_t)(EAX));
  /* 11ec14d1 call 0x11eb6ec0 */
  push32(0x11ec14d6u); f_11eb6ec0();
  /* 11ec14d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec14d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec14db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec14de mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11ec14e4 push edx */
  push32((uint32_t)(EDX));
  /* 11ec14e5 call 0x11eb6ec0 */
  push32(0x11ec14eau); f_11eb6ec0();
  /* 11ec14ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec14ed push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec14ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec14f2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11ec14f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec14f9 call 0x11eb6ec0 */
  push32(0x11ec14feu); f_11eb6ec0();
  /* 11ec14fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1501 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1503 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1506 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11ec150c push eax */
  push32((uint32_t)(EAX));
  /* 11ec150d call 0x11eb6ec0 */
  push32(0x11ec1512u); f_11eb6ec0();
  /* 11ec1512 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1515 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1517 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec151a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11ec1520 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1521 call 0x11eb6ec0 */
  push32(0x11ec1526u); f_11eb6ec0();
  /* 11ec1526 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1529 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec152b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec152e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11ec1534 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1535 call 0x11eb6ec0 */
  push32(0x11ec153au); f_11eb6ec0();
  /* 11ec153a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec153d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec153f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1542 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11ec1548 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1549 call 0x11eb6ec0 */
  push32(0x11ec154eu); f_11eb6ec0();
  /* 11ec154e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1551 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1553 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1556 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11ec155c push edx */
  push32((uint32_t)(EDX));
  /* 11ec155d call 0x11eb6ec0 */
  push32(0x11ec1562u); f_11eb6ec0();
  /* 11ec1562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1565 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1567 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec156a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11ec1570 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1571 call 0x11eb6ec0 */
  push32(0x11ec1576u); f_11eb6ec0();
  /* 11ec1576 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec1579:;
  /* 11ec1579 pop ebp */
  EBP = (pop32());
  /* 11ec157a ret  */
  ESPCHK(0x11ec1270u, _esp0);
  ESP += 4; return;
}

/* FUN_10011580 @ 0x11ec1580 (678 bytes, 180 insns) */
void f_11ec1580(void) {
  FTRACE(0x11ec1580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec1580 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec1581 mov ebp, esp */
  EBP = (ESP);
  /* 11ec1583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec1586 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ec158d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec158f mov ax, word ptr [0x11ee29ea] */
  AX = (r16((uint32_t)(0x11ee29ea)));
  /* 11ec1595 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec1598 cmp dword ptr [0x11ee2990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec159f je 0x11ec16fa */
  if (C.zf) goto L_11ec16fa;
  /* 11ec15a5 push 0x11ee29b8 */
  push32((uint32_t)(0x11ee29b8u));
  /* 11ec15aa push 0xe */
  push32((uint32_t)(0xeu));
  /* 11ec15ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec15af push ecx */
  push32((uint32_t)(ECX));
  /* 11ec15b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec15b2 call 0x11ec45f0 */
  push32(0x11ec15b7u); f_11ec45f0();
  /* 11ec15b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec15ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec15bd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec15bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ec15c2 push 0x11ee29bc */
  push32((uint32_t)(0x11ee29bcu));
  /* 11ec15c7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11ec15c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec15cc push eax */
  push32((uint32_t)(EAX));
  /* 11ec15cd push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec15cf call 0x11ec45f0 */
  push32(0x11ec15d4u); f_11ec45f0();
  /* 11ec15d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec15d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec15da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec15dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec15df push 0x11ee29c0 */
  push32((uint32_t)(0x11ee29c0u));
  /* 11ec15e4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11ec15e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec15e9 push edx */
  push32((uint32_t)(EDX));
  /* 11ec15ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec15ec call 0x11ec45f0 */
  push32(0x11ec15f1u); f_11ec45f0();
  /* 11ec15f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec15f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec15f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec15f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec15fc mov edx, dword ptr [0x11ee29c0] */
  EDX = (r32((uint32_t)(0x11ee29c0)));
  /* 11ec1602 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1603 call 0x11ec1830 */
  push32(0x11ec1608u); f_11ec1830();
  /* 11ec1608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec160b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec160f je 0x11ec1669 */
  if (C.zf) goto L_11ec1669;
  /* 11ec1611 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1613 mov eax, dword ptr [0x11ee29b8] */
  EAX = (r32((uint32_t)(0x11ee29b8)));
  /* 11ec1618 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1619 call 0x11eb6ec0 */
  push32(0x11ec161eu); f_11eb6ec0();
  /* 11ec161e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1621 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1623 mov ecx, dword ptr [0x11ee29bc] */
  ECX = (r32((uint32_t)(0x11ee29bc)));
  /* 11ec1629 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec162a call 0x11eb6ec0 */
  push32(0x11ec162fu); f_11eb6ec0();
  /* 11ec162f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1632 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1634 mov edx, dword ptr [0x11ee29c0] */
  EDX = (r32((uint32_t)(0x11ee29c0)));
  /* 11ec163a push edx */
  push32((uint32_t)(EDX));
  /* 11ec163b call 0x11eb6ec0 */
  push32(0x11ec1640u); f_11eb6ec0();
  /* 11ec1640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1643 mov dword ptr [0x11ee29b8], 0 */
  w32((uint32_t)(0x11ee29b8), (0x0u));
  /* 11ec164d mov dword ptr [0x11ee29bc], 0 */
  w32((uint32_t)(0x11ee29bc), (0x0u));
  /* 11ec1657 mov dword ptr [0x11ee29c0], 0 */
  w32((uint32_t)(0x11ee29c0), (0x0u));
  /* 11ec1661 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec1664 jmp 0x11ec1822 */
  goto L_11ec1822;
L_11ec1669:;
  /* 11ec1669 mov eax, dword ptr [0x11ee1d88] */
  EAX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec166e cmp dword ptr [eax], 0x11ee1d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11ee1d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1674 je 0x11ec16b0 */
  if (C.zf) goto L_11ec16b0;
  /* 11ec1676 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1678 mov ecx, dword ptr [0x11ee1d88] */
  ECX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec167e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec1680 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1681 call 0x11eb6ec0 */
  push32(0x11ec1686u); f_11eb6ec0();
  /* 11ec1686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1689 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec168b mov eax, dword ptr [0x11ee1d88] */
  EAX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec1690 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ec1693 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1694 call 0x11eb6ec0 */
  push32(0x11ec1699u); f_11eb6ec0();
  /* 11ec1699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec169c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec169e mov edx, dword ptr [0x11ee1d88] */
  EDX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec16a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ec16a7 push eax */
  push32((uint32_t)(EAX));
  /* 11ec16a8 call 0x11eb6ec0 */
  push32(0x11ec16adu); f_11eb6ec0();
  /* 11ec16ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec16b0:;
  /* 11ec16b0 mov ecx, dword ptr [0x11ee1d88] */
  ECX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec16b6 mov edx, dword ptr [0x11ee29b8] */
  EDX = (r32((uint32_t)(0x11ee29b8)));
  /* 11ec16bc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ec16be mov eax, dword ptr [0x11ee1d88] */
  EAX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec16c3 mov ecx, dword ptr [0x11ee29bc] */
  ECX = (r32((uint32_t)(0x11ee29bc)));
  /* 11ec16c9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ec16cc mov edx, dword ptr [0x11ee1d88] */
  EDX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec16d2 mov eax, dword ptr [0x11ee29c0] */
  EAX = (r32((uint32_t)(0x11ee29c0)));
  /* 11ec16d7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ec16da mov ecx, dword ptr [0x11ee1d88] */
  ECX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec16e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec16e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec16e4 mov byte ptr [0x11ee0ea8], al */
  w8((uint32_t)(0x11ee0ea8), (AL));
  /* 11ec16e9 mov dword ptr [0x11ee0eac], 1 */
  w32((uint32_t)(0x11ee0eac), (0x1u));
  /* 11ec16f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec16f5 jmp 0x11ec1822 */
  goto L_11ec1822;
L_11ec16fa:;
  /* 11ec16fa push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec16fc mov ecx, dword ptr [0x11ee29b8] */
  ECX = (r32((uint32_t)(0x11ee29b8)));
  /* 11ec1702 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1703 call 0x11eb6ec0 */
  push32(0x11ec1708u); f_11eb6ec0();
  /* 11ec1708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec170b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec170d mov edx, dword ptr [0x11ee29bc] */
  EDX = (r32((uint32_t)(0x11ee29bc)));
  /* 11ec1713 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1714 call 0x11eb6ec0 */
  push32(0x11ec1719u); f_11eb6ec0();
  /* 11ec1719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec171c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec171e mov eax, dword ptr [0x11ee29c0] */
  EAX = (r32((uint32_t)(0x11ee29c0)));
  /* 11ec1723 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1724 call 0x11eb6ec0 */
  push32(0x11ec1729u); f_11eb6ec0();
  /* 11ec1729 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec172c mov dword ptr [0x11ee29b8], 0 */
  w32((uint32_t)(0x11ee29b8), (0x0u));
  /* 11ec1736 mov dword ptr [0x11ee29bc], 0 */
  w32((uint32_t)(0x11ee29bc), (0x0u));
  /* 11ec1740 mov dword ptr [0x11ee29c0], 0 */
  w32((uint32_t)(0x11ee29c0), (0x0u));
  /* 11ec174a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11ec174f push 0x11ede3ec */
  push32((uint32_t)(0x11ede3ecu));
  /* 11ec1754 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1756 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1758 call 0x11eb6430 */
  push32(0x11ec175du); f_11eb6430();
  /* 11ec175d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1760 mov ecx, dword ptr [0x11ee1d88] */
  ECX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec1766 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ec1768 mov edx, dword ptr [0x11ee1d88] */
  EDX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec176e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1771 jne 0x11ec177b */
  if (!C.zf) goto L_11ec177b;
  /* 11ec1773 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec1776 jmp 0x11ec1822 */
  goto L_11ec1822;
L_11ec177b:;
  /* 11ec177b push 0x11ede3bc */
  push32((uint32_t)(0x11ede3bcu));
  /* 11ec1780 mov eax, dword ptr [0x11ee1d88] */
  EAX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec1785 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ec1787 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1788 call 0x11eb93e0 */
  push32(0x11ec178du); f_11eb93e0();
  /* 11ec178d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1790 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11ec1795 push 0x11ede3ec */
  push32((uint32_t)(0x11ede3ecu));
  /* 11ec179a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec179c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec179e call 0x11eb6430 */
  push32(0x11ec17a3u); f_11eb6430();
  /* 11ec17a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec17a6 mov edx, dword ptr [0x11ee1d88] */
  EDX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec17ac mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11ec17af mov eax, dword ptr [0x11ee1d88] */
  EAX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec17b4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec17b8 jne 0x11ec17bf */
  if (!C.zf) goto L_11ec17bf;
  /* 11ec17ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec17bd jmp 0x11ec1822 */
  goto L_11ec1822;
L_11ec17bf:;
  /* 11ec17bf mov ecx, dword ptr [0x11ee1d88] */
  ECX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec17c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ec17c8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11ec17cb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11ec17d0 push 0x11ede3ec */
  push32((uint32_t)(0x11ede3ecu));
  /* 11ec17d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec17d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec17d9 call 0x11eb6430 */
  push32(0x11ec17deu); f_11eb6430();
  /* 11ec17de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec17e1 mov ecx, dword ptr [0x11ee1d88] */
  ECX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec17e7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11ec17ea mov edx, dword ptr [0x11ee1d88] */
  EDX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec17f0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec17f4 jne 0x11ec17fb */
  if (!C.zf) goto L_11ec17fb;
  /* 11ec17f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec17f9 jmp 0x11ec1822 */
  goto L_11ec1822;
L_11ec17fb:;
  /* 11ec17fb mov eax, dword ptr [0x11ee1d88] */
  EAX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec1800 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ec1803 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11ec1806 mov edx, dword ptr [0x11ee1d88] */
  EDX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec180c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec180e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ec1810 mov byte ptr [0x11ee0ea8], cl */
  w8((uint32_t)(0x11ee0ea8), (CL));
  /* 11ec1816 mov dword ptr [0x11ee0eac], 1 */
  w32((uint32_t)(0x11ee0eac), (0x1u));
  /* 11ec1820 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec1822:;
  /* 11ec1822 mov esp, ebp */
  ESP = (EBP);
  /* 11ec1824 pop ebp */
  EBP = (pop32());
  /* 11ec1825 ret  */
  ESPCHK(0x11ec1580u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11ec1830 (125 bytes, 49 insns) */
void f_11ec1830(void) {
  FTRACE(0x11ec1830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec1830 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec1831 mov ebp, esp */
  EBP = (ESP);
  /* 11ec1833 push ecx */
  push32((uint32_t)(ECX));
L_11ec1834:;
  /* 11ec1834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1837 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec183a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec183c je 0x11ec18a9 */
  if (C.zf) goto L_11ec18a9;
  /* 11ec183e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1841 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ec1844 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1847 jl 0x11ec186d */
  if ((C.sf!=C.of)) goto L_11ec186d;
  /* 11ec1849 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec184c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ec184f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1852 jg 0x11ec186d */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec186d;
  /* 11ec1854 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1857 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec185a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec185d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1860 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11ec1862 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1865 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1868 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec186b jmp 0x11ec18a7 */
  goto L_11ec18a7;
L_11ec186d:;
  /* 11ec186d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1870 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ec1873 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1876 jne 0x11ec189e */
  if (!C.zf) goto L_11ec189e;
  /* 11ec1878 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec187b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ec187e:;
  /* 11ec187e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1881 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1884 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ec1887 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ec1889 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec188c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec188f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ec1892 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1895 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ec1898 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec189a jne 0x11ec187e */
  if (!C.zf) goto L_11ec187e;
  /* 11ec189c jmp 0x11ec18a7 */
  goto L_11ec18a7;
L_11ec189e:;
  /* 11ec189e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec18a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec18a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11ec18a7:;
  /* 11ec18a7 jmp 0x11ec1834 */
  goto L_11ec1834;
L_11ec18a9:;
  /* 11ec18a9 mov esp, ebp */
  ESP = (EBP);
  /* 11ec18ab pop ebp */
  EBP = (pop32());
  /* 11ec18ac ret  */
  ESPCHK(0x11ec1830u, _esp0);
  ESP += 4; return;
}

/* FUN_100118b0 @ 0x11ec18b0 (304 bytes, 85 insns) */
void f_11ec18b0(void) {
  FTRACE(0x11ec18b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec18b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec18b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec18b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec18b4 cmp dword ptr [0x11ee298c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee298c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec18bb je 0x11ec197c */
  if (C.zf) goto L_11ec197c;
  /* 11ec18c1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11ec18c3 push 0x11ede3f8 */
  push32((uint32_t)(0x11ede3f8u));
  /* 11ec18c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec18ca push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11ec18cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec18ce call 0x11eb6840 */
  push32(0x11ec18d3u); f_11eb6840();
  /* 11ec18d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec18d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec18d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec18dd jne 0x11ec18e9 */
  if (!C.zf) goto L_11ec18e9;
  /* 11ec18df mov eax, 1 */
  EAX = (0x1u);
  /* 11ec18e4 jmp 0x11ec19dc */
  goto L_11ec19dc;
L_11ec18e9:;
  /* 11ec18e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec18ec push eax */
  push32((uint32_t)(EAX));
  /* 11ec18ed call 0x11ec19e0 */
  push32(0x11ec18f2u); f_11ec19e0();
  /* 11ec18f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec18f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec18f7 je 0x11ec191d */
  if (C.zf) goto L_11ec191d;
  /* 11ec18f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec18fc push ecx */
  push32((uint32_t)(ECX));
  /* 11ec18fd call 0x11ec1c70 */
  push32(0x11ec1902u); f_11ec1c70();
  /* 11ec1902 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1905 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1907 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec190a push edx */
  push32((uint32_t)(EDX));
  /* 11ec190b call 0x11eb6ec0 */
  push32(0x11ec1910u); f_11eb6ec0();
  /* 11ec1910 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1913 mov eax, 1 */
  EAX = (0x1u);
  /* 11ec1918 jmp 0x11ec19dc */
  goto L_11ec19dc;
L_11ec191d:;
  /* 11ec191d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1920 mov ecx, dword ptr [0x11ee1d88] */
  ECX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec1926 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec1928 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ec192a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec192d mov ecx, dword ptr [0x11ee1d88] */
  ECX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec1933 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ec1936 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ec1939 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec193c mov ecx, dword ptr [0x11ee1d88] */
  ECX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec1942 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ec1945 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ec1948 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec194b mov dword ptr [0x11ee1d88], eax */
  w32((uint32_t)(0x11ee1d88), (EAX));
  /* 11ec1950 mov ecx, dword ptr [0x11ee29c4] */
  ECX = (r32((uint32_t)(0x11ee29c4)));
  /* 11ec1956 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1957 call 0x11ec1c70 */
  push32(0x11ec195cu); f_11ec1c70();
  /* 11ec195c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec195f push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1961 mov edx, dword ptr [0x11ee29c4] */
  EDX = (r32((uint32_t)(0x11ee29c4)));
  /* 11ec1967 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1968 call 0x11eb6ec0 */
  push32(0x11ec196du); f_11eb6ec0();
  /* 11ec196d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1973 mov dword ptr [0x11ee29c4], eax */
  w32((uint32_t)(0x11ee29c4), (EAX));
  /* 11ec1978 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec197a jmp 0x11ec19dc */
  goto L_11ec19dc;
L_11ec197c:;
  /* 11ec197c mov ecx, dword ptr [0x11ee1d88] */
  ECX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec1982 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec1984 mov dword ptr [0x11ee1d58], edx */
  w32((uint32_t)(0x11ee1d58), (EDX));
  /* 11ec198a mov eax, dword ptr [0x11ee1d88] */
  EAX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec198f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ec1992 mov dword ptr [0x11ee1d5c], ecx */
  w32((uint32_t)(0x11ee1d5c), (ECX));
  /* 11ec1998 mov edx, dword ptr [0x11ee1d88] */
  EDX = (r32((uint32_t)(0x11ee1d88)));
  /* 11ec199e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ec19a1 mov dword ptr [0x11ee1d60], eax */
  w32((uint32_t)(0x11ee1d60), (EAX));
  /* 11ec19a6 mov dword ptr [0x11ee1d88], 0x11ee1d58 */
  w32((uint32_t)(0x11ee1d88), (0x11ee1d58u));
  /* 11ec19b0 mov ecx, dword ptr [0x11ee29c4] */
  ECX = (r32((uint32_t)(0x11ee29c4)));
  /* 11ec19b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec19b7 call 0x11ec1c70 */
  push32(0x11ec19bcu); f_11ec1c70();
  /* 11ec19bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec19bf push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec19c1 mov edx, dword ptr [0x11ee29c4] */
  EDX = (r32((uint32_t)(0x11ee29c4)));
  /* 11ec19c7 push edx */
  push32((uint32_t)(EDX));
  /* 11ec19c8 call 0x11eb6ec0 */
  push32(0x11ec19cdu); f_11eb6ec0();
  /* 11ec19cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec19d0 mov dword ptr [0x11ee29c4], 0 */
  w32((uint32_t)(0x11ee29c4), (0x0u));
  /* 11ec19da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec19dc:;
  /* 11ec19dc mov esp, ebp */
  ESP = (EBP);
  /* 11ec19de pop ebp */
  EBP = (pop32());
  /* 11ec19df ret  */
  ESPCHK(0x11ec18b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119e0 @ 0x11ec19e0 (525 bytes, 200 insns) */
void f_11ec19e0(void) {
  FTRACE(0x11ec19e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec19e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec19e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec19e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec19e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ec19ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec19ef mov ax, word ptr [0x11ee29e4] */
  AX = (r16((uint32_t)(0x11ee29e4)));
  /* 11ec19f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec19f8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec19fc jne 0x11ec1a06 */
  if (!C.zf) goto L_11ec1a06;
  /* 11ec19fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec1a01 jmp 0x11ec1be9 */
  goto L_11ec1be9;
L_11ec1a06:;
  /* 11ec1a06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1a09 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1a0c push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1a0d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11ec1a0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1a12 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1a13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1a15 call 0x11ec45f0 */
  push32(0x11ec1a1au); f_11ec45f0();
  /* 11ec1a1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1a1d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1a20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1a22 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1a25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1a28 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1a2b push edx */
  push32((uint32_t)(EDX));
  /* 11ec1a2c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11ec1a2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1a31 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1a32 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1a34 call 0x11ec45f0 */
  push32(0x11ec1a39u); f_11ec45f0();
  /* 11ec1a39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1a3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1a3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1a41 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1a44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1a47 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1a4a push edx */
  push32((uint32_t)(EDX));
  /* 11ec1a4b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11ec1a4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1a50 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1a51 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1a53 call 0x11ec45f0 */
  push32(0x11ec1a58u); f_11ec45f0();
  /* 11ec1a58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1a5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1a5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1a60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1a63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1a66 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1a69 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1a6a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11ec1a6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1a6f push eax */
  push32((uint32_t)(EAX));
  /* 11ec1a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1a72 call 0x11ec45f0 */
  push32(0x11ec1a77u); f_11ec45f0();
  /* 11ec1a77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1a7a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1a7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1a7f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1a82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1a85 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1a88 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1a89 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11ec1a8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1a8e push eax */
  push32((uint32_t)(EAX));
  /* 11ec1a8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1a91 call 0x11ec45f0 */
  push32(0x11ec1a96u); f_11ec45f0();
  /* 11ec1a96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1a99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1a9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1a9e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1aa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1aa4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ec1aa7 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1aa8 call 0x11ec1bf0 */
  push32(0x11ec1aadu); f_11ec1bf0();
  /* 11ec1aad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1ab0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1ab3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1ab7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11ec1ab9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1abc push edx */
  push32((uint32_t)(EDX));
  /* 11ec1abd push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1abf call 0x11ec45f0 */
  push32(0x11ec1ac4u); f_11ec45f0();
  /* 11ec1ac4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1ac7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1aca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1acc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1acf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1ad2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1ad5 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1ad6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11ec1ad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1adb push eax */
  push32((uint32_t)(EAX));
  /* 11ec1adc push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1ade call 0x11ec45f0 */
  push32(0x11ec1ae3u); f_11ec45f0();
  /* 11ec1ae3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1ae6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1ae9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1aeb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1aee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1af1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1af4 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1af5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11ec1af7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1afa push eax */
  push32((uint32_t)(EAX));
  /* 11ec1afb push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec1afd call 0x11ec45f0 */
  push32(0x11ec1b02u); f_11ec45f0();
  /* 11ec1b02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1b05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1b08 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1b0a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1b0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1b10 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1b13 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1b14 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ec1b16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1b19 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1b1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec1b1c call 0x11ec45f0 */
  push32(0x11ec1b21u); f_11ec45f0();
  /* 11ec1b21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1b24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1b27 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1b29 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1b2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1b2f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1b32 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1b33 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11ec1b35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1b38 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec1b3b call 0x11ec45f0 */
  push32(0x11ec1b40u); f_11ec45f0();
  /* 11ec1b40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1b43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1b46 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1b48 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1b4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1b4e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1b51 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1b52 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11ec1b54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1b57 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1b58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec1b5a call 0x11ec45f0 */
  push32(0x11ec1b5fu); f_11ec45f0();
  /* 11ec1b5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1b62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1b65 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1b67 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1b6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1b6d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1b70 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1b71 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11ec1b73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1b76 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec1b79 call 0x11ec45f0 */
  push32(0x11ec1b7eu); f_11ec45f0();
  /* 11ec1b7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1b81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1b84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1b86 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1b89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1b8c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1b8f push edx */
  push32((uint32_t)(EDX));
  /* 11ec1b90 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11ec1b92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1b95 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec1b98 call 0x11ec45f0 */
  push32(0x11ec1b9du); f_11ec45f0();
  /* 11ec1b9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1ba0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1ba3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1ba5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1ba8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1bab add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1bae push edx */
  push32((uint32_t)(EDX));
  /* 11ec1baf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11ec1bb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1bb4 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec1bb7 call 0x11ec45f0 */
  push32(0x11ec1bbcu); f_11ec45f0();
  /* 11ec1bbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1bbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1bc2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1bc4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1bc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1bca add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1bcd push edx */
  push32((uint32_t)(EDX));
  /* 11ec1bce push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11ec1bd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1bd3 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec1bd6 call 0x11ec45f0 */
  push32(0x11ec1bdbu); f_11ec45f0();
  /* 11ec1bdb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1bde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec1be1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1be3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec1be6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ec1be9:;
  /* 11ec1be9 mov esp, ebp */
  ESP = (EBP);
  /* 11ec1beb pop ebp */
  EBP = (pop32());
  /* 11ec1bec ret  */
  ESPCHK(0x11ec19e0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11ec1bf0 (125 bytes, 49 insns) */
void f_11ec1bf0(void) {
  FTRACE(0x11ec1bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec1bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec1bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec1bf3 push ecx */
  push32((uint32_t)(ECX));
L_11ec1bf4:;
  /* 11ec1bf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1bf7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec1bfa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec1bfc je 0x11ec1c69 */
  if (C.zf) goto L_11ec1c69;
  /* 11ec1bfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1c01 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ec1c04 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1c07 jl 0x11ec1c2d */
  if ((C.sf!=C.of)) goto L_11ec1c2d;
  /* 11ec1c09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1c0c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ec1c0f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1c12 jg 0x11ec1c2d */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec1c2d;
  /* 11ec1c14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1c17 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec1c1a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec1c1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1c20 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11ec1c22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1c25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1c28 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec1c2b jmp 0x11ec1c67 */
  goto L_11ec1c67;
L_11ec1c2d:;
  /* 11ec1c2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1c30 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ec1c33 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1c36 jne 0x11ec1c5e */
  if (!C.zf) goto L_11ec1c5e;
  /* 11ec1c38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1c3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ec1c3e:;
  /* 11ec1c3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1c41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1c44 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ec1c47 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ec1c49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1c4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1c4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ec1c52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec1c55 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ec1c58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec1c5a jne 0x11ec1c3e */
  if (!C.zf) goto L_11ec1c3e;
  /* 11ec1c5c jmp 0x11ec1c67 */
  goto L_11ec1c67;
L_11ec1c5e:;
  /* 11ec1c5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1c61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1c64 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11ec1c67:;
  /* 11ec1c67 jmp 0x11ec1bf4 */
  goto L_11ec1bf4;
L_11ec1c69:;
  /* 11ec1c69 mov esp, ebp */
  ESP = (EBP);
  /* 11ec1c6b pop ebp */
  EBP = (pop32());
  /* 11ec1c6c ret  */
  ESPCHK(0x11ec1bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c70 @ 0x11ec1c70 (147 bytes, 52 insns) */
void f_11ec1c70(void) {
  FTRACE(0x11ec1c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec1c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec1c71 mov ebp, esp */
  EBP = (ESP);
  /* 11ec1c73 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1c77 jne 0x11ec1c7e */
  if (!C.zf) goto L_11ec1c7e;
  /* 11ec1c79 jmp 0x11ec1d01 */
  goto L_11ec1d01;
L_11ec1c7e:;
  /* 11ec1c7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1c81 cmp dword ptr [eax + 0xc], 0x11ee2a20 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11ee2a20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1c88 je 0x11ec1d01 */
  if (C.zf) goto L_11ec1d01;
  /* 11ec1c8a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1c8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1c8f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ec1c92 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1c93 call 0x11eb6ec0 */
  push32(0x11ec1c98u); f_11eb6ec0();
  /* 11ec1c98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1c9b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1c9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1ca0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ec1ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1ca4 call 0x11eb6ec0 */
  push32(0x11ec1ca9u); f_11eb6ec0();
  /* 11ec1ca9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1cac push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1cae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1cb1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ec1cb4 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1cb5 call 0x11eb6ec0 */
  push32(0x11ec1cbau); f_11eb6ec0();
  /* 11ec1cba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1cbd push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1cbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1cc2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ec1cc5 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1cc6 call 0x11eb6ec0 */
  push32(0x11ec1ccbu); f_11eb6ec0();
  /* 11ec1ccb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1cce push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1cd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1cd3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ec1cd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1cd7 call 0x11eb6ec0 */
  push32(0x11ec1cdcu); f_11eb6ec0();
  /* 11ec1cdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1cdf push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1ce1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1ce4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11ec1ce7 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1ce8 call 0x11eb6ec0 */
  push32(0x11ec1cedu); f_11eb6ec0();
  /* 11ec1ced add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1cf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1cf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec1cf5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11ec1cf8 push edx */
  push32((uint32_t)(EDX));
  /* 11ec1cf9 call 0x11eb6ec0 */
  push32(0x11ec1cfeu); f_11eb6ec0();
  /* 11ec1cfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec1d01:;
  /* 11ec1d01 pop ebp */
  EBP = (pop32());
  /* 11ec1d02 ret  */
  ESPCHK(0x11ec1c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d10 @ 0x11ec1d10 (928 bytes, 284 insns) */
void f_11ec1d10(void) {
  FTRACE(0x11ec1d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec1d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec1d11 mov ebp, esp */
  EBP = (ESP);
  /* 11ec1d13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec1d16 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11ec1d1d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11ec1d24 cmp dword ptr [0x11ee2988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1d2b je 0x11ec2061 */
  if (C.zf) goto L_11ec2061;
  /* 11ec1d31 cmp dword ptr [0x11ee2998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1d38 jne 0x11ec1d60 */
  if (!C.zf) goto L_11ec1d60;
  /* 11ec1d3a push 0x11ee2998 */
  push32((uint32_t)(0x11ee2998u));
  /* 11ec1d3f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11ec1d44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec1d46 mov ax, word ptr [0x11ee29dc] */
  AX = (r16((uint32_t)(0x11ee29dc)));
  /* 11ec1d4c push eax */
  push32((uint32_t)(EAX));
  /* 11ec1d4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec1d4f call 0x11ec45f0 */
  push32(0x11ec1d54u); f_11ec45f0();
  /* 11ec1d54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1d57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec1d59 je 0x11ec1d60 */
  if (C.zf) goto L_11ec1d60;
  /* 11ec1d5b jmp 0x11ec2022 */
  goto L_11ec2022;
L_11ec1d60:;
  /* 11ec1d60 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11ec1d62 push 0x11ede404 */
  push32((uint32_t)(0x11ede404u));
  /* 11ec1d67 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1d69 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11ec1d6e call 0x11eb6430 */
  push32(0x11ec1d73u); f_11eb6430();
  /* 11ec1d73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1d76 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11ec1d79 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11ec1d7b push 0x11ede404 */
  push32((uint32_t)(0x11ede404u));
  /* 11ec1d80 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1d82 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11ec1d87 call 0x11eb6430 */
  push32(0x11ec1d8cu); f_11eb6430();
  /* 11ec1d8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1d8f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ec1d92 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11ec1d94 push 0x11ede404 */
  push32((uint32_t)(0x11ede404u));
  /* 11ec1d99 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1d9b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11ec1da0 call 0x11eb6430 */
  push32(0x11ec1da5u); f_11eb6430();
  /* 11ec1da5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1da8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11ec1dab push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11ec1dad push 0x11ede404 */
  push32((uint32_t)(0x11ede404u));
  /* 11ec1db2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1db4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11ec1db9 call 0x11eb6430 */
  push32(0x11ec1dbeu); f_11eb6430();
  /* 11ec1dbe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1dc1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ec1dc4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1dc8 je 0x11ec1ddc */
  if (C.zf) goto L_11ec1ddc;
  /* 11ec1dca cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1dce je 0x11ec1ddc */
  if (C.zf) goto L_11ec1ddc;
  /* 11ec1dd0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1dd4 je 0x11ec1ddc */
  if (C.zf) goto L_11ec1ddc;
  /* 11ec1dd6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1dda jne 0x11ec1de1 */
  if (!C.zf) goto L_11ec1de1;
L_11ec1ddc:;
  /* 11ec1ddc jmp 0x11ec2022 */
  goto L_11ec2022;
L_11ec1de1:;
  /* 11ec1de1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ec1de4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ec1de7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ec1dee jmp 0x11ec1df9 */
  goto L_11ec1df9;
L_11ec1df0:;
  /* 11ec1df0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec1df3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1df6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11ec1df9:;
  /* 11ec1df9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1e00 jge 0x11ec1e15 */
  if ((C.sf==C.of)) goto L_11ec1e15;
  /* 11ec1e02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec1e05 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11ec1e08 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11ec1e0a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec1e0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1e10 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ec1e13 jmp 0x11ec1df0 */
  goto L_11ec1df0;
L_11ec1e15:;
  /* 11ec1e15 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11ec1e18 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1e19 mov ecx, dword ptr [0x11ee2998] */
  ECX = (r32((uint32_t)(0x11ee2998)));
  /* 11ec1e1f push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1e20 call dword ptr [0x11ee5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5330))), 0x11ec1e26u);
  /* 11ec1e26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec1e28 jne 0x11ec1e2f */
  if (!C.zf) goto L_11ec1e2f;
  /* 11ec1e2a jmp 0x11ec2022 */
  goto L_11ec2022;
L_11ec1e2f:;
  /* 11ec1e2f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1e33 jbe 0x11ec1e3a */
  if ((C.cf||C.zf)) goto L_11ec1e3a;
  /* 11ec1e35 jmp 0x11ec2022 */
  goto L_11ec2022;
L_11ec1e3a:;
  /* 11ec1e3a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec1e3d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ec1e43 mov dword ptr [0x11ee0ea4], edx */
  w32((uint32_t)(0x11ee0ea4), (EDX));
  /* 11ec1e49 cmp dword ptr [0x11ee0ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee0ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1e50 jle 0x11ec1ea9 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec1ea9;
  /* 11ec1e52 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11ec1e55 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ec1e58 jmp 0x11ec1e63 */
  goto L_11ec1e63;
L_11ec1e5a:;
  /* 11ec1e5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec1e5d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1e60 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11ec1e63:;
  /* 11ec1e63 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec1e66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec1e68 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec1e6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec1e6c je 0x11ec1ea9 */
  if (C.zf) goto L_11ec1ea9;
  /* 11ec1e6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec1e71 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec1e73 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11ec1e76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec1e78 je 0x11ec1ea9 */
  if (C.zf) goto L_11ec1ea9;
  /* 11ec1e7a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec1e7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1e7f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ec1e81 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ec1e84 jmp 0x11ec1e8f */
  goto L_11ec1e8f;
L_11ec1e86:;
  /* 11ec1e86 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec1e89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1e8c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11ec1e8f:;
  /* 11ec1e8f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec1e92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1e94 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ec1e97 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1e9a jg 0x11ec1ea7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec1ea7;
  /* 11ec1e9c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ec1e9f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1ea2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11ec1ea5 jmp 0x11ec1e86 */
  goto L_11ec1e86;
L_11ec1ea7:;
  /* 11ec1ea7 jmp 0x11ec1e5a */
  goto L_11ec1e5a;
L_11ec1ea9:;
  /* 11ec1ea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec1eab push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec1ead push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec1eaf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ec1eb2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1eb5 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1eb6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ec1ebb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ec1ebe push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1ebf push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1ec1 call 0x11ebe660 */
  push32(0x11ec1ec6u); f_11ebe660();
  /* 11ec1ec6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1ec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec1ecb jne 0x11ec1ed2 */
  if (!C.zf) goto L_11ec1ed2;
  /* 11ec1ecd jmp 0x11ec2022 */
  goto L_11ec2022;
L_11ec1ed2:;
  /* 11ec1ed2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ec1ed5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11ec1eda mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ec1edd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ec1ee0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ec1ee7 jmp 0x11ec1ef2 */
  goto L_11ec1ef2;
L_11ec1ee9:;
  /* 11ec1ee9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec1eec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1eef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11ec1ef2:;
  /* 11ec1ef2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1ef9 jge 0x11ec1f10 */
  if ((C.sf==C.of)) goto L_11ec1f10;
  /* 11ec1efb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ec1efe mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11ec1f02 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11ec1f05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ec1f08 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1f0b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ec1f0e jmp 0x11ec1ee9 */
  goto L_11ec1ee9;
L_11ec1f10:;
  /* 11ec1f10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec1f12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec1f14 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ec1f17 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1f1a push edx */
  push32((uint32_t)(EDX));
  /* 11ec1f1b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ec1f20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ec1f23 push eax */
  push32((uint32_t)(EAX));
  /* 11ec1f24 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec1f26 call 0x11ec4890 */
  push32(0x11ec1f2bu); f_11ec4890();
  /* 11ec1f2b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1f2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec1f30 jne 0x11ec1f37 */
  if (!C.zf) goto L_11ec1f37;
  /* 11ec1f32 jmp 0x11ec2022 */
  goto L_11ec2022;
L_11ec1f37:;
  /* 11ec1f37 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ec1f3a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11ec1f3f cmp dword ptr [0x11ee0ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee0ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1f46 jle 0x11ec1fa3 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec1fa3;
  /* 11ec1f48 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11ec1f4b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ec1f4e jmp 0x11ec1f59 */
  goto L_11ec1f59;
L_11ec1f50:;
  /* 11ec1f50 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec1f53 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1f56 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11ec1f59:;
  /* 11ec1f59 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec1f5c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ec1f5e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ec1f60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec1f62 je 0x11ec1fa3 */
  if (C.zf) goto L_11ec1fa3;
  /* 11ec1f64 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec1f67 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec1f69 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ec1f6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec1f6e je 0x11ec1fa3 */
  if (C.zf) goto L_11ec1fa3;
  /* 11ec1f70 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec1f73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec1f75 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec1f77 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ec1f7a jmp 0x11ec1f85 */
  goto L_11ec1f85;
L_11ec1f7c:;
  /* 11ec1f7c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec1f7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1f82 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11ec1f85:;
  /* 11ec1f85 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec1f88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec1f8a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ec1f8d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1f90 jg 0x11ec1fa1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec1fa1;
  /* 11ec1f92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ec1f95 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ec1f98 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11ec1f9f jmp 0x11ec1f7c */
  goto L_11ec1f7c;
L_11ec1fa1:;
  /* 11ec1fa1 jmp 0x11ec1f50 */
  goto L_11ec1f50;
L_11ec1fa3:;
  /* 11ec1fa3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ec1fa6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1fa9 mov dword ptr [0x11ee0c98], eax */
  w32((uint32_t)(0x11ee0c98), (EAX));
  /* 11ec1fae mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ec1fb1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec1fb4 mov dword ptr [0x11ee0c9c], ecx */
  w32((uint32_t)(0x11ee0c9c), (ECX));
  /* 11ec1fba cmp dword ptr [0x11ee29c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee29c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1fc1 je 0x11ec1fd4 */
  if (C.zf) goto L_11ec1fd4;
  /* 11ec1fc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1fc5 mov edx, dword ptr [0x11ee29c8] */
  EDX = (r32((uint32_t)(0x11ee29c8)));
  /* 11ec1fcb push edx */
  push32((uint32_t)(EDX));
  /* 11ec1fcc call 0x11eb6ec0 */
  push32(0x11ec1fd1u); f_11eb6ec0();
  /* 11ec1fd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec1fd4:;
  /* 11ec1fd4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ec1fd7 mov dword ptr [0x11ee29c8], eax */
  w32((uint32_t)(0x11ee29c8), (EAX));
  /* 11ec1fdc cmp dword ptr [0x11ee29cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee29cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec1fe3 je 0x11ec1ff6 */
  if (C.zf) goto L_11ec1ff6;
  /* 11ec1fe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec1fe7 mov ecx, dword ptr [0x11ee29cc] */
  ECX = (r32((uint32_t)(0x11ee29cc)));
  /* 11ec1fed push ecx */
  push32((uint32_t)(ECX));
  /* 11ec1fee call 0x11eb6ec0 */
  push32(0x11ec1ff3u); f_11eb6ec0();
  /* 11ec1ff3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec1ff6:;
  /* 11ec1ff6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ec1ff9 mov dword ptr [0x11ee29cc], edx */
  w32((uint32_t)(0x11ee29cc), (EDX));
  /* 11ec1fff push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec2001 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ec2004 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2005 call 0x11eb6ec0 */
  push32(0x11ec200au); f_11eb6ec0();
  /* 11ec200a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec200d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec200f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ec2012 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2013 call 0x11eb6ec0 */
  push32(0x11ec2018u); f_11eb6ec0();
  /* 11ec2018 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec201b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec201d jmp 0x11ec20ac */
  goto L_11ec20ac;
L_11ec2022:;
  /* 11ec2022 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec2024 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ec2027 push edx */
  push32((uint32_t)(EDX));
  /* 11ec2028 call 0x11eb6ec0 */
  push32(0x11ec202du); f_11eb6ec0();
  /* 11ec202d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2030 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec2032 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ec2035 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2036 call 0x11eb6ec0 */
  push32(0x11ec203bu); f_11eb6ec0();
  /* 11ec203b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec203e push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec2040 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ec2043 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2044 call 0x11eb6ec0 */
  push32(0x11ec2049u); f_11eb6ec0();
  /* 11ec2049 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec204c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec204e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ec2051 push edx */
  push32((uint32_t)(EDX));
  /* 11ec2052 call 0x11eb6ec0 */
  push32(0x11ec2057u); f_11eb6ec0();
  /* 11ec2057 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec205a mov eax, 1 */
  EAX = (0x1u);
  /* 11ec205f jmp 0x11ec20ac */
  goto L_11ec20ac;
L_11ec2061:;
  /* 11ec2061 mov dword ptr [0x11ee0c98], 0x11ee0ca2 */
  w32((uint32_t)(0x11ee0c98), (0x11ee0ca2u));
  /* 11ec206b mov dword ptr [0x11ee0c9c], 0x11ee0ca2 */
  w32((uint32_t)(0x11ee0c9c), (0x11ee0ca2u));
  /* 11ec2075 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec2077 mov eax, dword ptr [0x11ee29c8] */
  EAX = (r32((uint32_t)(0x11ee29c8)));
  /* 11ec207c push eax */
  push32((uint32_t)(EAX));
  /* 11ec207d call 0x11eb6ec0 */
  push32(0x11ec2082u); f_11eb6ec0();
  /* 11ec2082 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2085 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec2087 mov ecx, dword ptr [0x11ee29cc] */
  ECX = (r32((uint32_t)(0x11ee29cc)));
  /* 11ec208d push ecx */
  push32((uint32_t)(ECX));
  /* 11ec208e call 0x11eb6ec0 */
  push32(0x11ec2093u); f_11eb6ec0();
  /* 11ec2093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2096 mov dword ptr [0x11ee29c8], 0 */
  w32((uint32_t)(0x11ee29c8), (0x0u));
  /* 11ec20a0 mov dword ptr [0x11ee29cc], 0 */
  w32((uint32_t)(0x11ee29cc), (0x0u));
  /* 11ec20aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec20ac:;
  /* 11ec20ac mov esp, ebp */
  ESP = (EBP);
  /* 11ec20ae pop ebp */
  EBP = (pop32());
  /* 11ec20af ret  */
  ESPCHK(0x11ec1d10u, _esp0);
  ESP += 4; return;
}

/* FUN_100120b0 @ 0x11ec20b0 (7 bytes, 5 insns) */
void f_11ec20b0(void) {
  FTRACE(0x11ec20b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec20b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec20b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec20b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec20b5 pop ebp */
  EBP = (pop32());
  /* 11ec20b6 ret  */
  ESPCHK(0x11ec20b0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11ec20c0 (129 bytes, 56 insns) */
void f_11ec20c0(void) {
  FTRACE(0x11ec20c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec20c0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ec20c4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ec20c8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11ec20ce jne 0x11ec210c */
  if (!C.zf) goto L_11ec210c;
L_11ec20d0:;
  /* 11ec20d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ec20d2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec20d4 jne 0x11ec2104 */
  if (!C.zf) goto L_11ec2104;
  /* 11ec20d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ec20d8 je 0x11ec2100 */
  if (C.zf) goto L_11ec2100;
  /* 11ec20da cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec20dd jne 0x11ec2104 */
  if (!C.zf) goto L_11ec2104;
  /* 11ec20df or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ec20e1 je 0x11ec2100 */
  if (C.zf) goto L_11ec2100;
  /* 11ec20e3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ec20e6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec20e9 jne 0x11ec2104 */
  if (!C.zf) goto L_11ec2104;
  /* 11ec20eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ec20ed je 0x11ec2100 */
  if (C.zf) goto L_11ec2100;
  /* 11ec20ef cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec20f2 jne 0x11ec2104 */
  if (!C.zf) goto L_11ec2104;
  /* 11ec20f4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec20f7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec20fa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ec20fc jne 0x11ec20d0 */
  if (!C.zf) goto L_11ec20d0;
  /* 11ec20fe mov edi, edi */
  EDI = (EDI);
L_11ec2100:;
  /* 11ec2100 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2102 ret  */
  ESPCHK(0x11ec20c0u, _esp0);
  ESP += 4; return;
  /* 11ec2103 nop  */
  /* nop */
L_11ec2104:;
  /* 11ec2104 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2106 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ec2108 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ec2109 ret  */
  ESPCHK(0x11ec20c0u, _esp0);
  ESP += 4; return;
  /* 11ec210a mov edi, edi */
  EDI = (EDI);
L_11ec210c:;
  /* 11ec210c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11ec2112 je 0x11ec2128 */
  if (C.zf) goto L_11ec2128;
  /* 11ec2114 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec2116 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ec2117 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec2119 jne 0x11ec2104 */
  if (!C.zf) goto L_11ec2104;
  /* 11ec211b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ec211c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ec211e je 0x11ec2100 */
  if (C.zf) goto L_11ec2100;
  /* 11ec2120 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11ec2126 je 0x11ec20d0 */
  if (C.zf) goto L_11ec20d0;
L_11ec2128:;
  /* 11ec2128 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ec212b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec212e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec2130 jne 0x11ec2104 */
  if (!C.zf) goto L_11ec2104;
  /* 11ec2132 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ec2134 je 0x11ec2100 */
  if (C.zf) goto L_11ec2100;
  /* 11ec2136 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec2139 jne 0x11ec2104 */
  if (!C.zf) goto L_11ec2104;
  /* 11ec213b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ec213d je 0x11ec2100 */
  if (C.zf) goto L_11ec2100;
  /* 11ec213f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2142 jmp 0x11ec20d0 */
  goto L_11ec20d0;
}

/* FUN_10012150 @ 0x11ec2150 (62 bytes, 35 insns) */
void f_11ec2150(void) {
  FTRACE(0x11ec2150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2150 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2151 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2153 push esi */
  push32((uint32_t)(ESI));
  /* 11ec2154 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2156 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2157 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2158 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2159 push eax */
  push32((uint32_t)(EAX));
  /* 11ec215a push eax */
  push32((uint32_t)(EAX));
  /* 11ec215b push eax */
  push32((uint32_t)(EAX));
  /* 11ec215c push eax */
  push32((uint32_t)(EAX));
  /* 11ec215d push eax */
  push32((uint32_t)(EAX));
  /* 11ec215e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec2161 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ec2164:;
  /* 11ec2164 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec2166 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ec2168 je 0x11ec2171 */
  if (C.zf) goto L_11ec2171;
  /* 11ec216a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ec216b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11ec216b");
  /* 11ec216f jmp 0x11ec2164 */
  goto L_11ec2164;
L_11ec2171:;
  /* 11ec2171 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2174 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ec2177 nop  */
  /* nop */
L_11ec2178:;
  /* 11ec2178 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ec2179 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ec217b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ec217d je 0x11ec2186 */
  if (C.zf) goto L_11ec2186;
  /* 11ec217f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ec2180 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11ec2180");
  /* 11ec2184 jae 0x11ec2178 */
  if (!C.cf) goto L_11ec2178;
L_11ec2186:;
  /* 11ec2186 mov eax, ecx */
  EAX = (ECX);
  /* 11ec2188 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec218b pop esi */
  ESI = (pop32());
  /* 11ec218c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ec218d ret  */
  ESPCHK(0x11ec2150u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11ec2190 (56 bytes, 31 insns) */
void f_11ec2190(void) {
  FTRACE(0x11ec2190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2190 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2191 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2193 push edi */
  push32((uint32_t)(EDI));
  /* 11ec2194 push esi */
  push32((uint32_t)(ESI));
  /* 11ec2195 push ebx */
  push32((uint32_t)(EBX));
  /* 11ec2196 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec2199 jecxz 0x11ec21c1 */
  x86_unimpl("jecxz @ 0x11ec2199");
  /* 11ec219b mov ebx, ecx */
  EBX = (ECX);
  /* 11ec219d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec21a0 mov esi, edi */
  ESI = (EDI);
  /* 11ec21a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec21a4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11ec21a6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec21a8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec21aa mov edi, esi */
  EDI = (ESI);
  /* 11ec21ac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec21af repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11ec21b1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11ec21b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec21b6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ec21b9 ja 0x11ec21bf */
  if ((!C.cf&&!C.zf)) goto L_11ec21bf;
  /* 11ec21bb je 0x11ec21c1 */
  if (C.zf) goto L_11ec21c1;
  /* 11ec21bd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ec21be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11ec21bf:;
  /* 11ec21bf not ecx */
  ECX = (~(ECX));
L_11ec21c1:;
  /* 11ec21c1 mov eax, ecx */
  EAX = (ECX);
  /* 11ec21c3 pop ebx */
  EBX = (pop32());
  /* 11ec21c4 pop esi */
  ESI = (pop32());
  /* 11ec21c5 pop edi */
  EDI = (pop32());
  /* 11ec21c6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ec21c7 ret  */
  ESPCHK(0x11ec2190u, _esp0);
  ESP += 4; return;
}

/* FUN_100121d0 @ 0x11ec21d0 (58 bytes, 32 insns) */
void f_11ec21d0(void) {
  FTRACE(0x11ec21d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec21d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec21d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec21d3 push esi */
  push32((uint32_t)(ESI));
  /* 11ec21d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec21d6 push eax */
  push32((uint32_t)(EAX));
  /* 11ec21d7 push eax */
  push32((uint32_t)(EAX));
  /* 11ec21d8 push eax */
  push32((uint32_t)(EAX));
  /* 11ec21d9 push eax */
  push32((uint32_t)(EAX));
  /* 11ec21da push eax */
  push32((uint32_t)(EAX));
  /* 11ec21db push eax */
  push32((uint32_t)(EAX));
  /* 11ec21dc push eax */
  push32((uint32_t)(EAX));
  /* 11ec21dd push eax */
  push32((uint32_t)(EAX));
  /* 11ec21de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec21e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ec21e4:;
  /* 11ec21e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec21e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ec21e8 je 0x11ec21f1 */
  if (C.zf) goto L_11ec21f1;
  /* 11ec21ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ec21eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11ec21eb");
  /* 11ec21ef jmp 0x11ec21e4 */
  goto L_11ec21e4;
L_11ec21f1:;
  /* 11ec21f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11ec21f4:;
  /* 11ec21f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ec21f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ec21f8 je 0x11ec2204 */
  if (C.zf) goto L_11ec2204;
  /* 11ec21fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ec21fb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11ec21fb");
  /* 11ec21ff jae 0x11ec21f4 */
  if (!C.cf) goto L_11ec21f4;
  /* 11ec2201 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11ec2204:;
  /* 11ec2204 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2207 pop esi */
  ESI = (pop32());
  /* 11ec2208 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ec2209 ret  */
  ESPCHK(0x11ec21d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012210 @ 0x11ec2210 (512 bytes, 147 insns) */
void f_11ec2210(void) {
  FTRACE(0x11ec2210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2210 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2211 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2216 cmp dword ptr [0x11ee2a14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec221d jne 0x11ec2242 */
  if (!C.zf) goto L_11ec2242;
  /* 11ec221f call 0x11ec2ce0 */
  push32(0x11ec2224u); f_11ec2ce0();
  /* 11ec2224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2226 je 0x11ec2232 */
  if (C.zf) goto L_11ec2232;
  /* 11ec2228 mov eax, dword ptr [0x11ee52f4] */
  EAX = (r32((uint32_t)(0x11ee52f4)));
  /* 11ec222d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec2230 jmp 0x11ec2239 */
  goto L_11ec2239;
L_11ec2232:;
  /* 11ec2232 mov dword ptr [ebp - 8], 0x11ec2d30 */
  w32((uint32_t)(EBP + -0x8), (0x11ec2d30u));
L_11ec2239:;
  /* 11ec2239 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec223c mov dword ptr [0x11ee2a14], ecx */
  w32((uint32_t)(0x11ee2a14), (ECX));
L_11ec2242:;
  /* 11ec2242 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2246 jne 0x11ec2252 */
  if (!C.zf) goto L_11ec2252;
  /* 11ec2248 call 0x11ec2b30 */
  push32(0x11ec224du); f_11ec2b30();
  /* 11ec224d jmp 0x11ec231e */
  goto L_11ec231e;
L_11ec2252:;
  /* 11ec2252 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2255 mov dword ptr [0x11ee2a04], edx */
  w32((uint32_t)(0x11ee2a04), (EDX));
  /* 11ec225b cmp dword ptr [0x11ee2a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2262 je 0x11ec2284 */
  if (C.zf) goto L_11ec2284;
  /* 11ec2264 mov eax, dword ptr [0x11ee2a04] */
  EAX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec2269 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec226c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec226e je 0x11ec2284 */
  if (C.zf) goto L_11ec2284;
  /* 11ec2270 push 0x11ee2a04 */
  push32((uint32_t)(0x11ee2a04u));
  /* 11ec2275 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ec2277 push 0x11ee1a90 */
  push32((uint32_t)(0x11ee1a90u));
  /* 11ec227c call 0x11ec2410 */
  push32(0x11ec2281u); f_11ec2410();
  /* 11ec2281 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec2284:;
  /* 11ec2284 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2287 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec228a mov dword ptr [0x11ee2a08], edx */
  w32((uint32_t)(0x11ee2a08), (EDX));
  /* 11ec2290 cmp dword ptr [0x11ee2a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2297 je 0x11ec22b9 */
  if (C.zf) goto L_11ec22b9;
  /* 11ec2299 mov eax, dword ptr [0x11ee2a08] */
  EAX = (r32((uint32_t)(0x11ee2a08)));
  /* 11ec229e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec22a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec22a3 je 0x11ec22b9 */
  if (C.zf) goto L_11ec22b9;
  /* 11ec22a5 push 0x11ee2a08 */
  push32((uint32_t)(0x11ee2a08u));
  /* 11ec22aa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11ec22ac push 0x11ee19d8 */
  push32((uint32_t)(0x11ee19d8u));
  /* 11ec22b1 call 0x11ec2410 */
  push32(0x11ec22b6u); f_11ec2410();
  /* 11ec22b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec22b9:;
  /* 11ec22b9 mov dword ptr [0x11ee2a0c], 0 */
  w32((uint32_t)(0x11ee2a0c), (0x0u));
  /* 11ec22c3 cmp dword ptr [0x11ee2a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec22ca je 0x11ec22fd */
  if (C.zf) goto L_11ec22fd;
  /* 11ec22cc mov edx, dword ptr [0x11ee2a04] */
  EDX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec22d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ec22d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec22d7 je 0x11ec22fd */
  if (C.zf) goto L_11ec22fd;
  /* 11ec22d9 cmp dword ptr [0x11ee2a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec22e0 je 0x11ec22f6 */
  if (C.zf) goto L_11ec22f6;
  /* 11ec22e2 mov ecx, dword ptr [0x11ee2a08] */
  ECX = (r32((uint32_t)(0x11ee2a08)));
  /* 11ec22e8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ec22eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec22ed je 0x11ec22f6 */
  if (C.zf) goto L_11ec22f6;
  /* 11ec22ef call 0x11ec24a0 */
  push32(0x11ec22f4u); f_11ec24a0();
  /* 11ec22f4 jmp 0x11ec22fb */
  goto L_11ec22fb;
L_11ec22f6:;
  /* 11ec22f6 call 0x11ec2890 */
  push32(0x11ec22fbu); f_11ec2890();
L_11ec22fb:;
  /* 11ec22fb jmp 0x11ec231e */
  goto L_11ec231e;
L_11ec22fd:;
  /* 11ec22fd cmp dword ptr [0x11ee2a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2304 je 0x11ec2319 */
  if (C.zf) goto L_11ec2319;
  /* 11ec2306 mov eax, dword ptr [0x11ee2a08] */
  EAX = (r32((uint32_t)(0x11ee2a08)));
  /* 11ec230b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec230e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec2310 je 0x11ec2319 */
  if (C.zf) goto L_11ec2319;
  /* 11ec2312 call 0x11ec2a30 */
  push32(0x11ec2317u); f_11ec2a30();
  /* 11ec2317 jmp 0x11ec231e */
  goto L_11ec231e;
L_11ec2319:;
  /* 11ec2319 call 0x11ec2b30 */
  push32(0x11ec231eu); f_11ec2b30();
L_11ec231e:;
  /* 11ec231e cmp dword ptr [0x11ee2a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2325 jne 0x11ec232e */
  if (!C.zf) goto L_11ec232e;
  /* 11ec2327 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2329 jmp 0x11ec240c */
  goto L_11ec240c;
L_11ec232e:;
  /* 11ec232e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2331 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2337 push edx */
  push32((uint32_t)(EDX));
  /* 11ec2338 call 0x11ec2b60 */
  push32(0x11ec233du); f_11ec2b60();
  /* 11ec233d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2340 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec2343 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2347 je 0x11ec235c */
  if (C.zf) goto L_11ec235c;
  /* 11ec2349 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec234c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2351 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2352 call dword ptr [0x11ee52f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52f8))), 0x11ec2358u);
  /* 11ec2358 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec235a jne 0x11ec2363 */
  if (!C.zf) goto L_11ec2363;
L_11ec235c:;
  /* 11ec235c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec235e jmp 0x11ec240c */
  goto L_11ec240c;
L_11ec2363:;
  /* 11ec2363 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec2365 mov ecx, dword ptr [0x11ee29f4] */
  ECX = (r32((uint32_t)(0x11ee29f4)));
  /* 11ec236b push ecx */
  push32((uint32_t)(ECX));
  /* 11ec236c call dword ptr [0x11ee52fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52fc))), 0x11ec2372u);
  /* 11ec2372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2374 jne 0x11ec237d */
  if (!C.zf) goto L_11ec237d;
  /* 11ec2376 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2378 jmp 0x11ec240c */
  goto L_11ec240c;
L_11ec237d:;
  /* 11ec237d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2381 je 0x11ec23a8 */
  if (C.zf) goto L_11ec23a8;
  /* 11ec2383 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec2386 mov ax, word ptr [0x11ee29f4] */
  AX = (r16((uint32_t)(0x11ee29f4)));
  /* 11ec238c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11ec238f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec2392 mov dx, word ptr [0x11ee2a10] */
  DX = (r16((uint32_t)(0x11ee2a10)));
  /* 11ec2399 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11ec239d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec23a0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ec23a4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11ec23a8:;
  /* 11ec23a8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec23ac je 0x11ec2407 */
  if (C.zf) goto L_11ec2407;
  /* 11ec23ae push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ec23b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec23b3 push edx */
  push32((uint32_t)(EDX));
  /* 11ec23b4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11ec23b9 mov eax, dword ptr [0x11ee29f4] */
  EAX = (r32((uint32_t)(0x11ee29f4)));
  /* 11ec23be push eax */
  push32((uint32_t)(EAX));
  /* 11ec23bf call dword ptr [0x11ee2a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee2a14))), 0x11ec23c5u);
  /* 11ec23c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec23c7 jne 0x11ec23cd */
  if (!C.zf) goto L_11ec23cd;
  /* 11ec23c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec23cb jmp 0x11ec240c */
  goto L_11ec240c;
L_11ec23cd:;
  /* 11ec23cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ec23cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec23d2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec23d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec23d6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11ec23db mov edx, dword ptr [0x11ee2a10] */
  EDX = (r32((uint32_t)(0x11ee2a10)));
  /* 11ec23e1 push edx */
  push32((uint32_t)(EDX));
  /* 11ec23e2 call dword ptr [0x11ee2a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee2a14))), 0x11ec23e8u);
  /* 11ec23e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec23ea jne 0x11ec23f0 */
  if (!C.zf) goto L_11ec23f0;
  /* 11ec23ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec23ee jmp 0x11ec240c */
  goto L_11ec240c;
L_11ec23f0:;
  /* 11ec23f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11ec23f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec23f5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec23fa push eax */
  push32((uint32_t)(EAX));
  /* 11ec23fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec23fe push ecx */
  push32((uint32_t)(ECX));
  /* 11ec23ff call 0x11eb8f70 */
  push32(0x11ec2404u); f_11eb8f70();
  /* 11ec2404 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec2407:;
  /* 11ec2407 mov eax, 1 */
  EAX = (0x1u);
L_11ec240c:;
  /* 11ec240c mov esp, ebp */
  ESP = (EBP);
  /* 11ec240e pop ebp */
  EBP = (pop32());
  /* 11ec240f ret  */
  ESPCHK(0x11ec2210u, _esp0);
  ESP += 4; return;
}

/* FUN_10012410 @ 0x11ec2410 (130 bytes, 47 insns) */
void f_11ec2410(void) {
  FTRACE(0x11ec2410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2410 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2411 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2413 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2416 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11ec241d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11ec2424:;
  /* 11ec2424 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec2427 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec242a jg 0x11ec248e */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec248e;
  /* 11ec242c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2430 je 0x11ec248e */
  if (C.zf) goto L_11ec248e;
  /* 11ec2432 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec2435 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2438 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ec2439 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec243b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ec243d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec2440 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec2443 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2446 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11ec2449 push eax */
  push32((uint32_t)(EAX));
  /* 11ec244a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec244d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ec244f push edx */
  push32((uint32_t)(EDX));
  /* 11ec2450 call 0x11ec4b00 */
  push32(0x11ec2455u); f_11ec4b00();
  /* 11ec2455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2458 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec245b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec245f jne 0x11ec2472 */
  if (!C.zf) goto L_11ec2472;
  /* 11ec2461 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec2464 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2467 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11ec246b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec246e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ec2470 jmp 0x11ec248c */
  goto L_11ec248c;
L_11ec2472:;
  /* 11ec2472 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2476 jge 0x11ec2483 */
  if ((C.sf==C.of)) goto L_11ec2483;
  /* 11ec2478 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec247b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec247e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ec2481 jmp 0x11ec248c */
  goto L_11ec248c;
L_11ec2483:;
  /* 11ec2483 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec2486 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2489 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ec248c:;
  /* 11ec248c jmp 0x11ec2424 */
  goto L_11ec2424;
L_11ec248e:;
  /* 11ec248e mov esp, ebp */
  ESP = (EBP);
  /* 11ec2490 pop ebp */
  EBP = (pop32());
  /* 11ec2491 ret  */
  ESPCHK(0x11ec2410u, _esp0);
  ESP += 4; return;
}

/* FUN_100124a0 @ 0x11ec24a0 (186 bytes, 50 insns) */
void f_11ec24a0(void) {
  FTRACE(0x11ec24a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec24a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec24a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec24a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec24a4 mov eax, dword ptr [0x11ee2a04] */
  EAX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec24a9 push eax */
  push32((uint32_t)(EAX));
  /* 11ec24aa call 0x11eb9260 */
  push32(0x11ec24afu); f_11eb9260();
  /* 11ec24af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec24b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec24b4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec24b7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11ec24ba mov dword ptr [0x11ee2a00], ecx */
  w32((uint32_t)(0x11ee2a00), (ECX));
  /* 11ec24c0 mov edx, dword ptr [0x11ee2a08] */
  EDX = (r32((uint32_t)(0x11ee2a08)));
  /* 11ec24c6 push edx */
  push32((uint32_t)(EDX));
  /* 11ec24c7 call 0x11eb9260 */
  push32(0x11ec24ccu); f_11eb9260();
  /* 11ec24cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec24cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec24d1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec24d4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11ec24d7 mov dword ptr [0x11ee29f8], ecx */
  w32((uint32_t)(0x11ee29f8), (ECX));
  /* 11ec24dd mov dword ptr [0x11ee29f4], 0 */
  w32((uint32_t)(0x11ee29f4), (0x0u));
  /* 11ec24e7 cmp dword ptr [0x11ee2a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec24ee je 0x11ec24f9 */
  if (C.zf) goto L_11ec24f9;
  /* 11ec24f0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11ec24f7 jmp 0x11ec250b */
  goto L_11ec250b;
L_11ec24f9:;
  /* 11ec24f9 mov edx, dword ptr [0x11ee2a04] */
  EDX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec24ff push edx */
  push32((uint32_t)(EDX));
  /* 11ec2500 call 0x11ec2f40 */
  push32(0x11ec2505u); f_11ec2f40();
  /* 11ec2505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2508 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ec250b:;
  /* 11ec250b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec250e mov dword ptr [0x11ee29fc], eax */
  w32((uint32_t)(0x11ee29fc), (EAX));
  /* 11ec2513 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec2515 push 0x11ec2560 */
  push32((uint32_t)(0x11ec2560u));
  /* 11ec251a call dword ptr [0x11ee52f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52f0))), 0x11ec2520u);
  /* 11ec2520 mov ecx, dword ptr [0x11ee2a0c] */
  ECX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec2526 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec252c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec252e je 0x11ec254c */
  if (C.zf) goto L_11ec254c;
  /* 11ec2530 mov edx, dword ptr [0x11ee2a0c] */
  EDX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec2536 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec253c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec253e je 0x11ec254c */
  if (C.zf) goto L_11ec254c;
  /* 11ec2540 mov eax, dword ptr [0x11ee2a0c] */
  EAX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec2545 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec254a jne 0x11ec2556 */
  if (!C.zf) goto L_11ec2556;
L_11ec254c:;
  /* 11ec254c mov dword ptr [0x11ee2a0c], 0 */
  w32((uint32_t)(0x11ee2a0c), (0x0u));
L_11ec2556:;
  /* 11ec2556 mov esp, ebp */
  ESP = (EBP);
  /* 11ec2558 pop ebp */
  EBP = (pop32());
  /* 11ec2559 ret  */
  ESPCHK(0x11ec24a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012560 @ 0x11ec2560 (804 bytes, 220 insns) */
void f_11ec2560(void) {
  FTRACE(0x11ec2560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2560 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2561 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2563 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2569 push eax */
  push32((uint32_t)(EAX));
  /* 11ec256a call 0x11ec2ec0 */
  push32(0x11ec256fu); f_11ec2ec0();
  /* 11ec256f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2572 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11ec2575 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11ec2577 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11ec257a push ecx */
  push32((uint32_t)(ECX));
  /* 11ec257b mov edx, dword ptr [0x11ee29f8] */
  EDX = (r32((uint32_t)(0x11ee29f8)));
  /* 11ec2581 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec2583 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2585 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec258b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2591 push edx */
  push32((uint32_t)(EDX));
  /* 11ec2592 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec2595 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2596 call dword ptr [0x11ee2a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee2a14))), 0x11ec259cu);
  /* 11ec259c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec259e jne 0x11ec25b4 */
  if (!C.zf) goto L_11ec25b4;
  /* 11ec25a0 mov dword ptr [0x11ee2a0c], 0 */
  w32((uint32_t)(0x11ee2a0c), (0x0u));
  /* 11ec25aa mov eax, 1 */
  EAX = (0x1u);
  /* 11ec25af jmp 0x11ec287e */
  goto L_11ec287e;
L_11ec25b4:;
  /* 11ec25b4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11ec25b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec25b8 mov edx, dword ptr [0x11ee2a08] */
  EDX = (r32((uint32_t)(0x11ee2a08)));
  /* 11ec25be push edx */
  push32((uint32_t)(EDX));
  /* 11ec25bf call 0x11ec4b00 */
  push32(0x11ec25c4u); f_11ec4b00();
  /* 11ec25c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec25c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec25c9 jne 0x11ec26ef */
  if (!C.zf) goto L_11ec26ef;
  /* 11ec25cf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11ec25d1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11ec25d4 push eax */
  push32((uint32_t)(EAX));
  /* 11ec25d5 mov ecx, dword ptr [0x11ee2a00] */
  ECX = (r32((uint32_t)(0x11ee2a00)));
  /* 11ec25db neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec25dd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec25df and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec25e5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec25eb push ecx */
  push32((uint32_t)(ECX));
  /* 11ec25ec mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec25ef push edx */
  push32((uint32_t)(EDX));
  /* 11ec25f0 call dword ptr [0x11ee2a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee2a14))), 0x11ec25f6u);
  /* 11ec25f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec25f8 jne 0x11ec260e */
  if (!C.zf) goto L_11ec260e;
  /* 11ec25fa mov dword ptr [0x11ee2a0c], 0 */
  w32((uint32_t)(0x11ee2a0c), (0x0u));
  /* 11ec2604 mov eax, 1 */
  EAX = (0x1u);
  /* 11ec2609 jmp 0x11ec287e */
  goto L_11ec287e;
L_11ec260e:;
  /* 11ec260e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11ec2611 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2612 mov ecx, dword ptr [0x11ee2a04] */
  ECX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec2618 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2619 call 0x11ec4b00 */
  push32(0x11ec261eu); f_11ec4b00();
  /* 11ec261e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2621 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2623 jne 0x11ec2650 */
  if (!C.zf) goto L_11ec2650;
  /* 11ec2625 mov edx, dword ptr [0x11ee2a0c] */
  EDX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec262b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec2631 mov dword ptr [0x11ee2a0c], edx */
  w32((uint32_t)(0x11ee2a0c), (EDX));
  /* 11ec2637 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec263a mov dword ptr [0x11ee2a10], eax */
  w32((uint32_t)(0x11ee2a10), (EAX));
  /* 11ec263f mov ecx, dword ptr [0x11ee2a10] */
  ECX = (r32((uint32_t)(0x11ee2a10)));
  /* 11ec2645 mov dword ptr [0x11ee29f4], ecx */
  w32((uint32_t)(0x11ee29f4), (ECX));
  /* 11ec264b jmp 0x11ec26ef */
  goto L_11ec26ef;
L_11ec2650:;
  /* 11ec2650 mov edx, dword ptr [0x11ee2a0c] */
  EDX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec2656 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec2659 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec265b jne 0x11ec26ef */
  if (!C.zf) goto L_11ec26ef;
  /* 11ec2661 cmp dword ptr [0x11ee29fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee29fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2668 je 0x11ec26bd */
  if (C.zf) goto L_11ec26bd;
  /* 11ec266a mov eax, dword ptr [0x11ee29fc] */
  EAX = (r32((uint32_t)(0x11ee29fc)));
  /* 11ec266f push eax */
  push32((uint32_t)(EAX));
  /* 11ec2670 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11ec2673 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2674 mov edx, dword ptr [0x11ee2a04] */
  EDX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec267a push edx */
  push32((uint32_t)(EDX));
  /* 11ec267b call 0x11ec4bd0 */
  push32(0x11ec2680u); f_11ec4bd0();
  /* 11ec2680 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2683 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2685 jne 0x11ec26bd */
  if (!C.zf) goto L_11ec26bd;
  /* 11ec2687 mov eax, dword ptr [0x11ee2a0c] */
  EAX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec268c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11ec268e mov dword ptr [0x11ee2a0c], eax */
  w32((uint32_t)(0x11ee2a0c), (EAX));
  /* 11ec2693 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec2696 mov dword ptr [0x11ee2a10], ecx */
  w32((uint32_t)(0x11ee2a10), (ECX));
  /* 11ec269c mov edx, dword ptr [0x11ee2a04] */
  EDX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec26a2 push edx */
  push32((uint32_t)(EDX));
  /* 11ec26a3 call 0x11eb9260 */
  push32(0x11ec26a8u); f_11eb9260();
  /* 11ec26a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec26ab cmp eax, dword ptr [0x11ee29fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee29fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec26b1 jne 0x11ec26bb */
  if (!C.zf) goto L_11ec26bb;
  /* 11ec26b3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec26b6 mov dword ptr [0x11ee29f4], eax */
  w32((uint32_t)(0x11ee29f4), (EAX));
L_11ec26bb:;
  /* 11ec26bb jmp 0x11ec26ef */
  goto L_11ec26ef;
L_11ec26bd:;
  /* 11ec26bd mov ecx, dword ptr [0x11ee2a0c] */
  ECX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec26c3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec26c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec26c8 jne 0x11ec26ef */
  if (!C.zf) goto L_11ec26ef;
  /* 11ec26ca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec26cd push edx */
  push32((uint32_t)(EDX));
  /* 11ec26ce call 0x11ec2c00 */
  push32(0x11ec26d3u); f_11ec2c00();
  /* 11ec26d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec26d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec26d8 je 0x11ec26ef */
  if (C.zf) goto L_11ec26ef;
  /* 11ec26da mov eax, dword ptr [0x11ee2a0c] */
  EAX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec26df or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11ec26e1 mov dword ptr [0x11ee2a0c], eax */
  w32((uint32_t)(0x11ee2a0c), (EAX));
  /* 11ec26e6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec26e9 mov dword ptr [0x11ee2a10], ecx */
  w32((uint32_t)(0x11ee2a10), (ECX));
L_11ec26ef:;
  /* 11ec26ef mov edx, dword ptr [0x11ee2a0c] */
  EDX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec26f5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec26fb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2701 je 0x11ec2871 */
  if (C.zf) goto L_11ec2871;
  /* 11ec2707 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11ec2709 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11ec270c push eax */
  push32((uint32_t)(EAX));
  /* 11ec270d mov ecx, dword ptr [0x11ee2a00] */
  ECX = (r32((uint32_t)(0x11ee2a00)));
  /* 11ec2713 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec2715 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2717 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec271d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2723 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2724 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec2727 push edx */
  push32((uint32_t)(EDX));
  /* 11ec2728 call dword ptr [0x11ee2a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee2a14))), 0x11ec272eu);
  /* 11ec272e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2730 jne 0x11ec2746 */
  if (!C.zf) goto L_11ec2746;
  /* 11ec2732 mov dword ptr [0x11ee2a0c], 0 */
  w32((uint32_t)(0x11ee2a0c), (0x0u));
  /* 11ec273c mov eax, 1 */
  EAX = (0x1u);
  /* 11ec2741 jmp 0x11ec287e */
  goto L_11ec287e;
L_11ec2746:;
  /* 11ec2746 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11ec2749 push eax */
  push32((uint32_t)(EAX));
  /* 11ec274a mov ecx, dword ptr [0x11ee2a04] */
  ECX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec2750 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2751 call 0x11ec4b00 */
  push32(0x11ec2756u); f_11ec4b00();
  /* 11ec2756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec275b jne 0x11ec2810 */
  if (!C.zf) goto L_11ec2810;
  /* 11ec2761 mov edx, dword ptr [0x11ee2a0c] */
  EDX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec2767 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ec276a mov dword ptr [0x11ee2a0c], edx */
  w32((uint32_t)(0x11ee2a0c), (EDX));
  /* 11ec2770 cmp dword ptr [0x11ee2a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2777 je 0x11ec279a */
  if (C.zf) goto L_11ec279a;
  /* 11ec2779 mov eax, dword ptr [0x11ee2a0c] */
  EAX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec277e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11ec2781 mov dword ptr [0x11ee2a0c], eax */
  w32((uint32_t)(0x11ee2a0c), (EAX));
  /* 11ec2786 cmp dword ptr [0x11ee29f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee29f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec278d jne 0x11ec2798 */
  if (!C.zf) goto L_11ec2798;
  /* 11ec278f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec2792 mov dword ptr [0x11ee29f4], ecx */
  w32((uint32_t)(0x11ee29f4), (ECX));
L_11ec2798:;
  /* 11ec2798 jmp 0x11ec280e */
  goto L_11ec280e;
L_11ec279a:;
  /* 11ec279a cmp dword ptr [0x11ee29fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee29fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec27a1 je 0x11ec27ef */
  if (C.zf) goto L_11ec27ef;
  /* 11ec27a3 mov edx, dword ptr [0x11ee2a04] */
  EDX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec27a9 push edx */
  push32((uint32_t)(EDX));
  /* 11ec27aa call 0x11eb9260 */
  push32(0x11ec27afu); f_11eb9260();
  /* 11ec27af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec27b2 cmp eax, dword ptr [0x11ee29fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee29fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec27b8 jne 0x11ec27ef */
  if (!C.zf) goto L_11ec27ef;
  /* 11ec27ba push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec27bc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec27bf push eax */
  push32((uint32_t)(EAX));
  /* 11ec27c0 call 0x11ec2c50 */
  push32(0x11ec27c5u); f_11ec2c50();
  /* 11ec27c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec27c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec27ca je 0x11ec27ed */
  if (C.zf) goto L_11ec27ed;
  /* 11ec27cc mov ecx, dword ptr [0x11ee2a0c] */
  ECX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec27d2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ec27d5 mov dword ptr [0x11ee2a0c], ecx */
  w32((uint32_t)(0x11ee2a0c), (ECX));
  /* 11ec27db cmp dword ptr [0x11ee29f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee29f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec27e2 jne 0x11ec27ed */
  if (!C.zf) goto L_11ec27ed;
  /* 11ec27e4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec27e7 mov dword ptr [0x11ee29f4], edx */
  w32((uint32_t)(0x11ee29f4), (EDX));
L_11ec27ed:;
  /* 11ec27ed jmp 0x11ec280e */
  goto L_11ec280e;
L_11ec27ef:;
  /* 11ec27ef mov eax, dword ptr [0x11ee2a0c] */
  EAX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec27f4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11ec27f7 mov dword ptr [0x11ee2a0c], eax */
  w32((uint32_t)(0x11ee2a0c), (EAX));
  /* 11ec27fc cmp dword ptr [0x11ee29f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee29f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2803 jne 0x11ec280e */
  if (!C.zf) goto L_11ec280e;
  /* 11ec2805 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec2808 mov dword ptr [0x11ee29f4], ecx */
  w32((uint32_t)(0x11ee29f4), (ECX));
L_11ec280e:;
  /* 11ec280e jmp 0x11ec2871 */
  goto L_11ec2871;
L_11ec2810:;
  /* 11ec2810 cmp dword ptr [0x11ee2a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2817 jne 0x11ec2871 */
  if (!C.zf) goto L_11ec2871;
  /* 11ec2819 cmp dword ptr [0x11ee29fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee29fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2820 je 0x11ec2871 */
  if (C.zf) goto L_11ec2871;
  /* 11ec2822 mov edx, dword ptr [0x11ee29fc] */
  EDX = (r32((uint32_t)(0x11ee29fc)));
  /* 11ec2828 push edx */
  push32((uint32_t)(EDX));
  /* 11ec2829 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11ec282c push eax */
  push32((uint32_t)(EAX));
  /* 11ec282d mov ecx, dword ptr [0x11ee2a04] */
  ECX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec2833 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2834 call 0x11ec4bd0 */
  push32(0x11ec2839u); f_11ec4bd0();
  /* 11ec2839 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec283c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec283e jne 0x11ec2871 */
  if (!C.zf) goto L_11ec2871;
  /* 11ec2840 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec2842 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec2845 push edx */
  push32((uint32_t)(EDX));
  /* 11ec2846 call 0x11ec2c50 */
  push32(0x11ec284bu); f_11ec2c50();
  /* 11ec284b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec284e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2850 je 0x11ec2871 */
  if (C.zf) goto L_11ec2871;
  /* 11ec2852 mov eax, dword ptr [0x11ee2a0c] */
  EAX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec2857 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11ec285a mov dword ptr [0x11ee2a0c], eax */
  w32((uint32_t)(0x11ee2a0c), (EAX));
  /* 11ec285f cmp dword ptr [0x11ee29f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee29f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2866 jne 0x11ec2871 */
  if (!C.zf) goto L_11ec2871;
  /* 11ec2868 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec286b mov dword ptr [0x11ee29f4], ecx */
  w32((uint32_t)(0x11ee29f4), (ECX));
L_11ec2871:;
  /* 11ec2871 mov eax, dword ptr [0x11ee2a0c] */
  EAX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec2876 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2879 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec287b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec287d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ec287e:;
  /* 11ec287e mov esp, ebp */
  ESP = (EBP);
  /* 11ec2880 pop ebp */
  EBP = (pop32());
  /* 11ec2881 ret 4 */
  ESPCHK(0x11ec2560u, _esp0);
  ESP += 8; return;
}

/* FUN_10012890 @ 0x11ec2890 (116 bytes, 33 insns) */
void f_11ec2890(void) {
  FTRACE(0x11ec2890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2890 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2891 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2893 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2894 mov eax, dword ptr [0x11ee2a04] */
  EAX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec2899 push eax */
  push32((uint32_t)(EAX));
  /* 11ec289a call 0x11eb9260 */
  push32(0x11ec289fu); f_11eb9260();
  /* 11ec289f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec28a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec28a4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec28a7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11ec28aa mov dword ptr [0x11ee2a00], ecx */
  w32((uint32_t)(0x11ee2a00), (ECX));
  /* 11ec28b0 cmp dword ptr [0x11ee2a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec28b7 je 0x11ec28c2 */
  if (C.zf) goto L_11ec28c2;
  /* 11ec28b9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11ec28c0 jmp 0x11ec28d4 */
  goto L_11ec28d4;
L_11ec28c2:;
  /* 11ec28c2 mov edx, dword ptr [0x11ee2a04] */
  EDX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec28c8 push edx */
  push32((uint32_t)(EDX));
  /* 11ec28c9 call 0x11ec2f40 */
  push32(0x11ec28ceu); f_11ec2f40();
  /* 11ec28ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec28d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ec28d4:;
  /* 11ec28d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec28d7 mov dword ptr [0x11ee29fc], eax */
  w32((uint32_t)(0x11ee29fc), (EAX));
  /* 11ec28dc push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec28de push 0x11ec2910 */
  push32((uint32_t)(0x11ec2910u));
  /* 11ec28e3 call dword ptr [0x11ee52f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52f0))), 0x11ec28e9u);
  /* 11ec28e9 mov ecx, dword ptr [0x11ee2a0c] */
  ECX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec28ef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec28f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec28f4 jne 0x11ec2900 */
  if (!C.zf) goto L_11ec2900;
  /* 11ec28f6 mov dword ptr [0x11ee2a0c], 0 */
  w32((uint32_t)(0x11ee2a0c), (0x0u));
L_11ec2900:;
  /* 11ec2900 mov esp, ebp */
  ESP = (EBP);
  /* 11ec2902 pop ebp */
  EBP = (pop32());
  /* 11ec2903 ret  */
  ESPCHK(0x11ec2890u, _esp0);
  ESP += 4; return;
}

/* FUN_10012910 @ 0x11ec2910 (287 bytes, 86 insns) */
void f_11ec2910(void) {
  FTRACE(0x11ec2910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2910 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2911 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2913 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2919 push eax */
  push32((uint32_t)(EAX));
  /* 11ec291a call 0x11ec2ec0 */
  push32(0x11ec291fu); f_11ec2ec0();
  /* 11ec291f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2922 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11ec2925 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11ec2927 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11ec292a push ecx */
  push32((uint32_t)(ECX));
  /* 11ec292b mov edx, dword ptr [0x11ee2a00] */
  EDX = (r32((uint32_t)(0x11ee2a00)));
  /* 11ec2931 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec2933 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2935 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec293b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2941 push edx */
  push32((uint32_t)(EDX));
  /* 11ec2942 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec2945 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2946 call dword ptr [0x11ee2a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee2a14))), 0x11ec294cu);
  /* 11ec294c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec294e jne 0x11ec2964 */
  if (!C.zf) goto L_11ec2964;
  /* 11ec2950 mov dword ptr [0x11ee2a0c], 0 */
  w32((uint32_t)(0x11ee2a0c), (0x0u));
  /* 11ec295a mov eax, 1 */
  EAX = (0x1u);
  /* 11ec295f jmp 0x11ec2a29 */
  goto L_11ec2a29;
L_11ec2964:;
  /* 11ec2964 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11ec2967 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2968 mov edx, dword ptr [0x11ee2a04] */
  EDX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec296e push edx */
  push32((uint32_t)(EDX));
  /* 11ec296f call 0x11ec4b00 */
  push32(0x11ec2974u); f_11ec4b00();
  /* 11ec2974 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2979 jne 0x11ec29b9 */
  if (!C.zf) goto L_11ec29b9;
  /* 11ec297b cmp dword ptr [0x11ee2a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2982 jne 0x11ec2996 */
  if (!C.zf) goto L_11ec2996;
  /* 11ec2984 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec2986 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec2989 push eax */
  push32((uint32_t)(EAX));
  /* 11ec298a call 0x11ec2c50 */
  push32(0x11ec298fu); f_11ec2c50();
  /* 11ec298f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2994 je 0x11ec29b7 */
  if (C.zf) goto L_11ec29b7;
L_11ec2996:;
  /* 11ec2996 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec2999 mov dword ptr [0x11ee2a10], ecx */
  w32((uint32_t)(0x11ee2a10), (ECX));
  /* 11ec299f mov edx, dword ptr [0x11ee2a10] */
  EDX = (r32((uint32_t)(0x11ee2a10)));
  /* 11ec29a5 mov dword ptr [0x11ee29f4], edx */
  w32((uint32_t)(0x11ee29f4), (EDX));
  /* 11ec29ab mov eax, dword ptr [0x11ee2a0c] */
  EAX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec29b0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11ec29b2 mov dword ptr [0x11ee2a0c], eax */
  w32((uint32_t)(0x11ee2a0c), (EAX));
L_11ec29b7:;
  /* 11ec29b7 jmp 0x11ec2a1c */
  goto L_11ec2a1c;
L_11ec29b9:;
  /* 11ec29b9 cmp dword ptr [0x11ee2a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec29c0 jne 0x11ec2a1c */
  if (!C.zf) goto L_11ec2a1c;
  /* 11ec29c2 cmp dword ptr [0x11ee29fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee29fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec29c9 je 0x11ec2a1c */
  if (C.zf) goto L_11ec2a1c;
  /* 11ec29cb mov ecx, dword ptr [0x11ee29fc] */
  ECX = (r32((uint32_t)(0x11ee29fc)));
  /* 11ec29d1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec29d2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11ec29d5 push edx */
  push32((uint32_t)(EDX));
  /* 11ec29d6 mov eax, dword ptr [0x11ee2a04] */
  EAX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec29db push eax */
  push32((uint32_t)(EAX));
  /* 11ec29dc call 0x11ec4bd0 */
  push32(0x11ec29e1u); f_11ec4bd0();
  /* 11ec29e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec29e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec29e6 jne 0x11ec2a1c */
  if (!C.zf) goto L_11ec2a1c;
  /* 11ec29e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec29ea mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec29ed push ecx */
  push32((uint32_t)(ECX));
  /* 11ec29ee call 0x11ec2c50 */
  push32(0x11ec29f3u); f_11ec2c50();
  /* 11ec29f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec29f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec29f8 je 0x11ec2a1c */
  if (C.zf) goto L_11ec2a1c;
  /* 11ec29fa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec29fd mov dword ptr [0x11ee2a10], edx */
  w32((uint32_t)(0x11ee2a10), (EDX));
  /* 11ec2a03 mov eax, dword ptr [0x11ee2a10] */
  EAX = (r32((uint32_t)(0x11ee2a10)));
  /* 11ec2a08 mov dword ptr [0x11ee29f4], eax */
  w32((uint32_t)(0x11ee29f4), (EAX));
  /* 11ec2a0d mov ecx, dword ptr [0x11ee2a0c] */
  ECX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec2a13 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec2a16 mov dword ptr [0x11ee2a0c], ecx */
  w32((uint32_t)(0x11ee2a0c), (ECX));
L_11ec2a1c:;
  /* 11ec2a1c mov eax, dword ptr [0x11ee2a0c] */
  EAX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec2a21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2a24 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec2a26 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2a28 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ec2a29:;
  /* 11ec2a29 mov esp, ebp */
  ESP = (EBP);
  /* 11ec2a2b pop ebp */
  EBP = (pop32());
  /* 11ec2a2c ret 4 */
  ESPCHK(0x11ec2910u, _esp0);
  ESP += 8; return;
}

/* FUN_10012a30 @ 0x11ec2a30 (69 bytes, 20 insns) */
void f_11ec2a30(void) {
  FTRACE(0x11ec2a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2a31 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2a33 mov eax, dword ptr [0x11ee2a08] */
  EAX = (r32((uint32_t)(0x11ee2a08)));
  /* 11ec2a38 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2a39 call 0x11eb9260 */
  push32(0x11ec2a3eu); f_11eb9260();
  /* 11ec2a3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2a41 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec2a43 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2a46 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11ec2a49 mov dword ptr [0x11ee29f8], ecx */
  w32((uint32_t)(0x11ee29f8), (ECX));
  /* 11ec2a4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec2a51 push 0x11ec2a80 */
  push32((uint32_t)(0x11ec2a80u));
  /* 11ec2a56 call dword ptr [0x11ee52f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52f0))), 0x11ec2a5cu);
  /* 11ec2a5c mov edx, dword ptr [0x11ee2a0c] */
  EDX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec2a62 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec2a65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec2a67 jne 0x11ec2a73 */
  if (!C.zf) goto L_11ec2a73;
  /* 11ec2a69 mov dword ptr [0x11ee2a0c], 0 */
  w32((uint32_t)(0x11ee2a0c), (0x0u));
L_11ec2a73:;
  /* 11ec2a73 pop ebp */
  EBP = (pop32());
  /* 11ec2a74 ret  */
  ESPCHK(0x11ec2a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a80 @ 0x11ec2a80 (172 bytes, 54 insns) */
void f_11ec2a80(void) {
  FTRACE(0x11ec2a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2a81 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2a83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2a89 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2a8a call 0x11ec2ec0 */
  push32(0x11ec2a8fu); f_11ec2ec0();
  /* 11ec2a8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2a92 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11ec2a95 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11ec2a97 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11ec2a9a push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2a9b mov edx, dword ptr [0x11ee29f8] */
  EDX = (r32((uint32_t)(0x11ee29f8)));
  /* 11ec2aa1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec2aa3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2aa5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec2aab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2ab1 push edx */
  push32((uint32_t)(EDX));
  /* 11ec2ab2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec2ab5 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2ab6 call dword ptr [0x11ee2a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee2a14))), 0x11ec2abcu);
  /* 11ec2abc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2abe jne 0x11ec2ad1 */
  if (!C.zf) goto L_11ec2ad1;
  /* 11ec2ac0 mov dword ptr [0x11ee2a0c], 0 */
  w32((uint32_t)(0x11ee2a0c), (0x0u));
  /* 11ec2aca mov eax, 1 */
  EAX = (0x1u);
  /* 11ec2acf jmp 0x11ec2b26 */
  goto L_11ec2b26;
L_11ec2ad1:;
  /* 11ec2ad1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11ec2ad4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2ad5 mov edx, dword ptr [0x11ee2a08] */
  EDX = (r32((uint32_t)(0x11ee2a08)));
  /* 11ec2adb push edx */
  push32((uint32_t)(EDX));
  /* 11ec2adc call 0x11ec4b00 */
  push32(0x11ec2ae1u); f_11ec4b00();
  /* 11ec2ae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2ae4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2ae6 jne 0x11ec2b19 */
  if (!C.zf) goto L_11ec2b19;
  /* 11ec2ae8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec2aeb push eax */
  push32((uint32_t)(EAX));
  /* 11ec2aec call 0x11ec2c00 */
  push32(0x11ec2af1u); f_11ec2c00();
  /* 11ec2af1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2af4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2af6 je 0x11ec2b19 */
  if (C.zf) goto L_11ec2b19;
  /* 11ec2af8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11ec2afb mov dword ptr [0x11ee2a10], ecx */
  w32((uint32_t)(0x11ee2a10), (ECX));
  /* 11ec2b01 mov edx, dword ptr [0x11ee2a10] */
  EDX = (r32((uint32_t)(0x11ee2a10)));
  /* 11ec2b07 mov dword ptr [0x11ee29f4], edx */
  w32((uint32_t)(0x11ee29f4), (EDX));
  /* 11ec2b0d mov eax, dword ptr [0x11ee2a0c] */
  EAX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec2b12 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11ec2b14 mov dword ptr [0x11ee2a0c], eax */
  w32((uint32_t)(0x11ee2a0c), (EAX));
L_11ec2b19:;
  /* 11ec2b19 mov eax, dword ptr [0x11ee2a0c] */
  EAX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec2b1e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2b21 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ec2b23 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2b25 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ec2b26:;
  /* 11ec2b26 mov esp, ebp */
  ESP = (EBP);
  /* 11ec2b28 pop ebp */
  EBP = (pop32());
  /* 11ec2b29 ret 4 */
  ESPCHK(0x11ec2a80u, _esp0);
  ESP += 8; return;
}

/* FUN_10012b30 @ 0x11ec2b30 (43 bytes, 11 insns) */
void f_11ec2b30(void) {
  FTRACE(0x11ec2b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2b31 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2b33 mov eax, dword ptr [0x11ee2a0c] */
  EAX = (r32((uint32_t)(0x11ee2a0c)));
  /* 11ec2b38 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2b3d mov dword ptr [0x11ee2a0c], eax */
  w32((uint32_t)(0x11ee2a0c), (EAX));
  /* 11ec2b42 call dword ptr [0x11ee52ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52ec))), 0x11ec2b48u);
  /* 11ec2b48 mov dword ptr [0x11ee2a10], eax */
  w32((uint32_t)(0x11ee2a10), (EAX));
  /* 11ec2b4d mov ecx, dword ptr [0x11ee2a10] */
  ECX = (r32((uint32_t)(0x11ee2a10)));
  /* 11ec2b53 mov dword ptr [0x11ee29f4], ecx */
  w32((uint32_t)(0x11ee29f4), (ECX));
  /* 11ec2b59 pop ebp */
  EBP = (pop32());
  /* 11ec2b5a ret  */
  ESPCHK(0x11ec2b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b60 @ 0x11ec2b60 (155 bytes, 57 insns) */
void f_11ec2b60(void) {
  FTRACE(0x11ec2b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2b61 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2b63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2b66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2b6a je 0x11ec2b8b */
  if (C.zf) goto L_11ec2b8b;
  /* 11ec2b6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2b6f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ec2b72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec2b74 je 0x11ec2b8b */
  if (C.zf) goto L_11ec2b8b;
  /* 11ec2b76 push 0x11edea94 */
  push32((uint32_t)(0x11edea94u));
  /* 11ec2b7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2b7e push edx */
  push32((uint32_t)(EDX));
  /* 11ec2b7f call 0x11ec20c0 */
  push32(0x11ec2b84u); f_11ec20c0();
  /* 11ec2b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2b87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2b89 jne 0x11ec2bb3 */
  if (!C.zf) goto L_11ec2bb3;
L_11ec2b8b:;
  /* 11ec2b8b push 8 */
  push32((uint32_t)(0x8u));
  /* 11ec2b8d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11ec2b90 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2b91 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11ec2b96 mov ecx, dword ptr [0x11ee2a10] */
  ECX = (r32((uint32_t)(0x11ee2a10)));
  /* 11ec2b9c push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2b9d call dword ptr [0x11ee2a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee2a14))), 0x11ec2ba3u);
  /* 11ec2ba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2ba5 jne 0x11ec2bab */
  if (!C.zf) goto L_11ec2bab;
  /* 11ec2ba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2ba9 jmp 0x11ec2bf7 */
  goto L_11ec2bf7;
L_11ec2bab:;
  /* 11ec2bab lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11ec2bae mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ec2bb1 jmp 0x11ec2beb */
  goto L_11ec2beb;
L_11ec2bb3:;
  /* 11ec2bb3 push 0x11edea90 */
  push32((uint32_t)(0x11edea90u));
  /* 11ec2bb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2bbb push eax */
  push32((uint32_t)(EAX));
  /* 11ec2bbc call 0x11ec20c0 */
  push32(0x11ec2bc1u); f_11ec20c0();
  /* 11ec2bc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2bc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2bc6 jne 0x11ec2beb */
  if (!C.zf) goto L_11ec2beb;
  /* 11ec2bc8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ec2bca lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11ec2bcd push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2bce push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ec2bd0 mov edx, dword ptr [0x11ee2a10] */
  EDX = (r32((uint32_t)(0x11ee2a10)));
  /* 11ec2bd6 push edx */
  push32((uint32_t)(EDX));
  /* 11ec2bd7 call dword ptr [0x11ee2a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee2a14))), 0x11ec2bddu);
  /* 11ec2bdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2bdf jne 0x11ec2be5 */
  if (!C.zf) goto L_11ec2be5;
  /* 11ec2be1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2be3 jmp 0x11ec2bf7 */
  goto L_11ec2bf7;
L_11ec2be5:;
  /* 11ec2be5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11ec2be8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ec2beb:;
  /* 11ec2beb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2bee push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2bef call 0x11ec4ce0 */
  push32(0x11ec2bf4u); f_11ec4ce0();
  /* 11ec2bf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ec2bf7:;
  /* 11ec2bf7 mov esp, ebp */
  ESP = (EBP);
  /* 11ec2bf9 pop ebp */
  EBP = (pop32());
  /* 11ec2bfa ret  */
  ESPCHK(0x11ec2b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c00 @ 0x11ec2c00 (79 bytes, 26 insns) */
void f_11ec2c00(void) {
  FTRACE(0x11ec2c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2c01 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2c03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2c06 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11ec2c0a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11ec2c0e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ec2c15 jmp 0x11ec2c20 */
  goto L_11ec2c20;
L_11ec2c17:;
  /* 11ec2c17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec2c1a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2c1d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ec2c20:;
  /* 11ec2c20 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2c24 jae 0x11ec2c46 */
  if (!C.cf) goto L_11ec2c46;
  /* 11ec2c26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec2c29 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ec2c2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec2c32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ec2c34 mov cx, word ptr [eax*2 + 0x11ee19c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x11ee19c4)));
  /* 11ec2c3c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2c3e jne 0x11ec2c44 */
  if (!C.zf) goto L_11ec2c44;
  /* 11ec2c40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2c42 jmp 0x11ec2c4b */
  goto L_11ec2c4b;
L_11ec2c44:;
  /* 11ec2c44 jmp 0x11ec2c17 */
  goto L_11ec2c17;
L_11ec2c46:;
  /* 11ec2c46 mov eax, 1 */
  EAX = (0x1u);
L_11ec2c4b:;
  /* 11ec2c4b mov esp, ebp */
  ESP = (EBP);
  /* 11ec2c4d pop ebp */
  EBP = (pop32());
  /* 11ec2c4e ret  */
  ESPCHK(0x11ec2c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c50 @ 0x11ec2c50 (135 bytes, 48 insns) */
void f_11ec2c50(void) {
  FTRACE(0x11ec2c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2c51 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2c53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2c56 push esi */
  push32((uint32_t)(ESI));
  /* 11ec2c57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2c5a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2c5f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2c64 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2c69 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11ec2c6c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2c71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec2c74 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11ec2c76 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11ec2c79 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2c7a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec2c7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec2c7f push edx */
  push32((uint32_t)(EDX));
  /* 11ec2c80 call dword ptr [0x11ee2a14] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee2a14))), 0x11ec2c86u);
  /* 11ec2c86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2c88 jne 0x11ec2c8e */
  if (!C.zf) goto L_11ec2c8e;
  /* 11ec2c8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2c8c jmp 0x11ec2cd2 */
  goto L_11ec2cd2;
L_11ec2c8e:;
  /* 11ec2c8e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11ec2c91 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2c92 call 0x11ec2ec0 */
  push32(0x11ec2c97u); f_11ec2ec0();
  /* 11ec2c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2c9a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2c9d je 0x11ec2ccd */
  if (C.zf) goto L_11ec2ccd;
  /* 11ec2c9f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2ca3 je 0x11ec2ccd */
  if (C.zf) goto L_11ec2ccd;
  /* 11ec2ca5 mov ecx, dword ptr [0x11ee2a04] */
  ECX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec2cab push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2cac call 0x11ec2f40 */
  push32(0x11ec2cb1u); f_11ec2f40();
  /* 11ec2cb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2cb4 mov esi, eax */
  ESI = (EAX);
  /* 11ec2cb6 mov edx, dword ptr [0x11ee2a04] */
  EDX = (r32((uint32_t)(0x11ee2a04)));
  /* 11ec2cbc push edx */
  push32((uint32_t)(EDX));
  /* 11ec2cbd call 0x11eb9260 */
  push32(0x11ec2cc2u); f_11eb9260();
  /* 11ec2cc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2cc5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2cc7 jne 0x11ec2ccd */
  if (!C.zf) goto L_11ec2ccd;
  /* 11ec2cc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2ccb jmp 0x11ec2cd2 */
  goto L_11ec2cd2;
L_11ec2ccd:;
  /* 11ec2ccd mov eax, 1 */
  EAX = (0x1u);
L_11ec2cd2:;
  /* 11ec2cd2 pop esi */
  ESI = (pop32());
  /* 11ec2cd3 mov esp, ebp */
  ESP = (EBP);
  /* 11ec2cd5 pop ebp */
  EBP = (pop32());
  /* 11ec2cd6 ret  */
  ESPCHK(0x11ec2c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ce0 @ 0x11ec2ce0 (77 bytes, 18 insns) */
void f_11ec2ce0(void) {
  FTRACE(0x11ec2ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2ce3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2ce9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11ec2cf3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11ec2cf9 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2cfa call dword ptr [0x11ee52e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52e8))), 0x11ec2d00u);
  /* 11ec2d00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec2d02 je 0x11ec2d19 */
  if (C.zf) goto L_11ec2d19;
  /* 11ec2d04 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2d0b jne 0x11ec2d19 */
  if (!C.zf) goto L_11ec2d19;
  /* 11ec2d0d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11ec2d17 jmp 0x11ec2d23 */
  goto L_11ec2d23;
L_11ec2d19:;
  /* 11ec2d19 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11ec2d23:;
  /* 11ec2d23 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11ec2d29 mov esp, ebp */
  ESP = (EBP);
  /* 11ec2d2b pop ebp */
  EBP = (pop32());
  /* 11ec2d2c ret  */
  ESPCHK(0x11ec2ce0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11ec2d30 (388 bytes, 118 insns) */
void f_11ec2d30(void) {
  FTRACE(0x11ec2d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2d31 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2d33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2d36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ec2d3d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11ec2d44 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11ec2d4b:;
  /* 11ec2d4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec2d4e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2d51 jg 0x11ec2e98 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec2e98;
  /* 11ec2d57 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec2d5a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2d5d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ec2d5e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2d60 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ec2d62 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec2d65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec2d68 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec2d6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2d6e cmp edx, dword ptr [ecx + 0x11ee1520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11ee1520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2d74 jne 0x11ec2e6e */
  if (!C.zf) goto L_11ec2e6e;
  /* 11ec2d7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec2d7d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ec2d80 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2d84 ja 0x11ec2da7 */
  if ((!C.cf&&!C.zf)) goto L_11ec2da7;
  /* 11ec2d86 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2d8a je 0x11ec2e19 */
  if (C.zf) goto L_11ec2e19;
  /* 11ec2d90 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2d94 je 0x11ec2dc4 */
  if (C.zf) goto L_11ec2dc4;
  /* 11ec2d96 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2d9a je 0x11ec2de6 */
  if (C.zf) goto L_11ec2de6;
  /* 11ec2d9c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2da0 je 0x11ec2e08 */
  if (C.zf) goto L_11ec2e08;
  /* 11ec2da2 jmp 0x11ec2e38 */
  goto L_11ec2e38;
L_11ec2da7:;
  /* 11ec2da7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2dae je 0x11ec2dd5 */
  if (C.zf) goto L_11ec2dd5;
  /* 11ec2db0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2db7 je 0x11ec2df7 */
  if (C.zf) goto L_11ec2df7;
  /* 11ec2db9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2dc0 je 0x11ec2e2a */
  if (C.zf) goto L_11ec2e2a;
  /* 11ec2dc2 jmp 0x11ec2e38 */
  goto L_11ec2e38;
L_11ec2dc4:;
  /* 11ec2dc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec2dc7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec2dca add ecx, 0x11ee1524 */
  { uint32_t _a=(ECX),_b=(0x11ee1524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2dd0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec2dd3 jmp 0x11ec2e38 */
  goto L_11ec2e38;
L_11ec2dd5:;
  /* 11ec2dd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec2dd8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec2ddb mov eax, dword ptr [edx + 0x11ee152c] */
  EAX = (r32((uint32_t)(EDX + 0x11ee152c)));
  /* 11ec2de1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec2de4 jmp 0x11ec2e38 */
  goto L_11ec2e38;
L_11ec2de6:;
  /* 11ec2de6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec2de9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec2dec add ecx, 0x11ee1530 */
  { uint32_t _a=(ECX),_b=(0x11ee1530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2df2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec2df5 jmp 0x11ec2e38 */
  goto L_11ec2e38;
L_11ec2df7:;
  /* 11ec2df7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec2dfa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec2dfd mov eax, dword ptr [edx + 0x11ee1534] */
  EAX = (r32((uint32_t)(EDX + 0x11ee1534)));
  /* 11ec2e03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec2e06 jmp 0x11ec2e38 */
  goto L_11ec2e38;
L_11ec2e08:;
  /* 11ec2e08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec2e0b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec2e0e add ecx, 0x11ee1538 */
  { uint32_t _a=(ECX),_b=(0x11ee1538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2e14 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec2e17 jmp 0x11ec2e38 */
  goto L_11ec2e38;
L_11ec2e19:;
  /* 11ec2e19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec2e1c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec2e1f add edx, 0x11ee153c */
  { uint32_t _a=(EDX),_b=(0x11ee153cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2e25 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ec2e28 jmp 0x11ec2e38 */
  goto L_11ec2e38;
L_11ec2e2a:;
  /* 11ec2e2a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec2e2d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec2e30 add eax, 0x11ee1544 */
  { uint32_t _a=(EAX),_b=(0x11ee1544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2e35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ec2e38:;
  /* 11ec2e38 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2e3c je 0x11ec2e44 */
  if (C.zf) goto L_11ec2e44;
  /* 11ec2e3e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2e42 jge 0x11ec2e46 */
  if ((C.sf==C.of)) goto L_11ec2e46;
L_11ec2e44:;
  /* 11ec2e44 jmp 0x11ec2e98 */
  goto L_11ec2e98;
L_11ec2e46:;
  /* 11ec2e46 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec2e49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2e4c push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2e4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec2e50 push edx */
  push32((uint32_t)(EDX));
  /* 11ec2e51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec2e54 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2e55 call 0x11eb9c50 */
  push32(0x11ec2e5au); f_11eb9c50();
  /* 11ec2e5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2e5d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec2e60 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2e63 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11ec2e67 mov eax, 1 */
  EAX = (0x1u);
  /* 11ec2e6c jmp 0x11ec2eae */
  goto L_11ec2eae;
L_11ec2e6e:;
  /* 11ec2e6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec2e71 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec2e74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2e77 cmp eax, dword ptr [edx + 0x11ee1520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11ee1520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2e7d jae 0x11ec2e8a */
  if (!C.cf) goto L_11ec2e8a;
  /* 11ec2e7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec2e82 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2e85 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ec2e88 jmp 0x11ec2e93 */
  goto L_11ec2e93;
L_11ec2e8a:;
  /* 11ec2e8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec2e8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2e90 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ec2e93:;
  /* 11ec2e93 jmp 0x11ec2d4b */
  goto L_11ec2d4b;
L_11ec2e98:;
  /* 11ec2e98 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec2e9b push eax */
  push32((uint32_t)(EAX));
  /* 11ec2e9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec2e9f push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2ea0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec2ea3 push edx */
  push32((uint32_t)(EDX));
  /* 11ec2ea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2ea7 push eax */
  push32((uint32_t)(EAX));
  /* 11ec2ea8 call dword ptr [0x11ee52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52f4))), 0x11ec2eaeu);
L_11ec2eae:;
  /* 11ec2eae mov esp, ebp */
  ESP = (EBP);
  /* 11ec2eb0 pop ebp */
  EBP = (pop32());
  /* 11ec2eb1 ret 0x10 */
  ESPCHK(0x11ec2d30u, _esp0);
  ESP += 20; return;
}

/* FUN_10012ec0 @ 0x11ec2ec0 (118 bytes, 42 insns) */
void f_11ec2ec0(void) {
  FTRACE(0x11ec2ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2ec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2ec6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ec2ecd:;
  /* 11ec2ecd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2ed0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ec2ed2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11ec2ed5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ec2ed9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2edc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2edf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ec2ee2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec2ee4 je 0x11ec2f2f */
  if (C.zf) goto L_11ec2f2f;
  /* 11ec2ee6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ec2eea cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2eed jl 0x11ec2f02 */
  if ((C.sf!=C.of)) goto L_11ec2f02;
  /* 11ec2eef movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ec2ef3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2ef6 jg 0x11ec2f02 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec2f02;
  /* 11ec2ef8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ec2efb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ec2efd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11ec2f00 jmp 0x11ec2f1c */
  goto L_11ec2f1c;
L_11ec2f02:;
  /* 11ec2f02 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ec2f06 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2f09 jl 0x11ec2f1c */
  if ((C.sf!=C.of)) goto L_11ec2f1c;
  /* 11ec2f0b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ec2f0f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2f12 jg 0x11ec2f1c */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec2f1c;
  /* 11ec2f14 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ec2f17 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ec2f19 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11ec2f1c:;
  /* 11ec2f1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec2f1f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ec2f22 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11ec2f26 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11ec2f2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec2f2d jmp 0x11ec2ecd */
  goto L_11ec2ecd;
L_11ec2f2f:;
  /* 11ec2f2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec2f32 mov esp, ebp */
  ESP = (EBP);
  /* 11ec2f34 pop ebp */
  EBP = (pop32());
  /* 11ec2f35 ret  */
  ESPCHK(0x11ec2ec0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11ec2f40 (101 bytes, 36 insns) */
void f_11ec2f40(void) {
  FTRACE(0x11ec2f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2f41 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2f43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec2f46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ec2f4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2f50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ec2f52 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11ec2f55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2f58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2f5b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11ec2f5e:;
  /* 11ec2f5e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11ec2f62 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2f65 jl 0x11ec2f70 */
  if ((C.sf!=C.of)) goto L_11ec2f70;
  /* 11ec2f67 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11ec2f6b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2f6e jle 0x11ec2f82 */
  if ((C.zf||C.sf!=C.of)) goto L_11ec2f82;
L_11ec2f70:;
  /* 11ec2f70 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11ec2f74 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2f77 jl 0x11ec2f9e */
  if ((C.sf!=C.of)) goto L_11ec2f9e;
  /* 11ec2f79 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11ec2f7d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2f80 jg 0x11ec2f9e */
  if ((!C.zf&&C.sf==C.of)) goto L_11ec2f9e;
L_11ec2f82:;
  /* 11ec2f82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec2f85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2f88 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec2f8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2f8e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ec2f90 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11ec2f93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2f96 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec2f99 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ec2f9c jmp 0x11ec2f5e */
  goto L_11ec2f5e;
L_11ec2f9e:;
  /* 11ec2f9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec2fa1 mov esp, ebp */
  ESP = (EBP);
  /* 11ec2fa3 pop ebp */
  EBP = (pop32());
  /* 11ec2fa4 ret  */
  ESPCHK(0x11ec2f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fb0 @ 0x11ec2fb0 (122 bytes, 39 insns) */
void f_11ec2fb0(void) {
  FTRACE(0x11ec2fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec2fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec2fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec2fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec2fb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2fb7 cmp eax, dword ptr [0x11ee429c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee429c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec2fbd jae 0x11ec2fe1 */
  if (!C.cf) goto L_11ec2fe1;
  /* 11ec2fbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2fc2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ec2fc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2fc8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ec2fcb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec2fce mov eax, dword ptr [ecx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11ee4160)));
  /* 11ec2fd5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ec2fda and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec2fdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec2fdf jne 0x11ec2ffc */
  if (!C.zf) goto L_11ec2ffc;
L_11ec2fe1:;
  /* 11ec2fe1 call 0x11ebe300 */
  push32(0x11ec2fe6u); f_11ebe300();
  /* 11ec2fe6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ec2fec call 0x11ebe310 */
  push32(0x11ec2ff1u); f_11ebe310();
  /* 11ec2ff1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ec2ff7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec2ffa jmp 0x11ec3026 */
  goto L_11ec3026;
L_11ec2ffc:;
  /* 11ec2ffc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec2fff push edx */
  push32((uint32_t)(EDX));
  /* 11ec3000 call 0x11ebfb20 */
  push32(0x11ec3005u); f_11ebfb20();
  /* 11ec3005 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3008 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec300b push eax */
  push32((uint32_t)(EAX));
  /* 11ec300c call 0x11ec3030 */
  push32(0x11ec3011u); f_11ec3030();
  /* 11ec3011 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3014 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec3017 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec301a push ecx */
  push32((uint32_t)(ECX));
  /* 11ec301b call 0x11ebfbb0 */
  push32(0x11ec3020u); f_11ebfbb0();
  /* 11ec3020 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3023 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ec3026:;
  /* 11ec3026 mov esp, ebp */
  ESP = (EBP);
  /* 11ec3028 pop ebp */
  EBP = (pop32());
  /* 11ec3029 ret  */
  ESPCHK(0x11ec2fb0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11ec3030 (170 bytes, 59 insns) */
void f_11ec3030(void) {
  FTRACE(0x11ec3030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec3030 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec3031 mov ebp, esp */
  EBP = (ESP);
  /* 11ec3033 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3034 push esi */
  push32((uint32_t)(ESI));
  /* 11ec3035 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3038 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3039 call 0x11ebf9a0 */
  push32(0x11ec303eu); f_11ebf9a0();
  /* 11ec303e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3041 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3044 je 0x11ec3083 */
  if (C.zf) goto L_11ec3083;
  /* 11ec3046 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec304a je 0x11ec3052 */
  if (C.zf) goto L_11ec3052;
  /* 11ec304c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3050 jne 0x11ec306c */
  if (!C.zf) goto L_11ec306c;
L_11ec3052:;
  /* 11ec3052 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ec3054 call 0x11ebf9a0 */
  push32(0x11ec3059u); f_11ebf9a0();
  /* 11ec3059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec305c mov esi, eax */
  ESI = (EAX);
  /* 11ec305e push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec3060 call 0x11ebf9a0 */
  push32(0x11ec3065u); f_11ebf9a0();
  /* 11ec3065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3068 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec306a je 0x11ec3083 */
  if (C.zf) goto L_11ec3083;
L_11ec306c:;
  /* 11ec306c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec306f push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3070 call 0x11ebf9a0 */
  push32(0x11ec3075u); f_11ebf9a0();
  /* 11ec3075 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3078 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3079 call dword ptr [0x11ee52e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52e4))), 0x11ec307fu);
  /* 11ec307f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec3081 je 0x11ec308c */
  if (C.zf) goto L_11ec308c;
L_11ec3083:;
  /* 11ec3083 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ec308a jmp 0x11ec3095 */
  goto L_11ec3095;
L_11ec308c:;
  /* 11ec308c call dword ptr [0x11ee53b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53b4))), 0x11ec3092u);
  /* 11ec3092 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ec3095:;
  /* 11ec3095 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3098 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3099 call 0x11ebf8c0 */
  push32(0x11ec309eu); f_11ebf8c0();
  /* 11ec309e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec30a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec30a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ec30a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec30aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ec30ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ec30b0 mov edx, dword ptr [eax*4 + 0x11ee4160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11ee4160)));
  /* 11ec30b7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11ec30bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec30c0 je 0x11ec30d3 */
  if (C.zf) goto L_11ec30d3;
  /* 11ec30c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec30c5 push eax */
  push32((uint32_t)(EAX));
  /* 11ec30c6 call 0x11ebe260 */
  push32(0x11ec30cbu); f_11ebe260();
  /* 11ec30cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec30ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ec30d1 jmp 0x11ec30d5 */
  goto L_11ec30d5;
L_11ec30d3:;
  /* 11ec30d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ec30d5:;
  /* 11ec30d5 pop esi */
  ESI = (pop32());
  /* 11ec30d6 mov esp, ebp */
  ESP = (EBP);
  /* 11ec30d8 pop ebp */
  EBP = (pop32());
  /* 11ec30d9 ret  */
  ESPCHK(0x11ec3030u, _esp0);
  ESP += 4; return;
}

/* FUN_100130e0 @ 0x11ec30e0 (146 bytes, 52 insns) */
void f_11ec30e0(void) {
  FTRACE(0x11ec30e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec30e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec30e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec30e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11ec30e4 push esi */
  push32((uint32_t)(ESI));
  /* 11ec30e5 push edi */
  push32((uint32_t)(EDI));
L_11ec30e6:;
  /* 11ec30e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec30ea jne 0x11ec310a */
  if (!C.zf) goto L_11ec310a;
  /* 11ec30ec push 0x11ede3d0 */
  push32((uint32_t)(0x11ede3d0u));
  /* 11ec30f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec30f3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11ec30f5 push 0x11edea98 */
  push32((uint32_t)(0x11edea98u));
  /* 11ec30fa push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec30fc call 0x11eb54f0 */
  push32(0x11ec3101u); f_11eb54f0();
  /* 11ec3101 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3104 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3107 jne 0x11ec310a */
  if (!C.zf) goto L_11ec310a;
  /* 11ec3109 int3  */
  x86_unimpl("int3 @ 0x11ec3109");
L_11ec310a:;
  /* 11ec310a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ec310c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ec310e jne 0x11ec30e6 */
  if (!C.zf) goto L_11ec30e6;
  /* 11ec3110 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3113 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ec3116 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec311c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ec311e je 0x11ec316d */
  if (C.zf) goto L_11ec316d;
  /* 11ec3120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3123 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ec3126 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ec3129 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ec312b je 0x11ec316d */
  if (C.zf) goto L_11ec316d;
  /* 11ec312d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ec312f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3132 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ec3135 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3136 call 0x11eb6ec0 */
  push32(0x11ec313bu); f_11eb6ec0();
  /* 11ec313b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec313e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3141 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ec3144 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11ec314a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec314d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11ec3150 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3153 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11ec3159 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec315c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11ec3163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3166 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11ec316d:;
  /* 11ec316d pop edi */
  EDI = (pop32());
  /* 11ec316e pop esi */
  ESI = (pop32());
  /* 11ec316f pop ebx */
  EBX = (pop32());
  /* 11ec3170 pop ebp */
  EBP = (pop32());
  /* 11ec3171 ret  */
  ESPCHK(0x11ec30e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013180 @ 0x11ec3180 (289 bytes, 97 insns) */
void f_11ec3180(void) {
  FTRACE(0x11ec3180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec3180 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec3181 mov ebp, esp */
  EBP = (ESP);
  /* 11ec3183 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec3186 push esi */
  push32((uint32_t)(ESI));
  /* 11ec3187 mov eax, dword ptr [0x11ee1c98] */
  EAX = (r32((uint32_t)(0x11ee1c98)));
  /* 11ec318c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec318f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ec3196 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ec319d jmp 0x11ec31a8 */
  goto L_11ec31a8;
L_11ec319f:;
  /* 11ec319f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec31a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec31a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ec31a8:;
  /* 11ec31a8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec31ac jae 0x11ec31e1 */
  if (!C.cf) goto L_11ec31e1;
  /* 11ec31ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec31b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec31b4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11ec31b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec31b8 call 0x11eb9260 */
  push32(0x11ec31bdu); f_11eb9260();
  /* 11ec31bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec31c0 mov esi, eax */
  ESI = (EAX);
  /* 11ec31c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec31c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec31c8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11ec31cc push ecx */
  push32((uint32_t)(ECX));
  /* 11ec31cd call 0x11eb9260 */
  push32(0x11ec31d2u); f_11eb9260();
  /* 11ec31d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec31d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec31d8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11ec31dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ec31df jmp 0x11ec319f */
  goto L_11ec319f;
L_11ec31e1:;
  /* 11ec31e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec31e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec31e7 push eax */
  push32((uint32_t)(EAX));
  /* 11ec31e8 call 0x11eb6410 */
  push32(0x11ec31edu); f_11eb6410();
  /* 11ec31ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec31f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec31f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec31f7 je 0x11ec3299 */
  if (C.zf) goto L_11ec3299;
  /* 11ec31fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec3200 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ec3203 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ec320a jmp 0x11ec3215 */
  goto L_11ec3215;
L_11ec320c:;
  /* 11ec320c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec320f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3212 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ec3215:;
  /* 11ec3215 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3219 jae 0x11ec328a */
  if (!C.cf) goto L_11ec328a;
  /* 11ec321b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec321e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11ec3221 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3224 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3227 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ec322a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec322d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3230 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11ec3233 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3234 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3237 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3238 call 0x11eb93e0 */
  push32(0x11ec323du); f_11eb93e0();
  /* 11ec323d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3240 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3241 call 0x11eb9260 */
  push32(0x11ec3246u); f_11eb9260();
  /* 11ec3246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3249 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec324c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec324e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ec3251 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3254 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11ec3257 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec325a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec325d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ec3260 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec3263 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3266 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11ec326a push eax */
  push32((uint32_t)(EAX));
  /* 11ec326b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec326e push ecx */
  push32((uint32_t)(ECX));
  /* 11ec326f call 0x11eb93e0 */
  push32(0x11ec3274u); f_11eb93e0();
  /* 11ec3274 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3277 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3278 call 0x11eb9260 */
  push32(0x11ec327du); f_11eb9260();
  /* 11ec327d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3280 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3283 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3285 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ec3288 jmp 0x11ec320c */
  goto L_11ec320c;
L_11ec328a:;
  /* 11ec328a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec328d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11ec3290 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3293 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3296 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11ec3299:;
  /* 11ec3299 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec329c pop esi */
  ESI = (pop32());
  /* 11ec329d mov esp, ebp */
  ESP = (EBP);
  /* 11ec329f pop ebp */
  EBP = (pop32());
  /* 11ec32a0 ret  */
  ESPCHK(0x11ec3180u, _esp0);
  ESP += 4; return;
}

/* FUN_100132b0 @ 0x11ec32b0 (291 bytes, 97 insns) */
void f_11ec32b0(void) {
  FTRACE(0x11ec32b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec32b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec32b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec32b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec32b6 push esi */
  push32((uint32_t)(ESI));
  /* 11ec32b7 mov eax, dword ptr [0x11ee1c98] */
  EAX = (r32((uint32_t)(0x11ee1c98)));
  /* 11ec32bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec32bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ec32c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ec32cd jmp 0x11ec32d8 */
  goto L_11ec32d8;
L_11ec32cf:;
  /* 11ec32cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec32d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec32d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ec32d8:;
  /* 11ec32d8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec32dc jae 0x11ec3312 */
  if (!C.cf) goto L_11ec3312;
  /* 11ec32de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec32e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec32e4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11ec32e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec32e9 call 0x11eb9260 */
  push32(0x11ec32eeu); f_11eb9260();
  /* 11ec32ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec32f1 mov esi, eax */
  ESI = (EAX);
  /* 11ec32f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec32f6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec32f9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11ec32fd push ecx */
  push32((uint32_t)(ECX));
  /* 11ec32fe call 0x11eb9260 */
  push32(0x11ec3303u); f_11eb9260();
  /* 11ec3303 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3306 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3309 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11ec330d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ec3310 jmp 0x11ec32cf */
  goto L_11ec32cf;
L_11ec3312:;
  /* 11ec3312 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec3315 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3318 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3319 call 0x11eb6410 */
  push32(0x11ec331eu); f_11eb6410();
  /* 11ec331e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3321 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec3324 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3328 je 0x11ec33cb */
  if (C.zf) goto L_11ec33cb;
  /* 11ec332e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec3331 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ec3334 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ec333b jmp 0x11ec3346 */
  goto L_11ec3346;
L_11ec333d:;
  /* 11ec333d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec3340 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3343 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ec3346:;
  /* 11ec3346 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec334a jae 0x11ec33bc */
  if (!C.cf) goto L_11ec33bc;
  /* 11ec334c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec334f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11ec3352 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3355 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3358 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ec335b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec335e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3361 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11ec3365 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3366 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3369 push edx */
  push32((uint32_t)(EDX));
  /* 11ec336a call 0x11eb93e0 */
  push32(0x11ec336fu); f_11eb93e0();
  /* 11ec336f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3372 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3373 call 0x11eb9260 */
  push32(0x11ec3378u); f_11eb9260();
  /* 11ec3378 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec337b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec337e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3380 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ec3383 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3386 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11ec3389 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec338c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec338f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ec3392 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec3395 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3398 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11ec339c push eax */
  push32((uint32_t)(EAX));
  /* 11ec339d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec33a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec33a1 call 0x11eb93e0 */
  push32(0x11ec33a6u); f_11eb93e0();
  /* 11ec33a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec33a9 push eax */
  push32((uint32_t)(EAX));
  /* 11ec33aa call 0x11eb9260 */
  push32(0x11ec33afu); f_11eb9260();
  /* 11ec33af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec33b2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec33b5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec33b7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ec33ba jmp 0x11ec333d */
  goto L_11ec333d;
L_11ec33bc:;
  /* 11ec33bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec33bf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11ec33c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec33c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec33c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11ec33cb:;
  /* 11ec33cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec33ce pop esi */
  ESI = (pop32());
  /* 11ec33cf mov esp, ebp */
  ESP = (EBP);
  /* 11ec33d1 pop ebp */
  EBP = (pop32());
  /* 11ec33d2 ret  */
  ESPCHK(0x11ec32b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133e0 @ 0x11ec33e0 (878 bytes, 273 insns) */
void f_11ec33e0(void) {
  FTRACE(0x11ec33e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec33e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec33e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ec33e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ec33e6 push esi */
  push32((uint32_t)(ESI));
  /* 11ec33e7 mov eax, dword ptr [0x11ee1c98] */
  EAX = (r32((uint32_t)(0x11ee1c98)));
  /* 11ec33ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ec33ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ec33f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ec33fd jmp 0x11ec3408 */
  goto L_11ec3408;
L_11ec33ff:;
  /* 11ec33ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec3402 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3405 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ec3408:;
  /* 11ec3408 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec340c jae 0x11ec3441 */
  if (!C.cf) goto L_11ec3441;
  /* 11ec340e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec3411 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3414 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11ec3417 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3418 call 0x11eb9260 */
  push32(0x11ec341du); f_11eb9260();
  /* 11ec341d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3420 mov esi, eax */
  ESI = (EAX);
  /* 11ec3422 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec3425 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3428 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11ec342c push ecx */
  push32((uint32_t)(ECX));
  /* 11ec342d call 0x11eb9260 */
  push32(0x11ec3432u); f_11eb9260();
  /* 11ec3432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3435 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3438 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11ec343c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ec343f jmp 0x11ec33ff */
  goto L_11ec33ff;
L_11ec3441:;
  /* 11ec3441 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ec3448 jmp 0x11ec3453 */
  goto L_11ec3453;
L_11ec344a:;
  /* 11ec344a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec344d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3450 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11ec3453:;
  /* 11ec3453 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3457 jae 0x11ec348d */
  if (!C.cf) goto L_11ec348d;
  /* 11ec3459 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec345c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec345f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11ec3463 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3464 call 0x11eb9260 */
  push32(0x11ec3469u); f_11eb9260();
  /* 11ec3469 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec346c mov esi, eax */
  ESI = (EAX);
  /* 11ec346e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec3471 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3474 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11ec3478 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3479 call 0x11eb9260 */
  push32(0x11ec347eu); f_11eb9260();
  /* 11ec347e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3481 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3484 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11ec3488 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ec348b jmp 0x11ec344a */
  goto L_11ec344a;
L_11ec348d:;
  /* 11ec348d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3490 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11ec3496 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3497 call 0x11eb9260 */
  push32(0x11ec349cu); f_11eb9260();
  /* 11ec349c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec349f mov esi, eax */
  ESI = (EAX);
  /* 11ec34a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec34a4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11ec34aa push edx */
  push32((uint32_t)(EDX));
  /* 11ec34ab call 0x11eb9260 */
  push32(0x11ec34b0u); f_11eb9260();
  /* 11ec34b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec34b3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec34b6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11ec34ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec34bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec34c0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11ec34c6 push edx */
  push32((uint32_t)(EDX));
  /* 11ec34c7 call 0x11eb9260 */
  push32(0x11ec34ccu); f_11eb9260();
  /* 11ec34cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec34cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec34d2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11ec34d6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ec34d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec34dc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11ec34e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec34e3 call 0x11eb9260 */
  push32(0x11ec34e8u); f_11eb9260();
  /* 11ec34e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec34eb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec34ee lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11ec34f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ec34f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec34f8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11ec34fe push edx */
  push32((uint32_t)(EDX));
  /* 11ec34ff call 0x11eb9260 */
  push32(0x11ec3504u); f_11eb9260();
  /* 11ec3504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3507 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec350a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11ec350e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ec3511 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ec3514 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3519 push eax */
  push32((uint32_t)(EAX));
  /* 11ec351a call 0x11eb6410 */
  push32(0x11ec351fu); f_11eb6410();
  /* 11ec351f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3522 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ec3525 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec3529 je 0x11ec3746 */
  if (C.zf) goto L_11ec3746;
  /* 11ec352f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec3532 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ec3535 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec3538 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec353e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ec3541 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11ec3546 mov eax, dword ptr [0x11ee1c98] */
  EAX = (r32((uint32_t)(0x11ee1c98)));
  /* 11ec354b push eax */
  push32((uint32_t)(EAX));
  /* 11ec354c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec354f push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3550 call 0x11ebcd10 */
  push32(0x11ec3555u); f_11ebcd10();
  /* 11ec3555 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3558 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ec355f jmp 0x11ec356a */
  goto L_11ec356a;
L_11ec3561:;
  /* 11ec3561 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec3564 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3567 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ec356a:;
  /* 11ec356a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec356e jae 0x11ec35de */
  if (!C.cf) goto L_11ec35de;
  /* 11ec3570 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec3573 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec3576 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3579 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11ec357c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec357f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3582 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ec3585 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3586 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3589 push eax */
  push32((uint32_t)(EAX));
  /* 11ec358a call 0x11eb93e0 */
  push32(0x11ec358fu); f_11eb93e0();
  /* 11ec358f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3592 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3593 call 0x11eb9260 */
  push32(0x11ec3598u); f_11eb9260();
  /* 11ec3598 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec359b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec359e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11ec35a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ec35a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec35a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec35ab mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec35ae mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11ec35b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec35b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec35b8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11ec35bc push edx */
  push32((uint32_t)(EDX));
  /* 11ec35bd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec35c0 push eax */
  push32((uint32_t)(EAX));
  /* 11ec35c1 call 0x11eb93e0 */
  push32(0x11ec35c6u); f_11eb93e0();
  /* 11ec35c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec35c9 push eax */
  push32((uint32_t)(EAX));
  /* 11ec35ca call 0x11eb9260 */
  push32(0x11ec35cfu); f_11eb9260();
  /* 11ec35cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec35d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec35d5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11ec35d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ec35dc jmp 0x11ec3561 */
  goto L_11ec3561;
L_11ec35de:;
  /* 11ec35de mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ec35e5 jmp 0x11ec35f0 */
  goto L_11ec35f0;
L_11ec35e7:;
  /* 11ec35e7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec35ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec35ed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11ec35f0:;
  /* 11ec35f0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ec35f4 jae 0x11ec3666 */
  if (!C.cf) goto L_11ec3666;
  /* 11ec35f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec35f9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec35fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec35ff mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11ec3603 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec3606 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3609 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11ec360d push eax */
  push32((uint32_t)(EAX));
  /* 11ec360e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3611 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3612 call 0x11eb93e0 */
  push32(0x11ec3617u); f_11eb93e0();
  /* 11ec3617 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec361a push eax */
  push32((uint32_t)(EAX));
  /* 11ec361b call 0x11eb9260 */
  push32(0x11ec3620u); f_11eb9260();
  /* 11ec3620 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3623 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3626 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11ec362a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ec362d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec3630 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec3633 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3636 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11ec363a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ec363d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3640 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11ec3644 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3645 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3648 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec3649 call 0x11eb93e0 */
  push32(0x11ec364eu); f_11eb93e0();
  /* 11ec364e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3651 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3652 call 0x11eb9260 */
  push32(0x11ec3657u); f_11eb9260();
  /* 11ec3657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec365a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec365d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11ec3661 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ec3664 jmp 0x11ec35e7 */
  goto L_11ec35e7;
L_11ec3666:;
  /* 11ec3666 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec3669 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec366c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11ec3672 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3675 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11ec367b push ecx */
  push32((uint32_t)(ECX));
  /* 11ec367c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec367f push edx */
  push32((uint32_t)(EDX));
  /* 11ec3680 call 0x11eb93e0 */
  push32(0x11ec3685u); f_11eb93e0();
  /* 11ec3685 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3688 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3689 call 0x11eb9260 */
  push32(0x11ec368eu); f_11eb9260();
  /* 11ec368e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3691 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3694 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11ec3698 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ec369b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec369e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec36a1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11ec36a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec36aa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11ec36b0 push eax */
  push32((uint32_t)(EAX));
  /* 11ec36b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec36b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec36b5 call 0x11eb93e0 */
  push32(0x11ec36bau); f_11eb93e0();
  /* 11ec36ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec36bd push eax */
  push32((uint32_t)(EAX));
  /* 11ec36be call 0x11eb9260 */
  push32(0x11ec36c3u); f_11eb9260();
  /* 11ec36c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec36c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec36c9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11ec36cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ec36d0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec36d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec36d6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11ec36dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec36df mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11ec36e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ec36e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec36e9 push edx */
  push32((uint32_t)(EDX));
  /* 11ec36ea call 0x11eb93e0 */
  push32(0x11ec36efu); f_11eb93e0();
  /* 11ec36ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec36f2 push eax */
  push32((uint32_t)(EAX));
  /* 11ec36f3 call 0x11eb9260 */
  push32(0x11ec36f8u); f_11eb9260();
  /* 11ec36f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec36fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec36fe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11ec3702 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ec3705 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec3708 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec370b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11ec3711 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ec3714 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11ec371a push eax */
  push32((uint32_t)(EAX));
  /* 11ec371b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec371e push ecx */
  push32((uint32_t)(ECX));
  /* 11ec371f call 0x11eb93e0 */
  push32(0x11ec3724u); f_11eb93e0();
  /* 11ec3724 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3727 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3728 call 0x11eb9260 */
  push32(0x11ec372du); f_11eb9260();
  /* 11ec372d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec3730 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3733 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11ec3737 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ec373a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ec373d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ec3740 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11ec3746:;
  /* 11ec3746 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ec3749 pop esi */
  ESI = (pop32());
  /* 11ec374a mov esp, ebp */
  ESP = (EBP);
  /* 11ec374c pop ebp */
  EBP = (pop32());
  /* 11ec374d ret  */
  ESPCHK(0x11ec33e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013750 @ 0x11ec3750 (31 bytes, 15 insns) */
void f_11ec3750(void) {
  FTRACE(0x11ec3750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ec3750 push ebp */
  push32((uint32_t)(EBP));
  /* 11ec3751 mov ebp, esp */
  EBP = (ESP);
  /* 11ec3753 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ec3755 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ec3758 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3759 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ec375c push ecx */
  push32((uint32_t)(ECX));
  /* 11ec375d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ec3760 push edx */
  push32((uint32_t)(EDX));
  /* 11ec3761 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ec3764 push eax */
  push32((uint32_t)(EAX));
  /* 11ec3765 call 0x11ec3770 */
  push32(0x11ec376au); f_11ec3770();
  /* 11ec376a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ec376d pop ebp */
  EBP = (pop32());
  /* 11ec376e ret  */
  ESPCHK(0x11ec3750u, _esp0);
  ESP += 4; return;
}

